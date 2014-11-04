#include <stdio.h>
#include <windows.h>
#include <math.h>
const double pi = 3.14159;
void main()
{
	int r, h;
	double V, S;
	printf("vvedite radiys osnovani9 konysa\n"); scanf("%d", &r);
	printf("vvedite visoty konysa\n"); scanf("%d", &h);
	S = pi*r*(sqrt(double(h*h + r*r))) + pi*r*r;
	V = r*r*h*pi / 3;
	printf("ploshad' konysa =%f \n", S);
	printf("ob'em konysa =%f \n", V);


	for (int i = 0; i < 8; i++){
		for (int j = 0; j < 16; j++){
			printf(" %3d%c", i * 16 + j, i * 16 + j);
		}
		printf("\n");
	}

	int x = 1, p, s = 1, K;
	printf("vvedite 4islo X=\n");
	scanf("%d", &x);
	printf("vvedite stepen' p=\n"); scanf("%d", &s);
	if (s < 0)	p = -s;	else p = s;
	K = 1;
	for (int i = 0; i < p; i++)	K = K*x;
	if (s < 0) printf("RESULT= 1/%d\n", K);
	else printf("RESULT= %d\n", K);

	int n = 0, y = 0, max = 0, min = 0;
	printf("vvedite koli4estvo 4isel n>=1\n"); scanf("%d", &n);
	for (int i = 0; i < n; i++){
		printf("vvedite 4islo\n"); scanf("%d", &y);
		if (i == 0) max = min = y;
		if (max < y) max = y;
		if (min > y) min = y;
	}
	printf("max=%d ,min=%d\n", max, min);

	int a1=0, a2=1, next=0,n1=0;
	printf("vvedite koli4estvo 4isel n>=3\n"); scanf("%d", &n1);
	printf(" %d, %d,", a1, a2);
	for (int i = 0; i < n1-2; i++){
		next = a1 + a2;
		printf(" %d,", next);
		a1 = a2;
		a2 = next;
	}

	system("pause");
	return;
}