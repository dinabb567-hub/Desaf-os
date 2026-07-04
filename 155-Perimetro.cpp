#include <iostream>


int main() {

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int x;
    int y;
    int perimetro;
    
    while(std::cin >> x >> y) {

       if (x < 0 || y < 0) {   
            break;
            
        } else {
            perimetro = (2 * x) + (2 * y);
            std::cout << perimetro << std::endl;

        }
    }

   return 0;
}
