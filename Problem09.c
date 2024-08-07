/******************************************* 
WAP that will take n alphabets into an array, and then count number of vowels in that
array.
_____               ______
INPUT               OUTPUT
-----               ------
7                    Count: 5
AKIOUEH
********************************************/
#include<stdio.h>
int main(){
    int n,count=0;
    printf("Enter Array size:");
    scanf("%d",&n);
    char num[n];
    printf("Enter your Alphabets(Avoid space):\n");
    for(int i=0;i<n;i++){
        scanf("%c", &num[i]);
        if(num[i]=='A'||num[i]=='E'||num[i]=='I'||num[i]=='O'||num[i]=='U'||num[i]=='a'||
        num[i]=='e'||num[i]=='i'||num[i]=='o'||num[i]=='u')
        count++;
    }
    printf("Vowel count: %d",count);
}
/******************************************* 
 * Author- Talha Jubayer
 * talhajubayer737@gmail.com
 * BSCSE@United International University
********************************************/