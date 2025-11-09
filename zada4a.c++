#include <iostream>
using namespace std;

int sum(int num){
    num = abs(num);
    int total = 0;
    while(num > 0){
        total += num % 10;
        num /= 10;
    }
    return total;
}
int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    cout << "Sum of digits: " << sum(number) << endl;
    return 0;
}