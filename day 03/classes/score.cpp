#include "score.h"
void Score::setScore(int sco) {
	score = sco;   //점수입력 함수 구현
}

int Score::getScore() {
	return score;

}
void Score::showScore() {
	cout << "점수 " << score << endl;

}