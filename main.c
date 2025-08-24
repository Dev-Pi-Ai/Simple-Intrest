#include <stdio.h>

int main(void)
{
    double investment;
    double invest;
    int years;
    double interest;
    int i;

    printf("Enter initial investment: ");
    scanf("%lf", &investment);

    printf("Enter monthly investment: ");
    scanf("%lf", &invest);
    
    printf("Years of compound: ");
    scanf("%d", &years);
    
    printf("Interest rate: ");
    scanf("%lf", &interest);

    interest = interest / 100 + 1;

    for (i = 0; i < years; i++)
    {

        investment = interest * (invest * 12 + investment);
    }

    printf("$%.2lf\n", investment);
}
