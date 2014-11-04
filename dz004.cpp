#include <stdio.h>
#include <Windows.h>

int main()
{
	int a, b, p, q;
	printf("vvedite koli4estvo 4isel\n");
	scanf("%d", &a);
	p = 1;
	for (int i = 0; i < a; i++){
		printf("vvedite 4islo\n");
		scanf("%d", &b);
		p = p*b;
	}
	printf("proizvedenie= %d\n", p);

	printf("vvedite 4islo\n");
	scanf("%d", &a);
	printf("vvedite stepen'\n");
	scanf("%d", &b);
	p = 1;
	if (b != 0){
		while (b > 0){
			p = p*a;
			b--;
		}
		printf("result= %d\n", p);
	}
	else printf("1\n");

	printf("vvedite 4islo L=\n");
	scanf("%d", &a);
	printf("vvedite 4islo X=\n");
	scanf("%d", &b);
	p = 0; q = 1;
	if (a != 0){
		while (b <= a){
			q = q*b;
			b = q;
			p++;
		}
		printf("result= %d\n", p);
	}
	else printf("L doljno bit bolshe za 0");
	system("pause");
	return 0;

}