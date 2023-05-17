#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
   int numbers[2][3] = {{1,2,3},{4,5,6}};

   numbers[0][0] = 9;
   numbers[0][1] = 8;
   numbers[0][2] = 7;
   numbers[1][0] = 6;
   numbers[1][1] = 5;
   numbers[1][2] = 4;


    for(int i = 0; i < 2; i++)
   {
       for(int j = 0; j < 3; j++)
       {
           printf("%d ", numbers[i][j]);
       }
       printf("\n");
   }

   return(0);
}
