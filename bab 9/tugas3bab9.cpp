#include <iostream>

using namespace std;

int main() {
    int ukuran; 
    cout << "Masukkan angka : ";cin >> ukuran;
	int angka[ukuran];

    for (int i = 0; i < ukuran; ++i) {
        cout << "Angka " << i + 1 << ": ";
        cin >> angka[i];
    }
    
    int jumlah = 0;
    for (int i = 0; i < ukuran; ++i) {
        jumlah += angka[i];
    }
    
    double rata_rata = static_cast<double>(jumlah) / ukuran;
    
    cout << "Angka yang dimasukkan: ";
    for (int i = 0; i < ukuran; ++i) {
        cout << angka[i] << " ";
    }
    cout << endl;
    
    cout << "Jumlah: " << jumlah << endl;
    cout << "Rata-rata: " << rata_rata << endl;
    
	return 0;
}

