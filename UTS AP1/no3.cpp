#include <iostream>
using namespace std;

main(){
    system("cls");
    int rata, ap, pds, os;
    string nama, nim;

    cout << "Nama : "; getline(cin, nama);
    cout << "NIM  : "; getline(cin, nim);
    cout << "Nilai mata kuliah : \n";
    cout << "  Nilai Algoritma dan Pemrograman    : "; cin >> ap;
    cout << "  Nilai Probabilitas dan Statistika  : "; cin >> pds;
    cout << "  Nilai Sitem Operasi                : "; cin >> os;

    cout << "Algoritma dan Pemrograman    : ";
    if (ap >= 60){
        cout << "Lulus\n";
    }
    else{
        cout << "Tidak Lulus\n";
    }

    cout << "Probabilitas dan Statistika  : ";
    if (pds >= 60){
        cout << "Lulus\n";
    }
    else{
        cout << "Tidak Lulus\n";
    }

    cout << "Sistem Operasi               : ";
    if (os >= 60){
        cout << "Lulus\n";
    }
    else{
        cout << "Tidak Lulus\n";
    }

    rata = (ap + pds + os) / 3;
    cout << "Nilai Rata-Rata Semester ini : " << rata; 

}