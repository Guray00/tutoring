#include <iostream>
#include <string.h>
#include <fstream>
#include <iomanip>

using namespace std;
#define MAX_CARAT 25
#define MAX_VOTI   5
#define MATERIE   20


struct voti
{
    char materia[MAX_CARAT];
    int  val[MAX_VOTI];
    int  assenze;
};

void VisualizzaDati(voti [], int);
bool ModificaDati(voti [], int, char [], int, int);

bool CaricaDati(voti [], int &, char []);
void SalvaDati(voti [], int , char []);

void ReportMaterieIns(voti [], int , char []);
float CalcolaMedia(int []);



int main()
{

    voti studenteA[MATERIE];
    int dim = 0;
    char scelta;
    char mat[MAX_CARAT];
    int pos, voto;
    bool res;
    char nome_file[MAX_CARAT] = "Voti.txt";
    char nome_file_out[MAX_CARAT] = "MatIns.txt";

    if(CaricaDati(studenteA, dim, nome_file))
    {
        do
        {
        cout<<endl;
        cout<<"Selezionare la funzione desiderata:"<<endl;
        cout<<"[1] Visualizzazione prospetto studente"<<endl;
        cout<<"[2] Correzione voto"<<endl;
        cout<<"[3] Salvataggio dati"<<endl;
        cout<<"[4] Report materie insufficienti"<<endl;
        cout<<"[5] Report materie insufficienti con media pesata"<<endl;
        cout<<"[x] Terminare il programma"<<endl;
        cin>>scelta;

        switch(scelta)
        {
        case '1':
            VisualizzaDati(studenteA, dim);
            break;
        case '2':
            cout<<"Inserisci materia: ";
            cin>>mat;
            cout<<"Indicare la posizione del voto da modificare (da 1 a "<<MAX_VOTI<<"): ";
            cin>>pos;
            cout<<"indicare il nuovo voto da inserire: ";
            cin>>voto;
            res = ModificaDati(studenteA, dim, mat, pos, voto);
            if(!res)
            {
                cout<<"Operazione non eseguita: materia non presente, posizione voto non valida o voto non valido"<<endl;
            }
            else
            {
                cout<<"Operazione eseguita con successo"<<endl;
                VisualizzaDati(studenteA, dim);
            }
            break;
        case '3':
            SalvaDati(studenteA, dim , nome_file);
            break;
        case '4':
            ReportMaterieIns(studenteA, dim , nome_file_out);

            break;

        default:
            cout<<"Funzione selezionata inesistente"<<endl;

        }
        }while(scelta!='x');
    }
    else
    {
        cout<<"Impossibile aprire il file "<<nome_file<<endl;
    }


    return 0;
}



void VisualizzaDati(voti s[], int n)
{
    int i,j;

    cout<<left<<setw(18)<<"MATERIA"<<setw(25)<<"VOTI"<<setw(10)<<"ASSENZE"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<setw(18)<<s[i].materia;
        for(j=0;j<MAX_VOTI;j++)
            cout<<setw(5)<<s[i].val[j];
        cout<<setw(10)<<s[i].assenze<<endl;
    }
}

bool ModificaDati(voti s[], int n, char mat[], int pos, int voto)
{
    int i;
    bool trovato = false;

    for(i=0;i<n;i++)
    {
        if(strcmp(s[i].materia,mat)==0)
        {
            if( (pos>=1) && (pos<=MAX_VOTI) && (voto>=20) && (voto<=100))
            {
                trovato = true;
                s[i].val[pos-1] = voto;
                break;
            }
        }
    }
    return trovato;
}


bool CaricaDati(voti s[], int &n, char nome_file[])
{
    fstream fin;
    int i;

    fin.open(nome_file, ios::in);

    n = 0;

    if(!fin)
    {
        return false;
    }
    else
    {
        while(!fin.eof())
        {
            fin>>s[n].materia;
            for(i=0;i<MAX_VOTI;i++)
            {
                fin>>s[n].val[i];
            }
            fin>>s[n].assenze;
            n++;
        }
        fin.close();
        return true;
    }
}

void SalvaDati(voti s[], int n, char nome_file[])
{
    fstream fout;
    int i,j;

    fout.open(nome_file, ios::out);

    for(i=0;i<n;i++)
    {
        fout<<s[i].materia<<" ";
        for(j=0;j<MAX_VOTI;j++)
        {
            fout<<s[i].val[j]<<" ";
        }
        fout<<s[i].assenze;
        if(i<(n-1))
        {
            fout<<endl;
        }
    }
    fout.close();
}


//

void ReportMaterieIns(voti s[], int n, char nome_file_out[])
{
    fstream fout;
    int i;
    float media;

    fout.open(nome_file_out, ios::out);

    for(i=0;i<n;i++)
    {
        media = CalcolaMedia(s[i].val);
        if(media<60)
        {
            fout<<s[i].materia<<" "<<media<<endl;
        }
    }
    fout.close();

}



float CalcolaMedia(int v[])
{
    int i;
    int somma = 0;

    for(i=0;i<MAX_VOTI;i++)
    {
        somma = somma + v[i];
    }

    return (float) somma/MAX_VOTI;
}
