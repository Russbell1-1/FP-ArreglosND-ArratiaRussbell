#include<iostream>
using namespace std;

int main(){
	int N;
	cout<<"Ingrese el orden del cuadrado latino: ";
	cin>>N;

	int M[100][100];

	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			M[i][j]=((j-i+N)%N)+1;
		}
	}

	cout<<"Cuadrado latino de orden "<<N<<":\n";
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			cout<<M[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}
