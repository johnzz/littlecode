#include <stdio.h>
#include <stdlib.h>

int singlenumber(int *a, int n) {
	int ones=0,twos=0,xthrees=0;
	int i = 0;
	for (i=0; i<n; i++) {
		twos |= (ones & a[i]);
		ones ^= a[i];
		xthrees = ~(ones & twos);
		ones &= xthrees;
		twos &= xthrees;

	}
	return ones;
}
void main() {
	int a[10] = {124,135,124,100,135,124,135};
	int n =10;
	int ret;

	ret = singlenumber(a,n);
	printf("%d\n",ret);
}