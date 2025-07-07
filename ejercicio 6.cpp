#include<iostream>
using namespace std;

int main(){
	int M[6][6];

	cout<<"Ingrese los elementos de la matriz 6x6:\n";
	for(int i=0;i<6;i++){
		for(int j=0;j<6;j++){
			cin>>M[i][j];
		}
	}

	for(int i=0;i<6;i++){
		for(int j=0;j<3;j++){
			int temp=M[i][j];
			M[i][j]=M[i][5-j];
			M[i][5-j]=temp;
		}
	}

	cout<<"Matriz reflejada horizontalmente:\n";
	for(int i=0;i<6;i++){
		for(int j=0;j<6;j++){
			cout<<M[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}
