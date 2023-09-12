
// class Solution {
// public:
//     int reverse(int x) {
//         int rev = 0;
//         bool isNeg = false;
//         if(x <= INT_MIN){
//             return 0;
//         }
//         if(x < 0){
//             isNeg = true;
//             x = -x;
//         }
//         while(x >0){
//             if(rev > INT_MAX/10){
//                 return 0;
//             }
//             int bit = x%10;
//             rev = rev*10+bit;
//             x= x/10;
//         }
//         return isNeg ? -rev :rev;
//     }
// };