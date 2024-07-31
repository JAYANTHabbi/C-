#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Base class Student
class Student {
protected:
    int roll_no;

public:
    Student(int r) : roll_no(r) {}

    int getRollNo() const {
        return roll_no;
    }
};

// Derived class Test inheriting from virtual Student
class Test : virtual public Student {
protected:
    vector<int> subject_scores;

public:
    Test(int r, const vector<int>& scores)
        : Student(r), subject_scores(scores) {}

    void displayScores() const {
        cout << "Test Scores for Roll No. " << getRollNo() << ":\n";
        for (size_t i = 0; i < subject_scores.size(); ++i) {
            cout << "Subject " << (i + 1) << ": " << subject_scores[i] << "\n";
        }
    }

    int getTotalScore() const {
        int total = 0;
        for (int score : subject_scores) {
            total += score;
        }
        return total;
    }

    // Accessor for subject_scores
    const vector<int>& getSubjectScores() const {
        return subject_scores;
    }
};

// Derived class Sports inheriting from virtual Student
class Sports : virtual public Student {
protected:
    int sports_score;

public:
    Sports(int r, int s_score)
        : Student(r), sports_score(s_score) {}

    void displaySportsScore() const {
        cout << "Sports Score for Roll No. " << getRollNo() << ": " << sports_score << "\n";
    }

    int getSportsScore() const {
        return sports_score;
    }
};

// Derived class Result inheriting from Test and Sports
class Result : public Test, public Sports {
public:
    Result(int r, const vector<int>& scores, int s_score)
        : Student(r), Test(r, scores), Sports(r, s_score) {}

    void displayFinalResult() const {
        Test::displayScores();  // Call displayScores() from Test
        Sports::displaySportsScore();  // Call displaySportsScore() from Sports

        // Access subject_scores using Test's accessor method
        const vector<int>& scores = Test::getSubjectScores();
        int total_score = Sports::getSportsScore();

        for (int score : scores) {
            total_score += score;
        }

        cout << "Total Score for Roll No. " << getRollNo() << ": " << total_score << "\n";
    }
};

int main() {
    // Example usage
    vector<int> test_scores = {90, 85, 88};
    int sports_score = 95;
    int roll_no = 1;

    Result student1(roll_no, test_scores, sports_score);
    student1.displayFinalResult();

    return 0;
}

