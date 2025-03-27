#include <stdio.h>

#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    int a[n];
    int temp;



    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }


    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {

                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }


    int isSortedAscending = 1;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            isSortedAscending = 0;
            break;
        }
    }


    int isSortedDescending = 1;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] < a[i + 1]) {
            isSortedDescending = 0;
            break;
        }
    }


    if (isSortedDescending) {
        printf("Not Sorted\n");  // If the array is sorted in descending order
    } else if (isSortedAscending) {
        printf("Sorted\n");  // If the array is sorted in ascending order
    } else {
        printf("Not Sorted\n");  // If the array is not sorted
    }


   // printf("Sorted array: \n");
 //   for (int i = 0; i < n; i++) {
  //      printf("%d ", a[i]);
 //   }
//    printf("\n");

    return 0;
}



 


 









  
  


     





  

























