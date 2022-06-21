#include <stdio.h>
#include <math.h>

int main() {
	int num1Int, num2Int;
	double num1, num2;
	char operador;

	scanf("%lf%c%lf", &num1, &operador, &num2);

	switch (operador) {
	case '+':
		printf("%.2f", num1 + num2);
		break;
	
	case '-':
		printf("%.2f", num1 - num2);
		break;

	case '*':
		printf("%.2f", num1 * num2);
		break;
	
	case '/':
		printf("%.2f", num1 / num2);
		break;
	
	case '%':
		num1Int = num1;
		num2Int = num2;
		printf("%d", num1Int % num2Int);
		break;

	case '~':
		printf("%.2f", pow(num1, num2));
		break;
	
	case '=':
		if (num1 == num2) {
			printf("true");
		} else {
			printf("false");
		}
		break;

	case '!':
		if (num1 != num2) {
			printf("true");
		} else {
			printf("false");
		}
		break;
	
	case '<':
		if (num1 < num2) {
			printf("true");
		} else {
			printf("false");
		}
		break;
	
	case '>':
		if (num1 > num2) {
			printf("true");
		} else {
			printf("false");
		}
		break;
	
	case '^':
		if (num1 && num2) {
			printf("true");
		} else {
			printf("false");
		}
		break;
	
	case 'v':
		if (num1 || num2) {
			printf("true");
		} else {
			printf("false");
		}
		break;
	
	case 'x':
		if ((num1 || num2) && !(num1 && num2)) {
			printf("true");
		} else {
			printf("false");
		}
		break;
	
	default:
		break;
	}

	return 0;
}