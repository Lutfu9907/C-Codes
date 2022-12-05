#include <stdio.h>
#include <stdlib.h>


int returnDigitCount(int num){
    int result = 0;
    for (int i = 1; i <= num; i *= 10){
        result++;
    }
    return result;
}

int getDigit(int num, int digit_rank){
    int digit_count = returnDigitCount(num);
    int pseudo_num = num;
    int divider = 1;
    for (int i = 1;i < digit_count; i++){
        divider *= 10;
    }
    for (int i = 0;i < digit_count - digit_rank; i++){
        int digit_num = pseudo_num / divider;
        pseudo_num -= digit_num * divider;
        divider /= 10;
    }
    return pseudo_num / divider;
}

int checkPerfectSquare(int num){
    int squared_num = 1;
    while (squared_num * squared_num <= num){
        if (squared_num * squared_num == num) return 1;
        squared_num++;
    }
    return 0;
}

int numberRankingCheck()
{

    int number;
    int squarecheck;
    int z;

    printf("Please Enter An Integer:");

    scanf("%d",&number);

    for(z=1;z<=number;z++)
    {
        squarecheck =(z * z);
        if(3 * squarecheck<=number)
        {
        printf("\n%d %d %d\n",squarecheck,squarecheck,squarecheck);
        }
    }

    int i;
    int j;
    int digit_accumulation = 0;

    for (i = 1;i < number + 1; i++){

        printf("\n%d  ", i);
        for (j = 1; j < returnDigitCount(i) + 1; j++){
            printf("%d:", getDigit(i,j));
           // printf("%d",j);
            digit_accumulation += getDigit(i,j);

             //  printf("%d:", getDigit(i));


        }

        printf(" %d\n", digit_accumulation);
        if (checkPerfectSquare(digit_accumulation)) {
            printf("%d => This is a perfect square\n", digit_accumulation);
        }
        /*if else (checkPerfectSquare!=(digit_accumulation)){
            return 0;
        }*/
        digit_accumulation = 0;
    }

}


int main()
{
   numberRankingCheck();
}
