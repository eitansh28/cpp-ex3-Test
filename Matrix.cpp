#include "Matrix.hpp"

using namespace std;

namespace zich{

    int Matrix::sumMat(const Matrix &curr, const Matrix &other){
        int whoIsBigger=0;
        double count1=0;
        double count2=0;
        for(unsigned int i=0;i<curr.row;i++){
            for(unsigned int j=0;j<curr.col;j++){
                count1+=curr.myMatrix.at((i*curr.col)+j);
                count2+=other.myMatrix.at((i*curr.col)+j);
            }
        }
        if(count1>count2){
            whoIsBigger=1;
        }
        if(count1<count2){
            whoIsBigger=2;
        }
        return whoIsBigger;
    }
    
    Matrix::Matrix(vector<double> init, unsigned int rows, unsigned int cols){
        if(init.size()!=rows*cols){
            throw invalid_argument{"cant turn this vec to matrix on this size"};
        }
        this->row=rows;
        this->col=cols;
        this->myMatrix=init;
    }
    // Matrix::~Matrix(){

    // }
    Matrix Matrix::operator+(Matrix& first){
        if(this->row!= first.row || this->col!= first.col){
            throw invalid_argument{"Matrixes not in same size"};
        }
        Matrix plus(this->myMatrix,this->row, this->col);
        for(unsigned int i=0;i<first.row;i++){
            for(unsigned int j=0;j<first.col;j++){
                plus.myMatrix.at((i*first.col)+j)+=first.myMatrix.at((i*first.col)+j);//+second.myMatrix.at((i*first.col)+j);
            }
        }return plus;
    }

    Matrix Matrix::operator+=(const Matrix &other){
        for(unsigned int i=0;i<this->row;i++){
            for(unsigned j=0;j<this->col;j++){
                this->myMatrix.at((i*other.col)+j)+=other.myMatrix.at((i*other.col)+j);
            }
        }return *this;
    }
    
    Matrix Matrix::operator+(){
        Matrix copy(this->myMatrix,this->row, this->col);
        return copy;
    }
    
    Matrix Matrix::operator-(Matrix& sec){
        if(this->row!= sec.row || this->col!= sec.col){
            throw invalid_argument{"Matrixes not in same size"};
        }
        Matrix minus(this->myMatrix,this->row, this->col);
        for(unsigned int i=0;i<sec.row;i++){
            for(unsigned int j=0;j<sec.col;j++){
                minus.myMatrix.at((i*sec.col)+j)-=sec.myMatrix.at((i*sec.col)+j);
            }
        }return minus;
    }

    Matrix Matrix::operator-=(const Matrix &other){
        if(this->row!= other.row || this->col!= other.col){
            throw invalid_argument{"Matrixes not in same size"};
        }
        for(unsigned int i=0;i<this->row;i++){
            for(unsigned int j=0;j<this->col;j++){
                this->myMatrix.at((i*other.col)+j)-=other.myMatrix.at((i*other.col)+j);
            }
        }return *this;
    }

    Matrix Matrix::operator-(){
        Matrix minUnar(this->myMatrix,this->row, this->col);
        for(unsigned int i=0;i<this->row;i++){
            for(unsigned int j=0;j<this->col;j++){
                if(this->myMatrix.at((i*col)+j)!=0){
                     minUnar.myMatrix.at((i*col)+j)=-(this->myMatrix.at((i*col)+j));
                }
            }
        }
        return minUnar;
    }
    
    bool Matrix::operator>(const Matrix &other){
        if(other.row!= this->row || other.col!= this->col){
            throw invalid_argument{"Matrixes not in same size"};
        }
        if(sumMat(*this,other)==1){
            return true;
        }return false;
    }
    
    bool Matrix::operator>=(const Matrix &other){
        if(other.row!= this->row || other.col!= this->col){
            throw invalid_argument{"Matrixes not in same size"};
        }
        int ans=sumMat(*this,other);
        if(ans==1 || ans==0){
            return true;
        }return false;
    }
    
    bool Matrix::operator<(const Matrix &other){
        if(*this>=other){
            return false;
        }return true;
    }
    
    bool Matrix::operator<=(const Matrix &other){
        if(*this>other){
            return false;
        }return true;
    }
    
