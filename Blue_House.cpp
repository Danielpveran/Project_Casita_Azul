#include <stdio.h>

int main() {
    // Declarar e inicializar una lista de números enteros
    Char Preset_Usuerser[3][20] = {"Daniel","Juan","Danna",};
    int Preset_Key[3] = {34523,12321,12345};
    
    // Valor a buscar, ingresado por el usuario
    char User[20];
	int Key;
	
    // Solicitar al usuario que ingrese el valor a buscar
    printf("Ingresa el Usuario: ");
    scanf("%d", &User_Search);
    
    printf("Ingresa la clave: ");
    scanf("%d", &Key_Search);
    
    int Verificado = 0;
    
    int encontrado = 0;
    for (int i = 0; i < 3; i++) {
