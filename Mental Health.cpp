#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int question(int num){
	

	switch (num) {
		case 1:
			printf("1) I worry about what other people will think\n"
			       "   of me even when I know it doesn't make any\n"
				   "   difference.\n");
			break;
		case 2:
			printf("2) I am unconcerned even if I know people are\n"
			       "   forming an unfavorable impression of me.\n");
			break;
		case 3:
			printf("3) I am frequently afraid of other people\n"
			       "   noticing my shortcomings.\n");
 			break;
		case 4:
			printf("4) I rarely worry about what kind of impression\n"
				   "   I am making on someone.\n");
			break;
		case 5:
			printf("5) I am afraid others will not approve of me.\n");
			break;
		case 6:
			printf("6) I am afraid that people will find fault\n"
				   "   with me\n");
			break;
		case 7:
			printf("7) Other people's opinions of me do not\n"
			       "   bother me.\n");
			break;
		case 8:
			printf("8) When I am talking to someone,\n"
			       "   I worry about what they may be thinking\n"
				   "   about me.\n");
			break;
		case 9:
			printf("9) I am usually worried about\n"
			       "   what kind of impression I make.\n");
			break;
		case 10:
			printf("10) If I know someone is judging me,\n"
			       "    it has little effect on me.\n");
			break;
		case 11:
			printf("11) Sometimes I think I am too concerned\n"
			       "    with what other people think of me\n");
			break;
		case 12:
			printf("12) I often worry that I will say\n"
			       "    or do the wrong things\n");
			break;
	}
	
		
	int rate = 6;
	while (rate > 5 or rate < 1) {
		printf("\nYour answer (1-5): ");
		scanf("%d", &rate);
	}
	
	printf("\n===============================================\n\n");
	            
	return rate;
}

int main() {
	

	printf("===============================================\n"); 
	printf("    Fear of Negative Evaluation Scale    \n");
	printf("===============================================\n\n");
	
	printf("Read each of the following statements carefully\n");
	printf("and indicate how characteristic it is of you\n");
	printf("according to the following scale:\n\n");
	
	printf("1 = Not at all characteristic of me\n");
	printf("2 = Slightly characteristic of me\n");
	printf("3 = Moderately characteristic of me\n");
	printf("4 = Very characteristic of me\n");
	printf("5 = Extremely characteristic of me\n\n");
	
	printf("===============================================\n\n");
	

	int sum = 0;
	

	for (int i = 1; i < 13; i++) {
		sum += question(i);
	}
	

	if (12 <= sum and sum <= 22) {
		printf("        MINIMAL Fear of Negativity\n");
	} else if (23 <= sum and sum <= 35) {
		printf("        MODERATE Fear of Negativity\n");
	} else if (36 <= sum and sum <= 48) {
		printf("        MILD Fear of Negativity\n");
	} else if (49 <= sum and sum <= 60) {
		printf("        SEVERE Fear of Negativity\n");
	}
	
	return 0;
}
