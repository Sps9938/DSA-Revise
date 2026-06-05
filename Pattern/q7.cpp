#include<iostream>
using namespace std;
class Solution{
    public:
        void print(int n){
            int x = n;
            int j_index = (n-1)*2;
            for(int i=0; i<n; i++){
                x--;
                for(int j=0; j<j_index+1;j++){
                    if(j>=x && j<=i+(n-1))
                        cout<<"*"<<" ";
                    else
                        cout<<" "<<" ";
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