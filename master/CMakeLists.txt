project(master CXX)
set(SOURCE_FILES main.cpp main.h)
set(LOGGING ../lib/logging/logging.cpp)
set(TCPSERVER ../lib/tcpserver/tcpserver.cpp)
set(CONFREADER ../lib/confreader/confreader.cpp)
set(TCPCLIENT ../lib/tcpclient/tcpclient.cpp)
set(JSON ../lib/json/json.cpp)
set(MASTER_LIB master.cpp)
set(WATCHER_LIB watcher.cpp)
set(STORAGE ../lib/storage/storage.cpp)
set(FILE_WRITE ../lib/file_write/file_write.cpp)
add_library(logging ${LOGGING})
add_library(tcpserver ${TCPSERVER})
add_library(confreader ${CONFREADER})
add_library(json ${JSON})
add_library(master_lib ${MASTER_LIB})
add_library(storage ${STORAGE})
add_library(watcher ${WATCHER_LIB})
add_library(tcpclient ${TCPCLIENT})
add_library(file_write ${FILE_WRITE})
add_executable(master ${SOURCE_FILES})
target_link_libraries(master PUBLIC tcpserver logging confreader json master_lib storage watcher tcpclient file_write ${Boost_LIBRARIES})
