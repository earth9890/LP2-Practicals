#include <bits/stdc++.h>
// Hari
/* Converted Code of Pyth
using namespace std;

// Dictionary of possible customer inquiries and their respective replies
map<string, vector<string>> replies = {
    {"greeting", {"Hello! Welcome to our car service center. How can I assist you today?", "Hi there! How may I help you with your car?", "Welcome! What brings you to our car service center?"}},
    {"ending", {"Thank you for choosing our car service. Have a great day!", "Your satisfaction is our top priority. Goodbye!", "If you have any more questions, feel free to ask. Take care and goodbye!"}},
    {"help", {"Sure, I'm here to help. What issues are you experiencing with your car?", "How can I assist you with your car service? Please let me know.", "I'm here to provide the best possible solutions for your car problems. What do you need help with?"}},
    {"battery_problem", {"If you're experiencing battery issues with your car, we can diagnose and replace the battery if necessary. Please bring it to our service center for inspection.", "Battery problems in cars can be resolved by inspecting the battery and, if needed, replacing it. Visit our service center, and our technicians will assist you.", "Car battery problems can be resolved through proper inspection and, if required, replacement. Bring your car to our service center, and we'll take care of it."}},
    {"software_issue", {"Software issues in cars are typically related to the vehicle's computer systems. We have diagnostic tools to identify and resolve such problems. Please bring your car to our service center for further assistance.", "If your car is experiencing software issues, we can diagnose and fix them using specialized tools. Visit our service center, and our technicians will help resolve the problem.", "For software issues in cars, our service center is equipped with diagnostic tools to identify and fix the problem. Bring your car in, and we'll take care of it."}},
    {"default", {"I apologize, but I couldn't understand your request.", "Apologies, I didn't quite get that. Could you please rephrase?", "I'm still learning. Can you provide more information?"}}};

string respond_to_inquiry(string inquiry)
{
    string lowercase_inquiry = inquiry;
    transform(lowercase_inquiry.begin(), lowercase_inquiry.end(), lowercase_inquiry.begin(), ::tolower);

    if (regex_search(lowercase_inquiry, regex("\\b(?:hello|hi)\\b")))
    {
        auto greeting_replies = replies["greeting"];
        return greeting_replies[rand() % greeting_replies.size()];
    }
    else if (regex_search(lowercase_inquiry, regex("\\b(?:goodbye|bye)\\b")))
    {
        auto ending_replies = replies["ending"];
        return ending_replies[rand() % ending_replies.size()];
    }
    else if (regex_search(lowercase_inquiry, regex("\\b(?:help|support)\\b")))
    {
        auto help_replies = replies["help"];
        return help_replies[rand() % help_replies.size()];
    }
    else if (regex_search(lowercase_inquiry, regex("\\b(?:battery|charge)\\b")))
    {
        auto battery_problem_replies = replies["battery_problem"];
        return battery_problem_replies[rand() % battery_problem_replies.size()];
    }
    else if (regex_search(lowercase_inquiry, regex("\\b(?:software|update|reset)\\b")))
    {
        auto software_issue_replies = replies["software_issue"];
        return software_issue_replies[rand() % software_issue_replies.size()];
    }
    else if (regex_search(lowercase_inquiry, regex("\\b(?:water|damage)\\b")))
    {
        auto water_damage_replies = replies["water_damage"];
        return water_damage_replies[rand() % water_damage_replies.size()];
    }
    else
    {
        auto default_replies = replies["default"];
        return default_replies[rand() % default_replies.size()];
    }
}

int main()
{
    cout << "Welcome to the Customer Interaction Chatbot!" << endl;
    cout << "Type 'exit' to end the conversation." << endl;

    while (true)
    {
        string user_input;
        cout << "Customer: ";
        getline(cin, user_input);

        if (user_input == "exit")
        {
            break;
        }

        string bot_response = respond_to_inquiry(user_input);
        cout << "Chatbot: " << bot_response << endl;
    }

    cout << "Thank you for using the Customer Interaction Chatbot. Goodbye!" << endl;

    return 0;
}
