#include <stdio.h>
#include <stdlib.h>

typedef struct card
{
	char* face;
	char* suit;
}c;

int main()
{
	 c aCard;
	 c *cardptr;

	 aCard.face = "Ace";
	 aCard.suit = "suit";

	 cardptr = &aCard;

	 printf("%s of %s\n%s of %s\n%s of %s\n", aCard.face, aCard.suit,cardptr->face,cardptr->suit,(*cardptr).face,(*cardptr).suit);




	system("pause");
	return 0;
}

