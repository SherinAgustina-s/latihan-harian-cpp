/*
Nama Program : Program menghitung jumlah
Nama         : Sherin Agustina Ikhlas
NPM          : 140810250019
Tanggal Buat : 1 Oktober 2025
Deskripsi    : Program menghitung jumlah angka dari 1 sampai a
*/

#include <iostream>
using namespace std;

int sum(int n) {
    if (n==0) {
        return 0;
    }else{
        return n + sum(n-1);
    }
}

int main(){
int a;
cout << "Masukkan angka positif: ";
cin >> a;
cout << "Jumlah angka dari 1 sampai " << a << " adalah " <<sum (a) << endl;
}