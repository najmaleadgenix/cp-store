#include<stdio.h>
#include<string.h>


int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);   // space soho word input nilam

    int space_count = 1; 

    for (int i = 0; str[i] != '\0'; i++) 
    {
        if(str[i]==' ') space_count++; // koto gulo space ache seta count korlam
    }


    printf("Number of words: %d\n", space_count);
    return 0;
}
