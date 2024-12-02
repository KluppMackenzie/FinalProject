#include <iostream>
#include <fstream>//step 1

using namespace std;
int con();
int main() {
    string fileline;//step 4
    ifstream ifs;//step 5
    ifs.open("input.txt");//step 6



    string name, input, attack;
    string fightOptions[3][4] ={"flameshot", "strike", "Abscond", "MageSheild",
        "Stabbing", "Sheild", "Abscond", "BackHand", "ArrowFire", "Sheild", "Abscond", "BowSmack"};

    int in, hp, opHp, pat = 0;


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
    if (input == "3") {
        in = 2;
        cout << "you chose mage! and can cast spells against your targets! but be careful attack effect you more do to lower HP." << endl ;
    }
    else if (input == "2") {
        in = 1;
        cout << "you chose mage! and can cast spells against your targets! but be careful attack effect you more do to lower HP." << endl ;
    }else {
        in = 0;
    }
    //story continues
   cout << "" << endl;
   cout << "" << endl;
   cout << "" << endl;
   con();



while (true) {
    do {
        if (pat > 4) cout << "your foe is getting impatient do something before they ready their next attack \n";
        if (pat > 6) {
            cout << "you lost your turn, foe is attacking.\n";

        }
        cout << "How will you attack?\n";
        cout << fightOptions[in][0] << "[1] " <<fightOptions[in][1]<< "[2] " <<fightOptions[in][2] << "[3] " <<fightOptions[in][3] << "[4] " << endl;

        cin >> attack;
        pat ++;
    }while (attack != "1" && attack != "2" && attack != "3" && attack != "4" );
    break;
}


    ifs.close();
   return 0;
}
