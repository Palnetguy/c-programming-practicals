#include <stdio.h>

int main() {
    float total_sales, days;
    printf("Enter total sales: ");
    scanf("%f", &total_sales);
    printf("Enter number of days: ");
    scanf("%f", &days);
    float average_sales = total_sales / days;
    printf("Average sales per Day: %.2f\n\n", average_sales);

    float sales_volume, commision_rate;
    printf("Enter sales volume: ");
    scanf("%f", &sales_volume);
    printf("Enter commision rate: ");
    scanf("%f", &commision_rate);
    float commision = sales_volume * (commision_rate / 100);
    printf("Commision: %.2f\n\n", commision);

    return 0;

}
