#include <iostream>
using namespace std;

int countvowels(const char* str) {
    int count = 0;
    while (*str) {
        char character = tolower(*str);
        if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u') {
            count++;
        }
        str++;
    }
    return count;
}

int lenghtstring(const char* str) {
    int length = 0;
    while (*str) {
        length++;
        str++;
    }
    return length;
}

int reverse(const char* str, char* reversed) {
    int length = lenghtstring(str);
    for (int i = 0; i < length; i++) {
        reversed[i] = str[length - 1 - i];
    }
    reversed[length] = '\0';
    return length;
}
int main() {
    char str[100];
    char reversed[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    int vowelCount = countvowels(str);
    int length = lenghtstring(str);
    reverse(str, reversed);

    cout << "Number of vowels: " << vowelCount << endl;
    cout << "Length of the string: " << length << endl;
    cout << "Reversed string: " << reversed << endl;

    return 0;
}