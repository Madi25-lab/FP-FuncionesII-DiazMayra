#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

    void DADO_1(){
    }
    
    void DADO_2(){
	}
	
    void DADO_3(){
	}
	
    void DADO_4(){
	}
	
    void DADO_5(){
	}
	
    void DADO_6(){
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
		
		cout << "Jugador 1, presione Enter";
        cin.get();
        Jugador1 = rand() % 6 + 1;
        cout << "JUGADOR 1, el numero de que le salio es: " <<Jugador1<<endl;

        cout << "Jugador 2, presione Enter ";
        cin.get();
        Jugador2 = rand() % 6 + 1;
        cout << "JUGADOR 2, el numero de que le salio es: " << Jugador2<< endl;
		
		if(Jugador1>Jugador2){
            cout << "El jugador 1 ha ganado 1 punto"<<endl;
			Gano1++;
			
        }else if(Jugador1<Jugador2){
        	Gano2++;
            cout << "El jugador 2 ha ganado 1 punto"<<endl;
            
       