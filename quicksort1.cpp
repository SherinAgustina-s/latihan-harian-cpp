#include <iostream>
using namespace std;

int tukar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    return 1;
}

int bagi(int data[], int kiri, int kanan) {
    int pivot = data[kanan];
    int i = kiri - 1;

    for (int j = kiri; j < kanan; j++) {
        if (data[j] < pivot) {
            i++;
            tukar(data[i], data[j]);
        }
    }

    tukar(data[i + 1], data[kanan]);
    return i + 1;
}

int quickSort(int data[], int kiri, int kanan) {
    if (kiri < kanan) {
        int pos = bagi(data, kiri, kanan);
        quickSort(data, kiri, pos - 1);
        quickSort(data, pos + 1, kanan);
    }
    return 1;
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
