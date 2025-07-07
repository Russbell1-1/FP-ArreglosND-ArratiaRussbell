#include<iostream>
using namespace std;

int main(){
	int M[4][4],f1,f2;

	cout<<"Ingrese los elementos de la matriz 4x4:\n";
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cin>>M[i][j];
		}
	}

	cout<<"Filas a intercambiar:\n";
	cin>>f1>>f2;

	for(int j=0;j<4;j++){
		int temp=M[f1][j];
		M[f1][j]=M[f2][j];
		M[f2][j]=temp;
	}

	cout<<"Matriz resultante:\n";
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<M[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
