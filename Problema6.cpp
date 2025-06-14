#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
	srand(time(0));
	int usuario, PC,
	int Vic_usuario=0, Vic_PC=0;
	
	cout<< "1. Piedra "<<endl;
	cout<< "2. Papel "<<endl;
	cout<< "3. Tijera "<<endl;
	cin>> usuario;
	
	system("cls");
	PC= rand()%3+1;
	switch (usuario){
		case 1: 
		    if (PC==1){
			cout<< "Empate, vuelve a jugar"  << endl;
			cout<< "Puntaje del usuario" << Vic_usuario<< endl;
			cout<< "Puntaje de la PC" << Vic_PC<< endl;
		} else if (PC==2){
			cout<< "Punto para la PC" << endl;
			cout<< "Puntaje del usuario" << Vic_usuario<< endl;
			cout<< "Puntaje de la PC" << Vic_PC++<< endl;
		} else {
			cout<< "Punto para el usuario" << endl;
			cout<< "Puntaje del usuario" << Vic_usuario++ << endl;
			cout<< "Puntaje de la PC" << Vic_PC<< endl;
		}
		    break;
		    
		case 2: 
		    if (PC==1){
			cout<< "Punto para el usuario" << endl;
			cout<< "Puntaje del usuario" << Vic_usuario++ << endl;
			cout<< "Puntaje de la PC" << Vic_PC<< endl;
			
		
	
}