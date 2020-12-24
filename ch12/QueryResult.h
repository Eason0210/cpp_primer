#ifndef QUERYRESULT_H
#define QUERYRESULT_H
#include "TextQuery.h"
#include <memory>
#include <set>
#include <fstream>
#include "Make_plural.h"

class QueryResult{
    friend std::ostream& print(std::ostream&, const QueryResult&);
    using line_no = std::vector<std::string>::size_type;
public:
    QueryResult (std::string s,
                 std::shared_ptr<std::set<line_no>> p,
                 std::shared_ptr<std::vector<std::string>> f):
        sought(s), lines(p), file(f) {  }
private:
    std::string sought;
    std::shared_ptr<std::set<line_no>> lines;
    std::shared_ptr<std::vector<std::string>> file;
};


std::ostream &print(std::ostream &os, const QueryResult &qr){
    os << qr.sought << " occurs " << qr.lines->size() << " "
       << make_plural(qr.lines->size(), "time", "s") << std::endl;
    for (auto num : *qr.lines)
        os << "\t (line " << num + 1 << ") "
           << *(qr.file -> begin() + num ) << std::endl;
    return os;

}

#endif
