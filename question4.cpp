#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {
    int arr[] = {7, 9, 3, 4, 5, 8, 2, 6, 0, 1};
    int n = 10;

    for(int ele  : arr) {
        cout << ele << " ";
    }

    cout << endl;

    for(int i = 0; i < n-1; i++) {
        int min = INT_MAX;
        int mindx = -1;
        for(int j = i; j < n; j++) {
            if(arr[j] < min) {
                min = arr[j];
                mindx = j;
            }
        }

        swap(arr[i], arr[mindx]);
    }

    swap(arr[0], arr[2]);

    int num1 = 0;
    int num2 = 0;

    for(int ele  : arr) {
        if(ele % 2 == 0) {
            num1 = num1 * 10 + ele;
        }
        else {
            num2 = num2 * 10 + ele;
        }
    }
    cout << "The two numbers are: \n";
    cout << num1;
    cout << endl;
    cout << num2 << endl;
}

