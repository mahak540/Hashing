 vector<vector<int>> findTriplets(vector<int> &arr) {
        // Code here
        unordered_map<int,vector<int>>map;
        vector<vector<int>>ans;
        int n=arr.size();
        for(int j=0;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                int val=-1*(arr[j]+arr[k]);
                if(map.find(val)!=map.end())
                {
                    for(auto it:map[val])
                    {
                        ans.push_back({it,j,k});
                    }
                }
            }
            map[arr[j]].push_back(j);
        }
        return ans;
    }
