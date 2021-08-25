
#include <iostream>
using namespace std;
int conta(char s1[], char s2[]){
	int c=0;
	for(int i1=0; s1[i1]!='\0'; i1++){
		for(int i2=0; s2[i2]!='\0'; i2++){
			if(s1[i1]==s2[i2]){
				c++;
				break;
			}
		}
	}
	return c;
}
int main(){
	char s1[50], s2[50];
	cout<<"Inserire la prima stringa: ";
	cin>>s1;
	cout<<"Inserire la seconda stringa: ";
	cin>>s2;
	cout<<"Nella seconda stringa sono presenti "<<conta(s1, s2)<<" caratteri della prima";
	return 0;
}
