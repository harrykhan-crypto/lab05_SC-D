
#include <iostream>
using namespace std;

int main() {
    // Step 1: Declare and initialize array
    int arr[] = {45, 12, 78, 23, 9, 56, 34};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Step 2: Find maximum and minimum
    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }

        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Step 3: Bubble Sort in ascending order
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Step 4: Display results
    cout << "Maximum Element: " << max << endl;
    cout << "Minimum Element: " << min << endl;

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}

