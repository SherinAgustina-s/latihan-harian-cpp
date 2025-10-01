/*
Nama Program : Program Membalik Angka
Nama         : Sherin Agustina Ikhlas
NPM          : 140810250019
Tanggal Buat : 28 September 2025
Deskripsi    : program membalikkan angka yang diinput
*/

#include <iostream>
using namespace std;

int reverseNumber(int n, int rev = 0) {
    if (n == 0){
        return rev;
    }else{
    int digit = n % 10;
    rev = rev * 10 + digit;
        return reverseNumber(n / 10, rev);
    }
}

int main() {
    int a;
    cout << "Masukkan angka: ";
    cin >> a;
    cout << "Setelah dibalik: " << reverseNumber(a) << endl;
    return 0;
}
