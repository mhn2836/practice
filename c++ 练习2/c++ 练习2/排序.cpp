#include<iostream>
#include<vector>

using namespace std;

void quick_sort(vector<int>& nums, int left, int right){
    if(left < right){
        int low = left;int high = right;int target = nums[low];
        
        while(low < high){
            while(low < high && nums[high] >= target){
                high--;
            }
            if(low < high) nums[low++] = nums[high];
            
            while(low < high && nums[low] <= target){
                low++;
            }
            if(low < high) nums[high--] = nums[low];
        }
        nums[low] = target;
        
        quick_sort(nums, left, low - 1);
        quick_sort(nums, low + 1, right);
    }
}

void merge_sort(vector<int>& nums, int left, int right){
    if(left < right){
        int mid = (left + right) / 2;
        merge_sort(nums, left, mid);
        merge_sort(nums, mid + 1, right);
    
        vector<int> temp(right - left + 1);
        int l = left;int r = mid + 1;
        for(int i = 0; i < temp.size(); i++){
            if(r > right || nums[l] <= nums[r]){
                if(nums[l] == -1) cout<<"l = "<<l<<endl;
                temp[i] = nums[l++];
            }
            else if(l > mid || nums[r] <= nums[l]){
                if(nums[r] == -1) cout<<"r = "<<r<<endl;
                temp[i] = nums[r++];
            }
        }
        
        for(int& num:temp){cout<<num<<' ';}cout<<endl;
        
        for(int i = 0; i < temp.size();i++){
            nums[i + left] = temp[i];
        }
    }
    
    
}

void max_merge(vector<int>& nums, int start, int end){
    int father = start;
    int son = 2 * father + 1;
    
    while(son <= end){
        if(son + 1 <= end) son = nums[son] >= nums[son + 1] ? son : son + 1;
        
        if(nums[son] <= nums[father]) break;
        else {
            swap(nums[son], nums[father]);
            father = son;
            son = 2 * father + 1;
        }
    }
}

void heap_sort(vector<int>& nums){
    int k = 3;
    
    for(int i = nums.size() / 2 - 1; i >= 0; i--){
        max_merge(nums, i, nums.size() - 1);
    }
    
    for(int i = nums.size() - 1; i> 0; i--){
        swap(nums[0], nums[i]);
        max_merge(nums, 0, i - 1);
        if(k-- == 1) cout<<nums[i]<<endl;
    }
}

int main(){
    vector<int> nums = {5,7,8,-1,1,2,6,-2,-1,10};
    
    //quick_sort(nums, 0, nums.size() - 1);
    //merge_sort(nums, 0, nums.size() - 1);
    heap_sort(nums);
    
    for(int& num:nums){cout<<num<<' ';}
    
    return 0;
}