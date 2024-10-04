#include <iostream>
#include <vector>
using namespace std;

// Fungsi untuk memeriksa apakah bilangan prima
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Fungsi untuk menampilkan faktor dari sebuah bilangan
void displayFactors(int n) {
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
}
int main() {
    int batas;
    int jumlahGanjil = 0, jumlahGenap = 0, jumlahPrima = 0;

    cout << "Masukkan angka: ";
    cin >> batas;

    cout << "\nBilangan Ganjil:\n";
    for (int i = 1; i <= batas; i++) {
        if (i % 2 != 0) {
            cout << i << " (Faktor: ";
            displayFactors(i);
            cout << ")\n";
            jumlahGanjil++;
        }
    }

    cout << "\nBilangan Genap:\n";
    for (int i = 1; i <= batas; i++) {
        if (i % 2 == 0) {
            cout << i << " (Faktor: ";
            displayFactors(i);
            cout << ")\n";
            jumlahGenap++;
        }
    }


    cout << "\nJumlah bilangan ganjil: " << jumlahGanjil << endl;
    cout << "Jumlah bilangan genap: " << jumlahGenap << endl;
    cout << "Jumlah bilangan prima: " << jumlahPrima << endl;

    return 0;
}
