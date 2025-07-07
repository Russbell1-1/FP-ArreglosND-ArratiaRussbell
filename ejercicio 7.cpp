#include<iostream>
using namespace std;

int main(){
	int M[4][4],R[4][4];

	cout<<"Ingrese los elementos de la matriz 4x4:\n";
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cin>>M[i][j];
		}
	}

	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			R[j][3-i]=M[i][j];
		}
	}

	cout<<"Matriz rotada 90 grados en sentido horario:\n";
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cout<<R[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}
