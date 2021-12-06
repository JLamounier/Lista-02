#include <stdio.h>
/*Os alunos de uma turma com numAlunoS fizeram numProva provas. Leia cada uma das numProva 
provas feitas por cada um dos numAlunoS alunos. Imprima na tela: a média decada aluno, 
a média da turma e o percentual dos alunos que tiveram média maior ou igual a 80%.*/

int main(){

    int numProvas, numAlunos, numeracao, maximo, contador = 0;
    float mediaAluno, mediaTotal=0, percentual = 0, notas;

    printf("Digite a quantidade de provas: ");
    scanf("%i", &numProvas);
    printf("Digite a quantidade de alunos: ");
    scanf("%i", &numAlunos);
    printf("Qual a nota maxima das provas? ");
    scanf("%i", &maximo);

    for(int i=0; i<numAlunos; i++){
        mediaAluno = 0;
        for(int j=0; j<numProvas; j++){
            printf("Digite a nota %i do aluno %i: \n", j + 1, i + 1);
            scanf("%f", &notas);
            mediaAluno += notas;
        }
        mediaAluno /= numProvas;

        if(mediaAluno >= maximo*0.8)
        contador++;

        printf("A media do aluno %i foi de %.2f \n",i + 1, mediaAluno);
        mediaTotal += mediaAluno;
    }
    mediaTotal /= numAlunos;
    printf("A media da turma foi de %.2f",mediaTotal);

    percentual = (contador*100)/numAlunos;
    printf("\nO percentua de alunos que tiveram media maior que 80%% e de: %.2f%%", percentual);

    return 0;
}