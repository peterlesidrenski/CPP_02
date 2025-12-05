#include <iostream>
using namespace std;
int* max_element(int arr[], int n) {
    int *max = &arr[0];        
    for (int i = 1; i < n; i++) {
        if (arr[i] > *max) {   
            max = &arr[i];     
        }
    }
    return max;                
}
int main() {
    int myNumbers[10] = {5, 12, 33, -1, 105, 4, 107, 90, 2, 0};
    int* result = max_element(myNumbers, 10);

    cout << "The max number is: " << *result << endl;
    cout << "Address   = " << result << endl;
    return 0;
}
