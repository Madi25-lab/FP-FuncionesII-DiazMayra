#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int NumeroAzar(){
	int NUMERO_ALEATORIO;
	NUMERO_ALEATORIO= rand()%5+1;
	return NUMERO_ALEATORIO;
    }
    
bool TresIguales(int N1, int N2, int N3){
    int TRES_IGUALES;
    return (N1==N2 && N2==N3);
    }
    
bool DosIguales(int N1, int N2, int N3){
	int DOS_IGUALES;
	return (N1==N2 || N2==N3 || N1==N3 )
    }

bool Escalera(int N1, int N2, int N3){
	int ASCENDENTE;
	if (N1==1 && N2==2 && N3==3) || (N1==2 && N2==3 && N3==4) || (N1==3 && N2==4 && N3==5)
	   {
        return true;
    }
    
    int DESCENDENTE;
    if (N1==5 && N2==4 && N3==3) || (N1==4 && N2==3 && N3==2) || (N1==3 && N2==2 && N3==1) 
	   {
        return true;
    }

    return false;
    }
    
int main(){
	srand (time(0));
	
	int dinero=100;
	int apuesta, A, B, C;
	
}

