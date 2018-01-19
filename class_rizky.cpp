#include <iostream>
#include <string>
using namespace std;

class hewan {
	public:
		void suara(string bunyi);
		int makan(string makanan);
		string lari;
		void ukuranBadan(string ukuran);
		void jumlahAnak(int jumlah);
		};
int main(){
	hewan tikusjantan,tikusbetina,hamsterjantan,hamsterbetina,kucingjantan,kucingbetina;
		tikusjantan.lari	="larinya laju ";
	tikusbetina.lari ="larinya lambat ";
	hamsterjantan.lari	="gak bisa lari kalo kenyang ";
	hamsterbetina.lari	="larinya pelan ";
	kucingjantan.lari="larinya cepatt ";
	kucingbetina.lari="gak lari kalo laper ";
