#include <iostream>
using namespace std;
int main() {
	cout<<"\t## Progam Perpangkatan 3 ##"<<endl<<endl;
	int suku,a,b,c = 3,total;
	cout<<"masukan suku ke-";
	cin>>suku;
	cout <<endl;
	for(a=1; a<=suku; a++) {
		cout<<c<<"  ";
		c = c * 3;
		total = total + c / 3;
	}
	cout<<"\n\ntotal semua suku = "<<total;
	return 0;
}
