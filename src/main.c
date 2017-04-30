#include <stdio.h>
#include "deposit.h"

int main()
	{	
		int v,s;
		printf("Vvedite symmy vklada\n");
		scanf("%d",&v);	
		printf("Vvedite srok\n");
		scanf("%d",&s);
		if (check(v,s) != 0) {	
			return 0;
		}		 
		else { 
			dohod (v,s);
		}
	}
