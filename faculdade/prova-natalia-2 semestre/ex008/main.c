#include <stdio.h>

#define NUM_SALAS 3
#define NUM_TURMAS 4

void imprimirGrade(int grade[NUM_SALAS][NUM_TURMAS]) {
    printf("\nGrade de Loca��o de Salas de Aula:\n\n");

    // Cabe�alho da tabela
    printf("   ");
    for (int turma = 0; turma < NUM_TURMAS; turma++) {
        printf("Turma %d ", turma + 1);
    }
    printf("\n");

    // Imprime a grade
    for (int sala = 0; sala < NUM_SALAS; sala++) {
        printf("Sala %d ", sala + 1);
        for (int turma = 0; turma < NUM_TURMAS; turma++) {
            printf("   %d    ", grade[sala][turma]);
        }
        printf("\n");
    }
}

int main() {
    int gradeLocacao[NUM_SALAS][NUM_TURMAS] = {{0}}; // Inicializa a grade com zeros

    int sala, turma;

    while (1) {
        // Solicita ao usu�rio que escolha uma sala e turma para loca��o
        printf("\nDigite o n�mero da Sala (1 a %d, 0 para sair): ", NUM_SALAS);
        scanf("%d", &sala);

        // Verifica se o usu�rio deseja sair do programa
        if (sala == 0) {
            printf("Programa encerrado.\n");
            break;
        }

        // Valida a entrada da sala
        if (sala < 1 || sala > NUM_SALAS) {
            printf("Sala inv�lida. Tente novamente.\n");
            continue;
        }

        printf("Digite o n�mero da Turma (1 a %d): ", NUM_TURMAS);
        scanf("%d", &turma);

        // Valida a entrada da turma
        if (turma < 1 || turma > NUM_TURMAS) {
            printf("Turma inv�lida. Tente novamente.\n");
            continue;
        }

        // Verifica se a sala j� est� ocupada para a turma escolhida
        if (gradeLocacao[sala - 1][turma - 1] == 1) {
            printf("Conflito de hor�rio. Sala j� ocupada para a Turma %d.\n", turma);
        } else {
            // Loca a sala para a turma
            gradeLocacao[sala - 1][turma - 1] = 1;
            printf("Turma %d alocada na Sala %d com sucesso!\n", turma, sala);
        }

        // Imprime a grade atualizada
        imprimirGrade(gradeLocacao);
    }

    return 0;
}
