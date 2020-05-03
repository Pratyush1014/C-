#include"stdio.h"
main()
{
	char *p =(char *)0xFFFFFFF9;
	while(1)
	{
		printf("%p",p);
		printf("\n");
		p++;
		sleep(1);
	}	
}
