class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        // code here
        int res=0;
        unordered_map<int, int>mp;
        int prefxor=0;
        for(int val: arr)
        {
            prefxor^=val;
            res=res+mp[prefxor^k];
            if(prefxor==k)
            res++;
            
            mp[prefxor]++;
            
            
        }
        return res;
    }
};
