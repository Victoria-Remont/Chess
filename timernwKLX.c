#include<time.h>
#include<stdio.h>
#include<stdlib.h>

void delay(int nb_sec)		/*Pause l'application pour i seconds*/
{
	//int milli_seconds = 1000000 * nb_sec;
	int milli_seconds = CLOCKS_PER_SEC * nb_sec;

	clock_t start_time = clock();

	while (clock() < start_time + milli_seconds)
		;
}

int csb = 0;
int cmb = 0;
int chb = 0;
/*int *psb; //ptr qui stocke la valeur du compteur blanc (seconde, minute, heure)
int *pmb;
int *phb;*/
int csn = 0;
int cmn = 0;
int chn = 0;
/*int *psn; //ptr qui stocke la valeur du compteur noir (seconde, minute, heure)
int *pmn;
int *phn; */


int main(void)
{
	while(cmb < 1)
	//while(ptr_tour == ptr_blc) // tant que c'est le tour des blancs
	{
		//stocker la valeur nr dans ptr_cpt_n
		/*psn = &csn;
		pmn = &cmn;
		phn = &chn;*/

		delay(1); //on attend une seconde
		csb = csb+1;

		if(csb == 60)
		{
			csb = 0;
			cmb = cmb+1;
		}

		if(cmb == 60)
		{
			cmb = 0;
			chb = chb+1;
		}

		printf("%d h %d min %d sec\n", chb, cmb, csb);
		// afficher le chrono
	}

	/*while(ptr_tour == ptr_blc) // tant que c'est le tour des noirs
	{
		//stocker la valeur blc dans ptr_cpt_b
		delay(1);
		csn = csn+1;

		if(csn == 60)
		{
			csn = 0;
			cmn = cmb+1;
		}

		if(cmn == 60)
		{
			cmn = 0;
			chn = chn+1;
		}

		printf("%d h %d min %d sec\n", chn, cmn, csn);
		// afficher le chrono
	}
*/
	return 0;
}