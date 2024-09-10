/******************************************* 
WAP that will take (n x n) integer inputs into a square matrix of dimension n. Now
determine whether the matrix is symmetric or not.
Reference: http://en.wikipedia.org/wiki/Symmetric_matrix
_____               ______
INPUT               OUTPUT
-----               ------
3
1 7 3               YES
7 4 5
3 5 6
********************************************/
#include<stdio.h>
int main(){
    int n;
    printf("Enter Array size(N) :");
    scanf("%d",&n);
    int num[n][n];
    printf("Enter your number:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        scanf("%d", &num[i][j]);
    }
    int flag=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if (num[i][j]!=num[j][i]){
                flag=0;
                break;
            }
            
        }
        if(!flag)
        break;
    }
    if(flag)
    printf("YES");
    else printf("NO");
}
/******************************************* 
 * Author- Talha Jubayer
 * talhajubayer737@gmail.com
 * BSCSE@United International University
********************************************/