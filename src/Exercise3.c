/*
3.	Write a program to find all prime number less than a given integer N 
(optional: provide an optimal solution)
Ex:
 ____________________________________
| Input: 10                          |
| Output: 2 3 5 7                    |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int snt(int x)
{
	if (x < 2)
	return 0;
	for (int i =2; i <= sqrt(x) i++)
	if (x%i == o)
	return 0;
	return 1;
}
int main() {
	int testcase = 10;
	for (int i = 1; i < testcase; i++)
	if (snt(i) == 1)
	printf("%d",i);
}
return o;
}