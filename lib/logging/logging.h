#ifndef PROJECT_LOGGING_H
#define PROJECT_LOGGING_H

#include <fstream>
#include <string>
#include <time.h>
#include <algorithm>
#include <memory>
#include <thread>
#include <mutex>
#include "../confreader/confreader.h"

class logging {
    std::ofstream logfile;
    std::mutex mutex;
public:
    logging(std::string logfilename);
    ~logging();
    int write(const char* left, std::string right=std::string(""));
};

extern logging log_obj;

#endif //PROJECT_LOGGING_H
