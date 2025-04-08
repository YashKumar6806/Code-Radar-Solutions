#include <stdio.h>
#include <math.h>

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
        int isPrime = 1;  // Assume the number is prime initially

        if (num <= 1) {
            isPrime = 0;  // 0 and 1 are not prime numbers
        } else {
            // Check divisibility from 2 to sqrt(num)
            for (int j = 2; j <= sqrt(num);
