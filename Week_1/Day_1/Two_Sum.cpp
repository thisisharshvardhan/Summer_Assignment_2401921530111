#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main(){
    vector<int> nums = {2, 7, 11, 15};
    int target =9;
    unordered_map<int, int> map;
    for(int i=0; i<nums.size(); i++){
        int need = target - nums[i];
        if(map.find(need) != map.end()){
            cout << "Indices: " << map[need] << " and " << i << endl;
            break;  
        }
        map[nums[i]] = i;
    }   

}