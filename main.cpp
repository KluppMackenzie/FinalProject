#include <iostream>
#include <fstream>//step 1

using namespace std;
int con();
int attack(int in, string fightOptions[3][4], bool &distant, bool &sheild, bool &opSheild);
int main() {
    //file related materials
    string fileline;
    ifstream ifs;
    ifs.open("/home/administrator/CLionProjects/untitled/cmake-build-debug/input.txt");

    //initalizing variables
    string name, input;
    int in, hp, opHp, opAttack, damage;
    bool distant = false, opSheild = false, sheild;
    string fightOptions[3][4] ={"flameshot", "MageSheild", "Abscond", "Strike",
        "Stabbing", "Sheild", "Abscond", "Strike", "ArrowFire", "Sheild", "Abscond", "BowSmack"};




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
    cout << "With a voice like a deep, echoing stream, he speaks: 'Ah, a seeker of wisdom stands before me. Tell me, traveler, what stirs your soul to seek an audience with one who listens to the whispers of the cosmos? Is it knowledge you crave, power you desire, or perhaps a path unseen that you wish to tread?"<< endl;;
    cout << "The wizard gazes at you intently, his eyes glowing faintly as though reflecting a thousand untold stories."<< endl;;
    cout << "He asks you what kind of fighter you will become"<< endl;
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
        cout << "you chose mage! you can cast spells against your targets and don't have to worry about them being too far to attack\n but watch out, mages have only 15 hp." << endl ;
    }
    else if (input == "2") {
        in = 1;
        hp = 25;
        cout << "you chose Fighter! you have a hp of 25 and stronger attack damages on Strikes." << endl ;
    }else {
        in = 0;
        hp = 20;
        cout << "you chose Archer! your able to close attack and distance attack with the same power your hp is 20" << endl ;
    }
    //story continues
   con();
    cout << "The journey begins as the sun crests the horizon, its golden light spilling across the rugged path ahead. You clutch the map in your hand—a faded parchment marked with symbols of beasts, labyrinthine corridors, and a single, bold destination: The Grand Coliseum of Eternis. \n"
        "The air grows heavier with every step closer, thick with anticipation and echoes of ancient battles. \nTales of the Coliseum's glory whisper on the breeze—stories of warriors and creatures that fought not just for victory, but for the favor of gods and the promise of immortality.\n"
        "You cross a jagged bridge that spans a chasm, the faint roar of a waterfall below mingling with the rustle of trees. Ahead, the Coliseum rises from the earth, its massive stone walls weathered by centuries yet glowing faintly with a strange, otherworldly light. \n"
        "The gates, towering and adorned with carvings of mythical creatures, seem almost alive, the engravings shifting ever so slightly when you look away."
        "A cloaked figure appears beside you as you near the entrance."
        " A traveler?" << endl;
    cout <<  " the figure murmurs, their voice like the hiss of wind through leaves. " << endl;
    cout << "To enter the Coliseum is to face more than battles. It is to confront destiny itself. \n";
    con();
    cout << "before you can do anything the figure waves his hand in the air and you are instantly without warning transported to the middle of the coliseum";
    cout << endl << "to make it back home you must survive and beat all 3 of your upcoming opponents" ;
    // First Fight starts
    opHp = 15;
    cout << "your first opponent has entered the ring you must defeat all 3 opponents to win!" << endl ;
    for (int i = 0; i < 3; i++) {
        opHp = 15;
        if (i == 2)opHp = 20;

        if (in = 0)hp = 15;
        else if (in == 1)hp = 25;
        else if (in == 2)hp = 20;

        while (hp> 0 && opHp > 0) {
            opSheild = false;
            opAttack = rand() %4;

            if (i== 1) {
                cout<< "your second opponent is in the ring\n";
                con();
            } else if (i == 2) {
                cout << "your final opponent is in the ring!\n";
                con();
            }
            if (opAttack == 0) {
                opSheild = true;
                cout << "opponent used sheild to stop any oncomming attacks.";
            }else if (opAttack != 1 && sheild) {
                cout << "your opponents attack misses because of your sheild.";
            }else if (opAttack == 1) {
                hp -= 1;
                distant = true;
                cout<< "your opponent absconded and kick off of you creating space \n you take 1 damage.\n";
            }else if (opAttack == 2) {
                if (distant) {

                    cout <<"your opponent made a Strike at you \n your out of range so you take no damage.\n" ;
                }else{
                    hp -= 5;
                    cout <<"your opponent made a Strike at you \n you take 5 damage. \n" ;
                }
            }else {
                cout << "your opponent takes a stab at you\n you take 5 damage";
                hp -= 5;
            }
            if (hp < 0) {
                cout << "YOu died";
                break;
            }else {
                cout << "your current HP : " << hp << " while your opponent:" << opHp <<endl ;
                opHp -= attack( in, fightOptions, distant, sheild, opSheild);
            }
        }
    }
    cout << "The air is thick with dust and the scent of sweat and blood. The crowd in the Coliseum roars, their voices a thunderous wave crashing against the ancient stone walls. \n";
    cout << "The once-pristine arena floor is now a chaotic battlefield, littered with shattered weapons, splintered shields, and the marks of fierce combat.";
    cout << "In the center stands the victor, their chest heaving as they clutch a bloodied blade. Their armor bears the scars of the brutal encounter—dents, \n scratches, and the unmistakable burn of magic. Across from them, their opponent lies defeated, the remnants of their weapon clattering to the ground as silence begins to settle.\n";
    cout << "Above, the sky darkens unnaturally, swirling with clouds that glow faintly gold. The Grandmaster of the Coliseum rises from a throne high above the arena, their voice booming through the air. " << endl;
    cout << "And so it ends! A battle worthy of the Coliseum's eternal legacy! Let all who witness remember this day, when strength and will shaped destiny." << endl;
    cout <<  "The crowd erupts once more, a cacophony of cheers, gasps, and chants of the victor's name. From the shadows of the arena gates, attendants rush forth, tending to the wounded and collecting the fallen. The defeated warrior is lifted with care, their honor intact despite their loss.\n";
    cout << "The victor gazes upward as a column of light descends upon them. It is warm, enveloping, and imbued with a power that seems to mend their wounds and ease their exhaustion. This is the Coliseum's gift—the favor of the gods, whispered to grant not just strength, but a glimpse of immortality.\n";
    cout << "As the light fades, the victor raises their weapon high, a silent acknowledgment to the crowd, their opponent, and the unseen forces that preside over this ancient, sacred battleground. Today, they are more than a warrior; "<< name << "is are legend.\n";

    ifs.close();
   return 0;
}
