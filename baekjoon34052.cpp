#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    for(int i=0; i<4; i++){
        cin >> n;
        sum += n;
    }
    cout << (sum <= 1500 ? "Yes" : "No");
    
    return 0;
}