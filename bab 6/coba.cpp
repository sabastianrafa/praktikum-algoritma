#include <iostream>
using namespace std;

int main ()
{
    int jumlah=0;
    cout<<"Jumlah : ";cin>>jumlah;
    for (int i = 1; i <= jumlah; i++){//Perulangan dimulai
        if ((i % 2)==0) continue; //jika tereksekusi CPU akan meloncat
        cout<<i<<endl; //pernyataan ini akan diabaikan
        //CPU akan mendarat di sini
    }

    return 0;
}
