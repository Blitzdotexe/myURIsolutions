#include <iostream>
#include <iomanip>
#include <locale>
using namespace std;

int main()
{
	int A;

	cin >> A;

	if(A == 61)
		cout << "Brasilia" << endl;
	else if(A == 71)
		cout << "Salvador" << endl;
	else if(A == 11)
		cout << "Sao Paulo" << endl;
	else if(A == 21)
		cout << "Rio de Janeiro" << endl;
	else if(A == 32)
		cout << "Juiz de Fora" << endl;
	else if(A == 19)
		cout << "Campinas" << endl;
	else if(A == 27)
		cout << "Vitoria" << endl;
	else if(A == 31)
		cout << "Belo Horizonte" << endl;
	else
		cout << "DDD nao cadastrado" << endl;
	return 0;
}

