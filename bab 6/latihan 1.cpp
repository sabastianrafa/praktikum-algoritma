#include<iostream>
using namespace std;
main()
{
int i, a=0, b=1, c, n;
cout << "masukan angka : "; cin>>n;
cout<<a<<" "<<b<<" ";
	while(i<=n-3){
		c=a+b;
		a=b;
		b=c;
		cout<<c<<" ";
		i++;
	}
}
