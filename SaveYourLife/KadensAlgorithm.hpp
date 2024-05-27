class Solution {
public:
      string maxSum(string w,char x[], int b[],int n){
          unordered_map<char, int> mp;
          //populating the map
          for(int i = 0; i < n; i++) {
              mp[x[i]] = b[i];
          }
             int max_so_far = 0, max_sum = INT_MIN;
          std::string current_substr = "", max_substr = "";

        for (int i = 0; i < w.size(); i++) {
            auto itr = mp.find(w[i]);
            int char_value = (itr != mp.end()) ? itr->second : (int) w[i];
        
            max_so_far += char_value;
            current_substr += w[i];

            if (max_so_far > max_sum) {
                max_sum = max_so_far;
                max_substr = current_substr;
            }

            if (max_so_far < 0) {
                max_so_far = 0;
                current_substr = "";
            }
        }
        return max_substr;
      }
};

