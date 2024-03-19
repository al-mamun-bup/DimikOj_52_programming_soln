#include<iostream>
#include <iomanip>
using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    int other_team_run, current_team_run, balls_to_play;
    cin >> other_team_run >> current_team_run >> balls_to_play;

    int balls_played = 300 - balls_to_play;

    double current_run_rate = (double) current_team_run / balls_played * 6;

    double required_run_rate;
    if (current_team_run <= other_team_run) {
      int runs_to_score = other_team_run + 1 - current_team_run;
      required_run_rate = (double) runs_to_score / balls_to_play * 6;
    }
    else {
      required_run_rate = 0;
    }

    cout << fixed << setprecision(2) << current_run_rate << ' ' << required_run_rate << '\n';
  }
  return 0;
}
