#include <iostream>
#include <iomanip>
#include <locale>
using namespace std;

int main()
{	setlocale(LC_ALL, "Portuguese");
	
	//sempre comentar nome de vari�veis!
	//sempre dar ctrl+shift+f ao terminar o c�digo.
	
	double X,Y,Z,A,P;  /*XYZ = valores triangulo; A=area trapezio; 
	
	P=perimetro triangulo.*/
	
	cin >> X >> Y >> Z;
	cout << fixed << setprecision(1);
	
	if(X<Y+Z && Y<X+Z && Z<X+Y){
		
		P=X+Y+Z;
		cout << "Perimetro = " << P << endl;
		
	}else
	{
		A= 1.0*((X+Y)*Z)/2;
		cout << "Area = " << A << endl;
	}
	
	return 0;	
}