#include <stdio.h>
#include <string.h>

int main() {
    // Declarar e inicializar una lista de números enteros
    char Preset_User[3][20] = {"Daniel", "Juan", "Danna"};
    int Preset_Key[3] = {34523, 12321, 12345};

    // Valor a buscar, ingresado por el usuario
    char User[20];
    int Key;

    // Solicitar al usuario que ingrese el valor a buscar
    printf("Ingresa el Usuario: ");
    scanf("%s", User);

    printf("Ingresa la clave: ");
    scanf("%d", &Key);

    int Verificado = 0;

    int encontrado = 0;
    for (int i = 0; i < 3; i++) {
        if (strcmp(User, Preset_User[i]) == 0 && Key == Preset_Key[i]) {
            // Usuario y clave encontrados
            encontrado = 1;
            break; // Puedes salir del bucle ya que encontraste una coincidencia
        }
    }

    if (encontrado) {
        printf("Usuario y clave verificados.\n");
    } else {
        printf("Usuario o clave incorrectos.\n");
    }

    return 0;
}
