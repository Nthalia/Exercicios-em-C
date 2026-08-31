#include <stdio.h>
#include <string.h>

int main() {
    int dia;
    char turno;
    float cargaHoraria;
    char disciplina1[80], professor1[40];
    char disciplina2[80], professor2[40];

    printf("===== CONSULTA DE AULAS - ADSIS2S-N-B =====\n");
    printf("Digite o dia da semana (1-Segunda a 5-Sexta): ");
    scanf("%d", &dia);

  
    switch (dia) {
        case 1:
            strcpy(disciplina1, "Linguagem e Tecnicas de Programacao");
            strcpy(professor1, "Eliel Borges");
            strcpy(disciplina2, "Algoritmos e Logica de Programacao");
            strcpy(professor2, "Givago Dias");
            cargaHoraria = 4.0;
            break;

        case 2:
            strcpy(disciplina1, "Engenharia de Software");
            strcpy(professor1, "Cassiano");
            strcpy(disciplina2, "Algoritmos e Logica de Programacao");
            strcpy(professor2, "Givago Dias");
            cargaHoraria = 4.0;
            break;

        case 3:
            strcpy(disciplina1, "Producao do Conhecimento Cientifico, Tecnologico e Disrupcao");
            strcpy(professor1, "Jane");
            strcpy(disciplina2, "Engenharia de Software");
            strcpy(professor2, "Cassiano");
            cargaHoraria = 4.0;
            break;

        case 4:
            strcpy(disciplina1, "Linguagem e Tecnicas de Programacao");
            strcpy(professor1, "Eliel Borges");
            strcpy(disciplina2, "Producao do Conhecimento Cientifico, Tecnologico e Disrupcao");
            strcpy(professor2, "Jane");
            cargaHoraria = 4.0;
            break;

        case 5:
            cargaHoraria = 0.0;
            break;

        default:
            printf("\nDia invalido! Digite um numero entre 1 e 5.\n");
            return 1;
    }

  
    if (cargaHoraria == 0.0) {
        printf("\nNao ha aulas cadastradas para sexta-feira.\n");
    } else {
        turno = 'M'; 

        printf("\n--- Aulas do dia ---\n");

        printf("\n1a aula (Manha)\n");
        printf("Disciplina: %s\n", disciplina1);
        printf("Professor: %s\n", professor1);

        turno = 'T'; 

        printf("\n2a aula (Tarde)\n");
        printf("Disciplina: %s\n", disciplina2);
        printf("Professor: %s\n", professor2);

        printf("\nCarga horaria total do dia: %.1f horas\n", cargaHoraria);
    }

    return 0;
}
