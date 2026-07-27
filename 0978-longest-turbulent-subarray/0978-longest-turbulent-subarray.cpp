class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        int n = arr.size();
        int i =0;
        int maxi = 1;
        while(i<n-1){
            if(arr[i]==arr[i+1]){
                i++;
                continue;
            }
            int j = i+1;
            while (j < n - 1 &&
                  ((arr[j - 1] < arr[j] && arr[j] > arr[j + 1]) ||
                   (arr[j - 1] > arr[j] && arr[j] < arr[j + 1]))) {
                j++;
            }
            maxi = max(maxi, j-i+1);
            i = j;
        }
        return maxi;
    }
};