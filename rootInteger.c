#include<stdio.h>
#include<stdbool.h>

int squareRoot(int n)
{
	int a = 0;

	for (; a * a < n; a = a + 1);

	if (a * a == n)
		return a;
	else return a - 1;

}

int main()
{
    int n;
    printf("Enter your number:\n");
    scanf("%d",&n);
    printf("%d",squareRoot(n));
}
