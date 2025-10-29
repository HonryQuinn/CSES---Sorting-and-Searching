#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    
    vector<int> wish(n);
    vector<int> leng(m);
    
    for(int i = 0; i < n; i++) {
        cin >> wish[i];
    }
    
    for(int i = 0; i < m; i++) {
        cin >> leng[i];
    }
    
    sort(wish.begin(), wish.end());
    sort(leng.begin(), leng.end());
    
    int ocupados = 0;
    int j = 0;  
    
    for(int i = 0; i < n; i++) {
        while(j < m && leng[j] < wish[i] - k) {
            j++;  
        }
        
        if(j < m && leng[j] <= wish[i] + k) {
            ocupados++;
            j++; 
        }
    }
    
    cout << ocupados << endl;
    
    return 0;
}