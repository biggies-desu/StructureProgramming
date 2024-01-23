#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
    char face, suit;
    int point;
}card;

void point(card deck[], int n) 
{
    for(int i = 0; i < n; i++) 
    {
        if(deck[i].face == 'A') {
            deck[i].point = 1;
        }
        else if(deck[i].face == 'J') {
            deck[i].point = 11;    
        }
        else if(deck[i].face == 'Q') {
            deck[i].point = 12;    
        }
        else if(deck[i].face == 'K') {
            deck[i].point = 13;    
        }
        else {
            deck[i].point = deck[i].face-48;
        }
        //printf("%d\n", deck[i].point);
    }
}

void compare(card cards[], int n)
{
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - i -1; j++) {
            if(cards[j].point > cards[j+1].point) {
                card temp = cards[j];
                cards[j] = cards[j+1];
                cards[j+1] = temp;
            }
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - i -1; j++) {
            if(cards[j].point == cards[j+1].point) {
                if(cards[j].suit == 'S') {
                    card temp = cards[j];
                    cards[j] = cards[j+1];
                    cards[j+1] = temp;
                }
                else if(cards[j].suit == 'H' && cards[j+1].suit != 'S') {
                    card temp = cards[j];
                    cards[j] = cards[j+1];
                    cards[j+1] = temp;
                }
                else if(cards[j].suit == 'D' && cards[j+1].suit != 'S' && cards[j+1].suit != 'H' ) {
                    card temp = cards[j];
                    cards[j] = cards[j+1];
                    cards[j+1] = temp;
                }
                else{}
            }
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    card deck[n];
    for(int i = 0; i < n; i++) {
        char f, c;
        scanf(" %c %c", &f, &c);
        deck[i].face = f;
        deck[i].suit = c;
    }
    point(deck, n);
    compare(deck, n);
    for(int i = 0; i < n; i++) {
        if(i == n-1) {
            printf("%c-%c\n", deck[i].face, deck[i].suit);    
        }
        else {
            printf("%c-%c, ", deck[i].face, deck[i].suit);    
        }
    }
    int total = 0;
    for(int i = 0; i < n; i++) {
        total += deck[i].point;
    }
    printf("%d", total);
}