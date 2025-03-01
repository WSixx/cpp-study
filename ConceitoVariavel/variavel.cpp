#include <iostream>
#include <tchar.h>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	int NumVidas = 5;
	int Score = 1350;
	std::cout << "***********" << std::endl;	
	std::cout << "Vidas jogador: " << NumVidas << std::endl;
	std::cout << "Pontuação: " << Score << std::endl;
	std::cout << "Endereço que NumVidas ocupa na memória RAM: " << &NumVidas << "\n";
	std::cout << "Endereço que Score ocupa na memória RAM: " << &Score << "\n";
	std::cout << "***********" << std::endl;
	system("pause");
}
