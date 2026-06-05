#include<iostream>
using namespace std;
class Solution{
    public:
        void print(int n){
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    cout<<"*"<<" ";
                }
                cout<<endl;
            }
        }
};

int main(){
    Solution s1;
    s1.print(5);

    return 0;
}