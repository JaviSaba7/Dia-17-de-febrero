//Primera prova feta 
/*#include <assert.h>

//Assert: Comprueba que...ASEGURA que..tal es diferent de tal
int main(int argc, char** argv)
{
	int a = argc;
	assert(a != 1); //a diferent de 1
}
*/
//Segona prova
#include<assert.h>
#include<string.h>
#include<stdio.h>
void SetString(char* p){
	
	if (p!=0)//Si P és diferent de NULL("0"), executa la linia
		strcpy_s(p, 100, "hello world");
	
}
int main(int argc, char** argv)
{
	char* pepito = NULL;
	char cadena[100];

	SetString(pepito);
	printf("%s", pepito);
	getchar();
}