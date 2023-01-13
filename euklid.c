#include <stdio.h>

int main () {

	int x, y;

	printf("Geben Sie x ein:\n");
	scanf("%d", &x);

	printf("Geben Sie y ein:\n");
	scanf("%d", &y);

	while (x != y) {

		if (x > y) {

			x = x - y;
		}

		else {

			y = y - x;
		}

	}

	printf("Der größte gemeinsame Teiler ist %d\n", x);

	return 0;

}
