#include <stdio.h>
/*
int main()
{
    float price[3];
    printf("Enter price of item1: ");
    scanf("%f",&price[0]);

    printf("Enter price of item2: ");
    scanf("%f",&price[1]);

    printf("Enter price of item3: ");
    scanf("%f",&price[2]);

    printf("item1 = %f , item2 = %f , item3 = %f" , price[0] , price[1] , price[2]);
    printf("\nFinal cost is %f ", price[0]+price[1]+price[2]);

    return 0;
}
*/
/*
int main()
{
    int number = 50;
    int *ptr;
    ptr = &number;
    printf("Address of p variable is %u \n", ptr);
    // ptr++;
    // printf("After increment: Address of p variable is %u \n", ptr);
    ptr--;
    printf("After decrement: Address of p variable is %u \n", ptr);
    return 0;
}*/

// int main()
// {
//     int number = 50;
//     int *p = &number;
//     printf("Address of p variable is %u \n", p);
//     p += 3;
//     printf("After adding 3: Address of p variable is %u \n", p);
//     return 0;
// }

// int main()
// {
//     int age = 20 ;
//     int _age = 24 ;
//     int *ptr = &age ;
//     int *_ptr = &_age;

//     printf("%u %u Difference = %u\n" , ptr , _ptr , ptr-_ptr);
//     _ptr = &age;
//     printf("Comparison = %u\n" , ptr == _ptr);
//     return 0;
// }

// --------------------------TRAVERSING AN ARRAY----------------------//
// int main()
// {
//     int arr[10]={3,4,5,6,7};
//     for (int i = 0 ; i < 5 ; i++){
//         printf("%d\n", arr[i]);
//     }
//     return 0;
// }

/*
int main()
{
    int aadhar[5];
    //INPUT
    int *ptr = &aadhar[0];
    for (int i = 0 ; i < 5 ; i++) {
        printf("%d index : ", i);
        scanf("%d",&aadhar[i]);
    }

    //OUTPUT
    printf("\n\nYou entered the following:\n ");
    for (int i = 0 ; i < 5 ; i++) {
        printf("%d index = %d\n", i ,aadhar[i]);
    }
    return 0;
}*/

/*// C program to traverse the array
void printArray(int *arr, int n);
// Driver program
int main()
{
    int arr[] = {2, -1, 5, 6, 0, -3};
    int n = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, n);

    return 0;
}

// Function to traverse and print the array
void printArray(int *arr, int n)
{
    printf("Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
*/
/*
void printNumbers(int arr[] , int n);

int main()
{
    int arr[] = {1,2,3,4,5,6};
    printNumbers(arr , 6);
    return 0;
}

void printNumbers(int arr[] , int n)
{
    for (int i = 0 ; i < n ; i++){
        printf("%d\t", arr[i]);
    }
    printf("\n");
}*/


/***********************MULTIDIMENTIONAL ARRAYS***************/
/*
int main()
{
    int marks[2][3];
    marks[0][0] = 90;
    marks[0][1] = 94;
    marks[0][2] = 95;

    marks[1][0] = 91;
    marks[1][1] = 92;
    marks[1][2] = 96;
    for (int i = 0 ; i < 2 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            printf("%d\n",marks[i][j]);
        }
    }
    return 0;
}*/

/*
//FUNCTION TO COUNT THE NUMBER OF ODD NUMBERS IN AN ARRAY
int countOdd(int arr[] , int n)
{
    int count = 0;
    for (int i = 0 ; i < n ; i++)
    {
        if (arr[i] % 2 != 0){
            count++;
        }
    }
    return count ;
}

int main()
{
    int arr[] = {2,35,676,3,2,7,7};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Number of odd numbers in the array are : %d " ,countOdd(arr , n));
    return 0;
}*/

/*
// REVERSE AN ARRAY

void reverse(int arr[] , int n);
void printArray(int arr[] , int n);

int main()
{
    int arr[] = {1 ,2 ,3 ,4 ,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printArray(arr , n);
    reverse(arr , n);
    printArray(arr , n);
    return 0;
}

void printArray(int arr[] , int n)
{
    for (int i =  0 ; i < n ; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

void reverse(int arr[] , int n)
{
    for (int i = 0 ; i < n/2 ; i++)
    {
        int firstVal = arr[i];
        int secondVal = arr[n-i-1];
        arr[i] = secondVal;
        arr[n-i-1] = firstVal;
    }
}*/

/*
int main()
{
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    
    int fib[n];
    fib[0] = -1;
    fib[1] = 1;

    for (int i = 2 ; i<=n+1 ; i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
        printf("%d  ", fib[i]);
    }
    return 0;
}*/

/*
//TABLES OF 2 AND 3

void storeTables(int arr[][10] , int m , int n , int number);

int main()
{
    int tables[2][10];
    storeTables(tables , 0 , 10 , 2);
    storeTables(tables , 1 , 10 , 3);

    for (int i = 0 ; i<10 ; i++){
        printf("%d\t",tables[0][i]);
    }
    for (int i = 0 ; i<10 ; i++){
        printf("%d\t",tables[1][i]);
    }

    return 0;
}

void storeTables(int arr[][10] , int m , int n , int number)
{
    for (int i = 0 ; i<m ; i++){
        arr[n][i] = number * (i+1);
    }
}*/
// int printSec(int arr[] , int n);

// int main ()  
// {  
//     int arr[100], i , n ;  
//     printf("Enter the size of the array: ");  
//     scanf("%d",&n);  
//     printf("Enter the elements of the array: ");  
//     for(i = 0; i<n; i++)  
//     {  
//         scanf("%d",&arr[i]);  
//     }  
    
//     printSec(arr,n);
//     return 0;
// }  

// int printSec(int arr[] , int n){
//     int largest = arr[0];  
//     int sec_largest = arr[1];  
    
//     for(int i=0 ; i<n ; i++)  
//     {  
//         if(arr[i]>largest)  
//         {  
//             sec_largest = largest;  
//             largest = arr[i];  
//         }  
//         else if (arr[i]>sec_largest && arr[i]!=largest)  
//         {  
//             sec_largest=arr[i];  
//         }  
//     }  
//     printf("largest = %d, second largest = %d",largest,sec_largest);  
// }


int main()
{
    int arr[2][3] = {{11,44,25},{34,55,77}};
    int (*p)[3] = arr;
    printf("%d %d %d %d" , arr[0][3] , arr[1][1] , (*p)[1] , (*p)[3]);
    return 0;
}