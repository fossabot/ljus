//
// Created by Erik A. Partridge on 6/25/18.
//

#ifndef LJUS_RENDERINGENGINE_H
#define LJUS_RENDERINGENGINE_H


#include "../../external/json.hpp"
#include <string>
namespace Ljus {
    class RenderingEngine {
    public:
        virtual std::string render(nlohmann::json data, std::string view)= 0;

    private:
        std::string view;
        nlohmann::json data;
    };

};

#endif //LJUS_RENDERINGENGINE_H
