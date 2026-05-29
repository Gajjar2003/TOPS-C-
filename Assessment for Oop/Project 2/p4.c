/*File handling Build a program that: 
? Writes daily goals to a file ? 
Reads and displays them on program restart ?
 Uses correct file modes */
 
 #include <stdio.h>

int main() {

    FILE *fp;
    char goal[100];

    fp = fopen("goals.txt", "a");

    printf("Enter Today's Goal: ");
    scanf(" %[^\n]", goal);

    fprintf(fp, "%s\n", goal);

    fclose(fp);

    printf("\nGoal Saved Successfully!");

    fp = fopen("goals.txt", "r");

    printf("\n\nSaved Goals:\n");

    while(fgets(goal, sizeof(goal), fp)) {

        printf("%s", goal);
    }

    fclose(fp);

    return 0;
}
