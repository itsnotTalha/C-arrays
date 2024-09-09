/******************************************* 
WAP that will take (m x n) integer inputs into a matrix of dimension m x n. Now reverse
that matrix within itself and display it. Reversal means swap 1st column with the nth
column, swap 2nd column with the (n-1)th column and so on...
_____               ______
INPUT               OUTPUT
-----               ------
3 3                 3 2 1
1 2 3               6 5 4
4 5 6               2 9 2
2 9 2
********************************************/
#include<stdio.h>
int main(){
    int n,m;
    printf("Enter Array size(n x m):");
    scanf("%d %d",&n,&m);
    int num[n][m];
    
    printf("Enter your numbers:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        scanf("%d", &num[i][j]);
    }
    printf("Column wise reversed Array:\n");
    for(int i=0;i<n;i++){
        for(int j=m-1;j>=0;j--)
        printf("%d ", num[i][j]);
        puts("");
    }
    
}
/******************************************* 
 * Author- Talha Jubayer
 * talhajubayer737@gmail.com
 * BSCSE@United International University
********************************************/