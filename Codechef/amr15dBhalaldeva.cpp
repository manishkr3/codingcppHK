#include <bits/stdc++.h>
using namespace std;

int main()
{
    /* 	ios::sync_with_stdio(false); these are for alligning and output all cout ant once at the end
 	cin.tie(0);   also its reduced time unknownly 0.24 to 0.02 so its good to use it and know what 
     is it.
     ios::sync_with_stdio(false);- it actually disables the synchronization between c and cpp standard
     straemswhich in practice allows you to mix C- and C++-style I/O and get sensible and expected
      results. If you disable the synchronization, then C++ streams are allowed to have their own
       independent buffers, which makes mixing C- and C++-style I/O an adventure.
       cin.tie(NULL);-This unties cin from cout. Tied streams ensure that one stream is flushed 
       automatically before each I/O operation on the other stream.
       after this when your input streams first runned thereafter your output buffer shown onn
       console at once.If cin and cout are tied, you can expect the output to be flushed (i.e.,
        visible on the console) before the program prompts input from the user. If you untie the
         streams, the program might block waiting for the user to enter their name but the
          "Enter name" message is not yet visible (because cout is buffered by default, 
          output is flushed/displayed on the console only on demand or when the buffer is full).
          */
   
   ios::sync_with_stdio(false); 
   cin.tie(0); 

    int N, t;
    cin >> N;//first set the value by input if there is any then use it in te code
    vector<long long> Nimbadas(N);
    for (int i = 0; i < N; i++)

    {
        cin >> Nimbadas[i];
        // Nimbadas.push_back(t);
    }
    sort(Nimbadas.begin(), Nimbadas.end());

    vector<long long> min(N);
    min[0] = Nimbadas[0];
    for (auto i = 1; i <= N; i++)
    {
        min[i] = min[i - 1] + Nimbadas[i];
    }
    int Q;
    cin >> Q;
    for (auto j = 0; j < Q; j++)
    /*auto is automatic deduction by the compiler about the data type and it should be 
    initialised ant the time of declaration or else there will be compile time error
    auto do its work by analysing the initialised value during compile time ,it will inc. compile
    time but run time will not be affected but if the return type of the function is auto then
    there will be inc in time at run time. because it will analyse after return of function at 
    run time*/
    {
        int k;
        cin >> k;
        cout << " for k="<<k<<"min is =";
        if (k==0)
        {
            cout << min[N-1]<<"\n";
            continue;
        }
        int coins_needed = ceil(1.0 * N / (k + 1));
        cout << min[coins_needed-1] << "\n";
    }

    return 0;
}