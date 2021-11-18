#include <iostream>
using namespace std;
int a[3][3]={5,7,9,0,3,0,7,5,1};
int b[3][3]={3,3,1,2,1,3,1,0,0};
int c[3][3];
int i,j,k;
int top;
int main(){
for(i=0;i<3;i++){
for(j=0;j<3;j++){
top=0;
for (k=0;k<3;k++){
top+=a[i][k]*b[k][j];
}
c[i][j]=top;
}
}
for(i=0;i<3;i++){
for(j=0;j<3;j++)
cout << c[i][j] << " ";
cout << endl;
}
return 0;
}