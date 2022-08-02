//------------ENUMERATION-------------------

// #include <stdio.h>

// enum week{Mon , Tue , Wed , Thur , Fri  , Sat , Sun} today;
// int main()
// {
//     today = Wed;
//     printf("Day %d",today+1);
//     return 0;
// }

// enum day {sunday = 1, monday, tuesday = 5,
//           wednesday, thursday = 10, friday, saturday};

// int main()
// {
//     printf("%d %d %d %d %d %d %d", sunday, monday, tuesday,
//             wednesday, thursday, friday, saturday);
//     return 0;
// }

// enum day {sunday = 1, tuesday, wednesday, thursday, friday, saturday};

// int main()
// {
//     enum day d = thursday;
//     printf("The day number stored in d is %d", d);
//     return 0;
// }

// enum State {WORKING = 0, FAILED, FREEZED};
// enum State currState = 2;

// enum State FindState() {
//     return currState;
// }

// int main() {
//    (FindState() == WORKING)? printf("WORKING"): printf("NOT WORKING");
//    return 0;
// }

//==========MACROS=============

// #define LIMIT 5
// int main()
// {
//     for (int i = 0; i < LIMIT; i++) {
//         printf("%d \n",i);
//     }

//     return 0;
// }

//=============MACROS WITH ARGUMENTS==========

// #define AREA(l,b)(l*b)

// int main()
// {
//     int l1 = 5 , l2 = 10 , area;
//     area = AREA(l1,l2);
//     printf("Area of rectangle is : %d",area);
//     return 0;
// }

// #define AREA(pi,r)(pi*r*r)

// int main()
// {
//     float pi = 3.14 , r = 4.5 , area;
//     area = AREA(pi,r);
//     printf("Area of the cirle is : %.2f" ,area);
//     return 0;
// }

//========PREDEFINED MACROS===================

// int main()
// {
//     printf("Current Time is : %s", __TIME__);
// }

// #define sqr(y)(y*y)
// #define cube(x) sqr(x)*x
// int main()
// {
//     int x =3 ;
//     printf("%d\t",cube(3+3));
//     printf("%d\t",sqr(x));
//     printf("%d\n",sqr(4));

//     return 0;
// }

//==============COMMAND LINE ARGUMENTS==========

// int main( int argc, char *argv [] )
// {
//     printf(" \n Name of my Program %s \t", argv[0]);

//     if( argc == 2 )
//     {
//         printf("\n Value given by user is: %s \t", argv[1]);
//     }
//     else if( argc > 2 )
//     {
//         printf("\n Many values given by users.\n");
//     }
//     else
//     {
//         printf(" \n Single value expected.\n");
//     }
// }

// C program to illustrate
// command line arguments

// int main(int argc,char* argv[])
// {
// 	int counter;
// 	printf("Program Name Is: %s",argv[0]);
// 	if(argc==1)
// 		printf("\nNo Extra Command Line Argument Passed Other Than Program Name");
// 	if(argc>=2)
// 	{
// 		printf("\nNumber Of Arguments Passed: %d",argc);
// 		printf("\n----Following Are The Command Line Arguments Passed----");
// 		for(counter=0;counter<argc;counter++)
// 			printf("\nargv[%d]: %s",counter,argv[counter]);
// 	}
// 	return 0;
// }

// int main(int argc, char *argv[])
// {
// 	int a,b,sum;
// 	if(argc!=3)
// 	{
// 		printf("please use \"prg_name value1 value2 \"\n");
// 		return -1;
// 	}

// 	a = atoi(argv[1]);
// 	b = atoi(argv[2]);
// 	sum = a+b;

// 	printf("Sum of %d, %d is: %d\n",a,b,sum);

