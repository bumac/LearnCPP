class Solution {
public:
    string interpret(string command) {
        string result = "";
        for(int i = 0; i < command.size(); i++){
            if (command[i] == 'G'){
                result.push_back('G');
            }
            
            if (i < command.size() - 1){
                if (command[i] == '('){
                    if (command[i + 1] == ')'){
                        ++i;
                        result.push_back('o');
                    }
                    else{
                        i += 3;
                        result.push_back('a');
                        result.push_back('l');
                    }
                }
            }
        }
        return result;
    }
};