#include <iostream>
using namespace std;

class Ogrenci{
	private:
		string isim;
		int numara;
	public:
		void setIsim(string girIsim){
			if(girIsim.size()>=3){
				isim=girIsim;
			}else{
				cout << "Lutfen gecerli bir isim giriniz !" << endl;
			}
		}void setNumara(int girNo){
			if(girNo>0){
				numara = girNo;
			}else{
				cout << "Lufen gecerli bir numara giriniz !" << endl;
			}
		}
		string getIsim(){
			return isim;
		}
		int getNumara(){
			return 	numara;
		}
};
int main(){
	Ogrenci obje1;
	obje1.setIsim("Nazli");
	obje1.setNumara(256465465);
	
	cout << "Isim: " << obje1.getIsim() << endl;
	cout << "Numara: " << obje1.getNumara() << endl;
	
	return 0;
}