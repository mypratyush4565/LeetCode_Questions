class Solution {
public:
    int divide(int dividend, int divisor) {
        if (divisor == 0) return INT_MAX;
if (dividend == INT_MIN && divisor == -1) return INT_MAX;
bool negative = (dividend < 0) ^ (divisor < 0);
        long long a = dividend;
        long long b = divisor;
        if (a < 0) a = ~a + 1;
        if (b < 0) b = ~b + 1;  
        long long quotient = 0;
        while (a >= b) {
            long long temp = b;
            long long multiple = 1;
            while ((temp << 1) <= a) {
                temp <<= 1;
                multiple <<= 1;
            }
            a = subtract(a, temp);
            quotient = add(quotient, multiple);
        }

        if (negative) quotient = ~quotient +1;  
        if (quotient > INT_MAX) return INT_MAX;
        if (quotient < INT_MIN) return INT_MIN;

        return (int)quotient;
    }

private:
    
    long long add(long long x, long long y) {
        while (y != 0) {
            long long carry = x & y;
            x = x ^ y;
            y = carry << 1;
        }
        return x;
    }

    
    long long subtract(long long x, long long y) {
        return add(x, ~y + 1);
    }
};
