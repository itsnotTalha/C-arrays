/******************************************* 
WAP that will take n integer numbers as input in an array and then delete a number from
a position specified by the user in the array.
_____                        ______
INPUT                        OUTPUT
-----                        ------
10                            9 11 34 23 15 2 37 89 54  
9 11 34 23 16 15 2 37 89 54
position: 4
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
    int pos;
    puts("Enter the position you want to delete:");
    scanf("%d",&pos);
    for(int i=0;i<n-1;i++){
        if(i>=pos){
            printf("%d ",num[i+1]);
        }
        else 
        printf("%d ",num[i]);
    }
}
/******************************************* 
 * Author- Talha Jubayer
 * talhajubayer737@gmail.com
 * BSCSE@United International University
********************************************/