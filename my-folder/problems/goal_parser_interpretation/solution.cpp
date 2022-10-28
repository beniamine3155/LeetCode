class Solution {
public:
    string interpret(string command) {
        string s;
        for(int i=0; i<command.size(); i++)
        {
            if(command[i] == 'G')
            {
                s.push_back(command[i]);
            }
            else if(command[i] == '(' && command[i+1] == ')')
            {
                s.push_back('o');
                i++;
            }
            else if (command[i] == '(' && command[i+1] == 'a' && command[i+2] == 'l'&&command[i+3] == ')' )
            {
                s.push_back('a');
                s.push_back('l');
                i = i + 3;
            }
        }
        return s;
    }
};