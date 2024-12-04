# include <iostream>
using namespace std;

void data(int jumlah) {
    int data, total = 0;
	for(int i = 1; i <= jumlah; i++) {
        cout <<"data ke-"<<i<<" ";cin>>data;
        total = total + data;
    }
    cout <<"total adalah "<<total;
}
int main() {
    int jumlah;
	cout << "== input data ==" << endl;
    cout << "MASUKKAN JUMLAH PERULANGAN : ";cin >> jumlah;
    data(jumlah);
    return 0;
}
