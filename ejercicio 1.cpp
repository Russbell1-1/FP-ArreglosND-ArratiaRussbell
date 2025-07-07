#include<iostream>
using namespace std;

int main(){
	int A[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int B[3][3]={{9,8,7},{6,5,4},{3,2,1}};
	int R[3][3]={};

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			for(int k=0;k<3;k++){
				R[i][j]+=A[i][k]*B[k][j];
			}
		}
	}

	cout<<"Matriz A:        Matriz B:        Resultado:\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++)cout<<A[i][j]<<" ";
		cout<<"     ";
		for(int j=0;j<3;j++)cout<<B[i][j]<<" ";
		cout<<"     ";
		for(int j=0;j<3;j++)cout<<R[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}
