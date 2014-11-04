#include <stdio.h>
#include <Windows.h>
void main(){
	int a, b, c, s = 0, f = 0;
	double Z, Va, Vl;
	Z = Va = 10000;
	Z = Z*1.13*1.13*1.13*1.13*1.13*1.13*1.13*1.13*1.13*1.13*1.13*1.13;
	Va = Va*1.13*1.13*1.13*1.13*1.13*1.13*1.13;
	Vl = 10000 * 2 * 1.13*1.13*1.13*1.13*1.13*0.63;
	printf("Zahar=%7.2f\nVadim=%7.2f\nVlad=%7.2f\n", Z, Va, Vl);
	printf("vvedite 4islo\n"); scanf("%d", &a);
	printf("vvedite 4islo\n"); scanf("%d", &b);
	printf("vvedite 4islo\n"); scanf("%d", &c);
	printf("summa=%d\n", a + b + c);
	printf("proizvedenie=%d\n", a * b * c);
	printf("%d-%d-%d=%d\n", a, b, c, a - b - c);
	if (b == 0 && c == 0)printf("%d\n", a);
	if (b != 0 && c == 0)printf("%d\n", a / b);
	if (b == 0 && c != 0)printf("%d\n", a / c);

	while (s != 100){
		f = 0;
		while (s == 0){
			printf("vvedite 4islo \n"); scanf("%d", &a);
			if (s == 0 && f == 1){
				printf(" --------- programma zakon4its9 kogda summa= 100 ---------\n");
				if (a<0)printf("podskazka symmirovani9: 0%d=%d\n", a, a + s);
				if (a >= 0)printf("podskazka symmirovani9: 0+%d=%d\n", a, a + s);
				if (a + s > 100)printf("Yoursum of numbers>100\n");
				if (a + s < 100)printf("Yoursum of numbers<100\n");
			}
			s = a;
			f = 1;
		}
		printf("vvedite 4islo \n"); scanf("%d", &a);
		printf("\n");
		printf(" --------- programma zakon4its9 kogda summa= 100 ---------\n");
		if (a<0)printf("podskazka symmirovani9: %d%d=%d\n", s, a, s + a);
		if (a >= 0)printf("podskazka symmirovani9: %d+%d=%d\n", s, a, s + a);
		s = s + a;
		if (s > 100)printf("Yoursum of numbers>100\n");
		if (s < 100)printf("Yoursum of numbers<100\n");
	}
	system("pause");
	return;
}