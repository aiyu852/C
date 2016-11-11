#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main ()
{
	char another_game = 'Y';
	const unsigned int DELAY=1;
	bool correct = true;
	unsigned int tries = 0;
	unsigned int digits =0;
	time_t seed = 0;
	unsigned int number =0;
	time_t wait_start =0;
	clock_t start_time=0;
	unsigned int score =0;
	unsigned int total_digits =0;
	unsigned int game_time = 0;
	printf("\nTo play Simple Simon,");
	printf("Watch the screen for a sequence of digits.");
	printf("\nWatch carefully ,as the digits are only displayed""for %u second%s",DELAY,DELAY>1?"s!":"!");
	printf("\nThe computer will remove them, and then prompt you");
	printf("to enter the same sequence.");
	printf("\nWhen you do, you must put spaces between the digits.\n");
	printf("\nGood Luck!\nPress Enter toplay\n");
	scanf("%c",&another_game);
	do
	{
		correct = true;
		tries = 0;
		digits = 2;
		start_time = clock();
		while(correct)
		{
			++tries;
			wait_start = clock();
			srand(time(&seed));
			for(unsigned int i=1; i<=digits;++i)
				printf("%u ",rand()%10);
			for( ;clock()-wait_start<DELAY*CLOCKS_PER_SEC; );
			printf("\r");
			for(unsigned int i = 1; i<= digits ; i++)
				printf("  ");
			if(tries == 1)
				printf("\nNow you enter the sequence -don't forget" "the spaces\n");
			else
				printf("\r");
			srand(seed);
			for(unsigned int i = 1 ; i <= digits ; ++i)
			{
				scanf("%u",&number);
				if(number!=rand()%10)
				{
					correct = false;
					break;
				}
			}
			if(correct && ((tries % 3) == 0))
				++digits;
			printf("%s\n",correct ?"Correct!":"Wrong!");
		}
		score = 10/(digits - ((tries % 3) == 1));
		total_digits = digits*(((tries % 3) == 0)?3 : tries%3);
		if(digits > 2)
			total_digits+=3*((digits - 1)*(digits - 2)/2-1);
		game_time = (clock()-start_time);
		if(total_digits>game_time)
			score += 10*(game_time - total_digits);
		printf("\n\nGame time was %u seconds.Your score is %u",game_time,score);
		fflush(stdin);
		printf("\nDo you want to play again (y/n)?");
		scanf("%c",&another_game);
	}
	while(toupper(another_game) == 'Y');
	return 0;		
} 

//ʱ��������⣬�ȴ�<time.h>ͷ�ļ���ѧϰ�������� 
