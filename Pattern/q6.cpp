#include<iostream>
using namespace std;
class Solution{
    public:
        void print(int n){
            for(int i=n-1; i>=0; i--){
                for(int j=0; j<i+1; j++){
                    cout<<j+1<<" ";
                }
                cout<<endl;
            }
        }
};

int main(){
    Solution s1;
    s1.print(4);
// cout<<"Hello"<<endl;
    return 0;
}