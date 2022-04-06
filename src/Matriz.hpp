#ifndef __MATRIZ_HPP
#define __MATRIZ_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Matriz{
	private:
		short int numColunmAndRow;
		short int **matriz;
	public:
		Matriz(short int numColunmAndRow);
		int getNumColunmAndRow();
		void setNumColunmAndRow(short int newNumColunmAndRow);
		// geters e seters
		void startMatriz();
		// ALoca valores aleatorios de 0 a 99 na matriz. Passo: 1
		void printMatriz();
		// imprime a matriz na tela
		//bool checkNumExistMatriz(int valor);
		//Verifica se o numero aleatoria j� existe na matriz, evitando repeti��es diversas. 
		int getPathMatriz();
		// 	Realiza todo o processamento para devolver o tamanho do caminho. Passo: 4, 5, 5.1, 6
};
#endif