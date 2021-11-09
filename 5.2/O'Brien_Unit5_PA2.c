// Andrew O'Brien
// 27 August 2020
// 5.2 Project

#include <stdio.h>
int Addition(int number1, int number2);
int Subtraction(int number1, int number2);
int Multiplication(int number1, int number2);
int Division(int number1, int number2);


int main() 
	{
	int x;
	int menu;
	char level;                         // Sets the difficulty level
	int number1, number2;              // Sets the numbers used in the math problem
    float ttlProblems=0, correctAnswers=0;  // defines total problems answered and number correct
    float avg;                       // for figuring out the average # of correct answers
	while (menu != 5)               // 5 to exit
		{
		printf ("Math Practice Program Main Menu \n\n");
		printf ("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n\nSelect an option: ");
		scanf ("%d", &menu);
		
		while (menu != 1 & menu != 2 & menu != 3 & menu != 4 & menu != 5)
			{
			printf("\n\n*******Please make a correct selection*******\n");
			printf ("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n\nSelect an option: ");
			scanf ("%d", &menu);
			}
		if (menu != 5)        //if user selects 5 to exit everything is passed
			{
			printf ("\n\nSelect a difficulty level (e-easy  m-medium  h-hard)\n");
			printf ("Please enter e, m, or h: ");
			scanf (" %c", &level);
			
			while (level != 'E' & level !='e' & level !='M' & level != 'm' & level != 'H' & level !='h')
				{
				printf("\n\n*******Please make a correct selection*******\n");
				printf ("Select a difficulty level (e-easy  m-medium  h-hard)\n");
				printf ("Please enter e, m, or h: ");
				scanf (" %c", &level);
				}
			
			if(level == 'E' || level == 'e')
	   			{
	            number1=rand()%10+1;
				number2=rand()%10+1;
	    		}
	
	   		else if (level == 'M' || level == 'm')
				{
				number1=rand()%100+1;
				number2=rand()%100+1;
				}
	
			else
	        	{ 
				number1=rand()%1000+1;
	    		number2=rand()%1000+1;
				}
			
			
			if (menu == 1)          //When the user selects Addition
				{	
				x = Addition(number1, number2);
			    }
			else if (menu == 2)	   //When the user selects Subtraction
				{
				x = Subtraction(number1, number2);
				}
			else if (menu == 3)    //When the user selects Multiplication  
				{
				x = Multiplication(number1, number2);	
				}
			else if (menu == 4)    //When the user selects Division
				{
				x = Division(number1, number2);	
				}
				
			if (x == 1)
				{
				ttlProblems = ttlProblems+1;
				correctAnswers	= correctAnswers+1;
				}
			else if (x == 0)
				{
				ttlProblems = ttlProblems+1;
				}		
			}
		}
	printf("You attempted %.0f problems and got %.0f correct\n", ttlProblems , correctAnswers);
	avg = correctAnswers/ttlProblems*100;
	printf("For a percentage correct of %.2f percent", avg);
	printf("\n\nThank you for using our software. Have a great day!\n");
	return 0;
	}

int Addition(int number1, int number2)
	{
	int answer;

    printf ("\n%d + %d = ? ", number1, number2);
    scanf ("%d", &answer);
    if (answer == (number1+number2))
		{
		printf ("Correct\n\n"); 
		return 1; 
		} 
	else 
		{
		printf ("That is incorrect\n\n");
		return 0;
		}
	}
	
int Subtraction(int number1, int number2)
	{
	int answer;
		if (number1>number2)     //ensures the answer is always a positive number
			{
			printf ("\n%d - %d = ? ", number1, number2);
		    scanf ("%d", &answer);
		    if (answer == (number1-number2))
				{
				printf ("Correct\n\n");
				return 1;
				} 
			else 
				{
				printf ("That is incorrect\n\n");
				return 0;
				}			
			}
		else
		{
		    printf ("\n%d - %d = ? ", number2, number1);
		    scanf ("%d", &answer);
		    if (answer == (number2-number1))
				{
				printf ("Correct\n\n");
				return 1;
				} 
			else 
				{
				printf ("That is incorrect\n\n");
				return 0;
				}		
		}
	}	
	
int Multiplication(int number1, int number2)
	{
	int answer;

    printf ("\n%d X %d = ? ", number1, number2);
    scanf ("%d", &answer);
    if (answer == (number1*number2))
		{
		printf ("Correct\n\n");
		return 1;
		} 
	else 
		{
		printf ("That is incorrect\n\n");
		return 0;
		}	
	}
	
int Division(int number1, int number2)
	{
	int answer, remainder;
	if (number1>number2)  //ensure that the numerator is the larger of the 2 numbers
		{
	    printf ("\n%d / %d = ? ", number1, number2);
	    printf ("(Enter the answer first then the Remainder)\n");
	    printf ("Answer: ");
	    scanf ("%d", &answer);
	    printf ("Remainder: ");
	    scanf ("%d", &remainder);
	    if (answer == (number1/number2) & remainder == (number1%number2))
			{
			printf ("Correct\n\n");
			return 1;
			} 
		else 
			{
			printf ("That is incorrect\n\n");
			return 0;
			}	
		}
	else
		{
		printf ("\n%d / %d = ? ", number2, number1);
	    printf ("(Enter the answer first then the Remainder)\n");
	    printf ("Answer: ");
	    scanf ("%d", &answer);
	    printf ("Remainder: ");
	    scanf ("%d", &remainder);
	    if (answer == (number2/number1) & remainder == (number2%number1))
			{
			printf ("Correct\n\n");
			return 1;
			} 
		else 
			{
			printf ("That is incorrect\n\n");
			return 0;
			}		
		}
	}
