/******************************************* 
WAP that will take (m x n) positive integer inputs into a matrix of dimension m x n. Now
replace all the duplicate integers by -1 in that matrix. Finally display it.
_____               ______
INPUT               OUTPUT
-----               ------
3 3
1 7 3                1  7  3
7 4 5               -1  4  5
3 5 6               -1 -1  6 
********************************************/
#include <stdio.h>
#define MAX_VAL 100  // Adjust based on the expected range of input values

int main() {
    int m, n;
    printf("Enter Array size (m x n): ");
    scanf("%d %d", &m, &n);
    
    // Ensure the size of the num array is reasonable
    int num[m][n];
    
    // Initialize frequency array to 0
    int f[MAX_VAL] = {0};
    
    printf("Enter your numbers:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            int value;
            scanf("%d", &value);
            
            if (value >= 0 && value < MAX_VAL) {
                if (f[value] > 0) {
                    num[i][j] = -1;
                } else {
                    num[i][j] = value;
                }
                f[value]++;
            } else {
                printf("Value out of bounds.\n");
                return 1; // Exit with an error code
            }
        }
    }
    
    printf("Processed Array:\n");
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", num[i][j]);
        }
        puts("");
    }
    
    return 0;
}

/******************************************* 
 * Author- Talha Jubayer
 * talhajubayer737@gmail.com
 * BSCSE@United International University
********************************************/