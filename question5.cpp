#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char arr[][10] = {"siddhant", "car", "lion", "animal", "machinery"};
    int n = 5;
    cout << "Before Sorting: \n";
    for (string elem : arr) {
        cout << elem << " ";
    }
    cout << endl;
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-1-i; j++) {
            if(strcmp(arr[j], arr[j + 1]) > 0) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
    cout << "After Sorting: \n";
    for (string elem : arr) {
        cout << elem << " ";
    }
    cout << endl;
}