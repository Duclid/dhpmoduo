#include "Logger.h"


Logger& Logger::instance(){
    static Logger logger;
    return logger;
}

void Logger::setLogLevel(int level){
    loglevel_ = level;
}

// 打印日志： [级别] 时间 : 信息
void Logger::log(std::string msg){
    switch(loglevel_){
        case INFO:
            std::cout << "[INFO] ";
            break;
        case ERROR:
            std::cout << "[ERROR] ";
            break;
        case FATAL:
            std::cout << "[FATAL] ";
            break;
        case DEBUG:
            std::cout << "[DEBUG] ";
            break;
    }
    
    // 打印时间
    std::cout << "time" << " : " << msg << std::endl;
}

