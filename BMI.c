#include <stdio.h>

int main(){
	float peso, altura, bmi;

	//solicitar datos al usuario.
	printf("Ingrese su peso en kg: ");
	scanf("%f", &peso);

	printf("Ingrese su altura en metros: ");
	scanf("%f", &altura);

	if(altura <= 0 || peso <= 0){
		printf("ERROR, los datos ingresados deben ser mayores a cero. \n");
		return 1;
	}
	//calculo del BMI
	bmi = peso / (altura * altura);

	//mostrar resultado.
	printf("\n Su indice de masa corporal es de: %.2f", bmi);

	// Mostrar tabla de referencia
    printf("\n%-10s | %s\n", "Índice", "Condición");      //se imprimirá una cadena de texto con alineación a la izquierda en un campo de 10 caracteres de ancho. Si la cadena es más corta, se rellena con espacios a la derecha.
    printf("-----------------------------\n");
    printf("<18.5      | Bajo peso\n");
    printf("18.5 - 24.9| Normal\n");
    printf("25.0 - 29.9| Sobrepeso\n");
    printf(">=30       | Obesidad\n");

    // Mostrar la condición específica del usuario
    printf("\n--- SU CONDICION ---\n");
    
    if(bmi < 18.5){
        printf("Usted tiene BAJO PESO\n");
    }
    else if(bmi >= 18.5 && bmi <= 24.9){
        printf("Usted tiene índice NORMAL\n");
    }
    else if(bmi >= 25.0 && bmi <= 29.9){
        printf("Usted tiene SOBREPESO\n");
    }
    else{
        printf("Usted tiene OBESIDAD\n");
    }
    

    return 0;
}