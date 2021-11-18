#include <iostream>
#include <math.h>
using namespace std; 
int main() {
	double x1,x2,y1,y2;
	cout << "Birinci nokta kooridnat";
	cin >> x1 >> y1;
	cout  << "İkinci nokta koordinat : " ;
	cin >> x2 >> y2;
	float uzaklik = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
	cout << endl;
	cout << "Uzaklik : " << uzaklik <<  endl;
	
}