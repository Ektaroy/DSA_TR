// Sum of elements between k1th smallest and k2th smallest element
#include<priority_queue>
int ksmallest(vector<int >arr,int k){
    priority_queue<int> maxh;
    for(int i=0;i<arr.size();i++)
    {
        maxh.push(arr[i]);
        if(maxh.size()>k)
        maxh.pop();
    }

return maxh.top();
}

int k1andk2(vector<int> arr,int k1,int k2)
{
    int ans=0;
    int first=ksmallest(arr,k1);
    int second=ksmallest(arr,k2);

    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]>first && arr[i]<second)
            ans=ans+first+second;
    }
    return ans;
}