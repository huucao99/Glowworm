/* 	Huu Ngoc Chinh Cao
	4529434
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Glowworm.h"

double difficultyRating(void)
{
	return 5.0;
}

double hoursSpent(void)
{
	// Change this before submitting.
	return 8.0;
}

int main(int argc, char **argv)
{
	// Glowworm appears
	int a, b, t, h, i, head, tail, maxlength, len;
	tail = 0;
	head = 2;
	len = strlen(argv[2]);
	maxlength = atoi(argv[1]);
	printf("%s", argv[2]);
	printf("\n\nGlowworm appears! Hooray!\n");
	printf("~OG\n");
	for (a = 0; a < maxlength; a++)
		printf("=");
	printf("\n\n");
	for (i = 0; i < len; i++)
	{
		//Glowworm grows
		if (argv[2][i] == '@' || argv[2][i] == 'o' || argv[2][i] == 'O')
		{
			//If meets those requirements, glowworm chills (reach maximum length)
			if ((head - tail) >= (maxlength - 1))
			{	
				if (head > tail)
				{
					printf("Glowworm chills:\n");
					for (t = 0; t < tail; t++)
						printf(" ");
					printf("~");
					for (b = 0; b < (head - tail - 2); b++)
						printf("o");
					printf("OG");
					printf("\n");
					for (a = 0; a < maxlength; a++)
						printf("=");
				}
				else if (head < tail)
				{
					printf("Glowworm chills:\n");
					if (head == 0)
					{	
						printf("G");
						for (t = 0; t < (tail - head - 1); t++)
							printf(" ");
						printf("~");
						for (b = 0; b < (maxlength - tail - 2); b++)
							printf("o");
						printf("O");
						printf("\n");
						for (a = 0; a < maxlength; a++)
							printf("=");
					}
					else if (head == 1)
					{
						printf("OG");
						for (t = 0; t < (tail - head - 1); t++)
							printf(" ");
						printf("~");
						for (b = 0; b < (maxlength - tail - 2); b++)
							printf("o");
						printf("\n");
						for (a = 0; a < maxlength; a++)
							printf("=");
					}
					else if (head > 1)
					{
						for (b = 0; b < (head - 1); b++)
							printf("o");
						printf("OG");
						for (t = 0; t < (tail - head - 1); t++)
							printf(" ");
						printf("~");
						for (b = 0; b < (maxlength - tail - 1); b++)
							printf("o");
						printf("\n");
						for (a = 0; a < maxlength; a++)
							printf("=");
					}
				}
			printf("\n\n");
			}
			// Glowworm grows if has enough length
			else if ((head - tail) < (maxlength - 1))
			{	
				if (head > (maxlength - 2))
					head = head - maxlength;
				head++;
				if (head > tail)
				{
					printf("Glowworm grows:\n");
					for (t = 0; t < tail; t++)
						printf(" ");
					printf("~");
					for (b = 0; b < (head - tail - 2); b++)
						printf("o");
					printf("OG");
					printf("\n");
					for (a = 0; a < maxlength; a++)
						printf("=");
				}
				else if (head < tail)
				{
					printf("Glowworm grows:\n");
					if (head == 0)
					{	
						printf("G");
						for (t = 0; t < (tail - head - 1); t++)
							printf(" ");
						printf("~");
						for (b = 0; b < (maxlength - tail - 2); b++)
							printf("o");
						printf("O");
						printf("\n");
						for (a = 0; a < maxlength; a++)
							printf("=");
					}
					else if (head == 1)
					{
						printf("OG");
						for (t = 0; t < (tail - head - 1); t++)
							printf(" ");
						printf("~");
						for (b = 0; b < (maxlength - tail - 1); b++)
							printf("o");
						printf("\n");
						for (a = 0; a < maxlength; a++)
							printf("=");
					}
					else if (head > 1)
					{
						for (b = 0; b < (head - 1); b++)
							printf("o");
						printf("OG");
						for (t = 0; t < (tail - head - 1); t++)
							printf(" ");
						printf("~");
						for (b = 0; b < (maxlength - tail - 1); b++)
							printf("o");
						printf("\n");
						for (a = 0; a < maxlength; a++)
							printf("=");
					}
				}
				// If Glowworms return and meets its tail, glowworm chills
				else if (head == tail)
				{
					printf("Glowworm chills:\n");
					head--;
					if (head == 0)
					{	
						printf("G");
						for (t = 0; t < (tail - head - 1); t++)
							printf(" ");
						printf("~");
						for (b = 0; b < (maxlength - tail - 2); b++)
							printf("o");
						printf("O");
						printf("\n");
						for (a = 0; a < maxlength; a++)
							printf("=");
					}
					else if (head == 1)
					{
						printf("OG");
						for (t = 0; t < (tail - head - 1); t++)
							printf(" ");
						printf("~");
						for (b = 0; b < (maxlength - tail - 2); b++)
							printf("o");
						printf("\n");
						for (a = 0; a < maxlength; a++)
							printf("=");
					}
					else if (head > 1)
					{
						for (b = 0; b < (head - 1); b++)
							printf("o");
						printf("OG");
						for (t = 0; t < (tail - head - 1); t++)
							printf(" ");
						printf("~");
						for (b = 0; b < (maxlength - tail - 1); b++)
							printf("o");
						printf("\n");
						for (a = 0; a < maxlength; a++)
							printf("=");
					}
				}	
				printf("\n\n");
			}	
		}
		// Glowworm shrinks
		else if (argv[2][i] == 's' || argv[2][i] == 'S')
		{
			// Glowworm chills if it's gonna be shorter than the requirement
			if (((head - tail) <= 2) && (head > tail))
			{	
				{
					printf("Glowworm chills:\n");
					for (t = 0; t < tail; t++)
						printf(" ");
					printf("~");
					for (b = 0; b < (head - tail - 2); b++)
						printf("o");
					printf("OG");
					printf("\n");
					for (a = 0; a < maxlength; a++)
						printf("=");
				}
			
				
			printf("\n\n");
			}
			// Glowworm shrinks if it's long enough to shrink
			else if (((head - tail) > 2) || (head < tail))
			{
				if ((tail - head) > (maxlength - 3))
				{
					printf("Glowworm chills:\n");
					if (head == 0)
					{	
						printf("G");
						for (t = 0; t < (tail - head - 1); t++)
							printf(" ");
						printf("~");
						for (b = 0; b < (maxlength - tail - 2); b++)
							printf("o");
						printf("O");
						printf("\n");
						for (a = 0; a < maxlength; a++)
							printf("=");
					}
					else if (head == 1)
					{
						printf("OG");
						for (t = 0; t < (tail - head - 1); t++)
							printf(" ");
						printf("~");
						for (b = 0; b < (maxlength - tail - 2); b++)
							printf("o");
						printf("\n");
						for (a = 0; a < maxlength; a++)
							printf("=");
					}
					else if (head > 1)
					{
						for (b = 0; b < (head - 1); b++)
							printf("o");
						printf("OG");
						for (t = 0; t < (tail - head - 1); t++)
							printf(" ");
						printf("~");
						for (b = 0; b < (maxlength - tail - 1); b++)
							printf("o");
						printf("\n");
						for (a = 0; a < maxlength; a++)
							printf("=");
					}
				}
				else
				{
				head--;
				if (head < 0)
				head = maxlength + head;
				if (head > tail)
				{
					printf("Glowworm shrinks:\n");
					for (t = 0; t < tail; t++)
						printf(" ");
					printf("~");
					for (b = 0; b < (head - tail - 2); b++)
						printf("o");
					printf("OG");
					printf("\n");
					for (a = 0; a < maxlength; a++)
						printf("=");
				}
				else if (head < tail)
				{
					printf("Glowworm shrinks:\n");
					if (head == 0)
					{	
						printf("G");
						for (t = 0; t < (tail - head - 1); t++)
							printf(" ");
						printf("~");
						for (b = 0; b < (maxlength - tail - 2); b++)
							printf("o");
						printf("O");
						printf("\n");
						for (a = 0; a < maxlength; a++)
							printf("=");
					}
					else if (head == 1)
					{
						printf("OG");
						for (t = 0; t < (tail - head - 1); t++)
							printf(" ");
						printf("~");
						for (b = 0; b < (maxlength - tail - 1); b++)
							printf("o");
						printf("\n");
						for (a = 0; a < maxlength; a++)
							printf("=");
					}
					else if (head > 1)
					{
						for (b = 0; b < (head - 1); b++)
							printf("o");
						printf("OG");
						for (t = 0; t < (tail - head - 1); t++)
							printf(" ");
						printf("~");
						for (b = 0; b < (maxlength - tail - 1); b++)
							printf("o");
						printf("\n");
						for (a = 0; a < maxlength; a++)
							printf("=");
					}
				}
				}
				printf("\n\n");
			}
		}
		// Glowworm inches foward
		else if (argv[2][i] == '-' || argv[2][i] == '=')
		{
			head++;
			tail++;
			if (head > (maxlength - 1))
				head = head - maxlength;
			if (tail > (maxlength - 1))
				tail = tail - maxlength;
				if (head > tail)
				{
					printf("Glowworm inches forward:\n");
					for (t = 0; t < tail; t++)
						printf(" ");
					printf("~");
					for (b = 0; b < (head - tail - 2); b++)
						printf("o");
					printf("OG");
					printf("\n");
					for (a = 0; a < maxlength; a++)
						printf("=");
				}
				else if (head < tail)
				{
					printf("Glowworm inches forward:\n");
					if (head == 0)
					{	
						printf("G");
						for (t = 0; t < (tail - head - 1); t++)
							printf(" ");
						printf("~");
						for (b = 0; b < (maxlength - tail - 2); b++)
							printf("o");
						printf("O");
						printf("\n");
						for (a = 0; a < maxlength; a++)
							printf("=");
					}
					else if (head == 1)
					{
						printf("OG");
						for (t = 0; t < (tail - head - 1); t++)
							printf(" ");
						printf("~");
						for (b = 0; b < (maxlength - tail - 1); b++)
							printf("o");
						printf("\n");
						for (a = 0; a < maxlength; a++)
							printf("=");
					}
					else if (head > 1)
					{
						for (b = 0; b < (head - 1); b++)
							printf("o");
						printf("OG");
						for (t = 0; t < (tail - head - 1); t++)
							printf(" ");
						printf("~");
						for (b = 0; b < (maxlength - tail - 1); b++)
							printf("o");
						printf("\n");
						for (a = 0; a < maxlength; a++)
							printf("=");
					}
				}
			printf("\n\n");
		}
		//Glowworm dies
		else if (argv[2][i] == 'x' || argv[2][i] == 'X' || argv[2][i] == '%')
		{
			if (head > tail)
			{
				printf("Glowworm meets its demise. SAD.\n");
				for (t = 0; t < tail; t++)
					printf(" ");
				printf("~");
				for (b = 0; b < (head - tail - 2); b++)
					printf("o");
				printf("Xx");
				printf("\n");
				for (a = 0; a < maxlength; a++)
					printf("=");
			}
			else if (head < tail)
			{
				printf("Glowworm meets its demise. SAD.\n");
				if (head == 0)
				{	
					printf("x");
					for (t = 0; t < (tail - head - 1); t++)
						printf(" ");
					printf("~");
					for (b = 0; b < (maxlength - tail - 2); b++)
						printf("o");
					printf("X");
					printf("\n");
					for (a = 0; a < maxlength; a++)
						printf("=");
				}
				else if (head == 1)
				{
					printf("Xx");
					for (t = 0; t < (tail - head - 1); t++)
						printf(" ");
					printf("~");
					for (b = 0; b < (maxlength - tail - 1); b++)
						printf("o");
					printf("\n");
					for (a = 0; a < maxlength; a++)
						printf("=");
				}
				else if (head > 1)
				{
					for (b = 0; b < (head - 1); b++)
						printf("o");
					printf("OG");
					for (t = 0; t < (tail - head - 1); t++)
						printf(" ");
					printf("~");
					for (b = 0; b < (maxlength - tail - 1); b++)
						printf("o");
					printf("\n");
					for (a = 0; a < maxlength; a++)
						printf("=");
				}
			}
			printf("\n\n");
			break;
		}
		// Glowworm chills
		else
		{
			if (head > tail)
			{
				printf("Glowworm chills:\n");
				for (t = 0; t < tail; t++)
					printf(" ");
				printf("~");
				for (b = 0; b < (head - tail - 2); b++)
					printf("o");
				printf("OG");
				printf("\n");
				for (a = 0; a < maxlength; a++)
					printf("=");
			}
			else if (head < tail)
			{
				printf("Glowworm chills:\n");
				if (head == 0)
				{	
					printf("G");
					for (t = 0; t < (tail - head - 1); t++)
						printf(" ");
					printf("~");
					for (b = 0; b < (maxlength - tail - 2); b++)
						printf("o");
					printf("O");
					printf("\n");
					for (a = 0; a < maxlength; a++)
						printf("=");
				}
				else if (head == 1)
				{
					printf("OG");
					for (t = 0; t < (tail - head - 1); t++)
						printf(" ");
					printf("~");
					for (b = 0; b < (maxlength - tail - 2); b++)
						printf("o");
					printf("\n");
					for (a = 0; a < maxlength; a++)
						printf("=");
				}
				else if (head > 1)
				{
					for (b = 0; b < (head - 1); b++)
						printf("o");
					printf("OG");
					for (t = 0; t < (tail - head - 1); t++)
						printf(" ");
					printf("~");
					for (b = 0; b < (maxlength - tail - 1); b++)
						printf("o");
					printf("\n");
					for (a = 0; a < maxlength; a++)
						printf("=");
				}
			}
			printf("\n\n");
		}
	}
	return 0;
}	

