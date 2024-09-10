/******************************************* 
WAP that will take (m x n) integer inputs into a matrix of dimension m x n. Now just
simply add all the integers in that matrix and show the result.
_____               ______
INPUT               OUTPUT
-----               ------
3 3
1 7 3                41
7 4 5
3 5 6
********************************************/
#include<stdio.h>
int main(){
    int m, n,sum=0;
    printf("Enter Array size (m x n): ");
    scanf("%d %d", &m, &n);

    int num[m][n];
    printf("Enter your number:\n");
    for(int i=0;i<m;i++){
        for(int j=0; j<n; j++){
        scanf("%d", &num[i][j]);
        sum+=num[i][j];
        }
    }
    printf("Sum is :%d",sum);
}
/******************************************* 
 * Author- Talha Jubayer
 * talhajubayer737@gmail.com
 * BSCSE@United International University
********************************************/