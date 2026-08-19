#include "colors.h"
#include <vector>

const Color skyBlue   = { 102, 191, 255, 255 }; 
const Color limeGreen = {   0, 158,  47, 255 };
const Color gold      = { 255, 203,   0, 255 };
const Color violet    = { 135,  60, 190, 255 };
const Color orange    = { 255, 161,   0, 255 };
const Color darkBlue  = {   0,  82, 172, 255 };
const Color emerald   = {   0, 228,  48, 255 };
const Color gray   =    {  228, 228,  172, 0 };

std::vector<Color> GetCellColors(){
    return {skyBlue,limeGreen,gold,violet,orange,darkBlue,emerald,gray};

}
