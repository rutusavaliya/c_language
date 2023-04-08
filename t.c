#include<stdio.h>

int main() {
    // define two arrays
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};
    int n = sizeof(arr1)/sizeof(arr1[0]);

    // multiply arrays element-wise
    int result[n];
    for (int i = 0; i < n; i++) {
        result[i] = arr1[i] * arr2[i];
    }

    // print the result
    std::cout << "[ ";
    for (int i = 0; i < n; i++) {
        std::cout << result[i] << " ";
    }
    std::cout << "]" << std::endl;

    return 0;
}
