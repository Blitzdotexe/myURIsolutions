#include <iostream>
#include <iomanip>
#include <locale>
using namespace std;

int main()
{	setlocale(LC_ALL, "Portuguese");
	
	//sempre comentar nome de vari�veis!
	//sempre dar ctrl+shift+f ao terminar o c�digo.
	
	int X,Y;
	
	cin >> X >> Y;
	
	if(X%Y==0 || Y%X==0)
		cout << "Sao Multiplos" << endl;
	else
		cout << "Nao sao Multiplos" << endl;
	
	return 0;	
}