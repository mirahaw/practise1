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
