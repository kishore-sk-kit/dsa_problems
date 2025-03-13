#include <stdio.h>

int reverse(int n) {  
    int rev = 0;  
    while (n > 0) {  
        rev = rev * 10 + n % 10;  
        n /= 10;  
    }  
    return rev;  
}  

int isAdam(int n) {  
    int n2 = n * n;            // Square of the number
    int revn = reverse(n);     // Reverse of the number
    int revn2 = reverse(n2);   // Reverse of n^2
    int revn2sqr = revn * revn; // Square of the reversed number
    return (revn2 == revn2sqr); // Compare reversed n^2 with square of reversed n
}  

int main() {  
    int n;  
    printf("Enter a number: ");  
    scanf("%d", &n);  
    if (isAdam(n)) {  
        printf("%d is an Adam number.\n", n);  
    } else {  
        printf("%d is not an Adam number.\n", n);  
    }  
    return 0;  
}
