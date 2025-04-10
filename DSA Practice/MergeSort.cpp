#include<iostream>
#include<vector>
using namespace std;

void input(int arr[], int n) {
    cout << "Enter Elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];
}

void display(int arr[], int n) {
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}

void merge(int arr[], int left, int mid, int right) {
    vector<int> temp(right - left + 1);
    int i = left, j = mid + 1, k = 0;

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) temp[k++] = arr[i++];
        else temp[k++] = arr[j++];
    }
    
    while (i <= mid) temp[k++] = arr[i++];
    while (j <= right) temp[k++] = arr[j++];
    
    for (int i = 0; i < temp.size(); i++) arr[left + i] = temp[i];
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int main() {
    int arr[100], n;
    cin >> n;
    input(arr, n);
    mergeSort(arr, 0, n - 1);
    display(arr, n);
    return 0;
}
