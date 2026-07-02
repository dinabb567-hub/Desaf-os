#include <iostream>

void holap(int holas) {

     while (holas > 0) {
          std::cout << "Hola mundo." << '\n';
          holas--;
     }
}

int main() {

     std::ios_base::sync_with_stdio(false);
     std::cin.tie(NULL);

     int holas;
     std::cin >> holas;

     holap(holas);     

   return 0;
}
