#include <iostream>


int main() {

     std::ios_base::sync_with_stdio(false);
     std::cin.tie(NULL);

     int toros;
     int velocidad;

     while(std::cin >> toros) {

         int max = 0;

         for(int i = 0; i < toros; i++) {
         std::cin >> velocidad;
         if(velocidad > max) {
                max = velocidad;
         } 
     }
          std::cout << max << '\n';
}

   return 0;
}
