/*
** EPITECH PROJECT, 2023
** my_put_scient_not.c
** File description:
** displays a number in scientific notation
*/

void my_put_scient_not(double nbr)
{
    //nbr_bin = 0b1000000000010000000000000000000000000000000000000000000000000001;
    nbr_ref = 9227875636482146000;

    //mask1_sign_bin = 0b1000000000000000000000000000000000000000000000000000000000000000;
    double mask1_sign = 9223372036854776000;

    //mask2_exponent_bin = 0b0111111111110000000000000000000000000000000000000000000000000000;
    double mask2_exponent = 9218868437227405000;

    //mask3_mantiss_bin = 0b0000000000001111111111111111111111111111111111111111111111111111;
    double mask3_mantiss = 4503599627370495;

    printf("Number ref : %f/nMask1 : %f\nMask 2: %f\nMask3: %f\n", nbr, mask1_sign, mask2_exponent, mask3_mantiss);

    double sign = nbr_ref & mask1_sign >>  63;              /* Contient le signe */
    double exponent = nbr_ref & mask2_exponent >> 52;     /* Contient l'exposant a gauche*/
    double mantiss = nbr_ref & mask3_mantiss;             /* Contient la mantisse */
}
