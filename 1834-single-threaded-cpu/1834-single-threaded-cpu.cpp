class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {
        vector<int> temp;
        priority_queue<pair<long long,int>, vector<pair<long long,int>>, greater<pair<long long, int>>> pq;
        int n = tasks.size();
        for(int i=0;i<n;i++){
            tasks[i].push_back(i);
        }
        sort(tasks.begin(),tasks.end());
        long long t = tasks[0][0];
        int i =0;
        while(!pq.empty()||i<n){
            while(i<n && t>=tasks[i][0]){
                pq.push({tasks[i][1],tasks[i][2]});
                i++;
            }
            if(!pq.empty()){
                t+=pq.top().first;
                temp.push_back(pq.top().second);
                pq.pop();
            }
            else{
                t = tasks[i][0];
            }
        }
        return temp;
    }
};