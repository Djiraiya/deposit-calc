#include <stdio.h>
#include "deposit.h"

int dohod(int v, int s)
	{
		printf("Vklad:%d Srok:%d",v,s);
			{
				if (v<=100000)
					{
						if (s<=30) v=v-v/10;
					}
				if (v>100000) 
					{
						if (s<=30) v=v-v/10;
					}
				if (v<=100000) 
				if (s>30 && s<=120) v=v+v*0.02;
				if (s>120 && s<=240) v=v+v*0.06;
				if (s>240 && s<=365) v=v+v*0.12;
			}
			{
				if (v>100000)
				if (s>30 && s<=120) v=v+v*0.03;
				if (s>120 && s<=240) v=v+v*0.08;
				if (s>240 && s<=365) v=v+v*0.15;
			}
		printf("\nDohod=%d\n", v);
		return v;
	}

int check(int c, int d)
	{
		if (c<10000)
			{
				printf("\nMinimalnaya symma vklada 10000rub\n");
				return 1;
			}
		if (d<=0 || d>365)
			{
				printf("Nekorektnii srok\n");
				return 1;
			}
		return 0;
	}
