class Solution {
public:
    bool isPalindrome(int x) {
      int original,rem;
      long long reverse=0;
      original=x;
      while(x>0){
        rem=x%10;
        reverse=reverse*10+rem;
        x=x/10;
      }
      if(original==reverse){
          return true;
      }
      else{
        return false;
      }
    }
};
