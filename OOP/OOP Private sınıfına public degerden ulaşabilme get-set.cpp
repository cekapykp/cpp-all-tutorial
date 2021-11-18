#include <iostream>
using namespace std;
class dikdorgen{
	private:
		int en;
		int boy;
	public:
		int alan();
		int cerve(){
			return 2*(en+boy);
		}
		
		int getBoy(){
			return boy;
		}
		void setBoy(int db){
			if(db<0){
				boy=0;
			}else{
				boy=db;
			}
		}
		int getEn(){
			return en;
		}
		void setEn (int x){
			if(x>=0){
				en=x;
			}else{
				en=0;
			}
		}
};

dikdorgen::alan (){
	return en*boy;
}
int main(){
	dikdorgen x;
	x.setEn(50);
	x.setBoy(100);
	
	cout << "Alani : " <<x.alan()<<" Boy : "<<x.getBoy() << " En : " << x.getEn() << endl;
}