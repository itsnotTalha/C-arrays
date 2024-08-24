/******************************************* 
WAP that will take n integers into an array A. Now remove all duplicates numbers from
that array. Finally print all elements from that array.
_____               ______
INPUT               OUTPUT
-----               ------
8                   2 8 1 3 6 4
2 8 1 3 2 6 4 3
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
    for(int i=0;i<n;i++){
        if(newNum[i]<2)
        printf("%d ",num[i]);
        else continue;
    }
}
/******************************************* 
 * Author- Talha Jubayer
 * talhajubayer737@gmail.com
 * BSCSE@United International University
********************************************/