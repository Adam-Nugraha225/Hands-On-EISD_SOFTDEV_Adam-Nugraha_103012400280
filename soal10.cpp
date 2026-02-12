#include <iostream>
#include <string>
using namespace std;

int main() {

    int stokBuku = 4;
    int jumlahPeminjam;

    cout << "Masukkan jumlah peminjam: ";
    cin >> jumlahPeminjam;

    string nama[jumlahPeminjam];

    cout << "\nMasukkan nama peminjam sesuai urutan:\n";
    for (int i = 0; i < jumlahPeminjam; i++) {
        cout << "Peminjam ke-" << i + 1 << ": ";
        cin >> nama[i];
    }

    cout << "\nProses Peminjaman Buku:\n" << endl;

    for (int i = 0; i < jumlahPeminjam; i++) {

        if (stokBuku > 0) {
            cout << nama[i] << " berhasil meminjam buku." << endl;
            stokBuku--;
        } else {
            cout << nama[i] << " gagal meminjam buku (stok habis)." << endl;
            break; // simulasi dihentikan
        }
    }

    cout << "\nSisa buku: " << stokBuku << endl;

    return 0;
}
