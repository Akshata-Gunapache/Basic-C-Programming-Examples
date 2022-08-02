#include <stdio.h>

void printString(char arr[]);
/*
int main()
{
    char firstName[] = "Akshata";
    char lastName[] = "Gunapache";
    printString(firstName);
    printString(lastName);
    return 0;
}

void printString(char arr[]){
    for (int i = 0 ; arr[i] != '\0'; i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}*/

/*
int main()
{
    char name[20];
    printf("Enter name: ");
    scanf("%s", name);
    printf("Your name is %s.", name);
    return 0;
}
*/

// int main()
// {
//     char fullName[20];
//     printf("Enter fullname: ");
//     scanf("%s", fullName);
//     printf("Your fullname is %s.", fullName);
//     return 0;
// }
/*
int main()
{
    char str[20];
    printf("Enter name: ");
    fgets(str , 20 , stdin);
    printf("Name: ");
    puts(str);
    return 0;
}
*/

// Passing string to a Function
/*
void displayString(char str[]);

int main()
{
    char str[50];
    printf("Enter a string : ");
    fgets(str , sizeof(str) , stdin);
    displayString(str);
    return 0;
}

void displayString(char str[]){
    printf("String output : ");
    puts(str);
}*/

// STRINGS AND POINTERS

/*
int main()
{
    char *canChange = "Hello World";
    puts(canChange);
    canChange = "Hello";
    puts(canChange);

    char cannotChange[50] = "Hello World";
    puts(cannotChange);
    char cannotChange[50] = "Hello";
    puts(cannotChange);

    return 0;
}*/

/*
int main(void)
{
    char name[100];
    fgets(name , sizeof(name) , stdin);

    char *namePtr;

    namePtr = name;
    printf("%c", *namePtr);       // Output: H
    printf("%c", *(namePtr + 1)); // Output: a
    printf("%c", *(namePtr + 7)); // Output: o
}*/
/*
int countLength(char arr[]);

int main()
{
    char name[100];
    printf("Enter a string: ");
    fgets(name , sizeof(name) , stdin);
    printf("Length of the string is %d" , countLength(name));
    return 0;
}

int countLength(char arr[]){
    int count = 0;
    for (int i = 0 ; arr[i]!='\0' ; i++){
        if (arr[i] != ' ')
        count++;
    }
    return count - 1;
}*/

/*
//Find the Frequency of a Character

int main()
{
    char arr[100], ch;
    int count = 0 ;
    printf("Enter a string : ");
    fgets(arr , 100 , stdin);
    printf("Enter a character to find its frequency: ");
    scanf("%c" , &ch);
    for (int i = 0 ; arr[i]!='\0' ; ++i){
        if (ch == arr[i])
        ++count ;
    }
    printf("Frequency of %c = %d", ch, count );
    return 0;
}
*/

/*
int main()
{
    char string[150] ;
    int vowels , consonants , spaces , digits ;
    vowels = consonants = spaces = digits = 0;
    printf("Enter a sentence:");
    fgets(string , sizeof(string) , stdin);

    for (int i = 0 ; string[i]!='\0' ; ++i){
        // string[i] = tolower(string[i]);

        if (string[i]=='a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u'){
            ++vowels;
        }
        else if (string[i]>='a' && string[i]<='z'){
            ++consonants;
        }
        else if (string[i] >='0' && string[i] <= '9'){
            ++digits;
        }
        else if (string[i] == ' ') {
            ++spaces;
    }
    }
    printf("Vowels : %d" , vowels);
    printf("\nConsonants : %d" , consonants);
    printf("\nDigits : %d" , digits);
    printf("\nSpaces : %d" , vowels);

    return 0;
}
*/

// REVERSE A STRING USING RECURSION
/*
void reverseString();

int main()
{
    printf("Enter a string : ");
    reverseString();
    return 0;
}

void reverseString(){
    char c ;
    scanf("%c" , &c);
    if (c != '\n'){
        reverseString();
        printf("%c", c);
    }
}*/

// LENGTH OF STRING WITHOUT USING STRLEN()
/*int main(){
    char str[] = "Akshata is a good girl";
    int i;
    for (i = 0 ; str[i]!='\0' ; i++);
    printf("Length is %d",i);
    return 0;
}*/

/*
void main(void)
{
    char str1[25], str2[25];
    int i = 0, j = 0;
    printf("\nEnter first string:");
    gets(str1);
    printf("\nEnter second string:");
    gets(str2);
    while (str1[i] != '\0')
        i++;
    while (str2[j] != '\0')
    {
        str1[i] = str2[j];
        j++;
        i++;
    }
    str1[i] = '\0'; //terminate first string
    printf("\nConcatenated String is %s", str1);
}*/

