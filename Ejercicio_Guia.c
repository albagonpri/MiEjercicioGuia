#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 25
int main (int argc, char *argv[])
{
	char peticion[100];
	char respuesta[100];
	strcpy (peticion, "Miguel/47/Juan/12/Maria/22/Marcos/19");
	char nombre [20];
	int edad;
	char *p=strtok (peticion, "/");
	while (p!=NULL)
	{
		strcpy (nombre, p);
		p=strtok (NULL, "/");
		edad=atoi (p);
		if(edad>18)
			sprintf (respuesta, "%s%s*%d-", respuesta, nombre, edad);
		p=strtok (NULL, "/");
	}
	respuesta [strlen (respuesta)-1]='\0';
	printf ("Resultado: %s\n", respuesta);
	int n_i, n_f;
	char NombreP[MAX], caracter;
	int i;
	printf ("Introduzca un nombre.");
		scanf("%c", &caracter);
	i=0;
	while(i<MAX && caracter != '.')
	{
		NombreP[i]=caracter;
		i++;
		scanf("%c", &caracter);
	}
	n_i=0;
	n_f=i-1;
	while(n_i<n_f && NombreP[n_i]==NombreP[n_f])
	{
		n_i++;
		n_f--;
	}
	if (n_i>=n_f)
		printf("El nombre es palindromo\n");
	else
		printf("El nombre no es palindromo\n");
	
	printf("\n");
	return 0;
	printf("Escribe tu nombre:");
	scanf("%s", nombre);
	int mayus=1;
	for (i=0; nombre [i]!='\0'; i++)
	{
		if(nombre[i]<'A'||nombre[i]>'Z')
		{
			mayus=0;
			break;
		}
	}
	
	if (mayus==1)
	{
		printf("El nombre esta en mayusculas.\n");
	}
	{
if (mayus==0)
	printf("El nombre está en minusculas.\n");
	}


return 0;
	
}

