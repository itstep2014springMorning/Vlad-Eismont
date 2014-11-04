#include <stdio.h>
#include <Windows.h>
void main()
{
	int n,f=0;
	printf("vvedite 4islo n>=2\n");
	scanf("%d", &n);
	for (int i = 2; i*i <= n; i++){
		if (n%i == 0){
			f++;
		}
	}
	if (f > 0)
		printf("4islo neprostoe\n");
	else
		printf("4islo prostoe\n");

	printf("vvedite 4islo n>=2\n");
	scanf("%d", &n);
	int m;
	f = 0;
	m = n;
	for (int i = 2; i <= n/2; i++){
		if (m%i == 0){
			printf("%d ", i);
			m = m / i;
			i--;
			f++;
		}
	}
	if (f == 0)
		printf("4islo prostoe i ne imeet deliteleu\n");

	printf("vvedite 4islo n>=2\n");
	scanf("%d", &n);
	int i = 0, j = 0,j1=0,j2=0,d=1;
	j1 = n / 2 ; j2 = j1;
	for ( i = 0; i < n ; i++){
		for ( j = 0; j < n ; j++){
			if (j == j1 || j == j2) printf("#");
			else printf(".");
		}
		j1=j1-d; j2=j2+d;
		if (j1 == 0) d = -1;
		printf("\n");
	}
	system("pause");
	return;
}