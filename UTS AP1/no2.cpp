#include <iostream>
#include <string>
using namespace std;

int main() {
    system("cls");
    string biner;
    cout << "masukkan biner : ";
    cin >> biner;
    int desimal = 0;
    int pangkat = 1;

    for (char digit : biner) { //menyatakan string digit = biner
        if (digit != '0' && digit != '1') { //jika biner atau yang sudah menjadi digit != 0 dan digit != 1
            cout << "Pesan Rusak!" << endl;
            return 0;
        }
    }

    for (int i = biner.length() - 1; i >= 0; i--) { //perulangan ini membaca string biner dari kanan ke kiri
        if (biner[i] == '1') { //ketika ditemukan '1' di string biner, maka
            desimal = desimal + pangkat; //desimal yang awalnya 0 akan ditambah dengan pangkat yang nilai awal nya adalah 1 kemudian,
        }
        pangkat = pangkat * 2; //pangkat akan terus dikalikan dengan 2
    }

    cout << "desimal dari " << biner << " adalah = " << desimal << endl;
}
