#include <factory.hpp>

int main(int argc, char **argv){
    PremiumVehicleStore store;
    store.sellVehicle(type::SUV, wheels::michellin);
    store.sellVehicle(type::Coupe, wheels::michellin);
    store.sellVehicle(type::Sedan, wheels::michellin);

    BasicVehicleStore store2;
    store2.sellVehicle(type::SUV, wheels::michellin);
    store2.sellVehicle(type::Coupe, wheels::michellin);
    store2.sellVehicle(type::Sedan, wheels::michellin);
}