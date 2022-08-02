#include <stdio.h>
/*
int main()
{
    FILE *fptr;
    fptr = fopen("test.txt","r");

    char ch;
    ch = fgetc(fptr);
    while (ch != EOF){
        printf("%c",ch);
        ch = fgetc(fptr);
    }

    printf("\n");

    // fputc('M' , fptr);
    // fputc('A' , fptr);
    // fputc('N' , fptr);
    // fputc('G' , fptr);
    // fputc('O' , fptr);

    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));
    // printf("%c\n",fgetc(fptr));

    // fprintf(fptr , "%c" , 'M');
    // fprintf(fptr , "%c" , 'A');
    // fprintf(fptr , "%c" , 'N');
    // fprintf(fptr , "%c" , 'G');
    // fprintf(fptr , "%c" , 'O');

    fclose(fptr);
    return 0;
}
*/

//===========WAP TO READ 5 INTEGERS FROM  FILE=================
/*
int main()
{
    FILE *fptr;
    fptr = fopen("test.txt","r");
    int n;
    fscanf(fptr , "%d", &n);
    printf("Number = %d" , n);
    fscanf(fptr , "%d", &n);
    printf("Number = %d" , n);
    fscanf(fptr , "%d", &n);
    printf("Number = %d" , n);
    fscanf(fptr , "%d", &n);
    printf("Number = %d" , n);
    fscanf(fptr , "%d", &n);
    printf("Number = %d" , n);
    fclose(fptr);
    return 0;
}

*/

//======WAP TO READ AND WRITE FROM AND TO A FILE=================
/*
int main()
{
    FILE *fptr ;
    fptr = fopen("Student.txt","w");

    char name[100];
    int age;
    float cgpa;

    printf("Enter name: ");
    scanf("%s",&name);
    printf("Enter age: ");
    scanf("%d",&age);
    printf("Enter cgpa: ");
    scanf("%f",&cgpa);

    fprintf(fptr, "Student name: %s\n" , name);
    fprintf(fptr, "Student age: %d\n" , age);
    fprintf(fptr, "Student cgpa: %.2f" , cgpa);

    fclose(fptr);
    return 0;
}*/

//====WAP TO WRITE ALL ODD NUMBERS FROM 1 TO N IN A FILE================
/*
int main()
{
    FILE *fptr;
    fptr = fopen("test.txt","w");

    int n;
    printf("Enter a number: ");
    scanf("%d" , &n);

    for (int i = 0 ; i <= n ; i++){
        if (i % 2 != 0){
            fprintf(fptr , "%d\n" , i);
        }
    }

    fclose(fptr);

    return 0;

}*/
/*
int main()
{
    FILE *fptr;
    fptr = fopen("sum.txt","r");

    int a;
    fscanf(fptr , "%d" , &a);
    int b;
    fscanf(fptr , "%d" , &b);

    fclose(fptr);

    fptr = fopen("sum.txt" , "w");
    fprintf(fptr , "%d" , a + b);
    fclose(fptr);
    return 0;
}*/

//===========FSEEK()================
/*
#include <stdlib.h>
struct threeNum
{
   int n1, n2, n3;
};
int main()
{
    int n;
    struct threeNum num;
    FILE *fptr;

    if ((fptr = fopen("program.bin", "rb")) == NULL)
    {
        printf("Error! opening file");

        // Program exits if the file pointer returns NULL.
        exit(1);
    }

    // Moves the cursor to the end of the file
    fseek(fptr, -sizeof(struct threeNum), SEEK_END);

    for (n = 1; n < 5; ++n)
    {
        fread(&num, sizeof(struct threeNum), 1, fptr);
        printf("n1: %d\tn2: %d\tn3: %d\n", num.n1, num.n2, num.n3);
        fseek(fptr, -2 * sizeof(struct threeNum), SEEK_CUR);
    }
    fclose(fptr);

    return 0;
}*/


// C program to read name and marks of n number of students and store them in a file.
/*
int main()
{
    FILE *fptr ;
    fptr = fopen("Student.txt","w");

    char name[100];
    int marks , i , num;

    printf("Enter number of students: ");
    scanf("%d",&num);

    if (fptr == NULL){
        printf("File does not exist!");
    }

    for (i = 0 ; i <num ; i++){
        printf("Enter Student Name: ");
        scanf("%s" , name);

        printf("Enter Marks: ");
        scanf("%d", &marks);
    
        fprintf(fptr , "\nName : %s\tMarks : %d",name , marks);
    }

    fclose(fptr);
    return 0;
}*/




