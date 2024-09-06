#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//tells the user that they won the game
void printWin() {

    printf("\n*********************************\n");
    printf("You were valiant and succeeded. You won the game!\n");
}

//tells the user that they lost the game
void printLose() {

    printf("\n*********************************\n");
    printf("The monster was too powerful for you. You lost the game!\n");
    
}


int monsterAttacks() {
//creates a damage number between 1 and 6
int monsterDamage = rand()%6 + 1;
    
    //buffs a damaage of 6 to 8
    if (monsterDamage == 6) {
        monsterDamage += 2;
        printf("Ouch! Severe damage from the monster.\n");
    //debuffs a damage of 1 to zero
    } else if (monsterDamage == 1) {
        monsterDamage -= 1;
        printf("You successfully blocked the attack!\n");
    } else {
        printf("Oh no! The monster slashed at you.\n");
    }

    return monsterDamage;

}

int heroAttacks(int weaponCode) {
//creates a damage number between 1 and 5
int baseDamage = rand()%5 + 1;

    //changes the damage depending on the weapon type
    switch (weaponCode) {

        //-1 debuff for punching
        case 0:
            baseDamage -= 1;
            printf("You punch the monster, but it's tough.\n");
            break;
        //+1 buff for a sword
        case 1:
            baseDamage += 1;
            printf("You use your sword to hurt the monster!\n");
            break;
        //+3 buff for a gun
        case 2:
            baseDamage += 3;
            printf("You pull out your gun and shoot the monster.\n");
            break;
    }

    return baseDamage;

    
}

int main() {

//creates health of 30 for both monster and hero
int monsterHealth = 30;
int heroHealth = 30;

srand(time(0));

    printf("A vicious monster approaches you!\n");
    printf("*********************************\n\n\n");
    
    //keeps the game going as long as the hero is alive
    while (heroHealth > 0) {
        //calls hero attack first
        int heroDamage = heroAttacks(rand()%3);
        monsterHealth -= heroDamage;
        printf("The monster took %d damage from you.\t\t\t\t| Monster HP: %d\n\n", heroDamage, monsterHealth);

        //lets the monster fight back only if it is still alive
        if (monsterHealth > 0) {
            //calls monster attack next
            int totalDamage = monsterAttacks();
            heroHealth -= totalDamage;
            printf("You took %d damage from the monster.\t\t\t\t| Hero HP: %d\n\n", totalDamage, heroHealth);
            printf("---------------------------------\n\n");
        //calls win function when monster dies
        } else {
            printf("---------------------------------\n\n");
            printWin();
            break;
        }
    }
    
    //calls lose function when hero dies
    if (heroHealth <= 0)
        printLose();
}
