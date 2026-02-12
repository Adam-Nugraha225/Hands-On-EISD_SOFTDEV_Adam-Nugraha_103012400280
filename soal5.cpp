#include <iostream>
using namespace std;

int main() {

    int peserta[4];
    int jumlahGroup = 4;

    int totalPeserta = 0;
    int rataRata;

    cout << "Masukkan jumlah peserta untuk setiap Study Group:" << endl;

    cout << "Web Development Dasar: ";
    cin >> peserta[0];

    cout << "Logic & Algorithm: ";
    cin >> peserta[1];

    cout << "Frontend Fundamental: ";
    cin >> peserta[2];

    cout << "Backend Introduction: ";
    cin >> peserta[3];

    // Menghitung total peserta (accumulator)
    for (int i = 0; i < jumlahGroup; i++) {
        totalPeserta = totalPeserta + peserta[i];
    }

    // Menghitung rata-rata (pembagian bilangan bulat)
    rataRata = totalPeserta / jumlahGroup;

    // Menampilkan hasil
    cout << "\nTotal seluruh peserta terdaftar: " << totalPeserta << endl;
    cout << "Rata-rata peserta per Study Group: " << rataRata << endl;

    return 0;
}
