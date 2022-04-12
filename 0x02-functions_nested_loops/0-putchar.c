#include "main.h"

/**
 * main prints the string _putchar
 * return: always 0 for success
*/
int main(void)
{
	char txt[8] = "_putchar";
	for(int i=0; i < 8; i++){
		_putchar(txt[i]);
	}
	_putchar('\n');
	return (0);
}
