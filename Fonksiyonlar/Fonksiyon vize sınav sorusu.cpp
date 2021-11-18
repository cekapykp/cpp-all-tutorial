#include <iostream> 
#include<cmath>
using namespace std; 

int fact(int n){

     return (n==0) || (n==1) ? 1 : n* fact(n-1);
}

double fonk(int x, int n) 
{ 
    double i, toplam = 1, carp = x; 
    for (i = 1; i <= n; i++) 
    { 
        toplam = toplam + carp / fact(i); 
        carp = carp * x; 
    } 
    return toplam; 
} 
int main(){
    int x,n;
    cout<<"x girin"<<endl;
    cin>>x;
    cout<<"n girin"<<endl;
    cin>>n;
    cout<<fonk(x,n);
}