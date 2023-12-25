#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


int main() {
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;
    for(int i=n-1;i>-n;i--){
        int x=n-abs(i)+n;
        int y=abs(i)+n;
        int s=abs(i);
        for(int j=0;j<x-n-1;j++){
            cout << " ";
        }
        if(x%2==0){
            for(int j=2*y+1;j>0;j--){
                cout << ".";
            }
        }
        else {
          for(int j=2*y+1;j>0;j--){
              if(j%2==0){
                cout << ".";
              }
              else {
                  cout << 2*(s/2+1);
              }
            }

        }
        cout << '\n';
    }
    return 0;
}
