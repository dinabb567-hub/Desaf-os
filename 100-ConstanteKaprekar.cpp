#include <iostream>

void posiciones(int num, int digitos[4]) {

     digitos[3] = num % 10;  
     digitos[2] = (num / 10) % 10;
     digitos[1] = (num / 100) % 10;   
     digitos[0] = num / 1000;
}

void ordenar (int digitos[4]) {

     int aux;

     for(int i = 0; i < 3; i++) {
          for(int j = 0; j < 3 - i; j++) {
               if(digitos[j] > digitos[j+1]) {
                    aux = digitos[j];
                    digitos[j] = digitos[j+1];
                    digitos[j+1] = aux;
               }
          }          
     }
}

int asc (int digitos[4]) {
     
     return (digitos[0] * 1000) + (digitos[1] * 100) + (digitos[2] * 10) + digitos[3];
}

int des (int digitos[4]) {
     
     return (digitos[3] * 1000) + (digitos[2] * 100) + (digitos[1] * 10) + digitos[0];
}


int main() {

     std::ios_base::sync_with_stdio(false);
     std::cin.tie(NULL);

     int casos;
     if(std::cin >> casos) {

     while(casos--) {

               int num;
               std::cin >> num;

               int iteraciones = 0;
               int digitos[4];

               while(num != 6174 && iteraciones < 7) {
               posiciones(num, digitos);
               ordenar(digitos);

               int menor = asc(digitos);
               int mayor = des(digitos);

               int resultado = mayor - menor;

               num = resultado;
               iteraciones++;
               }
                if (num == 0) {
                    std::cout << 8 << '\n';
               } else {
                    std::cout << iteraciones << '\n';
          }   
     }

}
   return 0;
}
