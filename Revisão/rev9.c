#include <stdio.h>
#include <stdlib.h>

//Matriz dinamicamente:

int main(){
float **v;
int i, j, n, m;
scanf("%d", &n); // Linhas
scanf("%d", &m); // Colunas
v = (float **)malloc(n * sizeof(float *));
for (i = 0 ; i < n ; i++)
v[i] = (float *)malloc(m * sizeof(float));

for (i = 0 ; i < n ; i++)
for (j = 0 ; j < m ; j++)
scanf("%f", &v[i][j]);

return 0;
}