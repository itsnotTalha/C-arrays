/******************************************* 
WAP that will first take n integers into an array A and then m integers into array B. Now
swap all elements between array A and B. Finally show all elements of both array A and B.
_____               ______
INPUT               OUTPUT
-----               ------

********************************************/
#include<stdio.h>
int main(){
    int n;
    printf("Enter Array-1 size:");
    scanf("%d",&n);
    int num1[n];
    printf("Enter your numbers:\n");
    for(int i=0;i<n;i++){
        scanf("%d", &num1[i]);
    }
    int m;
    printf("Enter Array-2 size:");
    scanf("%d",&m);
    int num2[m];
    printf("Enter your numbers:\n");
    for(int i=0;i<n;i++){
        scanf("%d", &num2[i]);
    }
    int temp[m];
    temp[]=num2[];
    for(int i=0;i<m;i++)
    printf("%d ",temp[i]);
}
/******************************************* 
 * Author- Talha Jubayer
 * talhajubayer737@gmail.com
 * BSCSE@United International University
********************************************/