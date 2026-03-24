/* Name: AMALI MAUREEN LYDIA*/
/* Student Number: 25/U/BIE/05286/PE*/
#include <stdio.h>0
int main() {
    float units_consumed, cost_per_unit, total_bill;

    printf("Enter units_consumed");
    scanf("%f", &units_consumed);

    printf("Enter cost_per_unit");
    scanf("%f", &cost_per_unit);

    total_bill = units_consumed*cost_per_unit;
    
    printf("total_bill: %.2f", total_bill);

    return 0;
}
