

65;6800;1c#include <stdio.h>
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

 i = 'a'; 
  while (i <= 'z')
    {
      if (i != 'e' && i != 'q')
      putchar(i);
      i++;
    }
    putchar('\n');
    return (0);
}





