#include "Matriz.hpp"

Matriz::Matriz(short int n){
	this->numColunmAndRow = n;
	startMatriz();
}

int Matriz::getNumColunmAndRow(){
	return this->numColunmAndRow;
}

void Matriz::setNumColunmAndRow(short int newNumColunmAndRow){
	this->numColunmAndRow = newNumColunmAndRow;
}

void Matriz::startMatriz(){	

	this->matriz = (short int **) malloc(sizeof(short int *) * this->numColunmAndRow);
	
	for(int i=0;i<this->numColunmAndRow;i++){
		this->matriz[i] = (short int *) malloc(sizeof (short int) * this->numColunmAndRow);
	}
	
	for(int i=0;i<this->numColunmAndRow;i++){
		for(int j=0;j<this->numColunmAndRow;j++){
			this->matriz[i][j] = rand()%99;
		}
	}
}

void Matriz::printMatriz(){
	cout << endl;
	
	for(int i=0;i<getNumColunmAndRow();i++){
		for(int j=0;j<getNumColunmAndRow();j++){
			cout << this->matriz[i][j] << " ";
		}
		cout << "\n";
	}
}

int Matriz::getPathMatriz(){
	int i = 0;								// top: i-1
	int j = 0;								// right: j+1
	int total = 0;									// bottom: i+1
	int numberN = this->numColunmAndRow - 1;		// left: j-1
	
	while(i!=numberN || j!=numberN){
		total+=this->matriz[i][j];
		
		if(i==numberN){		//bordar inferior
			this->matriz[i][j] = (short int)-1;
			j++;
		}
		else if(i==0 && j==0){	//canto superior esquerdo
			if((this->matriz[i][j+1] != -1) && (this->matriz[i][j+1] > this->matriz[i+1][j])){
				this->matriz[i][j] = (short int)-1;
				j++;
			}
			else if(this->matriz[i+1][j] != -1){
				this->matriz[i][j] = (short int)-1;
				i++;
			}
		}
		else if(i==0 && j==numberN){	//canto superior direito
			if((this->matriz[i][j-1] != -1) && (this->matriz[i][j-1] > this->matriz[i+1][j])){
				this->matriz[i][j] = (short int)-1;
				j--;
			}
			else if(this->matriz[i+1][j] != -1){
				this->matriz[i][j] = (short int)-1;
				i++;
			}
		}
		else{
			if(i==0){	//borda superior
				if((this->matriz[i][j-1] != -1) && (this->matriz[i][j-1] > this->matriz[i+1][j]) && (this->matriz[i][j-1] > this->matriz[i][j+1])){
					this->matriz[i][j] = (short int)-1;
					j--;
				}
				else if((this->matriz[i][j+1] != -1) && (this->matriz[i][j+1] > this->matriz[i+1][j]) && (this->matriz[i][j+1] > this->matriz[i][j-1])){
					this->matriz[i][j] = (short int)-1;
					j++;
				}
				else if(this->matriz[i+1][j] != -1){
					this->matriz[i][j] = (short int)-1;
					i++;
				}	
			}
			else if(j==numberN){	//borda da direita
				if((this->matriz[i][j-1] != -1) && (this->matriz[i][j-1] > this->matriz[i+1][j])){
					this->matriz[i][j] = (short int)-1;
					j--;
				}
				else if(this->matriz[i+1][j] != -1){
					this->matriz[i][j] = (short int)-1;
					i++;
				}
			}
			else if (j==0){	//borda da esquerda
				if((this->matriz[i][j+1] != -1) && (this->matriz[i][j+1] > this->matriz[i+1][j])){
					this->matriz[i][j] = (short int)-1;
					j++;
				}
				else if(this->matriz[i+1][j] != -1){
					this->matriz[i][j] = (short int)-1;
					i++;
				}
			}
			else if(i!=0 && i!=numberN && j!=0 && j!=numberN){
				if((this->matriz[i][j-1] != -1) && (this->matriz[i][j-1] > this->matriz[i+1][j]) && (this->matriz[i][j-1] > this->matriz[i][j+1])){
					this->matriz[i][j] = (short int)-1;
					j--;
				}
				else if((this->matriz[i][j+1] != -1) && (this->matriz[i][j+1] > this->matriz[i+1][j]) && (this->matriz[i][j+1] > this->matriz[i][j-1])){
					this->matriz[i][j] = (short int)-1;
					j++;
				}
				else if(this->matriz[i+1][j] != -1){
					this->matriz[i][j] = (short int)-1;
					i++;
				}	
			}
		}
	}
	
	total+=this->matriz[numberN][numberN];
	
	return total;
}