#include <iostream>
using namespace std;

int main(){
	
	char rumus;
	
	cout<<"1. untuk segitiga\n2. untuk prisma"<<endl;
	cout<<"pilih angka berapa\n";
	cin>>rumus;
	
	if (rumus=='1'){
		int a,t,l;
		cout<<"masukan alas ";cin>>a;
		cout<<"masukan tinggi ";cin>>t;
		l=1.0/2.0*a*t;
		cout<<"luas segitiga adalah "<<l;
	}
	else if (rumus=='2'){
		int a,t,v,tp;
		cout<<"masukan alas ";cin>>a;
		cout<<"masukan tinggi ";cin>>t;
		cout<<"masukan tinggi prisma ";cin>>tp;
		v=((a*t)/2)*tp;
		cout<<"volume prisma segitiga adalah "<<v;
	}
	else {
		cout<<"NO TIDAK ADA";
	}
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
