#include <iostream>
#include <iomanip>
#include <locale>
using namespace std;

int main()
{	setlocale(LC_ALL, "Portuguese");
	
	//sempre comentar nome de vari�veis!
	//sempre dar ctrl+shift+f ao terminar o c�digo.
	
	int x,Y;
	x=0;
	
	while(x==0){
		
		cin >> Y;
		if(Y==2002){
			cout << "Acesso Permitido" << endl;
			x=1;
		}else
		{
			cout << "Senha Invalida" << endl;
		}
		
		
		
	}
	
	return 0;	
}