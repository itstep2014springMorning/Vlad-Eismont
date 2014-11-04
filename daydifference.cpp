#include <stdio.h>

const int daysinmonth[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

struct Date{
	int y, m, d;
};
int isleap(int y){
	return ((y % 400 == 0) || ((y % 4 == 0) && (y % 100 != 0)));
}
int Datetoint(struct Date a){ // nuber of days after jan 1 2000
	int N = 0, f = 0;
	/*for (int i = 0; i < a.m - 1; i++){
	N += daysinmonth[i];
	}
	N += a.d;*/
	for (int j = 2000; j < a.y; j++){
		N += 365 + isleap(j);// printf("y=%d   %d\n", j, N);
	}
	for (int i = 0; i < a.m-1; i++){
		N += daysinmonth[i];
		if (i == 1){ N += isleap(a.y); }
	}
	N += a.d;
	printf("number of days = %d\n", N);
	return N;
}
int DateDiff(struct Date a, struct Date b){
	printf("difference = %d\n", Datetoint(a) - Datetoint(b));
	return 0;
}
void printDate(struct Date a){
	printf("");
}
int main(){
	struct Date x, w;
	//int f;
	x.y = 2001;		x.m = 2;	x.d = 2;
	w.y = 2012;		w.m = 1;	w.d = 1;
	printf("%d\n", Datetoint(x)); // 399
	printf("%d\n", Datetoint(w)); // 4383  +1(tak kak eshe 1.1.2012 day)
	DateDiff(w, x);
	//f = isleap(x.y);
	//printf("%d\n", f);
	return 0;
}