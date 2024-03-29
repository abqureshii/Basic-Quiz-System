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

while (!feof(fp))
{
    for (j=0; j<7; j++)
    {
        fgets (maths_question[i][j], 200, fp);
        strtok(maths_question[i][j], "\n");
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
char physics_question[20][7][200]; // Declare an array to store math questions and options also correct answer.

FILE * fp;
fp = fopen("physics.txt", "r");

while (!feof(fp))
{
    for (j=0; j<7; j++)
    {
        fgets (physics_question[i][j], 200, fp);
        strtok(physics_question[i][j], "\n");
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

while (!feof(fp))
{
    for (j=0; j<7; j++)
    {
        fgets (chemistry_question[i][j], 200, fp);
        strtok(chemistry_question[i][j], "\n");
    }
    i++;
}
fclose (fp);

return i;
}
