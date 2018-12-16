#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct card
{
	char* face;
	char* suit;
}card;
void deal(const card* const wDeck)
{
	for (int i = 0; i < 52; i++)
	{
		printf("%5s of %-8s%s", wDeck[i].face, wDeck[i].suit, (i + 1) % 4 ? " " : "\n");
	}
}
void shuffle(card* const wDeck)
{
	int j;
		card temp;
	for (int i = 0; i < 52; i++)
	{
		j = rand() % 52;
		temp = wDeck[i];
		wDeck[i] = wDeck[j];
		wDeck[j] = temp;
	}
}
void fillDeck(card* const wDeck, const char* wFace[], const char* wSuit[])
{
	int i;
	for (i = 0; i < 52; i++)
	{
		wDeck[i].face = wFace[i % 13];
		wDeck[i].suit = wSuit[i / 13];
	}
}
int main()
{
	card deck[52];
	const char *face[] = { "Ace","Dence","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Jack","Queen","King" };
	const char *suit[] = { "Hearts","Diamonds","Clubs","Spades" };
	srand(time(NULL));
	fillDeck(deck, face, suit);
	shuffle(deck);
	deal(deck);



	system("pause");
	return 0;
}

