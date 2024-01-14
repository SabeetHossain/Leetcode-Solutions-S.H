// Author: Sabeet Hossain
// Date: January 7, 2023
// Difficulty: easy

//time:  O(n)
//space: O(n)
#include <iostream>
#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> mp;
        for(int i =0; i < nums.size(); i++)
        {
            int complement = target - nums[i];
            if(mp.count(complement) && mp[complement] != i)
            {
                return {i, mp[complement]};
            }
            mp[nums[i]]=i;
        }
        return {};
    }
};

/* LEARNING NOTES and comments about code (on leetcode submission removed all std::, includes, and comments)
    unordered maps key:value and faster operations than maps
    sample vector 2,7,11,15
    hash map if you copied all the elements of the vector into it
    15:3
    11:2
    7:1
    2:0
    Process:
        1. sets the complement = to the complement of the number in index (line 16) 
        2. checks if complement is a KEY in the map using count function (if statement first condition line 17)
        3. if a key is found, checks if the VALUE of that key is NOT the same as the index of vector nums. 
           (if statement second condition line 17)
        4. if the value and index are not the same return those as a vector(line 19), 
           otherwise add it to hashmap (key will be the value at index, and the value at key will be index of nums line 21)
        5. if the value and index are the same that means the same index is being represented 
           (the problem states the same element cant be used twice) 
        6. if no solution is found returns an empty vector (line 23)
           
        note about step 4:  rather then copying the whole vector into a hashmap this method allows us to stop copying elements into the map as    
                            soon as a solution is found which only in the worst cases would copy the whole vector.


*/
       

