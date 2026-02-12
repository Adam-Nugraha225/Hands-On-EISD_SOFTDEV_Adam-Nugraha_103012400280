#include <iostream>
#include <string>
using namespace std;

int main() {

    const int jumlahData = 5;

    string nama[jumlahData];
    string status[jumlahData];
    string kategori[jumlahData];
    int nilai[jumlahData];

    cout << "Masukkan data 5 peserta:\n" << endl;

    // Input manual
    for (int i = 0; i < jumlahData; i++) {

        cout << "Peserta ke-" << i + 1 << endl;

        cout << "Nama            : ";
        cin >> nama[i];

        cout << "Status Akun     : ";
        cin >> status[i];

        cout << "Kategori Kelas  : ";
        cin >> kategori[i];

        cout << "Nilai Evaluasi  : ";
        cin >> nilai[i];

        cout << endl;
    }

    cout << "Peserta yang memenuhi syarat kelas lanjutan:\n" << endl;

    bool adaData = false;

    // Proses filtering
    for (int i = 0; i < jumlahData; i++) {

        if (status[i] == "active" && kategori[i] == "Web" && nilai[i] >= 80) {

            cout << "Nama  : " << nama[i] << endl;
            cout << "Nilai : " << nilai[i] << endl;
            cout << endl;

            adaData = true;
        }
    }

    if (!adaData) {
        cout << "Tidak ada peserta yang memenuhi syarat." << endl;
    }

    return 0;
}
