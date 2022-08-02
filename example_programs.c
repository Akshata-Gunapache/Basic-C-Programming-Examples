// Write a C program to find odd or even no using bitwise operators.

#include <stdio.h>

int main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
    if(num & 1)
    {
        printf("%d is odd.", num);
    }
    else
    {
        printf("%d is even.", num);
    }
    return 0;
}



// Write a C program to calculate sum of first and last digit of a given number.

#include <stdio.h>
int main()
{
    int n, sum=0, firstDigit, lastDigit;
    printf("Enter number to find sum of first and last digit = ");
    scanf("%d", &n);
    // Find last digit of a number
    lastDigit = n % 10;
    //Find the first digit by dividing n by 10 until n greater then 10
    while(n >= 10)
    {
        n = n / 10;
    }
    firstDigit = n;
    //Calculate sum of first and last digit
    sum = firstDigit + lastDigit;
    printf("Sum of first and last digit = %d", sum);
    return 0;
}




// Write a C program to accept a four-digit number from user. Count zero, odd and even
// digits in the entered number.
#include <stdio.h>
int main()
{
    int nodd,neven,num,digit,zero=0 ;
      printf("Enter four digit number: ");
      scanf("%d",&num);
      while(num>0){
          digit = num%10;
          num/=10;
          if (digit!=0 && digit%2==0){
              neven++;
          }
          else if (digit == 0){
              zero++;
          }
          else nodd++;
      }
      printf("\nOdd digit : %d \nEven digit : %d\nZeros : %d", nodd, neven,zero);
    return 0;
}




// Program to print pyramid star pattern series

#include <stdio.h>
int main() {
   int i, j, rows, k = 0;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i, k = 0) {
      for (j = 1; j <= rows - i; ++j) {
         printf("  ");
      }
      while (k != 2 * i - 1) {
         printf("* ");
         ++k;
      }
      printf("\n");
   }
   return 0;
}



// Write a C program to count number of bits set to 1 in an Integer
#include <stdio.h>
 
int main()
{
    unsigned int n;
    int count = 0;
 
    printf("Enter the unsigned integer:\n");
    scanf("%d", &n);
    while (n != 0)
    {
        if ((n & 1) == 1)
            count++;
        n = n >> 1;
    }
    printf("number of one's are :\n%d\n", count);
    return 0;
}




// Write a C program to check whether a given number is palindrome or not

#include <stdio.h>
int main() {
  int n, rev = 0, rem, temp;
    printf("Enter an integer: ");
    scanf("%d", &n);
    temp = n;

    // reversed integer is stored in reversed variable
    while (n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }

    // palindrome if orignal and reversed are equal
    if (temp == rev)
        printf("%d is a palindrome.", temp);
    else
        printf("%d is not a palindrome.", temp);

    return 0;
}


// C program to print the series from 1 to 10 and skip numbers 6 and 8
#include <stdio.h>
int main()
{
      int i = 1;
      while(i<=10)
      {
            if(i==6||i==8)
            {
                  i++;
                  continue;     /* This statement continues the loop condition if it is true and skips the next statements.*/
            }
            printf("%d ", i);
            i++;
      }   
      return 0;
}




// Write a C program to accept 'n' different numbers and display sum of all positive & negative
// numbers.


#include<stdio.h>
int main()
{
      int n, ps = 0, ns = 0, num,i;
      printf("How Many Numbers you Want to Enter: ");
      scanf("%d",&n);
      printf("\nEnter %d Numbers:\n\n",n);
      //for(;n>0; n--)
      for(i=1;i<=n;i++)
      {
            scanf("%d",&num);
            if(num > 0)
                  ps=ps+num;
            else
                  ns=ns+num;
      }
      printf("Sum of Positive Numbers = %d\nSum of Negative Numbers = %d",ps,ns);
      return 0;
}





// Write a program, which accepts a number and displays each digit in words.

#include<stdio.h>
int main()
{
      int digit, num,n,l,r=0;
      printf("Enter positive integer number: ");
      scanf("%d", &n);    
      while(n>0)
      {
            l=n%10;
            r=r*10+l;
            n=n/10;
      }
      num = r;
      printf("\nYou have entered: ");
      while (num > 0)
      {
            digit = num % 10;       
            switch(digit)
            {
                  case 0:
                        printf("Zero ");
                        break;
                  case 1:
                        printf("One ");
                        break;
                  case 2:
                        printf("Two ");
                        break;
                  case 3:
                        printf("Three ");
                        break;
                  case 4:
                        printf("Four ");
                        break;
                  case 5:
                        printf("Five ");
                        break;
                  case 6:
                        printf("Six ");
                        break;
                  case 7:
                        printf("Seven ");
                        break;
                  case 8:
                        printf("Eight ");
                        break;
                  case 9:
                        printf("Nine ");
                  break;
            }
      
            num = num / 10;
      }
      return 0;
}