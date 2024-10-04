#include <iostream>
using namespace std;

int main() {
    // Input: Meminta berat badan dan tinggi badan dari pengguna
    float berat, tinggi, imt;
    cout << "Masukkan berat badan Anda (dalam kg): ";
    cin >> berat;
    cout << "Masukkan tinggi badan Anda (dalam meter): ";
    cin >> tinggi;

    // Proses: Menghitung Indeks Massa Tubuh (IMT)
    imt = berat / (tinggi * tinggi);

    // Output hasil IMT
    cout << "\nIndeks Massa Tubuh (IMT) Anda adalah: " << imt << endl;

    // Kondisi: Menentukan kategori berdasarkan nilai IMT
    if (imt < 18.4) {
        cout << "Berat badan kurang." << endl;

    } else if (imt >= 18.5 && imt < 24.9) {
        cout << "Berat badan ideal." << endl;
        } else if (imt >= 25 && imt < 29.9) {
        cout << "Berat badan lebih." << endl;
            } else if (imt >= 30 && imt < 39.9) {
        cout << "Gemuk." << endl;
            } else if (imt >= 30) {
        cout << "Sangat Gemuk." << endl;


    return 0;
            }
}
