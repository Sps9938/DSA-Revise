#include<iostream>
using namespace std;
class Solution{
    public:
        void print(int n){
            for(int i=0; i<n; i++){
                for(int j=0; j<=i; j++){
                    cout<<"*"<<" ";
                }
                cout<<endl;
            }
        }
};

int main(){
    Solution s1;
    // cout<<"Hello"<<endl;
    s1.print(4);

    return 0;
}