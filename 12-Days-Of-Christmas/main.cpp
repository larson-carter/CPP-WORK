#include <iostream>
#include <array>
#include <string>
using namespace std;
class days {
   public:
      string one(void); string two(void); string three(void);
      string four(void); string five(void); string six(void);
      string seven(void); string eight(void); string nine(void);
      string ten(void); string eleven(void); string twelve(void);
};
string days::one(void) {
  return "first";
}
string days::two(void) {
  return "second";
}
string days::three(void) {
  return "third";
}
string days::four(void) {
  return "fourth";
}
string days::five(void) {
  return "fifth";
}
string days::six(void) {
  return "sixth";
}
string days::seven(void) {
  return "seventh";
}
string days::eight(void) {
  return "eighth";
}
string days::nine(void) {
  return "ninth";
}
string days::ten(void) {
  return "tenth";
}
string days::eleven(void) {
  return "eleventh";
}
string days::twelve(void) {
  return "twelfth";
}
class gifts {
   public:
      string one(void); string two(void);
      string three(void); string four(void);
      string five(void); string six(void);
      string seven(void); string eight(void);
      string nine(void); string ten(void);
      string eleven(void); string twelve(void);
};
string gifts::one(void) {
  return "And a partridge in a pear tree";
}
string gifts::two(void) {
  return "Two turtle doves";
}
string gifts::three(void) {
  return "Three french hens";
}
string gifts::four(void) {
  return "Four calling birds";
}
string gifts::five(void) {
  return "Five golden rings";
}
string gifts::six(void) {
  return "Six geese a-laying";
}
string gifts::seven(void) {
  return "Seven swans a-swimming";
}
string gifts::eight(void) {
  return "Eight maids a-milking";
}
string gifts::nine(void) {
  return "Nine ladies dancing";
}
string gifts::ten(void) {
  return "Ten lords a-leaping";
}
string gifts::eleven(void) {
  return "Eleven pipers piping";
}
string gifts::twelve(void) {
  return "Twelve drummers drumming";
}
int main() {
   cout << ("\033c");
   days day;
   gifts gift;
   string christmasDays [12] = {
        day.one(), day.two(), day.three(),
        day.four(), day.five(), day.six(),
        day.seven(), day.eight(), day.nine(),
        day.ten(), day.eleven(), day.twelve()
    };
    string gifts [12] = {
        gift.one(), gift.two(), gift.three(),
        gift.four(), gift.five(), gift.six(),
        gift.seven(), gift.eight(), gift.nine(),
        gift.ten(), gift.eleven(), gift.twelve()
    };
   for(int i = 0; i < 12; i++) {
        cout << "On the " << christmasDays[i] << " day of christmas, my true love gave"
             << " to me\n";
        if(i == 0) {
            cout << "A partridge in a pear tree\n";
        } else {
            for (int c = i; c > -1; c--) {
              cout << gifts[c] << "\n";
            }
        }
        cout << "\n";
    }
}
