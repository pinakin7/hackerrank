#include <cmath>
#include <cstdio>
#include <vector>
#include <list>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int n;
    int q;
    cin>>n>>q;
    vector<int> x[n];
    for(int i = 0; i < n; i++){
        int k;
        cin>>k;
        int l;
        for(int j = 0; j < k; j++){
            cin>>l;
            x[i].push_back(l);
        }
    }
    
    while(q--){
        int i,j;
        cin>>i>>j;
        cout<<x[i][j]<<endl;
    }
    
    return 0;
}
