#include <stdio.h>
#include <Windows.h>
void main()
{
	int a = 36, b = 150,nod;
	while (a!=0 && b!=0)
	if (a > b)
		a = a%b;
	else
	b = b%a;
	nod = a + b;
	printf("NOD = %d\n",nod);

	int nok;
	a = 36, b = 150;
	nok = a*b / nod;
	printf("NOK = %d\n", nok);

	int w, h;
	printf("vvedite w>=1\n");
	scanf("%d", &w);
	printf("vvedite h>=1\n");
	scanf("%d", &h);
	for (int i = 0; i < w; i++){
		for (int j = 0; j < h; j++){
			if (i == w-1 || i == 0 || j == 0 || j == h-1) 
			printf("#");
			else printf(".");
		}
		printf("\n");
	}
	system("pause");
	return;
}