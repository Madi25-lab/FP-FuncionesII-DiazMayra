#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
	srand(time(0));
    int usuario;
    int PC;
    int Vic_usuario=0;
	int Vic_PC=0;
	
	do{
	cout<< "START GAME"<< endl;
	cout<< "OPCIONES " <<endl;
	cout<< "1. Piedra "<<endl;
	cout<< "2. Papel "<<endl;
	cout<< "3. Tijera "<<endl;
	cout<< "Eleccion: " ;
	cin>> usuario;
	
	system("cls");
	PC= rand()%3+1;
	switch (usuario){
		case 1: 
		    if (PC==1){
			cout<< "Empate, vuelve a jugar"  << endl;
			cout<< "Puntaje del usuario" << ": "<< Vic_usuario << endl;
			cout<< "Puntaje de la PC" << ": "<< Vic_PC << endl;
			
		} else if (PC==2){
			cout<< "Punto para la PC" << endl;
			cout<< "Puntaje del usuario" << ": "<< Vic_usuario<< endl;
			Vic_PC++;
			cout<< "Puntaje de la PC" << ": "<< Vic_PC<< endl;
			
		} else {
			cout<< "Punto para el usuario" << endl;
			Vic_usuario++;
			cout<< "Puntaje del usuario" << ": "<< Vic_usuario << endl;
			cout<< "Puntaje de la PC" << ": "<< Vic_PC<< endl;
			
		}
		    break;
		    
		case 2: 
		    if (PC==1){
			cout<< "Punto para el usuario" << endl;
			Vic_usuario++;
			cout<< "Puntaje del usuario" << ": "<< Vic_usuario<< endl;
			cout<< "Puntaje de la PC" << ": "<< Vic_PC<< endl;
			
		} else if (PC==2){
			cout<< "Empate, vuelve a jugar"  << endl;
			cout<< "Puntaje del usuario" << ": "<< Vic_usuario<< endl;
			cout<< "Puntaje de la PC" << ": "<< Vic_PC<< endl;
			
		} else {
			cout<< "Punto para la PC" << endl;
			cout<< "Puntaje del usuario" << ": "<<  Vic_usuario<< endl;
		    Vic_PC++;
			cout<< "Puntaje de la PC" << ": "<< Vic_PC<< endl;
			
		}
			break;
			
		case 3: 
		    if (PC==1){
			cout<< "Punto para la PC" << endl;
			cout<< "Puntaje del usuario" << ": "<< Vic_usuario<< endl;
			Vic_PC++;
			cout<< "Puntaje de la PC" << ": "<< Vic_PC<< endl;
			
		} else if (PC==2){
			cout<< "Punto para el usuario" << endl;
			Vic_usuario++;
			cout<< "Puntaje del usuario" << ": "<< Vic_usuario<< endl;
			cout<< "Puntaje de la PC" << ": "<< Vic_PC<< endl;
			
		} else {
			cout<< "Empate, vuelve a jugar"  << endl;
			cout<< "Puntaje del usuario" << ": "<< Vic_usuario<< endl;
			cout<< "Puntaje de la PC" << ": "<< Vic_PC<< endl;
		}
			break;
		
		default:
			cout<< "Error, elija una alternativa correcta" << endl;
			break;
	}
	}while(Vic_PC < 3 && Vic_usuario < 3);
    if (Vic_PC == 3){
        cout << "Gano la PC, buena suerte para la proxima" << endl;
    }else{
        cout << "¡Gano usted, MUCHAS FELICIDADES !" << endl;
    }
    
    cout<< "GAMEOVER" << endl;

    return 0;
}			