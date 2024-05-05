#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main() {
    int sayi;
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);
    printf("Fibonacci serisindeki %d. terim: %d", sayi, fibonacci(sayi));
    return 0;
}

