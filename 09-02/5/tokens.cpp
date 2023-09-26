//разбить арифметическое выражение 24 - (7 + 3)* 2 на токены 

#include <iostream>
#include <string>
#include <vector>

class Tokenizer {
public:
    Tokenizer(const std::string& expression) : expression_(expression) {}

    std::vector<std::string> GetTokens() {
        std::vector<std::string> tokens;
        std::string current_token;

        for (char c : expression_) {
            if (IsOperator(c) || IsParenthesis(c)) {
                if (!current_token.empty()) {
                    tokens.push_back(current_token);
                    current_token.clear();
                }
                tokens.push_back(std::string(1, c));
            } else if (IsDigit(c)) {
                current_token += c;
            }
        }

        if (!current_token.empty()) {
            tokens.push_back(current_token);
        }

        return tokens;
    }

private:
    bool IsOperator(char c) {
        return c == '+' || c == '-' || c == '*' || c == '/';
    }

    bool IsParenthesis(char c) {
        return c == '(' || c == ')';
    }

    bool IsDigit(char c) {
        return c >= '0' && c <= '9';
    }

    std::string expression_;
};

int main() {
    std::string expression = "24-(7+3)*2";
    Tokenizer tokenizer(expression);
    std::vector<std::string> tokens = tokenizer.GetTokens();

    for (const auto& token : tokens) {
        std::cout << token << std::endl;
    }

    return 0;
}
  


