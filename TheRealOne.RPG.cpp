#include<iostream>
#include<string>
#include<iomanip>
#include <windows.h>
using namespace std;

class Champion {
	public:
		
		string classes;
		int health,mana;
		
		Champion(): classes("normal villager"), health(100), mana (100) { }
		void display()
		{
			cout<<" Your hero is a "<<classes<<endl;
			cout<<" HP: "<<health<<endl;
			cout<<" MP: "<<mana<<endl;
		}
};

class Barbarian: public Champion
{
	public:
		void bAttack() { cout<<" you curled your fist and punched the creature."<<endl;	}
		void attackB() { cout<<" You punched your enemy with a mighty fist."<<endl;	}
		
		void bdisplaySkills()
		{
			cout<<"Skill: "<<endl;
			Sleep(0700);
			cout<<" (1)> Smash"<<endl;
		}
		void bSkill_1() { cout<<" You used Smash on the enemy."<<endl;	}
};

class Sorcerer : public Champion
{
	public:
		void sAttack() { cout<<" you whispered a simple fire spell and burned the creature."<<endl;	}
		void attackS() { cout<<" You casted a fireball and hurled at the enemy."<<endl;	}
		
		void sdisplaySkills()
		{
			cout<<"Skill: "<<endl;
			Sleep(0700);
			cout<<" (1)> Thunderstruck"<<endl;
		}		
};

class Hunter : public Champion
{
	public:
		void hAttack() { cout<<" you brought out a knife from your belt and immediately slashed the creature's neck."<<endl;	}
		void hdisplaySkills()
		{
			cout<<"Skill: "<<endl;
			Sleep(0700);
			cout<<" (1)>  Arrow Barrage"<<endl;
		}
		void hSkill() {	cout<<" You used Arrow Barrage on the enemy."<<endl;}
};

class Crusader : public Champion
{
	public:
		void cAttack() { cout<<" you grabbed your sword from behind and stabbed the creature."<<endl;	}
		void cdisplaySkills()
		{
			cout<<"Skill: "<<endl;
			Sleep(0700);
			cout<<" (1)>  Justice"<<endl;
		}
		void cSkill() {	cout<<" You used Justice on the enemy."<<endl;}
};

