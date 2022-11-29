class RandomizedSet {
public:
    
    unordered_map<int,int> mp;
     vector<int> nums;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        
         if(mp.find(val) != mp.end()) return false; //when value exist
        nums.push_back(val); //storing val in nums
        mp[val] = nums.size()-1; //storing val and its index
        return true;
    }
    
    bool remove(int val) {
        
        if(mp.find(val) == mp.end()) return false; //when value doesn't exist
        auto it = mp.find(val); //find val in mp;
        
        //put a last value of nums at the index of val and remove the last index value
        nums[it->second] = nums.back();
        nums.pop_back();
        
        //update last value index in map
        mp[nums[it->second]] = it->second; 
        mp.erase(val);
        return true;
      }
    
    int getRandom() {
        return nums[rand()%nums.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */