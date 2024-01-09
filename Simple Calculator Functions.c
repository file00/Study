/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int calc(int v1, int v2, int op)
{
	int result;
	switch (op) {
	case 1: result = a + b;
		break;
	case 2: result = a - b;
		break;
	case 3: result = a * b;
		break;
	case 4: result = a / b;
		break;
	}
	return result;
}

void _file() {
	int a, b, res, oper;
	printf("계산 입력 (1:+, 2:-, 3:*, 4:/) : ");
	scanf("%d", &oper);
	printf("계산 할 두 숫자를 입력 : ");
	scanf("%d %d", &a, &b);

	res = calc(a, b, oper);
	printf("계산 결과는 : %d\n", res);
}
