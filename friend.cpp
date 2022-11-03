#include<iostream>

using namespace std;

class cube{
    public:
    int max;
    
    cube(int n){
        max=n;
    }
    
    friend void printcubes(cube);
    
};

void printcubes(cube o1){
    for(int i=1;i<o1.max+1;i++){
        cout<<i*i*i<<endl;
    }
}

int main(){
    
    int n;
    
    cin>>n;
    
    cube c1(n);
    printcubes(c1);
    return 0;
}
