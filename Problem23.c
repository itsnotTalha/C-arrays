/******************************************* 
WAP that will take (n x n) integer inputs into a square matrix of dimension n (where n
must be an odd number). Then calculate sum of the integers based on following position
pattern (consider only the boxed position during the sum). Please see the input-output.
_____               ______
INPUT               OUTPUT
-----               ------
5
 1#2 3#4 5          65
#2#3#4#1#6
 3#4 9#6 7
#4#2#6#7#8
 5#4 3#2 1
********************************************/
#include<stdio.h>
int main(){
    int n;
    printf("Enter Array size(n x n):");
    scanf("%d",&n);
    int num[n][n];
    printf("Question Pattern Looks like this: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           if(i%2!=0||j%2!=0)
            printf("# ");
            else printf("  ");
        }
        puts("");
    }
    printf("Enter your numbers:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        scanf("%d", &num[i][j]);
    }
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i%2!=0||j%2!=0)
            sum+=num[i][j];
        }
    }
    printf("Sum= %d",sum);
}
/******************************************* 
 * Author- Talha Jubayer
 * talhajubayer737@gmail.com
 * BSCSE@United International University
********************************************/