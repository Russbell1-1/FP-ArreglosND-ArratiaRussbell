#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
	int minas[10][10]={};
	int numeros[10][10]={};

	srand(time(0));

	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			minas[i][j]=rand()%2;
		}
	}

	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			if(minas[i][j]==1)continue;
			int cont=0;
			for(int dx=-1;dx<=1;dx++){
				for(int dy=-1;dy<=1;dy++){
					int ni=i+dx,nj=j+dy;
					if(ni>=0 && ni<10 && nj>=0 && nj<10 && !(dx==0 && dy==0)){
						if(minas[ni][nj]==1)cont++;
					}
				}
			}
			numeros[i][j]=cont;
		}
	}

	cout<<"Tablero con minas       Tablero con numeros\n";
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			cout<<minas[i][j]<<" ";
		}
		cout<<"       ";
		for(int j=0;j<10;j++){
			if(minas[i][j]==1)cout<<"* ";
			else cout<<numeros[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}
