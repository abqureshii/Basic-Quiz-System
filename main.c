#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <windows.h>

#include "count_questions.h" // Includes fucntion used to count the number of questions in each file.
#include "functions.h" // Include fucntion which displays question and take input from user.
#include "grade.h" // Includes the grade function used to calculate grade by giving percentage as input.

int main ()
{
srand(time(NULL)); // Set the seed for rand function.
char student_name[40];
char full_name[40];
char *first_name;
char roll_no[20];

/*This is going to be our welcome screen.
We as the user to enter his name and roll no so we can print and save the reuslt at end*/

printf ("\t\t\t\tInterrogo Quiz System\n\n");
printf ("\t\t\t Enter your name: ");
fgets (student_name, 40, stdin);
strcpy(full_name, student_name);
first_name = strtok (student_name," "); // Strtok function is used to extract the first name of user.
printf ("\t\t\t Enter your Roll No: ");
scanf ("%s", roll_no);
system ("cls");

/*The maths_quiz and physics_quiz etc variables are used as flag to check
if the quiz for that subject is already taken so that the user can take the
quiz for a subject only one time. Once all subjects are done the loop is exited
and result is printed.
*/
int maths_quiz = 0, maths_correct = 0;
int physics_quiz = 0, physics_correct = 0;
int chemistry_quiz = 0, chemistry_correct = 0;
int history_quiz =0, history_correct = 0;
int biology_quiz = 0, biology_correct = 0;

printf ("Welcome %s!\n\n", first_name);
while (maths_quiz==0 || physics_quiz==0 || chemistry_quiz==0 || history_quiz == 0 || biology_quiz == 0)
{
printf ("Select the subject you want to take quiz\n");
printf ("1. Maths\t\t");
printf ("2. Physics\n");
printf ("3. Chemistry\t\t");
printf ("4. History\n");
printf ("5. Biology\n\n");
printf ("Enter 0 to end the quiz.\n");

int selection;
scanf ("%d", &selection); // Choose the subject.
fflush(stdin);
if (selection==0)
{
    break;   // The while loop is exited when user enter 0.
}


switch (selection)
{
    case 1: if (maths_quiz == 0)
            {   system ("cls");
                maths_correct = maths();
                maths_quiz = 1;
            }
            else
            {   printf ("You have already taken Math's quiz. Choose another option.\n");
                Sleep(1000);
            }
            break;

    case 2: if (physics_quiz == 0)
            {   system ("cls");
                physics_correct = physics();
                physics_quiz = 1;
            }
            else
            {   printf ("You have already taken Physics quiz. Choose another option.\n");
                Sleep(1000);
            }
            break;

    case 3: if (chemistry_quiz == 0)
            {   system ("cls");
                chemistry_correct = chemistry();
                chemistry_quiz = 1;
            }
            else
            {   printf ("You have already taken Chemistry quiz. Choose another option.\n");
                Sleep(1000);
            }
            break;
    case 4: if (history_quiz == 0)
            {   system ("cls");
                history_correct = history();
                history_quiz = 1;
            }
            else
            {   printf ("You have already taken History quiz. Choose another option.\n");
                Sleep(1000);
            }
            break;
    case 5: if (biology_quiz == 0)
            {   system ("cls");
                biology_correct = biology();
                biology_quiz = 1;
            }
            else
            {   printf ("You have already taken Biology quiz. Choose another option.\n");
                Sleep(1000);
            }
            break;
    default: printf ("Please enter a valid option.\n");
             Sleep (1000);
             break;

}
system ("cls");
}
int num_of_mathquestions = nof_maths();
int num_of_physicsquestions = nof_physics();
int  num_of_chemistryquestions =  nof_chemistry();
int num_of_historyquestions = nof_history();
int num_of_biologyquestions = nof_biology();



float maths_percentage;
maths_percentage = (float)maths_correct/(float)num_of_mathquestions; // Calculate percentage for maths.

float physics_percentage;
physics_percentage = (float)physics_correct/(float)num_of_physicsquestions; //Calculate percentage for physics.

float chemistry_percentage;
chemistry_percentage = (float)chemistry_correct/(float)num_of_chemistryquestions; //Calculate percentage for chemistry.

float history_percentage;
history_percentage = (float)history_correct/(float)num_of_historyquestions; //Calculate percentage for chemistry.

float biology_percentage;
biology_percentage = (float)biology_correct/(float)num_of_biologyquestions; //Calculate percentage for chemistry.

float total_percentage = (maths_percentage+physics_percentage+chemistry_percentage+history_percentage+biology_percentage)/5; // Calculate total percentage.

/*The result is printed when loop is exited.
In the result, grade function is used to calculate the grade for a given percentage.*/

/* Used printf statement to display the result to user on console. */

system ("cls");
printf ("           +-+-+-+-+-+-+\n");
printf ("           |R|E|S|U|L|T|\n");
printf ("           +-+-+-+-+-+-+\n\n");
printf ("Student Name:\t %s\n", full_name);
printf ("Roll No:\t %s\n\n", roll_no);

printf ("Subject\t\tScore\t\tGrade\n\n");
printf ("Math\t\t%d/%d\t\t%c\n",maths_correct, num_of_mathquestions,grade(maths_percentage));
printf ("Physics\t\t%d/%d\t\t%c\n",physics_correct, num_of_physicsquestions,grade(physics_percentage));
printf ("Chemistry\t%d/%d\t\t%c\n",chemistry_correct, num_of_chemistryquestions,grade (chemistry_percentage));
printf ("History\t\t%d/%d\t\t%c\n",history_correct, num_of_historyquestions,grade (history_percentage));
printf ("Biology\t\t%d/%d\t\t%c\n",biology_correct, num_of_biologyquestions,grade (biology_percentage));
printf ("****************************************\n");
printf ("Total\t\t%d/%d\t\t%c\n",maths_correct+physics_correct+chemistry_correct+history_correct+biology_correct, num_of_chemistryquestions+num_of_mathquestions+num_of_physicsquestions+num_of_historyquestions+num_of_biologyquestions, grade(total_percentage));
printf ("****************************************\n");

/*Also use fprintf to save the results into a file.*/
FILE *fp; // Declare file pointer fp.
fp = fopen ("result.txt", "w+"); // Save the results in result.txt file.

fprintf (fp, "Student Name:\t %s\n", full_name);
fprintf (fp, "Roll No:\t %s\n\n", roll_no);

fprintf (fp, "Subject\t\tScore\t\tGrade\n\n");
fprintf (fp,"Math\t\t%d/%d\t\t%c\n",maths_correct, num_of_mathquestions,grade(maths_percentage));
fprintf (fp, "Physics\t\t%d/%d\t\t%c\n",physics_correct, num_of_physicsquestions,grade(physics_percentage));
fprintf (fp, "Chemistry\t%d/%d\t\t%c\n",chemistry_correct, num_of_chemistryquestions,grade (chemistry_percentage));
fprintf (fp, "History\t\t%d/%d\t\t%c\n",history_correct, num_of_historyquestions,grade (history_percentage));
fprintf (fp, "Biology\t\t%d/%d\t\t%c\n",biology_correct, num_of_biologyquestions,grade (biology_percentage));
fprintf (fp, "****************************************\n");
fprintf (fp, "Total\t\t%d/%d\t\t%c\n",maths_correct+physics_correct+chemistry_correct+history_correct+biology_correct, num_of_chemistryquestions+num_of_mathquestions+num_of_physicsquestions+num_of_historyquestions+num_of_biologyquestions, grade(total_percentage));
fprintf (fp, "****************************************\n");

fclose (fp);

system ("pause");

return 0;
}
