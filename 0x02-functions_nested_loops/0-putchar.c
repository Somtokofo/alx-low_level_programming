#include "main.h"

/**
 * main -  prints _putchar, followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
  char chr[8] = "_putchar";
  int i = 0;

  while (i < 8)
  {
    _putchar(chr[i]);
    i++;
  }
  _putchar('\n');
  return (0);
}
