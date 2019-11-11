// interactiveStory.cpp : Defines the entry point for the console application.
//


#include <iostream>

using namespace std;

//main starts line 178


//func called from line 198
void dessert()
{
	cout << "\nShe sees some yummy cookies and gets them." << endl;

}

//func called from line 196
void meat()
{
	cout << "\nAre you sure your grandfather needs these?\n" << endl;
	//starts another choice
	cout << "1: Yes" << endl;
	cout << "2: no\n" << endl;
	//creats a intiger for choice
	int o = 0;
	//input for value
	cin >> o;
	//value goes to another switch case
	switch (o)
	{
		//case 1 says a line then goes to dessert func on line 13 then breaks and continues in main
	case 1: cout << "\nWell we are out but I can order you some another time.\n"; dessert(); break;
		//case 2 says a line then goes to dessert func on line 13 then breaks  and continues in main
	case 2: cout << "\nYour right, better wait and see.\n"; dessert(); break;
	}

}

//func called from lines 57, 206, 224 to simplify repeating
void doo()
{
	cout << "What does she do?" << endl;
}

//func called from lines 112, 248, 268 to simplify repeating
void say()
{
	cout << "What does she say?" << endl;
}

//func called from lines
void getHelp()
{
	cout << "\nShe goes back to the village to see what help she could get.\n" << endl;
	doo();
	//choices to pick
	cout << "\n\n1: Find help" << endl;
	cout << "2: Go back to the woods on her own\n" << endl;
	//creats a intiger for choice
	int o = 0;
	//input value
	cin >> o;
	//value goes into a switch case 
	switch (o)
	{
		//case 1 says a line then func is done it breaks and continues in main
	case 1: cout << "She asks around and someone agrees to go check on her grandfather.\n" << endl; break;
		//case 2 says a line then func is done it breaks and continues in main
	case 2: cout << "She decides to brave the woods and go on her own.\n" << endl; break;

	}

}

//func called from lines
void back()
{
	cout << "My, what happened to your back?" << endl;
	cout << "\"Oh nothing dear\" says grandfather with his back still turned." << endl;
}

//func called from lines
void weirdperson()
{


	cout << "You havent seen anyone weird have you?\n" << endl;
	cout << "\"A young man came through not to long ago. Why?\" says grandfather with his back still turned." << endl;

	//choices to pick
	cout << "\n\n1: Is he still here?" << endl;
	cout << "2: Was he just passing through?\n" << endl;
	//creats a intiger for choice
	int o = 0;
	//input value
	cin >> o;
	//value goes into a switch case 
	switch (o)
	{
		//case 1 says a line then func is done it breaks and continues in main
	case 1: cout << "\nNo, he left.\n" << endl; break;
		//case 2 says a line then func is done it breaks and continues in main
	case 2: cout << "Oh yes, just passing.\n" << endl; break;
	}
}

//func called from lines 140, 152, 164 to simplify repeating
void choice()
{
	say();
	//choices to pick
	cout << "\n\n1: Your back?" << endl;
	cout << "2: Have you seen anyone around?" << endl;
	//creats a intiger for choice
	int o = 0;
	//input value
	cin >> o;
	//value goes into a switch case 
	switch (o)
	{
		//case 1 starts func back on line 78 then breaks and continues in main
	case 1: back(); break;
		//case 2 starts func back on line 85 then breaks and continues in main
	case 2: weirdperson(); break;
	}
}

//func called from line 235
void callin()
{
	cout << "\nShe walks towards the door and shouts hello. She hears a voice call from inside saying come in." << endl;
	cout << "She goes to the door and peers in. She sees no one." << endl;
	cout << "She tells the person that she will go in on her own and sends him off." << endl;
	cout << "Taking a few steps in she can hear movement in the kitchen." << endl;
	cout << "\"Grandfather! I brought desserts!\" she says as she approaches the kitchen." << endl;
	cout << "She sees him over the sink, hunched much more than usual\n\n" << endl;
	//starts func choice to simplify repreaing on line 110
	choice();
}

//func called from line 237
void goin()
{
	cout << "\nShe decides to go in and tells the person she brought with her so he decides to leave." << endl;
	cout << "She goes to the door and peers in. She sees no one." << endl;
	cout << "She takes a fer steps in and can hear movement in the kitchen" << endl;
	cout << "\"Grandfather! I brought desserts!\" she says as she approaches the kitchen." << endl;
	cout << "She sees him over the sink, hunched much more than usual\n\n" << endl;
	//starts func choice to simplify repreaing on line 110
	choice();
}

//func called from line 239
void sendin()
{
	cout << "\nShe asks the person to go in and check it out." << endl;
	cout << "He goes in and says he hears someone in the kitchen but can\'t see anyone." << endl;
	cout << "she then thanks the person for helping and says she will continue on her own." << endl;
	cout << "He then leaves and she heads to the kitchen." << endl;
	cout << "\"Grandfather! I brought desserts!\" she says as she approaches the kitchen." << endl;
	cout << "She sees him over the sink, hunched much more than usual\n\n" << endl;
	//starts func choice to simplify repreaing on line 110
	choice();
}

