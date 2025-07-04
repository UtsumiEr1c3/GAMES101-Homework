#include<cmath>
#include<Eigen/Core>
#include<Eigen/Dense>
#include<iostream>

int main() {

    // Basic Example of cpp
    std::cout << "Example of cpp \n";
    float a = 1.0, b = 2.0;
    std::cout << a << std::endl;
    std::cout << a / b << std::endl;
    std::cout << std::sqrt(b) << std::endl;
    std::cout << std::acos(-1) << std::endl;
    std::cout << std::sin(30.0 / 180.0 * acos(-1)) << std::endl;

    // Example of vector
    std::cout << "Example of vector \n";
    // vector definition
    Eigen::Vector3f v(1.0f, 2.0f, 3.0f);
    Eigen::Vector3f w(1.0f, 0.0f, 0.0f);
    // vector output
    std::cout << "Example of output \n";
    std::cout << v << std::endl;
    // vector add
    std::cout << "Example of add \n";
    std::cout << v + w << std::endl;
    // vector scalar multiply
    std::cout << "Example of scalar multiply \n";
    std::cout << v * 3.0f << std::endl;
    std::cout << 2.0f * v << std::endl;

    // Example of matrix
    std::cout << "Example of matrix \n";
    // matrix definition
    Eigen::Matrix3f i, j;
    i << 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0;
    j << 2.0, 3.0, 1.0, 4.0, 6.0, 5.0, 9.0, 7.0, 8.0;
    // matrix output
    std::cout << "Example of output \n";
    std::cout << i << std::endl;
    // matrix add i + j
    std::cout << "Example of add \n";
    std::cout << i + j << std::endl;
    // matrix scalar multiply i * 2.0
    std::cout << "Example of scalar multiply \n";
    std::cout << i * 2.f << std::endl;
    // matrix multiply i * j
    std::cout << "Example of matrix multiply \n";
    std::cout << i * j << std::endl;
    // matrix multiply vector i * v
    std::cout << "Example of matrix multiply vector \n";
    std::cout << i * v << std::endl;

    // Point P
    Eigen::Vector3f P(2.f, 1.f, 1.f);
    std::cout << P << std::endl;

    // Rotation matrix
    float Angle = (45.f / 180.f) * std::acos(-1.0f); // Convert degrees to radians

    Eigen::Matrix3f RotationMatrix;
    RotationMatrix << std::cos(Angle), -std::sin(Angle), 0.f,
        std::sin(Angle), std::cos(Angle), 0.f,
        0.f, 0.f, 1.f;

    // Translation matrix
    Eigen::Matrix3f TranslationMatrix;
    TranslationMatrix << 1.f, 0.f, 1.f,
        0.f, 1.f, 2.f,
        0.f, 0.f, 1.f;

    Eigen::Vector3f NewP = TranslationMatrix * RotationMatrix * P;
    std::cout << "New Point: \n";
    std::cout << NewP << std::endl;

    return 0;
}