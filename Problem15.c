/******************************************* 
WAP that will take n positive integers into an array A. Now find all the integers that are
divisible by 3 and replace them by -1 in array A. Finally show all elements of array A.
_____               ______
INPUT               OUTPUT
-----               ------
8                   7 8 1 -1 2 -1 4 -1
7 8 1 3 2 6 4 3
********************************************/
#include<stdio.h>
int main(){
    int n;
    printf("Enter Array size:");
    scanf("%d",&n);
    int num[n];
    printf("Enter your numbers:\n");
    for(int i=0;i<n;i++){
        scanf("%d", &num[i]);
        if(num[i]%3==0)
        num[i]=-1;
    }
    for(int i=0;i<n;i++)
    printf("%d ",num[i]);

}
/******************************************* 
 * Author- Talha Jubayer
 * talhajubayer737@gmail.com
 * BSCSE@United International University
********************************************/