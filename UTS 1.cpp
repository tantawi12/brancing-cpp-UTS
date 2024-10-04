#include <iostream>
#include <string>

using namespace std;

char getHurufMutu(double nilaiAkhir) {
    if (nilaiAkhir >= 85 && nilaiAkhir < 100) return 'A';
    else if (nilaiAkhir >= 80) return 'B';
    else if (nilaiAkhir >= 75) return 'C';
    else if (nilaiAkhir >= 70) return 'D';
    else return 'E';
}

int main() {
    string nama, npm;
    double nilaiAbsen, nilaiTugas, nilaiUTS, nilaiUAS;

    // Input data mahasiswa
    cout << "Masukkan Nama Mahasiswa: ";
    getline(cin, nama);
    cout << "Masukkan NPM Mahasiswa: ";
    getline(cin, npm);
    cout << "Masukkan Nilai Absen (0-100): ";
    cin >> nilaiAbsen;
    cout << "Masukkan Nilai Tugas (0-100): ";
    cin >> nilaiTugas;
    cout << "Masukkan Nilai UTS (0-100): ";
    cin >> nilaiUTS;
    cout << "Masukkan Nilai UAS (0-100): ";
    cin >> nilaiUAS;

    // Hitung nilai akhir
    double nilaiAkhir = (nilaiAbsen * 0.1) + (nilaiTugas * 0.2) + (nilaiUTS * 0.3) + (nilaiUAS * 0.4);

    // Dapatkan huruf mutu
    char hurufMutu = getHurufMutu(nilaiAkhir);

    // Output hasil
    cout << "\n=== Hasil Nilai Akhir Mahasiswa ===" << endl;
    cout << "Nama         : " << nama << endl;
    cout << "NPM          : " << npm << endl;
    cout << "Nilai Absen  : " << nilaiAbsen << endl;
    cout << "Nilai Tugas  : " << nilaiTugas << endl;
    cout << "Nilai UTS    : " << nilaiUTS << endl;
    cout << "Nilai UAS    : " << nilaiUAS << endl;
    cout << "Nilai Akhir  : " << nilaiAkhir << endl;
    cout << "Huruf Mutu   : " << hurufMutu << endl;

    return 0;
}
