#include <stdio.h>
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
  char az;

  for (az = 'a'; az <= 'z'; az++)
    {
      putchar(az);
    }
    putchar('\n'); // saut de ligne
    return 0;
