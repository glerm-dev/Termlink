#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void loading();

int main()
{
    system("COLOR A");
    int r, aprox = 0, trys = 4, ten = 4;
    char senha[4], acess_word[5];
    char *words[]={"MAIN","FOOD","FORK","BALL","NOSE"};
    char *words2[]={"HAND","BABY","GIRL","MILK","COLA"};
    srand(time(0));

    loading();

    printf("Bem-vindo ao Termlink das Indústrias Vault-Tec (TM)\n");
    printf("Senha necessária");
    printf("\n\nTentativas: \xDB \xDB \xDB \xDB");
    printf("\n");
    // Imprime uma palavra aleatória em cada linha;
    for(int c = 0; c < 4; c++){
        r = rand()%5;
        printf("\n0x4FO ´~[//-%s]´~; 0x52T /.~´],!'-%s[", words[r],words2[r]);
        r = rand()%5;
        printf("\n0x503 ´~%s//-][´~; 0x5UI /.~´%s,!'-][", words[r],words2[r]);
    }

    printf("\n\n");
    //
    r = rand()%4;
    strcpy(acess_word, words[r]);

    do{
        printf("\nTentativas: ");
        for(int i = 0; i < ten; i++){
            printf("\xDB ");
        }
        printf("\n");
        printf("Senha: ");
        scanf("%s", senha);
    // Conta a quantidade de letras semelhantes entre a palavra digitada e a senha;
        for(int i = 0; i < 4; i++){
            if(senha[i] == acess_word[i]){
                aprox++;
            }
        }

        if(strcmp(senha, acess_word) == 0){
            printf("Acesso garantido");
            printf("\n");
            return 0;
        }else {
            printf("\n");
            printf("Senha incorreta\n");
            printf("Aproximação: %d\n", aprox);
            ten--;
        }
        aprox = 0;
        trys--;
    }while(trys > 0);

    printf("\n\n");
    printf("Terminal bloqueado temporariamente");
}

void loading(){
    printf("Loading...\n");
    sleep(5);
    system("cls");
}
