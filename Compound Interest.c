#include <stdio.h>
#include <math.h>

void calculate_compound_interest(float principal, float time, float rate, int n) {
    float amount = principal * pow((1 + rate / (100 * n)), n * time);
    float compound_interest = amount - principal;
    printf("Compound Interest: %.2f\n", compound_interest);
}

int main( ) {
    float principal, time, rate;
    int n;

    // Display heading
    printf("========================================\n");
    printf("       COMPOUND INTEREST CALCULATOR     \n");
    printf("========================================\n");

    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter time (in years): ");
    scanf("%f", &time);
    printf("Enter rate of interest: ");
    scanf("%f", &rate);
    printf("Enter nuumber of times interest compounded per year: ");
    scanf("%d", &n);

    // Calculate and display result
    calculate_compound_interest(principal, time, rate, n);

    return 0;
  }