//func called from lines
void whynot()
{
	cout << "\nOh why not dear? says grandfather." << endl;
	cout << "What is it made of? she asks." << endl;
	cout << "Oh just beef and Veggies, just decided to make some so come and eat.\n" << endl;

}

// start of the code.
int main()
{
	//starts story
	cout << "\nlittle green riding hood was on her way to her grandfathers." << endl;
	cout << "On her way there she stops in the village to gather some groceries before she travels into the woods." << endl;
	cout << "\nWhat does she need?\n\n" << endl;
	//choices to pick
	cout << "1: Meat and Veggies" << endl;
	cout << "2: Desserts\n" << endl;
	//creats a intiger for all my choices
	int i = 0;
	//person inputs a value
	cin >> i;
	//value goes into a switch case 
	//this takes the value and selects the case with the same value and executes it
	switch (i)
	{
		//case 1 starts func meat on line 20 once the func is done it break away and continues in main
	case 1: meat(); break;
		//case 2 starts func dessert on line 13 once the func is done it break away and continues in main
	case 2: dessert(); break;

	}

	//continues the story
	cout << "\nOff into the woods she goes." << endl;
	cout << "Along the path she notices foot prints that she doesn't recognize.\n" << endl;
	//calls a func to simplify repeating a question  which is on line 42
	doo();
	//choices to pick
	cout << "\n\n1: Ignore and continue" << endl;
	cout << "2: Go back to the village and get help\n" << endl;
	//input value
	cin >> i;
	//value goes into a switch case 
	switch (i)
	{
		//case 1 says a line then breaks and continues in main
	case 1: cout << "\nShe ignores them and continues on.\n" << endl; break;
		//case 2 goes to func getHelp on line 54 then breaks and continues in main
	case 2: getHelp(); break;
	}
	//continues story
	cout << "Little green riding hood ventures bak into the woods." << endl;
	cout << "When she arrives to her grandfathers house, she notices the door open.\n" << endl;
	//simplify repeating a question, line 42
	doo();
	//choices to pick
	cout << "\n\n1: Call in" << endl;
	cout << "2: Go in" << endl;
	cout << "3:Send person in\n" << endl;
	//input value
	cin >> i;
	//value goes into a switch case 
	switch (i)
	{
		//case 1 calls func callin on line 131 then breaks and continues in main
	case 1: callin(); break;
		//case 2 calls func goin on line 144 then breaks and continues in main
	case 2: goin(); break;
		//case 3 calls func sendin on line 156 then breaks and continues in main
	case 3: sendin(); break;
	}
	//continues story
	cout << "As she entered the kitchen, her grandfather turned around and she could see a cloth covering his face.\n" << endl;
	cout << "\"Whys that rag on your face?\" she asks." << endl;
	cout << "Oh, its just for my cold. Wont want you to catch it.\n" << endl;
	cout << "Well i made a lovely stew. Would you like some?Then we can have dessert." << endl;
	cout << "You will love the taste of my stew.\n" << endl;
	//simplify repeating a question, line 48
	say();
	//choices to pick
	cout << "\n\n1: What is it made of?" << endl;
	cout << "2: Yes please." << endl;
	cout << "3: No thanks.\n" << endl;
	//input value
	cin >> i;
	//value goes into a switch case 
	switch (i)
	{
		//case 1 says a line then breaks and continues in main
	case 1: cout << "Oh just beef and Veggies, just decided to make some so come and eat." << endl; break;
		//case 2 says a line then breaks and continues in main
	case 2: cout << "she gets a bowl of some and eats it. it have a familiar taste.She cant figure out why." << endl; break;
		//case 3 starts func whynot on line 169 then breaks and continues in main
	case 3: whynot(); break;
	}
	//continues story
	cout << "That was delicious, would you like cookies little green riding hood?" << endl;
	//simplify repeating a question, line 48
	say();
	//choices to pick
	cout << "\n\n1: yes please." << endl;
	cout << "2: No thanks.\n" << endl;
	//input value
	cin >> i;
	//value goes into a switch case 
	switch (i)
	{
		//case 1 says a line then breaks and continues in main
	case 1: cout << "The grandfather removes the cloth to reveal a red runny nose and takes a bite of the cookie.\nHe then says \"What, did you think i was someone else?\"" << endl; break;
		//case 2 says a line then breaks and continues in main
	case 2: cout << "Oh just one? says grandfather.\nShe says \"Oh alright.\" The grandfather removes the cloth to reveal a red runny nose and takes a bite of the cookie.\nHe then says \"What, did you think i was someone else?\"" << endl; break;
	}
	//continues story
	cout << "\n\"I better get going home. Thanks for the stew. Ill leave the cookies here with you.\" she says as she is walking out." << endl;
	cout << "Grandfather waves and thanks her for coming by and he closes his door." << endl;
	//finishes story
	cout << "\n\nFIN." << endl;
	//pause program
	system("pause");
	//returns a value of 0
	return 0;
}