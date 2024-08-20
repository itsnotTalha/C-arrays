/******************************************* 
WAP that will take n integers into an array A. Now sort them in ascending order within
that array. Finally show all elements of array A.
Reference: http://en.wikipedia.org/wiki/Bubble_sort
_____               ______
INPUT               OUTPUT
-----               ------
8                   1 2 3 3 4 6 7 8
7 8 1 3 2 6 4 3
********************************************/
#include<stdio.h>
int main(){
    int n;
    printf("Enter Array size:");
    scanf("%d",&n);
    int num[n];
    int newNum[10]={};
    printf("Enter your number:\n");
    for(int i=0;i<n;i++){
        scanf("%d", &num[i]);
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<n;j++){
        if(i==num[j])
        newNum[i]++;
        }
    }
    printf("Ascended Array: ");
    for(int i=0;i<=n;i++){
    if(newNum[i]!=0&&newNum[i]<2)
    printf("%d ",i);
    else if(newNum[i]!=0&&newNum[i]>1)
    for(int j=0;j<newNum[i];j++)
    printf("%d ",i);
    else continue;
    }
}
/******************************************* 
 * Author- Talha Jubayer
 * talhajubayer737@gmail.com
 * BSCSE@United International University
********************************************/