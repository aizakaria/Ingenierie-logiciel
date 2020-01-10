#include <stdio.h>
#include <stdlib.h>

int main()
{

    int* ptr;
    int* ptr2;
    int* ptr3;
    int n;


    n = 5;
    printf("Enter number of elements: %d\n", n);

    ptr = (int*)malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Memory not allocated.\n");

    }
    else {

        printf("Memory successfully allocated using malloc.\n");

        }

//---------------calloc-------------------------------------

    printf("Number of elements: %d\n", n);

    ptr2 = (int*)calloc(n, sizeof(int));


    if (ptr2 == NULL) {
        printf("Memory not allocated.\n");
    }
    else {


        printf("Memory successfully allocated using calloc.\n");

    }

    //------------------realloc---------------------


        printf("\n\nEnter the new size of the array: %d\n", n);

        // Dynamically re-allocate memory using realloc()
        ptr3 = realloc(ptr3, n * sizeof(int));

        // Memory has been successfully allocated
        printf("Memory successfully re-allocated using realloc.\n");

        free(ptr2);


}
