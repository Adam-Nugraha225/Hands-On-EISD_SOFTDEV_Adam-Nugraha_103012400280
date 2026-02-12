#include <iostream>
#include <string>
using namespace std;

int main() {

    string email[6];
    int jumlahData = 6;
    bool adaDuplikat = false;

    cout << "Masukkan 6 email peserta:" << endl;

    // Input manual
    for (int i = 0; i < jumlahData; i++) {
        cout << "Email ke-" << i + 1 << ": ";
        cin >> email[i];
    }

    cout << "\nEmail yang terdeteksi duplikat:" << endl;

    // Cek duplikat
    for (int i = 0; i < jumlahData; i++) {
        for (int j = i + 1; j < jumlahData; j++) {

            if (email[i] == email[j]) {
                cout << "- " << email[i] << endl;
                adaDuplikat = true;
                break; // agar tidak tampil dua kali dari indeks yang sama
            }

        }
    }

    if (!adaDuplikat) {
        cout << "Tidak ada data duplikat." << endl;
    }

    return 0;
}
