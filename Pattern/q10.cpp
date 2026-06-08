#include<iostream>
using namespace std;
class Solution{
    public:
        void print(int n){
            int j_index = (n*2)-1;
            for(int i=0; i<n; i++){
                for(int j=0; j<j_index;j++){
                    if(j < n-1)
                        cout<<" "<<" ";
                    else if(j<=i+(n-1))
                        cout<<"*"<<" ";
                    else
                        cout<<" "<<" ";
                }
                cout<<endl;
            }
            for(int i=1; i<n; i++){
                for(int j=0; j<j_index;j++){
                    if(j < n-1)
                        cout<<" "<<" ";
                    else if(j <= (j_index-1)-i)
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
    s1.print(4);

    return 0;
}