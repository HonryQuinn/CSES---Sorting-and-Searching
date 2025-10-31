#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    
    vector<int> peso(n);
    for(int i = 0; i < n; i++){
        cin >> peso[i];
    }
    
    sort(peso.begin(), peso.end());
    
    int left = 0;
    int right = n - 1;
    int gondolas = 0;

    while(left <= right){
        if(peso[left] + peso[right] <= x){
            left++;
            right--;
        } else {
            right--;
        }
        gondolas++;
    }
    
    cout << gondolas << endl;
    
    return 0;
}