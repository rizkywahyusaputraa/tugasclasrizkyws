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
	
		cout <<"Ciri-ciri tikus jantan: \n\n";
	cout <<(tikusjantan.lari);
	tikusjantan.suara("crutcrutcruttt");
	tikusjantan.makan("makan sabunn ");
	tikusjantan.ukuranBadan("besar bertaji");
	tikusjantan.jumlahAnak(0);
	cout <<"_______________________________\n\n";
	
	cout <<"Ciri-ciri tikus betina: \n\n";
	cout <<(tikusbetina.lari);
	tikusbetina.suara("critttcritt");
	tikusbetina.makan("makan kejuu ");
	tikusbetina.ukuranBadan("sadang tak bertaji");
	tikusbetina.jumlahAnak(15);
	cout <<"_______________________________\n\n";
