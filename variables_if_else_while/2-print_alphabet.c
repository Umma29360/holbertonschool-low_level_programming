#include <stdio.h>
#include <stlib.h>

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
  char az = 'a';

  while (az <= 'z')
    {
      putchar(az);
      az++;
    }
    putchar('\n');
    return (0);
}
