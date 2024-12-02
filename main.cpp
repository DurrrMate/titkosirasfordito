#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    string number;
    string word;
    vector<char> output;
    vector<int> numbersOutput;
    while(true){
    numbersOutput.clear();
    output.clear();
    cout << "\nTo which would you like to translate?\n"
         << "1. From English->Secret\n"
         << "2. From Secret->English\n"
         << "3. Exit";
    int answer;
    int numberOfCiklusok;

    while (true){
        cin >> answer;
        if (answer < 1 || answer > 3){
            cout << "Please enter a valid answer from 1 to 3";
        }
        else {
            break;
        }
    }
    if (answer == 3){return 0;}

    if (answer == 2){
        cout << "Write in a number at least 3 characters to translate: ";
    while (true){
        cin >> number;
        if (number == "help"){
            cout << "041 = '\n" << "042 = \"\n"<< "043 = +\n"
            << "044 = !\n"<< "045 = %\n"<< "046 = /\n"
            << "047 = =\n"<< "048 = (\n" << "049 = )\n"
            << "051 = -\n" << "052 = _\n"<< "053 = *\n"
            << "054 = [\n"<< "055 = ]\n"<< "056 = $\n"
            << "057 = \\\n"<< "058 = |\n" << "059 = <\n"
            << "061 = >\n" << "062 = #\n"<< "063 = &\n"
            << "064 = @\n"<< "065 = {\n"<< "066 = }\n"
            << "067 = ,\n"<< "068 = ?\n"<< "069 = ;\n"
            << "071 = :\n" << "072 = ~\n" << "073 = `\n";


            continue;
        }
        if (number.length() < 3){
            cout << "Please write in a valid number: ";
        } else {
            break;
        }
    }

    if (number.length() % 2 == 0) {
        numberOfCiklusok = number.length() / 2;
    } else {
        numberOfCiklusok = (number.length() - 1) /2;
    }
    int position = 0;
    while (numberOfCiklusok > 0){
        bool singleDigit = false;
        if (number[position] == '0'){
            singleDigit = true;
            if (number[position+2] == '0'){
                output.push_back(number[position+1]);

            }
            if (number[position+1] == '1'){
                if (number[position+2] == '1'){output.push_back('a');}
                if (number[position+2] == '2'){output.push_back('b');}
                if (number[position+2] == '3'){output.push_back('c');}
                if (number[position+2] == '4'){output.push_back('d');}
                if (number[position+2] == '5'){output.push_back('e');}
                if (number[position+2] == '6'){output.push_back('f');}
                if (number[position+2] == '7'){output.push_back('g');}
                if (number[position+2] == '8'){output.push_back('h');}
                if (number[position+2] == '9'){output.push_back('i');}
            }
            if (number[position+1] == '2'){
                if (number[position+2] == '1'){output.push_back('j');}
                if (number[position+2] == '2'){output.push_back('k');}
                if (number[position+2] == '3'){output.push_back('l');}
                if (number[position+2] == '4'){output.push_back('m');}
                if (number[position+2] == '5'){output.push_back('n');}
                if (number[position+2] == '6'){output.push_back('o');}
                if (number[position+2] == '7'){output.push_back('p');}
                if (number[position+2] == '8'){output.push_back('q');}
                if (number[position+2] == '9'){output.push_back('r');}
            }
            if (number[position+1] == '3'){
                if (number[position+2] == '1'){output.push_back('s');}
                if (number[position+2] == '2'){output.push_back('t');}
                if (number[position+2] == '3'){output.push_back('u');}
                if (number[position+2] == '4'){output.push_back('v');}
                if (number[position+2] == '5'){output.push_back('w');}
                if (number[position+2] == '6'){output.push_back('x');}
                if (number[position+2] == '7'){output.push_back('y');}
                if (number[position+2] == '8'){output.push_back('z');}
                if (number[position+2] == '9'){output.push_back('.');}
            }
            if (number[position+1] == '4'){
                if (number[position+2] == '1'){output.push_back('\'');}
                if (number[position+2] == '2'){output.push_back('\"');}
                if (number[position+2] == '3'){output.push_back('+');}
                if (number[position+2] == '4'){output.push_back('!');}
                if (number[position+2] == '5'){output.push_back('%');}
                if (number[position+2] == '6'){output.push_back('/');}
                if (number[position+2] == '7'){output.push_back('=');}
                if (number[position+2] == '8'){output.push_back('(');}
                if (number[position+2] == '9'){output.push_back(')');}
            }

            if (number[position+1] == '5'){
                if (number[position+2] == '1'){output.push_back('-');}
                if (number[position+2] == '2'){output.push_back('_');}
                if (number[position+2] == '3'){output.push_back('*');}
                if (number[position+2] == '4'){output.push_back('[');}
                if (number[position+2] == '5'){output.push_back(']');}
                if (number[position+2] == '6'){output.push_back('$');}
                if (number[position+2] == '7'){output.push_back('\\');}
                if (number[position+2] == '8'){output.push_back('|');}
                if (number[position+2] == '9'){output.push_back('<');}

            }

            if (number[position+1] == '6'){
                if (number[position+2] == '1'){output.push_back('>');}
                if (number[position+2] == '2'){output.push_back('#');}
                if (number[position+2] == '3'){output.push_back('&');}
                if (number[position+2] == '4'){output.push_back('@');}
                if (number[position+2] == '5'){output.push_back('{');}
                if (number[position+2] == '6'){output.push_back('}');}
                if (number[position+2] == '7'){output.push_back(',');}
                if (number[position+2] == '8'){output.push_back('?');}
                if (number[position+2] == '9'){output.push_back(';');}

            }
            if (number[position+1] == '7'){
                if (number[position+2] == '1'){output.push_back(':');}
                if (number[position+2] == '2'){output.push_back('~');}
                if (number[position+2] == '3'){output.push_back('`');}
            }
        }
        if (singleDigit == true){
            numberOfCiklusok--;
            position += 3;
            continue;
        }
        if (number[position] == '1'){
            if (number[position+1] == '1' || number[position+1] == '2' || number[position+1] == '3'){
            output.push_back('a');
            } else if (number[position+1] == '4' || number[position+1] == '5' || number[position+1] == '6'){
            output.push_back('b');
            } else if (number[position+1] == '7' || number[position+1] == '8' || number[position+1] == '9'){
            output.push_back('c');
            }
        } else
        if (number[position] == '2'){
            if (number[position+1] == '1' || number[position+1] == '2' || number[position+1] == '3'){
            output.push_back('d');
            } else if (number[position+1] == '4' || number[position+1] == '5' || number[position+1] == '6'){
            output.push_back('e');
            } else if (number[position+1] == '7' || number[position+1] == '8' || number[position+1] == '9'){
            output.push_back('f');
            }
        } else
        if (number[position] == '3'){
            if (number[position+1] == '1' || number[position+1] == '2' || number[position+1] == '3'){
            output.push_back('g');
            } else if (number[position+1] == '4' || number[position+1] == '5' || number[position+1] == '6'){
            output.push_back('h');
            } else if (number[position+1] == '7' || number[position+1] == '8' || number[position+1] == '9'){
            output.push_back('i');
            }
        } else
        if (number[position] == '4'){
            if (number[position+1] == '1' || number[position+1] == '2' || number[position+1] == '3'){
            output.push_back('j');
            } else if (number[position+1] == '4' || number[position+1] == '5' || number[position+1] == '6'){
            output.push_back('k');
            } else if (number[position+1] == '7' || number[position+1] == '8' || number[position+1] == '9'){
            output.push_back('l');
            }
        }else
        if (number[position] == '5'){
            if (number[position+1] == '1' || number[position+1] == '2' || number[position+1] == '3'){
            output.push_back('m');
            } else if (number[position+1] == '4' || number[position+1] == '5' || number[position+1] == '6'){
            output.push_back('n');
            } else if (number[position+1] == '7' || number[position+1] == '8' || number[position+1] == '9'){
            output.push_back('o');
            }
        }else
        if (number[position] == '6'){
            if (number[position+1] == '1' || number[position+1] == '2' || number[position+1] == '3'){
            output.push_back('p');
            } else if (number[position+1] == '4' || number[position+1] == '5' || number[position+1] == '6'){
            output.push_back('q');
            } else if (number[position+1] == '7' || number[position+1] == '8' || number[position+1] == '9'){
            output.push_back('r');
            }
        }else
        if (number[position] == '7'){
            if (number[position+1] == '1' || number[position+1] == '2' || number[position+1] == '3'){
            output.push_back('s');
            } else if (number[position+1] == '4' || number[position+1] == '5' || number[position+1] == '6'){
            output.push_back('t');
            } else if (number[position+1] == '7' || number[position+1] == '8' || number[position+1] == '9'){
            output.push_back('u');
            }
        }else
        if (number[position] == '8'){
            if (number[position+1] == '1' || number[position+1] == '2' || number[position+1] == '3'){
            output.push_back('v');
            } else if (number[position+1] == '4' || number[position+1] == '5' || number[position+1] == '6'){
            output.push_back('w');
            } else if (number[position+1] == '7' || number[position+1] == '8' || number[position+1] == '9'){
            output.push_back('x');
            }
        }else
        if (number[position] == '9'){
            if (number[position+1] == '1' || number[position+1] == '2' || number[position+1] == '3'){
            output.push_back('y');
            } else if (number[position+1] == '4' || number[position+1] == '5' || number[position+1] == '6'){
            output.push_back('z');
            } else if (number[position+1] == '7' || number[position+1] == '8' || number[position+1] == '9'){
            output.push_back('.');

            }
        }

        if (number[position+1] == '1' || number[position+1] == '4' || number[position+1] == '7'){
            if (number[position+2] == '1') {
                output.push_back('a');
            }else
            if (number[position+2] == '2') {
                output.push_back('b');
            }else
            if (number[position+2] == '3') {
                output.push_back('c');
            }else
            if (number[position+2] == '4') {
                output.push_back('d');
            }else
            if (number[position+2] == '5') {
                output.push_back('e');
            }else
            if (number[position+2] == '6') {
                output.push_back('f');
            }else
            if (number[position+2] == '7') {
                output.push_back('g');
            }else
            if (number[position+2] == '8') {
                output.push_back('h');
            }else
            if (number[position+2] == '9') {
                output.push_back('i');
            }


        }else
        if (number[position+1] == '2' || number[position+1] == '5' || number[position+1] == '8'){
            if (number[position+2] == '1') {
                output.push_back('j');
            }else
            if (number[position+2] == '2') {
                output.push_back('k');
            }else
            if (number[position+2] == '3') {
                output.push_back('l');
            }else
            if (number[position+2] == '4') {
                output.push_back('m');
            }else
            if (number[position+2] == '5') {
                output.push_back('n');
            }else
            if (number[position+2] == '6') {
                output.push_back('o');
            }else
            if (number[position+2] == '7') {
                output.push_back('p');
            }else
            if (number[position+2] == '8') {
                output.push_back('q');
            }else
            if (number[position+2] == '9') {
                output.push_back('r');
            }
        }else
        if (number[position+1] == '3' || number[position+1] == '6' || number[position+1] == '9'){
            if (number[position+2] == '1') {
                output.push_back('s');
            }else
            if (number[position+2] == '2') {
                output.push_back('t');
            }else
            if (number[position+2] == '3') {
                output.push_back('u');
            }else
            if (number[position+2] == '4') {
                output.push_back('v');
            }else
            if (number[position+2] == '5') {
                output.push_back('w');
            }else
            if (number[position+2] == '6') {
                output.push_back('x');
            }else
            if (number[position+2] == '7') {
                output.push_back('y');
            }else
            if (number[position+2] == '8') {
                output.push_back('z');
            }else
            if (number[position+2] == '9') {
                output.push_back('.');
            }
        }
        numberOfCiklusok--;
        position = position + 3;
    }
    for (int x = 0; x < output.size() ; x++)
    {
        cout << output[x];
    }
    } else if (answer == 1){
        cout << "Write in a word or a sentence to translate: ";
        cin >> word;
        /*if (word.length() % 2 == 1 && !word.length() == 1){
           word = word + '.';
        }
        if (word.length() == 1){
            numberOfCiklusok = 1;
        }
        if (word.length() % 2 == 0){
            numberOfCiklusok = word.length() / 2;
        }*/

        int position = 0;
        int x = word.length();
        while (x > 0){
        bool singleDigit = false;

            if (word[position] == '1') {numbersOutput.push_back(0); numbersOutput.push_back(1); numbersOutput.push_back(0); singleDigit = true;}
            if (word[position] == '2') {numbersOutput.push_back(0); numbersOutput.push_back(2); numbersOutput.push_back(0); singleDigit = true;}
            if (word[position] == '3') {numbersOutput.push_back(0); numbersOutput.push_back(3); numbersOutput.push_back(0); singleDigit = true;}
            if (word[position] == '4') {numbersOutput.push_back(0); numbersOutput.push_back(4); numbersOutput.push_back(0); singleDigit = true;}
            if (word[position] == '5') {numbersOutput.push_back(0); numbersOutput.push_back(5); numbersOutput.push_back(0); singleDigit = true;}
            if (word[position] == '6') {numbersOutput.push_back(0); numbersOutput.push_back(6); numbersOutput.push_back(0); singleDigit = true;}
            if (word[position] == '7') {numbersOutput.push_back(0); numbersOutput.push_back(7); numbersOutput.push_back(0); singleDigit = true;}
            if (word[position] == '8') {numbersOutput.push_back(0); numbersOutput.push_back(8); numbersOutput.push_back(0); singleDigit = true;}
            if (word[position] == '9') {numbersOutput.push_back(0); numbersOutput.push_back(9); numbersOutput.push_back(0); singleDigit = true;}
            bool isNextCharacterOne = false;
            if (word[position+1] == '1' ||
                word[position+1] == '2' ||
                word[position+1] == '3' ||
                word[position+1] == '4' ||
                word[position+1] == '5' ||
                word[position+1] == '6' ||
                word[position+1] == '7' ||
                word[position+1] == '8' ||
                word[position+1] == '9' ||
                word[position+1] == '\'' ||
                word[position+1] == '\"' ||
                word[position+1] == '+' ||
                word[position+1] == '!' ||
                word[position+1] == '%' ||
                word[position+1] == '/' ||
                word[position+1] == '=' ||
                word[position+1] == '(' ||
                word[position+1] == ')' ||
                word[position+1] == '-' ||
                word[position+1] == '_' ||
                word[position+1] == '*' ||
                word[position+1] == '[' ||
                word[position+1] == ']' ||
                word[position+1] == '$' ||
                word[position+1] == '\\' ||
                word[position+1] == '|' ||
                word[position+1] == '<' ||
                word[position+1] == '>' ||
                word[position+1] == '#' ||
                word[position+1] == '&' ||
                word[position+1] == '@' ||
                word[position+1] == '{' ||
                word[position+1] == '}' ||
                word[position+1] == ',' ||
                word[position+1] == '?' ||
                word[position+1] == ';' ||
                word[position+1] == ':' ||
                word[position+1] == '~' ||
                word[position+1] == '`'
                ){
                    isNextCharacterOne = true;
                }
            if (x == 1 || isNextCharacterOne == true){
                    singleDigit = true;
                if (word[position] == 'a'){numbersOutput.push_back(0); numbersOutput.push_back(1); numbersOutput.push_back(1); singleDigit = true;}
                if (word[position] == 'b'){numbersOutput.push_back(0); numbersOutput.push_back(1); numbersOutput.push_back(2); singleDigit = true;}
                if (word[position] == 'c'){numbersOutput.push_back(0); numbersOutput.push_back(1); numbersOutput.push_back(3); singleDigit = true;}
                if (word[position] == 'd'){numbersOutput.push_back(0); numbersOutput.push_back(1); numbersOutput.push_back(4); singleDigit = true;}
                if (word[position] == 'e'){numbersOutput.push_back(0); numbersOutput.push_back(1); numbersOutput.push_back(5); singleDigit = true;}
                if (word[position] == 'f'){numbersOutput.push_back(0); numbersOutput.push_back(1); numbersOutput.push_back(6); singleDigit = true;}
                if (word[position] == 'g'){numbersOutput.push_back(0); numbersOutput.push_back(1); numbersOutput.push_back(7); singleDigit = true;}
                if (word[position] == 'h'){numbersOutput.push_back(0); numbersOutput.push_back(1); numbersOutput.push_back(8); singleDigit = true;}
                if (word[position] == 'i'){numbersOutput.push_back(0); numbersOutput.push_back(1); numbersOutput.push_back(9); singleDigit = true;}
                if (word[position] == 'j'){numbersOutput.push_back(0); numbersOutput.push_back(2); numbersOutput.push_back(1); singleDigit = true;}
                if (word[position] == 'k'){numbersOutput.push_back(0); numbersOutput.push_back(2); numbersOutput.push_back(2); singleDigit = true;}
                if (word[position] == 'l'){numbersOutput.push_back(0); numbersOutput.push_back(2); numbersOutput.push_back(3); singleDigit = true;}
                if (word[position] == 'm'){numbersOutput.push_back(0); numbersOutput.push_back(2); numbersOutput.push_back(4); singleDigit = true;}
                if (word[position] == 'n'){numbersOutput.push_back(0); numbersOutput.push_back(2); numbersOutput.push_back(5); singleDigit = true;}
                if (word[position] == 'o'){numbersOutput.push_back(0); numbersOutput.push_back(2); numbersOutput.push_back(6); singleDigit = true;}
                if (word[position] == 'p'){numbersOutput.push_back(0); numbersOutput.push_back(2); numbersOutput.push_back(7); singleDigit = true;}
                if (word[position] == 'q'){numbersOutput.push_back(0); numbersOutput.push_back(2); numbersOutput.push_back(8); singleDigit = true;}
                if (word[position] == 'r'){numbersOutput.push_back(0); numbersOutput.push_back(2); numbersOutput.push_back(9); singleDigit = true;}
                if (word[position] == 's'){numbersOutput.push_back(0); numbersOutput.push_back(3); numbersOutput.push_back(1); singleDigit = true;}
                if (word[position] == 't'){numbersOutput.push_back(0); numbersOutput.push_back(3); numbersOutput.push_back(2); singleDigit = true;}
                if (word[position] == 'u'){numbersOutput.push_back(0); numbersOutput.push_back(3); numbersOutput.push_back(3); singleDigit = true;}
                if (word[position] == 'v'){numbersOutput.push_back(0); numbersOutput.push_back(3); numbersOutput.push_back(4); singleDigit = true;}
                if (word[position] == 'w'){numbersOutput.push_back(0); numbersOutput.push_back(3); numbersOutput.push_back(5); singleDigit = true;}
                if (word[position] == 'x'){numbersOutput.push_back(0); numbersOutput.push_back(3); numbersOutput.push_back(6); singleDigit = true;}
                if (word[position] == 'y'){numbersOutput.push_back(0); numbersOutput.push_back(3); numbersOutput.push_back(7); singleDigit = true;}
                if (word[position] == 'z'){numbersOutput.push_back(0); numbersOutput.push_back(3); numbersOutput.push_back(8); singleDigit = true;}
                if (word[position] == '.'){numbersOutput.push_back(0); numbersOutput.push_back(3); numbersOutput.push_back(9); singleDigit = true;}
            }
                if (word[position] == '\''){numbersOutput.push_back(0); numbersOutput.push_back(4); numbersOutput.push_back(1); singleDigit = true;}
                if (word[position] == '\"'){numbersOutput.push_back(0); numbersOutput.push_back(4); numbersOutput.push_back(2); singleDigit = true;}
                if (word[position] == '+'){numbersOutput.push_back(0); numbersOutput.push_back(4); numbersOutput.push_back(3); singleDigit = true;}
                if (word[position] == '!'){numbersOutput.push_back(0); numbersOutput.push_back(4); numbersOutput.push_back(4); singleDigit = true;}
                if (word[position] == '%'){numbersOutput.push_back(0); numbersOutput.push_back(4); numbersOutput.push_back(5); singleDigit = true;}
                if (word[position] == '/'){numbersOutput.push_back(0); numbersOutput.push_back(4); numbersOutput.push_back(6); singleDigit = true;}
                if (word[position] == '='){numbersOutput.push_back(0); numbersOutput.push_back(4); numbersOutput.push_back(7); singleDigit = true;}
                if (word[position] == '('){numbersOutput.push_back(0); numbersOutput.push_back(4); numbersOutput.push_back(8); singleDigit = true;}
                if (word[position] == ')'){numbersOutput.push_back(0); numbersOutput.push_back(4); numbersOutput.push_back(9); singleDigit = true;}
                if (word[position] == '-'){numbersOutput.push_back(0); numbersOutput.push_back(5); numbersOutput.push_back(1); singleDigit = true;}
                if (word[position] == '_'){numbersOutput.push_back(0); numbersOutput.push_back(5); numbersOutput.push_back(2); singleDigit = true;}
                if (word[position] == '*'){numbersOutput.push_back(0); numbersOutput.push_back(5); numbersOutput.push_back(3); singleDigit = true;}
                if (word[position] == '['){numbersOutput.push_back(0); numbersOutput.push_back(5); numbersOutput.push_back(4); singleDigit = true;}
                if (word[position] == ']'){numbersOutput.push_back(0); numbersOutput.push_back(5); numbersOutput.push_back(5); singleDigit = true;}
                if (word[position] == '$'){numbersOutput.push_back(0); numbersOutput.push_back(5); numbersOutput.push_back(6); singleDigit = true;}
                if (word[position] == '\\'){numbersOutput.push_back(0); numbersOutput.push_back(5); numbersOutput.push_back(7); singleDigit = true;}
                if (word[position] == '|'){numbersOutput.push_back(0); numbersOutput.push_back(5); numbersOutput.push_back(8); singleDigit = true;}
                if (word[position] == '<'){numbersOutput.push_back(0); numbersOutput.push_back(5); numbersOutput.push_back(9); singleDigit = true;}
                if (word[position] == '>'){numbersOutput.push_back(0); numbersOutput.push_back(6); numbersOutput.push_back(1); singleDigit = true;}
                if (word[position] == '#'){numbersOutput.push_back(0); numbersOutput.push_back(6); numbersOutput.push_back(2); singleDigit = true;}
                if (word[position] == '&'){numbersOutput.push_back(0); numbersOutput.push_back(6); numbersOutput.push_back(3); singleDigit = true;}
                if (word[position] == '@'){numbersOutput.push_back(0); numbersOutput.push_back(6); numbersOutput.push_back(4); singleDigit = true;}
                if (word[position] == '{'){numbersOutput.push_back(0); numbersOutput.push_back(6); numbersOutput.push_back(5); singleDigit = true;}
                if (word[position] == '}'){numbersOutput.push_back(0); numbersOutput.push_back(6); numbersOutput.push_back(6); singleDigit = true;}
                if (word[position] == ','){numbersOutput.push_back(0); numbersOutput.push_back(6); numbersOutput.push_back(7); singleDigit = true;}
                if (word[position] == '?'){numbersOutput.push_back(0); numbersOutput.push_back(6); numbersOutput.push_back(8); singleDigit = true;}
                if (word[position] == ';'){numbersOutput.push_back(0); numbersOutput.push_back(6); numbersOutput.push_back(9); singleDigit = true;}
                if (word[position] == ':'){numbersOutput.push_back(0); numbersOutput.push_back(7); numbersOutput.push_back(1); singleDigit = true;}
                if (word[position] == '~'){numbersOutput.push_back(0); numbersOutput.push_back(7); numbersOutput.push_back(2); singleDigit = true;}
                if (word[position] == '`'){numbersOutput.push_back(0); numbersOutput.push_back(7); numbersOutput.push_back(3); singleDigit = true;}






            if (singleDigit == true){
                x--;
                position++;
               // numberOfCiklusok--;
                continue;
            }


            //                    123                      456                      789
            if (word[position] == 'a' || word[position] == 'b' || word[position] == 'c'){
                numbersOutput.push_back(1);
            }
            if (word[position] == 'd' || word[position] == 'e' || word[position] == 'f'){
                numbersOutput.push_back(2);
            }
            if (word[position] == 'g' || word[position] == 'h' || word[position] == 'i'){
                numbersOutput.push_back(3);
            }
            if (word[position] == 'j' || word[position] == 'k' || word[position] == 'l'){
                numbersOutput.push_back(4);
            }
            if (word[position] == 'm' || word[position] == 'n' || word[position] == 'o'){
                numbersOutput.push_back(5);
            }
            if (word[position] == 'p' || word[position] == 'q' || word[position] == 'r'){
                numbersOutput.push_back(6);
            }
            if (word[position] == 's' || word[position] == 't' || word[position] == 'u'){
                numbersOutput.push_back(7);
            }
            if (word[position] == 'v' || word[position] == 'w' || word[position] == 'x'){
                numbersOutput.push_back(8);
            }
            if (word[position] == 'y' || word[position] == 'z' || word[position] == '.'){
                numbersOutput.push_back(9);
            }

            if (word[position] == 'a' ||
                word[position] == 'd' ||
                word[position] == 'g' ||
                word[position] == 'j' ||
                word[position] == 'm' ||
                word[position] == 'p' ||
                word[position] == 's' ||
                word[position] == 'v' ||
                word[position] == 'y' ){
                if (word[position+1] == 'a') {numbersOutput.push_back(1); numbersOutput.push_back(1);}
                if (word[position+1] == 'b') {numbersOutput.push_back(1); numbersOutput.push_back(2);}
                if (word[position+1] == 'c') {numbersOutput.push_back(1); numbersOutput.push_back(3);}
                if (word[position+1] == 'd') {numbersOutput.push_back(1); numbersOutput.push_back(4);}
                if (word[position+1] == 'e') {numbersOutput.push_back(1); numbersOutput.push_back(5);}
                if (word[position+1] == 'f') {numbersOutput.push_back(1); numbersOutput.push_back(6);}
                if (word[position+1] == 'g') {numbersOutput.push_back(1); numbersOutput.push_back(7);}
                if (word[position+1] == 'h') {numbersOutput.push_back(1); numbersOutput.push_back(8);}
                if (word[position+1] == 'i') {numbersOutput.push_back(1); numbersOutput.push_back(9);}
                if (word[position+1] == 'j') {numbersOutput.push_back(2); numbersOutput.push_back(1);}
                if (word[position+1] == 'k') {numbersOutput.push_back(2); numbersOutput.push_back(2);}
                if (word[position+1] == 'l') {numbersOutput.push_back(2); numbersOutput.push_back(3);}
                if (word[position+1] == 'm') {numbersOutput.push_back(2); numbersOutput.push_back(4);}
                if (word[position+1] == 'n') {numbersOutput.push_back(2); numbersOutput.push_back(5);}
                if (word[position+1] == 'o') {numbersOutput.push_back(2); numbersOutput.push_back(6);}
                if (word[position+1] == 'p') {numbersOutput.push_back(2); numbersOutput.push_back(7);}
                if (word[position+1] == 'q') {numbersOutput.push_back(2); numbersOutput.push_back(8);}
                if (word[position+1] == 'r') {numbersOutput.push_back(2); numbersOutput.push_back(9);}
                if (word[position+1] == 's') {numbersOutput.push_back(3); numbersOutput.push_back(1);}
                if (word[position+1] == 't') {numbersOutput.push_back(3); numbersOutput.push_back(2);}
                if (word[position+1] == 'u') {numbersOutput.push_back(3); numbersOutput.push_back(3);}
                if (word[position+1] == 'v') {numbersOutput.push_back(3); numbersOutput.push_back(4);}
                if (word[position+1] == 'w') {numbersOutput.push_back(3); numbersOutput.push_back(5);}
                if (word[position+1] == 'x') {numbersOutput.push_back(3); numbersOutput.push_back(6);}
                if (word[position+1] == 'y') {numbersOutput.push_back(3); numbersOutput.push_back(7);}
                if (word[position+1] == 'z') {numbersOutput.push_back(3); numbersOutput.push_back(8);}
                if (word[position+1] == '.') {numbersOutput.push_back(3); numbersOutput.push_back(9);}
                }
            if (word[position] == 'b' ||
                word[position] == 'e' ||
                word[position] == 'h' ||
                word[position] == 'k' ||
                word[position] == 'n' ||
                word[position] == 'q' ||
                word[position] == 't' ||
                word[position] == 'w' ||
                word[position] == 'z' ){
                if (word[position+1] == 'a') {numbersOutput.push_back(4); numbersOutput.push_back(1);}
                if (word[position+1] == 'b') {numbersOutput.push_back(4); numbersOutput.push_back(2);}
                if (word[position+1] == 'c') {numbersOutput.push_back(4); numbersOutput.push_back(3);}
                if (word[position+1] == 'd') {numbersOutput.push_back(4); numbersOutput.push_back(4);}
                if (word[position+1] == 'e') {numbersOutput.push_back(4); numbersOutput.push_back(5);}
                if (word[position+1] == 'f') {numbersOutput.push_back(4); numbersOutput.push_back(6);}
                if (word[position+1] == 'g') {numbersOutput.push_back(4); numbersOutput.push_back(7);}
                if (word[position+1] == 'h') {numbersOutput.push_back(4); numbersOutput.push_back(8);}
                if (word[position+1] == 'i') {numbersOutput.push_back(4); numbersOutput.push_back(9);}
                if (word[position+1] == 'j') {numbersOutput.push_back(5); numbersOutput.push_back(1);}
                if (word[position+1] == 'k') {numbersOutput.push_back(5); numbersOutput.push_back(2);}
                if (word[position+1] == 'l') {numbersOutput.push_back(5); numbersOutput.push_back(3);}
                if (word[position+1] == 'm') {numbersOutput.push_back(5); numbersOutput.push_back(4);}
                if (word[position+1] == 'n') {numbersOutput.push_back(5); numbersOutput.push_back(5);}
                if (word[position+1] == 'o') {numbersOutput.push_back(5); numbersOutput.push_back(6);}
                if (word[position+1] == 'p') {numbersOutput.push_back(5); numbersOutput.push_back(7);}
                if (word[position+1] == 'q') {numbersOutput.push_back(5); numbersOutput.push_back(8);}
                if (word[position+1] == 'r') {numbersOutput.push_back(5); numbersOutput.push_back(9);}
                if (word[position+1] == 's') {numbersOutput.push_back(6); numbersOutput.push_back(1);}
                if (word[position+1] == 't') {numbersOutput.push_back(6); numbersOutput.push_back(2);}
                if (word[position+1] == 'u') {numbersOutput.push_back(6); numbersOutput.push_back(3);}
                if (word[position+1] == 'v') {numbersOutput.push_back(6); numbersOutput.push_back(4);}
                if (word[position+1] == 'w') {numbersOutput.push_back(6); numbersOutput.push_back(5);}
                if (word[position+1] == 'x') {numbersOutput.push_back(6); numbersOutput.push_back(6);}
                if (word[position+1] == 'y') {numbersOutput.push_back(6); numbersOutput.push_back(7);}
                if (word[position+1] == 'z') {numbersOutput.push_back(6); numbersOutput.push_back(8);}
                if (word[position+1] == '.') {numbersOutput.push_back(6); numbersOutput.push_back(9);}
                }
            if (word[position] == 'c' ||
                word[position] == 'f' ||
                word[position] == 'i' ||
                word[position] == 'l' ||
                word[position] == 'o' ||
                word[position] == 'r' ||
                word[position] == 'u' ||
                word[position] == 'x' ||
                word[position] == '.' ){
                if (word[position+1] == 'a') {numbersOutput.push_back(7); numbersOutput.push_back(1);}
                if (word[position+1] == 'b') {numbersOutput.push_back(7); numbersOutput.push_back(2);}
                if (word[position+1] == 'c') {numbersOutput.push_back(7); numbersOutput.push_back(3);}
                if (word[position+1] == 'd') {numbersOutput.push_back(7); numbersOutput.push_back(4);}
                if (word[position+1] == 'e') {numbersOutput.push_back(7); numbersOutput.push_back(5);}
                if (word[position+1] == 'f') {numbersOutput.push_back(7); numbersOutput.push_back(6);}
                if (word[position+1] == 'g') {numbersOutput.push_back(7); numbersOutput.push_back(7);}
                if (word[position+1] == 'h') {numbersOutput.push_back(7); numbersOutput.push_back(8);}
                if (word[position+1] == 'i') {numbersOutput.push_back(7); numbersOutput.push_back(9);}
                if (word[position+1] == 'j') {numbersOutput.push_back(8); numbersOutput.push_back(1);}
                if (word[position+1] == 'k') {numbersOutput.push_back(8); numbersOutput.push_back(2);}
                if (word[position+1] == 'l') {numbersOutput.push_back(8); numbersOutput.push_back(3);}
                if (word[position+1] == 'm') {numbersOutput.push_back(8); numbersOutput.push_back(4);}
                if (word[position+1] == 'n') {numbersOutput.push_back(8); numbersOutput.push_back(5);}
                if (word[position+1] == 'o') {numbersOutput.push_back(8); numbersOutput.push_back(6);}
                if (word[position+1] == 'p') {numbersOutput.push_back(8); numbersOutput.push_back(7);}
                if (word[position+1] == 'q') {numbersOutput.push_back(8); numbersOutput.push_back(8);}
                if (word[position+1] == 'r') {numbersOutput.push_back(8); numbersOutput.push_back(9);}
                if (word[position+1] == 's') {numbersOutput.push_back(9); numbersOutput.push_back(1);}
                if (word[position+1] == 't') {numbersOutput.push_back(9); numbersOutput.push_back(2);}
                if (word[position+1] == 'u') {numbersOutput.push_back(9); numbersOutput.push_back(3);}
                if (word[position+1] == 'v') {numbersOutput.push_back(9); numbersOutput.push_back(4);}
                if (word[position+1] == 'w') {numbersOutput.push_back(9); numbersOutput.push_back(5);}
                if (word[position+1] == 'x') {numbersOutput.push_back(9); numbersOutput.push_back(6);}
                if (word[position+1] == 'y') {numbersOutput.push_back(9); numbersOutput.push_back(7);}
                if (word[position+1] == 'z') {numbersOutput.push_back(9); numbersOutput.push_back(8);}
                if (word[position+1] == '.') {numbersOutput.push_back(9); numbersOutput.push_back(9);}
                }





            x -= 2;
            //numbersPosition += 3;
            position = position + 2;

        }
    for (int x = 0; numbersOutput.size() > x; x++)
    {
        cout << numbersOutput[x];
    }

    }
    }
    cout << endl;

    return 0;
}

