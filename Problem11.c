/******************************************* 
WAP that will take n integers into an array A, and then copy all numbers in reverse order
from array A to another array B. Finally show all elements of both array A and B.
_____               ______
INPUT               OUTPUT
-----               ------
8                   Array A : 7 8 1 3 2 6 4 3
7 8 1 3 2 6 4 3     Array B : 3 4 6 2 3 1 8 7
********************************************/
#include<stdio.h>
int main(){
    int n;
    printf("Enter Array size:");
    scanf("%d",&n);
    int num[n],numB[n];
    printf("Enter Array A: ");
    for(int i=0;i<n;i++){
        scanf("%d", &num[i]);
        numB[n-i-1]=num[i];
    }
    printf("Array A: ");
    for(int i=0;i<n;i++)
    printf("%d ",num[i]);
puts("");
    printf("Array B: ");
    for(int i=0;i<n;i++)
    printf("%d ",numB[i]);
}
/******************************************* 
 * Author- Talha Jubayer
 * talhajubayer737@gmail.com
 * BSCSE@United International University
********************************************/