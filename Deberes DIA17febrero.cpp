#include<assert.h>
#include<string.h>
#include<stdio.h>
#include<Windows.h>

void Log(char* cadena){
	assert(cadena);
	OutputDebugString(cadena);
}

int main(int argc, char** argv)
{	
	char textura[100] = "my textura.png";


	Log("Cargando Textura; %s en %f segundos", textura, 3.1415);
	getchar();
	

}