# include<stdio.h>
# include<string.h>
/*

struct Student{
    char name[20];
    int rollNo;
    float cgpa;
}s1 , s2 , s3;

int main()
{
    s1.rollNo = 001;
    s1.cgpa = 7.59;
    strcpy(s1.name , "Akshata");
    printf("Student1 name : %s" , s1.name);
    printf("\nStudent1 rollno : %d" , s1.rollNo);
    printf("\nStudent1 cgpa : %.2f\n\n" , s1.cgpa);

    s2.rollNo = 002;
    s2.cgpa = 7.45;
    strcpy(s2.name , "Likitha");
    printf("Student2 name : %s" , s2.name);
    printf("\nStudent2 rollno : %d" , s2.rollNo);
    printf("\nStudent2 cgpa : %.2f\n\n" , s2.cgpa);

    s3.rollNo = 003;
    s3.cgpa = 8.03;
    strcpy(s3.name , "Nikitha");
    printf("Student3 name : %s" , s3.name);
    printf("\nStudent3 rollno : %d" , s3.rollNo);
    printf("\nStudent3 cgpa : %.2f" , s3.cgpa);

    return 0;
}*/


//================NESTED STRUCTURES====================
/*
struct complex
{
    int imaginary;
    float real;
};

struct number
{
    struct complex comp;
    int integer;
}num1;

int main()
{
    num1.comp.imaginary = 11;
    num1.comp.real = 5.25;
    num1.integer = 6;

    printf("Imaginary part: %d" , num1.comp.imaginary);
    printf("\nReal part: %.2f" , num1.comp.real);
    printf("\nInteger part: %d" , num1.integer);

}*/


//=============ARRAY OF STRUCTURES=======================

struct Student{
    char name[50];
    int rollNo;
    float cgpa;
};

int main()
{
    struct Student ece[100];
    ece[0].rollNo = 123;
    ece[0].cgpa = 9.0;
    strcpy(ece[0].name , "Akshata");

    printf("Name = %s\n" , ece[0].name);
    printf("RollNo = %d\n" , ece[0].rollNo);
    printf("Cgpa = %.2f\n" , ece[0].cgpa);
    return 0;
}

/*
struct student
{
    char name[100];
    int rollno;
};

int main()
{
    struct student st[3];
    printf("Enter details of 3 students: \n");
    for (int i = 0 ; i < 3 ; i++){
        printf("\nEnter rollno: ");
        scanf("%d" , &st[i].rollno);
        printf("\nEnter name: ");
        scanf("%s" , &st[i].name);
    }
    printf("Student Information List: \n");
    for (int i = 0 ; i < 3 ; i++){
        printf("Rollno: %d\t Name: %s\n",st[i].rollno,st[i].name);
    }
    return 0;
}
*/


//============POINTERS TO STRUCTURES================
/*
struct student{
    char name[50];
    int rollno;
};

int main()
{
    struct student *studentPtr , st1;
    studentPtr = &st1;

    printf("Enter student name: ");
    scanf("%s",&studentPtr->name);

    printf("Enter rollno: ");
    scanf("%d", &studentPtr->rollno);

    printf("Student Information details: ");
    printf("\nName: %s\tRollno: %d", studentPtr->name , studentPtr->rollno);

    return 0;
}
*/


//============PASSING STRUCTURES TO FUNCTIONS===============

/*
struct student{
    int roll;
    float cgpa;
    char name[100];
};

void printInfo(struct student s1);

int main()
{
    struct student s1 = {123 , 7.59 , "Akshata"};
    printInfo(s1);
}

void printInfo(struct student s1){
    printf("Student Information:\n");
    printf("student.roll = %d\n",s1.roll);
    printf("student.name = %s\n",s1.name);
    printf("student.cgpa = %.2f\n",s1.cgpa);
}\

*/

/*
struct addressBook {
    int houseNo;
    char block[20];
    char city[20];
    char state[20];
};

int main()
{
    struct addressBook add[3];
    printf("Enter details of 3 people: \n");
    for (int i = 0 ; i < 3 ; i++){
        printf("Enter house number: ");
        scanf("%d",&add[i].houseNo);
        printf("Enter block: ");
        scanf("%s",&add[i].block);
        printf("Enter city: ");
        scanf("%s",&add[i].city);
        printf("Enter state: ");
        scanf("%s",&add[i].state);
    }
    printf("Housing details: \n");
    for (int i = 0 ; i < 3 ; i++){
        printf("House No: %d\tBlock: %s\tCity: %s\tState: %s\n",add[i].houseNo,add[i].block,add[i].city,add[i].state);
    }
    return 0;
}*/


//STRUCTURE TO ADD TWO VECTORS
/*
struct vector {
    int x , y;
};

void calcsum(struct vector v1 , struct vector v2 , struct vector sum);

int main()
{
    struct vector v1 = {5,10};
    struct vector v2 = {3,7};
    struct vector sum = {0} ;
    calcsum(v1,v2,sum);
    return 0;
}

void calcsum(struct vector v1 , struct vector v2 , struct vector sum){
    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;

    printf("Sum of x is : %d\n" , sum.x);
    printf("Sum of y is : %d\n" , sum.y);
}*/

//PASSING STRUCT BY REFERENCE 
/*
typedef struct Complex
{
    float real;
    float img;
} complex;

void addNumbers(complex n1 , complex n2, complex *result);

int main()
{
    complex n1 , n2 , result ;

    printf("For first number:\n");
    printf("Enter real part: ");
    scanf("%f",&n1.real);
    printf("Enter imaginary part: ");
    scanf("%f",&n1.img);

    printf("For second number:\n");
    printf("Enter real part: ");
    scanf("%f",&n2.real);
    printf("Enter imaginary part: ");
    scanf("%f",&n2.img);

    addNumbers(n1, n2 , &result);
    printf("\nThe number is %.2f i + %.2f j ",result.real,result.img);

    return 0;
}

void addNumbers(complex n1 , complex n2, complex *result){
    result->real = n1.real + n2.real;
    result->img = n1.img + n2.img;
}
*/



//===========UNIONS AND POINTERS============
/*
union unionJob
{
    char name[60];
    int EmpId;
    float salary;
}uJob;

struct structJob
{
    char name[60];
    int EmpId;
    float salary;
}sJob;

int main()
{
    printf("size of union : %d bytes" ,sizeof(uJob));
    printf("\nsize of struct : %d bytes" ,sizeof(sJob));
    return 0;
}

union Students
{
    char name[100];
    int rollno;
    float cgpa;
}s;

int main()
{
    s.cgpa = 7.59;
    s.rollno = 100 ;

    printf("Cgpa is : %.2f" , s.cgpa);
    printf("\nRollno is : %d" , s.rollno);
    return 0;
}*/