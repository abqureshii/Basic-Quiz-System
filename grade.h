char grade (float percentage)
{
    char grade;
    if (percentage >= 0.8)
        grade = 'A';
    else if (percentage >= 0.7)
        grade = 'B';
    else if (percentage >= 0.5)
        grade = 'C';
    else if (percentage >= 0.4)
        grade = 'D';
    else
        grade = 'F';

    return grade;
}
