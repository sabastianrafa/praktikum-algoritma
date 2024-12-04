#include <iostream>
using namespace std;

int main() {
	char bayar;
    	do{
			cout<<"BYAR UTANG SEKARANG!!! y/n : ";cin>>bayar;
			if (bayar =='y'){cout<<"ok";}
			else{cout<<"HARUS BAYAR !!!   ";}
		}
		while(bayar != 'y');
    return 0;
}

