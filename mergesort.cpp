#include <iostream>
using namespace std;

void input(int arr[], int n) {
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
}

void merge(int arr[], int left, int mid, int right){
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int LeftArr[n1];
    int RightArr[n2];

    for(int i = 0; i < n1; i++){
        LeftArr[i] = arr[left + i];
    }

    for(int i = 0; i < n2; i++){
        RightArr[i] = arr[mid + 1 + i];
    }

    int i = 0;
    int j = 0;
    int k = left;

    while(i < n1 && j < n2){
        if(LeftArr[i] <= RightArr[j]){
            arr[k] = LeftArr[i];
            i++;
        } else {
            arr[k] = RightArr[j];
            j++;
        }
        k++;
    }

    while(i < n1){
        arr[k] = LeftArr[i];
        i++;
        k++;
    }

    while(j < n2){
        arr[k] = RightArr[j];
        j++;
        k++;
    }
}

void mergesort(int arr[], int left, int right){
    if(left >= right){
        return;
    }

    int mid = left + (right - left)/2;
    mergesort(arr, left, mid);
    mergesort(arr, mid+1, right);

    merge(arr, left, mid, right);
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

    mergesort(arr, 0, n-1);

    output(arr, n);
}