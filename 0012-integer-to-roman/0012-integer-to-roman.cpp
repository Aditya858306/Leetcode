class Solution {
private :
    
public:
    string intToRoman(int num) {
        string res = "";
        int divisors[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string romans[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        for (int i = 0; i < 13; i++) {
            int amount = num / divisors[i];
            for (int j = 0; j < amount; j++) {
                res += romans[i];
            }
            num = num - amount * divisors[i];
        }
        return res;
    }
};