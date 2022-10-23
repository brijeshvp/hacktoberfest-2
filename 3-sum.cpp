// c++ program for the problem 3-sum to find sum of 3 elements equal to target in given array
vector<vector<int>> threeSum(vector<int>& a) {
      int n = a.size();
      sort(a.begin(),a.end());
      vector<vector<int>> ans;

      for(int i=0;i<n-2;++i){
          if(i>0 && a[i]==a[i-1])continue;

          int lo = i+1;
          int hi = n-1;

          while(lo<hi){
              if(a[i]+a[lo]+a[hi]==0){
                  ans.push_back({a[i],a[lo],a[hi]});
                  while(lo+1<hi && a[lo]==a[lo+1])lo++;
                  while(lo<hi-1 && a[hi]==a[hi-1])hi--;
                  lo++;
                  hi--;
              }
              else if(a[i]+a[lo]+a[hi]<0){
                  lo++;
              }
              else if(a[i]+a[lo]+a[hi]>0){
                  hi--;
              }
          }
      }
      return ans;
  }
