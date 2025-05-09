#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Read the number of elements

    int a[n];

    // Read the elements into the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int primeCount = 0;

    // Loop through each element and check if it's prime
    for (int i = 0; i < n; i++) {
        int num = a[i];
        int isPrime = 1;

        if (num <= 1) {
            isPrime = 0;  // 0 and 1 are not prime numbers
        }

        // Check divisibility from 2 to num-1 (simplified version)
        for (int j = 2; j < num; j++) {
            if (num % j == 0) {
                isPrime = 0;  // num is divisible by j, so it's not prime
                break;
            }
        }

        // If the number is prime, increment the prime count
        if (isPrime) {
            primeCount++;
        }
    }

    // Print the total number of prime numbers
    printf("%d\n", primeCount);

    return 0;
}
