#include <stdio.h>

#define STUDENTS 5

typedef struct {
    char name[50];
    float subj1;
    float subj2;
    float subj3;
    char grade;
} Student;

char calculateGrade(float avg) {
    if (avg >= 90) return 'A';
    if (avg >= 80) return 'B';
    if (avg >= 70) return 'C';
    if (avg >= 60) return 'D';
    return 'F';
}

int main() {
    Student students[STUDENTS];
    
    for (int i = 0; i < STUDENTS; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf(" %[^\n]", students[i].name);
        printf("Enter marks for 3 subjects: ");
        scanf("%f %f %f", &students[i].subj1, &students[i].subj2, &students[i].subj3);
    }

    printf("\nStudent Records:\n");
    printf("--------------------------------------------------\n");
    printf("Name\t\tSubj1\tSubj2\tSubj3\tAverage\tGrade\n");
    printf("--------------------------------------------------\n");

    for (int i = 0; i < STUDENTS; i++) {
        float avg = (students[i].subj1 + students[i].subj2 + students[i].subj3) / 3;
        students[i].grade = calculateGrade(avg);

        printf("%s\t%.2f\t%.2f\t%.2f\t%.2f\t%c\n", students[i].name, students[i].subj1, students[i].subj2, students[i].subj3, avg, students[i].grade);
    }

    return 0;
}
