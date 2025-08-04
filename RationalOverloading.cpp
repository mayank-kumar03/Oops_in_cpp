#include <iostream>
using namespace std;

class Rational {
private:
    int numerator;
    int denominator;
public:
    Rational(int num=0, int denom=1) {
        numerator = num;
        denominator = denom;
    }
    friend Rational operator/(const Rational& first, const Rational& other);
    void display() const {
        cout << numerator << "/" << denominator << endl;
    }
    friend ostream& operator<<(ostream& o, const Rational& obj);
};

Rational operator/(const Rational& first, const Rational& other) {
    Rational temp;
    temp.numerator = first.numerator * other.denominator;
    temp.denominator = first.denominator * other.numerator;
    return temp;
}

ostream& operator<<(ostream& o, const Rational& obj) {
    o << obj.numerator << "/" << obj.denominator;
    return o;
}

int main() {
    Rational r1(3, 4);
    cout << "First rational number: ";
    r1.display();

    cout << "Second rational number: ";
    Rational r2(2, 5);
    r2.display();

    Rational result = r1 / r2;
    cout << "Result of division: ";
    result.display();

    // Or using overloaded <<
    cout << "Result of division (using <<): " << result << endl;

    return 0;
}
