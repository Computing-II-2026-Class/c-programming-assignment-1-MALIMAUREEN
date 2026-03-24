/* Name: AMALI MAUREEN LYDIA */
/* Student Number: 25/U/BIE/05286/PE */

#include <stdio.h>

int main(void){
    float amount, fee_percentage, fee, total;
    
    printf("Enter the amount to send");
    scanf("%f", &amount);

    fee = amount*(fee_percentage/100);

    total = amount + fee;

    prinf("\nTransaction fee: %.2f UGX\n", fee);
    prinf("Total deducted:%.2f UGX\n", total);
    
    return 0;
}
