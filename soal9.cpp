#include <iostream>
#include <string>
using namespace std;

int main() {

    const int kuotaMaks = 3;

    int jumlahPendaftar;
    cout << "Masukkan jumlah pendaftar: ";
    cin >> jumlahPendaftar;

    string nama[jumlahPendaftar];
    string diterima[kuotaMaks];
    string ditolak[jumlahPendaftar];

    int jumlahDiterima = 0;
    int jumlahDitolak = 0;

    cout << "\nMasukkan nama peserta sesuai urutan:\n";

    for (int i = 0; i < jumlahPendaftar; i++) {
        cout << "Peserta ke-" << i + 1 << ": ";
        cin >> nama[i];
    }

    // Proses pendaftaran
    for (int i = 0; i < jumlahPendaftar; i++) {

        if (jumlahDiterima < kuotaMaks) {
            diterima[jumlahDiterima] = nama[i];
            jumlahDiterima++;
        } else {
            ditolak[jumlahDitolak] = nama[i];
            jumlahDitolak++;
            break; // proses berhenti jika kuota penuh
        }
    }

    // Output hasil
    cout << "\nDaftar Peserta Diterima:\n";
    for (int i = 0; i < jumlahDiterima; i++) {
        cout << "- " << diterima[i] << endl;
    }

    cout << "\nDaftar Peserta Ditolak:\n";
    if (jumlahDitolak == 0) {
        cout << "Tidak ada peserta yang ditolak." << endl;
    } else {
        for (int i = 0; i < jumlahDitolak; i++) {
            cout << "- " << ditolak[i] << endl;
        }
    }

    return 0;
}
