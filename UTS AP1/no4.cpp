#include <iostream>
using namespace std;

int main(){
    system("cls");
    string kalimat;
    int i;
    int jumlah = 0;

    cout << "masukkan mantra : ";
    getline(cin, kalimat);

    for(i = 0; i < kalimat.length(); i++){ //untuk mengecek string kalimat yang kita input, dimulai dari kiri kekanan
        if(kalimat[i] == 'a' || kalimat[i] == 'i' || kalimat[i] == 'u' || kalimat[i] == 'e' || kalimat[i] == 'o' || 
           kalimat[i] == 'A' || kalimat[i] == 'I' || kalimat[i] == 'U' || kalimat[i] == 'E' || kalimat[i] == 'O'){ //jika ditemukan semua vokal maka,
           jumlah = jumlah + 1; //jumlah yang awalnya bernilai 0 akan terus ditambah 1 sampai string nya selesai di cek
        }
    }

    if (jumlah > 0){
        cout << "Kekuatan mantra: " << jumlah << " vokal" << endl;
    }
    else{
        cout << "Mantra tidak valid! Tidak mengandung vokal.";
    }
}