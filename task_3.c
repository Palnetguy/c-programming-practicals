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

    // No. 3: Loan eligibility (salary >=5000 OR years >=2)
    float salary;
    int employment_years;
    printf("Enter monthly salary (UGX): ");
    scanf("%f", &salary);
    printf("Enter years employed: ");
    scanf("%d", &employment_years);
    if (salary >= 5000 || employment_years >= 2) {
        printf("Loan Approved!\n");
    } else {
        printf("Loan Denied.\n");
    }
    printf("\n");

    // No. 4: Sales tax (5% if <500, 8% otherwise)
    float amount;
    printf("Enter purchase amount (UGX): ");
    scanf("%f", &amount);
    float tax_rate = (amount < 500) ? 0.05 : 0.08;
    float total_payable = amount * (1 + tax_rate);
    printf("Total Payable: UGX %.2f\n\n", total_payable);

    // No. 5: Overtime pay (1.5x rate after 40 hours)
    float hours_worked, hourly_rate;
    printf("Enter hours worked: ");
    scanf("%f", &hours_worked);
    printf("Enter hourly rate (UGX): ");
    scanf("%f", &hourly_rate);
    float total_salary = (hours_worked <= 40) ? hours_worked * hourly_rate : 40 * hourly_rate + (hours_worked - 40) * hourly_rate * 1.5;
    printf("Total Salary: UGX %.2f\n\n", total_salary);

    // No. 6: Profit/Loss calculation
    float cost_price, selling_price;
    printf("Enter cost price (UGX): ");
    scanf("%f", &cost_price);
    printf("Enter selling price (UGX): ");
    scanf("%f", &selling_price);
    if (selling_price > cost_price) {
        printf("Profit: UGX %.2f\n", selling_price - cost_price);
    } else {
        printf("Loss: UGX %.2f\n", cost_price - selling_price);
    }
    printf("\n");

    // No. 7: Bank withdrawal fee (UGX 10 fee if <500)
    float withdrawal_amount;
    printf("Enter withdrawal amount (UGX): ");
    scanf("%f", &withdrawal_amount);
    float net_amount = (withdrawal_amount < 500) ? withdrawal_amount - 10 : withdrawal_amount;
    printf("Net Amount Received: UGX %.2f\n\n", net_amount);

    // No. 8: Power bill (tiered pricing)
    float units;
    printf("Enter units consumed: ");
    scanf("%f", &units);
    float bill = (units < 200) ? units * 0.50 : units * 0.75;
    printf("Total Bill: UGX %.2f\n\n", bill);

    // No. 9: Gym membership discount
    int membership_years;
    float total_fee;
    printf("Enter membership duration (years): ");
    scanf("%d", &membership_years);
    printf("Enter total fee (UGX): ");
    scanf("%f", &total_fee);
    if (membership_years >= 4) {
        total_fee *= 0.9; // 10% discount
    } else if (membership_years >= 1) {
        total_fee *= 0.95; // 5% discount
    }
    printf("Final Payable Amount: UGX %.2f\n\n", total_fee);

    // No. 10: Bulk order discount (15% if quantity >=10)
    int quantity;
    float price_per_unit;
    printf("Enter price per unit (UGX): ");
    scanf("%f", &price_per_unit);
    printf("Enter quantity: ");
    scanf("%d", &quantity);
    float total_cost = (quantity >= 10) ? quantity * price_per_unit * 0.85 : quantity * price_per_unit;
    printf("Total Cost: UGX %.2f\n", total_cost);


    return 0;
}