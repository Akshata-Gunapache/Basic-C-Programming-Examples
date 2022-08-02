// #include <stdio.h>

// int main()
// {
//     int age = 19;
//     int *ptr = &age;
//     int _age = *ptr;
// printf("%d\n", age);
// printf("%d\n", _age);
// printf("%d\n", ptr);
// printf("%d", *ptr);
// printf("%d",*(&age));

// ------------FORMAT SPECIFIER--------------------
// printf("%p\n", &age);
// printf("%p\n", ptr);
// printf("%p\n", &ptr);

// printf("%u\n", &age);
// printf("%u\n", ptr);
// printf("%u", &ptr);
//     return 0;
// }

/*
int main()
{
    int *ptr;
    int x;

    ptr = &x;
    *ptr = 0;

    printf("x = %d\n", x); //x=0
    printf("*ptr = %d\n", *ptr); //*ptr=0

    *ptr += 5;
    printf("x = %d\n", x); //x=5
    printf("*ptr = %d\n", *ptr); //*ptr=5

    (*ptr)++;
    printf("x = %d\n", x); //x=6
    printf("*ptr = %d\n", *ptr); //*ptr=6

    return 0;
}
*/

// -------------WORKING OF POINTERS---------------
/*
int main()
{
   int* p, c;

   c = 22;
   printf("Address of c: %p\n", &c);
   printf("Value of c: %d\n\n", c);  // 22

   p = &c;
   printf("Address of pointer p: %p\n", p);
   printf("Content of pointer p: %d\n\n", *p); // 22

   c = 11;
   printf("Address of pointer p: %p\n", p);
   printf("Content of pointer p: %d\n\n", *p); // 11

   *p = 2;
   printf("Address of c: %p\n", &c);
   printf("Value of c: %d\n\n", c); // 2
   return 0;
}
*/

// int main()
// {
//     int number = 50;
//     int *p = &number;                                 // stores the address of number variable
//     printf("Address of p variable is %p \n", p); // p contains the address of the number therefore printing p gives the address of number.
//     printf("Value of p variable is %d \n", *p);  // As we know that * is used to dereference a pointer therefore if we print *p, we will get the value stored at the address contained by p.
//     return 0;
// }


//------------------------POINER TO POINTER-------------------
/*
int main()
{
    // float price = 100.00;
    // float *ptr = &price;
    // float **pptr = &ptr;
    
    int i = 5;
    int *ptr = &i;
    int **pptr = &ptr;
    printf("%d\n",**pptr);
    return 0;
}
*/


/*****************FUNCTION CALLS********************/
/*
void square(int n);
void _square(int *n);

int main()
{
    int num = 4 ;
    square(num); //16
    printf("number = %d\n",num); // 4

    _square(&num); // 16
    printf("number = %d\n",num); // 16
    return 0;
}

void square(int n){
    n = n * n;
    printf("square = %d\n", n);
}

void _square(int *n){
    *n = (*n) * (*n);
    printf("square = %d\n", *n);
}

*/

// PROGRAM TO SWAP TWO NUMBERS WITHOUT THIRD VARIABLE

/*int main()
{
    int a = 10 , b = 20 ;
    int *p1 = &a , *p2 = &b ; 
    printf("Before swap a = %d , b = %d\n",*p1,*p2);

    *p1 = *p1 + *p2;
    *p2 = *p1 - *p2;
    *p1 = *p1 - *p2;
    printf("After swap: a = %d , b = %d",*p1,*p2);  

    return 0;
}*/




/*
void swap(int a, int b);
void _swap(int *a, int *b);

int main()
{
    int x = 10 , y =20;
    printf("Before swap : a = %d , b = %d", x , y);
    // swap(x,y);
    _swap(&x,&y);
    return 0;
}
//call by value.
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    printf("\nAfter swap : a = %d , b = %d",a,b);
}
//call by reference
void _swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("\nAfter swap : a = %d , b = %d",*a,*b);
}


*/


