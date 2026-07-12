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

        int total = 2;
        for (int l = 0; l + 1 < M; l++) {
            if ((hab[l].first == hab[l + 1].first) ||
                (hab[l].first == hab[l + 1].second) ||
                (hab[l].second == hab[l + 1].first) ||
                (hab[l].second == hab[l + 1].second)) {
                total++;
            }
        }
        cout << total;
        if (casos) cout << '\n';
    }     

    return 0;
}