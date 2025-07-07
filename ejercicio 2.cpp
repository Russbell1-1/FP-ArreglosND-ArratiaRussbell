#include<iostream>
using namespace std;

int main(){
	int M[3][3]={{1,2,3},{4,2,6},{7,2,9}};
	int valor;
	cout<<"Valor a buscar: ";
	cin>>valor;
	cout<<"El valor "<<valor<<" se encuentra en:\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(M[i][j]==valor){
				cout<<"Fila "<<i<<", Columna "<<j<<endl;
			}
		}
	}
	return 0;
}
