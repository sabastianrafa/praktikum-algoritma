#include<iostream>
using namespace std;

int main(){
	int a,b,bb,c,d,e,ee;
	
	cout<<"a. ";
	for (a = -5 ; a >= -40 ;a-=7 ) {
      cout<<a<<"  ";
	}
	
	cout<<"\nb. ";
	for (b=1,bb=-3;b<=81,bb>=-243;b*=9,bb*=9) {
      cout<<b<<" "<<bb<<" ";
	}
	
	cout<<"\nc. ";
	for(c=0,d=6;c<=5,d<=21;c++,d=c+d){
		cout<<d<<"  ";
	}
	
	cout<<"\nd. ";
  for (int i = 1; i < 10; i++) {
    if (i == 3 || i == 5 || i == 7) {
      continue;
    }
    cout << i << "  ";
  }  
}
