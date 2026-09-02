class Solution {
    private:
    int sumnum(int num){
        int sum=0;
        while(num!=0){
        int digit=num%10;
       sum=sum+digit;
        num=num/10;
    }
    return sum;
    }
public:
    int addDigits(int num) {
    int result=num;
    while(result>9){
        result=sumnum(result);
    }
    return result;
    }
};
