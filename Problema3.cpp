#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int Adyacente, Opuesto;
	cout<< "Ingrese el lado adyacente" << endl;
	cin>> Adyacente;
	cout<< "Ingrese el lado opuesto" << endl;
	cin>> Opuesto;
	cout<< "La hipotenusa es: " <<sqrt(pow(Adyacente,2)+pow(Opuesto,2))<<endl;
	
	return 0;
}