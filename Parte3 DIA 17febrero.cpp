#include<assert.h>
#include<string.h>
#include<stdio.h>

void PrintFloat(char* cadena, float valor){
	assert(cadena);
	assert(valor >= 100.0f && valor <= 500.0f);
	sprintf_s(cadena, 100, "%f", valor);
}

int main(int argc, char** argv)
{
	char cadena[100];
	PrintFloat(cadena, 100.1416f);
	printf("%s", cadena);
	getchar();
}