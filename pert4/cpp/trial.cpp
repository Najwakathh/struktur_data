#include <iostream>
using namespace std;

int main() {
    int a, b;
    
    cout << "Masukkan bilangan pertama: ";
    cin >> a;
    cout << "Masukkan bilangan kedua: ";
    cin >> b;
    
    int Tambah = a + b;
    int Kurang = a - b;
    int Kali = a * b;
    int Bagi = a / b;

    cout << "Hasil Penjumlahan: " << Tambah << endl;
    cout << "Hasil Pengurangan: " << Kurang << endl;
    cout << "Hasil Perkalian: " << Kali << endl;
    cout << "Hasil Pembagian: " << Bagi << endl;

    return 0;
}