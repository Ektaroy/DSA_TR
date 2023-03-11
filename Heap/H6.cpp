// Frequency Sort
#include<priority_queue>
#include<unordered_map>
vector<int> freqSort(vector<int> arr,int k)
{
    piority_queue<pair<int,int>> maxh;
    vector<int>ans;
    unordered_map<int,int> m;

    for(int i=0;i<arr.size();i++)
    m[arr[i]]++;

    for(auto i=m.begin();i!=m.end();i++)
    {
        maxh.push({i->second(),i->first()});
    } 

    while(!maxh.empty())
    {
        int freq=maxh.top().first();
        int ele=maxh.top().second();
        for(int i=0;i<freq;i++)
        {
            ans.push_back(ele);
        }
        maxh.pop();
    }
    return ans;
}