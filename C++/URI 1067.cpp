#include <iostream>
#include <iomanip>
#include <locale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Portuguese");

	//sempre comentar nome de vari�veis!
	//sempre dar ctrl+shift+f ao terminar o c�digo.

	int i, n;

	cin >> n;

	for(i = 0; i <= n; i++)
	{

		if(i % 2 != 0)
			cout << i << endl;

	}


	return 0;
}
