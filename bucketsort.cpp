#include <iostream>
using namespace std;

void bucketSort(int arr[], int n) {
    int maxVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal)
            maxVal = arr[i];
    }

    int *bucket = new int[maxVal + 1];
    for (int i = 0; i <= maxVal; i++)
        bucket[i] = 0;

    for (int i = 0; i < n; i++)
        bucket[arr[i]]++;

    int k = 0;
    for (int i = 0; i <= maxVal; i++) {
        while (bucket[i] > 0) {
            arr[k++] = i;
            bucket[i]--;
        }
    }

    delete[] bucket;
}

int main() {
    int data[] = {42, 32, 23, 52, 25, 47, 51};
    int n = sizeof(data) / sizeof(data[0]);

    bucketSort(data, n);

    cout << "Hasil sort: ";
    for (int i = 0; i < n; i++)
        cout << data[i] << " ";
    cout << endl;

    return 0;
}