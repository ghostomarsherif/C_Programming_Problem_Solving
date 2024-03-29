/*Your program should first read an integer indicating the number of members per team. Then, the program should read the player weights (integers representing kilograms) alternating by team. 
After calculating the total weight of each team, the program should display the text "Team X has an advantage" (replacing X with 1 or 2 depending on which team has a greater total weight).
You will then display the text "Total weight for team 1:" followed by the weight of team 1, then "Total weight for team 2:" followed by the weight of team 2 (see example below).
You are guaranteed that the two teams will not have the same total weight.*/


#include <stdio.h>

int main (void){
    int players;
    int i,condition;
    int weight,weight2;
    int sumteam1 = 0;
    int sumteam2 = 0;
    bool x=sumteam1>sumteam2;
    scanf("%d", &players);
    int noplayers=(2*players)-1;
    
    for(i=0;i<=noplayers;i++){
        if (i%2==0){
            scanf("%d",&weight);
            sumteam1=sumteam1+weight;
        }else{
            scanf("%d",&weight2);
            sumteam2=sumteam2+weight2;
        }
    }
       
    if (x){
        printf("Team 1 has an advantage\nTotal weight for team 1: %d\nTotal weight for team 2: %d", sumteam1, sumteam2);
    }
    else{
        printf("Team 2 has an advantage\nTotal weight for team 1: %d\nTotal weight for team 2: %d", sumteam1, sumteam2);
    }
    
    return 0;
}
