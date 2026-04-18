#include <iostream>
#include <string>
#include <windows.h>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <cctype>
using namespace std;

// ----------- GLOBAL -----------
vector<string> history;

// ----------- SLOW PRINT -----------
void slowPrint(string text, int delay = 20)
{
    for (char c : text)
    {
        cout << c << flush;
        Sleep(delay);
    }
}

// ----------- RANDOM RESPONSE -----------
string getRandomResponse(vector<string> responses)
{
    return responses[rand() % responses.size()];
}

// ----------- NAME VALIDATION -----------
bool isValidName(string name)
{
    if (name.empty())
        return false;

    for (char c : name)
    {
        if (!isalpha(c) && c != ' ')
        {
            return false;
        }
    }
    return true;
}

// ----------- INVALID RESPONSES -----------
vector<string> invalidMsgs = {
    "That input doesn't look right. Please enter a valid number.",
    "Hmm... I was expecting a number. Try again.",
    "Invalid choice detected. Please follow the menu options.",
    "Oops! That doesn’t match the available options.",
    "Please enter a valid numeric choice from the menu."};

// ----------- CONTINUE / EXIT RESPONSES -----------
vector<string> continueMsgs = {
    "Nice—let’s keep improving step by step 💪",
    "Great mindset. Let’s analyze further 🔍",
    "You're building consistency—continue 🚀",
    "Progress is happening. Let’s go again ⚡",
    "Let’s refine your approach even more 📈"};

vector<string> goodbyeMsgs = {
    "Goodbye! Stay consistent and keep growing 🌱",
    "Take care—come back stronger next time 💡",
    "Keep learning and improving daily 🚀",
    "See you again—progress never stops 🔄",
    "Stay focused and keep moving forward 🔥"};

// ----------- TITLE -----------
void showTitle()
{
    slowPrint("\n===========================================\n");
    slowPrint("        STUDENT MIND ANALYZER SYSTEM\n");
    slowPrint("     Understand • Improve • Grow 🚀\n");
    slowPrint("===========================================\n\n");
}

// ----------- HISTORY -----------
void addToHistory(string entry)
{
    history.push_back(entry);
}

void showHistory()
{
    slowPrint("\n========= SESSION HISTORY =========\n");
    for (int i = 0; i < history.size(); i++)
    {
        cout << i + 1 << ". " << history[i] << endl;
    }
    slowPrint("===================================\n");
}

// ----------- MOTIVATION -----------
void randomMotivation()
{
    vector<string> msgs = {
        "Keep going, consistency beats talent!",
        "Small progress is still progress.",
        "Discipline will take you far.",
        "You are closer than you think.",
        "Every expert was once a beginner."};
    slowPrint("\n💡 " + getRandomResponse(msgs) + "\n");
}

// ----------- WEBSITE SUGGESTION -----------
void suggestWebsites(int mchoice)
{
    slowPrint("\n🌐 Recommended Study Resources:\n");

    switch (mchoice)
    {
    case 1:
        slowPrint("- Khan Academy\n- MIT OpenCourseWare\n- NPTEL\n");
        break;
    case 2:
        slowPrint("- Quizlet\n- Anki\n- Brainscape\n");
        break;
    case 3:
        slowPrint("- LeetCode\n- HackerRank\n- CodeChef\n");
        break;
    case 4:
        slowPrint("- Khan Academy\n- Coursera\n");
        break;
    case 5:
        slowPrint("- GeeksforGeeks\n- Competitive Platforms\n");
        break;
    case 6:
        slowPrint("- Notion\n- Todoist\n- Forest App\n");
        break;
    default:
        slowPrint("- YouTube\n");
    }

    slowPrint("------------------------------------\n");
}

// ----------- MENTALITY -----------
class Mentality
{
public:
    virtual void mindset() = 0;
};

class Conceptual : public Mentality
{
public:
    void mindset() { slowPrint("You understand concepts deeply.\n"); }
};

