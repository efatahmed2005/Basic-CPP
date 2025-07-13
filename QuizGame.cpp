#include <iostream>

int main()
{
    std::string questions[5] = {"1. What HTML element is used to embed a video in a webpage?",
                                "2. Which event is triggered when an element has been loaded in HTML?",
                                "3. What is the purpose of the 'controls' attribute in the <audio> and <video> tags?",
                                "4. Which event is triggered when a user clicks on an HTML element?",
                                "5. Which attribute can be used to prevent a video from playing automatically when the page loads?"};

    std::string options[30] = {"a. <audio>", "b. <embed>", "c. <iframe>", "d. <video>",
                               "a. onloadstart", "b. onplay", "c. onloadeddata", "d. onerror",
                               "a. To autoplay the media", "b. To control the volume of the media", "c. To display media controls like play, pause, and volume adjustment", "d. To set the media on a loop",
                               "a. onkeydown", "b. onmouseover", "c. onclick", "d. onresize",
                               "a. autoplay", "b. loop", "c. controls", "d. none of the above"};
    char answer[5] = {'d', 'a', 'c', 'c', 'a'};
    int question_quantity = sizeof(questions) / sizeof(questions[0]);
    int score = 0;
    char input[5];
    for (int i = 0; i < question_quantity; i++)
    {
        std::cout << std::endl
                  << std::endl
                  << questions[i] << std::endl;
        for (int j = i * 4; j < (i * 4) + 4; j++)
        {
            std::cout << options[j] << std::endl;
        }
        std::cout << std::endl
                  << "Input : ";
        std::cin >> input[i];
        if (input[i] == answer[i])
        {
            std::cout << "\033[1;33mCorrect Answer .\033[0m" << std::endl;
            score++;
        }
        else
            std::cout << "\033[1;31mWrong Answer .\033[0m" << std::endl;
    }
    std::cout << std::endl
              << "\033[1;34mYou have correctly answered " << score << " out of " << question_quantity << " questions." << std::endl
              << "\033[1;32mYou have obtained " << ((double)score / question_quantity) * 100 << "% of total mark .\033[0m" << std::endl;
    return 0;
}