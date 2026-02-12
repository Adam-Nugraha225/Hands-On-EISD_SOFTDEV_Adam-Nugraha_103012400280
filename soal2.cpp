#include <iostream>
#include <string>
using namespace std;

struct StudyGroup {
    string nama;
    int kuota;
    int terdaftar;
};

int main() {
    int n;
    cout << "Masukkan jumlah study group: ";
    cin >> n;

    StudyGroup groups[n];

    for (int i = 0; i < n; i++) {
        cout << "\nStudy Group ke-" << i + 1 << endl;

        cout << "Nama Study Group: ";
        cin >> groups[i].nama;  

        cout << "Kuota: ";
        cin >> groups[i].kuota;

        cout << "Jumlah Terdaftar: ";
        cin >> groups[i].terdaftar;
    }

    cout << "\nStudy Group yang masih tersedia:\n";
    for (int i = 0; i < n; i++) {
        if (groups[i].terdaftar < groups[i].kuota) {
            cout << "- " << groups[i].nama << endl;
        }
    }

    cout << "\nStudy Group yang sudah penuh:\n";
    for (int i = 0; i < n; i++) {
        if (groups[i].terdaftar >= groups[i].kuota) {
            cout << "- " << groups[i].nama << endl;
        }
    }

    return 0;
}
