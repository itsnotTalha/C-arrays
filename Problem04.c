/******************************************* 
WAP that will take n floating point numbers into an array, and then find the average of those
numbers
_____                    ______
INPUT                    OUTPUT
-----                    ------
5                          5.36
1.2 5.6 10.3 4.5 5.2
********************************************/
#include<stdio.h>
int main(){
    int n;
    printf("Enter term value:");
    scanf("%d",&n);
    float num[n],sum=0,avg;
    printf("Enter your number:\n");
    for(int i=0;i<n;i++){
        scanf("%f", &num[i]);
        sum+=num[i];
    }
    avg=sum/n;
    printf("Average of entered array: %.2f",avg);
}
/******************************************* 
 * Author- Talha Jubayer
 * talhajubayer737@gmail.com
 * BSCSE@United International University
********************************************/