#include <iostream>
using namespace std;

int main() {
    int kuota, terdaftar;

    cout << "Masukkan kuota maksimal: ";
    cin >> kuota;

    cout << "Masukkan jumlah peserta terdaftar: ";
    cin >> terdaftar;

    if (terdaftar < kuota - 3) {
        cout << "Status: Pendaftaran diterima" << endl;
    }
    else if (terdaftar >= kuota - 3 && terdaftar < kuota) {
        cout << "Status: Hampir penuh" << endl;
    }
    else if (terdaftar == kuota) {
        cout << "Status: Pendaftaran ditutup" << endl;
    }
    else {
        cout << "Status: Pendaftaran ditolak" << endl;
    }

    return 0;
}
