#include <iostream>
using namespace std;

int main(){

    int A;
    int B;
    int a;
    int b;

    cin >> a >> b;
    A = (a >= 1) ? a : 0;
    B = (b <= 1000) ? b : 0;

    if(A > B * 2/3){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}

