#include <stdio.h>

//Passar os argumentos por referência: ( Comparar com rev15.c)
int func (int *x) {
    int y = 1;
    *x = 2;
    return (*x)*y;
}

int main () {
    int x = 1;
    func(&x);
    printf("%d", x);
    return 0;
}