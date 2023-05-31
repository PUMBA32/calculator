#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main()
{
    double x, y;
    char sign;

    printf("\nCalculator activate!\n");
    printf("\n===============================\n");
    while(true)
    {
        printf("\nSign(+, -, *, /): ");
        scanf("%c", &sign);

        if(sign == '+' || sign == '-' || sign == '*' || sign == '/')
        {
            printf("x = ");
            scanf("%lf", &x);
            printf("y = ");
            scanf("%lf", &y);

            switch (sign)
            {
            case '+':
                printf("\nresult %.1lf\n", x+y);
                printf("\n===============================\n");
                break;
            case '-':
                printf("\nresult %.1lf\n", x-y);
                printf("\n===============================\n");
                break;
            case '*':
                printf("\nresult %.1lf\n", x*y);
                printf("\n===============================\n");
                break;
            case '/':
                printf("\nresult %.1lf\n", x/y);
                printf("\n===============================\n");
                break;
            }
        }
        else
        {
            printf("\nerror\n");
            return 0;
        }
    }
    return 0;
}