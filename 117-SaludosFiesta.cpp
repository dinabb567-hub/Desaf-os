#include <iostream>
#include <string>


int main() {

     int gente;
     std::cin >> gente;

     std::string nombre;

     while (gente > 0) {
          std::getline(std::cin >> std::ws, nombre);
          std::cout << "Hola, " << nombre.substr(4) << "." << '\n';
          gente--;
          
     }
}
