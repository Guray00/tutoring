
#include <iostream>
#include <iomanip>
using namespace std;

int contavocali(char v1[],int risp){
	int v=0, c=0;
	for(int i=0;v1[i]!='\0';i++){
		if(v1[i]=='a' || v1[i]=='e' || v1[i]=='i' || v1[i]=='o' || v1[i]=='u'  )
			v++;
		else c++;
	}
	if(risp==1)
		return v;
	else return c;
}

int main (){
	char v1[100];
	int v=0, c=0,risp;
	do{
	cout<<setw(25)<<setfill('-')<<"\n"
		<<"|"<<setw(14)<<setfill(' ')<<"1) VOCALI"<<setw(9)<<setfill(' ')<<"|"<<endl
		<<"|"<<setw(18)<<setfill(' ')<<"2) CONSONANTI"<<setw(5)<<setfill(' ')<<"|"<<endl
		<<"|"<<setw(12)<<setfill(' ')<<"0) ESCI"<<setw(11)<<setfill(' ')<<"|"<<endl
		<<setw(25)<<setfill('-')<<"\n";
	cout<<"inserisci una scelta\n";
	cin>>risp;
		
	if(risp==0)
		break;	
		
	cout<<"inserisci la stringa\n";
	cin>>v1;
	
	if(risp==1)
	cout<<"le vocali sono: "<<contavocali(v1,risp)<<endl;
	else
	cout<<"le consonanti sono: "<<contavocali(v1,risp)<<endl;
	}while(risp!=0);
	return 0;
}