// 	return 0;
// }
/*
// C program for finding the largest integer
// among three numbers using command line arguments
#include <stdio.h>
#include <stdlib.h>

// Taking argument as command line
int main(int argc, char *argv[])
{
    int a, b, c;

    // Checking if number of argument is
    // equal to 4 or not.
    if (argc < 4 || argc > 5)
    {
        printf("enter 4 arguments only eg.\"filename arg1 arg2 arg3!!\"");
        return 0;
    }

    // Converting string type to integer type
    // using function "atoi( argument)"
    a = atoi(argv[1]);
    b = atoi(argv[2]);
    c = atoi(argv[3]);

    // Checking if all the numbers are positive of not
    if (a < 0 || b < 0 || c < 0)
    {
        printf("enter only positive values in arguments !!");
        return 1;
    }

    // Checking if all the numbers are different or not
    if (!(a != b && b != c && a != c))
    {
        printf("please enter three different value ");
        return 1;
    }
    else
    {
        // Checking condition for "a" to be largest
        if (a > b && a > c)
            printf("%d is largest", a);

        // Checking condition for "b" to be largest
        else if (b > c && b > a)
            printf ("%d is largest", b);

        // Checking condition for "c" to be largest..
        else if (c > a && c > b)
            printf("%d is largest ",c);
    }
    return 0;
}*/

// int main(int argc, char const *argv[])
// {
//     printf("The value of argc is %d\n" , argc);
//     for (int i = 0 ; i < argc ; i++){
//         printf("This argument at index number %d has value of %s \n" , i , argv[i]);
//     }
//     return 0;
// }

/*
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int a, b, sum;
    if (argc != 3)
    {
        printf("please use \"prg_name value1 value2 \"\n");
        return -1;
    }
    a = atoi(argv[1]);
    b = atoi(argv[2]);

    sum = a+b;

    printf("Sum of %d , %d is %d\n",a, b, sum);
    return 0;

}
*/

// Program to check whether a number is even or odd using command line arguments

// #include <stdio.h>
// #include <stdlib.h>

// int main(char *argv[] , int argc)
// {
//     if (argc == 2)
//     {
//         if (atoi(argv[1]) % 2 == 0)
//             printf("\nThe number is EVEN. \n");
//         else
//             printf("\nThe number is ODD.\n");
//     }
//     else if (argc > 2)
//         printf("\nEnter only one Integer..!!!\n");
//     else
//         printf("\nEnter one Integer.!!!\n");
//     return 0;
// }

/*
#include <stdio.h>
#include <stdlib.h>

int main(int argc , char *argv[])
{
    int num ;
    if (argc == 1){
        printf("Enter an integer..!\n");
    }
    else if (argc > 2){
        printf("Enter only 1 integer..!");
    }
    else{
        num = atoi(argv[1]);
        if (num % 2 == 0){
            printf("EVEN\n");
        }
        else
        printf("ODD\n");
    }
    return 0;
}*/

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main(int argc , char *argv[])
// {
//     if (argc < 3 || argc > 3)
//     {
//         printf("Enter three arguments . Like for Eg: \"prgm_name str1 str2\"");
//     }
//     else
//     {
//         printf("Concatenated string : %s",strcat(argv[1],argv[2]));
//     }
//     return 0;
// }



// C program to concatenate the two Strings
// using command line arguments

// #include <stdio.h>
// #include <stdlib.h> 
// #include <string.h>
/*
char* concat(char str1[], char str2[])
{
	strcat(str1, str2);
	return str1;
}

int main(int argc, char* argv[])
{
	if (argc == 1)
		printf("No command line arguments found.\n");
	else {
		printf("%s\n", concat(argv[1], argv[2]));
	}
	return 0;
}*/



// int main(int argc, char* argv[])
// {
//     char str[10];
// 	if (argc == 1)
// 		printf("Enter a string...!!!");
// 	else {
//         int i , j;
//         for (int i = 0 ; str[i]!='\0' ; i++){
//             while (!(str[i] == 'a' && str[i] == 'e' && str[i] == 'i' && str[i] == 'o' && str[i] == 'u' && str[i] == 'A' && str[i] == 'E' && str[i] == 'I' && str[i] == 'O' && str[i] == 'U'))
//             {
//                 for (int j = i ; str[j]!='\0' ; j++){
//                     str[j] = str[j+1];
//                 }
//                 str[j]='\0';
//             }
//             printf("Vowels in the string");
//             puts(str);
//         }
// 	}
// 	return 0;
// }


//=============ENVIRONMENT VARIABLES==============

// #include <stdio.h>

// Most of the C compilers support a third parameter to main which
// store all envorinment variables
// int main(int argc, char *argv[], char * envp[])
// {
// 	int i;
// 	for (i = 0; envp[i] != NULL; i++)
// 		printf("\n%s", envp[i]);
// 	getchar();
// 	return 0;
// }
