#include <iostream>
#include <boost/date_time/posix_time/posix_time.hpp>

int main(int argc, char **argv)
{
    auto t = boost::posix_time::microsec_clock::local_time();
    std::cout << boost::posix_time::to_iso_string(t) << std::endl;

    return 0;
}
