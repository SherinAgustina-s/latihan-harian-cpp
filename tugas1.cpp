/*
Nama Program : Program Faktorial
Nama         : Sherin Agustina Ikhlas
NPM          : 140810250019
Tanggal Buat : 27 September 2025
Deskripsi    : Program menentukan nilai faktorial dari suatu angka
*/

#include <iostream>
using namespace std;

int faktorial(int a){
    if(a==1){
        return 1;
    }else{
        return(a*faktorial(a-1));
    }
}
int main(){
    int n;
    cin>>n;
    cout<<"nilai faktorial dari "<<n<<" adalah "<<faktorial(n);
}