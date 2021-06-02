#pragma once
#include <iostream>
#include <algorithm>

using namespace std;

class Array{

public:
    Array(int size, int sum):m_SIZE(size), m_SUM(sum)
    {    
        m_Array = new int[size];
        for(int i=0; i < m_SIZE; i++)
            m_Array[i] = rand() % 20 + 1;
	
    }
    ~Array()
    {   
    }
    void printArray()
    {
        for(int i=0; i<m_SIZE;i++)
        {
            cout << m_Array[i] <<"\t";
        }

        cout << endl;
    }

    void sortArray()
    {
        sort(m_Array, m_Array+m_SIZE);
       
    }

    void getSumPair()
    {
        int i,j;
        for(i = 0, j = m_SIZE-1; i < j;)
        {
            if(m_Array[i] + m_Array[j] == m_SUM)
            {
                cout << "(" <<i <<", " << j <<"), " <<m_Array[i] <<"+" <<m_Array[j]  <<endl;
                i++;
                j--; //remove duplicated pair
            } 
            else if(m_Array[i] + m_Array[j] < m_SUM)
                i++;
            else
                j--;
        }


	}


private: 
    int *m_Array;
    int m_SIZE;
    int m_SUM;

};