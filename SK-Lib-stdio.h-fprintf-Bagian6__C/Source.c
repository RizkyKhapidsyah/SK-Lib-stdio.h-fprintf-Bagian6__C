#pragma warning(disable:4996)

#include <stdio.h>
#include <process.h>

/*
	Source by Microsoft
	Modified For Learn by RK
	I.D.E : VS2019
*/

FILE* stream;

int main(void) {
	int    i = 10;
	double fp = 1.5;
	char   s[] = "this is a string";
	char   c = '\n';

	fopen_s(&stream, "fprintf_s.out", "w");
	fprintf_s(stream, "%s%c", s, c);
	fprintf_s(stream, "%d\n", i);
	fprintf_s(stream, "%f\n", fp);
	fclose(stream);
	system("type fprintf_s.out");

	_getch();
	return 0;
}