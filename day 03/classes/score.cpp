#include "score.h"
void Score::setScore(int sco) {
	score = sco;   //�����Է� �Լ� ����
}

int Score::getScore() {
	return score;

}
void Score::showScore() {
	cout << "���� " << score << endl;

}