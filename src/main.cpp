#include <iostream>
#include <locale>
#include "Matriz.hpp"

using namespace std;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	short int N;
	
	cout <<"\nDigite o valor de N: ";
	cin >> N;

	Matriz matriz(N);
	
	matriz.printMatriz();
	
	cout << "\nTOTAL = " << matriz.getPathMatriz() << endl;
	
	return 0;
}