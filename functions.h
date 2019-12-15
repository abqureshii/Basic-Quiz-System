int maths (void)
{

int i=0,j=0;
char maths_question[20][7][200]; // Declare an array to store math questions and options also correct answer.
char maths_answer [20][2];

FILE * fp;
fp = fopen("maths.txt", "r");

while (!feof(fp)) // file end of file function returns 1 when file pointer reaches the end of file.
{
    for (j=0; j<7; j++)
    {
        fgets (maths_question[i][j], 200, fp);
        strtok(maths_question[i][j], "\n");
    }
    i++;
}
fclose(fp);
int NO_OF_MATHquestions = i;
int maths_correct = 0;

for(i = 0; i<NO_OF_MATHquestions; i++)
{
    printf ("Question %d : %s\n", i+1, maths_question[i][0]);
    printf ("A. %s\n", maths_question[i][1]);
    printf ("B. %s\n", maths_question[i][2]);
    printf ("C. %s\n", maths_question[i][3]);
    printf ("D. %s\n", maths_question[i][4]);

    printf ("\nEnter your answer:  ");
    scanf ("%s", maths_answer[i]);

    //Loop to ensure that user enters a valid option. The loop is executed until user enters a,b,c or d.
    while (strcmp(strupr(maths_answer[i]),"A")&&strcmp(strupr(maths_answer[i]),"B")&&strcmp(strupr(maths_answer[i]),"C")&&strcmp(strupr(maths_answer[i]),"D"))
    {
        printf ("\nPlease Enter a valid option: ");
        scanf ("%s", maths_answer[i]);
    }

    // strcmp function is used to compare the value entered by user and the correct answer. It returns 0 when both strings are same.
    if (!strcmp(strupr(maths_answer[i]),maths_question[i][5]))
    {
        printf ("\nCorrect Answer. Points +1\n");
        maths_correct++;
        delay (1000);
    }
    else
    {
        printf ("\nWrong answer. \n");
        delay (1000);
    }
    getchar();
    system ("cls");

}

return maths_correct;

}



int physics (void)
{

int i=0,j=0;
char physics_question[20][7][150]; // Declare an array to store physics questions and options also correct answer.
char physics_answer [20][2];

FILE * fp;
fp = fopen("physics.txt", "r");

while (!feof(fp)) // file end of file pointer return 1 when file pointer is at the end of file.
{
    for (j=0; j<7; j++)
    {
        fgets (physics_question[i][j], 150, fp);
        strtok(physics_question[i][j], "\n");
    }
    i++;
}
fclose(fp);

int NO_OF_PHYSICSquestions = i;


int physics_correct = 0;

for(i = 0; i<NO_OF_PHYSICSquestions; i++)
{
    printf ("Question %d : %s\n", i+1, physics_question[i][0]);
    printf ("A. %s\n", physics_question[i][1]);
    printf ("B. %s\n", physics_question[i][2]);
    printf ("C. %s\n", physics_question[i][3]);
    printf ("D. %s\n", physics_question[i][4]);

    printf ("\nEnter your answer:  ");
    scanf ("%s", physics_answer[i]);

    //Loop to ensure that user enters a valid option. The loop is executed until user enters a,b,c or d.
    while (strcmp(strupr(physics_answer[i]),"A")&&strcmp(strupr(physics_answer[i]),"B")&&strcmp(strupr(physics_answer[i]),"C")&&strcmp(strupr(physics_answer[i]),"D"))
    {
        printf ("\nPlease Enter a valid option: ");
        scanf ("%s", physics_answer[i]);
    }

    // strcmp function is used to compare the value entered by user and the correct answer. It returns 0 when both strings are same.
    if (!strcmp(strupr(physics_answer[i]),physics_question[i][5]))
    {
        printf ("\nCorrect Answer. Points +1\n");
        physics_correct++;
        delay (1000);
    }
    else
    {
        printf ("\nWrong answer. \n");
        delay (1000);
    }
    getchar();
    system ("cls");

}

return physics_correct;

}

int chemistry (void)
{

int i=0,j=0;
char chemistry_question[20][7][200]; // Declare an array to store chemistry questions and options also correct answer.
char chemistry_answer [20][2];

FILE * fp;
fp = fopen("chemistry.txt", "r"); // Open maths.txt

while (!feof(fp)) // file end of file function returns 1 when file pointer reaches the end of file.
{
    for (j=0; j<7; j++)
    {
        fgets (chemistry_question[i][j], 200, fp); // scan maths.txt line by line and store the strings into questions array.
        strtok(chemistry_question[i][j], "\n"); // strtok function is used to remove the \n from the en of each string.
    }
    i++;
}
fclose(fp);
int NO_OF_CHEMISTRYquestions = i; // The number of chemistry questions is equal to the no of times the while loop runs.
int chemistry_correct = 0;

for(i = 0; i<NO_OF_CHEMISTRYquestions; i++) // Loop to display the question and take input from user.
{
    printf ("Question %d : %s\n", i+1, chemistry_question[i][0]);
    printf ("A. %s\n", chemistry_question[i][1]);
    printf ("B. %s\n", chemistry_question[i][2]);
    printf ("C. %s\n", chemistry_question[i][3]);
    printf ("D. %s\n", chemistry_question[i][4]);

    printf ("\nEnter your answer:  ");
    scanf ("%s", chemistry_answer[i]);

    //Loop to ensure that user enters a valid option. The loop is executed until user enters a,b,c or d.
    while (strcmp(strupr(chemistry_answer[i]),"A")&&strcmp(strupr(chemistry_answer[i]),"B")&&strcmp(strupr(chemistry_answer[i]),"C")&&strcmp(strupr(chemistry_answer[i]),"D"))
    {
        printf ("\nPlease Enter a valid option: ");
        scanf ("%s", chemistry_answer[i]);
    }

    // strcmp function is used to compare the value entered by user and the correct answer. It returns 0 when both strings are same.
    if (!strcmp(strupr(chemistry_answer[i]),chemistry_question[i][5]))
    {
        printf ("\nCorrect Answer. Points +1\n");
        chemistry_correct++;
        delay (1000);
    }
    else
    {
        printf ("\nWrong answer. \n");
        delay (1000);
    }
    getchar();
    system ("cls");

}

return chemistry_correct;

}
