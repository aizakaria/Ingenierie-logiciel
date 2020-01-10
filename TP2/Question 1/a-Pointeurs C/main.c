#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *x=2;


    printf("adresse de x :%d\n",&x);
    printf("la valeur de x :%d\n",x);



/*--------------double pointeur----------------*/

     int age = 25;
     int **ptr2=20;

    printf("l'adresse de l age en utilisant le double pointeur : %d\n",&ptr2);
    printf("l age en utilisant le double pointeur : %d\n",ptr2);


}
