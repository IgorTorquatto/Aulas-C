#include <stdio.h>

//Verificar se o numero é primo:

int func2 (int n) {
    int i;
    for (i = 2 ; i < n ; i++) {
    if (n%i == 0) {
    return 0;
}
}
return 1;
}
int main () {
    int x;
    scanf("%d", &x);

    if (func2(x) == 1) {
    printf("Verdadeiro");
    }
    else {
    printf("Falso");
    }

    return 0;
}

