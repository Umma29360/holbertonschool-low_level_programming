#include <stdio.h>
#include <stdlib.h>

/**                                                                                           
 * main - Entry point of the program                                                          
 *                                                                                            
 * Description: Prints the alphabet in lowercase letters                                      
 *              followed by a new line.                                                       
 *                                                                                            
 * Return: Always 0 (Success)                                                                 
 */
int main(void)
{
  char i;
  char m;
  
  i = 'a';
  while (i <= 'z')
    {
      putchar(i);
      i++;
    }
m = 'A';

  while (m <= 'Z')
    {
      putchar(m);
      m++;
    }
    putchar('\n');
    return (0);
}



