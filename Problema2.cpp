#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
	srand (time(0));
	int c, li;
	
	cout<< "Ingrese la cantidad de numeros que desee" << endl;
	cin >> c;
	cout<< "Ingrese el limite " << endl;
	cin >> li;
	
	cout<< "Los numeros aleatorios son: " <<endl;
	for (int i=0; i<c; i++){
		cout<< rand()%li+ 1 << " " ;
	}
	return 0;
} 