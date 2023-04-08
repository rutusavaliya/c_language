#include<stdio.h>
float percentage()
{
     int maths=57,sci=88,eng=66;
     float per;
     per=(float) maths+sci+eng/3;
     printf("percentage is :%.2f",per);
}

int main ()
{
    percentage ();
}
 