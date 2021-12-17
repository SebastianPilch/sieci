//
// Created by Sebastian on 16.12.2021.
//

#include <algorithm>
#include <stack>
#include <optional>
#include <vector>
#include <iostream>
#include <storage.hpp>
#include <set>

Package::Package() {
    if (freed_IDs.empty()) {
        ElementID new_id = 0;
        for (std::size_t i = 0; i < assigned_IDs.size(); i++) {
            assigned_IDs[i] > new_id;
            new_id = assigned_IDs[i]
        }
    }
};
