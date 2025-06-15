#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int NumeroAzar(){
	return rand()%5+1;
}

bool TresIguales(int N1, int N2, int N3){
	//3 numeros iguales
    return (N1==N2 && N2==N3);
    }
    
bool DosIguales(int N1, int N2, int N3){
	//2 numeros iguales
	return (N1==N2 || N2==N3 || N1==N3 );
    }

bool Escalera(int N1, int N2, int N3){
	//Ascendente
	if ((N1==1 && N2==2 && N3==3)||(N1==2 && N2==3 && N3==4)||(N1==3 && N2==4 && N3==5)){
        return true;
    }
    //Descendente
    if ((N1==5 && N2==4 && N3==3)||(N1==4 && N2==3 && N3==2)||(N1==3 && N2==2 && N3==1)){
        return true;
    }
    return false;
    }
    
int main(){
	srand (time(0));
	
	int dinero=100;
	int D_apostado, A, B, C;
	char CONTINUAR;
	
	cout << "==========================================================" << endl;
    cout << "       BIENVENIDO A LA MAQUINA VIRTUAL DE TRAGAMONEDAS"     << endl;
    cout << "==========================================================" << endl;
    
    cout<< "Let's start" <<endl;
    
	
	do{
    do{
    	
	cout<< "Cuanto desea apostar? (1 a 10 soles)" << endl;
	cin>>D_apostado;
	cout<<endl;
	
	if(D_apostado<1 || D_apostado>10 || D_apostado>dinero){
	cout<<"Error, porfavor vuelva a ingresar la cantidad " <<endl;
	}
	
	}while(D_apostado<1 || D_apostado>10 || D_apostado > dinero);
    
	A=NumeroAzar();
	B=NumeroAzar();
	C=NumeroAzar();
	
    cout<< "Los numeros aleatorios obtenidos son: "<< endl;
    cout<<endl;
    cout<< "<<-------"<<A << "-" << B << "-" << C << "------->>" <<endl;
    cout<<endl;
    
    if (TresIguales(A,B,C)){
    	cout<<"Acertaste en 3 numeros iguales."<<endl;
		cout<< "Felicidades usted gano 10 veces su apuesta" << endl;
	    dinero= dinero+D_apostado*10;
			
	}else if (DosIguales(A,B,C)){
		cout<<"Acertaste en 2 numeros iguales"<<endl;
		cout<< "Felicidades usted gano 2 veces su apuesta" << endl;
		dinero=dinero+D_apostado*2;
			
	}else if (Escalera(A,B,C)){
		cout<<"Felicidades, hiciste una escalera."<<endl;
		cout<<"Tu apuesta se multiplica x5"<<endl;
		dinero= dinero+D_apostado*5;
			
	}else{
		cout<<"Perdiste tu apuesta, vamos intentalo de nuevo";
		dinero=dinero-D_apostado;
		}
	

		cout<<"<Credito actual ="<<dinero<<" soles"<<endl;
	
		cout<<"Desea continuar? (S/N): "; cin>>CONTINUAR;
		
	}while((CONTINUAR =='S'|| CONTINUAR == 's') && dinero >0);
	
	cout<<endl<<endl;
	cout<<"Gracias por jugar"<<endl;
	
	return 0;
}

