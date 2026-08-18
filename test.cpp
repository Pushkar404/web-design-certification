#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int> &s){
      vector<vector<int>> ans;
      sort(s.begin(), s.end());
      for (int f = 0; f + 2 < s.size(); f++){
            if (f>0 && s[f] == s[f - 1]) continue;
            int i = f + 1,
                j = s.size() - 1;
            int target = - s[f];
            while (i < j){

                  if (s[i] + s[j] == target){
                        ans.push_back({s[f], s[i], s[j]});
                        i++;
                        j--;

                        while (i < j && s[i] == s[i - 1]) i++;
                        while (i < j && s[j] == s[j + 1]) j--;
                  }
                  else if (s[i] + s[j] > target){
                        j--;
                  }
                  else {//s[i] + s[j] < target
                        i++;
                  }

                  

            }
      }
      return ans;
}

int main() {
      
      return 0;
}