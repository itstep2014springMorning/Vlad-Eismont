#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

void main()
{
	system("cls");
	int w, h;
	printf("vvedite W <=80\n");
	scanf("%d", &w);
	printf("vvedite H <=80\n");
	scanf("%d", &h);
	for (int i = 0; i < h; i++){
	for (int j = 0; j < w; j++)
	printf("*");
	printf("\n");
	}
	printf("pr9moygolnik s shirinou= %d, i visotou= %d\n", w, h);

	int N,M,ft,es,frs,les,i=0;
	printf("vvedite 4islo myh N>0\n");
	scanf("%d", &N);
	printf("exorcism speed>0 \n");
	scanf("%d", &es);
	printf("fly return speed= \n");
	scanf("%d", &frs);
	printf("fatigue time= \n");
	scanf("%d", &ft);
	les = es*0.8;
	M = N;
	do{
	N = N - es+frs;
	i++;
	printf("minyta %3d, M= %d, N= %d\n", i, M, N);
	if ( N >= M ){
	printf("Ivan ne smojet vignat vseh myh\n"); break;
	}
	if (N <= 0){
	printf("na minyte %d 4islo myh=0\n", i); break;
	}
	M = N;
	if (i == ft) es = les;
	} while (N>=0);
	

	int z,q,j1,j2,d=1,r;
	printf("vvedite 4islo 9rysov\n");	scanf("%d", &z);
	q= 2*z + 1;
	r= z;
	for (int k = 1; k < z + 1; k++){
		j1 = j2 = r;
		for (int i = 0; i < k ; i++){
			for (int j = 0; j < q; j++){
				if (j == j1 || j == j2) printf("*");
				else printf(" ");
			}
			j1 = j1 - d; j2 = j2 + d;
			printf("\n");
		}
		for (int j = 0; j < q; j++){
			if (j >= j1 && j <= j2) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	for (int i = 0; i < 2; i++){
		for (int j = 0; j < q; j++){
			if (j == r - 1 || j == r + 1)printf("*");
			else printf(" ");
		}
		printf("\n");
	}

	char op[2];
	float f1 = 0, f2 = 0, R;
begin:	printf("vvedite 4islo \n");	scanf("%f", &f1);
	//	printf("%6.2f\n", f1);
	do {
	    printf("vvedite operaciu\n"); scanf("%s", &op);
		switch (op[0]){
		case '=':goto stop;
		case 'c':goto begin;
		case 'e':printf("     END\n"); system("pause"); return;
		}
		//	printf("%c\n", op[0]);
		//  printf("%d\n", op[0]);
		printf("vvedite 4islo \n");	scanf("%f", &f2);
		//	printf("%6.2f\n", f2);
		switch (op[0]){
		case '+':R = f1 + f2; break;
		case '-':R = f1 - f2; break;
		case '*':R = f1 * f2; break;
		case '/':R = f1 / f2; break;
		case '=': stop: printf("result= %9.4f\n", R); break;
		}
		f1 = R;
	} while (op[0] != 'e');
	return;
}