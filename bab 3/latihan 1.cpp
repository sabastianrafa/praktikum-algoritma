#include <iostream>
using namespace std;

int main (){
	
	string u;
	int p;
	
	cout<<"masukan username : ";
	cin>>u;
	cout<<"masukan password : ";
	cin>>p;
	
	 if ((u == "sabastian") && (p == 123)){
	     cout<<"LOGIN SUKSES";
		 }
	else {
	 cout<<"\nLOGIN GAGAL";
	 }
	
}
