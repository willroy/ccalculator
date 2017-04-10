#include <stdio.h>

int main() {
	int a = 0;
	int i = 0;
	int total = 0;
	int num = 0;
	int num2 = 0;
	int opp = 0;
	while (a == 0) {
		printf("Enter Number One: \n");
		scanf("\n%d", &num);
		printf("Enter Number Two: \n");
		scanf("\n%d", &num2);
		printf("Enter Opperator: \n");
		scanf("\n%d", &opp);
		printf("calculating...\n");
		if (opp == 1) {
			total = num + num2;
			printf("calculated!");
			break;
		}
		else if (opp == 2) {
			total = num - num2;
			printf("calculated!");
			break;
		}
		else if (opp == 3) {
			total = num * num2;
			printf("calculated!");
			break;
		}
		else if (opp == 4) {
			total = num / num2;
			printf("calculated!");
			break;
		}
	}
	printf("\nTotal = %d\n", total);
}