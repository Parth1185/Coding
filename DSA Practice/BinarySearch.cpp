#include <iostream>
using namespace std;

void input(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void display(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


int Binarysearch(int *arr, int n, int ele) {
    int start = 0, end = n - 1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (ele == arr[mid]) {
            return mid;
        } else if (ele > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1;
}

int lowerbound(int *arr, int n, int ele) {
    int start = 0, end = n - 1;
    int low = n; 
    
    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] >= ele) { 
            low = mid;  
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    if (low < n) {
        return arr[low];
    } else {
        return -1;
    }
}

int upperbound(int *arr, int n, int ele) {
    int start = 0, end = n - 1;
    int up = n; 

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] > ele) { 
            up = mid;  
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    if (up < n) {
        return arr[up];
    } else {
        return -1;
    }
}

int findFirstOccurrence(int *arr, int n, int target) {
    int start = 0, end = n - 1;
    int result = -1;  
    
    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target) {
            result = mid; 
            end = mid - 1;
        } 
        else if (arr[mid] > target) {
            end = mid - 1;
        } 
        else {
            start = mid + 1;
        }
    }
    return result;
}

int findLastOccurrence(int *arr, int n, int target) {
    int start = 0, end = n - 1; 

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == target) {
            start = mid + 1; 
            return mid;  
        } 
        else if (arr[mid] > target) {
            end = mid - 1;
        } 
        else {
            start = mid + 1;
        }
    }
    return -1;
}

int main() {
    int *ar, n;
    cout << "Enter number of elements: ";
    cin >> n;

    ar = new int[n];
    cout << "Enter sorted elements: ";
    input(ar, n);

    int key;
    cout << "Enter key: ";
    cin >> key;

    int binaryIndex = Binarysearch(ar, n, key);
    if (binaryIndex != -1) {
        cout << "Element found at index (Binary Search): " << binaryIndex << endl;
    } else {
        cout << "Element not found (Binary Search)." << endl;
    }

    int upper = upperbound(ar, n, key);
    if (upper != -1) {
        cout << "Upper bound of " << key << " is: " << upper << endl;
    } else {
        cout << "No upper bound element found " << endl;
    }

    int lower = lowerbound(ar, n, key);
    if (lower != -1) {
        cout << "Lower bound of " << key << " is: " << lower << endl;
    } else {
        cout << "No lower bound element found" << endl;
    }

    int firstOccurrence = findFirstOccurrence(ar, n, key);
    if (firstOccurrence != -1) {
        cout << "First occurrence of " << key << " is at index: " << firstOccurrence << endl;
    } else {
        cout << "Element not found (First Occurrence)." << endl;
    }

    int lastOccurrence = findLastOccurrence(ar, n, key);
    if (lastOccurrence != -1) {
        cout << "Last occurrence of " << key << " is at index: " << lastOccurrence << endl;
    } else {
        cout << "Element not found (Last Occurrence)." << endl;
    }

    delete[] ar; 
    return 0;
}
