#include <iostream>

#pragma once

#ifndef VEHICLE_HPP
#define VEHICLE_HPP

enum class wheels{
    continental,
    michellin,
    firestone,
    bridgestione,
    goodyear
};

class Vehicle { // Product
 public:
    virtual ~Vehicle() = default;

    Vehicle() {
        std::cout << "Created Vehicle: ";
    }

    virtual void changeWheels(wheels w){
        m_wheels = w;
    }

 private:
    wheels m_wheels = wheels::goodyear;
};

class Premium : public virtual Vehicle {
 public:
    virtual ~Premium() = default;

    Premium() {
        std::cout << "Premium ";
    }
};

class Basic : public virtual Vehicle {
 public:
    virtual ~Basic() = default;

    Basic() {
        std::cout << "Basic ";
    }
};

class SUV : public virtual Vehicle { // Concrete Product
 public:
    virtual ~SUV() = default;

    SUV() {
        std::cout << "SUV" << std::endl;
    }
};

class Sedan : public virtual Vehicle { // Concrete Product
 public:
    virtual ~Sedan() = default;

    Sedan() {
        std::cout << "Sedan" << std::endl;
    }
};

class Coupe : public virtual Vehicle { // Concrete Product
 public:
    virtual ~Coupe() = default;

    Coupe() {
        std::cout << "Coupe" << std::endl;
    }
};

class PremiumSUV : public Premium, public SUV{ // Concrete Product
};

class PremiumSedan : public Premium, public Sedan { // Concrete Product
};

class PremiumCoupe : public Premium, public Coupe { // Concrete Product
};

class BasicSUV : public Basic, public SUV { // Concrete Product
};

class BasicSedan : public Basic, public Sedan { // Concrete Product
};

class BasicCoupe : public Basic, public Coupe { // Concrete Product
};

#endif // #ifndef VEHICLE_HPP