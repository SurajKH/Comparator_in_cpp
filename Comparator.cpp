#include<bits/stdc++.h>
using namespace std;

//Comparator in Cpp
//Implementation of Comp Function.

//We have Sorted the entries of Candidate Details Based on Number of Votes.


static bool comp(pair<string,int> v1,pair<string,int> v2)
{
    if(v1.second<=v2.second)
    {
        return true;
    }
    return false;
}

int main()
{
   
    //Sort the Users based on votes
    //Format:{person(string),number_of_votes(number)}.
    
    vector<pair<string,int>> votes;
    cout<<"Enter the number of Candidates:\n"<<endl;
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the Candidate Names and Associated number of Votes:\n";
        string name;
        int vote;
        cin>>name>>vote;
        votes.push_back({name,vote});
       // cout<<votes.first;
    }
    cout<<"Sorting Based on Candidate Votes:\n"<<endl;
    sort(votes.begin(),votes.end(),comp);
    for(auto it:votes)
    {
        cout<<"Candidate name: "<<it.first<<" "<<"Candidate votes: "<<it.second<<endl;
    }
    return 0;
}
