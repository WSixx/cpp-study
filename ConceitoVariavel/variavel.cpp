#include <iostream>
#include <tchar.h>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	const int test = 10;
	int NumVidas = 5;
	int Score = 1350;
	std::cout << "************GAME START**************" << std::endl;	
	std::cout << "Vidas jogador: " << NumVidas << std::endl;
	std::cout << "Pontua��o: " << Score << std::endl;
	std::cout << "Endere�o que NumVidas ocupa na mem�ria RAM: " << &NumVidas << "\n";
	std::cout << "Endere�o que Score ocupa na mem�ria RAM: " << &Score << "\n";
	std::cout << "Tamanho da variavel NumVidas: " << sizeof(NumVidas) << " Bytes" << "\n";
	std::cout << "Tamanho da variavel Score:: " << sizeof(Score) << " Bytes" << "\n";
	std::cout << "***********************************" << std::endl;

	std::cout << "************IN GAMING**************" << std::endl;
	Score = Score + 150;
	NumVidas = NumVidas - 1;
	std::cout << "Vidas jogador: " << NumVidas << std::endl;
	std::cout << "Pontua��o: " << Score << std::endl;
	std::cout << "***********************************" << std::endl;

	system("pause");
}
