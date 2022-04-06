#include "Aula.hpp"

void Aula::setM(int m[N][N]){
    this->m[N][N] = m[N][N];
}

int Aula::getM(){
    return m[N][N];
}

void Aula::setSoma(int soma){
    this->soma = soma;
}
int Aula::getSoma(){
    return soma;
}

void Aula::algoritmo(){

    int i=0, j =0;

    this->soma = 0;

    for( i = 0; i < N; i ++){
        for( j = 0; j < N; j++){
            m[i][j] = rand() %100;
        }
    }
    i = 0;
    j = 0;

    soma+=m[i][j];

    while(i < N-1 || j < N-1){
        
        if(j == 0 && i >= 0 && i <= N-1){

            if(i == N-1){
                m[i][j] = -1;
                j++;

            }else if(m[i][j+1] > m[i+1][j]){
                m[i][j] = -1;
                j++;
            
            }else{
                
                m[i][j] = -1;
                i++;

            }
        }else if(i == N -1 && j >= 0 && j <= N -1){
            
            m[i][j] = -1;
            j++;
           
        }else if(i == 0 && j > 0 && j < N-1){
                
            if(i == N-1 && i >= 0 && i <= N-1){
                
                m[i][j] = -1;
                j++;

            }else if(m[i][j-1] > m[i+1][j]){
                    
                    m[i][j] = -1;
                    j--;

            }else{
                
                m[i][j] = -1;
                i++;

            }
        }else if(j > 0 && j < N-1 && i > 0 && i < N-1){
                
            if(m[i][j+1] > m[i+1][j] && m[i][j+1] > m[i][j-1]){
                    
                m[i][j] = -1;
                j++;

            }else if(m[i+1][j] > m[i][j+1] && m[i+1][j] > m[i][j-1]){
                
                m[i][j] = -1;
                i++;

            }else{

                m[i][j] = -1;
                j--;
            }
        }else if(i >= 0 && i <= N-1 && j == N-1){
            
            if(m[i][j-1] > m[i+1][j]){
                
                m[i][j-1] = -1;
                
                j--;
            }else{
                 
                m[i+1][j] = -1;
                i--;
            }
        }
        soma+=m[i][j];
        
    }
    
}

void Aula::imprimir(){
    
    cout << "\nCaminho percorrido\n\n";

    for(int i = 0; i < N; i ++){
        for(int j = 0; j < N; j ++){
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\nSoma dos maiores valores da matriz: " << soma << "\n\n";

}