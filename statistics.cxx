#include <cmath>
#include <iostream>
#include <cstdlib>

using namespace std;

void f(double* p, const int N){
	for(int i=0; i<N; i++){
	int rand();
	p[i] = rand()*1.0/RAND_MAX*1.0;
	}

}
void g(double& mean, double& var, const int N, double* p){
	mean = 0;
		for(int i=0; i<N; i++){
		mean += p[i]/N;
		}
	var = 0;
		for(int i=0; i<N; i++){
		var += pow(p[i]-mean,2)/N;
		}
}

int main(){
srand(time(NULL));
   const int N = 1000;
   double p[N];
   double mean, var;

	f(p, N);
	g(mean, var, N, p);

   cout << "Mean = " << mean << endl;
   cout << "Variance = " << var << endl;

   return 0;
}
