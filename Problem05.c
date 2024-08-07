/******************************************* 
WAP that will take n integer numbers into an array, and then sum up all the even indexed
integers in that array.
_____               ______
INPUT               OUTPUT
-----               ------
5                      9
1 2 3 4 5
********************************************/
#include<stdio.h>
int main(){
    int n, sum=0;
    printf("Enter term value:");
    scanf("%d",&n);
    int num[n];
    printf("Enter your number:\n");
    for(int i=0;i<n;i++){
        scanf("%d", &num[i]);
        if(i%2==0)
        sum+=num[i];
    }
    printf("Sum of even indexed number: %d",sum);
}
/******************************************* 
 * Author- Talha Jubayer
 * talhajubayer737@gmail.com
 * BSCSE@United International University
********************************************/