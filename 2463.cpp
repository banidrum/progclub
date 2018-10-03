#include <bits/stdc++.h>
using namespace std;

const int MAX = 50000;

int cache[MAX];
int v[MAX];

int pd(int i){
    
    int a, b;

    if(i == v[i]){
        return 0;
    }

    a = v[i];
    b = v[i] + pd(i+1);

    return max(a, b);
}


int main(){

int n, sum;

memset(cache, -1, sizeof(cache));

sum = 0;

cin >> n;

//Fazer cache
for(int k=0; k<n; k++){
    cin >> v[k];
}
//Fazer função 

for(int i=0; i<n; i++){
        sum = max(sum, pd(i));
    }


}