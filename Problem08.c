/******************************************* 
WAP that will take n integer numbers into an array, and then find the maximum -
minimum among them with its index position.
_____               ______
INPUT               OUTPUT
-----               ------
5                   Max: 5, Index: 4
1 2 3 4 5           Min: 1, Index: 0           
********************************************/
#include<stdio.h>
int main(){
    int n;
    printf("Enter Array size:");
    scanf("%d",&n);
    int num[n];
    int max,min;
    int maxInd,minInd;
    printf("Enter your number:\n");
    for(int i=0;i<n;i++){
        scanf("%d", &num[i]);
        max=min=num[0];
        if(num[i]>max){
        max=num[i];
        maxInd=i;
        }
        else if(num[i]<=min){
            min=num[i];
            minInd=i;
        }
    }
    printf("Max: %d, Index: %d\nMin: %d, Index: %d",max,maxInd,min,minInd);    
}
/******************************************* 
 * Author- Talha Jubayer
 * talhajubayer737@gmail.com
 * BSCSE@United International University
********************************************/