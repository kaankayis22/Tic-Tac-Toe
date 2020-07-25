#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>


using namespace std;

int main() {
int random;
srand(unsigned(time(0)));
random = rand()%10+1;
cout << random;





string c1,c2,c3,c4,c5,c6,c7,c8,c9;
int ch1,ch2,ch3,ch4,ch5,ch6,ch7,ch8,ch9;
c1 = " ";
c2 = " ";
c3 = " ";
c4 = " ";
c5 = " ";
c6 = " ";
c7 = " ";
c8 = " ";
c9 = " ";
ch1 = 1;
ch2 = 2;
ch3 = 3;
ch4 = 4;
ch5 = 5;
ch6 = 6;
ch7 = 7;
c8 = 8;
ch9 = 9;
int i=0;
int x=0;
string o;
string choice;
int bot;
int mbot;
cout << "Welcome to Tic-Tac-Toe!" <<endl << "You will be X, and the CPU will be O. This is classic Tic-Tac-Toe, but you can steal spaces!" << endl;
cout << "Enter (begin) to begin, or (inst) for instructions: ";
cin >> o;

if (o=="begin") {

do {
cout << " a       b      c"<< endl;
cout << "      |     |     " << endl;
cout << "1  " << c1 << "  |  " <<  c2 << "  | " << c3 << "     " << endl;
cout << " _____|_____|_____" << endl;
cout << "      |     |     " << endl;
cout << "2  " << c4 << "  |  " <<  c5 << "  | " << c6 << "     " << endl;
cout << " _____|_____|_____" <<endl;
cout << "      |     |     " <<endl;
cout << "3  " << c7 << "  |  " <<  c8 << "    | " << c9 << "     " << endl;
cout << "      |     |     " << endl;

cout << "Please enter your move (as A1 or C3)" << endl;
cin >> choice;
x=0;
/////////////////////
if (choice == "A1" or choice == "a1") {
  c1 = "X";
  cout << "The CPU is calculating it's move.... " << endl;
  bot = random ;

   if (bot == 1) {
     c1 = "O";
   }
   if (bot == 2) {
     c2 = "O";
   }
   if (bot == 3) {
     c3 = "O";
   }
   if (bot == 4) {
     c4 = "O";
   }
   if (bot == 5) {
     c5 = "O";
   }
   if (bot == 6) {
     c6 = "O";
   }
  if (bot == 7) {
     c7 = "O";
   }
   if (bot == 8) {
     c8 = "O";
   }
   if (bot == 9) {
     c9 = "O";
   }
   srand(unsigned(time(0)));
random = rand()%10;
  x=1;

}

if (choice == "A2" or choice == "a2" ) {
  c4 = "X";
  cout << "The CPU is calculating it's move.... " << endl;
  bot = random ;
  
   if (bot == 1) {
     c1 = "O";
   }
   if (bot == 2) {
     c2 = "O";
   }
   if (bot == 3) {
     c3 = "O";
   }
   if (bot == 4) {
     c4 = "O";
   }
   if (bot == 5) {
     c5 = "O";
   }
   if (bot == 6) {
     c6 = "O";
   }
  if (bot == 7) {
     c7 = "O";
   }
   if (bot == 8) {
     c8 = "O";
   }
   if (bot == 9) {
     c9 = "O";
   }
   srand(unsigned(time(0)));
random = rand()%10;

    
  
  x=1;

}

if (choice == "A3" or choice == "a3" ) {
  c7 = "X";
  cout << "The CPU is calculating it's move.... " << endl;
  bot = random ;

   if (bot == 1) {
     c1 = "O";
   }
   if (bot == 2) {
     c2 = "O";
   }
   if (bot == 3) {
     c3 = "O";
   }
   if (bot == 4) {
     c4 = "O";
   }
   if (bot == 5) {
     c5 = "O";
   }
   if (bot == 6) {
     c6 = "O";
   }
  if (bot == 7) {
     c7 = "O";
   }
   if (bot == 8) {
     c8 = "O";
   }
   if (bot == 9) {
     c9 = "O";
   }
   srand(unsigned(time(0)));
random = rand()%10;

    
  
  x=1;

}
if (choice == "B1" or choice == "b1" ) {
  c2 = "X";
  cout << "The CPU is calculating it's move.... " << endl;
  bot = random ;
  
   if (bot == 1) {
     c1 = "O";
   }
   if (bot == 2) {
     c2 = "O";
   }
   if (bot == 3) {
     c3 = "O";
   }
   if (bot == 4) {
     c4 = "O";
   }
   if (bot == 5) {
     c5 = "O";
   }
   if (bot == 6) {
     c6 = "O";
   }
  if (bot == 7) {
     c7 = "O";
   }
   if (bot == 8) {
     c8 = "O";
   }
   if (bot == 9) {
     c9 = "O";
   }
   srand(unsigned(time(0)));
random = rand()%10;

    
  
  x=1;

}

if (choice == "B2" or choice == "b2" ) {
  c5 = "X";
  cout << "The CPU is calculating it's move.... " << endl;
  bot = random ;
  
   if (bot == 1) {
     c1 = "O";
   }
   if (bot == 2) {
     c2 = "O";
   }
   if (bot == 3) {
     c3 = "O";
   }
   if (bot == 4) {
     c4 = "O";
   }
   if (bot == 5) {
     c5 = "O";
   }
   if (bot == 6) {
     c6 = "O";
   }
  if (bot == 7) {
     c7 = "O";
   }
   if (bot == 8) {
     c8 = "O";
   }
   if (bot == 9) {
     c9 = "O";
   }
   srand(unsigned(time(0)));
random = rand()%10;

    
  
  x=1;

}

if (choice == " B3" or choice == "b3" ) {
  c8 = "X";
  cout << "The CPU is calculating it's move.... " << endl;
  bot = random ;

   if (bot == 1) {
     c1 = "O";
   }
   if (bot == 2) {
     c2 = "O";
   }
   if (bot == 3) {
     c3 = "O";
   }
   if (bot == 4) {
     c4 = "O";
   }
   if (bot == 5) {
     c5 = "O";
   }
   if (bot == 6) {
     c6 = "O";
   }
  if (bot == 7) {
     c7 = "O";
   }
   if (bot == 8) {
     c8 = "O";
   }
   if (bot == 9) {
     c9 = "O";
   }
   srand(unsigned(time(0)));
random = rand()%10;

    
  
  x=1;

}
if (choice == "C1" or choice == "c1" ) {
  c3 = "X";
  cout << "The CPU is calculating it's move.... " << endl;
  bot = random ;

   if (bot == 1) {
     c1 = "O";
   }
   if (bot == 2) {
     c2 = "O";
   }
   if (bot == 3) {
     c3 = "O";
   }
   if (bot == 4) {
     c4 = "O";
   }
   if (bot == 5) {
     c5 = "O";
   }
   if (bot == 6) {
     c6 = "O";
   }
  if (bot == 7) {
     c7 = "O";
   }
   if (bot == 8) {
     c8 = "O";
   }
   if (bot == 9) {
     c9 = "O";
   }
   srand(unsigned(time(0)));
random = rand()%10;

    
  
  x=1;

}

if (choice == "c2" or choice == "C2" ) {
  c6 = "X";
  cout << "The CPU is calculating it's move.... " << endl;
  bot = random ;
 
   if (bot == 1) {
     c1 = "O";
   }
   if (bot == 2) {
     c2 = "O";
   }
   if (bot == 3) {
     c3 = "O";
   }
   if (bot == 4) {
     c4 = "O";
   }
   if (bot == 5) {
     c5 = "O";
   }
   if (bot == 6) {
     c6 = "O";
   }
  if (bot == 7) {
     c7 = "O";
   }
   if (bot == 8) {
     c8 = "O";
   }
   if (bot == 9) {
     c9 = "O";
   }
   srand(unsigned(time(0)));
random = rand()%10;

    
  
  x=1;

}

if (choice == "C3" or choice == "c3" ) {
  c9 = "X";
  cout << "The CPU is calculating it's move.... " << endl;
  bot = random ;
 
   if (bot == 1) {
     c1 = "O";
   }
   if (bot == 2) {
     c2 = "O";
   }
   if (bot == 3) {
     c3 = "O";
   }
   if (bot == 4) {
     c4 = "O";
   }
   if (bot == 5) {
     c5 = "O";
   }
   if (bot == 6) {
     c6 = "O";
   }
  if (bot == 7) {
     c7 = "O";
   }
   if (bot == 8) {
     c8 = "O";
   }
   if (bot == 9) {
     c9 = "O";
   }
   srand(unsigned(time(0)));
random = rand()%10;

    
  
  x=1;

}

if (c1 == "X" && c2 == "X" && c3 == "X") {
 cout << "" << endl;
 cout << "" << endl;
  cout << "You win!" << endl;
    x=0;
}

if (c1 == "O" && c2 == "O" && c3 == "O") {
cout << "" << endl;
cout << "" << endl;
  cout << "You Lose!" << endl;
    x=0;
}
if (c1 == "X" && c4 == "X" && c7 == "X") {
cout << "" << endl;
cout << "" << endl;
  cout << "You win!" << endl;
    x=0;
}
if (c4 == "O" && c1 == "O" && c7 == "O") {
cout << "" << endl;
cout << "" << endl;
  cout << "You Lose!" << endl;
    x=0;
}
if (c4 == "O" && c1 == "O" && c7 == "O") {
cout << "" << endl;
cout << "" << endl;
  cout << "You Lose!" << endl;
    x=0;
}
if (c1 == "O" && c5 == "O" && c9 == "O") {
cout << "" << endl;
cout << "" << endl;
  cout << "You Lose!" << endl;
    x=0;
}
if (c1 == "X" && c5 == "X" && c9 == "X") {
cout << "" << endl;
cout << "" << endl;
  cout << "You Win!" << endl;
    x=0;
}
if (c2 == "X" && c5 == "X" && c8 == "X") {
cout << "" << endl;
cout << "" << endl;
  cout << "You Win!" << endl;
    x=0;
}
if (c2 == "O" && c5 == "O" && c8 == "O") {
cout << "" << endl;
cout << "" << endl;
  cout << "You Lose!" << endl;
    x=0;
}
if (c4 == "X" && c5 == "X" && c6 == "X") {
cout << "" << endl;
cout << "" << endl;
  cout << "You Win!" << endl;
    x=0;
}
if (c4 == "O" && c5 == "O" && c6 == "O") {
cout << "" << endl;
cout << "" << endl;
  cout << "You Lose!" << endl;
    x=0;
}
if (c7 == "X" && c8 == "X" && c9 == "X") {
cout << "" << endl;
cout << "" << endl;
  cout << "You Win!" << endl;
    x=0;
}
if (c7 == "O" && c8 == "O" && c9 == "O") {
cout << "" << endl;
cout << "" << endl;
  cout << "You Win!" << endl;
    x=0;
}
if (c3 == "X" && c5 == "X" && c7 == "X") {
cout << "" << endl;
cout << "" << endl;
  cout << "You Win!" << endl;
    x=0;
}
if (c3 == "O" && c5 == "O" && c7 == "O") {
cout << "" << endl;
cout << "" << endl;
  cout << "You Lose!" << endl;
    x=0;
}
if (c3 == "O" && c6 == "O" && c9 == "O") {
cout << "" << endl;
cout << "" << endl;
  cout << "You Lose!" << endl;
    x=0;
}
if (c3 == "X" && c6 == "X" && c9 == "X") {
cout << "" << endl;
cout << "" << endl;
  cout << "You Win!" << endl;
    x=0;
}




}


while(i==0 and x == 1);
}





if(o=="inst") {
  cout << " " <<endl;
  cout << "As mentioned before, this game is just like the classic Tic-Tac-Toe; but you are able to steal spaces. If it looks like the CPU didn't move, that is because the CPU chose the same spot over again. Please report any bugs to kaankayis@icloud.com. Thanks!!!" << endl;
  cout << "Please restart the program" << endl;
}


}





