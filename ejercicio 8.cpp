#include<iostream>
using namespace std;

int main(){
	int M[5][5];

	cout<<"Ingrese los elementos de la matriz 5x5:\n";
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cin>>M[i][j];
		}
	}

	int sup=0,inf=4,izq=0,der=4;

	cout<<"Recorrido en espiral:\n";
	while(sup<=inf && izq<=der){
		for(int j=izq;j<=der;j++)
		cout<<M[sup][j]<<" ";
		sup++;
		for(int i=sup;i<=inf;i++)
		cout<<M[i][der]<<" ";
		der--;
		for(int j=der;j>=izq;j--)
		cout<<M[inf][j]<<" ";
		inf--;
		for(int i=inf;i>=sup;i--)
		cout<<M[i][izq]<<" ";
		izq++;
	}

	cout<<endl;
	return 0;
}
