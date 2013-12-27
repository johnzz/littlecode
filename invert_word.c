#include<stdio.h>
#include<stdlib.h>

void invert(char *str, char ** dest) {
		int i,j,k,m;
		*dest = (char *)malloc(strlen(str) + 1);
        i = strlen(str) - 1;
        j=i;
        m = 0;
        while (i >= 0) {
        	if (i > 0 && str[i - 1] != ' ')
        		i --;
        	else {
        		for (k=i; k<j; k++) {
        			(*dest)[m++] = str[k];
        		}
        		if (i != 0) {
        			(*dest)[m++] = ' ';
        		}
        		i -= 2;
        		j = i;
        	}
        }
 
}
void main(int argc, char *argv[]) {
	char *str = "nice to meet you";
	char *dest;

	invert(str,&dest);
	printf("%s\n",dest);
}