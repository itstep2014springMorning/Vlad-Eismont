#include <stdio.h>
#include <iostream>
#include <ctime>
using namespace std;

#define DEBUG

#define SQR(x) ((x)*(x))

#define POW4(x) ((x)*(x)*(x)*(x))

#define SIN(y) ((y)-(y)*(y)*(y)/6+(y)*(y)*(y)*(y)*(y)/120-(y)*(y)*(y)*(y)*(y)*(y)*(y)/120/6/7)

void main(){
	clock_t start, end,start1,end1;
	int n, x = 1, y = 6, s = 0;
	printf("vvedite celoe 4islo>0\n");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++){
		x = x*i;
#ifdef DEBUG
		printf("i=%d  i!=%d\n", i, x);
#endif
	}
	printf("vvedite celoe 4islo>0\n");
	scanf("%d", &n);

	cout << POW4(2) << " " << POW4(n) << " " << POW4(1 + 2) << "\n";

	double o = 15 * 3.141596 / 180;
	//start = clock();
	printf("%f %f\n", sin(o + o), SIN(o + o));
	//end = clock();
	start = clock();
	for (int j = 0; j < 2000000000; j++){
		SIN(o + o);
	}
	end = clock();
	start1 = clock();
	for (int j = 0; j < 2000000000; j++){
		sin(o + o);
	}
	end1 = clock();
	cout << "Process took SIN " << (double(end - start) / CLOCKS_PER_SEC) << " seconds" << '\n';
	cout << "Process took sin " << (double(end1 - start1) / CLOCKS_PER_SEC) << " seconds" << '\n';
	cout << "sin/SIN = " << ((double(end1 - start1) / CLOCKS_PER_SEC)/(double(end - start) / CLOCKS_PER_SEC)) << '\n';
	return;
}