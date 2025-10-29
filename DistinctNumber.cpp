#include <iostream>
#include <set>

using namespace std;

int main (){
    int N;
    cin >> N;

    set<int> distinct;

    for(int i = 0; i < N; i++) {
        int num;
        cin >> num;
        distinct.insert(num);
    }

    cout << distinct.size() << endl;

    return 0;
}