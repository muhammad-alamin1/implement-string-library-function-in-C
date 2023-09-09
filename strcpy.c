#include <stdio.h>

char *my_strcpy(char *destination[], const char *source[]);

int main() {
    char source[100] = "Hello World! I'm Alien Elon Mush";
    char destination[50];

    my_strcpy(destination, source);
    printf("Source Str: %s\n", destination);
    printf("Copy Str: %s\n", destination);
}

char *my_strcpy(char *destination[], const char *source[]){
    if(destination == NULL)
        return NULL;

    char *ptr = destination;  // pointer to destination str

    // copy char from source
    while(*source != '\0'){
        *destination = *source;
        destination++;
        source++;
    }

    *destination = '\0'; // add null terminator 

    return ptr;
}
