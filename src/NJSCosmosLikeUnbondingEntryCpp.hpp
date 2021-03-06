// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from wallet.djinni

#ifndef DJINNI_GENERATED_NJSCOSMOSLIKEUNBONDINGENTRY_HPP
#define DJINNI_GENERATED_NJSCOSMOSLIKEUNBONDINGENTRY_HPP


#include "NJSBigIntCpp.hpp"
#include <chrono>
#include <memory>

#include <nan.h>
#include <node.h>
#include "../include/CosmosLikeUnbondingEntry.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSCosmosLikeUnbondingEntry final {
public:

    static void Initialize(Local<Object> target);
    NJSCosmosLikeUnbondingEntry() = delete;

    static Local<Object> wrap(const std::shared_ptr<ledger::core::api::CosmosLikeUnbondingEntry> &object);
    static Nan::Persistent<ObjectTemplate> CosmosLikeUnbondingEntry_prototype;

private:
    /** Block height of the unbonding request */
    static NAN_METHOD(getCreationHeight);

    /** Timestamp of the unbonding completion */
    static NAN_METHOD(getCompletionTime);

    /** Balance requested to unbond */
    static NAN_METHOD(getInitialBalance);

    /** Current amount coming back (i.e. less than initialBalance if slashed) */
    static NAN_METHOD(getBalance);

    static NAN_METHOD(New);

    static NAN_METHOD(isNull);
};
#endif //DJINNI_GENERATED_NJSCOSMOSLIKEUNBONDINGENTRY_HPP
