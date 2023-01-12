#include <iostream>


/*
 * Complete the 'kangaroo' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. INTEGER x1
 *  2. INTEGER v1
 *  3. INTEGER x2
 *  4. INTEGER v2
 * 
 * 
 After the n jumps:

kangaroo 1 new position = x1 + (n*v1)
kangaroo 2 new position = x2 + (n*v2)

If both collide in x axis:

x1 + (n * v1) = x2 + (n*v2)

n*v1  = x2 -x1 (n*v2)
(n*v1) - (n*v2) = x2 - x1

n(v1 - v2) = x2 - x1


n = (x2 - x1) / (v1 - v2)

This equation will result in non iteger value as well

so we can use modulus operator .
(x2 -x1) % (v1 - v2) = 0 

and check if (v1 - v2) is greater than 0.
 * 
 * 
 */

std::string kangaroo(int x1, int v1, int x2, int v2) {

    return ((v1-v2)>0 && (x2 - x1) % (v1 - v2) == 0)? "YES" : "NO";

    
}

int main() {

    std::cout << kangaroo(2, 1, 1, 2);


    return 0;
}