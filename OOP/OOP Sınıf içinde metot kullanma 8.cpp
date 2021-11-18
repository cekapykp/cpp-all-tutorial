#include <iostream>
using namespace std;

class silindir{
	private:
		double r,h;
		const double pi=3.14;
		public:
			void girr(double yaricap){
				r=yaricap;
				
			}void girh(double yukseklik){
				h=yukseklik;
			}double hacim(){
				return pi*r*r*h;
			}
};
int main(){
	silindir sr;
	sr.girr(2);
	sr.girh(3);
	cout << "Silindir hacmi : " << sr.hacim();
	return 0;
}