int main ()
{
	string name;
	int hero, choice, s,healthGob=75,repeat=0,skill,letter,final;
	char dead;
	
	do
	{
		Barbarian barbarian;
		barbarian.health=500;
		barbarian.mana = 80;
	
		Sorcerer sorcerer;
		sorcerer.health=100;
		sorcerer.mana = 300;
	
		Hunter hunter;
		hunter.health=150;
		hunter.mana = 100;
	
		Crusader knight;
		knight.health=250;
		knight.mana = 100;
	
	
		cout<<" Insert a name: ";
		cin>>name;
	
		Champion champion;
	
		cout<<"\n  (1) > Barbarian"<<endl;
		Sleep(0700);
		cout<<"  (2) > Sorcerer"<<endl;
		Sleep(0700);
		cout<<"  (3) > Hunter"<<endl;
		Sleep(0700);
		cout<<"  (4) > Crusader"<<endl;
		Sleep(0700);
		cout<<" Choose your hero: ";
		cin>>hero;
	
		if (hero==1)
		{
			Barbarian barbarian;
			barbarian.classes = "Barbarian";
			barbarian.health = 300;
			barbarian.mana = 80;
			barbarian.display();
		}
		else if (hero==2)
		{
			Sorcerer sorcerer;
			sorcerer.classes = "Sorcerer";
			sorcerer.health = 100;
			sorcerer.mana = 300;
			sorcerer.display();
		}
		else if (hero==3)
		{
			Hunter hunter;
			hunter.classes = "Hunter";
			hunter.health = 150;
			hunter.mana = 100;
			hunter.display();
		}
		else if (hero==4)
		{
			Crusader knight;
			knight.classes = "Crusader";
			knight.health = 250;
			knight.mana = 100;
			knight.display();
		}
		
		cout<<"\n\n\t\t Welcome to the world of Haradon, "<<name<<"!";
		Sleep( 3000 );
		cout<<" You are a training-to-be hero, to protect this world from evil.";
		Sleep( 3000 );
		cout<<" For your first task in your training,";
		Sleep( 3000 );
		cout<<"\n you have been assign to scout a village that lives in the deep forest.";
		Sleep( 3000 );
		cout<<" A report stated that there are goblins has been repeatedly attacking the village."<<endl;
		Sleep( 3000 );
		cout<<" Head there and bring peace to the village."<<endl<<endl;
		Sleep( 3000 );
		
		cout<<setw(100)<<right<<" Press Enter Twice To Continue.";
		cin.ignore(2);
		
		system("clr");
		
		cout<<"Loading";
		do
		{
			cout<<".";
			Sleep (0700);
			cout<<".";
			Sleep (0700);
			cout<<".";
			Sleep (0700);
			
			repeat=repeat+1;
		}
		while(repeat<2);
		
		system("clr");
		
		cout<<"\n\t--------------------------------------------------------------------------------------------------------------------------"<<endl;
		Sleep(0300);
		cout<<setw(70)<<right<<"CHAPTER ONE"<<endl;
		Sleep( 0700 );
		cout<<"\t--------------------------------------------------------------------------------------------------------------------------"<<endl<<endl;
		Sleep(0300);
		
		cout<<"\t You are in your room, getting ready to head out to the village. With shiny new pieces of equipments on you, you packed some clothes and foods in a bag."<<endl;
			Sleep (0700);
		cout<<" Determination filled within you as you stepped out of the room. According to the Captain, the village was supposed to be near."<<endl;
			Sleep (0700);
		cout<<" You brought out a map from your bag. The village is called Eraweb and from the map, it seems to be a few miles away from here."<<endl;
			Sleep (0700);
		cout<<" This is the first task ever since you finished learning under the Captain. The Captain had been tutoring you since you were little."<<endl;
			Sleep (0700);
		cout<<" Not one to dissapoint the Captain, you were going to complete this task without fail."<<endl<<endl;
			Sleep (0700);
		
		cout<<"\t With the map in hand, you followed the direction through the forest. The sun was up plus the dense air in the forest, you were sweating bullets"<<endl;
			Sleep (0700);
		cout<<" as you cut the branches on the way to clear a path. This continued for hours. Your enthusiasm wanned when you were beginning to think that you were lost."<<endl;
			Sleep (0700);
		cout<<" Just as you decided to take a break, you saw a smoke rise above the trees. It must be coming from the Eraweb village."<<endl;
			Sleep (0700);
		cout<<" Joy and relief spread through your body as you picked up the pace, towards where the smoke was coming from."<<endl<<endl;
			Sleep (0700);
		
		cout<<" Press Enter Twice to Continue."<<endl;
			Sleep (0700);
		cin.ignore(2);
		
		cout<<"\t A rustling sound came from behind you. You turned around and a blur of brown and green jumped out from the bushes."<<endl;
			Sleep (0700);
		cout<<" It screeched as it charged at you with a sword raised above the head."<<endl<<endl;
			Sleep (0700);
		
		cout<<"\n\t Do you dodge(type 1) or do you draw your weapon(type 2)? ";
		cin>>choice;
	
		if (choice==1)
		{
			cout<<"\n\t You managed to move out of the way. Since you dodged, the sword had struck a tree that was behind you a minute ago."<<endl;
			Sleep(2000);
			cout<<" Hastily,";
		
			if( hero ==1)
			{
				Barbarian barbarian;
				barbarian.bAttack();
			}
			else if( hero == 2)
			{
				Sorcerer sorcerer;
				sorcerer.sAttack();
			}
			else if( hero == 3)
			{
				Hunter hunter;
				hunter.hAttack();
			}
			else if ( hero == 4)
			{
				Crusader knight;
				knight.cAttack(); 
			}
			else
			{
			cout<<" You picked up a stone and throws it at the creature.";
			}
		
			cout<<" The creature stumbled behind and the sword managed to free itself from your attack. You backed away, making space between the creature and you."<<endl;
				Sleep (0700);
			cout<<"\t Once you get a good look at the creature, it was a goblin.";
				Sleep (0700);
			cout<<" The Goblin shook it's head and snarled at you. As it raised its sword to strike, you prepared yourself to fight."<<endl<<endl;
				Sleep (0700);
			
			system("clr");
			
			cout<<"\t\t\t ------------------------------------------------------"<<endl;
			cout<<"\t\t\t ||                                                  ||"<<endl;
			cout<<"\t\t\t ||                    BATTLE!                       ||"<<endl;
			cout<<"\t\t\t ||               Defeat the goblin.                 ||"<<endl;
			cout<<"\t\t\t ||                                                  ||"<<endl;
			cout<<"\t\t\t ------------------------------------------------------"<<endl<<endl<<endl;
			
			cout<<"\t Goblin:\n\t\tHP: "<<healthGob<<"/ 100"<<endl;
			
			if(hero==1)
			{
				cout<<"\t "<<name<<"\n\t HP: "<<barbarian.health<<"/ 300";
				cout<<"\t MP: "<<barbarian.mana<<"/ 80"<<endl<<endl;
			}
			else if(hero==2)
			{
				cout<<"\t "<<name<<"\n\t HP: "<<sorcerer.health<<"/ 100";
				cout<<"\t MP: "<<sorcerer.mana<<"/ 300"<<endl<<endl;
			}
			else if(hero==3)
			{
				cout<<"\t "<<name<<"\n\t HP: "<<hunter.health<<" 150";
				cout<<"\t MP: "<<hunter.mana<<"/ 100"<<endl<<endl;
			}
			else if(hero==4)
			{
				cout<<"\t "<<name<<"\n\t HP: "<<knight.health<<"/ 250";
				cout<<"\t MP: "<<knight.mana<<"/ 100"<<endl<<endl;
			}
			
			do
			{
				char goblin;
				int action;
				
				cout<<"(1)-> Attack"<<endl;
				cout<<"(2)-> Skills"<<endl;
				cin>>action;
				
				if (action==1)
				{	
					if (hero==1)
					{
						
						cout<<"You attacked the goblin."<<endl;
						healthGob= healthGob-40;
						cout<<"The goblin suffered 40 damage."<<endl;
					
						cout<<" Goblin:\n\tHP: "<<healthGob<<"/ 100"<<endl;
						
						if (healthGob>0)
						{
							cout<<"The Goblin swung it's sword at you!"<<endl<<endl;
							barbarian.health=barbarian.health-20;
							cout<<"You have lost 20 HP"<<endl;
						}
							
						else if (healthGob<=0)
						{
							cout<<" The Goblin cannot strike anymore."<<endl<<endl;
						}
					
						cout<<"\t "<<name<<"\n\t HP: "<<barbarian.health<<"/ 300"<<"\t MP: "<<barbarian.mana<<"/ 80"<<endl<<endl;
					
					}
					else if(hero==2)
					{
						cout<<"You attacked the goblin."<<endl;
						healthGob= healthGob-20;
						cout<<"The goblin suffered 20 damage."<<endl;
					
						cout<<" Goblin:\n\tHP: "<<healthGob<<"/ 100"<<endl;
						
						if (healthGob>0)
						{
							cout<<"The Goblin swung it's sword at you!"<<endl<<endl;
							sorcerer.health=sorcerer.health-20;
							cout<<"You have lost 20 HP"<<endl;
						}
							
						else if (healthGob<=0)
						{
							cout<<" The Goblin cannot strike anymore."<<endl<<endl;
						}
					
						cout<<"\t "<<name<<"\n\t HP: "<<sorcerer.health<<"/ 100"<<"\t MP: "<<sorcerer.mana<<"/ 300"<<endl<<endl;
						
					}
					else if(hero==3)
					{
						cout<<"You attacked the goblin."<<endl;
						healthGob= healthGob-35;
						cout<<"The goblin suffered 35 damage."<<endl;
					
						cout<<" Goblin:\n\tHP: "<<healthGob<<"/ 100"<<endl;
						
						if (healthGob>0)
						{
							cout<<"The Goblin swung it's sword at you!"<<endl<<endl;
							hunter.health=hunter.health-15;
							cout<<"You have lost 15 HP"<<endl;
						}
							
						else if (healthGob<=0)
						{
							cout<<" The Goblin cannot strike anymore."<<endl<<endl;
						}
						
						
						cout<<"\t "<<name<<"\n\t HP: "<<hunter.health<<"/ 150"<<"\t MP: "<<hunter.mana<<"/ 100"<<endl<<endl;
				
					}
					else if(hero==4)
					{
						cout<<"You attacked the goblin."<<endl;
						healthGob= healthGob-30;
						cout<<"The goblin suffered 30 damage."<<endl;
					
						cout<<" Goblin:\n\tHP: "<<healthGob<<"/ 100"<<endl;
						
						if (healthGob>0)
						{
							cout<<"The Goblin swung it's sword at you!"<<endl<<endl;
							knight.health=knight.health-15;
							cout<<"You have lost 15 HP"<<endl;
						}
							
						else if (healthGob<=0)
						{
							cout<<" The Goblin cannot strike anymore."<<endl<<endl;
						}
						
						cout<<"\t "<<name<<"\n\t HP: "<<knight.health<<"/ 250"<<"\t MP: "<<knight.mana<<"/ 100"<<endl<<endl;
					
					}
			
				}
				else if (action==2)
				{
					if(hero==1)
					{
						Barbarian barbarian;
						barbarian.bdisplaySkills();
						cin>>skill;
						
						if(barbarian.mana>0)
						{
							barbarian.bSkill_1();
							healthGob=healthGob-45;
							cout<<"The Goblin suffered 45 damage."<<endl;
						
							cout<<" Goblin\n\n\tHP: "<<healthGob<<"/ 100"<<endl<<endl;
						
							if (healthGob>0)
							{
								cout<<"The Goblin swung it's sword at you!"<<endl<<endl;
								barbarian.health=barbarian.health-15;
								cout<<"You have lost 15 HP"<<endl;
							}
							
							else if (healthGob<=0)
							{
							cout<<" The Goblin cannot strike anymore."<<endl<<endl;
							}
							barbarian.mana=barbarian.mana-40;
							cout<<"\t "<<name<<"\n\t HP: "<<barbarian.health<<"/ 150"<<"\t MP: "<<barbarian.mana<<"/ 100"<<endl<<endl;
						}
						else if(barbarian.mana<40)
						{
							cout<<" You cannot use this skill. Not enough mana."<<endl;
						}
					}
					else if(hero==2)
					{
						Sorcerer sorcerer;
						sorcerer.sdisplaySkills();
						cin>>skill;
						
						if(sorcerer.mana>0)
						{
							cout<<" You used Thunderstruck on the enemy."<<endl;
							healthGob=healthGob-45;
							cout<<"The Goblin suffered 45 damage."<<endl;
						
							cout<<" Goblin\n\n\tHP: "<<healthGob<<"/ 100"<<endl<<endl;
						
							if (healthGob>0)
							{
								cout<<"The Goblin swung it's sword at you!"<<endl<<endl;
								sorcerer.health=sorcerer.health-20;
								cout<<"You have lost 20 HP"<<endl;
							}
							
							else if (healthGob<=0)
							{
							cout<<" The Goblin cannot strike anymore."<<endl<<endl;
							}
							sorcerer.mana=sorcerer.mana-40;
							cout<<"\t "<<name<<"\n\t HP: "<<sorcerer.health<<"/ 100"<<"\t MP: "<<sorcerer.mana<<"/ 300"<<endl<<endl;
						}
						else if(knight.mana<40)
						{
							cout<<" You cannot use this skill. Not enough mana."<<endl;
						}
					}
					else if(hero==3)
					{
						hunter.hdisplaySkills();
						cin>>skill;
						
						if(hunter.mana>0)
						{
							hunter.hSkill();
							healthGob=healthGob-45;
							cout<<"The Goblin suffered 45 damage."<<endl;
						
							cout<<" Goblin\n\n\tHP: "<<healthGob<<"/ 100"<<endl<<endl;
						
							if (healthGob>0)
							{
								cout<<"The Goblin swung it's sword at you!"<<endl<<endl;
								hunter.health=hunter.health-15;
								cout<<"You have lost 15 HP"<<endl;
							}
							
							else if (healthGob<=0)
							{
							cout<<" The Goblin cannot strike anymore."<<endl<<endl;
							}
							hunter.mana=hunter.mana-40;
							cout<<"\t "<<name<<"\n\t HP: "<<hunter.health<<"/ 150"<<"\t MP: "<<hunter.mana<<"/ 100"<<endl<<endl;
						}
						else if(knight.mana<40)
						{
							cout<<" You cannot use this skill. Not enough mana."<<endl;
						}
					}
					else if(hero==4)
					{
						knight.cdisplaySkills();
						cin>>skill;
						
						if(knight.mana>0)
						{
							knight.cSkill();
							healthGob=healthGob-45;
							cout<<"The Goblin suffered 45 damage."<<endl;
						
							cout<<" Goblin\n\n\tHP: "<<healthGob<<"/ 100"<<endl<<endl;
						
							if (healthGob>0)
							{
								cout<<"The Goblin swung it's sword at you!"<<endl<<endl;
								knight.health=knight.health-15;
								cout<<"You have lost 15 HP"<<endl;
							}
							
							else if (healthGob<=0)
							{
							cout<<" The Goblin cannot strike anymore."<<endl<<endl;
							}
							knight.mana=knight.mana-40;
							cout<<"\t "<<name<<"\n\t HP: "<<knight.health<<"/ 150"<<"\t MP: "<<knight.mana<<"/ 100"<<endl<<endl;
						}
						else if(knight.mana<40)
						{
							cout<<" You cannot use this skill. Not enough mana."<<endl;
						}
					}
				}
				else
				{
					cout<<"ERROR";
					healthGob=0;
				}
			}
			while (healthGob>0);
			
			cout<<" You have defeated the Goblin!"<<endl;
			
			system("clr");
			
			cout<<"\t You took a moment for yourself to breathe.";
				Sleep (0700);
			cout<<" That goblin ambushed you out of nowhere.";
				Sleep (0700);
			cout<<" Apparently, you let your guard down when you were focused on the village."<<endl;
				Sleep (0700);
			
			cout<<" Looks like the goblins were nearer to the village than you thought.";
				Sleep (0700);
			cout<<" You gazed at the Goblin";
				Sleep (0700);
			cout<<" and you noticed something strange.";
				Sleep (0700);
			cout<<" One of the fists was clenched.";
				Sleep (0700);
			cout<<" It seems like as if it was holding something."<<endl;
				Sleep (0700);
			
			cout<<" Pried it open (type 1) or leave it be (type 2)?"<<endl;
				Sleep (0700);
			cin>>letter;
			
			if(letter==1)
			{
				cout<<"\t You pried it open with your hands.";
					Sleep (0700);
				cout<<" Inside was a piece of crumpled parchment.";
					Sleep (0700);
				cout<<" Carefully, you opened the parchment."<<endl;
					Sleep (0700);
				cout<<" There's writing but it is almost illegible, you can only read some of the words."<<endl<<endl;
					Sleep (0700);
				
				cout<<"\t\t ---------------------------------------------"<<endl;
				cout<<"\t\t |                                           |"<<endl;
				cout<<"\t\t |       ___ did __________ part ______,     |"<<endl;
				cout<<"\t\t |                                           |"<<endl;
				cout<<"\t\t |                                           |"<<endl;
				cout<<"\t\t |        deal ________ ______ _______.      |"<<endl;
				cout<<"\t\t |                                           |"<<endl;
				cout<<"\t\t |                                           |"<<endl;
				cout<<"\t\t |          ______ ________ _____ meet       |"<<endl;
				cout<<"\t\t |                                           |"<<endl;
				cout<<"\t\t |                                           |"<<endl;
				cout<<"\t\t |       at _________ the inn, _______.      |"<<endl;
				cout<<"\t\t |                                           |"<<endl;
				cout<<"\t\t |                                           |"<<endl;
				cout<<"\t\t ---------------------------------------------"<<endl<<endl<<endl;
				
				cout<<"\t Before you could make sense from it, ";
				
			}
			
			else if(letter==2)
			{
				cout<<"\t You ignored it when ";
			}
			
			cout<<" the ground suddenly shook under your feet and you heard a loud crash."<<endl;
				Sleep (0700);
			cout<<" The villagers!"<<endl;
				Sleep (0700);
			cout<<" You dashed your way to Eraweb."<<endl;
				Sleep (0700);
			
			system("clr");
			
			cout<<"\t When you arrived, the village was in a disastrous state."<<endl;
				Sleep (0700);
			cout<<" Buildings destroyed, fires burning wildly everywhere."<<endl;
				Sleep (0700);
			cout<<" Your eyes were glued to the mess."<<endl;
				Sleep (0700);
			cout<<"\t Was I..."<<endl<<endl;
				Sleep (0700);
			
			cout<<" A groan coming from your side."<<endl;
				Sleep (0700);
			cout<<" You cast your eyes to your right."<<endl;
				Sleep (0700);
			cout<<" A man, wearing suspiciously a purple shirt, leaned against the wall."<<endl;
				Sleep (0700);
			cout<<" You quickly approached him, checking him to see any injuries.";
				Sleep (0700);
			cout<<" Aside from his atrocious clothing, nothing was on him.";
				Sleep (0700);
			
			cout<<"Player- 'Mister are yo alright?' "<<endl;
				Sleep (0700);
			cout<<"Adventurer-'Urghh...yes, I'm alright...'"<<endl;
				Sleep (0700);
			cout<<"Player- 'But your head is bleeding'"<<endl;
				Sleep (0700);
			cout<<"Advenutrer-'Ahhh...It's not really much...this wound is not thaty bad...'"<<endl;
				Sleep (0700);
			cout<<"Player-'Glad to hear that, by the way what's happening over here?'"<<endl;
				Sleep (0700);
			cout<<"Adventurer-'The goblins had attacked this village...'"<<endl;
				Sleep (0700);
			cout<<"Player-'Where?!'"<<endl;
				Sleep (0700);
			cout<<"Adventure- 'It's-' "<<endl;
				Sleep (0700);
			
			cout<<" A moan interrupted them."<<endl;
				Sleep (0700);
			cout<<" You swirved your head, the  man mirrored your actions."<<endl;
				Sleep (0700);
			cout<<" You heard another weak moan, it was coming from under a rubble."<<endl;
				Sleep (0700);
			
			cout<<"Villager- 'H-h-help...m-me...'"<<endl;
				Sleep (0700);
			cout<<"Player- 'There a person stuck under that rubbles!'"<<endl;
				Sleep (0700);
			cout<<"Adventurer- 'Go...help him...I'm fine now...'"<<endl;
				Sleep (0700);
			cout<<"Player- 'If you said so...,Sorry I'll be back from you!'"<<endl;
				Sleep (0700);
			cout<<"Adventurer- 'I'll be waiting...'"<<endl;
				Sleep (0700);
			cout<<" Player leave the adventurer and help the villager"<<endl;
				Sleep (0700);
			cout<<"Adventurer-'For you...(evil grinned)'"<<endl;
				Sleep (0700);
			
			
			cout<<"\t You looked up, suprised that the sun was beginning to set."<<endl;
				Sleep (0700);
			
			if(letter==1)
			{
				cout<<" Scout the area to see any villagers or goblins nearby (type 1)"<<endl;
				cout<<" Or"<<endl;
				cout<<" Go to the inn to investigate (type 2)"<<endl;
				cin>>final;
				
				if( final==2)
				{
					cout<<"\n\t You set off to find the inn.";
						Sleep (0700);
					cout<<" As you crossed through the village, you searched the area.";
						Sleep (0700);
					cout<<" A plank on the ground caught your attention."<<endl;
						Sleep (0700);
					
					cout<<" A plank that said 'INN'.";
						Sleep (0700);
					cout<<" Immediately, you scanned the vicinity,";
						Sleep (0700);
					cout<<" looking for a huge building.";
						Sleep (0700);
					cout<<" There, a building, not far from where you're standing, was deemed big enough for an inn."<<endl;
						Sleep (0700);
					
					cout<<" Or what's left of the building, anyway.";
						Sleep (0700);
					cout<<" It was a smoldering wreck.";
						Sleep (0700);
					cout<<" There was nobody here, no sign of life.";
						Sleep (0700);
					cout<<" And any valuable things had burned to the ground."<<endl;
						Sleep (0700);
					
					cout<<"\t You sighed.";
						Sleep (0700);
					cout<<" Maybe that parchment meant nothing.";
						Sleep (0700);
					cout<<" Maybe that parchment was from a book";
						Sleep (0700);
					cout<<" and you were just jumping to conclusion."<<endl;
						Sleep (0700);
					cout<<" What a waste of time."<<endl<<endl;
						Sleep (0700);
					
					cout<<"\t  'Who's there?!', a coarse voice hissed. "<<endl<<endl;
						Sleep (0700);
					cout<<"\t The voice startled you badly, making you stumbled a bit.";
						Sleep (0700);
					cout<<" Once you regain balance, you twist around and saw a goblin glaring at you."<<endl;
						Sleep (0700);
					cout<<"\t The goblin snarled, 'What are you doing here?'."<<endl<<endl;
						Sleep (0700);
					cout<<" You were about to snarked back at it when a jarring pain overwhelmed you.";
						Sleep (0700);
					cout<<" You collapsed to the ground, writhing and screaming as the pain dragged out."<<endl;
						Sleep (0700);
					cout<<" You gasped when the pain stopped.";
						Sleep (0700);
					cout<<" Just as fast it came, it was gone.";
						Sleep (0700);
					cout<<" There were footsteps coming closer to you.";
						Sleep (0700);
					cout<<" Trying to see the assaulter, you pried your eyes open with difficulty.";
						Sleep (0700);
					cout<<" As soon as you open your eyes, dark spots were beginning to form.";
						Sleep (0700);
					cout<<" You could only see a blurry purple loomed above you before you fell unconsciousness."<<endl;;
						Sleep (0700);
				}
				else if (final ==1)
				{
					cout<<" You decided that scouting the village was the first priority."<<endl;
						Sleep (0700);
					cout<<" You looked into every nook and cranny of every wreckage that could possibly contain a person."<<endl;
						Sleep (0700);
					cout<<" When you found no one, you rest for a while, sitting under a tree.";
						Sleep (0700);
					cout<<" You felt drained and uneasy."<<endl;
						Sleep (0700);
					cout<<" Where was everybody?";
						Sleep (0700);
					cout<<" Did the goblins kidnap the villagers?";
						Sleep (0700);
					cout<<" How can the goblins do that in a short amount of time?"<<endl;
						Sleep (0700);
					cout<<"\t Your mind was a cluster of mess, full of heavy thoughts.";
						Sleep (0700);
					cout<<" When you heard a footstep, you pulled away from your thoughts.";
						Sleep (0700);
					cout<<" You hide in the bushes as you tried to move silently."<<endl;
						Sleep (0700);
					cout<<" Peeking through the leaves, it was the man wearing the purple shirt.";
						Sleep (0700);
					cout<<" Your greetings were stuck in your throat when you glanced at his face.";	
						Sleep (0700);
					cout<<" A frown was plastered on his face and cold eyes surveyed around him."<<endl;
						Sleep (0700);
					cout<<" This was a completely different man than the man you acquaintance with.";
						Sleep (0700);
					cout<<" Cold blood runs through your body when his eyes met yours.";
						Sleep (0700);
					cout<<" Then, you felt a blunt pain in your head as darkness claimed you."<<endl;
						Sleep (0700);
				}
			}
			else if( letter == 2)
			{
				cout<<" Decided to scout the village, you set off on a mission.";
					Sleep (0700);
				cout<<" You looked into every nook and cranny of every wreckage that could possibly contain a person."<<endl;
					Sleep (0700);
				cout<<" Hours passed by, you found no one, not even a body.";	
					Sleep (0700);
				cout<<" You sat under a tree, feeling drained and uneasy."<<endl;
					Sleep (0700);
				cout<<" Where was everybody?";
					Sleep (0700);
				cout<<" Did the goblins kidnap the villagers?";
					Sleep (0700);
				cout<<" How can the goblins do that in a short amount of time?"<<endl;
					Sleep (0700);
				cout<<"\t Your mind was a cluster of a mess, full of heavy thoughts.";
					Sleep (0700);
				cout<<" When you heard a footstep, you pulled away from your thoughts.";
					Sleep (0700);
				cout<<" You hide in the bushes as you tried to move silently."<<endl;
					Sleep (0700);
				cout<<" Peeking through the leaves, it was the man wearing the purple shirt.";
					Sleep (0700);
				cout<<" Your greetings were stuck in your throat when you glanced at his face.";
					Sleep (0700);
				cout<<" A frown was plastered on his face and cold eyes surveyed around him."<<endl;
					Sleep (0700);
				cout<<" This was a completely different man than the man you acquaintance with.";
					Sleep (0700);
				cout<<" Cold blood runs through your body when his eyes met yours.";
					Sleep (0700);
				cout<<" Then, you felt a blunt pain in your head as darkness claimed you."<<endl;
					Sleep (0700);
			}
			
			cout<<"TO BE CONTINUE IN THE NEXT CHAPTER..."<<endl;
				Sleep (0700);
			
		}
		else if (choice==2)
		{
			cout<<"\n\t Just as you grabbed your weapon, the creature stabbed you though the chest. You weren't quick enough to draw your weapon."<<endl;
				Sleep (0700);
			cout<<" YOU DIED."<<endl;
				Sleep (0700);
		}
		else {
			cout<<" Invalid input.";
		}
	
	cout<<"Do you wish to continue? (Y/N)"<<endl;
		Sleep (0700);
	cin>>dead;
	}
	while (dead=='Y'|| dead=='y');
	
	cout<<endl<<name<<", you have finished the game!";
		Sleep (0700);
	cin>>s;
	
	return 0;

}
	
