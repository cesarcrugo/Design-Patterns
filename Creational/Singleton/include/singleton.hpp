#pragma once

#ifndef SINGLETON_HPP
#define SINGLETON_HPP

#include <memory>
#include <iostream>


class Singleton {
 public:
    Singleton& operator=(Singleton&) = delete;
    
    static std::shared_ptr<Singleton> getInstance();
    std::string greet();

 private:
    static std::shared_ptr<Singleton> m_singleton;

    Singleton() = default; // private constructor that no external entity can call

};

#endif // #ifndef SINGLETON_HPP