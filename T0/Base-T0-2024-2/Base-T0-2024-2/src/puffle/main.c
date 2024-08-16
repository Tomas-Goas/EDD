#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Retorna true si ambos strings son iguales */
static bool string_equals(char *string1, char *string2) {
  return !strcmp(string1, string2);
}

static bool check_arguments(int argc, char **argv) {
  if (argc != 3) {
    printf("Modo de uso: %s INPUT OUTPUT\n", argv[0]);
    printf("Donde:\n");
    printf("\tINPUT es la ruta del archivo de input\n");
    printf("\tOUTPUT es la ruta del archivo de output\n");
    exit(1);
  }
  return true;
}

int main(int argc, char **argv) {
  check_arguments(argc, argv);

  FILE *input_file = fopen(argv[1], "r");
  FILE *output_file = fopen(argv[2], "w");

  int K; // Capacidad de la tienda
  int P; // Número máximo de puffles
  int E; // Número de eventos (No considera los multiples inputs del evento ENTER)

  int result;
  result = fscanf(input_file, "%d", &K);
  if (result != 1) {
    printf("Error reading store capacity");
    return 1;
  }
  result = fscanf(input_file, "%d", &P);
  if (result != 1) {
    printf("Error reading maximum number of puffles");
    return 1;
  }
  result = fscanf(input_file, "%d", &E);
  if (result != 1) {
    printf("Error reading number of events");
    return 1;
  }


  /* Construcción de las estructuras */
    /* COMPLETAR */
    
  /* Eventos */
  char command[32];
  for (int i = 0; i < E; i++)
  {
    fscanf(input_file, "%s", command);
    if (string_equals(command, "ENTER")){
      int id;
      int N;
      fscanf(input_file, "%d %d", &id, &N);
      printf("Penguin %d with %d Puffles:\n", id, N);
      /* COMPLETAR */
      for (int j = 0; j < N; j++)
      {
        int puffle_id;
        char color;
        fscanf(input_file, "%d %s", &puffle_id, &color);
        printf("\tPuffle %d color %s\n", puffle_id, &color);
        /* COMPLETAR */
      }
    }
    else {
      /* COMPLETAR */
    }
  }
  

/* Cerramos los archivos */
  fclose(input_file);
  fclose(output_file);

/* Liberamos memoria */
    /* COMPLETAR */

  return 0;
}