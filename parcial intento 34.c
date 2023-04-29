#include<stdio.h>
void Profesor();
void Alumno1();
void Alumno2();
void Alumno3();

void ingreso_n ();
void consulta_n ();
void promedio_n ();

int nota1;
int nota2;
int nota3;
int i;

struct notas
{
	int nota1;
	int nota2;
	int nota3;
};
struct notas s[3]={{0,0,0},{0,0,0},{0,0,0}
};

int main()
{

	while(1)
	{
		int choice;
		printf("\n---Inicio---\n");
		printf("1) Profesor\n2) Alumno UNO\n3) Alumno DOS\n4) Alumno TRES\n5) Volver inicio \nEscoje una opcion\t");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			{
				Profesor();
				break;	
			}
			case 2:
			{
				Alumno1();
				break;	
			}	
			case 3:
			{
				Alumno2();
				break;		
			}
			case 4:
			{
				Alumno3();
				break;
			}
            case 5:
			{
			
			}
			default:
				printf("Ingresa opcion\n");
		}	
	}		
}



void Alumno1()
{
	int choice;
		printf("\n--Alumno Uno---\n");
		printf("1) INGRESAR NOTAS(valido para profesor)\n2) Consultar Notas\n3) Consultar porcentaje\nEscoje una opcion :\t");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			{
				 ingreso_n();
				break;
			}
			case 2:
			{
				consulta_n();
				break;
			}	
			case 3:
			{
				promedio_n();
				break;
			}
			default:
				printf("No ingresaste una eleccion valida:) \n");
		}	
}

void Alumno2()
{
	int choice;
		printf("\n---Alumno Dos---\n");
		printf("1) INGRESAR NOTAS(valido para profesor)\n2) Consultar Nota\n3) Consultar Promedio\nEscoje una opcion :\t");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			{
				ingreso_n();
				break;
			}
			case 2:
			{
				consulta_n();
				break;
			}	
			case 3:
			{
				promedio_n();
				break;
			}
			default:
				printf("No ingresaste una eleccion valida:)\n");
		}	
}

void Alumno3()
{
	int choice;
	printf("\n---Alumno Tres---\n");
		printf("1) INGRESAR NOTAS(valido para profesor)\n2) Consultar Nota\n3) Consultar Promedio\nEscoje una opcion :\t");
		scanf("%d",&choice);
		switch(choice)
			{
			case 1:
			{
				ingreso_n();
				break;
			}
			case 2:
			{
				consulta_n();
				break;
			}	
			case 3:
			{
				promedio_n();
				break;
			}
			default:
				printf("No ingresaste una eleccion valida:)\n");
	    	}	
	    	
}

void Profesor()
{
	int choice;
		printf("\n---Seleccionar Alumno---\n");
		printf("1) INGRESAR NOTAS(valido para Profesor)\n2) Alumno 1\n3) Alumno 2 \n4) Alumno 3 \n Escoje una opcion :\t");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			{
				Alumno1();
				break;
			}
			case 2:
			{
				Alumno2();
				break; 
			}	
			case 3:
			{
				Alumno3();
				break;
			}
			default:
				printf("No ingresaste una eleccion valida:) \n");
		}	
}

void consulta_n()
{
	printf("\n---Sus notas son---\n");
	printf("Nota1: %d",&nota1);
	printf("Nota2: %d",&nota2);
	printf("Nota3: %d",&nota3);
}

void ingreso_n()
{
	printf("\nIngresa la primera nota\t");
	scanf("%d",&nota1);
	printf("\nIngresa la segunda nota\t");
	scanf("%d",&nota2);
	printf("\nIngresa la tercera nota\t");
	scanf("%d",&nota3);
}


void promedio_n()
{

  int numero, suma = 0, total = 0, i;

  printf("Ingresa 3 numeros:\n");
  for(i = 1; i <= 3; i++){
    printf("%d: ", i);
    scanf("%d",&numero);
    suma = suma + numero;
  }
  total = suma / 3;
  printf("El promedio es %d", total);





}
