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
		void startMatriz();
		void printMatriz();
		int getPathMatriz();
};
#endif