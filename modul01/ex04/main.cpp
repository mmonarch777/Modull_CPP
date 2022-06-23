#include "Header.hpp"

int main(int arc, char **arv)
{
    if (arc != 4)
        error();
    std::string buf;
    std::string file = arv[1];
    std::string s1 = arv[2];
    std::string s2 = arv[3];
    std::string infile;

    if (!file.length() || !s1.length() || !s2.length())
        error();
    std::ifstream readfile(file);
    if (readfile.fail())
        error();
    std::ofstream writefile;
    if (writefile.fail())
        error();
    writefile.open(file + ".replace");
    std::getline(readfile, buf);
    size_t pos = 0;
    pos = buf.find(s1, pos);
    while (pos != std::string::npos)
    {
        buf.erase(pos, s1.length());
        buf.insert(pos, s2);
        pos = buf.find(s1, pos + s2.length());
    }
    writefile << buf << std::endl;
    readfile.close();
    writefile.close();
    return 0;
}