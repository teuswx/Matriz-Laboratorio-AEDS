#include <iostream>
#include <math.h>

#define N 4
using namespace std;

class Aula{
    private:
        int m[N][N];
        int soma;
    public:

        void setM(int m[N][N]);
        int getM();

        void setSoma(int soma);
        int getSoma();

        void algoritmo();
        void imprimir();
       
};