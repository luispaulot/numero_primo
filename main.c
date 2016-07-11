#include <stdio.h>
#include <stdlib.h>

int calcula_primo(int x_){
    int i;
    int div = 0;
    while (x_ <= 0);
    for (i = 1; i <= x_; i++) {
        if (x_ % i == 0) {
            div++;
        }
    }

    if (div == 2){
        return 0;
    }
    else{
        return 1;
    }
}

int main() {
    int resposta = 0;
    int x;
    system("clear");
    printf("Digite um número inteiro e positivo: ");
    scanf("%d", &x);
    if (calcula_primo(x) == 0)
        printf("O número %d é primo!", x);
    else
        printf("O número %d não é primo!", x);

    return 0;
}

