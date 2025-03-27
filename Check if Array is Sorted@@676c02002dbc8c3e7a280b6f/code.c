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

  
    int isSorted = 1; 
    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i + 1]) {
            isSorted = 0; 
            break;
        }
    }


    if (isSorted) {
        printf("Sorted\n");
    } else {
        printf("Not Sorted\n");
    }


   // printf("Sorted array: \n");
    //for (int i = 0; i < n; i++) {
      //  printf("%d ", a[i]);
    //}
    //printf("\n")

    return 0;
}

