/******************************************* 
WAP that will first take n integers into an array A and then m integers into array B. Now
swap all elements between array A and B. Finally show all elements of both array A and B.
_____               ______
INPUT               OUTPUT
-----               ------
8                   Array A : 3 2 1
7 8 1 3 2 6 4 3     Array B : 7 8 1 3 2 6 4 3
3
3 2 1
********************************************/
#include<stdio.h>
int main(){
    int n;
    printf("Enter Array-A size: ");
    scanf("%d",&n);
    int num1[n];
    int tmp[n];
    printf("Enter your numbers:\n");
    for(int i=0;i<n;i++){
        scanf("%d", &num1[i]);
        tmp[i]=num1[i];
    }
    int m;
    printf("Enter Array-B size: ");
    scanf("%d",&m);
    int num2[m];
    printf("Enter your numbers:\n");
    for(int i=0;i<n;i++){
        scanf("%d", &num2[i]);
    }
    //First swap
    for(int i=0;i<m;i++)
        num1[i]=num2[i];
    //Second swap
    for(int i=0;i<n;i++)
        num2[i]=tmp[i];
        
    printf("Array A: ");
    for(int i=0;i<m;i++)
    printf("%d ",num1[i]);
    puts("");
    printf("Array B: ");
    for(int i=0;i<n;i++)
    printf("%d ",num2[i]);
}
/******************************************* 
 * Author- Talha Jubayer
 * talhajubayer737@gmail.com
 * BSCSE@United International University
********************************************/