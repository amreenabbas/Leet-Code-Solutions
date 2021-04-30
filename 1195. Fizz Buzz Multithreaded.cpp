Question Link : https://leetcode.com/problems/fizz-buzz-multithreaded/

//Solution by Amreen

#include<semaphore.h>
class FizzBuzz {
private:
    int n;
    sem_t sfizz;
    sem_t sbuzz;
    sem_t sfizzbuzz;
    sem_t snor;
public:
    FizzBuzz(int n) {
        this->n = n;
        sem_init(&sfizz,0,0);
        sem_init(&sbuzz,0,0);
        sem_init(&sfizzbuzz,0,0);
        sem_init(&snor,0,1);
    }

    // printFizz() outputs "fizz".
    void fizz(function<void()> printFizz) {
        for(int i = 1;i<=(n/3-n/15);i++)
        {
            sem_wait(&sfizz);
            printFizz();
            sem_post(&snor);
        }
    }

    // printBuzz() outputs "buzz".
    void buzz(function<void()> printBuzz) {
        for(int i =1;i<=(n/5-n/15);i++)
        {
            sem_wait(&sbuzz);
            printBuzz();
            sem_post(&snor);
        }
    }

    // printFizzBuzz() outputs "fizzbuzz".
	void fizzbuzz(function<void()> printFizzBuzz) {
        for(int i =1;i<=n/15;i++)
        {
            sem_wait(&sfizzbuzz);
            printFizzBuzz();
            sem_post(&snor);
        }
    }

    // printNumber(x) outputs "x", where x is an integer.
    void number(function<void(int)> printNumber) {
        for(int i = 1;i<=n;i++)
        {
            sem_wait(&snor);
            if(i%3 == 0 && i%5 == 0)
                sem_post(&sfizzbuzz);
            else if(i%3 == 0)
                sem_post(&sfizz);
            else if(i%5 == 0)
                sem_post(&sbuzz);
            else
            {
                printNumber(i);
                sem_post(&snor);
            }    
        }
    }
};
