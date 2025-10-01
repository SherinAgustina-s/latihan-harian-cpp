/*
Nama Program : Program Menghitung Pangkat
Nama         : Sherin Agustina Ikhlas
NPM          : 140810250019
Tanggal Buat : 29 September 2025
Deskripsi    : Program menghitung nilai dari a pangkat b
*/

#include <iostream>
using namespace std;

int pangkat(int a, int b){
    if(b==0){
        return 1;
    }else{
        return a * pangkat(a, b-1);
    }
}

int main(){
int a,b;
cout<<"Masukkan angka : ";
cin>>a;
cout<<"Masukkan nilai pangkat : ";
cin>>b;
cout<<endl;
cout<<a<<" pangkat "<<b<<" = "<<pangkat(a,b)<<endl;
}