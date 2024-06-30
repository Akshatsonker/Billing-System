unordered_map<int,int>mp;//to remember the odd count if we have seen it in past or n ot  

int result=0;
int oddcount=0;
mp[oddcount]=1;//I have seen oddcount =0 once in past

int n=nums.size();

for(int i=0;i<n;i++){
    oddcount += (nums[i]%2);

    if(mp.count(oddcount-k)){
        result += mp[oddcount-k];
    }
mp[oddcount]++;
}
return result;