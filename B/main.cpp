#include <iostream>
using namespace std;

int main(){
    int X, Y, L, R, A, B;
    int x,y,l,r,a,b;
    cin >> x >> y >> l >> r >> a >> b;

    if(x >= 1){
        X = x;
    }
    if(y <= 1000){
        Y = y;
    }
    if(l >= 1){
        L = l;
    }
    if(R <= 23){
        R = r;
    }
    if(a >= 1){
        A = a;
    }
    if(b <= 23){
        B = b;
    }

    if(A <= L && B <= L){
        cout << (Y * (B-A));
        return 0;
    }
    if(A <= L && (B >= L && B <=R)){
       cout << ((L-A) * Y + (B-L) * X);
       return 0;
    }
    if(A <= L && B >= R){
        cout << ((L-A) * Y + (R-L) * X + (B-R) * Y); 
        return 0;
    }
    if((A >= L && A <= R) && B <= R){
        cout << (B-A) * X;
        return 0;
    }
    if((A >= L && A <= R) && B >= R){
        cout << ((R-A) * X + (B-R) * Y);
        return 0;
    }
    if(A >= R && B >= R){
        cout << ((B-A) * Y);
        return 0;

    }

    return 0;
}