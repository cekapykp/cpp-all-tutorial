#include <iostream>
using namespace std;

class cokgen{
	protected:
		int en,boy;
		public:
			void deger(int x, int y){
				en=x;
				boy=y;
			}
};
class dortgen:
	public cokgen{
		public:
			int alan(){
				return (en*boy);}
			};
class dikucgen:
	public cokgen{
	public:
		int alan(){
			return (en*boy/2);}
		};

int main(){
	dortgen dg;
	dikucgen du;
	
	dg.deger(3,6);
	du.deger(3,6);
	
	cout << dg.alan() << endl;
	cout << du.alan() << endl;
}