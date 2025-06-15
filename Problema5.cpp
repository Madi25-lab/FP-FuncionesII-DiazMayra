#include <iostream>
#include <cmath>

using namespace std;

	void calcularRaices(double a,double b,double c,double &R1,double &R2,bool &R){
    double discriminante = pow(b, 2) - 4 * a * c;

    if(discriminante >= 0){
        R=true;
        R1=(-b + sqrt(discriminante)) / (2*a);
        R2=(-b - sqrt(discriminante)) / (2*a);
    }else{
    	R=false;
        R1= -b / (2*a);
        R2= sqrt(-discriminante) / (2*a);
    }
}

int main(){
    double a,b,c;
    double discriminante,R1,R2;
    double Real, Imag;
    bool R;

    cout << "==========================================================" << endl;
	cout << "              Calcular Raices Cuadraticas" << endl;
	cout << "==========================================================\n" << endl;
    cout<<"Ingrese el primer coeficiente: ";
    cin>>a;
    cout<<"Ingrese el segundo coeficiente: ";
    cin>>b;
    cout<<"Ingrese el tercer coeficiente: ";
    cin>>c;
    cout<<endl;

    calcularRaices(a,b,c,R1,R2,R);

    if (R){
        if (R1 == R2){
        cout<< "Presenta raices reales iguales: " << R1<< endl;
        	
        }else{
        cout<< "Presenta raices reales diferentes: " << endl;
	    cout<< "La primera raiz es: "<< R1<<endl;
		cout<< "La segunda raiz es: " << R2 <<endl;
        }
	
	}else{
        Real= R1;
        Imag= R2;
        cout << "Presenta raices complejas: " << endl;
        cout << "La primera raiz es: "<<Real<<" + "<<Imag<<"i"<<endl;
        cout << "La segunda raiz es:"<<Real<<" - "<<Imag<<"i"<<endl;
    }
	
	return 0;
}