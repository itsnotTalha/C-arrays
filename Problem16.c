/******************************************* 
WAP that will take n positive integers into an array A. Now find all the integers that have
an odd index and replace them by 0 in array A. Finally show all elements of array A.
_____               ______
INPUT               OUTPUT
-----               ------
8                   7 0 1 0 2 0 4 0
7 8 1 3 2 6 4 3
********************************************/
#include<stdio.h>
int main(){
    int n;
    printf("Enter Array size:");
    scanf("%d",&n);
    int num[n];
    printf("Enter your number:\n");
    for(int i=0;i<n;i++){
        scanf("%d", &num[i]);
        if(i%2!=0)
        num[i]=0;
    }
    for(int i=0;i<n;i++)
    printf("%d ",num[i]);
}
/******************************************* 
 * Author- Talha Jubayer
 * talhajubayer737@gmail.com
 * BSCSE@United International University
********************************************/