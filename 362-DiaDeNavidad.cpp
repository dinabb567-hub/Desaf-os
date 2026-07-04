#include <iostream>



int main() {

     std::ios_base::sync_with_stdio(false);
     std::cin.tie(NULL);

     int fecha;
     std::cin >> fecha;

     int dia, mes;

     while(fecha > 0) {

          std::cin >> dia >> mes;

          if(dia == 25 && mes == 12) {
               std::cout << "SI\n";
          } else {
               std::cout << "NO\n";
          }
          fecha--;

     }

   return 0;
}
