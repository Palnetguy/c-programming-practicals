#include <stdio.h>


#define INTEREST_RATE 0.05
#define DISCOUNT_PERCENTAGE 15
#define UGX_PER_USD 3500
#define BONUS_PERCENTAGE 10
#define TAX_RATE 0.18


int main(){
    float principal = 10000, time = 2;
    float simple_interest = principal * time * INTEREST_RATE;
    printf("Simple Interest: UGX %.2f\n", simple_interest);

    float price = 50000;
    float discounted_price = price - (DISCOUNT_PERCENTAGE / 100.0 * price);
    printf("Discounted Price: UGX %.2f\n", discounted_price);

    int usd = 700;
    long ugx = usd * UGX_PER_USD;
    printf("%d USD = %ld UGX\n", usd, ugx);

    float salary = 250000;
    float bonus = salary * (BONUS_PERCENTAGE / 100.0);
    printf("Bonus: UGX %.2f\n", bonus);

    float product_price = 30000;
    float total_cost = product_price + (TAX_RATE * product_price);
    printf("Total Cost (incl. Tax): UGX %.2f\n", total_cost);

    return 0;

}