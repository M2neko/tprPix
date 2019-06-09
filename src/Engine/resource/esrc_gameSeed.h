/*
 * ========================= esrc_gameSeed.h ==========================
 *                          -- tpr --
 *                                        CREATE -- 2019.04.19
 *                                        MODIFY --
 * ----------------------------------------------------------
 */
#ifndef TPR_ESRC_GAME_SEED_H_
#define TPR_ESRC_GAME_SEED_H_

//-------------------- Engine --------------------//
#include "GameSeed.h"

namespace esrc {//------------------ namespace: esrc -------------------------//

//inline GameSeed  gameSeed {}; //- tmp, 游戏种子，
                            //- 暂设为：只有一个种子，且每次运行都重置

GameSeed &get_gameSeed();



}//---------------------- namespace: esrc -------------------------//
#endif
