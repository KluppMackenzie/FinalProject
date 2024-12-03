#include <iostream>
#include <fstream>//step 1

using namespace std;
int con();
int attack(int in, string fightOptions[3][4], bool &distant, bool &sheild, bool &opSheild);
int main() {
    string fileline;//step 4
    ifstream ifs;//step 5
    ifs.open("https://github.com/KluppMackenzie/FinalProject/blob/26c345e1a2b48785938a76b6e474fd9827792d04/input.txt");//step 6



    string name, input;
    bool distant = false, opSheild = false, sheild;
    string attackLines[4] ={"Your opponent used Abscond and is attempting to get away from you.(disadvantages close attacks)",
    "your opponent used sheild and takes 0 damage this turn.", "your opponent used Stab and lunges their sword at you", "your opponent used Strike and throws their are in your direction."};
    string fightOptions[3][4] ={"flameshot", "MageSheild", "Abscond", "Strike",
        "Stabbing", "Sheild", "Abscond", "BackHand", "ArrowFire", "Sheild", "Abscond", "BowSmack"};

    int in, hp, opHp, opAttack, damage;


    //title screen
    for(int i = 0; i < 12; i++) {
        getline(ifs, fileline);
        cout << fileline << endl;
    }
    con();
    // story start
   cout << "Enter your name: ";
   cin >> name;
   cout << "Your name is " << name << " and you just discovered a book in the school Library that seems to almost glowing." << endl ;
   cout << "You take the book off the shelf and wipe your hand across the dust. The book's cover was a deep green with a golden symbol you don't recognize."<< endl ;
   cout << "A golden light burst from the pages, swirling around you and making the room feel distant, almost blurred. Before you could react, a strong pull yanked you forward. " << endl;
   cout << "but the light wrapped around you like vines, pulling you deeper into the pages." << endl ;
    con();
   cout << "you looked around, feeling the ground beneath you." << endl;
   cout << "You are now standing in the middle of an ancient forest, unlike anything you have ever seen before. The trees were towering, their trunks twisted and covered in iridescent moss that glows faintly in the shadows."<< endl ;
   cout << "Flowers the size of your head dotted the forest floor, their petals sparkling with what looked like tiny stars. A soft, golden mist floated through the air, adding an otherworldly glow to everything around you." << endl ;
    con();
    // mage fighter or archer
    cout << "The air shimmers with a faint golden glow as a wizened figure in a flowing robe, adorned with celestial patterns, emerges from the shadows of an ancient forest. His long silver beard seems to glisten with tiny stardust, and a staff tipped with a crystal pulsates faintly in his hand." << endl;
    cout << "With a voice like a deep, echoing stream, he speaks: Ah, a seeker of wisdom stands before me. Tell me, traveler, what stirs your soul to seek an audience with one who listens to the whispers of the cosmos? Is it knowledge you crave, power you desire, or perhaps a path unseen that you wish to tread?"<< endl;;
    cout << "The wizard gazes at you intently, his eyes glowing faintly as though reflecting a thousand untold stories."<< endl;;
    cout << "What will you ask him?"<< endl;;
    //option selection screen

    //screen will loop till given a valid response
   do {
       do {
           cout << "choose your trait!" << endl << "to pick Mage enter: 1"<< endl << "to pick Fighter enter: 2"<< endl << "to pick Archer enter: 3"<< endl << "to learn more about the classes enter : 4 \n Enter number: ";
           cin >> input;
       }while (input != "1" && input != "2" && input != "3" && input != "4");
       if (input == "4") {
           cout << "Mage" << endl << "have stronger distant attacks but have poor stamina." << endl << "Fighter" <<  endl << "the fighter is a close combat player who has amazing stamina and strikes but often takes more hits." << endl << "Archer" << endl << "the archer can do distant attacks and still have good stamina." << endl;
           con();
       }
       }
   while (input != "1" && input != "2" && input != "3");
    if (input == "1") {
        in = 0;
        hp = 15;
        cout << "you chose mage! and can cast spells against your targets! but be careful attack effect you more do to lower HP." << endl ;
    }
    else if (input == "2") {
        in = 1;
        hp = 25;
        cout << "you chose Fighter! you have a higher." << endl ;
    }else {
        in = 0;
        hp = 20;
        cout << "you chose Archer! you take less damage then most due to higher dextarity." << endl ;
    }
    //story continues
   con();
    // First Fight starts
    opHp = 15;
    cout << "your first opponent has entered the ring you must defeat all 3 opponents to win!" << endl ;
    while (hp> 0 && opHp > 0) {
        opSheild = false;
        opAttack = rand() %4;
        if (opAttack == 0) {
            opSheild = true;
            cout << "opponent used sheild to stop any oncomming attacks."
        }else if (opAttack == 1) {
            hp -= 1;
            distant = true;
            cout<< "your opponent absconded and kick off of you creating space \n you take 1 damage.\n";
        }else if (opAttack == 2) {
            if (distant) {
                hp -= 5;
                cout <<"your opponent made a Strike at you \n you take 5 damage" ;
            }else{
        }
        cout << "your current HP : " << hp << " while your opponent:" << opHp <<endl ;
        opHp -= attack( in, fightOptions, distant, sheild, opSheild);
    }

    if (hp > 0) {
        cout << "YOu died";
    }
    ifs.close();
   return 0;
}
