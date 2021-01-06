class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int ar[1001]={0};
        int c=0;
        for(auto x:arr)
        {
            ar[x]=1;
        }
        int i;
        int e=0;
        for( i=1;i<=1000;i++)
        {
            if(ar[i]==0)
            {
                c++;
            }
            if(c==k)
            {
                e=1;
                return i;
               // break;
            }
        }
        int a;
        if(e==0)
        {
             a=1000;
            while(c!=k)
            {
                a++;
                c++;
            }
        }
        return a;
    }
};
