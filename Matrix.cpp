#include "Matrix.hpp"

using namespace std;
// /using

// vector<double> init;

namespace zich{

    // Matrix::int sumMat(Matrix curr, Matrix other){
    //     int whoIsBigger=0;
    //     double count1=0;
    //     double count2=0;
    //     // for(int i=0;i<curr.row;i++){
    //     //     for(int j=0;j<curr.col;j++){
    //     //         count1+=curr.myMatrix.at(i)(j);
    //     //         count2+=other->myMatrix.at(i)(j);
    //     //     }
    //     // }
    //         if(count1>count2){
    //             whoIsBigger=1;
    //         }
    //         if(count1<count2){
    //             whoIsBigger=2;
    //         }
    //     return whoIsBigger;
    // }
    // // vector<double> init;
    Matrix::Matrix(vector<double> init, int rows, int cols){
    // //     //vector<vector<double>> myMatrix(rows, vector<double>(cols));
    // //     int runVecInit=0;
    // //     for(int i=0;i<rows;i++){
    // //         for(int j=0;j<cols;j++){
    // //             this->myMatrix.at(i)(j)=init.at(runVecInit);
    // //             runVecInit++;
    // //         }
    // //     }
    }
    // Matrix::~Matrix(){

    // }
    Matrix Matrix::operator+(const Matrix &other){
    //     if(other.row!= this->row || other->col!= this->col){
    //         throw invalid_argument{"Matrixes not in same size"};
    //     }
        vector<double> vect;
        Matrix plus(vect,this->row, this->col);
    //     for(int i=0;i<this->row;i++){
    //         for(int j=0;j<this->col;j++){
    //             plus->myMatrix.at(i)(j)=this->myMatrix.at(i)(j)+other->myMatrix.at(i)(j);
    //         }
        return plus;
    }

    // Matrix Matrix::operator+=(const Matrix &other){
    //     for(int i=0;i<this->row;i++){
    //         for(int j=0;j<this->col;j++){
    //             this->myMatrix.at(i)(j)+=other->myMatrix.at(i)(j);
    //         }
    //     }
    // }
    
    // // Matrix Matrix::operator+(){
    // //     Matrix copy(vector<double> vect(this->row*this->col, 0),this->row, this->col);
    // //     for(int i=0;i<this->row;i++){
    // //         for(int j=0;j<this->col;j++){
    // //             copy->myMatrix.at(i)(j)=this->myMatrix.at(i)(j);
    // //         }
    // //     }return copy;
    // // }
    
    Matrix Matrix::operator-(const Matrix &other){
    //     if(other.row!= this->row || other.col!= this->col){
    //         throw invalid_argument{"Matrixes not in same size"};
    //     }
        vector<double> vect;
        Matrix minus(vect,this->row, this->col);
    //     for(int i=0;i<this->row;i++){
    //         for(int j=0;j<this->col;j++){
    //             minus->myMatrix.at(i)(j)=this->myMatrix.at(i)(j)-other->myMatrix.at(i)(j);
    //         }
    //     }
    return minus;
    }

    // Matrix::Matrix operator-=(const Matrix &other){
    //     for(int i=0;i<this->row;i++){
    //         for(int j=0;j<this->col;j++){
    //             this->myMatrix.at(i)(j)-=other->myMatrix.at(i)(j);
    //         }
    //     }
    // }

    Matrix Matrix::operator-(){
        vector<double> vect;
        Matrix minUnar(vect,this->row, this->col);
    // //     for(int i=0;i<this->row;i++){
    // //         for(int j=0;j<this->col;j++){
    // //             minUnar->myMatrix.at(i)(j)=-(this->myMatrix.at(i)(j));
    // //         }
        // }
        return minUnar;
    }
    
    // Matrix::bool operator>(const Matrix &other){
    //     if(other.row!= this->row || other.col!= this->col){
    //         throw invalid_argument{"Matrixes not in same size"};
    //     }
    //     if(sumMat(this,other)==1){
    //         return true;
    //     }return false;
    // }
    
    // Matrix::bool operator>=(const Matrix &other){
    //     if(other.row!= this->row || other.col!= this->col){
    //         throw invalid_argument{"Matrixes not in same size"};
    //     }
    //     if(sumMat(this,other)==1 || sumMat(this,other)==0){
    //         return true;
    //     }return false;
    // }
    
    // Matrix::bool operator<(const Matrix &other){
    //     if(other.row!= this->row || other.col!= this->col){
    //         throw invalid_argument{"Matrixes not in same size"};
    //     }
    //     if(sumMat(this,other)==2){
    //         return true;
    //     }return false;
    // }
    
    // Matrix::bool operator<=(const Matrix &other){
    //     if(other.row!= this->row || other.col!= this->col){
    //         throw invalid_argument{"Matrixes not in same size"};
    //     }
    //     if(sumMat(this,other)==2 || sumMat(this,other)==0){
    //         return true;
    //     }return false;
    // }
    
    bool Matrix::operator==(const Matrix &other){
    //     if(other.row!= this->row || other.col!= this->col){
    //         throw invalid_argument{"Matrixes not in same size"};
    //     }
        bool equ=true;
    //     for(int i=0;i<this->row;i++){
    //         for(int j=0;j<this->col;j++){
    //             if(this->myMatrix.at(i)(j)!=other->myMatrix.at(i)(j)*num){
    //                 equ=false;
    //                 break;
    //             }   
    //         }
    //     }
    return equ;
    }
    
    // Matrix::bool operator!=(const Matrix &other){
    //     if(other.row!= this->row || other.col!= this->col){
    //         throw invalid_argument{"Matrixes not in same size"};
    //     }
    //     if(this==other){
    //         return false;
    //     }return true;
    // }
    // //++num++
    // //--num--
    
    // Matrix::Matrix operator*(const Matrix &other){
    //     Matrix mult(vector<double> vect(this->row*other->col, 0),this->row, other->col);
    //     for(int i=0;i<this->row;i++){
    //         for(int j=0;j<other->col;j++){
    //             for(int k=0;k<this->row;k++){
    //                 mult.at(i)(j)+=(this->myMatrix.at(i)(k)*other->myMatrix.at(k)(j));
    //             }
    //         }
    //     }return mult;
    // }
    
    
    Matrix &Matrix::operator*=(double num){
        for(int i=0;i<this->row;i++){
            // for(int j=0;j<this->col;j++){
            //     this->myMatrix.at(i)(j)=this->myMatrix.at(i)(j)*num;
            // }
        }return *this;
    }
    
    ostream& operator<<(std::ostream& output, const Matrix& m){
        // for(int i=0;i<*m->row;i++){
        //     output<<"[";
        //     for(int j=0;j<*m->col;j++){
        //         //output<<*m->myMatrix.at(i)(j)<<;
        //         output<<" ";
        //     }
        output<<"]"<<endl;
        return output;
        // }
    }
    // friend zich::Matrix::std::istream& operator>> (std::istream& input , Matrix& m){

    // }
}
    

