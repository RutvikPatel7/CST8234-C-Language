#include<stdio.h>
#include<float.h>
int main() {

	int number;
	do {
		printf("\nPlease enter a phone number: ");
		scanf("%d",&number);
		if(number == 0)
		{
			printf("Quit singal received");
			return 0;
		}
		int temp = number;
		int count = 0;
		while(temp != 0) {
			temp /= 10;
			++count;
		}

		if( count != 7 ) {
			printf("\nThe number entered is not 7-digit long");
		}	else if (number/1000000 == 0 || number/1000000 == 1 ) {
			printf("Invalid phone numberr");
		}   else {
			char str[8];
			sprintf(str, "%d", number);

			printf("\nThe formatted phone number is:\t%.3s",str);
			printf("-%s", &(str[strlen (str) - 4]));
		}
	}	while(number != 0);
	return 0;

}
