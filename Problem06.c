/******************************************* 
Wap that will take n integer numbers in an array, n different integer numbers in a second
array and put the sum of the same indexed numbers from the two arrays in a third array.
_____               ______
INPUT               OUTPUT
-----               ------
5                   3 10 6 8 13
1 2 3 4 5
2 8 3 4 8
********************************************/
#include<stdio.h>
int main(){
    int n;
    printf("Enter term value:");
    scanf("%d",&n);
    int num[n],num2[n],sum[n];
    printf("Enter your first Array:\n");
    for(int i=0;i<n;i++){
        scanf("%d", &num[i]);
    }
    printf("Enter your second Array:\n");
    for(int i=0;i<n;i++){
        scanf("%d", &num2[i]);
        sum[i]=num[i]+num2[i];
    }
    printf("Sum os same indexed number:\n");
    for(int i=0;i<n;i++){
        printf("%d ", sum[i]);
    }

}
/******************************************* 
 * Author- Talha Jubayer
 * talhajubayer737@gmail.com
 * BSCSE@United International University
********************************************/