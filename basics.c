#include <stdio.h>
#include <stdbool.h>

int main()
{

    // printf("Pehla program \n");
    // int i = 234;
    // char name[20];
    // if (i>10)
    // {
    //     printf("kal ho na ho \n");
    // }

    // scanf("%s",&name);
    // printf(name);

    // int i;
    // scanf("%d",&i);
    // printf("%d",i);

    //======== multiple words input =========
    // char sentence[50];
    // printf("Enter Sentence : ");
    // fgets(sentence,sizeof(sentence),stdin);

    // printf("%s",sentence);


    // =================Pointers===============
    // int num = 15;
    // printf("%p",&num);
    // int* ptr = &num;
    // printf("%p\n",ptr);       // print the address of num
    // printf("%d\n", *ptr);         // prints the value stored at the address that ptr holds


    // int numbers[5] = {2,4,8,5,6};
    // int *ptr = numbers;
    // printf("%p\n", numbers);
    // printf("%p\n", *numbers);
    // printf("%p\n", &numbers[1]);
    // printf("%p\n", *ptr);

    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%p\n", &numbers[i]);
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%p\n", *(ptr + i));
    // }
    
    






    // ------------------Calculate area of rectangle.------------------------

    // a) Hard coded inputs

    // float length = 23.0;
    // float breadth = 45.0;
    // float area = length * breadth;

    // printf("The area of the rectangle is : %f",area);

    // b) user inputs

    // float length, breadth, area;
    // printf("Enter length : ");
    // scanf("%f",&length);
    // printf("Enter breadth : ");
    // scanf("%f",&breadth);
    // area = length * breadth;
    // printf("The area of the rectangle is : %f",area);







    // ----------Calculate area of a circle----------------

    // const float pi = 3.14;
    // float radius, area;

    // printf("Enter the radius : ");
    // scanf("%f",&radius);
    // area = pi * radius * radius;
    // printf("The area of the circle is : %f",area);






    // Convert celsius to fahrenheit





    //----------------------Calculate simple interest-----------------------

    // float si, principal, rate, time;
    // printf("Enter principal, rate, time(in yrs.) : ");
    // scanf("%f %f %f",&principal,&rate,&time);
    // si = (principal * rate * time)/100;
    // printf("The interest is : %f",si);






    // -----------Program to calculate factorial of a number------------------
	// int num, n = 2, factorial;
	// printf("Enter number : ");
	// scanf("%d", &num);

	// factorial = num;

	// if (num == 1)
	// {
	// 	printf("The factorial of the number is : 1");
	// }
	// else if(num == 0)
	// {
	// 	printf("The factorial of the number is : 0");
	// }
	// else
	// {
	// 	while(n != num)
	// 	{
	// 		factorial = factorial * n;
	// 		n++;
	// 	}

	// 	printf("The factorial of the number is : %d",factorial);
	// }





    // ----Program to reverse a number---------
    // int numberEntered, reversedNumber = 0, remainder = 0;

    // printf("Enter a number : ");
    // scanf("%d",&numberEntered);

    // while (numberEntered>0)
    // {
    //     remainder = numberEntered % 10;
    //     reversedNumber = reversedNumber * 10 + remainder;
    //     numberEntered /= 10;
    // }

    // printf("The reversed number is : %d",reversedNumber);





    // ---------Program to sum of its digits---------
    // int numberEntered, sumOfDigits = 0, remainder = 0;

    // printf("Enter a number : ");
    // scanf("%d",&numberEntered);

    // while (numberEntered>0)
    // {
    //     remainder = numberEntered % 10;
    //     sumOfDigits = sumOfDigits + remainder;
    //     numberEntered /= 10;
    // }

    // printf("Sum of the digits of the number entered is : %d", sumOfDigits);
    





    // --------Program to check for Palindrome number 
    // int numberEntered, reversedNumber = 0, remainder = 0, tempNo = 0;

    // printf("Enter a number : ");
    // scanf("%d",&numberEntered);

    // tempNo = numberEntered;

    // while (numberEntered>0)
    // {
    //     remainder = numberEntered % 10;
    //     reversedNumber = reversedNumber * 10 + remainder;
    //     numberEntered /= 10;
    // }

    // if (reversedNumber == tempNo)
    // {
    //     printf("Its a Palindrome number");
    // }
    // else
    // {
    //     printf("It's not a Palindrome number");
    // }
    
    




    // ---------Program to check for Armstrong number
    // int numberEntered, sumOfItsCubes = 0, remainder = 0, tempNo = 0;

    // printf("Enter a number : ");
    // scanf("%d",&numberEntered);

    // tempNo = numberEntered;

    // while (numberEntered>0)
    // {
    //     remainder = numberEntered % 10;
    //     sumOfItsCubes = sumOfItsCubes + (remainder * remainder * remainder);
    //     numberEntered /= 10;
    // }

    // if (sumOfItsCubes == tempNo)
    // {
    //     printf("Its an Armstrong number");
    // }
    // else
    // {
    //     printf("It's not an Armstrong number");
    // }

    




    

    // ------Program to check for prime number------
    // int numberEntered, count = 0;

    // printf("Enter a number : ");
    // scanf("%d",&numberEntered);

    // for (int i = 1; i <= numberEntered; i++)
    // {
    //     if (numberEntered % i == 0)
    //     {
    //         count++;
    //     }
    // }

    // if (count == 2)
    // {
    //     printf("Its a prime number");
    // }
    // else
    // {
    //     printf("Its not a prime number");
    // }
    






    // --------Program to print first n prime numbers----------
    // int numberEntered;

    // printf("Enter a number : ");
    // scanf("%d",&numberEntered);

    // for (int i = 1; i <= numberEntered; i++)
    // {
    //     for (int n = 0; n <= numberEntered; n++)
    //     {
    //         if (numberEntered % n == 0)
    //         {
    //             printf("%d ", numberEntered);
    //         }
    //     }
        

        
    // }
    
    






    // -------Program to determine whether a number N is equal to the sum of of its proper positive divisors, except the number itself
    // int numberEntered,sumOfDivisors = 0;

    // printf("Enter a number : ");
    // scanf("%d",&numberEntered);

    // for (int i = 1; i < numberEntered; i++)
    // {  
    //     if (numberEntered % i == 0)
    //     {
    //         sumOfDivisors += i;
    //     }   
    // }

    // if (sumOfDivisors == numberEntered)
    // {
    //     printf("YES, the entered number is equal to the sum of its proper divisors");
    // }
    // else
    // {
    //     printf("NO, the entered number is not equal to the sum of its proper divisors");
    // }
    
    

    




    // -------Program to print first n fibonacci numbers------
    int numberEntered, series = 0;

    printf("Enter number : ");
    scanf("%d",&numberEntered);

    




    
    
    





















    return 0;
}
