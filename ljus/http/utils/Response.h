//
// Created by erik on 09/09/17.
//

#ifndef LJUS_RESPONSE_H
#define LJUS_RESPONSE_H

#include <string>
#include <unordered_map>
#include <vector>
#include <cookie/CookieJar.h>
#include <sstream>

namespace Ljus {
    class Response {
    public:

        std::string generate();

        unsigned long long content_length();

        std::vector<Cookie> get_cookies();

    private:
        std::unordered_map<std::string, std::string> headers;
        std::string content;
        unsigned short code;
        std::vector<Cookie> cookies;
        std::string http_type = "HTTP/1.1";

    };
}

#endif //LJUS_RESPONSE_H
