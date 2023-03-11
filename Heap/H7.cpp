// Connect k Ropes to minimize the cost
#include<priority_queue>
int mincost(vector<int> arr)
{
    priority_queue<int> minh;
    for(int i=0;i<arr.size();i++)
    {
        maxh.push(arr[i]);
    }

    while(maxh.size>1){
        int first=maxh.top();
        maxh.pop();
        int second=maxh.top();
        maxh.pop();
        cost=cost+first+second;
        maxh.push(first+second);
    }
    return cost;
}