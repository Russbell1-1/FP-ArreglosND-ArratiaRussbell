#include<iostream>
using namespace std;

int main(){
	int M[4][4],maximo,minimo,fMax=0,cMax=0,fMin=0,cMin=0;

	cout<<"Ingrese los elementos de la matriz 4x4:\n";
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cin>>M[i][j];
			if(i==0&&j==0){
				maximo=minimo=M[i][j];
			}else{
				if(M[i][j]>maximo){
					maximo=M[i][j];
					fMax=i;
					cMax=j;
				}
				if(M[i][j]<minimo){
					minimo=M[i][j];
					fMin=i;
					cMin=j;
				}
			}
		}
	}

	cout<<"Maximo: "<<maximo<<" en fila "<<fMax<<", columna "<<cMax<<endl;
	cout<<"Minimo: "<<minimo<<" en fila "<<fMin<<", columna "<<cMin<<endl;
	return 0;
}
