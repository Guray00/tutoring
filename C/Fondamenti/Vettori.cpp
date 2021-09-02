
#include <iostream>
using namespace std;


// https://www.tutorialspoint.com/cplusplus/cpp_passing_arrays_to_functions.htm

int* funzione(int a[5]){
	return a;
}


int main(){

	int a[5] = {1, 2, 3, 4, 5};

	cout<<a[3]<<endl;

	int* b = funzione(a);

	cout<<b[3]<<endl;

	return 0;
}