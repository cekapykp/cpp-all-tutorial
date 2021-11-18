#include <iostream>
using namespace std;
int dizi[10][10];
void ekleKenar(int v1,int v2)
{	
	dizi[v1][v2]=1;
	dizi[v2][v1]=1;
}

void GrafGoster(int v){
	for(int i=0;i<v;i++){  
		for(int j=0;j<v;j++){   
			cout<<dizi[i][j]<<" ";
		}
		cout<<endl;
	}
	
}

int main(){
	
	int v=5;
	ekleKenar(1,5);	
	ekleKenar(2,3);
	ekleKenar(3,1);
	GrafGoster(v);
	return 0;
}