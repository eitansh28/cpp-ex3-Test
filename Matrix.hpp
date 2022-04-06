#include <iostream>
#include <vector>

using namespace std;
namespace zich{

    class Matrix
    {
    private:
        unsigned int row;
        unsigned int col;
        std::vector<double> myMatrix;
    public:
        Matrix();
        Matrix(vector<double> init, unsigned int rows, unsigned int cols);
        // ~Matrix();
        Matrix operator+(Matrix& first);
        Matrix operator+=(const Matrix &);
        Matrix operator+();
        Matrix operator-(Matrix& sec);
        Matrix operator-=(const Matrix &other);
        Matrix operator-();
        bool operator>(const Matrix &);
        bool operator<(const Matrix &);
        bool operator>=(const Matrix &);
        bool operator<=(const Matrix &);
        bool operator==(const Matrix &);
        bool operator!=(const Matrix &);
        Matrix& operator++();
        Matrix operator++(int);
        Matrix operator*(const Matrix &other);
        friend Matrix operator*(double num ,Matrix &mat);
        Matrix& operator*=(double num);
        int sumMat(const Matrix &curr, const Matrix &other);
        friend std::ostream& operator<< (std::ostream& output, const Matrix& m);
        friend std::istream& operator>> (std::istream& input , Matrix& m);

    };
    
}