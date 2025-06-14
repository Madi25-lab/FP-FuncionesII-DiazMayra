#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
    
    int NumeroAzar(){
	int NUMERO_ALEATORIO;
	NUMERO_ALEATORIO= rand()%6+1;
	return NUMERO_ALEATORIO;
    }
	
int main() {
    srand(time(0));
    int Jugador1;
	int Jugador2;
    int Gano1=0, Gano2=0;
	int Jugadas=1;
    
	cout << "Juego de dados " << endl;
	cout<< "START GAME"<< endl;
	cout<<"Presiona enter para comenzar el juego: ";
	cin.get();
    system("cls");	

	do{
		cout<<Jugadas++<<"-"<<"Ronda: ";
		cin.get();
		
		cout << "Jugador 1, presione Enter ";
        cin.get();
        Jugador1 = NumeroAzar();
        cout << "JUGADOR 1, el numero que le salio es:" <<Jugador1<<endl;

        cout << "Jugador 2, presione Enter ";
        cin.get();
        Jugador2 = NumeroAzar();
        cout << "JUGADOR 2, el numero que le salio es:" << Jugador2<< endl;
		
		if(Jugador1>Jugador2){
            cout << "VICTORIA para el jugador 1"<<endl;
			Gano1++;
			
        }else if(Jugador1<Jugador2){
        	Gano2++;
            cout << "VICTORIA para el jugador 2"<<endl;
            
        }else if (Jugador1==Jugador2){
        	cout<<"EMPATE"<<endl;
		}
		
		cout << "Partidas ganadas JUGADOR 1: " << Gano1 << endl;
        cout << "Partidas ganadas JUGADOR 2: " << Gano2 << endl;
        cout << "Presione Enter para continuar";
        cin.get();
        system("cls");
		
	}while(Gano1<3 && Gano2<3);
	
	if(Gano1>Gano2){
		cout<<"El jugador 1 GANO"<<endl;
	} else{
		cout<<"El jugador 2 GANO"<<endl;
	}
	
	cout<< "GAME OVER" << endl;
	
	return 0;
}