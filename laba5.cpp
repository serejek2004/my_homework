#include "laba5_head.h"
int main()
{
    Candidate FirstCandidate("Zelensky", 3800);
    Candidate SecondCandidate("Smith", 100);
    Candidate ThirdCandidate("Duda", 600);
    Candidate FourthCandidate("Bats", 400);
    Candidate FifthCandidate("Zvarych", 300);
    string name_candidates[5] = {FirstCandidate.name_candidate,SecondCandidate.name_candidate,ThirdCandidate.name_candidate,FourthCandidate.name_candidate,FifthCandidate.name_candidate};
    int array_number_votes[5] = {FirstCandidate.number_votes,SecondCandidate.number_votes,ThirdCandidate.number_votes,FourthCandidate.number_votes,FifthCandidate.number_votes};
    float summary_votes = FirstCandidate.number_votes + SecondCandidate.number_votes + ThirdCandidate.number_votes + FourthCandidate.number_votes + FifthCandidate.number_votes;
    FirstCandidate.get_summary_votes(summary_votes);
    FirstCandidate.print_data();
    FirstCandidate.get_percent_points();
    SecondCandidate.get_summary_votes(summary_votes);
    SecondCandidate.print_data();
    SecondCandidate.get_percent_points();
    ThirdCandidate.get_summary_votes(summary_votes);
    ThirdCandidate.print_data();
    ThirdCandidate.get_percent_points();
    FourthCandidate.get_summary_votes(summary_votes);
    FourthCandidate.print_data();
    FourthCandidate.get_percent_points();
    FifthCandidate.get_summary_votes(summary_votes);
    FifthCandidate.print_data();
    FifthCandidate.get_percent_points();
    Elections get_winner;
    get_winner.candidate_winner(name_candidates, array_number_votes);
}