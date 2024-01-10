meteosource_cpp - Weather API library
==========

C++ wrapper library for [Meteosource weather API](https://www.meteosource.com) that provides detailed hyperlocal weather forecasts for any location on earth.


## Dependencies
The `meteosource_cpp` library needs following software installed:

  - [`libcurl`](https://curl.se/libcurl/c/)
  - [`jsoncpp`](https://github.com/open-source-parsers/jsoncpp)

On Debian platforms, you can install these libraries using:

```bash
sudo apt-get update
sudo apt-get install libcurl4-gnutls-dev
sudo apt-get install libjsoncpp-dev
```

## Library usage

To use `meteosource_cpp`, you only need to copy all `*.cpp` and `*.h` files from `src` folder into your project. Then you can `#include "Meteosource.h"` and fetch the weather data you need.

You can compile it by simply running `make`, and run it by `./weatherapi`.
