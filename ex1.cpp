#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Massive size: ";
    cin >> n;
    int* arr = new int[n];
     cout << "Введите " << n << "etements:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
    }
    int threshold;
    cout << "\nMax value: ";
    cin >> threshold;
    cout << "Old massive: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    int newSize = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] <= threshold) {
            newSize++;
        }
    int* newArr = new int[newSize];
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] <= threshold) {
            newArr[j++] = arr[i];
        }
    }
    delete[] arr;
    arr = newArr;
    n = newSize;
    cout << "New massive: ";
    if (n > 0) {
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
    } else {
        cout << "Massive clear";
    }
    cout << endl;
    return 0;
}
}
