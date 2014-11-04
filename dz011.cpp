#include <stdio.h>
#include <math.h>
#include <Windows.h>
void main(){
	double x = -2, s = 1, eps = 0.00001, p, fn,delta;
	int f = 1;
	printf("vi4islenie exp(x)\n");
	for (x = -2; x <= 2.05; x = x + 0.1){
		p = x; s = 1 + p;
		f = 1;
		do{
			f++;
			p = p * x / f;
			s = s + p;
		} while (fabs(p) > eps);
		fn = exp(x);
		delta = s - fn;
		printf("%4.1f  %11.8f  %11.8f  %11.7f\n", x, s, fn, delta);
	}
	printf("vi4islenie sin(x)\n");
	s = 0;
	for (x = -2; x <= 2.05; x = x + 0.1){
		p = x; s = p;
		f = 0;
		do{
			f++;
			p = (-p) * x*x / (2*f*(2*f+1));
			s = s + p;
		} while (fabs(p) > eps);
		fn = sin(x);
		delta = s - fn;
		printf("%4.1f  %11.8f  %11.8f  %11.8f\n", x, s, fn, delta);
	}
	s = 0;
	printf("vi4islenie cos(x)\n");
	for (x = -2; x <= 2.05; x = x + 0.1){
		p = -(x*x)/2; s = 1 + p;
		f = 1;
		//printf("%11.8f\n", p);
		do{
			f++;
			p = -(p * (x*x/ ((2*f)*(2*f-1))));
			//printf("%d %11.8f\n", 2*f,p);
			s = s + p;
		} while (fabs(p) > eps);
		fn = cos(x);
		delta = s - fn;
		printf("%11.8f  %11.8f  %11.8f  %11.8f\n", x, s, fn, delta);
	}

	system("pause");
	return;
}