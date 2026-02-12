#include <stdio.h>

int main(){
    float temperatura, umidade;
    unsigned int estoque, estoqueMinimo = 1000;

    printf("Entre com a temperatura: \n");
    scanf("%f", &temperatura);

    printf("Entre com a umidade: \n");
    scanf("%f", &umidade);

    printf("Entre com a estoque: \n");
    scanf("%u", &estoque);

    if (temperatura >= 30.0)
    {
        printf("A temperatura está alta \n");
    }else{
        printf("A temperatura está dentro dos parâmentros \n");
    }
    
    if (umidade > 50)
    {
        printf("A umidade está elevada \n");
    }else{
        printf("A umidade está dentro dos parâmentros \n");
    }

    if (estoque < estoqueMinimo)
    {
        printf("Estoque está abaixo do mínimo\n");
    }else {
        printf("Estoque normal \n");
    }
    

    

    return 0;
}