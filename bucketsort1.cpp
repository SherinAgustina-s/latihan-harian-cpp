#include <iostream>
using namespace std;

void tampilkan(int data[], int jumlah) {
    for (int posisi = 0; posisi < jumlah; posisi++) {
        cout << data[posisi] << " ";
    }
    cout << endl;
}

void bucketSort(int data[], int jumlah) {

    int nilaiMaks = data[0];
    for (int posisi = 1; posisi < jumlah; posisi++) {
        if (data[posisi] > nilaiMaks) {
            nilaiMaks = data[posisi];
        }
    }

    int bucket[10000] = {0};

    for (int posisi = 0; posisi < jumlah; posisi++) {
        bucket[data[posisi]]++;
    }

    int posisiHasil = 0;

    for (int nilai = 0; nilai <= nilaiMaks; nilai++) {
        while (bucket[nilai] > 0) {
            data[posisiHasil] = nilai;
            posisiHasil++;
            bucket[nilai]--;
        }
    }
}

int main() {
    int jumlah;

    cout << "Masukkan jumlah angka: ";
    cin >> jumlah;

    int data[10000];

    cout << "Masukkan " << jumlah << " angka: ";
    for (int posisi = 0; posisi < jumlah; posisi++) {
        cin >> data[posisi];
    }

    cout << "\nSebelum diurutkan: ";
    tampilkan(data, jumlah);

    bucketSort(data, jumlah);

    cout << "Setelah diurutkan: ";
    tampilkan(data, jumlah);

    return 0;
}
