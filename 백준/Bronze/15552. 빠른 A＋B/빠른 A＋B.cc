#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int N, a, b;
    cin >> N;
    for (int i = 0; i < N; i ++){
        cin >> a >> b;
        cout << a + b << '\n';
    }
    return 0;
    
}