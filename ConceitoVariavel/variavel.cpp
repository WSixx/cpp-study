#include <iostream>
#include <tchar.h>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	int NumVidas = 5;
	int Score = 1350;
	std::cout << "***********" << std::endl;	
	std::cout << "Vidas jogador: " << NumVidas << std::endl;
	std::cout << "Pontua��o: " << Score << std::endl;
	std::cout << "Endere�o que NumVidas ocupa na mem�ria RAM: " << &NumVidas << "\n";
	std::cout << "Endere�o que Score ocupa na mem�ria RAM: " << &Score << "\n";
	std::cout << "***********" << std::endl;
	system("pause");
}
