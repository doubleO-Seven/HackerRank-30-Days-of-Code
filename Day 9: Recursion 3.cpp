#include <iostream>
using namespace std;
int factorial(int total,int num) {
    if (num!=1){
        return factorial(total*num,num-1);
    }
    return total;
}
int main(){
    int num;
    cin>>num;
    cout<<factorial(num,num-1)<<endl;
    return 0;
}
