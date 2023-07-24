// Find minimum and maximum element in an array of integers

#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector<int> arr = {13, 12, 3, 5, 8};
    int min = arr[0];
    int max = arr[0];

    for(int i=0; i<arr.size(); i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "Minimum element: " << min << endl;
    cout << "Maximum element: " << max << endl;

    return 0;
}