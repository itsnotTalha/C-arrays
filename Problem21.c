/******************************************* 
WAP that will take n integers into an array A and m positive integers into array B. Now
find the difference (set operation) of array A and B or (A-B).
_____               ______
INPUT               OUTPUT
-----               ------
8                   7 8 5 4
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
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<m;j++){
            if (num[i]==num2[j])
            count++;
        }
        if(count==0)
            printf("%d ",num[i]);
    }
}
/******************************************* 
 * Author- Talha Jubayer
 * talhajubayer737@gmail.com
 * BSCSE@United International University
********************************************/