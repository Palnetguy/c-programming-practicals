#include <stdio.h>

int main() {
    // No. 1: Discount for purchases over UGX 1000
    float purchase_amount;
    printf("Enter total purchase amount (UGX): ");
    scanf("%f", &purchase_amount);
    if (purchase_amount > 1000) {
        purchase_amount *= 0.9; // 10% discount
    }
    printf("Final Amount: UGX %.2f\n\n", purchase_amount);

    // No. 2: Employee bonus for >5 years of service
    int years_of_service;
    float basic_salary;
    printf("Enter years of service: ");
    scanf("%d", &years_of_service);
    printf("Enter basic salary (UGX): ");
    scanf("%f", &basic_salary);
    if (years_of_service > 5) {
        basic_salary *= 1.05; // 5% bonus
    }
    printf("Final Salary: UGX %.2f\n\n", basic_salary);


    return 0;
}