//Zoheb Sayyad  D(D3) comp 251P123

#include<stdio.h>

int main() {

float phy,chem,math,avg;
printf("Enter your phy marks: ");
scanf("%f" , &phy);

printf("Enter your chem marks: ");
scanf("%f" , &chem);

printf("Enter your math marks: ");
scanf("%f" , &math);

avg =(phy + chem + math)/3;
printf("\nAverage marks:  2%f\n" , avg );

(avg>=50) ? printf("you are eligible ") : printf("you are not eligible");
}