#include <stdio.h>
#include <locale.h>

void schitat_sdachu(float perchatki, float portfel, float galstuk, float summa);

int main() {
	setlocale(LC_CTYPE, "ru_RU.UTF-8");
	float A, B, C, D;

	printf("Стоимость перчаток: ");
	scanf_s("%f", &A);

	printf("Стоимость портфеля: ");
	scanf_s("%f", &B);

	printf("Стоимость галстука: ");
	scanf_s("%f", &C);

	printf("Исходная сумма: ");
	scanf_s("%f", &D);

	schitat_sdachu(A, B, C, D);

	return 0;
}

void schitat_sdachu(float perchatki, float portfel, float galstuk, float summa) {
	float sdacha = summa - (perchatki + portfel + galstuk);
	printf("Сдача: %.2f руб. \n", sdacha);
}
