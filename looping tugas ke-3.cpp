#include <iostream>
using namespace std;

int main() {
	int n, totalGenap = 0, totalGanjil = 0;
	cout << "Masukkan jumlah data: ";
	cin >> n;

	for (int i = 1; i <= n; i++) {
		if (i % 2 == 0) {
			totalGenap += i;
		}
		else {
			totalGanjil += i;
		}
	}

	cout << "Jumlah total bilangan genap: " << totalGenap << endl;
	cout << "Jumlah total bilangan ganjil: " << totalGanjil << endl;

	return 0;
}