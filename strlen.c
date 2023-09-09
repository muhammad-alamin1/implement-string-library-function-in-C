#include <stdio.h>

int my_strlen(const char a[]);

int main() {
    int len;
    char des[100];

    printf("Enter Your Str: ");
    scanf("%s", des);

    len = my_strlen(des);
    printf("String length: %d\n", len);
}

int my_strlen(const char a[]){
    int i = 0, counter = 0;

    while(a[i] != '\0'){
        counter++;
        i++;
    }

    return counter;
}
