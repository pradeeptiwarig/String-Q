// Q. Chack if a given character is present in a string or not.
#include <stdio.h>
#include <strings.h>

int checkChar(char str[], char ch);

int main(){
    char str[100];
    char ch;
    printf("Enter your character : ");
    gets(str);
    printf("Write alphabet to check in this character : ");
    scanf("%c", &ch);

    checkChar(str, ch);
    
}

int checkChar(char str[], char ch) {
    

    for(int i=0; str[i] != '\0'; i++) {
        if(str[i] == ch)
        {
            printf("character is present!");
            return;
        }
    }
    printf("character is Not present!");
            return;
}
