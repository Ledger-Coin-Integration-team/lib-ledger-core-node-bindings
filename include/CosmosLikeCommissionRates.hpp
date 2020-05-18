// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from messages.djinni

#ifndef DJINNI_GENERATED_COSMOSLIKECOMMISSIONRATES_HPP
#define DJINNI_GENERATED_COSMOSLIKECOMMISSIONRATES_HPP

#include <iostream>
#include <string>
#include <utility>

namespace ledger { namespace core { namespace api {

struct CosmosLikeCommissionRates final {
    std::string rate;
    std::string maxRate;
    std::string maxChangeRate;

    CosmosLikeCommissionRates(std::string rate_,
                              std::string maxRate_,
                              std::string maxChangeRate_)
    : rate(std::move(rate_))
    , maxRate(std::move(maxRate_))
    , maxChangeRate(std::move(maxChangeRate_))
    {}

    CosmosLikeCommissionRates(const CosmosLikeCommissionRates& cpy) {
       this->rate = cpy.rate;
       this->maxRate = cpy.maxRate;
       this->maxChangeRate = cpy.maxChangeRate;
    }

    CosmosLikeCommissionRates() = default;


    CosmosLikeCommissionRates& operator=(const CosmosLikeCommissionRates& cpy) {
       this->rate = cpy.rate;
       this->maxRate = cpy.maxRate;
       this->maxChangeRate = cpy.maxChangeRate;
       return *this;
    }

    template <class Archive>
    void load(Archive& archive) {
        archive(rate, maxRate, maxChangeRate);
    }

    template <class Archive>
    void save(Archive& archive) const {
        archive(rate, maxRate, maxChangeRate);
    }
};

} } }  // namespace ledger::core::api
#endif //DJINNI_GENERATED_COSMOSLIKECOMMISSIONRATES_HPP