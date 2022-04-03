#include <iostream>
#include <vector>

using namespace std;
namespace zich{

    class Matrix
    {
    private:
        int row;
        int col;
        std::vector<double> myMatrix;
    public:
        
        // vector<vector<double>> myMatrix;
        Matrix();
        Matrix(vector<double> init, int rows, int cols);
        // ~Matrix();
        Matrix operator+(Matrix const&);
        Matrix operator+=(const Matrix &);
        Matrix operator+();
        Matrix operator-(const Matrix &);
        Matrix operator-=(const Matrix &);
        Matrix operator-();
        bool operator>(const Matrix &);
        bool operator<(const Matrix &);
        bool operator<=(const Matrix &);
        bool operator==(const Matrix &);
        bool operator!=(const Matrix &);
        //++num++
        //--num--
        Matrix operator*(const Matrix &);
        //Matrix operator*(double num ,const Matrix &);
        Matrix operator*=(double num);
        int sumMat(const Matrix &curr, const Matrix &other);
        friend std::ostream& operator<< (std::ostream& output, const Matrix& m);
        friend std::istream& operator>> (std::istream& input , Matrix& m);

    };
    
}