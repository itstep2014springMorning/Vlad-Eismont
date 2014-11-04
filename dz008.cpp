#include <stdio.h>
#include <Windows.h>
void main()
{
	int m, n;
	printf("vvedite m\n");
	scanf("%d", &m);
	printf("vvedite n\n");
	scanf("%d", &n);
	for (int i = 0; i < m; i++){
		for (int j = 0; j < n; j++){
			if ((i + j) & 1)printf("*");
			else printf(".");
		}
		printf("\n");
	}
	printf("\n");

	double M, N;
	N = M = 1000;
	int f = 0, k = 0;
	for (int i = 0; i < 40; i++){
		M = M + 1000 * 0.06;
		N = N*1.04;
		k += 3;
		if (N>M){
			f++;
		}
		printf("na %d mes9c ,Sasha= %5.2f  ,a Vas9= %5.2f  \n", k, M, N);
		if (f == 3)break;
	}

	printf("vvedite 4islo\n");
	scanf("%d", &m);
	f = 0; k = m;
	while (m % 10 > 0){
		f = f * 10 + m % 10;
		m = m / 10;
	}
	if (f == k && k != 0)printf("eto 4islo polindrom!\n");
	else printf("eto 4islo ne polindrom!\n");

	printf("vvedite 4islo\n");
	scanf("%d", &n);
	int p = 12, l = 0;
	f = 1; m = n; k;
	while (m >= p){
		f = f + 1;
		m = m / p;
	}
	printf("f= %d\n", f);
	k = f;
	for (int i = 0; i < f; i++){
		m = n;
		for (int j = 0; j < k; j++){
			l = m%p;
			m = m / p;
		}
		switch (l){
		case 10:printf("A"); break;
		case 11:printf("B"); break;
		default: printf("%d", l);
		}
		k--;
	}

	system("pause");
	return;
}