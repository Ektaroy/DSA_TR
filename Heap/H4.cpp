// K closest Numbers
#include<priority_queue>
vector<int> kclosest(vector<int> arr,int k)
{
    vector<int> ans;
    priority_queue<pair<int,int>> maxh;

    for(int i=0;i<arr.size();i++)
    {
        maxh.push(abs(k-arr[i]),arr[i]);
        if(maxh.size()>k)
        maxh.pop();
    }

    while(!maxh.empty())
    {
        ans.push(maxh.top().second);
        maxh.pop();
    }
    return ans;
}