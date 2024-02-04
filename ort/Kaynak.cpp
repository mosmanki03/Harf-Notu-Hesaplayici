#include <iostream>
#include <string>
using namespace std;

class ortalama {
public:
	float toplican;
	string harf_notu;
};
ortalama deg;

void vize() {
	//VÝZE NOTU HESAPLAYICI
	cout << "Vize notunuzu giriniz:\n";
	float vize_notu;
	cin >> vize_notu;
	float v = vize_notu * 4 / 10;
	deg.toplican = deg.toplican + v;

}
void final() {
	//FÝNAL NOTU HESAPLAYICI
	cout << "Final notunuzu giriniz:\n";
	float final_notu;
	cin >> final_notu;
	float f = final_notu * 6 / 10;
	deg.toplican = deg.toplican + f;
}
void not_araliklari() {
	string hf = "Harf Notunuz:";
	cout << "Ders Notunuz:" << deg.toplican << "\n";
	if (deg.toplican >= 0 and deg.toplican <= 49.9) {
		deg.harf_notu = "FF";
		cout << hf << deg.harf_notu;
	}
	if (deg.toplican >= 50 and deg.toplican <= 59.9) {
		deg.harf_notu = "DC";
		cout << hf << deg.harf_notu;
	}
	if (deg.toplican >= 60 and deg.toplican <= 65.9) {
		deg.harf_notu = "CC";
		cout << hf << deg.harf_notu;
	}
	if (deg.toplican >= 66 and deg.toplican <= 72.9) {
		deg.harf_notu = "CB";
		cout << hf << deg.harf_notu;
	}
	if (deg.toplican >= 73 and deg.toplican <= 79.9) {
		deg.harf_notu = "BB";
		cout << hf << deg.harf_notu;
	}
	if (deg.toplican >= 80 and deg.toplican <= 87.9) {
		deg.harf_notu = "BA";
		cout << hf << deg.harf_notu;
	}
	if (deg.toplican >= 88 and deg.toplican <= 100) {
		deg.harf_notu = "AA";
		cout << hf << deg.harf_notu;
	}
}
int main() {
	vize();
	final();
	not_araliklari();
	return 0;
}