#include <stdio.h>

int LG();
int MED();
int SM();

int main() 
{
    printf("Doggy Day Care Weight Program\n\n");
    int all, total1, total2, total3;
    
    total1 = LG();
    total2 = MED();
    total3 = SM();
    all = total1 + total2 + total3;
    printf("Total weight of all dogs is: %d", all);
    return 0;
}

int LG() 
{
    int counter, dogs, total1;
	float avg=0.00;
    
    total1 = 0;
    printf("Large Breeds: (70 lbs and over)\n\n");
    printf("How many large breed dogs are there?  ");
    scanf("%d", &dogs);
    int weight[dogs];
    
    for (counter = 0; counter <= dogs - 1; counter++) {
        printf("Please enter the weight of a dog:  ");
        scanf("%d", &weight[counter]);
        if (weight[counter] >= 70) {
            total1 = total1 + weight[counter];} 
			else {
            printf("\n*** Weight must be greater than 75 lbs ***\n\n");
            counter = counter - 1;
        }
    }
    printf("\nThe total weight of all the large breeds: %d lbs\n", total1);
    avg = (float)total1 / dogs;
    printf("The Average weight of all the large breeds: %.2f lbs\n\n", avg);
    
    return total1;
}

int MED() 
{
    int counter, dogs, total2;
	float avg=0.00;
    
    total2 = 0;
    printf("Medium Breeds: (between 25 lbs and 69 lbs)\n\n");
    printf("How many medium breed dogs are there?  ");
    scanf("%d", &dogs);
    int weight[dogs];
    
    for (counter = 0; counter <= dogs - 1; counter++) {
        printf("Please enter the weight of a dog:  ");
        scanf("%d", &weight[counter]);
        if (weight[counter] > 24 && weight[counter] < 70) {
            total2 = total2 + weight[counter];
        } else {
            printf("\n*** Weight must be between 25 lbs and 69 lbs ***\n\n");
            counter = counter - 1;
        }
    }
    printf("\nThe total weight of all the medium breeds: %d lbs\n", total2);
    avg = (float)total2 / dogs;
    printf("The Average weight of all the medium breeds: %.2f lbs\n\n", avg);
    
    return total2;
}

int SM() 
{
    int counter, dogs, total3;
	float avg=0.00;
    
    total3 = 0;
    printf("Small Breeds: (under 25 lbs)\n\n");
    printf("How many small breed dogs are there?  ");
    scanf("%d", &dogs);
    int weight[dogs];
    
    for (counter = 0; counter <= dogs - 1; counter++) {
        printf("Please enter the weight of a dog:  ");
        scanf("%d", &weight[counter]);
        if (weight[counter] < 25) {
            total3 = total3 + weight[counter];
        } else {
            printf("\n*** Weight must be less than 25 lbs ***\n\n");
            counter = counter - 1;
        }
    }
    printf("\nThe total weight of all the small breeds: %d lbs\n", total3);
    avg = (float)total3 / dogs;
    printf("The Average weight of all the small breeds: %.2f lbs\n\n", avg);
    
    return total3;
}
