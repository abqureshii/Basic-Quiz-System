int maths (void)
{

int i=0,j=0;
char maths_question[20][7][200]; // Declare an array to store math questions and options also correct answer.
char maths_answer [20][2];

FILE * fp;
fp = fopen("maths.txt", "r");

if (fp == NULL)
{
    printf ("Error: Can not open maths.txt\n");
    delay (2500);
}
else
{
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
}
int no_of_mathquestions = i;
int maths_correct;
maths_correct = 0;

int random_number [no_of_mathquestions];

for (int i = 0; i < no_of_mathquestions; i++) //Populate the array with question numbers.
{
    random_number[i] = i;
}

for (int i = 0; i < no_of_mathquestions; i++) // Shuffle the array using rand function.
{
    int temp = random_number[i];
    int randomIndex = rand() % (no_of_mathquestions);

    random_number[i] = random_number[randomIndex];
    random_number[randomIndex] = temp;
}

for(i = 0; i<no_of_mathquestions; i++)
{
    int question_number = random_number [i];
    printf ("Question %d : %s\n", i+1, maths_question[question_number][0]);
    printf ("A. %s\n", maths_question[question_number][1]);
    printf ("B. %s\n", maths_question[question_number][2]);
    printf ("C. %s\n", maths_question[question_number][3]);
    printf ("D. %s\n", maths_question[question_number][4]);

    printf ("\nEnter your answer:  ");
    scanf ("%s", maths_answer[question_number]);

    //Loop to ensure that user enters a valid option. The loop is executed until user enters a,b,c or d.
    while (strcmp(strupr(maths_answer[question_number]),"A")&&strcmp(strupr(maths_answer[question_number]),"B")&&strcmp(strupr(maths_answer[question_number]),"C")&&strcmp(strupr(maths_answer[question_number]),"D"))
    {
        printf ("\nPlease Enter a valid option: ");
        scanf ("%s", maths_answer[question_number]);
    }

    // strcmp function is used to compare the value entered by user and the correct answer. It returns 0 when both strings are same.
    if (!strcmp(strupr(maths_answer[question_number]),maths_question[question_number][5]))
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
int physics_correct = 0;

FILE * fp;
fp = fopen("physics.txt", "r");

if (fp == NULL)
{
    printf ("Error: Can not open physics.txt");
    delay (2500);
}
else
{
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

int no_of_physicsquestions = i;
int random_number[no_of_physicsquestions];

for (int i = 0; i < no_of_physicsquestions; i++) //Populate the array with question numbers.
{
    random_number[i] = i;
}

for (int i = 0; i < no_of_physicsquestions; i++) // Shuffle the array using rand function.
{
    int temp = random_number[i];
    int randomIndex = rand() % (no_of_physicsquestions);

    random_number[i] = random_number[randomIndex];
    random_number[randomIndex] = temp;
}



for(i = 0; i<no_of_physicsquestions; i++)
{
    int question_number = random_number [i];
    printf ("Question %d : %s\n", i+1, physics_question[question_number][0]);
    printf ("A. %s\n", physics_question[question_number][1]);
    printf ("B. %s\n", physics_question[question_number][2]);
    printf ("C. %s\n", physics_question[question_number][3]);
    printf ("D. %s\n", physics_question[question_number][4]);

    printf ("\nEnter your answer:  ");
    scanf ("%s", physics_answer[question_number]);

    //Loop to ensure that user enters a valid option. The loop is executed until user enters a,b,c or d.
    while (strcmp(strupr(physics_answer[question_number]),"A")&&strcmp(strupr(physics_answer[question_number]),"B")&&strcmp(strupr(physics_answer[question_number]),"C")&&strcmp(strupr(physics_answer[question_number]),"D"))
    {
        printf ("\nPlease Enter a valid option: ");
        scanf ("%s", physics_answer[question_number]);
    }

    // strcmp function is used to compare the value entered by user and the correct answer. It returns 0 when both strings are same.
    if (!strcmp(strupr(physics_answer[question_number]),physics_question[question_number][5]))
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
} // End of for loop.
} // End of if..else statement used for file pointer. Else statement runs when fp opens physics.txt file.

return physics_correct;

}

int chemistry (void)
{

int i=0,j=0;
char chemistry_question[20][7][200]; // Declare an array to store chemistry questions and options also correct answer.
char chemistry_answer [20][2];
int chemistry_correct = 0;

FILE * fp;
fp = fopen("chemistry.txt", "r"); // Open maths.txt

if (fp == NULL)
{
    printf ("Error : Can not open chemistry.txt");
    delay (2500);
}
else
{
while (!feof(fp)) // file end of file function returns 1 when file pointer reaches the end of file.
{
    for (j=0; j<7; j++)
    {
        fgets (chemistry_question[i][j], 200, fp); // scan chemistry.txt line by line and store the strings into questions array.
        strtok(chemistry_question[i][j], "\n"); // strtok function is used to remove the \n from the en of each string.
    }
    i++;
}
fclose(fp);
int no_of_chemistryquestions = i; // The number of chemistry questions is equal to the no of times the while loop runs.

int random_number[no_of_chemistryquestions];

for (int i = 0; i < no_of_chemistryquestions; i++) //Populate the array with question numbers.
{
    random_number[i] = i;
}

for (int i = 0; i < no_of_chemistryquestions; i++) // Shuffle the array using rand function.
{
    int temp = random_number[i];
    int randomIndex = rand() % (no_of_chemistryquestions);

    random_number[i] = random_number[randomIndex];
    random_number[randomIndex] = temp;
}



for(i = 0; i<no_of_chemistryquestions; i++)
{
    int question_number = random_number [i];
    printf ("Question %d : %s\n", i+1, chemistry_question[question_number][0]);
    printf ("A. %s\n", chemistry_question[question_number][1]);
    printf ("B. %s\n", chemistry_question[question_number][2]);
    printf ("C. %s\n", chemistry_question[question_number][3]);
    printf ("D. %s\n", chemistry_question[question_number][4]);

    printf ("\nEnter your answer:  ");
    scanf ("%s", chemistry_answer[question_number]);

    //Loop to ensure that user enters a valid option. The loop is executed until user enters a,b,c or d.
    while (strcmp(strupr(chemistry_answer[question_number]),"A")&&strcmp(strupr(chemistry_answer[question_number]),"B")&&strcmp(strupr(chemistry_answer[question_number]),"C")&&strcmp(strupr(chemistry_answer[question_number]),"D"))
    {
        printf ("\nPlease Enter a valid option: ");
        scanf ("%s", chemistry_answer[question_number]);
    }

    // strcmp function is used to compare the value entered by user and the correct answer. It returns 0 when both strings are same.
    if (!strcmp(strupr(chemistry_answer[question_number]),chemistry_question[question_number][5]))
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
} // End of for loop.
} // End of if..else statement used for file pointer. Else statement runs when fp opens physics.txt file.

return chemistry_correct;

}
