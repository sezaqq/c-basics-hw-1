#include <stdio.h>

int main(){

    int key = 3; 
    char a[100];
    int mode;
    printf("Choose encryption mode (1 - encrypt, 2 - decrypt): ");
    scanf("%d", &mode);
    printf("Input please your text: ");
    scanf("%99s", a);
    
    for(int i=0; a[i] != '\0'; i++) {
    char b = a[i];
        if (mode == 1) {
            if (b >= 65 && b <= 90) {
                int c = b - 65;  
                c = (c + key) % 26; 
                char new_c = 65 + c;
                printf("Your encrypted text: %c\n", new_c);
            }
        }
        else if (mode == 2) {
            if (b >= 65 && b <= 90) {
                int c = b - 65;  
                c = (c - key + 26) % 26; 
                char new_c = 65 + c;
                printf("Your decrypted text: %c\n", new_c);
            }
        }
    }   
    return 0;
}