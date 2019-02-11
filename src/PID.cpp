#include "PID.h"

using namespace std;

/*
* TODO: Complete the PID class.
*/

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp1, double Ki1, double Kd1) {
  Kp=Kp1;
  Ki=Ki1;
  Kd=Kd1;
  i_error = 0;
  d_error = 0;
  p_error = 0;
}

void PID::UpdateError(double cte) {
  d_error = cte-p_error;
  p_error= cte;
  i_error +=cte;
}

double PID::TotalError() {
  return d_error + p_error +i_error;
}

