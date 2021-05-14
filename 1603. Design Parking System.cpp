Question Link : https://leetcode.com/problems/design-parking-system/

//Solution by Amreen

class ParkingSystem {
public:
    vector<int>par;
    ParkingSystem(int big, int medium, int small) {
        par.push_back(0);
        par.push_back(big);
        par.push_back(medium);
        par.push_back(small);
    }
    
    bool addCar(int carType) {
        if(par[carType])
        {
            par[carType]--;
            return true;
        }
        return false;
    }
};



