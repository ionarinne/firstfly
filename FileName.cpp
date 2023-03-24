#include<stdio.h>
int main() {
	const int amout = 100;
	int price = 0;
	printf("ÇëÊäÈë£º");
	scanf_s("%d", &price);
	int change = amout- price;
	printf("ÕÒÄã%dÔª\n", change);
	return 0;
}