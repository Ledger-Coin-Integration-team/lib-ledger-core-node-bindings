// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from configuration.djinni

#ifndef DJINNI_GENERATED_NJSSTELLARCONFIGURATION_HPP
#define DJINNI_GENERATED_NJSSTELLARCONFIGURATION_HPP


#include <memory>

#include <nan.h>
#include <node.h>
#include "../include/StellarConfiguration.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSStellarConfiguration final {
public:

    static void Initialize(Local<Object> target);
    NJSStellarConfiguration() = delete;

    static Local<Object> wrap(const std::shared_ptr<ledger::core::api::StellarConfiguration> &object);
    static Nan::Persistent<ObjectTemplate> StellarConfiguration_prototype;

private:
    static NAN_METHOD(New);

    static NAN_METHOD(isNull);
};
#endif //DJINNI_GENERATED_NJSSTELLARCONFIGURATION_HPP
