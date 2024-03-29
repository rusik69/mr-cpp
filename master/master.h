#ifndef PROJECT_MASTER_H
#define PROJECT_MASTER_H

#include "../lib/confreader/confreader.h"
#include "../lib/logging/logging.h"
#include "../lib/tcpserver/tcpserver.h"
#include "../lib/json/json.h"
#include "../lib/storage/storage.h"
#include "../lib/file_write/file_write.h"
#include <iostream>

class master{
	const std::string server_port;
	int write_to_file(std::string kind, std::string name, std::string data);
public:
	master();
	~master();
	void listen();
	std::string do_action(std::unordered_map<std::string, std::string> json_map);
};

#endif //PROJECT_MASTER_H