class Memorizing : public Mentality
{
public:
    void mindset() { slowPrint("You rely more on memory.\n"); }
};

class Practical : public Mentality
{
public:
    void mindset() { slowPrint("You learn by doing.\n"); }
};

class SlowLearner : public Mentality
{
public:
    void mindset() { slowPrint("You take time but gain strong clarity.\n"); }
};

class FastLearner : public Mentality
{
public:
    void mindset() { slowPrint("You grasp concepts quickly.\n"); }
};

class Inconsistent : public Mentality
{
public:
    void mindset() { slowPrint("You need better consistency.\n"); }
};

// ----------- STUDENT BASE -----------
class Student
{
protected:
    string name;
    Mentality *m;

public:
    void setdetails(string n, Mentality *mentality)
    {
        name = n;
        m = mentality;
    }

    void display()
    {
        slowPrint("\n------------------------------------\n");
        slowPrint("Student: " + name + "\n");
    }

    virtual void suggestAction() = 0;
};

// ----------- STUDENT TYPES -----------

class FocusedStudent : public Student
{
public:
    void suggestAction()
    {
        display();
        vector<string> res = {
            "You're in peak focus mode—this is where real growth happens.",
            "Your concentration is sharp—push into deep work.",
            "Momentum is fully on your side right now.",
            "This level of focus can lead to breakthroughs.",
            "You're operating at high efficiency—keep going."};
        slowPrint(getRandomResponse(res) + "\n");
        m->mindset();
    }
};

class TiredStudent : public Student
{
public:
    void suggestAction()
    {
        display();
        vector<string> res = {
            "Your energy is low—rest is the best strategy now.",
            "A short break will recharge your mind effectively.",
            "Recovery now will improve performance later.",
            "Don't force productivity—reset first.",
            "Even top performers prioritize rest."};
        slowPrint(getRandomResponse(res) + "\n");
        m->mindset();
    }
};

class StressedStudent : public Student
{
public:
    void suggestAction()
    {
        display();
        vector<string> res = {
            "You're overwhelmed—simplify your approach.",
            "Take one step at a time.",
            "Break tasks into smaller pieces.",
            "Pause, breathe, then continue.",
            "Reduce pressure to regain clarity."};
        slowPrint(getRandomResponse(res) + "\n");
        m->mindset();
    }
};

class LazyStudent : public Student
{
public:
    void suggestAction()
    {
        display();
        vector<string> res = {
            "Start small—momentum will follow.",
            "Action creates motivation.",
            "Even 5 minutes of effort matters.",
            "Don’t wait—just begin.",
            "Small steps lead to big change."};
        slowPrint(getRandomResponse(res) + "\n");
        m->mindset();
    }
};

class MotivatedStudent : public Student
{
public:
    void suggestAction()
    {
        display();
        vector<string> res = {
            "You're unstoppable right now—use it wisely.",
            "Push beyond your limits.",
            "This energy can create real progress.",
            "Channel this into meaningful work.",
            "You're ready for the next level."};
        slowPrint(getRandomResponse(res) + "\n");
        m->mindset();
    }
};

class ConfusedStudent : public Student
{
public:
    void suggestAction()
    {
        display();
        vector<string> res = {
            "Confusion is the start of understanding.",
            "Go back to fundamentals.",
            "Clarity comes step by step.",
            "Break concepts into smaller parts.",
            "You're closer to understanding than you think."};
        slowPrint(getRandomResponse(res) + "\n");
        m->mindset();
    }
};

// ----------- MENUS -----------
void showStudentMenu()
{
    cout << "\n========== SELECT STUDENT TYPE ==========\n";
    cout << "1. Focused\n2. Tired\n3. Stressed\n4. Lazy\n5. Motivated\n6. Confused\n";
    cout << "7. Show History\n0. Exit\n";
    cout << "-----------------------------------------\n";
    cout << "Enter your choice -> ";
}

