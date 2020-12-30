#include<time.h>
#include<stdio.h>
#include<stdlib.h>

int csb = 0;
int cmb = 0;
int chb = 0;
int csn = 0;
int cbn = 0;
int chn = 0;

int main(void)
{
	while(cmb < 2)
	//while(ptr_tour == ptr_blc) // tant que c'est le tour des blancs
	{
		//stocker la valeur nr dans ptr_cpt_n
		delay(100);
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
		delay(1000);
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