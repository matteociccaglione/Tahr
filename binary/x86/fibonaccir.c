#include <stdio.h>

// Funzione ricorsiva per calcolare Fibonacci
int fibonacci_ricorsivo(int n) {
    if (n <= 1)
        return n;
    return fibonacci_ricorsivo(n - 1) + fibonacci_ricorsivo(n - 2);
}

int main() {
    int n;
    printf("Fibonacci ricorsivo di %d: %d\n",5 , fibonacci_ricorsivo(5));
    
    return 0;
}

