#include<iostream>
using namespace std;

int main(){
	int M[4][4],sumaPrincipal=0,sumaSecundaria=0;

	cout<<"Ingrese los elementos de la matriz 4x4:\n";
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cin>>M[i][j];
		}
	}

	for(int i=0;i<4;i++){
		sumaPrincipal+=M[i][i];
		sumaSecundaria+=M[i][3-i];
	}

	cout<<"Suma de la diagonal principal: "<<sumaPrincipal<<endl;
	cout<<"Suma de la diagonal secundaria: "<<sumaSecundaria<<endl;
	return 0;
}
