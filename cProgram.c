#include<stdio.h>
#include<stdlib.h>


int main() {
printf("kodegod\n");
	//Addition of two digits
	/*int a, b, c;
	printf("Enter a number : ");
	scanf("%d", &a);

	printf("Enter a number : ");
	scanf("%d", &b);̥

	c = a + b;
	printf("Entered number is %d ", c);

	//	%d is int
	//	%c is char
	//	%f is float

	//for division
	//	int/int=int
	//	int/float=float
	//	float/float=float

	*/
	//Area of the circle is pie*r*r
	/*
	float Area, r;
	printf("enter the radius : ");
	scanf("%f", &r);
	Area = 3.14 * r * r;
	printf("Area of the entered radius(%f) is : %f", r, Area);
	*/
	//Area of the triangle is 1/2(base*height)
	/*float base, height, Area;
	printf("enter the value of base : ");
	scanf("%f", &base);
	printf("enter the value of height : ");
	scanf("%f", &height);
	Area = (breadth * height)/2;
	printf("Area of the Triangle for base(%f) and height(%f) is %.4f", base, height, Area);


	//format specifiers %.2f,Area  then the number will be with 2 decimals
	*/
	//Simple_intrest = (principal * No_of_years * Rate_of_intrest)/100
	/*float Principal, No_of_years, Rate_of_intrest, Simple_intrest;
	//printf("Enter the principal amount : ");
	//scanf("%f", &Principal);
	//printf("Enter the No_of_years amount : ");
	//scanf("%f", &No_of_years);
	//printf("Enter the Rate_of_intrest amount : ");
	//scanf("%f", &Rate_of_intrest);

	printf("enter the Principal,No of years,rate of intrest : ");
	scanf("%f,%f,%f",&Principal,&No_of_years,&Rate_of_intrest);

	Simple_intrest = (Principal * No_of_years * Rate_of_intrest) / 100;

	printf("simple intrest is : %.2f ", Simple_intrest);*/
	//square and qube
	/*float AreaSq, VOlumeQb, Length;
	printf("Enter the value of length : ");
	scanf("%f", &Length);
	AreaSq = Length * Length;
	VOlumeQb = Length * Length * Length;
	printf("area of square and volume of Qube ,for given Length(%f), is %.2f and %.3f", Length, AreaSq, VOlumeQb);*/
	//calculate Total and average marks
	//Total = m1+m2+m3 and average = total/3
	/*float Total, Average, M1, M2, M3;
	printf("please enter the mark1.\n");
	scanf("%f", &M1);
	printf("please enter the marks2.\n");
	scanf("%f", &M2);
	printf("please enter the marks3.\n");
	scanf("%f", &M3);
	Total = (M1 + M2 + M3); Average = Total / 3;
	printf("Total is : %f \n and \nAverage is : %f", Total, Average);
*/
	//swap two Variables
	/*	int a, b, Temp;
printf("Enter the a and b values : \n");
scanf("%d %d", &a, &b);
printf("Before swapping a=%d and b=%d .\n", a, b);
Temp = a;
a = b;
b = Temp;

printf("After the swapping of numbers a=%d and b=%d\n", a, b);
*/

//3 Escape sequences
	/*
\a alarm or beep;
\b backspace
\f form feed
\n new line
\t tab (horizontal)
\v tab (vertical)
\\ backslash
\' single quote
\" Double quote
\? questioon mark
\nnn octal number
\xhh hexa decimal number
\0 null
	*/
	//backslash upArrow
	/*
printf("     /\\         \n");
printf("    //\\\\       \n");
printf("   ///\\\\\\     \n");
printf("  ////\\\\\\\\   \n");
printf("    !!!!         \n");
printf("    !!!!         \n");
*/

//4 decison control structure
	//Find largest numbers
	/*int a, b;
printf("Enter two integers : \n");
scanf("%d %d", &a, &b);
if (a > b)
printf("largest integer is %d.\n", a);
else
{
	printf("largest integer is %d.\n", b);
}
	*/

	//finding a number is +ve or not

	/*int a, b, c;
	printf("Enter two integers(use spaces for multiple inputs) : \n");
	scanf("%d %d %d", &a, &b, &c);
	if (a > 0)printf("Yeah buddy, %d is a positive integer. \n", a);
	else if (a < 0)printf("No buddy, %d is not a positive integer. \n", a);
	else
	{
		printf("%d is a zero. \n", a);
	}
	if (b > 0)printf("Yeah buddy, %d is a positive integer. \n", b);
	else if (b < 0)printf("No buddy, %d is not a positive integer. \n", b);
	else
	{
		printf("%d is a zero. \n", b);
	}
	if (c > 0)printf("Yeah buddy, %d is a positive integer. \n", c);
	else if (c < 0)printf("No buddy, %d is not a positive integer. \n", c);
	else
	{
		printf("%d is a zero. \n", c);
	}
	*/

	//even or odd

	/*
int a;
printf("Enter a number : \n");
scanf("%d", &a);
if (a % 2 == 0)printf("yes, %d (Entered number) is even.\n", a);
else
{
	printf("No, %d (Entered number) is Odd.\n", a);
}
*/

	//multiple by any 5

	/*
int Integer;
printf("enter an integer : ");
scanf("%d", &Integer);
if (Integer % 5 == 0)printf("yeah, %d is divisible by 5.\n", Integer);
else
{
	printf("No, %d is not divisible by 5.\n", Integer);
}
*/

	//compare two numbers

	/*int a, b;
printf("Enter two integers (use spaces for multiple inputs) : ");
scanf("%d %d", &a, &b);
if (a > b)printf("%d is greater than %d. \n", a, b);
else if (b > a)printf("%d is greater than %d. \n", b, a);
else
{
	printf("%d is equal to %d. \n", a, b);
}
*/

	//Logical operators

	/*
&& and operator
|| or operator
!  not operator
*/

	//print three numbers in ascending and descending order

	/*int a, b, c;
printf("enter three numbers (use space for multiple inputs : ");
scanf("%d %d %d", &a, &b, &c);
if (a >= b && a >= c)
{
	if (b >= c)
	{
		printf("\nIn ascending order : %d,%d,%d", c, b, a);
		printf("\nIn decending order : %d,%d,%d", a, b, c);
	}
	else
	{
		printf("\nIn ascending order : %d,%d,%d", b, c, a);
		printf("\nIn decending order : %d,%d,%d", a, c, b);
	}
}
else if (b >= a && b >= c)
{
	if (a >= b)
	{
		printf("\nIn ascending order : %d,%d,%d", c, a, b);
		printf("\nIn decending order : %d,%d,%d", b, a, c);
	}
	else
	{
		printf("\nIn ascending order : %d,%d,%d", a, c, b);
		printf("\nIn decending order : %d,%d,%d", b, c, a);
	}
}
else if (c >= a && c >= b)
{
	if (a >= b)
	{
		printf("\nIn ascending order : %d,%d,%d", b, a, c);
		printf("\nIn decending order : %d,%d,%d", c, a, b);
	}
	else
	{
		printf("\nIn ascending order : %d,%d,%d", a, b, c);
		printf("\nIn decending order : %d,%d,%d", c, b, a);
	}
}
*/

	//providing grade's

	/*int m, p, s, total, avg;
printf("Enter the Maths,Physics and social marks (use  space for multiple inputs) : \n");
scanf("%d %d %d", &m, &p, &s);
total = (m + p + s);
avg = total / 3.0;
printf("your\'s Total is : %d \nAverage is : %d.\n", total, avg);
if (avg >= 90)printf("Your\'s grade is : A \n");
else if (avg >= 60)printf("Your\'s grade is : B\n");
else
{
	printf("your\'s grade is : C\n");
}*/

	//checking martial_status,gender,age
	/*	int age; char martial_status, gender;
printf("Enter martialstatus(m or u),gender (m or f), Age (use space for multiple inputs):\n");
scanf("%c %c %d", &martial_status, &gender, &age);
if (martial_status == 'm')printf("you connot marry again.");
else if (martial_status == 'u')
{
	if (gender == 'm')
	{

		if (age >= 21)printf("you are eligible for marriage.");
		else
		{
			printf("you are not eligible for marriage.");
		}
	}
	else if (gender == 'f')
	{

		if (age >= 18)printf("you are eligible for marriage.");
		else
		{
			printf("you are not eligible for marriage.");
		}
	}
	else
	{
		printf("invalid input for gender.");
	}

}

else
{
	printf("invalid input for martial status.");
}
*/

	//conditioinal operators

	/*int a, b;

printf("Enter zero : ");
scanf("%d", &b);
//(a > b) ? printf("%d is greater than %d", a, b) : printf("%d is less than %d", a, b);
a = (b == 0) ? printf("Thank you for entering zero.\n") : printf("YOU not entered what i said YOU_IDIOT.\n");

*/

	//5 loop control structure

	/*
	1 while loop
	2 do while loop
	3 for loop
	*/

	//print 1 to n numbers using while loop

	/*int i = 1, n;
printf("enter a number :");
scanf("%d", &n);
while (i<=n)
{
	printf("%d\t", i++);

}*/

	//print n to 1 numbers usung while loop

	/*int  i = 1, n;
printf("enter a number :");
scanf("%d", &n);
while (i<=n)
{
	printf("%d\t", n--);

}
*/

	//print 1 to n numbers using do while loop

	/*int i = 1, n;
printf("enter a number :");
scanf("%d", &n);
do
{
	printf("%d\t", i++);
} while (i<=n);
*/

	//print n to 1 numbers using do while loop

	/*int i =1,n;
printf("enter a number :");
scanf("%d", &n);
do
{
	printf("%d\t", n--);
} while (n >= i);
*/

	//print first 2 to n even numbers

	/*int i = 2, n;
printf("enter a number : ");
scanf("%d", &n);
while (i<=n)
{
	printf("%d\t", i);
	i = i + 2;
}
*/

	//print first n to 2 even numbers?

	/*int i = 2, n;
printf("Enter a number : ");
scanf("%d", &n);
while (i<=n)
{
	printf("%d\t", );
	;
}*/


	//print first 1 to n odd numbers

	/*int i = 1, n;
printf("Enter the number : ");
scanf("%d", &n);
while (i <= n)
{
	printf("%d\t",i);
	i = i + 2;

}
*/


	//print first n to 1 odd numbers?

	/*int i = 1, n;
printf("Enter the number : ");
scanf("%d", &n);
while (i<=n)
{
	printf("%d\t", );

}*/


	//print a number in reverse order 123 as 321

	/*int Mod, n;
printf("enter a number to be reversed : ");
scanf("%d", &n);
while (n>0)
{
	Mod = n % 10;
	printf("%d", Mod);
	n = n / 10;
}
*/

	//print the sum of number

	/*int Mod, n, sum = 0;
printf("enter a number to be reversed : ");
scanf("%d", &n);
while (n > 0)
{
	Mod = n % 10;
	sum = sum + Mod;
	n = n / 10;
}
printf("the sum of digits is %d.", sum);
*/

	//checking  digits as armstrong number 153 = (1*1*1)+(5*5*5)+(3*3*3)

	/*int Mod, n, sum = 0, conVar;
printf("enter a number to be reversed : ");
scanf("%d", &n);
conVar = n;
while (n > 0)
{
	Mod = n % 10;
	sum = sum + (Mod * Mod * Mod);
	n = n / 10;
}
if (conVar==sum)
{
	printf("Armstrong number .");

}
else
{
	printf("Not a Armstrong number .");
}
*/

//6 FOR loop

	//table of given numbers

	/*int i, n;
printf("Enter a number for it's table : ");
scanf("%d", &n);
for ( i = 1; i <= 10; i++)
{
	printf("\t%d X %d = %d\n", n, i, n * i);
}
*/

//multiple inputs  and sums

	//multiple inputs and sum of inputs

	/*
int i, n, sum = 0, newN;
printf("How many numbers you are going to enter : ");
scanf("%d", &n);
for ( i = 1; i <= n; i++)
{
	printf("enter the numbers :");
	scanf("%d.", &newN);
	sum = sum + newN;
}
printf("the sum of %d digit's entered is : %d \n", n, sum);
*/

//6 pattern programming theory

	//gereral i++
	/*int i, j, n;
printf("Enter the number :");
scanf("%d", &n);
for ( i = 1; i <= n; i++)
{
	for ( j = 1; j <= n; j++)
	{
		printf("\t*");
	}
	printf("\n");
}*/
	//general n--
	/*int i, j, n, k;
printf("Enter the number : ");
scanf("%d", &n);
k = n;
for ( i = 1; i <= n; n--)
{
	for ( j = 1; j <= k; j++)
	{
		printf("\t*");
	}
	printf("\n");
}*/

	//i++
	/*int i, j, n;
printf("Enter the number : ");
scanf("%d", &n);
for (i = 1; i <= n; i++)
{
	for (j = 1; j <= i; j++)
	{
		printf("\t*");
	}
	printf("\n");
}*/
	//n--
	/*int i, j, n;
printf("Enter the number : ");
scanf("%d", &n);
for ( i = 1; i <= n; n--)
{
	for ( j=1; j <= n; j++)
	{
		printf("\t*");
	}
	printf("\n");
}*/
	//reverse order i++
	/*int i, j, n;
printf("Enter the number : ");
scanf("%d", &n);
for (i = 1; i <= n; i++)
{
	for (j = i; j <= n; j++)
	{
		printf("\t*");
	}
	printf("\n");
}*/
	//reverse order n--
	/*int i, j, n;
printf("Enter the number : ");
scanf("%d", &n);
for (i = 1; i <= n; n--)
{
	for (j = i; j <= n; j++)
	{
		printf("\t*");
	}
	printf("\n");
}*/

	//37 using # and *
	/*int i, j, k, n;
printf("Enter the number : ");
scanf("%d", &n);
for ( i = 1; i <= n; i++)
{
	for ( j = i; j <= n; j++)
	{
		printf("\t#");
	}
	for ( k = 1; k <= i; k++)
	{
		printf("\t*");
	}
	printf("\n");
}*/
	//38
	/*int i, j, k, l;
printf("Enter the number : ");
scanf("%d", &l);
for (i = 1; i <= l; i++)
{
	for (j = i; j <= l; j++)
	{
		printf("\t#");
	}
	for (k = 1; k <= i; k++)
	{
		printf("\t*");
	}
	printf("\n");
}*/
	//39
	/*int i, j, k, l, n;;
printf("Enter the number :");
scanf("%d", &n);
for ( i = 1; i <= n; i++)
{
	for ( j = 1; j <= (n-i); j++)
	{
		printf("#");
	}
	for ( k = 1; k <= i; k++)
	{
		printf("*");
	}
	for ( l = 1; l < i ; l++)
	{
		printf("*");
	}
	for (j = 1; j <= (n - i); j++)
	{
		printf("#");
	}
	printf("\n");
}*/
	//40
	/*int i, j, k, n;
printf("Enter the number : ");
scanf("%d", &n);
for ( i = 1; i <= n; i++)
{
	for ( j = 1; j <= i; j++)
	{
		printf("\tj1");
	}
	for ( k = 1; k <= (n-i+1); k++)
	{
		printf("\tk1");
	}
	for (k = 2; k <= (n-i+1); k++)
	{
		printf("\tk2");
	}
	for (j = 1; j <= i; j++)
	{
		printf("\tj2");
	}
	printf("\n");
}*/
	//41 rhombus
	/*int i, j, k, n;
printf("Enter the number :");
scanf("%d", &n);
for ( i = 1; i <= n; i++)
{
	for (j = 1; j <= (n + 1 - i); j++)
	{
		printf("#");
	}
	for ( k = 1; k <= i; k++)
	{
		printf("*");
	}
	for (k = 2; k <= i; k++)
	{
		printf("*");
	}
	for (j = 1; j <= (n + 1 - i); j++)
	{
		printf("#");
	}

	printf("\n");
}
for (i = 1; i <= n; i++)
{

	for (k = 2; k <= i; k++)
	{
		printf("#");
	}
	for (j = 1; j <= (n + 1 - i); j++)
	{
		printf("*");
	}
	for (j = 1; j <= (n + 1 - i); j++)
	{
		printf("*");
	}
	for (k = 1; k <= i; k++)
	{
		printf("#");
	}
	printf("\n");
}*/
	//42
	/*int i, j, n;
printf("Enter the number :");
scanf("%d", &n);
for ( i = 1; i <= n; i++)
{
	for ( j = 1; j <= i; j++)
	{
		printf("%d", j);
	}
	printf("\n");
}*/
	//43
	/*int i, j, n;
printf("Enter the number :");
scanf("%d", &n);
for ( i = 1; i <= n; i++)
{
	for ( j = 1; j <= i; j++)
	{
		printf("%d", i);
	}
	printf("\n");
}*/
	//44
	/*int i, j, k, n;
printf("Enter the number :");
scanf("%d", &n);
for ( i = 1; i <= n; i++)
{
	for (j = 1; j <= n - i; j++)
	{
		printf(" ");
	}
	for ( k = 1; k <= i; k++)
	{
		printf("%c", 64 + i);
	}
	for (k = 2; k <= i; k++)
	{
		printf("%c", 64 + i);
	}
	for (j = 1; j <= n - i; j++)
	{
		printf(" ");
	}
	printf("\n");
}*/
	//45
	/*int i, j, k, n;
printf("Enter the number :");
scanf("%d", &n);
for ( i = 1; i <= n; i++)
{
	for ( j = 1; j <= (n-i); j++)
	{
		printf("%c", 64 + j);
	}
	for ( j = 2; j <= i; j++)
	{
		printf("**");
	}
	for ( j = (n-i); j >= 1; j--)
	{
		printf("%c", 64 + j);
	}
	printf("\n");
}*/
	//46
	/*int i, j, n;
printf("Enter the numeber : ");
scanf("%d", &n);
for ( i = 1; i <= n; i++)
{
	for (j = 1; j <= i; j++)
	{
		printf("%d",j);
	}
	//for (j = 1; j <= 1; j++)
	//{
	//	printf("%c", 64 + j);
	//}
printf("1\n");
}
*/
//8 for Loops advance programs

	//47 factorial
	/*int i, n;
float  fact = 1;
printf("Enter a number to get it's factorial : ");
scanf("%d", &n);
for ( i = 1; i <= n; i++)
	fact = fact * i;
printf("%d factorial is %f", n, fact);*/
	//48 prime or not
	/*int i, n;
printf("Enter the number : ");
scanf("%d", &n);
for ( i = 2; i < n; i++)
{
	if (n % i == 0)
	{
		printf("%d is a non prime number.", n);
		exit(0);
	}
}
printf("%d is a prime number.", n);
*/
	//49
	/*int i, j, n, flag = 1;
printf("Enter the numer ");
scanf("%d", &n);
for ( i = 2; i <= n; i++)
{
	for ( j = 2; j < i; j++)
	{
		flag = 1;// Giving prime number a value as flag = 1
		if (i % j == 0)
		{
			flag = 0; //giving Non prime number a value other then 1(here, i provided zero)
			break;
		}

	}
	if (flag == 1)
	{
		printf("%d,", i);
	}
}*/
	//50 fibonacci using for loop
	/*int i, prev = 0, curr = 1, temp, n;
printf("Enter the number : ");
scanf("%d", &n);
printf("%d,%d,", prev, curr);
for ( i = 3; i <= n; i++)
{
	temp = curr;
	curr = prev + curr;
	prev = temp;
	printf("%d,", curr);
}*/
	//51 print digits and alphabets using loops
	/*int i;
for ( i = 65; i <= 90; i++)
{
	printf("\t%c-", i);
	printf("%d,", i);
}
printf("\n\n");
for ( i = 97; i <= 122; i++)
{
	printf("\t%c-", i);
	printf("%d,", i);
}
printf("\n\n");
for ( i = 48; i <= 57; i++)
{
	printf("\t%c-", i);
	printf("%d,", i);
}
printf("\n");*/
	//52 calculate 1/2! + 2/3! +..........+ n/(n+1)!
	/*int i, j, n;
float sum = 0, fact = 1;
printf("calculate 1/2! + 2/3! +..........+ n/(n+1)!\n");
printf("Enter the number : ");
scanf("%d", &n);
for ( i = 1; i <= n; i++)
{
	fact = 1; //?
	for (j = 1; j <= i + 1; j++)
		fact = fact * j;
	sum = sum + (i / fact);
}
printf("For value of %d is %f", n, sum);*/
	//53 calculate average of sum of numbers
	/*int i, n, newn, sum_avg = 0;
float avg;
printf("how many numbers to average : ");
scanf("%d",&n);
printf("Enter %d number \n",n);
for ( i = 1; i <= n; i++)
{
	scanf("%d", &newn);
	sum_avg = sum_avg + newn;
}
avg = sum_avg / (float)n; //type cansting
printf("\n%.2f", avg); //format*/
	//54 print ASCII table
	/*int i;
for ( i = 0; i <= 255; i++)
{
	printf("%d-%c\n", i, i);
}*/
	//55 printing some stupid format
/*	int i, n, j;
printf("Enter the number : ");
scanf("%d", &n);
for ( i = 1; i <= n; i++)
{
	printf("*");
}
printf("\n");
for (i = 2; i <= n - 1; i++)
{
	printf("*");
	for (j = 2; j <= n - 1; j++)
	{
		printf(" ");
	}
	printf("*");
	printf("\n");
}

for (i = 1; i <= n; i++)
{
	printf("*");
}
*/

// //56th square box

// int i,n,j;
// printf("Enter a number:");
// scanf("%i",&n);

// //print 1 st line
// printf("1");
// for(i=2;i<=n-1;i++) printf("2");
// printf("3\n");

// //print 2nd to n-1 lines
// for(i=2; i<= n-1; ++i)
// {

// 	printf("4");

// 	for(j=2; j<= n-1; j++) printf("5");

// 	printf("6\n");

// }

// //print nth line
// printf("7");
// for(i=2;i<=n-1;i++) printf("8");
// printf("9\n");













	return 0;

}
