/*
Name :Noah kipkoech 
Reg no:PA106/G/28709/25
Description :program that allows the librarian to enter book titles and store each title in a text file named borrowed_books.txt.
i. The program does not delete existing records when a new title is added.
ii. Display a confirmation message once the title is successfully stored.
*/
//preprocessor directives
#include <stdio.h>
#include <stdlib.h>

void storeBookTitle(const char *filename);//funtioprototype 

int main() {
    storeBookTitle("borrowed_books.txt");//function call 
    return 0;
}

void storeBookTitle(const char *filename) {
    FILE *filePointer;
    char title[256];

//Open the file 
//create if file doesn't exist 
//content added if file exists 
    filePointer = fopen(filename, "a");

//check if opened successfully 
    if (filePointer == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    printf("Enter the title of the borrowed book: ");
    if (fgets(title, sizeof(title), stdin) == NULL) {
        fclose(filePointer);
        return;
    }
//write title to the file 
    if (fputs(title, filePointer) < 0) {
        printf("Error writing to file.\n");
    } else {
        printf("\nSuccess! The title has been successfully stored in %s.\n", filename);
    }
//close the file 
    fclose(filePointer);
}
