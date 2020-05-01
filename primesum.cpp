#include <iostream>
using namespace std;
int primearr[100],length;
int primecheck(int x){
    int c=0;
    for (int i = 2; i < x; ++i) {
        if(x%i==0 ){
            c++;
        }
    }
    return c;
}
void primelist(int x){
    int j=0;
    for (int i = 2; i < x; ++i) {
        if(primecheck(i)==0){
            primearr[j]=i;
            length++;
            j++;
        }
    }
}
int main() {
    int n;
    cout<<"Enter a positive integer\n";
    cin>>n;
    primelist(n);
    for (int j = 0; j < length; ++j) {
        for (int k = j; k < length ; ++k) {
            if(primearr[j]+primearr[k]==n){
                cout<<n<<"="<<primearr[j]<<"+"<<primearr[k]<<endl;
            }
        }
    }
    return 0;

}
