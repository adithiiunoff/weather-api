#include <iostream>
#include <jsoncpp/json/json.h>
#include <memory>
#include "src/Meteosource.h"

int main()
{
    const std::string api_key = "4lygr37uncwmdxt3xbqfdpfilxch51xtad40nz7i";
    const std::string tier = "free";
    Meteosource m = Meteosource(api_key, tier);

    const std::string place_id = "Hyderabad";
    const std::string sections = "all";
    const std::string timezone = "UTC";
    const std::string language = "en";
    const std::string units = "auto";
    auto res = m.get_point_forecast(place_id, sections, timezone, language, units);
    if (!res)
    {
        return -1;
    }

    if (res->current)
    {
        std::cout << "Current weather: " << res->current->summary << std::endl << std::endl;
    }

    if (res->hourly.size() > 0)
    {
        std::cout << "Weather for next 5 hours:" << std::endl;
        for (int i = 0; i < 5; ++i)
            std::cout << "  " << res->hourly[i]->date << ": temperature " << res->hourly[i]->temperature << ", wind speed: " << res->hourly[i]->wind_speed << std::endl;
        std::cout << std::endl;
    }

    return 0;
}
