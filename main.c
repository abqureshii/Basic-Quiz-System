#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "delay.h" //includes the delay function used to introduce delay in the program
#include "questions.h"
#include "functions.h"
#include "grade.h" // Includes the grade function used to calculate grade by giving percentage as input.

int main ()
{
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

printf ("Welcome %s!", first_name);
while (maths_quiz==0 || physics_quiz==0 || chemistry_quiz==0)
{
printf ("\n\nSelect the subject you want to take quiz\n");
printf ("1. Maths\t\t");
printf ("2. Physics\n");
printf ("3. Chemistry\t\t");
printf ("4. History\n\n");
printf ("Enter 0 to end the quiz.\n");

int selection;
fflush(stdin);
scanf ("%d", &selection);
if (selection==0)
{
    break;
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
                delay(1000);
            }
            break;

    case 2: if (physics_quiz == 0)
            {   system ("cls");
                physics_correct = physics();
                physics_quiz = 1;
            }
            else
            {   printf ("You have already taken Physics quiz. Choose another option.\n");
                delay(1000);
            }
            break;

    case 3: if (chemistry_quiz == 0)
            {   system ("cls");
                physics_correct = chemistry();
                chemistry_quiz = 1;
            }
            else
            {   printf ("You have already taken Physics quiz. Choose another option.\n");
                delay(1000);
            }
            break;
    default: printf ("Please enter a valid option.\n");
             delay (1000);
             break;

}
system ("cls");
}
int num_of_mathquestions = nof_maths();
int num_of_physicsquestions = nof_physics();
int num_of_chemistryquestions = nof_chemistry();

float maths_percentage;
maths_percentage = (float)maths_correct/(float)num_of_mathquestions; // Calculate percentage for maths.

float physics_percentage;
physics_percentage = (float)physics_correct/(float)num_of_physicsquestions; //Calculate percentage for physics.

float chemistry_percentage;
chemistry_percentage = (float)chemistry_correct/(float)num_of_chemistryquestions; //Calculate percentage for chemistry.

float total_percentage = (maths_percentage+physics_percentage+chemistry_percentage)/3; // Calculate total percentage.

/*The result is printed when loop is exited.
In the result, grade function is used to calculate the grade for a given percentage.*/

system ("cls");
printf ("                                 +-+-+-+-+-+-+\n");
printf ("                                 |R|E|S|U|L|T|\n");
printf ("                                 +-+-+-+-+-+-+\n\n");
printf ("Student Name:\t %s\n", full_name);
printf ("Roll No:\t %s\n\n", roll_no);

printf ("Subject\t\tScore\t\tGrade\n\n");
printf ("Math\t\t%d/%d\t\t%c\n",maths_correct, num_of_mathquestions,grade(maths_percentage));
printf ("Physics\t\t%d/%d\t\t%c\n",physics_correct, num_of_physicsquestions,grade(physics_percentage));
printf ("Chemistry\t%d/%d\t\t%c\n",chemistry_correct, num_of_chemistryquestions,grade (chemistry_percentage));
printf ("****************************************\n");
printf ("Total\t\t%d/%d\t\t%c\n",maths_correct+physics_correct+chemistry_correct, num_of_chemistryquestions+num_of_mathquestions+num_of_physicsquestions, grade(total_percentage));
printf ("****************************************\n");

system ("pause");

return 0;
}
