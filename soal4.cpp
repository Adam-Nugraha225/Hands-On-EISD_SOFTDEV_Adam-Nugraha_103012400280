#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama, email, divisi;
    int jumlahPeserta;

    cout << "Masukkan nama peserta: ";
    cin >> nama;

    cout << "Masukkan email: ";
    cin >> email;

    cout << "Masukkan pilihan divisi: ";
    cin >> divisi;

    cout << "Masukkan jumlah peserta terdaftar: ";
    cin >> jumlahPeserta;

    bool valid = true;
    bool adaAt = false;
    int posisiAt = -1;
    int panjangEmail = 0;

    for (int i = 0; email[i] != '\0'; i++) {
        if (email[i] == '@') {
            adaAt = true;
            posisiAt = i;
        }
        panjangEmail++;
    }


    if (nama == "") {
        valid = false;
    }
    if (email == "" || adaAt == false || posisiAt == 0 || posisiAt == panjangEmail - 1 || panjangEmail < 3) {
        valid = false;
    }


    if (divisi == "") {
        valid = false;
    }
    if (jumlahPeserta < 1) {
        valid = false;
    }
    
    if (valid) {
        cout << "Data valid" << endl;
    } else {
        cout << "Data tidak valid" << endl;
    }

    return 0;
}
