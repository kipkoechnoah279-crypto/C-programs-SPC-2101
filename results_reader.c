/*
Name:Noah kipkoech 
Reg no:PA106/G/28709/25
Description :program that:
i. Defines a structure to hold the student information.
ii. Reads all student records from the binary file.
iii. Displays the name and marks of each student on the screen
*/
//preprocessor directives 
#include <stdio.h>
#include <stdlib.h>

// Defines a structure to hold the student information.
typedef struct {
    char name[50];
    int regNumber;
    float totalMarks;
} Student;

void readStudentRecords(const char *filename);//function prototype 

int main() {
    
    FILE *setupFile = fopen("results.dat", "wb");
    if (setupFile == NULL) {
        perror("Error creating dummy file");
        return 1;
    }
    Student kyuStudents[] = {
        {"cyril  kimani", 1001, 85.5},
        {"Johnson  wang", 1002, 72.0},
        {"Brown kiptoo", 1003, 91.2}
    };
    fwrite(kyuStudents, sizeof(Student), 3, setupFile);
    fclose(setupFile);
   printf("  kirinyaga university  \n\n");

    // function call
    readStudentRecords("results.dat");
    return 0;
}


  //Reads all Student records from a binary file and displays them.
 
 
void readStudentRecords(const char *filename) {
    FILE *filePointer;
    Student studentRecord; // Variable to hold one student record at a time
    size_t recordsRead;
    int count = 0;

    // Open the file in 'read binary' mode
    filePointer = fopen(filename, "rb");

    // Check for file opening error
    if (filePointer == NULL) {
        perror("Error opening binary file");
        exit(EXIT_FAILURE);
    }

    printf("   Reading Student Examination Results   \n");
    printf("%-5s | %-10s | %-20s | %s\n", "No.", "Reg No.", "Name", "Marks");

    // Reads all student records from the binary file.
    while (1) {
        
        recordsRead = fread(&studentRecord, sizeof(Student), 1, filePointer);

        // Check if a record was successfully read
        if (recordsRead == 1) {
            count++;
            //Displays the name and marks of each student on the screen.
            printf("%-5d | %-10d | %-20s | %.2f\n",
                   count, studentRecord.regNumber, studentRecord.name, studentRecord.totalMarks);
        } else if (feof(filePointer)) {
            // End of File reached
            break;
        } else if (ferror(filePointer)) {
            // Read error occurred
            perror("Error reading record from file");
            break;
        }
    }

    // Close the file
    fclose(filePointer);
    printf("\nTotal %d records displayed.\n", count);
}
