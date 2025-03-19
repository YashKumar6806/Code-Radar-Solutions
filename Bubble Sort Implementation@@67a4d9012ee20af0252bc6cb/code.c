// Your code here...

#include <stdio.h>

// Bubble sort function
void bubbleSort(int a[], int b) {
    for (int i = 0; i < b - 1; i++) {
        for (int j = 0; j < b - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                // Swap the elements if they are in the wrong order
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

// Function to print the array
void printArray(int a[], int b) {
    for (int i = 0; i < b; i++) {
        printf("%d ", a[i]);
    }
    printf("\n"); // Add newline at the end of the output
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Original array: ");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("Sorted array: ");
    printArray(arr, n);

    return 0;
}


