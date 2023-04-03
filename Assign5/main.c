#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SIZE 10

typedef int element;
element stack[MAX_SIZE];
int top = -1;

int is_empty()
{
	return (top == -1);
}

int is_full()
{
	return (top == (MAX_SIZE - 1));
}

void push(element item)
{
	if (is_full())
		return;
	else stack[++top] = item;
}

element pop()
{
	if (is_empty())
		return;
	else return stack[top--];
}

int main()
{
	srand(time(NULL));

	for (int i = 0; i < 30; i++)
	{
		for (int i = 0; i < MAX_SIZE; i++)
		{
			int rand_num = rand() % 100 + 1;

			if (rand_num % 2 == 0)
			{
				push(rand_num);
				printf("push : %d\n", rand_num);
			}
			else
				printf("pop : %d\n", pop());
		}
	}
	return 0;
}