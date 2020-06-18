// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from mapcallback.djinni

#ifndef DJINNI_GENERATED_NJSALGORANDASSETPARAMSMAPCALLBACK_HPP
#define DJINNI_GENERATED_NJSALGORANDASSETPARAMSMAPCALLBACK_HPP


#include "../include/../utils/optional.hpp"
#include "../include/AlgorandAssetParams.hpp"
#include "../include/Error.hpp"
#include <cstdint>
#include <string>
#include <unordered_map>

#include <nan.h>
#include <node.h>
#include "../include/AlgorandAssetParamsMapCallback.hpp"

using namespace v8;
using namespace node;
using namespace std;
using namespace ledger::core::api;

class NJSAlgorandAssetParamsMapCallback: public ledger::core::api::AlgorandAssetParamsMapCallback {
public:

    static void Initialize(Local<Object> target);

    static Local<Object> wrap(const std::shared_ptr<ledger::core::api::AlgorandAssetParamsMapCallback> &object);
    static Nan::Persistent<ObjectTemplate> AlgorandAssetParamsMapCallback_prototype;
    ~NJSAlgorandAssetParamsMapCallback()
    {
        pers_resolver.Reset();
    };
    NJSAlgorandAssetParamsMapCallback(Local<Promise::Resolver> resolver){pers_resolver.Reset(resolver);};

    /**
     * Method triggered when main task complete.
     * @params result optional of type Map<string, T>, non null if main task failed
     * @params error optional of type Error, non null if main task succeeded
     */
    void onCallback(const std::experimental::optional<std::unordered_map<std::string, ::ledger::core::api::AlgorandAssetParams>> & result, const std::experimental::optional<::ledger::core::api::Error> & error);

private:
    /**
     * Method triggered when main task complete.
     * @params result optional of type Map<string, T>, non null if main task failed
     * @params error optional of type Error, non null if main task succeeded
     */
    static NAN_METHOD(onCallback);

    static NAN_METHOD(New);

    Nan::Persistent<Promise::Resolver> pers_resolver;
};
#endif //DJINNI_GENERATED_NJSALGORANDASSETPARAMSMAPCALLBACK_HPP
