// k closest points to origin
#include<priority_queue>
void kclosest(vector<vector<int>> arr,int k)
{

priority_queue<pair<int,pair<int,int>>> maxh;
for(int i=0;i<arr.size();i++)
{
    maxh.push({arr[i][0]* arr[i][0]+arr[i][1]*arr[i][1],{arr[i][0],arr[i][1]}})
    if(maxh.size()>k)
    maxh.pop();
}

while(!maxh.empty())
{
    pair<int,int> p=maxh.top().second;
    cout<<p.first<<" "<<p.second<<endl;
    maxh.pop();
}
}