#include "Snake.h"
#include <iostream>
#include <stdexcept>
#include <string>
#include <SDL_image.h>
#include <SDL.h>
#include <windows.h>

using namespace std;

void init (const char* title, int xpos, int ypos, int width, int height, bool sre);

/*SDL_Surface* LoadImage(std::string file_path){
    SDL_Surface *load_background = NULL;
    SDL_Surface *optimize_image = NULL;

    load_background = IMG_Load(file_path.c_str());
    if(load_background != NULL){
        optimize_image = SDL_DisplayFormat(load_background);
        SDL_FreeSurface(load_background);
    }

    return optimize_image;
}*/

int main(int argc, char *argv[])
{
    const int FPS = 60;
    const int frameDelay = 1000 / FPS;
    Uint32 frameStart;
    int frameTime;


    /*SDL_Surface *screen;
    SDL_Surface *image;

    if(SDL_Init(SDL_INIT_EVERYTHING) == -1)
        return 1;

    screen = SDL_SetVideoMode(800, 600, 32, SDL_SWSURFACE);
    image = LoadImage("background_snake.png");

    SDL_BlitSurface(image, NULL, screen, NULL);

    SDL_Flip(screen);
    SDL_Delay(5000);
    SDL_FreeSurface(image);
    SDL_Quit();

    */

  try
  {
    Snake s;
    return s.exec();
  } catch (std::exception &e)
  {
    std::cerr << e.what() << std::endl;
    return 1;
  }
}

