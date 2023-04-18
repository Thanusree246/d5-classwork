#include <stdio.h>

int main() {
    int roll_no, physics_marks, chem_marks, comp_app_marks, total_marks;
    float percentage;
    char name[20], division[10];

  
    printf("Input the Roll Number of the student : ");
    scanf("%d", &roll_no);

    printf("Input the Name of the Student : ");
    scanf("%s", name);

    printf("Input the marks of Physics, Chemistry and Computer Application : ");
    scanf("%d %d %d", &physics_marks, &chem_marks, &comp_app_marks);

    
    total_marks = physics_marks + chem_marks + comp_app_marks;
    percentage = (float) total_marks / 3;

    
    if (percentage >= 60) {
        sprintf(division, "%s", "First");
    } else if (percentage >= 50) {
        sprintf(division, "%s", "Second");
    } else if (percentage >= 40) {
        sprintf(division, "%s", "Third");
    } else {
        sprintf(division, "%s", "Fail");
    }

    
    printf("\nRoll No : %d\nName : %s\n", roll_no, name);
    printf("Marks in Physics : %d\nMarks in Chemistry : %d\nMarks in Computer Application : %d\n", physics_marks, chem_marks, comp_app_marks);
    printf("Total Marks : %d\nPercentage : %.2f%%\nDivision : %s\n", total_marks, percentage, division);

    return 0;
}





