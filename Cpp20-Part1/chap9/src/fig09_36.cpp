// fig09_36.cpp
// Serializing and deserializing objects with the cereal library
#include "cereal/cereal.hpp"
#include <cereal/archives/json.hpp>
#include <cereal/types/vector.hpp>
#include <fmt/format.h>
#include <fstream>
#include <iostream>
#include <vector>

struct Record {
    int account{};
    std::string first{};
    std::string last{};
    double balance{};
};

// function template serialize is responsible for serializing and
// deserializing Record objects to/from the specified Archive
template <typename Archive>
void serialize(Archive& archive, Record& record) {
    archive(cereal::make_nvp("account", record.account),
            cereal::make_nvp("first", record.first),
            cereal::make_nvp("last", record.last),
            cereal::make_nvp("balance", record.balance));
}

// display record at command line
void displayRecords(const std::vector<Record>& records) {
    for (const auto& r : records) {
        std::cout << fmt::format("{} {} {} {:.2f}\n",
            r.account, r.first, r.last, r.balance);
    }
}

int main() {
    std::vector records{
        Record{100, "Brian", "Blue", 123.45},
        Record{200, "Sue", "Green", 987.65}
    };

    std::cout << "Records to serialize:\n";
    displayRecords(records);

    // serialize vector of Records to JSON and store in text file
    if (std::ofstream output{"records.json"}) {
        cereal::JSONOutputArchive archive{output};
        archive(cereal::make_nvp("records", records)); // serialize records
    }

    // deserialize JSON from text file into vector of Records
    if (std::ifstream input{"records.json"}) {
        cereal::JSONInputArchive archive{input};
        std::vector<Record> deserializeRecords{};
        archive(deserializeRecords);
        std::cout << "\nDeserialized records:\n";
        displayRecords(deserializeRecords);
    }
}
