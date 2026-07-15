#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main() {

    //Casos, N = habitantes, M= pares

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int casos;
    cin >> casos;

    while(casos--) {

        int N, M;

        cin >> N >> M;

        vector<pair<int,int>> hab;
        hab.reserve(M);

        for (int i = 0; i < M; i++) {
            int a, b;
            cin >> a >> b;
            hab.emplace_back(a, b); //para añadir estos elementos al final de la lista
        }

        int max_grupo = 0;
        vector<bool> borrados(M, false);


        for(int l = 0; l < M; l++) {

            if(borrados[l]) continue;

            int total = 2;
            borrados[l] = true;

            for (int j = 0; j < M; j++) {
                if (borrados[j]) continue;

                 if ((hab[l].first == hab[j].first) ||
                     (hab[l].first == hab[j].second) ||
                     (hab[l].second == hab[j].first) ||
                     (hab[l].second == hab[j].second)) {

                     total++;
                     borrados[j] = true;

                     j = -1;
                 }
              }

              if (total > max_grupo) {
                max_grupo = total;
              }
            }
                if (M == 0) cout << 1;
                else cout << max_grupo;

                if (casos) cout << '\n';
    }     

    return 0;
}