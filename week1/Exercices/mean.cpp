#include <iostream>
#include <fstream>
#include <vector>
#include <numeric>

using namespace std;

void read_data(istream& input, vector<float>& data)
{
    float value;
    while (input >> value) {
        data.push_back(value);
    }
}

// Function to calculate the mean value of a vector
float mean_value(const vector<float>& data)
{
    if (data.empty()) {
        cerr << "Error: No data to calculate mean." << endl;
        return 0;
    }

    // Calculate mean using std::accumulate
    float sum = accumulate(data.begin(), data.end(), 0.0f);
    return sum / data.size();
}

int main(int argc, char* argv[])
{
  if (argc != 2) {
    cerr << "Usage: ./mean <filename>" << endl;
    return 1;
  }

//creates an object
ifstream infile(argv[1]);

//check the status of the object after its creation
if (not infile) {
  cerr << "Error: cannot access " << argv[1] << endl;
  return 2;
}
  vector<float> data;
  read_data(infile, data);
  cout << data.size() << " values read from file" << endl;

  float mean = mean_value(data);
  cout << "Mean value = " << mean << endl;
  return 0;
}

