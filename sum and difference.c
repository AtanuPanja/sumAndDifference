# include<stdio.h>
#include<math.h>
void sum_and_differ(int *x, int *y)
{
	*x = *x + *y;
	*y = abs(*x - 2 * (*y));
}
int main(int argc, char *argv[])
{
	printf("Enter the numbers a and b\n");
	int a, b;
	scanf("%d %d",&a,&b);
	printf("a and b are %d and %d before computation\n",a,b);
	sum_and_differ(&a,&b);
	printf("a and b are %d and %d after conputation\n",a,b);
	return 0;
}