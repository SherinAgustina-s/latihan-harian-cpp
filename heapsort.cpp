
#include <iostream>
using namespace std;

void input(int arr[], int n) {
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
}

void tukar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void heapify(int arr[], int n, int i){
    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;

    if(left < n && arr[left] > arr[largest]){
        largest = left;
    }

    if(right < n && arr[right] > arr[largest]){
        largest = right;
    }

    if(largest != i){
        tukar(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapsort(int arr[], int n){
    for(int i = n/2 - 1; i >= 0; i--){
        heapify(arr, n, i);
    }

    for(int i = n - 1; i > 0; i--){
        tukar(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}


void output(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    input(arr,n);

    heapsort(arr, n); 

    output(arr, n);
}
