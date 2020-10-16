#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float average(int *a, int len){
	int sum = 0;
	int i;
	for (i = 0; i < len; i++){
		sum += *a;
		a++;
	}
	return (float) sum / (float) len;
}

void copy(int *a, int *b, int len){
	int i;
	for (i = 0; i < len; i++){
		*b = *a;
		a++;
		b++;
	}
	return;
}

int len(char *a){
	int count = 0;
	while (*a){
		count++;
		a++;
	}
	return count;
}

int main(){
	int array[5] = {10, 4, 2, 9, 27};
	printf("Average of {10, 4, 2, 9, 27}: %f\n", average(array, 5));

	int a1[4] = {1, 2, 3, 4};
	int a2[4];
	copy(a1, a2, 4);
	printf("A1: ");
	int i;
	for (i = 0; i < 4; i++){
		printf("%d ", *(a1 + i));
	}
	printf("\nA2: ");
	for (i = 0; i < 4; i++){
		printf("%d ", *(a2 + i));
	}
	printf("\n");

	char s[] = "Hello";
	printf("How many letters are in 'Hello'? %d\n\nString Library Demonstrations!\n", len(s));

	char p[10];
	strcpy(p, s);

	printf("s = %s, p = %s\n", s, p);

	strcat(p, ", everyone!");

	printf("new p = %s\n", p);

	int ret = strcmp(s, p);

  	if (ret < 0) {
      		printf("s is less than p");
   	} else if(ret > 0) {
      		printf("s is less than p");
   	} else {
      		printf("s is equal to p");
   	}

	printf("\n");

	printf("Address of 'e' in 'Hello': %p\n", strchr(s, 'e'));

	return 0;
}
