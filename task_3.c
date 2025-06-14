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


    return 0;
}