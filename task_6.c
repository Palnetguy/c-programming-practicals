#include <stdio.h>
#include <math.h>

float calculateSalePrice() {
    float original_price = 200000;
    float discount = 0.10;
    return original_price - (original_price * discount);
}

float calculateSalaryAfterTax() {
    float salary = 5000000;
    float tax_rate = 0.15;
    return salary - (salary * tax_rate);
}

float calculateGrossProfit() {
    float revenue = 15000000;
    float cogs = 9000000;
    return revenue - cogs;
}

float calculateROI() {
    float investment = 10000000;
    float profit = 2000000;
    return (profit / investment) * 100;
}

float calculateLoanPayment() {
    float principal = 50000000;
    float annual_rate = 0.05;
    int years = 5;
    float monthly_rate = annual_rate / 12;
    int payments = years * 12;
    return (principal * monthly_rate * pow(1 + monthly_rate, payments)) / 
           (pow(1 + monthly_rate, payments) - 1);
}

float calculateSimpleInterest() {
    float principal = 2000000;
    float rate = 0.06;
    int time = 3;
    return (principal * rate * time);
}

int calculateBreakEven() {
    float fixed_costs = 10000000;
    float price = 100000;
    float variable_costs = 50000;
    return fixed_costs / (price - variable_costs);
}

float calculateFlatInterest() {
    float principal = 1000000;
    float rate = 0.04;
    int time = 2;
    return principal * rate * time;
}

float calculateProfitMargin() {
    float revenue = 30000000;
    float profit = 9000000;
    return (profit / revenue) * 100;
}

float calculateDepreciation() {
    float cost = 10000000;
    float residual = 2000000;
    int life = 5;
    return (cost - residual) / life;
}


int main() {
    printf("1. Sale Price: UGX %.2f\n", calculateSalePrice());
    printf("2. Salary After Tax: UGX %.2f\n", calculateSalaryAfterTax());
    printf("3. Gross Profit: UGX %.2f\n", calculateGrossProfit());
    printf("4. ROI: %.2f%%\n", calculateROI());
    printf("5. Monthly Loan Payment: UGX %.2f\n", calculateLoanPayment());
    printf("6. Simple Interest: UGX %.2f\n", calculateSimpleInterest());
    printf("7. Break-even Point: %d units\n", calculateBreakEven());
    printf("8. Flat Interest: UGX %.2f\n", calculateFlatInterest());
    printf("9. Profit Margin: %.2f%%\n", calculateProfitMargin());
    printf("10. Annual Depreciation: UGX %.2f\n\n", calculateDepreciation());

    return 0;
}