// SWAPPING TWO NUMBERS USING BITWISE OPERATORS
/*
int main() {
    int a , b;
    printf("Enter two numbers : ");
    scanf("%d %d" , &a , &b);
    printf("Before swapping a = %d , b = %d", a, b);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("\nAfter swapping a = %d b = %d", a, b);

    return 0;
}
*/

// Copy String Without Using strcpy()
/*
int main()
{
    char s1[100], s2[100], i;
    printf("Enter string s1: ");
    fgets(s1, sizeof(s1), stdin);

    for (i = 0; s1[i] != '\0'; ++i)
    {
        s2[i] = s1[i];
    }

    s2[i] = '\0';
    printf("String s2: %s", s2);
    return 0;
}
*/

// Remove Characters in String Except Alphabets
/*
int main()
{
    char str[150];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // take input

    for (int i = 0, j; str[i] != '\0'; ++i)
    {
        while (!(str[i] >= 'a' && str[i] <= 'z') && !(str[i] >= 'A' && str[i] <= 'Z') && !(str[i] == '\0'))
        {
            for (j = i; str[j] != '\0'; ++j)
            {
                str[j] = str[j + 1];       // if jth element of line is not an alphabet, assign the value of (j+1)th element to the jth element
            }
            str[j] = '\0';
        }
    }
    printf("Output String: ");
    puts(str);
    return 0;
}
*/

// # include <string.h>
// int main()
// {
//     char str[150];
//     int i, j, len = 0;
//     printf("Enter a string: ");
//     fgets(str, sizeof(str), stdin); // take input
//     len = strlen(str);
//     for (i = 0; i < len; i++){
//         if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
//             str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
//         {
//             for (j = i; j < len; j++)
//             {
//                 str[j] = str[j + 1];       // if jth element of line is not an alphabet, assign the value of (j+1)th element to the jth element
//             }
//             i--;
//             len--;
//         }
//             str[len + 1] = '\0';
//         }
//     printf("Output String: ");
//     puts(str);
//     return 0;
// }

/*
#include <string.h>

int main() {
   char str[5][50], temp[50];
   printf("Enter 5 words: ");

   // Getting strings input
   for (int i = 0; i < 5; ++i) {
      fgets(str[i], sizeof(str[i]), stdin);
   }

   // storing strings in the lexicographical order
   for (int i = 0; i < 5; ++i) {
      for (int j = i + 1; j < 5; ++j) {

         // swapping strings if they are not in the lexicographical order
         if (strcmp(str[i], str[j]) > 0) {
            strcpy(temp, str[i]);
            strcpy(str[i], str[j]);
            strcpy(str[j], temp);
         }
      }
   }

   printf("\nIn the lexicographical order: \n");
   for (int i = 0; i < 5; ++i) {
      fputs(str[i], stdout);
   }
   return 0;
}
*/
#include <string.h>
/*
void salting(char password[]);

int main()
{
    char password[100];
    scanf("%s" , password);
    salting(password);
    return 0;
}

void salting(char password[]){
    char salt[] = "123";
    char newPassword[200];

    strcpy(newPassword , password);
    strcat(newPassword , salt);
    puts(newPassword);
}*/

/*
void slice(char str[] , int m , int n);

int main()
{
    char str[] = "HelloWorld";
    slice(str , 3 , 6);
    return 0;
}

void slice(char str[] , int m , int n){
    char newStr[100];
    int j = 0;
    for (int i = m ; i <= n ; i++ , j++){
        newStr[j] = str[i];
    }
    newStr[j] = '\0' ;
    puts(newStr);
}*/

/*
int countVowels(char str[]);

int main()
{
    char str[200];
    printf("Enter a string: ");
    fgets(str , 200 , stdin);
    printf("Vowels are : %d" ,countVowels(str));
    return 0;
}

int countVowels(char str[]){
    int count = 0 ;
    for (int i = 0 ; str[i] != '\0' ; i++)
    {
        if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
            count++;
        }
    }
    return count;
}*/

void check(char str[], char ch);

int main()
{
    char str[100], ch;
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    printf("Enter a character to search : ");
    scanf("%c", &ch);
    check(str, ch);
}

void check(char str[], char ch)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            printf("Character is present!");
            return;
        }
    }
    printf("Character is NOT present");
}