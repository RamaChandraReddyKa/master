/*----------------------------------------------------------------------------*/
/* Title:   bin2dec.c                                                       */
/*----------------------------------------------------------------------------*/
/* Binary to decimal conversion                                               */
/*                                                                            */
/* To compile:                                                                */
/*                $ gcc -o bin2dec bin2dec.c                                  */
/*                $ chmod 755 bin2dec                                         */
/*                                                                            */
/* To run:                                                                    */
/*                $ ./bin2dec                                                 */
/*                                                                            */
/*----------------------------------------------------------------------------*/
#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

unsigned binary_to_decimal(const char *str)
    {
         unsigned value, i, p;
		 
		 /*  Check if input is made of 0s(ASCII 48) and 1s (ASCII 49) */
		 for (i= 0; i < strlen(str); i++)
		 {
			 if (str[i] != 48  && str[i] != 49 )
			 { 
				printf(" Incorrect data\n");
			 	 exit (0);
			 }
		 }
         /* Convert Binary to Decimal
		 Repeat for each binary digit starting from the last array element */
          p = strlen(str) -1;  
          value = 0;		  
		 for (i= 0; i < strlen(str); i++)

		  {    
			value +=  (str[p] - 48) * (int)pow((double)2, (double)i);
			
			p--;
			
			
		   }
         
         return value;
    }

    int main(int argc, char *argv[ ])
    {

       char *data;
       unsigned value;
       if (argc < 2) /* Not enough item to analyze */
			{

				printf("Not enough parameters\n");
				exit(0);
			}
	   if (argc == 2)
		{
         data = argv[1];
		 value =  binary_to_decimal(data);

          printf("Decimal equivalent is: %u\n",value);
          return(0);
		}

          

       return(1);
     }
   
  
