#ifndef _SCORE_H_
#define _SCORE_H_

class Score {
	private:
		std::string gameId;
		std::string username;
		std::string points;
	public:
		Score(std::string id, std::string un, std::string pt);
		std::string getId();
		std::string getUsername();
		int getPoints();
};

#endif