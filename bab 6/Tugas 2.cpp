#include<iostream>
using namespace std;

int main() {
    int jam = 1, menit = 60, m = 0, detik = 3600, d = 0;
    cout<<"\tKONVERSI JAM"<<endl<<endl;
    do{
    	m = m + menit;
    	d = d + detik;
		cout<<jam<<" Jam "<<m<<" Menit "<<d<<" Detik"<<endl;
    	jam++;
	}
	while(jam<=10);
}
