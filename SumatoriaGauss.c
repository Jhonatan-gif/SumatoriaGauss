#include <stdio.h>

int main(){

    int num;
    int suma=0;

    printf("Ingrese el numero: ");
    scanf("%d",&num);

    for (int i=1 ; i<=num ; i++ )
    {
       suma = suma + i;
    }
    

    return 0;
}