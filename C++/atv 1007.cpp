#include <iostream>
#include <iomanip>
#include <locale>
using namespace std;

int main()
{	setlocale(LC_ALL, "Portuguese");
	
	int A,B;
	double C,D; //D: sal�rio;
	
	cin >> A; //n�mero do funcion�rio
	cin >> B; //quantidade de horas trabalhadas
	cin >> C; //valor por hora trabalhada
	
	D=C*B;
	
	cout << fixed << setprecision(2);
	cout << "NUMBER = " << A << endl;
	cout << "SALARY = U$ " << D << endl;
 
	return 0;	
}