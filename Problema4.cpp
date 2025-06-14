#include <iostream>
#include <cmath>

using namespace std;
int main (){
	
	int PC,SC,TC;
	double Dis,X1,X2,X,I1,I2;
	cout<< "Ingrese el primer coeficiente: " ;
	cin>> PC;
	cout<< "Ingrese el segundo coeficiente: " ;
	cin>> SC;
	cout<< "Ingrese el tercer coeficiente: " ;
	cin>> TC;
	Dis=pow(SC,2)-4*PC*TC; 
	if (Dis>0){
		X1= (-SC+sqrt(Dis))/(2*PC);
	    X2= (-SC-sqrt(Dis))/(2*PC);
		cout<< "Presenta raices reales diferentes: " << endl;
	    cout<< "La primera raiz es: "<< X1<<endl;
		cout<< "La segunda raiz es: " << X2 <<endl;
    }else if (Dis==0) {
	    X= -SC/(2*PC);
    	cout<< "Presenta raices reales iguales: " << X << endl;
	}else{
		I1= -SC/(2*PC);
        I2= sqrt(-Dis)/(2*PC);
        cout << "Presenta raices complejas: "<<endl;
		cout<< "La primera raiz es: " << I1<<"+"<<I2<<"i"<<endl;
        cout << "La segunda raiz es: "<<I1<<"-"<<I2<<"i"<<endl;
	}
	
	return 0;
}