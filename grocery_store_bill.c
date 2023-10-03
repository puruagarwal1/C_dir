//GROCERY STORE BILL OF THREE PRODUCTS
#include<stdio.h>
int main() {
    char i1[50], i2[50], i3[50];
    float p1, p2, p3;
    int q1, q2, q3;
    printf("Enter name of p1, price of p1, quantity of p1: ");
    scanf("%s %f %d", &p1, &p1, &q1);
    printf("Enter name of p2, price of p2, quantity of p2: ");
    scanf("%s %f %d", &p2, &p2, &q2);
    printf("Enter name of p3, price of p3, quantity of p3: ");
    scanf("%s %f %d", &p3, &p3, &q3);
    float total = (p1 * q1) + (p2 * q2) + (p3 * q3);
    printf("Item\tPrice\tQuantity\tAmount\n");
    printf("%s\t%f\t%d\t\t%f\n", i1, p1, q1, p1 * q1);
    printf("%s\t%f\t%d\t\t%f\n", i2, p2, q2, p2 * q2);
    printf("%s\t%f\t%d\t\t%f\n", i3, p3, q3, p3 * q3);
    printf("Total\t\t\t\t\t%f", total);
    return 0;
}
