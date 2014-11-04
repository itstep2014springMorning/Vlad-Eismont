#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <ctime>
//#include <Windows.h>

using namespace std;
const int maxMessageSize = 50;
const int maxNumberOfMessages = 22222;

struct record { // «апись в журнале
	int time;
	char message[maxMessageSize];
};

FILE *in;
struct record journal[maxNumberOfMessages]; // ?урнал
int nRecords = 0,a;   // количество записей в журнале

void showRecords() {

	if (nRecords == 0)printf("no records\n");
	else for (int i = 0; i < nRecords; i++){
		printf("%5d. %d %s\n", i + 1, journal[i].time, journal[i].message);
	}
}

void addRecord() {
	printf("enter a message\n");
	gets(journal[nRecords].message);
	journal[nRecords].time = time(NULL);
	nRecords++;
}
void SaveToFile() {
	in = fopen("D:/1/tt.txt", "wb");
	for (int i = 0; i < nRecords; i++){
		fprintf(in, "%d %s\n", journal[i].time, journal[i].message);
	}
	fclose(in);
}
void ReadFile() {
	int i = 0;
	in = fopen("D:/1/tt.txt", "rb");
	if (in == NULL){ printf("error fopen\n"); a = 1; return; }
	fscanf(in, "%d %s\n", &journal[0].time, journal[0].message);
	while (!feof(in)){
		i++; nRecords = i;
		fscanf(in, "%d %s\n", &journal[i].time, journal[i].message);
	}
	fclose(in);
	printf("number of records = %d\n", nRecords);
}

void  deleteRecord() {
	int n;
	char A[5];
	printf("vvedite # ydal9emou zapisi\n");
	gets(A);
	sscanf(A, "%d", &n);
	printf("n=%d   nRecords=%d\n", n, nRecords);
	for (int i = n; i <= nRecords; i++){
		//printf("i-1= %d,   i=%d\n", journal[i - 1].time, journal[i].time);
		journal[i - 1].time = journal[i].time;
		//‘ункци¤ strcpy(S1, S2) Ц копирует содержимое строки S2 в строку S1.
		strcpy(journal[i - 1].message, journal[i].message);
	}
	if (n <= nRecords) nRecords--;
}

int main()
{
	nRecords = 0;
	ReadFile();
	if (a == 0){
		while (1){
			printf("1.Show records\n2.Add a record\n3.Delete a record\n0.Exit\n");
			char choice[5];
			int ch;
			gets(choice);
			sscanf(choice, "%d", &ch);
			if (ch != 0 && ch != 1 && ch != 2 && ch != 3)printf("neverna9 komanda\n");
			switch (ch) {
			case 0:
				// SAVE TO FILE
				SaveToFile();
				//printf("0.fwrite(journal, sizeof(struct record), nRecords, файловый поток);\n");
				return 0;
			case 1:
				showRecords();
				break;
			case 2:
				addRecord();
				break;
			case 3:
				deleteRecord();
				break;
			}
		}
	}
	//system("pause");
	return 0;
}