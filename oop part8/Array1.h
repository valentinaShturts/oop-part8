#pragma once

class Array
{
private:

    int* m_array;
    unsigned int m_size;

public:
    unsigned int GetSize() const;


    Array(const unsigned int size);

    ~Array();
    int& operator[](const unsigned int index);

};