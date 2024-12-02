#include <iostream>
#include <fstream>//step 1

using namespace std;
int con();
int main() {
    string fileline;//step 4
    ofstream fout;//step 2
    fout.open("output.txt");//step 3
    ifstream ifs;//step 5
    ifs.open("input.txt");//step 6

    fout << "Hello world!\n";

    string name, input, attack;
    string mageOptions[4] = {"flameshot", "strike", "Abscond", "MageSheild"};
    string fighterOptions[4] = {"Stabbing", "Sheild", "Abscond", "BackHand"};
    string archerOptions[4] = {"ArrowFire", "Sheild", "Abscond", "BowSmack"};
    int pat = 0;


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
    cout << "He asks you what kind of fighter you will become"<< endl;;
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




    cout << "The journey begins as the sun crests the horizon, its golden light spilling across the rugged path ahead. You clutch the map in your hand—a faded parchment marked with symbols of beasts, labyrinthine corridors, and a single, bold destination: The Grand Coliseum of Eternis. "
            "The air grows heavier with every step closer, thick with anticipation and echoes of ancient battles. Tales of the Coliseum's glory whisper on the breeze—stories of warriors and creatures that fought not just for victory, but for the favor of gods and the promise of immortality."
            "You cross a jagged bridge that spans a chasm, the faint roar of a waterfall below mingling with the rustle of trees. Ahead, the Coliseum rises from the earth, its massive stone walls weathered by centuries yet glowing faintly with a strange, otherworldly light. "
            "The gates, towering and adorned with carvings of mythical creatures, seem almost alive, the engravings shifting ever so slightly when you look away."
            "A cloaked figure appears beside you as you near the entrance."
            " A traveler?" << endl;
          cout <<  " the figure murmurs, their voice like the hiss of wind through leaves. " << endl;
    cout << "To enter the Coliseum is to face more than battles. It is to confront destiny itself. "
    "Tell me, seeker, what do you hope to find beyond these gates?" << endl;
            cout << "Their eyes glimmer beneath the hood, waiting for your answer.";
   cout << "" << endl;
   cout << "" << endl;
   cout << "" << endl;
   con();


    do {
        if (pat > 4) cout << "your foe is getting impatient do something before they ready their next attack \n";
        if (pat > 6) {
            cout << "you lost your turn, foe is attacking.\n";
        }
        cout << "How will you attack?\n";
        if(input=="1") cout << mageOptions[0]<< ""<< mageOptions[1] << mageOptions[2]<< mageOptions[3];
        if(input=="2") cout << fighterOptions[0]<< fighterOptions[1] << fighterOptions[2]<< fighterOptions[3];
        if(input=="3") cout << archerOptions[0]<< archerOptions[1] << archerOptions[2]<< archerOptions[3];
        cin >> attack;

        pat ++;
    }while (attack != "1" && attack != "2" && attack != "3" && attack != "4");


    fout.close();
    ifs.close();

    cout << "The air is thick with dust and the scent of sweat and blood. The crowd in the Coliseum roars, their voices a thunderous wave crashing against the ancient stone walls. The once-pristine arena floor is now a chaotic battlefield, littered with shattered weapons, splintered shields, and the marks of fierce combat."
            "In the center stands the victor, their chest heaving as they clutch a bloodied blade. Their armor bears the scars of the brutal encounter—dents, scratches, and the unmistakable burn of magic. Across from them, their opponent lies defeated, the remnants of their weapon clattering to the ground as silence begins to settle."
            "Above, the sky darkens unnaturally, swirling with clouds that glow faintly gold. The Grandmaster of the Coliseum rises from a throne high above the arena, their voice booming through the air. " << endl;
            cout << "And so it ends! A battle worthy of the Coliseum's eternal legacy! Let all who witness remember this day, when strength and will shaped destiny." << endl;
                  cout <<  "The crowd erupts once more, a cacophony of cheers, gasps, and chants of the victor's name. From the shadows of the arena gates, attendants rush forth, tending to the wounded and collecting the fallen. The defeated warrior is lifted with care, their honor intact despite their loss."
                           "The victor gazes upward as a column of light descends upon them. It is warm, enveloping, and imbued with a power that seems to mend their wounds and ease their exhaustion. This is the Coliseum's gift—the favor of the gods, whispered to grant not just strength, but a glimpse of immortality."
                           "As the light fades, the victor raises their weapon high, a silent acknowledgment to the crowd, their opponent, and the unseen forces that preside over this ancient, sacred battleground. Today, they are more than a warrior; they are legend.";


   return 0;
}
