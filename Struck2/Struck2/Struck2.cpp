

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

struct Brain
{
    int consciousness;
    int subconsciousness;
    int unconsciousness;
    int IQ;
};

int main() {

    /*

    cout << " Hello world " << endl; // In Hello world
    string Brain = "Muoi Gio 34"; // Xác nhận Brain là "Muoi Gio 34"
    string *PoiterOfBrain = &Brain; // Xác nhận PoiterOfBrain là Con trỏ hướng dữ liệu của Brain
    cout << "Brian la :" << Brain << endl; // In Brain
    cout << "Poiter cua Brain la :" << & Brain << endl; // In Con trỏ Dữ liệu Brain theo cách cổ điển
    cout << PoiterOfBrain << endl; // In Con trỏ Dữ liệu Brain theo xác nhận PoiterOfBrain
    cout << *PoiterOfBrain << endl; // In Ngược Vị trí xác nhận dữ liệu của Brain

    for (int i = 0; i < 3; i++) {
        cout << endl;
    }

    *PoiterOfBrain = "Hai gio 15"; // Xác nhận PoiterOfBrain là "Hai gio 15"
    cout << PoiterOfBrain << endl; // In PoiterOfBrain mới ra
    cout << *PoiterOfBrain << endl; // In Ngược trở lại vị trí nhận dữ liệu của Brain
    cout << Brain << endl; // In Brain mới đã được xác nhận dữ liệu mới "Hai gio 15
    
    */

    for (int i = 0; i < 3; i++) {
        cout << endl;
    }

    int x = 3; // Đặt x là 3
    int *poiterX = &x; // Đặt con trỏ x là poiterX
    int y = *poiterX; // Đặt y là poiterX
    cout << x << endl; // In giá trị của x
    cout << &x << endl; // In Vị trí dữ liệu x
    cout << *poiterX << endl; // In ngược trở lại vị trí dữ liệu x -> Giá trị x hiện tại
    cout << poiterX << endl; // In Vị trí dữ liệu x
    cout << y << endl; // y trở thành giá trị x khi xác nhận quay ngược giá trị vị trí con trỏ

    /*
    string food = "Pizza";  // A food variable of type string
    string* ptr = &food;    // A pointer variable, with the name ptr, that stores the address of food

    // Output the value of food (Pizza)
    cout << food << "\n";

    // Output the memory address of food (0x6dfed4)
    cout << &food << "\n";

    // Output the memory address of food with the pointer (0x6dfed4)
    cout << ptr << "\n";

    
    cout << "Hello World!\n";
    float f1 = 35e3;
    double d1 = 12E4;
    cout << f1 << endl;
    cout << d1 << endl;
    int a = 6; float b = 1.5; float c = a / b;
    c += 10;
    cout << c << endl;
    
    string firstName = "John ";
    string lastName = "Doe";
    string fullName = firstName.append(lastName);
    cout << fullName;
    


    string letters[2][4] = {
  { "A", "B", "C", "D" },
  { "E", "F", "G", "H" }
    };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            cout << letters[i][j] << " ";
            if (j >= 3) cout << endl;
        }
    }
    

    // We put "1" to indicate there is a ship.
    bool ships[4][4] = {
      { 0, 1, 1, 0 },
      { 0, 0, 0, 0 },
      { 0, 0, 1, 0 },
      { 0, 0, 1, 0 }
    };

    // Keep track of how many hits the player has and how many turns they have played in these variables
    int hits = 0;
    int numberOfTurns = 0;

    // Allow the player to keep going until they have hit all four ships
    while (hits < 4) {
        int row, column;

        cout << "Selecting coordinates\n";

        
        for (row = 0; row < 4; row++) {
            for (column = 0; column < 4; column++) {
                cout << ships[row][column] << " ";
                // Check if a ship exists in those coordinates
                if (ships[row][column]) {
                    // If the player hit a ship, remove it by setting the value to zero.
                    ships[row][column] = 0;

                    // Increase the hit counter
                    hits++;

                    // Tell the player that they have hit a ship and how many ships are left
                    cout << "Hit! " << (4 - hits) << " left.\t";
                }
                else {
                    // Tell the player that they missed
                    cout << "Miss\t        ";
                }

                // Count how many turns the player has taken
                numberOfTurns++;

                if (column >= 3) cout << endl;

                
            }
        }

    } 

    cout << "Victory!\n";
    cout << "You won in " << numberOfTurns << " turns";
   

    
    Brain NguoiThatBai; 
    Brain NguoiThanhCong;           

    NguoiThatBai.consciousness = 10;
    NguoiThatBai.subconsciousness = 30;
    NguoiThatBai.unconsciousness = 5;
    NguoiThatBai.IQ = 89;

    NguoiThanhCong.consciousness = 15;
    NguoiThanhCong.unconsciousness = 80;
    NguoiThanhCong.unconsciousness = 90;
    NguoiThanhCong.IQ = 125;

    cout << endl << NguoiThanhCong.consciousness;
    cout << endl << NguoiThanhCong.subconsciousness;
    cout << endl << NguoiThanhCong.unconsciousness;
    cout << endl << NguoiThanhCong.IQ;

    cout << endl << NguoiThatBai.consciousness;
    cout << endl << NguoiThatBai.subconsciousness;
    cout << endl << NguoiThatBai.unconsciousness;
    cout << endl << NguoiThatBai.IQ;
    
    struct {
        string brand;
        string model;
        int year;
    } myCar1, myCar2; // We can add variables by separating them with a comma here

    // Put data into the first structure
    myCar1.brand = "BMW";
    myCar1.model = "X5";
    myCar1.year = 1999;

    // Put data into the second structure
    myCar2.brand = "Ford";
    myCar2.model = "Mustang";
    myCar2.year = 1969;

    // Print the structure members
    cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
    cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";

    */

    for (int i = 0; i < 5; i++) {
        cout << endl;
    }
    return 0;
}


