#include <stdio.h>


int returnPower(int m, int n)
{
	int result = 1;
	int c;

	for (c = 0 ; c < n; c = c +1)
	{
		result = result * m;
	}

	return result;
}

int returnDigitCount(int num)
{
	int i;
    int result = 0;
    for (i = 1; i <= num; i = i * 10)
	{
        result = result + 1;
    }
    return result;
}

void find_armstrong(int num)
{
    int digit_count = returnDigitCount(num);
    int divider = 1;
    int result = 0;
    int pseudo_num = num;
    int j;
    int i;
    

    for (i = 1;i < digit_count; i = i + 1)
	{
        divider = divider * 10;
    }
    for (j = 0;j < digit_count; j = j + 1)
	{
        int digit_num = pseudo_num / divider;
        pseudo_num = pseudo_num - (digit_num * divider);
        divider = divider / 10;
        result = result + returnPower(digit_num, digit_count);
    }
    if (result == num) 
	{
        printf("This is an armstrong number\n\n");
    }
    else 
	{
        printf("This is not an armstrong number. Try again.\n\n");
    }
}

void main()
{
    int num;
	printf("Enter a number: \n");
    scanf("%d", &num);
    find_armstrong(num);
}
