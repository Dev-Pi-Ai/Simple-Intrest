#include <stdio.h>

int main(void)
{
    int years;
    double investment;
    float invest;
    int i;
    float percent;
    
    printf("Initial investment: ");
    scanf("%lf", &investment);
    
    printf("Mounthly investment: ");
    scanf("%f", &invest);
    
    printf("Intrest rate: ");
    scanf("%f", &percent);
    
    printf("Years of compound: ");
    scanf("%d", &years);
    
    percent = percent / 100 + 1;
    
    for (i = 0; i < years; i++)
    {
        investment = percent * investment + (invest * 12);
    }
    
    printf("The total is: $ %lf", investment);
}
