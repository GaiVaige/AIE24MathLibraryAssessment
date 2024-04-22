#pragma once
struct Vector4;

struct Vector3
{

public:
    float x, y, z;


    Vector3();
    Vector3(const Vector3& v);
    Vector3(float sx, float sy, float sz);
    Vector3(float sx, float sy);
    Vector3(const Vector4& v4);
    ~Vector3() = default;

    float Magnitude();
    float Distance(Vector3& v);
    const Vector3 Normalize();
    float Dot(const Vector3& v);
    Vector3 Cross(const Vector3& v);

    const Vector3& operator = (const Vector3& v);
    const Vector3 operator + (const Vector3& v);
    const Vector3 operator - (const Vector3& v);
    const Vector3 operator * (const float f);
    const Vector3& operator += (const Vector3& v);
    const Vector3& operator -= (const Vector3& v);
    const Vector3& operator *= (const float f);
    float& operator [] (int i);
};

Vector3 operator* (const float LHS, Vector3& RHS);

struct Vector4 {
public:
	float x, y, z, w;

    Vector4();
    Vector4(const Vector4& v);
    Vector4(float sx, float sy, float sz, float sw);
    Vector4(const Vector3& v3);
    ~Vector4() = default;

    float Magnitude();
    float Distance(Vector4& v);
    const Vector4 Normalize();
    float Dot(const Vector4& v);
    Vector4 Cross(const Vector4& v);

    const Vector4& operator = (const Vector4& v);
    const Vector4 operator + (const Vector4& v);
    const Vector4 operator - (const Vector4& v);
    const Vector4 operator * (const float f);
    const Vector4& operator += (const Vector4& v);
    const Vector4& operator -= (const Vector4& v);
    const Vector4& operator *= (const float f);
    float& operator [] (int i);

};

Vector4 operator* (const float LHS, Vector4& RHS);