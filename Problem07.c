/******************************************* 
WAP that will take n integer numbers into an array, and then reverse all the integers
within that array. Finally print them all from 0 index to last valid index.
_____               ______
INPUT               OUTPUT
-----               ------
5                   5 4 3 2 1
1 2 3 4 5
********************************************/
#include<stdio.h>
int main(){
    int n;
    printf("Enter term value:");
    scanf("%d",&n);
    int num[n],rev[n];
    printf("Enter your number:\n");
    for(int i=0;i<n;i++){
        scanf("%d", &num[i]);
        rev[(n-1)-i]=num[i];
    }
    printf("Reversed number:\n");
    for(int i=0;i<n;i++)
    printf("%d ", rev[i]);

}
/******************************************* 
 * Author- Talha Jubayer
 * talhajubayer737@gmail.com
 * BSCSE@United International University
********************************************/