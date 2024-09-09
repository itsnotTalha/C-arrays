/******************************************* 
WAP that will take n integers into an array A and m positive integers into array B. Now
find the union (set operation) of array A and B.
_____               ______
INPUT               OUTPUT
-----               ------
8                   7 8 1 5 2 6 4 3 0 9
7 8 1 5 2 6 4 3
6
1 3 6 0 9 2
********************************************/
#include<stdio.h>
int main(){
    int n,m;
    printf("Enter size of Array A & Array B :");
    scanf("%d %d",&n,&m);
    int num[n],num2[m];
    printf("Enter your number(Array A) :\n");
    for(int i=0;i<n;i++){
        scanf("%d", &num[i]);
    }
    printf("Enter your number(Array B) :\n");
    for(int i=0;i<m;i++){
        scanf("%d", &num2[i]);
    }
    int f[100]={0};
    for(int i=0;i<n;i++){
        if(f[num[i]]==0){
            printf("%d ",num[i]);
            f[num[i]]++;
        }
    }
    for(int i=0;i<m;i++){
        if(f[num2[i]]==0){
            printf("%d ",num2[i]);
            f[num2[i]]++;
        }
    }
}
/******************************************* 
 * Author- Talha Jubayer
 * talhajubayer737@gmail.com
 * BSCSE@United International University
********************************************/