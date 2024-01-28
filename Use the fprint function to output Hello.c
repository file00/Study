/* Use the fprint function to output "Hello!! */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void main() {
	char temp[64];
	FILE* p_sample = fopen("practice.txt", "wt");
	if (NULL != p_sample) {
		fprintf(p_sample, "Hello!!");
		fclose(p_sample);
	}
}

