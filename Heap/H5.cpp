// Top k frequent numbers
#include<priority_queue>
#include<unordered_map>
void topkfreq(vector<int>arr,int k)
{
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minh;
    unordered_map<int,int> m;

    for(int i=0;i<arr.size();i++)
    {
        m[arr[i]]++;
    }

    for(auto i=m.begin();i!=m.end();i++)
    {
        minh.push({i->second,i->first});

        if(minh.size()>k)
        minh.pop();
    }

    while(!minh.empty())
    {
        cout<<minh.top().second<<" ";
        minh.pop();
    }
}