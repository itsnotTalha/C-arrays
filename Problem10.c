/******************************************* 
WAP that will take n integers into an array, and then search a number into that array. If
found then print its index. If not found then print “NOT FOUND”.
_____               ______
INPUT               OUTPUT
-----               ------
8                   FOUND at index position: 3, 7
7 8 1 3 2 6 4 3
3

********************************************/
#include<stdio.h>
int main(){
    int n,Num,count=0;
    printf("Enter Array size:");
    scanf("%d",&n);
    int num[n],ind[n];
    printf("Enter your number:\n");
    for(int i=0;i<n;i++){
        scanf("%d", &num[i]);
    }
    printf("Enter the number you want to search:\n");
    scanf("%d",&Num);
    for(int i=0;i<n;i++){
        if(num[i]==Num){
        ind[count]=i;
        count++;
        }
    }
    if(count!=0){
        printf("FOUND at index position: ");
    for(int i=0;i<count;i++){
        printf("%d",ind[i]);
        if(i<count-1)
        printf(", ");
    }
    }
        else printf("NOT FOUND!");
}
/******************************************* 
 * Author- Talha Jubayer
 * talhajubayer737@gmail.com
 * BSCSE@United International University
********************************************/