#include <stdio.h>

int main(void) {


    int foo = 13;

    //Apuntador es una variable que guarda una direccion de memoria

    int *apuntador_de_enteros= 0;//Aqui * es declaracion de apuntador
    apuntador_de_enteros = &foo;//Signar a apuntador_de_enteros la direccion de "foo"

    printf("%p\n",apuntador_de_enteros);

    //operador de referencia*
    printf("%d\n",*apuntador_de_enteros);//Aqui imprimimos el valor que esta guardado en esa direccion

    printf("%lu\n",sizeof(apuntador_de_enteros));

    //Segundo experimento
    char una_letra = 'z';
    printf("%lu\n", sizeof(una_letra));

    char *ptr_de_entero= &una_letra;
    printf("%d\n",*ptr_de_entero);


    //Inicializar un arreglo
    int nombre_de_arreglo[10] = {4,5,6,};
    printf(("%d\n"),nombre_de_arreglo[0]);

    //Asignamos al apuntador la direccion de memoria del primer elemento del array
    int *mi_apuntador= &nombre_de_arreglo[0];
    //Aqui obtenemos el valor guarado en esa direccion de memoria
    printf("%d\n",*mi_apuntador);

    //Imprimir con for
    printf("Ejercicio for:\n");
    for (int i=0 ; i<10 ; i++){
        //printf("En la direccion: %p tenemos el valor:",(mi_apuntador+i));
        //printf("%d\n",*mi_apuntador+i);
        printf("%d\n",*mi_apuntador);
        mi_apuntador++;
    }

    return 0;
}


