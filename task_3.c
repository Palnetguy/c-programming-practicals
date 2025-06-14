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

    float asset_cost, residual_value, useful_life;
    printf("Enter asset cost: ");
    scanf("%f", &asset_cost);
    printf("Enter residual value: ");
    scanf("%f", &residual_value);
    printf("Enter useful life (years): ");
    scanf("%f", &useful_life);
    float depreciation = (asset_cost - residual_value) / useful_life;
    printf("Depreciation: %.2f\n\n", depreciation);

    float hourly_wage, hours_per_week;
    printf("Enter hourly wage: ");
    scanf("%f", &hourly_wage);
    printf("Enter hours per week: ");
    scanf("%f", &hours_per_week);
    float annual_salary = hourly_wage * hours_per_week * 52; //52 weeks in a year
    printf("Salary: %.2f\n\n", annual_salary);

    float customer1, customer2, customer3;
    printf("Enter spending for customer 1: ");
    scanf("%f", &customer1);
    printf("Enter spending for customer 2: ");
    scanf("%f", &customer2);    
    printf("Enter spending for customer 3: ");
    scanf("%f", &customer3);
    float total_revenue = customer1 + customer2 + customer3;
    printf("Total Revenue: UGX %.2f\n", total_revenue);

    return 0;

}
