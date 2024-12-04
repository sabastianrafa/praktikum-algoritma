#include <iostream>
using namespace std;
void biodata(const string& nama, const string& nim, const string& kelamin){
	cout << "nama : "<< nama <<endl;
	cout << "nim : "<<nim<<endl;
	cout << "jenis kemalmin : "<<kelamin<<endl;
}
int main() {
	string nama, nim, kelamin;
	cout << "masukan nama anda : ";
	getline(cin,nama);
	cout << "masukan nim anda : ";
	getline(cin,nim);
	cout << "masukan jenis kelamin anda : ";
	getline(cin,kelamin);
	cout << endl<<endl;
	biodata(nama,nim,kelamin);
return 0;
}

