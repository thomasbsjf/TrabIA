#ifndef MATRIZ_H
#define MATRIZ_H
#define X 4
#define Y 3


class Matriz
{
    public:
        Matriz();
        ~Matriz();

        int determinaId(int linha, int coluna);
        void imprime();

    protected:

    private:
        No* inicio;
        No* fim;
        int numLinhas;
        int numColunas;
};

#endif // MATRIZ_H
