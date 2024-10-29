#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double BeratApel, BeratJeruk, BeratSemangka;
	double TotalBerat, TotalHarga;
	double Diskon;
	const double HargaApel = 24000, HargaJeruk = 16250, HargaSemangka = 8000;

	cout << "Berat Buah Apel (kg) : ";
	cin >> BeratApel;
	cout << "Berat Buah Jeruk (kg) : ";
	cin >> BeratJeruk;
	cout << "Berat Buah Semangka (kg) : ";
	cin >> BeratSemangka;

	TotalBerat = BeratApel + BeratJeruk + BeratSemangka;
	TotalHarga = (BeratApel + HargaApel) + (BeratJeruk + HargaJeruk) + (BeratSemangka + HargaSemangka);

	if (TotalBerat > 10) {
		Diskon = 0.05;
	}
	else if (TotalBerat > 8) {
		Diskon = 0.02;
	}
	else {
		Diskon = 0;
	}

	double TotalBayar = TotalHarga - (TotalHarga * Diskon);

	cout << fixed << setprecision(2);
	cout << "Total biaya : Rp " << TotalBayar << endl;
	return 0;
}
