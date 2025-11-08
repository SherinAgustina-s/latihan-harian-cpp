#include <iostream>
using namespace std;

void tukar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int bagi(int data[], int kiri, int kanan) {
    int tengah = data[kanan];
    int i = kiri - 1;

    for (int j = kiri; j < kanan; j++) {
        if (data[j] < tengah) {
            i++;
            tukar(data[i], data[j]);
        }
    }

    tukar(data[i + 1], data[kanan]);
    return i + 1;
}

void quickSort(int data[], int kiri, int kanan) {
    if (kiri < kanan) {
        int posisi = bagi(data, kiri, kanan);
        quickSort(data, kiri, posisi - 1);
        quickSort(data, posisi + 1, kanan);
    }
}

int main() {
    int n;
    cout << "Masukkan jumlah elemen: ";
    cin >> n;

    int data[n];
    cout << "Masukkan " << n << " angka: ";
    for (int i = 0; i < n; i++) {
        cin >> data[i];
    }

    quickSort(data, 0, n - 1);

    cout << "Data setelah diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << data[i] << " ";
    }

    return 0;
}