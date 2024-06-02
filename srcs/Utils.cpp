#include "../includes/Utils.hpp"

void Utils::writeMessage(int socket, std::string const& message)
{
    if ((write(socket, message.c_str(), message.length())) < 0)
        std::cout << "Message cannot send!" << std::endl;
}

void Utils::writeAllMessage(std::vector<int> const& fds, std::string const& message)
{
    for (std::vector<int>::const_iterator it = fds.begin(); it != fds.end(); ++it) {
        writeMessage(*it, message);
    }
}

std::string Utils::intToString(int n)
{
    std::stringstream ss;
    ss << n;
    std::string str = ss.str();
    return str;
}

int Utils::portIsValid(std::string const& port)
{
    for (size_t i = 0; i < port.size(); ++i)
        if (!isdigit(port[i]))
            return 0;
	int portInt = std::atoi(port.c_str());
    if (portInt < 1024 || portInt > 49151)
        return 0;
    return 1;
}

std::string Utils::welcome()
{
    std::string data;

    data += " +-+-+-+-+-+ +-+-+-+-+-+-+-+-+-+ \n";
    data += " |L|O|G|I|N| |S|U|C|C|E|S|F|U|L| \n";
    data += " +-+-+-+-+-+ +-+-+-+-+-+-+-+-+-+ \n";

    return data;
}
