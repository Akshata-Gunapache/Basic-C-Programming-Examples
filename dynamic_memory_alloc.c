#include<stdio.h>
#include<stdlib.h>

// int main()
// {
//     int *ptr ;
//     ptr = (int *) malloc(5 * sizeof(int));

//     ptr[0] = 1;
//     ptr[1] = 3;
//     ptr[2] = 5;
//     ptr[3] = 7;
//     ptr[4] = 9;


//     for (int i = 0 ; i<5 ; i++)
//     {
//         printf("%d\n",ptr[i]);
//     }
//     return 0;
// }


// --------------------WAP TO ALLOCATE MEMORY TO STORE 5 PRICES-------------
/*
int main()
{
    float *ptr;
    ptr = (float *) malloc(5 * sizeof(float));

    ptr[0] = 1;
    ptr[1] = 3;
    ptr[2] = 5;
    ptr[3] = 7;
    ptr[4] = 9;
    ptr[5] = 11;

    for (int i = 0 ; i<5 ; i++){
        printf("%f\n",ptr[i]);
    }

    return 0;
}*/


// --------------------WAP TO ALLOCATE MEMORY OF SIZE N , WHERE N IS ENTERED BY THE USER-------------------

// int main(){
//     int *ptr ;
//     int n;
//     printf("Enter n : ");
//     scanf("%d",&n);

//     ptr = (int *)calloc(n,sizeof(int));

//     for (int i = 0; i<n ; i++){
//         printf("%d\n",ptr[i]);
//     }
//     return 0;
// }



//-----------------FREE()------------------------------

// int main()
// {
//     int *ptr ;
//     int n;
//     printf("Enter n : ");
//     scanf("%d",&n);

//     ptr = (int *)calloc(n,sizeof(int));

//     for (int i = 0; i<n ; i++){
//         printf("%d\n",ptr[i]);
//     }
//     free(ptr);

//     ptr = (int *)calloc(2,sizeof(int));

//     for (int i = 0; i<2 ; i++){
//         printf("%d\n",ptr[i]);
//     }


    // return 0;

// }



//-----------------REALLOC()-----------------------
//Q.Allocate memory for 5 numbers and then dynamically increase it to 8 numbers?

// int main()
// {
//     int *ptr;
//     ptr = (int *)calloc(5 , sizeof(int));
//     printf("Enter 5 numbers: ");
//     for (int i = 0 ; i < 5 ; i++){
//         scanf("%d",&ptr[i]);
//     }
//     ptr = realloc(ptr , 8);
//     printf("Enter 8 numbers: ");
//     for (int i = 0 ; i < 8 ; i++){
//         scanf("%d",&ptr[i]);
//     }
//     //TO PRINT
//     for (int i = 0 ; i < 8 ; i++){
//         printf("number %d is %d\n",i,ptr[i]);
//     }
// }

//Q. Create an array of size 5 (using calloc) & enter its values from the user.

// int main()
// {
//     int *ptr;
//     ptr = (int *)calloc(5 , sizeof(int));

//     printf("Enter 5 numbers: ");
//     for (int i = 0 ; i < 5 ; i++){
//         scanf("%d",&ptr[i]);
//     }

//     //TO PRINT
//     for (int i = 0 ; i < 5 ; i++){
//         printf("number %d is %d\n",i,ptr[i]);
//     }
// }



//Q.ALlocate memory to store first 5 odd numbers , then reallocate it to first 6 even numbers

// int main()
// {
//     int *ptr;
//     ptr = (int *)calloc(5,sizeof(int));
//     ptr[0] = 1;
//     ptr[1] = 3;
//     ptr[2] = 5;
//     ptr[3] = 7;
//     ptr[4] = 9;
//     for (int i = 0 ; i < 5 ; i++){
//         printf("%d\n",ptr[i]);
//     }

//     ptr = realloc(ptr , 6);

//     ptr[0] = 2;
//     ptr[1] = 4;
//     ptr[2] = 6;
//     ptr[3] = 8;
//     ptr[4] = 10;
//     ptr[5] = 12;

//     for (int i = 0 ; i < 6 ; i++){
//         printf("%d\n",ptr[i]);
//     }
//     free(ptr);
//     return 0;
// }