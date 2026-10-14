
















#include<iostream>
using namespace std;

int main()
{
    int n, x;
        cin >> n;

                int* a = new int[n];
                    for(int i = 0; i < n; i++) {
                            cin >> a[i];
                                }

                                        int ct = 0, best = 110;
                                            int* p = new int[n]; // اندازه n کافی است
                                                int v = 0;

                                                        // پیدا کردن کمترین تعداد تکرار
                                                            for(int i = 0; i < n; i++) {
                                                                    ct = 0;
                                                                            for(int j = 0; j < n; j++) {
                                                                                        if(a[i] == a[j]) ct++;
                                                                                                }
                                                                                                        if(ct < best) {
                                                                                                                    best = ct;
                                                                                                                            }






                    }

                                                                                                                                        // پیدا کردن اعدادی با کمترین تکرار
                                                                                                                                            for(int i = 0; i < n; i++) {
                                                                                                                                                    ct = 0;
                                                                                                                                                            for(int j = 0; j < n; j++) {
                                                                                                                                                                        if(a[i] == a[j]) ct++;
                                                                                                                                                                                }
                                                                                                                                                                                        if(ct == best) {
                                                                                                                                                                                                    // جلوگیری از تکرار
                                                                                                                                                                                                                bool found = false;
                                                                                                                                                                                                                            for(int k = 0; k < v; k++) {
                                                                                                                                                                                                                                            if(p[k] == a[i]) {
                                                                                                                                                                                                                                                                found = true;
                                                                                                                                                                                                                                                                                    break;
                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                }
                                                                                                                                                                                                                                                                                                                            if(!found) {
                                                                                                                                                                                                                                                                                                                                            p[v] = a[i];
                                                                                                                                                                                                                                                                                                                                                            v++;
                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                                }



                                                                                                                                                                                                                                                                                                                                                                                    }

                                                                                                                                                                                                                                                                                                                                                                                            // پیدا کردن کوچک‌ترین عدد
                                                                                                                                                                                                                                                                                                                                                                                                int min_i = p[0];
                                                                                                                                                                                                                                                                                                                                                                                                    for(int i = 1; i < v; i++) { // شرط اصلاح شد
                                                                                                                                                                                                                                                                                                                                                                                                            if(min_i > p[i]) min_i = p[i];
                                                                                                                                                                                                                                                                                                                                                                                                                }

                                                                                                                                                                                                                                                                                                                                                                                                                        cout << min_i;

                                                                                                                                                                                                                                                                                                                                                                                                                                delete[] a;
                                                                                                                                                                                                                                                                                                                                                                                                                                    delete[] p;


                                  cout<<" 00000000yes";














                                                                                                                                                                                                                                                                                                                                                                                                                                        return 0;
                                                                                                                                                                                                                                                                                                                                                                                                                                        }

