#include <iostream>

using namespace std;

int main( )
{

	int linha, coluna;
	cout << endl;
	linha = 1;
	while (linha < 8)
	{
	cout << "\t";
	coluna = 1;
	while (coluna < linha)
        {
		cout << "*";
		coluna = coluna + 1;
        }
		cout << endl;
		linha = linha + 1;
	}
}
