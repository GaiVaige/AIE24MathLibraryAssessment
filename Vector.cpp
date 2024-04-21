#include "Vector.h"
#include <math.h>

Vector3::Vector3()
{
    this->x = 0;
    this->y = 0;
    this->z = 0;
}

Vector3::Vector3(const Vector3& v)
{
    this->x = v.x;
    this->y = v.y;
    this->z = v.z;
}

Vector3::Vector3(float sx, float sy, float sz)
{
    this->x = sx;
    this->y = sy;
    this->z = sz;
}

Vector3::Vector3(float sx, float sy)
{
    this->x = sx;
    this->y = sy;
    this->z = 0;
}

Vector3::Vector3(const Vector4& v4)
{
    this->x = v4.x;
    this->y = v4.y;
    this->z = v4.z;
}

float Vector3::Magnitude()
{
    return sqrt((x * x) + (y * y) + (z * z));
}

const Vector3 Vector3::Normalize()
{
    float cM = this->Magnitude();
    x/=cM;
    y/=cM;
    z/=cM;
    return *this;
}

float Vector3::Dot(const Vector3& v)
{
    float nx = x * v.x;
    float ny = y * v.y;
    float nz = z * v.z;
    return nx + ny + nz;
}

Vector3 Vector3::Cross(const Vector3& v)
{
    Vector3 cVec;
    cVec.x = (y * v.z) - (z * v.y);
    cVec.y = (z * v.x) - (x * v.z);
    cVec.z = (x * v.y) - (y * v.x);
    return cVec;
}

const Vector3& Vector3::operator=(const Vector3& v)
{
    this->x = v.x;
    this->y = v.y;
    this->z = v.z;
    return *this;
}

const Vector3 Vector3::operator+(const Vector3& v)
{
    Vector3 nV;
    nV.x = this->x + v.x;
    nV.y = this->y + v.y;
    nV.z = this->z + v.z;
    return nV;
}

const Vector3 Vector3::operator-(const Vector3& v)
{
    Vector3 nV;
    nV.x = this->x - v.x;
    nV.y = this->y - v.y;
    nV.z = this->z - v.z;
    return nV;
}

const Vector3 Vector3::operator*(float f)
{
    Vector3 nV;
    nV.x = this->x * f;
    nV.y = this->z * f;
    nV.z = this->z * f;
    return nV;
}

const Vector3& Vector3::operator+=(const Vector3& v)
{
    this->x += v.x;
    this->y += v.y;
    this->z += v.z;
    return *this;
}

const Vector3& Vector3::operator-=(const Vector3& v)
{
    this->x -= v.x;
    this->y -= v.y;
    this->z -= v.z;
    return *this;
}

const Vector3& Vector3::operator*=(const float f)
{
    this->x *= f;
    this->y *= f;
    this->z *= f;
    return *this;
}

Vector3 operator*(const float LHS, Vector3& RHS)
{
        return RHS * LHS;
}

Vector4::Vector4()
{
    this->x = 0;
    this->y = 0;
    this->z = 0;
    this->w = 0;
}

Vector4::Vector4(const Vector4& v)
{
    this->x = v.x;
    this->y = v.y;
    this->z = v.z;
    this->w = v.w;
}

Vector4::Vector4(float sx, float sy, float sz, float sw)
{
    this->x = sx;
    this->y = sy;
    this->z = sz;
    this->w = sw;
}

Vector4::Vector4(const Vector3& v3)
{
    this->x = v3.x;
    this->y = v3.y;
    this->z = v3.z;
    this->w = 0;
}


float Vector4::Magnitude()
{
    return sqrt((x * x) + (y * y) + (z * z) + (w*w));
}

const Vector4 Vector4::Normalize()
{
    float cM = this->Magnitude();
    x /= cM;
    y /= cM;
    z /= cM;
    w /= cM;
    return *this;
}

float Vector4::Dot(const Vector4& v)
{
    float nx = x * v.x;
    float ny = y * v.y;
    float nz = z * v.z;
    float nw = w * v.w;
    return nx + ny + nz + nw;
}

Vector4 Vector4::Cross(const Vector4& v)
{
    Vector3 cVec;
    cVec.x = (y * v.z) - (z * v.y);
    cVec.y = (z * v.x) - (x * v.z);
    cVec.z = (x * v.y) - (y * v.x);
    return (Vector4)cVec;
}

const Vector4& Vector4::operator=(const Vector4& v)
{
    this->x = v.x;
    this->y = v.y;
    this->z = v.z;
    this->w = v.w;
    return *this;
}

const Vector4 Vector4::operator+(const Vector4& v)
{
    Vector4 nV;
    nV.x = this->x + v.x;
    nV.y = this->y + v.y;
    nV.z = this->z + v.z;
    nV.w = this->w + v.w;
    return nV;
}

const Vector4 Vector4::operator-(const Vector4& v)
{
    Vector4 nV;
    nV.x = this->x - v.x;
    nV.y = this->y - v.y;
    nV.z = this->z - v.z;
    nV.w = this->w - v.w;
    return nV;
}

const Vector4 Vector4::operator*(const float f)
{
    Vector4 nV;
    nV.x = this->x * f;
    nV.y = this->y * f;
    nV.z = this->z * f;
    nV.w = this->w * f;
    return nV;
}

const Vector4& Vector4::operator+=(const Vector4& v)
{
    this->x += v.x;
    this->y += v.y;
    this->z += v.z;
    this->w += v.w;
    return *this;
}

const Vector4& Vector4::operator-=(const Vector4& v)
{
    this->x -= v.x;
    this->y -= v.y;
    this->z -= v.z;
    this->w -= v.w;
    return *this;
}

const Vector4& Vector4::operator*=(const float f)
{
    this->x *= f;
    this->y *= f;
    this->z *= f;
    this->w *= f;
    return *this;
}

Vector4 operator*(const float LHS, Vector4& RHS)
{
    return RHS * LHS;
}
