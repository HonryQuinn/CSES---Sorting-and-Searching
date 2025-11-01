#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main(){
    int n, m;  // n tickets, m clientes
    cin >> n >> m;
    
    multiset<int> tickets;  // Usar multiset para mantener tickets ordenados
                            // y poder eliminarlos fácilmente
    
    for(int i = 0; i < n; i++){
        int precio;
        cin >> precio;
        tickets.insert(precio);
    }
    
    for(int i = 0; i < m; i++){
        int max_price;
        cin >> max_price;
        
        // Buscar el ticket más caro que no exceda max_price
        auto it = tickets.upper_bound(max_price);
        
        if(it == tickets.begin()){
            // No hay tickets que pueda comprar
            cout << -1 << endl;
        } else {
            // Retroceder uno para obtener el más cercano
            --it;
            cout << *it << endl;
            tickets.erase(it);  // Eliminar el ticket vendido
        }
    }
    
    return 0;
}