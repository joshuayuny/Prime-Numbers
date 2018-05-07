// Prime Numbers_JY.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int getnum = 1;
int newnum;

int main()
{
	while (1)
	{
		if (getnum > 99)
		{
			break;
		}
		getnum++;

		if (getnum == 2 || getnum == 3)
		{
			printf("%d is prime\n", getnum);
		}
		{
			for (newnum = 2; newnum <= getnum / 2; newnum++)
			{
				if (getnum%newnum == 0 && getnum != newnum)
				{
					break;
				}
				if (newnum = getnum / 2)
				{
					printf("%d is prime\n", getnum);
				}
			}
		}
	} 
	return 0;
}
