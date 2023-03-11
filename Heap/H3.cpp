// Sort a k sorted array
#include<priority_queue>
vector<int> sortksortedarray(vector<int> arr,int k)
{
    vector<int> ans;
    priority_queue<int> minh;

    for(int i=0;i<arr.size();i++)
    {
        minh.push(arr[i]);
        if(minh.size()>k)
        {
            ans.push(minh.top());
            minh.pop();
        }
    }
    while(!minh.empty())
    {
        ans.push(minh.top());
        minh.pop();
    }
    return ans;
}