#include <stdio.h>

void imprimir_pares(int n) {
    if (n < 0)
        return;
    
    if (n >= 2)
        imprimir_pares(n - 2);
    
    if (n % 2 == 0)
        printf("%d ", n);
}

int main() {
    int n;
    
    printf("Digite um numero: ");
    scanf("%d", &n);

    if (n % 2 != 0)
        n--;
        
    printf("Numeros pares de 0 ate %d: ", n);
    imprimir_pares(n);
    printf("\n");
    
    return 0;
}
