// // Given a list of activities with their starting time and finishing time. Your goal is to select
// maximum number of activities that can be performed by a single person such that selected
// activities must be non-conflicting. Any activity is said to be non-conflicting if starting time of an
// activity is greater than or equal to the finishing time of the other activity. Assume that a person
// can only work on a single activity at a time

#include<iostream>
#include<vector>
using namespace std;
vector<int> sol;
int selection(vector<int> s,vector<int> t){
    int count=1;
    sol.push_back(0);
    int i=0;
    for(int j=0;j<t.size();j++){
        if(t[i]<=s[j]){
        sol.push_back(j);
        i=j;
        count++;
        }      
    }
    return count;
}
int main(){
    vector<int> s,t;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        s.push_back(temp);
    }
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        t.push_back(temp);
    }
    cout<<selection(s,t)<<"\n";
    for(int i=0;i<sol.size();i++)
        cout<<sol[i]<<" ";
}
