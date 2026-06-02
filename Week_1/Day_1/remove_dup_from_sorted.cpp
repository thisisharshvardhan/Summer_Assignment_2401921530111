#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main(){
    vector<int> nums = {1, 1, 2};
    int k = 0;
    int i = 0;
    for(int j=1; j<nums.size(); j++){
        if(nums[i] != nums[j]){
            i++;
            nums[i] = nums[j];
        }
    }
    cout << "Length of array after removing duplicates: " << i + 1 << endl
            << "Modified array: ";
    for(int k=0; k<=i; k++){
        cout << nums[k] << " ";
    }
    cout << endl;
}       
