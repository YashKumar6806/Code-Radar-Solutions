// Your code here... 
#inlcude<stdio.h>
#include <math.h>


int isPrime(int num) {
    if (num <= 1) {
        return 0;  
    }
    
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0; 
        }
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);  
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int primeCount = 0;
    for (int i = 0; i < n; i++) {
        if (isPrime(a[i])) {
            primeCount++;
        }
    }
    printf("%d\n", primeCount);

    return 0;
}
