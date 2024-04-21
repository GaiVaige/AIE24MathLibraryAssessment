

#include <iostream>
#include "Vector.h"

int main()
{
    Vector4 v(5,3,5,0);
    Vector4 v2(5, 33,5,1);
    
    Vector4 v3 = v.Cross(v2);

    std::cout << v3.x << '\n'; 
    std::cout << v3.y << '\n';
    std::cout << v3.z << '\n';
    std::cout << v3.w << '\n';

}

