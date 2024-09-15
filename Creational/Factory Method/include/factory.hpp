#include <memory>
#include <vehicle.hpp>

#pragma once

#ifndef FACTORY_HPP
#define FACTORY_HPP

enum class type {
    SUV,
    Sedan,
    Coupe
};

class VehicleStore { // Creator
 public:
    virtual ~VehicleStore() = default;

    std::shared_ptr<Vehicle> sellVehicle(type ty, wheels w);

 private:
    virtual std::shared_ptr<Vehicle> orderVehicle(type ty) = 0; // virtual factory method
};

class PremiumVehicleStore : public VehicleStore { // Concrete Creator
 private:
    std::shared_ptr<Vehicle> orderVehicle(type ty) override; // factory method
};

class BasicVehicleStore : public VehicleStore { // Concrete Creator
 private:
    std::shared_ptr<Vehicle> orderVehicle(type ty) override; // factory method
};

#endif // #ifndef FACTORY_HPP