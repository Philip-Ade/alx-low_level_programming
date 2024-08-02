#include "lists.h"
void ComeFirstbyADE(void)__attribute__ ((constructor));
/**
 * ComeFirstbyADE - Function that runs before the main function
 */
void ComeFirstbyADE(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
