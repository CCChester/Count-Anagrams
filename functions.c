#include <stdio.h>

// Summation:  sum[i = 1 to n] O(1)
// Time:       O(n)
void draw_line(int n) {
    for (int i = 0; i < n; i++) {
        printf("*");
    }
    printf("\n");
}

//*****************************************************
// Summation:
//  First inner loop: sum[k=j+1 to n-1] O(1) = O(k)
//  Second inner loop: sum[j=i+1 to n-1] (O(1)+O(k))
//                     = O(j^2)
//  Outer loop: sum[i=0 to n-1] (O(1)+O(j^2)) = O(n^3)
// Time:
//  O(n^3)
bool magic_function1(int *a, int n) {
    // a is an array of n integers
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            for (int k = j+1; k < n; k++) {
                if (a[i] + a[j] + a[k] == 0) return true;
            }
        }
    }
    return false;
}

//*****************************************************


// Summation: There is only one loop
//  sum[i=0 to n-1] O(1) = O(n)
//  inside the loop: it has O(logn)
//  O(n) + 2T(n/2) = O(nlogn)
// Time:
//  O(nlogn)
void magic_function2(int *a, int n) {
    // a is an array of n integers
    for (int i = 0; i < n; i++) {
        a[i]++;
    }
    
    if(n <= 2)
        return;
    
    magic_function2(a, n/2);
    magic_function2(a + n/2, n - n/2);
}

//*****************************************************


// Summation: There is no loop
//  O(1) for if condition
//  recursion: O(2^n)
//  Therefore, O(1)+O(2^n) = O(2^n)
//  T(n) = O(1) + T(n-1)+T(n-1) = O(2^n)
// Time:
//  O(2^n)
bool magic_function3(int *a, int n, int t, bool b) {
    // a is an array of n integers, t is initially 0, and b is initially false
    if (n == 0) {
        return (t == 0) && b;
    }
    return magic_function3(a, n-1, t, b) || magic_function3(a, n-1, t+a[n-1], true);
}

//*****************************************************


// Summation: There is no loop
//  O(1) for ? condition
//  recursion: O(n)
//  Therefore, O(1) + O(n) = O(n)
//  T(n) = O(1) + T(n-1) = O(n)
// Time:
//  O(n)
//For this question, give your solution in terms of the minimum number of bits, n, required
//to encode a in binary.
int magic_function4(int a, int b) {
    // a is initially >= 0
    return (a == 0 ? 0 : b + magic_function4(a-1, b));
}

//*****************************************************



// Summation: There is no loo
//  O(1) for 2 if conditions
//  recursion: O(logn)
//  Therefore, O(1) + O(1) + O(logn) = O(logn)
//  T(n) = O(1) + T(n/2) = O(logn)
// Time:
//  O(logn)
//For this question, give your solution in terms of the minimum number of bits, n, required
//to encode a in binary.
int magic_function5(int a, int b) {
    // a is initially >= 0
    if (a == 0) return 0;
    if (a == 1) return b;
    if (a / 2 * 2 == a) return magic_function5(a/2, b+b);
    return b + magic_function5(a/2, b + b);
}













