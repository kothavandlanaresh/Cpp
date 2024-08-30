#ifndef QBMATRIX2_H
#define QBMATRIX2_H

template <class T>
class qbMatrix2 {
    public:

    //Constructors
        qbMatrix2();
        qbMatrix2(int nRows, int nCols);
        qbMatrix2(int nRows, int nCols, const T* inputdata);
        qbMatrix2(const qbMatrix2<T>& inputMatrix);

    //Destructor
        ~qbMatrix2();

    //Configuration Methods
        bool resize(int numrows, int numcols);
    //Element access Methods
        T getValue(int row, int col);
        bool setElements(int row, int col, T elementValue);
        int getNumRows();
        int getNumCols();

    //Operator == Overload
        bool operator== (const qbMatrix2<T>& rhs);

    //Operator +,-,* Overload
        template <class U> friend qbMatrix2<U> operator+ (const qbMatrix2<U>& lhs, const qbMatrix2<U>& rhs);
        template <class U> friend qbMatrix2<U> operator+ (const U& lhs, const qbMatrix2<U>& rhs);
        template <class U> friend qbMatrix2<U> operator+ (const qbMatrix2<U>& lhs, const U& rhs);

        template <class U> friend qbMatrix2<U> operator- (const qbMatrix2<U>& lhs, const qbMatrix2<U>& rhs);
        template <class U> friend qbMatrix2<U> operator- (const U& lhs, const qbMatrix2<U>& rhs);
        template <class U> friend qbMatrix2<U> operator- (const qbMatrix2<U>& lhs, const U& rhs);

        template <class U> friend qbMatrix2<U> operator* (const qbMatrix2<U>& lhs, const qbMatrix2<U>& rhs);
        template <class U> friend qbMatrix2<U> operator* (const U& lhs, const qbMatrix2<U>& rhs);
        template <class U> friend qbMatrix2<U> operator* (const qbMatrix2<U>& lhs, const U& rhs);

    Private:
        int sub2ind(int row, int col);

        T *m_matrixData;
        int m_nRows, m_nCols, m_nElements;


};

#endif