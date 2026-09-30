//
// Created by keonl on 9/29/2026.
//
#ifndef PIGDICE_DIE_H
#define PIGDICE_DIE_H
#include <random>

class Die {

private:

    int m_value;
    int m_numOfSides;

public:

    Die() { // default constructor

        m_value = 0;
        m_numOfSides = 6;
    }

    void set_numOfSides(int numOfSides) {

        switch (numOfSides) {

        case 4:
            m_numOfSides = 4;
            break;

        case 6:
            m_numOfSides = 6;
            break;

        case 8:
            m_numOfSides = 8;
            break;

        default:
            m_numOfSides = 6;
        }
    }

    int getNumOfSides() {
        return m_numOfSides;
    }

    void setValue() {

        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<int> dis(1, m_numOfSides);

        m_value = dis(gen);
    }

    int getValue() {

        // rules for accessing the data

        return m_value;
    }
};
{
};


#endif //PIGDICE_DIE_H
