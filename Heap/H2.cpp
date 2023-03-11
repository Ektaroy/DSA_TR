// Return k largest element in an array
#include<priority_queue> 
void klarPrint(vector<int> arr,int k)
{
    priority_queue<int> minh;
    for(int i=0;i<arr.size();i++)
    {
        minh.push(arr[i]);
        if(minh.size()>k)
        minh.pop();
    }
    for(int i=0;i<minh.size();k++)
    {
        cout<<minh.top()<<" ";
        minh.pop();
    }
}