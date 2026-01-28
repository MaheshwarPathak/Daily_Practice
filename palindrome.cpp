bool isPalindrome(int x) {
     double reverse=0,remainder,original=x;
     while(x>0){
        remainder=x%10;
        reverse=reverse*10+remainder;
        x/=10;
     }
     if(reverse==original){
        return true;
     }
     else{
        return false;
     }
}