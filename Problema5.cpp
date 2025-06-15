#include <iostream>
#include <cmath>

using namespace std;

int main (){
	void calcularRaices(double a,double b,double c,double &R1,double &R2,bool &Real){
    double discriminante = pow(b, 2) - 4 * a * c;

    if(discriminante >= 0){
        Real=true;
        resul1=(-b + sqrt(discriminante)) / (2*a);
        resul2=(-b - sqrt(discriminante)) / (2*a);
    }else{
    	Real=false;
        resul1= -b / (2*a);
        resul2= sqrt(-discriminante) / (2*a);
    }
}
}