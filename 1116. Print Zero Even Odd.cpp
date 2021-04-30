Question Link : https://leetcode.com/problems/print-zero-even-odd/

//Solution by Amreen

#include<semaphore.h>
class ZeroEvenOdd {
private:
    int n;
    sem_t seven;
    sem_t sodd;
    sem_t szero;
public:
    ZeroEvenOdd(int n) {
        this->n = n;
        sem_init(&seven,0,0);
        sem_init(&sodd,0,0);
        sem_init(&szero,0,1);
    }

    // printNumber(x) outputs "x", where x is an integer.
    void zero(function<void(int)> printNumber) {
        int i,j=1;
        for(i=1;i<=2*n;i++)
        {
            sem_wait(&szero);
            if(i%2 == 0)
            {
                if(j%2 == 0)
                    sem_post(&seven);
                else
                    sem_post(&sodd);
                j++;
            }
           else
           {
               printNumber(0);
                sem_post(&szero);
           }
        }
    }

    void even(function<void(int)> printNumber) {
        for(int i=2;i<=n;i+=2){
        sem_wait(&seven);
        printNumber(i);
        sem_post(&szero);
        }     
    }

    void odd(function<void(int)> printNumber) {
        for(int i=1;i<=n;i+=2){
        sem_wait(&sodd);
        printNumber(i);
        sem_post(&szero);
        }
    }
    
};
