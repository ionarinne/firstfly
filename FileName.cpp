#include<stdio.h>
int main() {
	const int amout = 100;
	int price = 0;
	printf("�����룺");
	scanf_s("%d", &price);
	int change = amout- price;
	printf("����%dԪ\n", change);
	return 0;
}