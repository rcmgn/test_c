#include <stdio.h>

int main() {
//	int test = 1;
//	printf("The test is %d", test);

	int var1 = 10;
	float var2 = 5;

	for (int counter = 0; counter < 5; counter++)
	{
		 var1 += 1;
		 var2 += 2.1;
	}

	if (var1 > var2 || var1 < var2)
		var1 = var2;

	if (var1 > 15 && var1 == var2)
		var2 = var1;
	else
		var1 += var2;

	var2 += var1;

	printf("Result: %f", var2);
}
