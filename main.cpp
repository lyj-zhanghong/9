#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    if(n<0||(n%10==0&&n!=0))
        cout<<"false";
    int reveal = 0;
    int np= n;
    if(n>=reveal)
    {
        reveal = reveal * 10 + n%10;
        n = n/10;
    }
    if(np==reveal)
        cout<<"ture";
    else
        cout<<"false";
    return 0;
}
