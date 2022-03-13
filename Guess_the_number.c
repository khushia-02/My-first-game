#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int play(int, int);

int main()
{
	int number;
	int input;
	srand(time(0));
	number = rand() % 100 + 1;
	printf("Guess the number: ");
	scanf("%d", &input);
	play(number, input);

	return 0;
}

int play(int number, int input)
{
	int i = 0;
	while (input != number)
	{
		if (input > number)
		{
			printf("\nThe number is smaller than %d", input);
			printf("\nGuess again: ");
			scanf("%d", &input);
			i++;
		}
		else if (input < number)
		{
			printf("\nThe number is bigger than %d", input);
			printf("\nGuess again: ", input);
			scanf("%d", &input);
			i++;
		}
	}
	printf("\nCongrats, you guessed it correctly!!");
	printf("\n Total number of attempts: %d", i);
}