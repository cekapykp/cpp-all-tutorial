#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ofstream program;
	program.open("karalama2.txt",ios::app);
	program << "Duvarda elek mi olur" << endl;
	program << "El kızı melek mi olur ";
	program.close();
	return 0;
}

/*
#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ofstream program;
	program.open("karalama2.txt",ios::app);		//ios::app eski değerleri korur ve altına yazar
	program << "Emrudun kızın nanay" << endl;
	program.close();
	return 0;
}


#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ofstream program;
	program.open("karalama2.txt",ios::out);		//ios::out Eski değerleri de siler baştan yazmaya başlar. Varsayılan değer
	program << "Emrudun kızın nanay" << endl;
	program.close();
	return 0;
}


#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ofstream program;
	program.open("karalama2.txt",ios::in);		//ios::in Eski değerleri de siler baştan yazmaya başlar. Ayrıca bu komut için
	program << "Çokiçmişim nanay" << endl;		//dosyanın zaten olması gerekir. Dosya yoksa işlem durur. ama ios::out da dosya olmasaydı
	program.close();							//kendisi bir dosya yaratırdı
	return 0;
}
*/