#include <stdio.h>

int main(){       
        int i;
	int s;
	int fib[s];

        fib[0] = 0;
        fib[1] = 1;
	printf("Enter The Ceiling Number: ");
	scanf("%d",&s);
        for(i = 2; i < s; i++)
                fib[i] = fib[i-1] + fib[i-2];

        for (i = 0; i < s; i++)
                printf("%d %d\n", i, fib[i]);
}
