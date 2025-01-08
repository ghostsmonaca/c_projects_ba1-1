/**
* Permanente evaluatie - Game database
* Problem Solving - Programmeren in C
* Universiteit Hasselt - Academiejaar 2024-2025
*
* Naam: ...
* Studentennummer: ...
*/


#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MAX_GAMES 19


typedef enum gamegenre { 
	ACTION, 
	RPG, 
	ADVENTURE, 
	ROGUELIKE, 
	MMO, 
	SIMULATION, 
	STRATEGY, 
	PUZZLE, 
	SURVIVAL, 
	SPORTS, 
	MOBA, 
	METROIDVANIA
} gamegenre;

typedef struct game {
	const char* title;
	const char* developer;
	const char* release_date; /* format YYYY/MM/DD */
	gamegenre genre;
} game;

typedef struct node {
	struct game* game;
	struct node* previous;
	struct node* next;
} node;


/**
 * Allocates a game struct dynamically, fills in its data, and returns it.
 */
game* new_game(const char* title, const char* developer, const char* release_date, gamegenre genre);

/**
 * Inserts a game into the game database, which is represented as a linked 
 * list and is passed as an argument to this function. Games must be 
 * inserted in a sorted manner, alphabetically based on the name of the 
 * developer. In case multiple games from the same developer exist, they 
 * are sorted based on their release date, in chronological order.
 */
void insert_game(...);

/**
 * Used for comparing two game instances. compare_games() is passed as an 
 * argument to insert_game() (i.e., as a function pointer).
 */
... compare_games(...);

/**
 * Converts a game genre (enum value) to a string.
 */
const char* genre_as_string(gamegenre genre);

/**
 * Prints the game database, which is represented as a linked list and is 
 * passed as an argument to this function. Each individual game should be 
 * printed as follows (with values between //...// representing placeholders 
 * that must be replaced with their actual value stored in the game struct):
 * 
 * //Game title//
 *     Developer: //developer//
 *     Release Date: //release_date//
 *     Genre: //genre//
 */
void print_database(...);

/**
 * Given a game database (which is represented as a linked list that is 
 * passed as an argument to this function), this function builds an 
 * index-array for that database. The index-array has length 26 (one entry 
 * for each alphabet letter) and holds pointers to the first game whose 
 * developer starts with the corresponding alphabet letter.
 */
... build_developer_index(...);

/**
 * Filters the games of a given developer by using the index-array (see 
 * build_developer_index() function) to quickly search through the game 
 * database. All the matching games are **moved** from the given game database, 
 * which is represented as a linked list and is passed as an argument to 
 * filter_games, to a second linked list which is also passed as an 
 * argument. No additional dynamic memory allocation must happen in this 
 * process.
 */
void filter_games(...);


int main(int argc, char* argv[]) {
	
	/**
	* Some hard-coded data to test the program.
	*/
	game* games[MAX_GAMES] = { NULL };
	games[0] = new_game("Torchlight", "Runic Games", "2009/10/27", RPG);
	games[1] = new_game("Hollow Knight", "Team Cherry", "2017/02/24", METROIDVANIA);
	games[2] = new_game("The Binding of Isaac: Rebirth", "Nicalis, Inc.", "2014/11/04", ROGUELIKE);
	games[3] = new_game("The Witcher 3: Wild Hunt", "CD Projekt Red", "2015/05/18", RPG);
	games[4] = new_game("Grand Theft Auto 5", "Rockstar Games", "2015/04/14", ACTION);
	games[5] = new_game("Valheim", "Iron Gate Studio", "2021/02/02", SURVIVAL);
	games[6] = new_game("The Last Campfire", "Hello Games", "2021/10/07", ADVENTURE);
	games[7] = new_game("The Elder Scrolls V: Skyrim Special Edition", "Bethesda", "2016/10/28", RPG);
	games[8] = new_game("Fallout 4", "Bethesda", "2015/11/10", RPG);
	games[9] = new_game("No Man's Sky", "Hello Games", "2016/08/12", ADVENTURE);
	games[10] = new_game("Doom Eternal", "Bethesda", "2020/03/20", ACTION);
	games[11] = new_game("FIFA 22", "Electronic Arts", "2021/10/01", SPORTS);
	games[12] = new_game("Battlefield 4", "Electronic Arts", "2013/10/29", ACTION);
	games[13] = new_game("Inside", "Playdead", "2016/07/07", ADVENTURE);
	games[14] = new_game("Red Dead Redemption 2", "Rockstar Games", "2019/12/05", ACTION);
	games[15] = new_game("Portal 2", "Valve", "2011/04/19", PUZZLE);
	games[16] = new_game("Goat Simulator", "Coffee Stain Studios", "2014/04/01", SIMULATION);
	games[17] = new_game("Satisfactory", "Coffee Stain Studios", "2020/06/08", SIMULATION);
	games[18] = new_game("League of Legends", "Riot Games", "2009/10/27", MOBA);


	/**
	* TODO: Initialize game database by calling insert_game().
	*/


	/**
	* TODO: Print all games in the game database (i.e., prior to filtering).
	*/
	printf("\n\n-- GAMES ---------------------------\n\n");
	

	/**
	* TODO: Build game database index.
	*/


	/**
	* TODO: Filter the game database for each developer that is passed as a 
	*       command-line argument to main(). Print each filtered list.
	*/
	printf("\n\n-- FILTERED LISTS ------------------\n\n");
	

	/**
	* TODO: Print the remaining games in the game database. These are the 
	*       games that were not developed by any of the developers that 
	*       are passed as a command-line argument to main().
	*/
	printf("\n\n-- REMAINING GAMES -----------------\n\n");
	

	/**
	* TODO: Clean up dynamically allocated memory, to avoid memory leaks.
	*/


	return EXIT_SUCCESS;
}

const char* genre_as_string(gamegenre genre)
{
	static const char* genre_strings[] = { 
		"ACTION", 
		"RPG", 
		"ADVENTURE", 
		"ROGUELIKE", 
		"MMO", 
		"SIMULATION", 
		"STRATEGY", 
		"PUZZLE", 
		"SURVIVAL", 
		"SPORTS", 
		"MOBA", 
		"METROIDVANIA"
	};

	return genre_strings[genre];
}