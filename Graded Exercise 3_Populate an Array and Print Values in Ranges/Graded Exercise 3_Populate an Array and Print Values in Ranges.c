#include <stdio.h>

main()
{
	int salaryArray[9]={0,0,0,0,0,0,0,0,0}; 
	float salary;
	int sales;
	sales=0;

	while (sales>-1)
	{
		printf("Enter employee gross sales (-1 to end): ");
		scanf("%d", &sales);
		salary= 200+(sales*.09);
			
		if (salary>=200 && salary<=299)
		{salaryArray[0]=(salaryArray[0]+1);}
		if (salary>=300 && salary<=399)
		{salaryArray[1]=(salaryArray[1]+1);}
		if (salary>=400 && salary<=499)
		{salaryArray[2]=(salaryArray[2]+1);}
		if (salary>=500 && salary<=599)
		{salaryArray[3]=(salaryArray[3]+1);}
		if (salary>=600 && salary<=699)
		{salaryArray[4]=(salaryArray[4]+1);}
		if (salary>=700 && salary<=799)
		{salaryArray[5]=(salaryArray[5]+1);}
		if (salary>=800 && salary<=899)
		{salaryArray[6]=(salaryArray[6]+1);}
		if (salary>=900 && salary<=999)
		{salaryArray[7]=(salaryArray[7]+1);}
		if (salary>=1000)
		{salaryArray[8]=(salaryArray[8]+1);}
		
		if (sales>-1)
		{printf("Employee Salary is $%.2f\n\n", salary);}
	}

	printf("\nEmployees in the range:");
	printf("\n$200-$299 : %d", salaryArray[0]);
	printf("\n$300-$399 : %d", salaryArray[1]);
	printf("\n$400-$499 : %d", salaryArray[2]);
	printf("\n$500-$599 : %d", salaryArray[3]);
	printf("\n$600-$699 : %d", salaryArray[4]);
	printf("\n$700-$799 : %d", salaryArray[5]);
	printf("\n$800-$899 : %d", salaryArray[6]);
	printf("\n$900-$999 : %d", salaryArray[7]);
	printf("\nOver $1000: %d", salaryArray[8]);
	
	return;
}
