#include <iostream>
using namespace std;

class Cokgen{
	protected:
		int en,boy;
	public:
		void deger(int x,int y){
			en=x;
			boy=y;
		}
};
class Dorgen : public Cokgen{
	public:
		int Alan(){
			return (en*boy);
		}
};
class DikUcgen : public Cokgen{
	public:
		int Alan(){
			return (en*boy/2);
		}
};
int main(){
	DikUcgen obje;
	obje.deger(8,6);
	cout << obje.Alan();
}