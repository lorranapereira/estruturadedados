int main () {
    int x = 10;
    int y = 5;
    int z = 4;

    int *p;

    p = &x;
    *p = *p + 2; //incrementar o conteudo do ponteiro

    printf("\n Valor x = %d, esta na posicao = %x",x,&x);
    printf("\n Valor x = %d, esta na posicao = %x",*p,p);

    p = &y;
    *p = *p + 2;
    printf("\n Valor y = %d, esta na posicao = %x",*p,p);

    p = &z;
    *p = *p + 2;
    printf("\n Valor z = %d, esta na posicao = %x",*p,p);

    
}