    bool Matrix::operator==(const Matrix &other){
        if(other.row!= this->row || other.col!= this->col){
            throw invalid_argument{"Matrixes not in same size"};
        }
        bool equ=true;
        for(unsigned int i=0;i<this->row;i++){
            for(unsigned int j=0;j<this->col;j++){
                if(this->myMatrix.at((i*other.col)+j)!=other.myMatrix.at((i*other.col)+j)){
                    equ=false;
                    break;
                }   
            }
        }return equ;
    }
    
    bool Matrix::operator!=(const Matrix &other){
        if(*this==other){
            return false;
        }return true;
    }
    
    Matrix& Matrix::operator++(){
        for(unsigned int i=0;i<this->row;i++){
            for(unsigned int j=0;j<this->col;j++){
                (this->myMatrix.at((i*this->col)+j))++;
            }
        }return *this;
    }
    
    Matrix Matrix::operator++(int){
        Matrix copy(this->myMatrix,this->row, this->col);
        for(unsigned int i=0;i<this->row;i++){
            for(unsigned int j=0;j<this->col;j++){
                (this->myMatrix.at((i*this->col)+j))++;
            }
        }return copy;
    }
    
    Matrix Matrix::operator*(const Matrix &other){
        vector<double>vect(this->row*other.col,0);
        unsigned int j=0;
        // Matrix mult(this->myMatrix,this->row, other.col);
        // mult.myMatrix.resize(this->row*other.col);
        for(unsigned int i=0;i<this->row;i++){
            //for(unsigned int j=0;j<other.col;j++){
                for(unsigned int k=0;k<this->col;k++){
                    vect.at(i*(other.col)+j)+=(this->myMatrix.at(i*(other.col)+k)*other.myMatrix.at(k*(other.col)+i));
                    cout<<"cv"<<endl;
                    cout<<vect[0]<<endl;
                    cout<<vect[1]<<endl;
                }j++;
            //}cout<<"wa"<<endl;
        }cout<<"mn"<<endl;
        Matrix mult(vect,this->row, other.col);
        return mult;
    }
    
    
    Matrix& Matrix::operator*=(double num){
        for(unsigned int i=0;i<this->row;i++){
            for(unsigned int j=0;j<this->col;j++){
                (this->myMatrix.at((i*this->col)+j))*=num;
            }
        }return *this;
    }
    
    Matrix operator*(double num ,Matrix &mat){
        Matrix multScalar(mat.myMatrix,mat.row,mat.col);
        for(unsigned int i=0;i<mat.row;i++){
            for(unsigned int j=0;j<mat.col;j++){
                (multScalar.myMatrix.at((i*mat.col)+j))*=num;
            }
        }return multScalar;
    }
    ostream& operator<<(std::ostream& output, const Matrix& m){
        for(unsigned int i=0;i<m.row;i++){
            output<<"[";
            for(unsigned int j=0;j<m.col;j++){
                output<<m.myMatrix.at(i*(m.col)+j);
                if(j<m.col-1){
                    output<<" ";
                }
            }
        output<<"]"<<endl;
        }return output;
    }
    // friend zich::Matrix::std::istream& operator>> (std::istream& input , Matrix& m){
    //     for(unsigned int i=0;i<m.row;i++){
    //         input>>"[";
    //         for(unsigned int j=0;j<m.col;j++){
    //             input>>m.myMatrix.at(i*(m.col)+j);
    //             if(j<m.col-1){
    //                 input>>" ";
    //             }
    //         }
    //     input>>"], ";
    //     }return input;
    // }



    
    // char ch = 0;
    //     string s;
    //     while (ch != '\n')
    //     {
    //         ch = input.get();
    //         s += ch;
    //     }
    //     vector<string> vs = split(s, ',');
    //     int row = vs.size();
    //     int len1 = vs.size();
    //     int col = 0;
    //     int flag = 1;
    //     vector<string> vs2;
    //     vector<double> vd;
    //     for (int i = 0; i < len1; i++)
    //     {
    //         vs2 = split(vs[(unsigned int)i], ' ');
    //         int len2 = vs2.size();
    //         if (flag == 1)
    //         {
    //             col = len2;
    //             flag = 0;
    //         }
    //         if (col != len2)
    //         {
    //             throw runtime_error("you have problem with your string");
    //         }

    //         for (int j = 0; j < len2; j++)
    //         {
    //             vd.push_back(stod(vs2[(unsigned int)j]));
    //         }
    //     }
    //     mat.data = vd;
    //     mat.row = row;
    //     mat.col = col;
    //     return input;
}
    

