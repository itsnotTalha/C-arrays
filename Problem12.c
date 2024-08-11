/******************************************* 
WAP that will take n integer numbers as input in an array and then insert a number in a
position specified by the user in the array.
_____                           ______
INPUT                           OUTPUT
-----                           ------
10                              9 11 34 23 78 16 15 2 37 89 54
9 11 34 23 16 15 2 37 89 54
number: 78 position: 4
********************************************/
#include<stdio.h>
int main(){
    int n;
    printf("Enter Array size:");
    scanf("%d",&n);
    int num[n],cngNum[n+1];
    printf("Enter your Array:\n");
    for(int i=0;i<n;i++){
        scanf("%d", &num[i]);
    }
    int numb,pos;
    printf("Enter your number: ");
    scanf("%d", &numb);
    printf(" Position: ");
    scanf("%d",&pos);
    for(int i=0;i<=n;i++){
        if(i<pos)
        cngNum
        if(i==pos){
            cngNum[i]=numb;
        }
    }
}
/******************************************* 
 * Author- Talha Jubayer
 * talhajubayer737@gmail.com
 * BSCSE@United International University
********************************************/