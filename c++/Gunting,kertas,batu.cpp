#include <iostream>
#include <cmath>
#include <string>
#include <time.h>
#include <stdlib.h>

void opening(int &input){
  // pilihan input untuk player
    std::cout << " masukan pilihan " << std::endl;
    std::cout << "1.Gunting" << std::endl;
    std::cout << "2.Kertas" << std::endl;
    std::cout << "3.Batu" << std::endl << std:: endl;
    //input player
    std::cout << "masukan pilihan anda: ";
    std::cin >> input;
    std::cout << std::endl;
}

/*
computer 0 = gunting
computer 1 = kertas 
computer 2 = batu
*/

int main(){
//declarasi 
   char program;
   int player;
   srand(time(NULL));
   int computer;
   std::string awal("mau main ngga? (y/n): ");
   
 //intro 
    std::cout << " selamat datang di permainan gunting,kertas,batu " << std::endl <<std::endl;
 //looping untuk menjalankan program gunting kertas batu
   while(true){
    //input program 
    computer = rand()%3;
      std::cout << std::endl;
      std::cout << awal;
      std::cin >> program;
      std::cout << std::endl;
      //penambahan kata di string awal agar lebih interaktif
         awal.insert(9, "lagi ");
       if(program == 'y'){
        //kata - kata pembuka dan input awal
          opening(player);
       //pilihan player
          if(player == 1){
         std::cout << "pilihan anda: gunting " << std::endl;
          //jika computer gunting
             if(computer == 0){
                 std::cout << "computer: gunting " << std::endl << std::endl;
                 std::cout << "hasil pertandingan draw" << std::endl;
          //jika conputer kertas
             }else if(computer == 1){
                  std::cout << "computer: kertas " << std::endl << std::endl;
                 std::cout << " hmmmm,hebat juga bisa memenangkan pertandingan ini " << std::endl;
        //jika computer batu
             }else if(computer == 2){
                 std::cout << "computer : batu " << std::endl << std::endl;
                 std::cout << "memalukan anda kalah oleh computer " << std::endl;
             }
         //jika player kertas
         }else if(player == 2){
             std::cout << "pilihan anda: kertas" << std::endl;
          //jika player gunting
              if(computer == 0){
                  std::cout << "computer: gunting " << std::endl << std::endl;
                  std::cout << "memalukan anda kalah oleh computer " << std::endl;
           //jika conputer kertas
              }else if(computer == 1){
                  std::cout << "computer: kertas " << std::endl << std::endl;
                  std::cout << "hasil pertandingan draw" << std::endl;
          //jika computer batu
              }else if (computer == 2){
                  std::cout << "computer: batu" << std::endl << std::endl;
                  std::cout << "hmmm hebat juga bisa memenangkan pertandingan ini " << std::endl;
              }
            //jika player batu
          }else if(player == 3){
              std::cout << "pilihan anda: batu" << std::endl;
            //jika computer gunting
               if(computer == 0){
                   std::cout << "computer: gunting " << std::endl << std::endl;
                   std::cout << "hmmm hebat juga anda memenangkan pertandingan ini" << std::endl;
               //jika computer kertas
               }else if(computer == 1){
                   std::cout << "computer: kertas" << std::endl << std::endl;
                   std::cout << "memalukan anda kalah oleh computer " << std::endl;
             //jika computer batu
               }else if(computer == 2){
                   std::cout << "computer: batu " << std::endl << std::endl;
                   std::cout << "hasil pertandingan draw " << std::endl;
               }
          }
          
      //keluar looping atau keluar dari permainan
      }else if(program == 'n'){
           break;
           }
   }
    //penutupan program
   std::cout << " terima kasih telah bermain permainan gunting,kertas,batu " << std::endl << std::endl;
   std::cout << " program telah selesai dijalankan " << std::endl;

  std::cin.get();
  return 0;
}
