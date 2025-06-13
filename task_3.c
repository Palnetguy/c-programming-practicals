#include <stdio.h>

int main() {
    float total_sales, days;
    printf("Enter total sales: ");
    scanf("%f", &total_sales);
    printf("Enter number of days: ");
    scanf("%f", &days);
    float average_sales = total_sales / days;
    printf("Average sales per Day: %.2f\n\n", average_sales);

    return 0;

}