# practise1

Задание 1

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

Задание 2

#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cout << "Stroka: ";
    getline(cin, str);
    int start = 0;
    int end = 0;
    while (end <= str.length()) {
        if (end == str.length() || str[end] == ' ') {
            int left = start;
            int right = end - 1;
            
            while (left < right) {
                char temp = str[left];
                str[left] = str[right];
                str[right] = temp;
                left++;
                right--;
            }
            start = end + 1;
        }
        end++;
    }
    cout << "Result: " << str << endl;
    return 0;
}
