/*These functions calculate the number of questions which are stored in
a text file. There are 7 lines for each question. Once the pointer goes through
7 lines, it constitutes a question*/


// To calculate number of math questions.
int nof_maths (void)
{
int i=0 ,j=0;
char maths_question[20][7][200]; // Declare an array to store math questions and options also correct answer.

FILE * fp;
fp = fopen("maths.txt", "r");

while (!feof(fp)) // File end of file function is used so loop runs until the pointer reaches the end of file.
{
    for (j=0; j<7; j++)
    {
        fgets (maths_question[i][j], 200, fp);
        strtok(maths_question[i][j], "\n"); //strtok function is used to eliminate the new line '\n' from the end of string.
    }
    i++;
}
fclose (fp);

return i;
}

// To calculate the number of physics questions.
int nof_physics (void)
{
int i=0 ,j=0;
char physics_question[20][7][200]; // Declare an array to store physics questions and options also correct answer.

FILE * fp;
fp = fopen("physics.txt", "r");

while (!feof(fp)) // File end of file function is used so loop runs until the pointer reaches the end of file.
{
    for (j=0; j<7; j++)
    {
        fgets (physics_question[i][j], 200, fp);
        strtok(physics_question[i][j], "\n"); // Strtok function is used to remove '\n' from the end of string.
    }
    i++;
}
fclose (fp);

return i;
}

//To calculate the number of chemistry questions.
int nof_chemistry (void)
{
int i=0 ,j=0;
char chemistry_question[20][7][200]; // Declare an array to store math questions and options also correct answer.

FILE * fp;
fp = fopen("chemistry.txt", "r");

while (!feof(fp)) // File end of file function is used so loop runs until the pointer reaches the end of file.
{
    for (j=0; j<7; j++)
    {
        fgets (chemistry_question[i][j], 200, fp);
        strtok(chemistry_question[i][j], "\n"); //Strtok function is used to remove the '\n' character from end of string.
    }
    i++;
}
fclose (fp);

return i;
}

int nof_history (void)
{
int i=0 ,j=0;
char history_question[20][7][200]; // Declare an array to store math questions and options also correct answer.

FILE * fp;
fp = fopen("history.txt", "r");

while (!feof(fp)) // File end of file function is used so loop runs until the pointer reaches the end of file.
{
    for (j=0; j<7; j++)
    {
        fgets (history_question[i][j], 200, fp);
        strtok(history_question[i][j], "\n"); //Strtok function is used to remove the '\n' character from end of string.
    }
    i++;
}
fclose (fp);

return i;
}

int nof_biology (void)
{
int i=0 ,j=0;
char biology_question[20][7][200]; // Declare an array to store math questions and options also correct answer.

FILE * fp;
fp = fopen("biology.txt", "r");

while (!feof(fp)) // File end of file function is used so loop runs until the pointer reaches the end of file.
{
    for (j=0; j<7; j++)
    {
        fgets (biology_question[i][j], 200, fp);
        strtok(biology_question[i][j], "\n"); //Strtok function is used to remove the '\n' character from end of string.
    }
    i++;
}
fclose (fp);

return i;
}