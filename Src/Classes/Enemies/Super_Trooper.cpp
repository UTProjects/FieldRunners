#include"../../Interfaces/Enemies/Super_Trooper.hpp"

using namespace std;

Super_Trooper::Super_Trooper(float health,int speed,int kill_bounus,int damage,pair<float,float> location,
                string pic_address,int size,int pic_count,Window* window,int destination_index)
       :Enemie(health,speed,kill_bounus,damage,location,pic_address,size,pic_count,window,destination_index){

}