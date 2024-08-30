#include <iostream>
#include "qbMatrix.h"

template <class T>
qbMatrix2<T>::qbMatrix2(){
    m_nRows = 1;
    m_nCols = 1;
    m_nElements = 1;
    m_matrixData = new T[m_nElements];
    m_matrixData[0] = T(0);
}

template <class T>
qbMatrix2<T>::qbMatrix2(int nRows, int nCols): m_nRows(nRows), m_nCols(nCols){
    m_nElements = m_nRows * m_nCols;
    m_matrixData = new T[m_nElements];
    for(int i = 0; i < m_nElements; ++i)
        m_matrixData[i] = 0.0;
}

template <class T>
qbMatrix2<T>::qbMatrix2(int nRows, int nCols, const T* inputdata): m_nRows(nRows), m_nCols(nCols){
    m_nElements = m_nRows * m_nCols;
    m_matrixData = new T[m_nElements];
    for(int i = 0; i < m_nElements; ++i)
        m_matrixData[i] = inputdata[i];
}

template <class T>
qbMatrix2<T>::qbMatrix2(const qbMatrix2<T>& inputMatrix): m_nRows(inputMatrix.m_nRows), 
      m_nCols(inputMatrix.m_nCols), 
      m_nElements(inputMatrix.m_nElements){

    m_matrixData = new T[m_nElements]
    for (int i = 0; i < m_nElements; ++i)
        m_matrixData[i] = inputMatrix.m_matrixData[i];
    
}

template <class T>
qbMatrix2<T>::~qbMatrix2(){
    delete[] m_matrixData;
}

