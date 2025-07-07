#include<iostream>
using namespace std;

int main(){
	int bosque[10][10]={
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,1,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0}
	};

	int nuevo[10][10];

	cout<<"Estado inicial:\n";
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			cout<<bosque[i][j]<<" ";
		}
		cout<<endl;
	}

	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			if(bosque[i][j]==0){
				bool seQuema=false;
				for(int dx=-1;dx<=1;dx++){
					for(int dy=-1;dy<=1;dy++){
						int ni=i+dx,nj=j+dy;
						if(ni>=0 && ni<10 && nj>=0 && nj<10){
							if(bosque[ni][nj]==1){
								seQuema=true;
							}
						}
					}
				}
				nuevo[i][j]=seQuema?1:0;
			}else if(bosque[i][j]==1){
				nuevo[i][j]=2;
			}else{
				nuevo[i][j]=2;
			}
		}
	}

	cout<<"\nEstado después de la propagación:\n";
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			cout<<nuevo[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}
