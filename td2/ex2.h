//
// Created by olegp on 11/10/2024.
//
#include <vector>
#include <iostream>
#ifndef EX2_H
#define EX2_H
using namespace std;
template<typename T>
class MatrixBase {
    protected:
    vector<vector<T>> data;
    size_t rows;
    size_t cols;

    public:
    MatrixBase();
    MatrixBase(size_t, size_t);

    void addElement(int, int, T);
    T getElement(size_t, size_t) const;
    size_t getRows() const;
    size_t getCols() const;
    void Display() const;
};

template<typename T>
MatrixBase<T>::MatrixBase() : data(1, vector<T>(1)), rows(1), cols(1){}

template<typename T>
MatrixBase<T>::MatrixBase(size_t _rows, size_t _cols) : data(_rows, vector<T>(_cols)), rows(_rows), cols(_cols) {}

template<typename T>
void MatrixBase<T>::addElement(size_t _rows, size_t _cols, T x) {
    if (_rows != this->rows || _cols != this->cols) {
    }
}


#endif //EX2_H
