#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_CTYPE, "ru_RU.UTF-8");
	float A, B, C, D;
	float change;

	printf("Стоимость перчаток: ");
	scanf_s("%f", &A);

	printf("Стоимость портфеля: ");
	scanf_s("%f", &B);

	printf("Стоимость галстука: ");
	scanf_s("%f", &C);

	printf("Исходная сумма: ");
	scanf_s("%f", &D);

	change = D - (A + B + C);

	printf("Сдача: %.2f руб. \n", change);

	return 0;
}