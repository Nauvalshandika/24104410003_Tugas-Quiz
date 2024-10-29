#include <iostream>
using namespace std;

double HitungKinetik;

void hitungEK(double massa, double kecepatan) {
	HitungKinetik = 0.5 * massa * kecepatan * kecepatan;
}

int main()
{
	double massa, kecepatan;
	cout << "Massa (kg) : ";
	cin >> massa;
	cout << "kecepatan (m/s) : ";
	cin >> kecepatan;
	hitungEK(massa, kecepatan);
	cout << "Hasil Energi Kinetik : " << HitungKinetik << endl;
	return 0;
}