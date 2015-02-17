#include<assert.h>
#include<string.h>
#include<stdio.h>

void PrintFloat(char* cadena, float valor){
	assert(cadena);
	sprintf_s(cadena, 100, "%f", valor);
}
int main(int argc, char** argv)
{	
	char cadena[100];
	PrintFloat(cadena, 3.1416f);
	printf("%s", cadena);
	getchar();
}