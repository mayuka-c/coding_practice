// Find second largest element in an array

#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;

// Regular approach
int secondLargestFirst(vector<int> &arr) {
    int max = arr[0];
    int secmax = 0;

    for(int i=0; i<arr.size(); i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    for(int i=0; i<arr.size(); i++) {
        if (arr[i] != max && arr[i] > secmax && secmax < max) {
            secmax = arr[i];
        }
    }

    return secmax;
}

// optimized approach
int secondLargestSecond(vector<int> &arr) {
    int largest = INT_MIN;
    int second_largest = INT_MIN;

    for (int i = 0; i < arr.size(); i ++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }
    return second_largest;
}



int main() {

    vector<int> arr = {13, 2, 3, 5, 8};

    cout << "Second maximum element: " << secondLargestFirst(arr) << endl;
    cout << "Second maximum element: " << secondLargestSecond(arr) << endl;

    return 0;
}