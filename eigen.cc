#include <iostream>
#include <Eigen/Dense>
#include <Eigen/SparseCore>

using namespace Eigen;
using namespace std;
using Eigen::MatrixXd;

void main1() {
    MatrixXd m(2, 2);
    m(0, 0) = 3;
    m(1, 0) = 2.5;
    m(0, 1) = -1;
    m(1, 1) = m(1, 0) + m(0, 1);
    std::cout << "m:" << endl << m << std::endl;
    m.triangularView<Eigen::Lower>() = m + m;
    auto m2 = m;
    auto m1 = m;
    //点积
    MatrixXd m3(2, 2);
    m3 = m1.adjoint().triangularView<Eigen::UnitUpper>() * m2;
    m3 -= m2.conjugate() * m1.adjoint().triangularView<Eigen::Lower>();
    cout << "m3:" << endl << m3 << endl;
    cout << "m3=m1*m2:" << endl << m1 * m2 << endl;

    //转置
    cout << "m:" << endl << m << endl;
    cout << "m.adjoint:" << endl << m.adjoint() << endl;
    cout << "m.conjugate:" << endl << m.conjugate() << endl;
    cout << "m.triangularView<Lower>:" << endl << m.triangularView<Lower>().toDenseMatrix() << endl;
    cout << "m.triangularView<Upper>:" << endl << m.triangularView<Upper>().toDenseMatrix() << endl;
    cout << "m.triangularView<UnitLower>:" << endl << m.triangularView<UnitLower>().toDenseMatrix() << endl;
    cout << "m.triangularView<StrictlyLower>:" << endl << m.triangularView<StrictlyLower>().toDenseMatrix() << endl;
    auto m0 = m.triangularView<Eigen::UnitUpper>();
    std::cout << "m0:" << endl << m0.toDenseMatrix() << std::endl;
    cout << "m.selfadjointView<Eigen::Lower>:" << endl << m.selfadjointView<Eigen::Lower>().toDenseMatrix() << endl;
    cout << "m.selfadjointView<Lower>().rankUpdate(m,1):" << endl
         << m.selfadjointView<Lower>().rankUpdate(m).toDenseMatrix() << endl;

    cout << m.selfadjointView<Lower>().toDenseMatrix() + m * m.adjoint() << endl;
}

void main2();

void main3();

int main() {
    main1();
//    main2();
//    main3();
    return 0;
}


void main2() {
    MatrixXd m = MatrixXd::Random(3, 3);
    m = (m + MatrixXd::Constant(3, 3, 1.2)) * 50;
    cout << "m =" << endl << m << endl;
    VectorXd v(3);
    v << 1, 2, 3;
    cout << "m * v =" << endl << m * v << endl;
}

void main3() {
    VectorXd vec1(3);
    vec1 << 1, 2, 3;
    DiagonalWrapper<const Eigen::Matrix<double, -1, 1, 0>> mat1 = vec1.asDiagonal();
    cout << mat1.toDenseMatrix() << endl;

    int size = 4;
    DiagonalMatrix<int, 4> diag1(size);
    cout << diag1.toDenseMatrix() << endl;
}