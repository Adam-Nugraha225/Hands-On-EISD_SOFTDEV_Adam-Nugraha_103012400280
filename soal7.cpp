#include <iostream>
#include <string>
using namespace std;

int main() {

    const int jumlahData = 5;

    string nama[jumlahData];
    string status[jumlahData];
    int nilai[jumlahData];

    cout << "Masukkan data 5 peserta:\n" << endl;

    // Input manual
    for (int i = 0; i < jumlahData; i++) {
        cout << "Peserta ke-" << i + 1 << endl;

        cout << "Nama   : ";
        cin >> nama[i];

        cout << "Status : ";
        cin >> status[i];

        cout << "Nilai  : ";
        cin >> nilai[i];

        cout << endl;
    }

    cout << "Hasil Filter dan Data Mapping:\n" << endl;

    bool adaData = false;

    // Proses filter dan mapping
    for (int i = 0; i < jumlahData; i++) {
        if (status[i] == "active" && nilai[i] >= 80) {

            cout << "nama  : " << nama[i] << endl;
            cout << "nilai : " << nilai[i] << endl;
            cout << endl;

            adaData = true;
        }
    }

    if (!adaData) {
        cout << "Tidak ada peserta yang memenuhi kriteria." << endl;
    }

    return 0;
}
