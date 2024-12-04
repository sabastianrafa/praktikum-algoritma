#include <iostream>
using namespace std;

int main() {
    cout << "\na. ";
    int a = 22;
    do{
        cout << a << " ";
        if(a == 12){
            a -= 12;
            continue;
        }
        a -= 5;
    }
    while(a >= -20);
cout <<"\n\n===============================\n\n";
    cout << "b. ";
    char hurufb = 'F';
    do{
        cout << hurufb << " ";
        hurufb += 3;
    }
    while(hurufb <= 'R');
cout <<"\n\n===============================\n\n";
    cout << "c. \n";
    char hurufc = 'Y';
    do {
        cout<<hurufc<<endl;
        hurufc -= 5;
    }
    while(hurufc >= 'A');
cout <<"\n\n===============================\n\n";
    cout << "d. ";
    int loop = 0, angka = 4;
    char hurufd = 'd';
    do {
        cout << angka << " ";
        cout << hurufd << " ";
        loop++;
        angka += loop;
        hurufd += loop;
    }
    while(loop < 5);
cout <<"\n\n===============================\n\n";
    cout << "e. ";
    int keluaran = -17, looper = 0;
    do {
        cout << keluaran << " ";
		    if(looper == 2)
		    {
		        keluaran += 12;
		        looper++;
		        continue;
		    }
	    keluaran += 6;
	    looper++;
    }
    while(keluaran <= 13);
cout <<"\n\n===============================\n\n";
    cout << "f. ";
    int well = 4, loopnya = 0;
    char done = 'K';
	do {
        cout << done << "  ";
        cout << well << "  ";
        loopnya++;
        well += loopnya;
        done -= 2;
    }
    while(loopnya<=5);
cout <<"\n";
}
