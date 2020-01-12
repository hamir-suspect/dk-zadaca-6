#ifndef ENV_HPP
#define ENV_HPP

#include <map>
#include <string>

struct FunctionNode;

struct Environment {
  std::map<std::string, int> variables_;
  std::map<std::string, FunctionNode*> functions_;

  std::map<std::string, int>& variables() {
    return variables_;
  };

  std::map<std::string, FunctionNode*>& functions() {
    return functions_;
  };

};

#endif // ENV_HPP
