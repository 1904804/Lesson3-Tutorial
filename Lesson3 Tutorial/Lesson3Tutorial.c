#include <stdio.h>


//switch with number
/*void main()
{
	int choice;

	printf_s("Please choose your favourite : \n");
	printf_s("1. Rice krispies \n");
	printf_s("2. CornFlakes \n");
	printf_s("3. Gluten free cornflakes \n");
	printf_s("4. CoCo Pops \n");
	printf_s("5. Gluten free honey cornflakes \n");
	printf_s("Enter your choice :- ");
	scanf_s("%d", &choice);

	switch (choice)
	{
	case 1:
		printf_s("Snap crackle and pop");
		break;
	case 2:
		printf_s("They were nice");
		break;
	case 3:case 5:
		printf_s("Only one you can have ");
		break;
	case 4:
		printf_s("Ahh the chocolate");
		break;
	default:
		printf_s("Choice not in the list !!!!");

	
	};


}*/

//Exercise 1
/*void main()
{
	char choice;

	printf_s("Please choose your favourite : \n");
	printf_s("a. Rice krispies \n");
	printf_s("b. CornFlakes \n");
	printf_s("c. Gluten free cornflakes \n");
	printf_s("d. CoCo Pops \n");
	printf_s("e. Gluten free honey cornflakes \n");
	printf_s("Enter your choice :- ");
	scanf_s(" %c", &choice);


	switch (choice)
	{
	case 'a':case 'A':
		printf_s("Snap crackle and pop");
		break;
	case 'b':case'B':
		printf_s("They were nice");
		break;
	case 'c':case 'e':case'C':case'E':
		printf_s("Only one you can have ");
		break;
	case 'd':case'D':
		printf_s("Ahh the chocolate");
		break;
	default:
		printf_s("Choice not in the list !!!!");


	};
}*/

//Exercise 2
/*void main()
{
	int option;
	float number1;
	float number2;
	float total;

	printf_s("Welcome to Julian`s awersome calculator v1.1\n");
	printf_s("Please enter your first number :- \n");
	scanf_s("%f", &number1);
	printf_s("Please enter your second number :- \n");
	scanf_s("%f", &number2);
	printf_s("Please choose an option from the list below \n 1.    Add\n 2.    Subtract\n 3.    Multiply\n 4.    Divide\n Enter your opton :- \n");
	scanf_s("%d", &option);

	switch (option)
	{
	case 1:
		total = number1 + number2;
		printf_s("The answer is - %f", total);
		break;
	case 2:
		total = number1 - number2;
		printf_s("The answer is - %f", total);
		break;
	case 3:
		total = number1 * number2;
		printf_s("The answer is - %f", total);
		break;
	case 4:
		total = number1 / number2;
		printf_s("The answer is - %f", total);
		break;

	}

}*/

//Exersice 3
void main()
{
	int day;
	int month;
	int year;

	printf_s("Please enter the date in simple format eg. 20 10 15 :- \n");
	printf_s("Day - \n");
	scanf_s("%d", &day);

	printf_s("month - \n");
	scanf_s("%d", &month);

	printf_s("Year - \n");
	scanf_s("%d", &year);

	switch (month)
	{
	case 1:
		printf_s("%d January 20%d", day, year);
		break;
	case 2:
		printf_s("%d Febuary 20%d", day, year);
		break;
	case 3:
		printf_s("%d March 20%d", day, year);
		break;
	case 4:
		printf_s("%d April 20%d", day, year);
		break;
	case 5:
		printf_s("%d May 20%d", day, year);
		break;
	case 6:
		printf_s("%d June 20%d", day, year);
		break;
	case 7:
		printf_s("%d July 20%d", day, year);
		break;
	case 8:
		printf_s("%d August 20%d", day, year);
		break;
	case 9:
		printf_s("%d September 20%d", day, year);
		break;
	case 10:
		printf_s("%d October 20%d", day, year);
		break;
	case 11:
		printf_s("%d November 20%d", day, year);
		break;
	case 12:
		printf_s("%d December 20%d", day, year);
		break;
	}
}