/******************************************* 
WAP that will take n integer numbers into an array, and then print all the integers into
reverse order (from the last valid index to index 0).
_____               ______
INPUT               OUTPUT
-----               ------
5                   5 4 3 2 1
1 2 3 4 5
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
    }
    printf("Reversed number:\n");
    for(int i=n-1;i>=0;i--)
    printf("%d ",num[i]);
}
/******************************************* 
 * Author- Talha Jubayer
 * talhajubayer737@gmail.com
 * BSCSE@United International University
********************************************/