/*
Nama Program : Program Deret Fibonacci
Nama         : Sherin Agustina Ikhlas
NPM          : 140810250019
Tanggal Buat : 30 September 2025
Deskripsi    : Program menghitung elemen ke-n dalam deret fibonacci
*/

#include <iostream>
using namespace std;

int F(int n){
    if (n == 0 || n == 1) {
    return n;
    }else {
        return F(n-1) + F(n-2); 
    }
}
int main(){

    int n;
    cout << "Masukkan jumlah deret: ";
    cin  >> n;
    cout << "Fibonacci " << n << " deret : " << endl;

    for (int i = 0; i < n; i++){
       cout << F(i) << " ";
    }
}