class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> ans;
        int n = arr.size();
        int j = 0;
        while(j+k<n){
            if(x-arr[j]>arr[j+k]-x){
                j++;
            }
            else{
                break;
            }
        }
        return vector<int> (arr.begin()+j, arr.begin()+j+k);
    }
};




// class Solution {
// public:
//     vector<int> findClosestElements(vector<int>& arr, int k, int x) {
//         vector<int> ans;
//         int n = arr.size();
//         int j = 0;
//         for(int i=0;i<k;i++){
//             ans.push_back(arr[i]);
//         }
//         for(int i =k;i<n;i++){
//                 if(abs(x-arr[i])<=abs(x-arr[j])){
//                     ans.push_back(arr[i]);
//                     ans.pop_back();
//                     j++;
//             }
//             else{
//                 return ans;
//             }
//         }
//         return ans;
//     }
// };