void showMentalityMenu()
{
    cout << "\n======= SELECT LEARNING MENTALITY =======\n";
    cout << "1. Conceptual\n2. Memorizing\n3. Practical\n4. Slow\n5. Fast\n6. Inconsistent\n";
    cout << "-----------------------------------------\n";
    cout << "Enter your choice -> ";
}

// ----------- MAIN -----------
int main()
{
    srand(time(0));
    showTitle();

    Student *s;
    Mentality *m;

    int choice, mchoice;
    string name;
    char again = 'y';

    while (again == 'y' || again == 'Y')
    {

        showStudentMenu();

        if (!(cin >> choice))
        {
            cin.clear();
            cin.ignore(1000, '\n');
            slowPrint("\n" + getRandomResponse(invalidMsgs) + "\n");
            slowPrint("Let's try that again.\n");
            continue;
        }

        if (choice < 0 || choice > 7)
        {
            slowPrint("\n" + getRandomResponse(invalidMsgs) + "\n");
            continue;
        }

        if (choice == 0)
        {
            slowPrint("\n" + getRandomResponse(goodbyeMsgs) + "\n");
            break;
        }

        if (choice == 7)
        {
            showHistory();
            continue;
        }

        showMentalityMenu();

        if (!(cin >> mchoice))
        {
            cin.clear();
            cin.ignore(1000, '\n');
            slowPrint("\n" + getRandomResponse(invalidMsgs) + "\n");
            continue;
        }

        if (mchoice < 1 || mchoice > 6)
        {
            slowPrint("\n" + getRandomResponse(invalidMsgs) + "\n");
            continue;
        }

        cin.ignore();

        // ✅ NAME VALIDATION LOOP ADDED
        while (true)
        {
            cout << "Enter name -> ";
            getline(cin, name);

            if (isValidName(name))
                break;
            slowPrint("Invalid name. Please enter letters only.\n");
        }

        vector<string> analyzingMsgs = {
            "Analyzing your current state and learning behavior...",
            "Understanding your mindset and study pattern...",
            "Evaluating your focus, energy, and learning style...",
            "Processing your inputs to generate personalized guidance...",
            "Mapping your mental state to the best possible strategy..."};

        slowPrint("\n" + getRandomResponse(analyzingMsgs) + "\n", 25);
        Sleep(500);
        slowPrint("Generating insights and recommendations...\n", 25);
        Sleep(400);
        slowPrint("✔ Analysis complete\n\n", 20);

        switch (choice)
        {
        case 1:
            s = new FocusedStudent();
            break;
        case 2:
            s = new TiredStudent();
            break;
        case 3:
            s = new StressedStudent();
            break;
        case 4:
            s = new LazyStudent();
            break;
        case 5:
            s = new MotivatedStudent();
            break;
        case 6:
            s = new ConfusedStudent();
            break;
        }

        switch (mchoice)
        {
        case 1:
            m = new Conceptual();
            break;
        case 2:
            m = new Memorizing();
            break;
        case 3:
            m = new Practical();
            break;
        case 4:
            m = new SlowLearner();
            break;
        case 5:
            m = new FastLearner();
            break;
        case 6:
            m = new Inconsistent();
            break;
        }

        s->setdetails(name, m);
        s->suggestAction();

        suggestWebsites(mchoice);
        randomMotivation();

        addToHistory(name + " analyzed.");

        delete s;
        delete m;

        slowPrint("\nAnalyze again? (y/n): ");
        cin >> again;

        if (again == 'y' || again == 'Y')
            slowPrint("\n" + getRandomResponse(continueMsgs) + "\n");
        else if (again == 'n' || again == 'N')
            slowPrint("\n" + getRandomResponse(goodbyeMsgs) + "\n");
        else
        {
            slowPrint("\nInvalid response. Please enter y or n.\n");
            continue;
        }

        cout << endl;
    }

    return 0;
}