#include<stdio.h>  // It will include Prototype of all input output functions
#include<conio.h>  // consists function like clrs
void main()  // Taking void as the main function bcoz we are not going to return any value at the end of this program
{
    system("Color 6E");  // To make the output screen colorful 6--> BG , E-->Text color
    int h, m, s, i;  // Creating variables for hours, minutes, seconds and i

    // Taking all necessary inputs from user and scanning

    printf("Enter the current time in format of HH MM SS\n");

    printf("Enter Hours:");
    scanf("%d", &h);

    printf("Enter minutes:");
    scanf("%d", &m);

    printf("Enter seconds:");
    scanf("%d", &s);

   while(h<24)  // since we have 24 hours in a day
   {
       while(m<60)  // since we have 60 minutes
       {
        while(s<60)  //since we 60 seconds

        {
            Sleep(1000); // As 1000 miliseconds = 1 seconds so sleep i.e. pause for 1000 miliseconds
            system("CLS");  // To clear screen

            //Further program using for loop is to align our output in center of screen
            for(i=0;i<10;i++)  // Using this for loop o/p will go down by some lines
            {
                printf("\n");  // \n is used to change the line until loop is satisfied i.e limitations are are set
            }

            for(i=0;i<6;i++)  // Using this for loop the o/p frame will move in horizontal direction
            {
                printf("\t"); // \t is used as a tab (spaces)
            }

            printf("HH : MM : SS\n");  // To display the format of output
            s++;  // Increment seconds

            for(i=0;i<6;i++) // Using this for loop the actual o/p will move in horizontal direction
            {
                printf("\t");
            }


            printf("%d : %d :%d\n", h,m,s); // To display the actual ouput i.e digital clock
        }
        m++;  //Increment minute
        s=0;  //After every 1 minute i.e 60 seconds, second will be starting from zero

    }
    h++; // Increment Hour
    m=0; // After every 1 hour i.e. 60 minutes, minutes will be starting from zero
   }
  getch();  // To see the output of the program using getch function
}

