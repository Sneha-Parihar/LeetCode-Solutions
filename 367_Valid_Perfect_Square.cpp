class Solution {
public:
    bool isPerfectSquare(int num) {
        int start=0;
        int end=num;
        long long mid=start+(end-start)/2;
        while(start<=end){
            long long result=mid*mid;
            if(result>num){
                end=mid-1;
            }
            else if(result==num){
                return true;
            }
            else
                start=mid+1;
         mid=start+(end-start)/2;
        }
        return false;
    }

};
