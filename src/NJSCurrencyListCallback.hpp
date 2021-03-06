// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from callback.djinni

#ifndef DJINNI_GENERATED_NJSCURRENCYLISTCALLBACK_HPP
#define DJINNI_GENERATED_NJSCURRENCYLISTCALLBACK_HPP


#include "../include/../utils/optional.hpp"
#include "../include/BitcoinLikeNetworkParameters.hpp"
#include "../include/CosmosLikeNetworkParameters.hpp"
#include "../include/Currency.hpp"
#include "../include/CurrencyUnit.hpp"
#include "../include/Error.hpp"
#include "../include/EthereumLikeNetworkParameters.hpp"
#include "../include/RippleLikeNetworkParameters.hpp"
#include "../include/StellarLikeNetworkParameters.hpp"
#include "../include/TezosLikeNetworkParameters.hpp"
#include <string>
#include <vector>

#include <nan.h>
#include <node.h>
#include "../include/CurrencyListCallback.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSCurrencyListCallback: public ledger::core::api::CurrencyListCallback {
public:

    static void Initialize(Local<Object> target);

    static Local<Object> wrap(const std::shared_ptr<ledger::core::api::CurrencyListCallback> &object);
    static Nan::Persistent<ObjectTemplate> CurrencyListCallback_prototype;
    ~NJSCurrencyListCallback()
    {
        pers_resolver.Reset();
    };
    NJSCurrencyListCallback(Local<Promise::Resolver> resolver){pers_resolver.Reset(resolver);};

    /**
     * Method triggered when main task complete.
     * @params result optional of type list<T>, non null if main task failed
     * @params error optional of type Error, non null if main task succeeded
     */
    void onCallback(const std::experimental::optional<std::vector<::ledger::core::api::Currency>> & result, const std::experimental::optional<::ledger::core::api::Error> & error);

private:
    /**
     * Method triggered when main task complete.
     * @params result optional of type list<T>, non null if main task failed
     * @params error optional of type Error, non null if main task succeeded
     */
    static NAN_METHOD(onCallback);

    static NAN_METHOD(New);

    Nan::Persistent<Promise::Resolver> pers_resolver;
};
#endif //DJINNI_GENERATED_NJSCURRENCYLISTCALLBACK_HPP
