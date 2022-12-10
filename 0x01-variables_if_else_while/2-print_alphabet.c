#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	enum alphabeth {a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r, s, t, u,v, w, x, y, z};

	enum alphabeth iter[]= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

	int it;
       	for (it=0;it<26;it++)
		putchar(iter[it]);
	putchar('\n');
	return(0);
}
