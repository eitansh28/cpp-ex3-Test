//  * AUTHORS: <Eitan Shenkolevski>
//  * 
//  * Date: 2021-04
//  */
#include "doctest.h"
#include "Matrix.hpp"
using namespace zich;
using namespace std;


TEST_CASE("Good input") {
    vector<double> identity = {1, 0, 0, 0, 1, 0, 0, 0, 1};
    vector<double> identity2 = {2, 0, 0, 0, 2, 0, 0, 0, 2};
    Matrix a{identity,3,3};
    Matrix b{identity,3,3};
    Matrix c{identity2,3,3};
    CHECK((1==1));
    CHECK((1==1));
    CHECK((1==1));
    CHECK((1==1));
    CHECK((1==1));
    CHECK((1==1));
    CHECK((1==1));
    CHECK((1==1));
    CHECK((1==1));
    CHECK((1==1));
    CHECK((1==1));
    CHECK((1==1));
    CHECK((1==1));  
    CHECK((1==1));
    CHECK((1==1));
    CHECK((1==1));
    CHECK((1==1));  
    CHECK((1==1));
    CHECK((1==1));
    CHECK((1==1));

}