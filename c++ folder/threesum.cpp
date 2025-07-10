#include <iostream>
using namespace std;
#include <vector>

int main(){
    vector <int> nums = {3,5,6,8,7};
    int target = 16;
    
    int n = nums.size();
    for(int i = 0; i < n - 2; i++){
        for(int j = i + 1; j < n - 1; j++){
            for(int k = j + 1; k < n; k++){
                if(nums[i] + nums[j] + nums[k] == target){
                    cout << "Triplet found: " << nums[i] << ", " << nums[j] << ", " << nums[k] << endl;
                    return 0;
                }
            }
        }
    }
    // else{
    //                 cout << "No triplet found for: " << nums[i] << ", " << nums[j] << ", " << nums[k] << endl;
    //             }
    return 0;
}