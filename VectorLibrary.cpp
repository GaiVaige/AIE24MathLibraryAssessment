

#include <iostream>
#include "Vector.h"

int main()
{
    Vector4 v(5,3,5,0);
    Vector4 v2(5, 33,5,1);
    
    Vector4 v3 = v.Cross(v2);
    float ol = v[1];
    v[1] = 5;
    std::cout << v[1];


}

