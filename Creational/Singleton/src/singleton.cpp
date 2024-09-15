#include "singleton.hpp"

std::shared_ptr<Singleton> Singleton::m_singleton;

std::shared_ptr<Singleton> Singleton::getInstance(){
    if (!m_singleton){
        m_singleton = std::make_shared<Singleton>(Singleton()); // lazzy creation: not used until needed
    }
    return m_singleton;
}

std::string Singleton::greet(){
    return "Hello World from Singleton...";
}