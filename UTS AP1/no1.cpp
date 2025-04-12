#include <iostream>
using namespace std;

int main() {
    system("cls");
    int n;
    cout << "Masukkan bilangan N: ";
    cin >> n;

    if (n <= 0) {
        cout << "BUKAN" << endl;
    } 
    else {
        while (n % 2 == 0) { //while ini akan terus mengecek kondisi apakah n mod 2 = 0.
            n = n / 2;  //kemudian N akan dibagi 2, dan menghasilkan nilai N yang baru.
        }

        if (n == 1) {
            cout << "YA" << endl; //jika kondisi dimana n = 1, maka akan langsung mengoutput ya
        } else {
            cout << "BUKAN" << endl; //jika kondisi n != 1, maka akan langsung mengoutput bukan
        }
    }
}

