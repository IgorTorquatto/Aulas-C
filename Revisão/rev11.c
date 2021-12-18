#include <stdio.h>

//Divide um número por 10 até ele ser <0.
int func3 (int n) {
    int c = 0;
    do {
    n = n/10;
    c++;
    } while (n > 0);
    return c;
}
int main () {
    int x;
    scanf("%d", &x);

    printf("%d deu %d", x, func3(x));

    return 0;
}