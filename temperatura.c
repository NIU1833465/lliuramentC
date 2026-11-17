#include <stdio.h>

int main(void) {
	int temperatura = 25;
	float fahren = (temperatura*9)/38;
	printf("Temperature: %d degrees\nFahrenheit: %.1f degrees\n", temperatura, fahren);
	return 0;
}
