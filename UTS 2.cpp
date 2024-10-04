#include <iostream>
using namespace std;

int main() {
    int tinggi;

    // Meminta input tinggi segitiga dari pengguna
    cout << "Masukkan tinggi piramida: ";
    cin >> tinggi;

    // Loop untuk setiap baris
    for (int i = 1; i <= tinggi; i++) {
        // Loop untuk mencetak spasi
        for (int j = i; j < tinggi; j++) {
            cout << " ";
        }
        // Loop untuk mencetak bintang
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        // Pindah ke baris baru
        cout << endl;
    }

    return 0;
}
