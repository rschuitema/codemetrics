#include "componentb.h"
#include "componentc.h"

/*
 * Function with:
 * - too many parameters
 * - cyclomatic complexity = 0
 * - 4 lines of code
 * - 9 comment lines
 * - 1 preprocessor line
 * - total of 15 lines
 */
int multiply(int p1, int p2, int p3, int p4)
{
	int sum =0;
	
	sum += p1;
	sum += p2;
	sum += p3;
	sum += p4;
	
	sum += p1;
	sum += p2;
	sum += p3;
	sum += p4;

 	sum += p1;
	sum += p2;
	sum += p3;
	sum += p4;

	return 0;
}
