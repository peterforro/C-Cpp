#ifndef _RESISTOR_H
#define _RESISTOR_H


class Resistor {
    private:
        double R;
        static double defR;

    public:
        Resistor();
        explicit Resistor(double r);
        static void setDef(double r);
        double getR() const;
        Resistor operator+(const Resistor& r) const;
        Resistor operator%(const Resistor& r) const;
};


Resistor operator*(int n, const Resistor& r);

#endif

