#include <stdio.h>
#include <locale.h>
#define D 00.82
main() {
	setlocale(LC_CTYPE, "RUS");
	float a,b,c;
	printf("������� ����������\n");
	scanf_s("%f", &a);
	printf("������� ��������� �������\n");
	scanf_s("%f", &b);
	c = a * D * b;
	printf("��������� ������� %f ������ ",c);
}