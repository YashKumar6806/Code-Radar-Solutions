#include <stdio.h>

#include <stdio.h>

int main() {
    int n;
    printf("Enter length for array: ");
    scanf("%d", &n);

    int a[n];
    int temp;

    // Input elements into the array
    printf("Enter elements of the array: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Bubble sort to sort the array in ascending order
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                // Swap the elements
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // Check if the array is sorted in ascending order
    int isSortedAscending = 1;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            isSortedAscending = 0;
            break;
        }
    }

    // Check if the array is sorted in descending order
    int isSortedDescending = 1;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] < a[i + 1]) {
            isSortedDescending = 0;
            break;
        }
    }

    // Output result based on the sorting order
    if (isSortedDescending) {
        printf("Not Sorted\n");  // If the array is sorted in descending order
    } else if (isSortedAscending) {
        printf("Sorted\n");  // If the array is sorted in ascending order
    } else {
        printf("Not Sorted\n");  // If the array is not sorted
    }

    // Optional: print the sorted array
    printf("Sorted array: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}



 


 









  
  


     





  

























