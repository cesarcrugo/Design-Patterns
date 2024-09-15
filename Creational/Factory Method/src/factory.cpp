#include <factory.hpp>

std::shared_ptr<Vehicle> VehicleStore::sellVehicle(type ty, wheels w){
    std::shared_ptr<Vehicle> vehicle = orderVehicle(ty);
    vehicle->changeWheels(w);

    return vehicle;
}

std::shared_ptr<Vehicle> PremiumVehicleStore::orderVehicle(type ty){
    if (ty == type::SUV){
        return std::make_shared<Vehicle>(PremiumSUV());
    } else if (ty == type::Sedan){
        return std::make_shared<Vehicle>(PremiumSedan());
    } else if (ty == type::Coupe){
        return std::make_shared<Vehicle>(PremiumCoupe());
    } else {
        return nullptr;
    }
}

std::shared_ptr<Vehicle> BasicVehicleStore::orderVehicle(type ty){
    if (ty == type::SUV){
        return std::make_shared<Vehicle>(BasicSUV());
    } else if (ty == type::Sedan){
        return std::make_shared<Vehicle>(BasicSedan());
    } else if (ty == type::Coupe){
        return std::make_shared<Vehicle>(BasicCoupe());
    } else {
        return nullptr;
    }
}