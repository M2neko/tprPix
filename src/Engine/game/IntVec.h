/*
 * ========================= IntVec.h ==========================
 *                          -- tpr --
 *                                        创建 -- 2018.11.28
 *                                        修改 -- 2018.11.28
 * ----------------------------------------------------------
 *    以像素为单位的 vec 向量。
 *    这个 类很可能会被 提炼为一个通用的 "整形向量类"
 * ----------------------------
 */
#ifndef _TPR_PIX_VEC2_H_
#define _TPR_PIX_VEC2_H_

//-------------------- C --------------------//
#include <cassert>


//--- [mem] --//
// 为了方便在 内存态使用，还是应该单独实现：mem/disk 两种数据结构
class IntVec2{
public:
    int  x {0}; 
    int  y {0};

    //---- funcs ----//
    inline void clear_all(){
        x = 0;
        y = 0;
    }

    inline void set( int _x, int _y ){
        x = _x;
        y = _y;
    }

    //--------
    inline IntVec2& operator += ( const IntVec2 &_a ){
        x += _a.x;
        y += _a.y;
        return *this;
    }
    inline IntVec2& operator -= ( const IntVec2 &_a ){
        x -= _a.x;
        y -= _a.y;
        return *this;
    }

};
/* ===========================================================
 *                  operator  ==, !=
 * -----------------------------------------------------------
 */
inline bool operator == ( const IntVec2 &_a, const IntVec2 &_b ){
    return ( (_a.x==_b.x) && (_a.y==_b.y) );
}
inline bool operator != ( const IntVec2 &_a, const IntVec2 &_b ){
    return ( (_a.x!=_b.x) || (_a.y!=_b.y) );
}

/* ===========================================================
 *                   operator <
 * -----------------------------------------------------------
 * -- 通过这个 "<" 运算符重载，IntVec2 类型将支持 set.find() 
 */
inline bool operator < ( const IntVec2 &_a, const IntVec2 &_b ){
    if( _a.x == _b.x ){
        return ( _a.y < _b.y );
    }
    return ( _a.x < _b.x );
}

/* ===========================================================
 *                   operator +, -
 * -----------------------------------------------------------
 */
inline IntVec2 operator + ( const IntVec2 &_a, const IntVec2 &_b ){
    return IntVec2 { _a.x+_b.x, _a.y+_b.y };
}
inline IntVec2 operator - ( const IntVec2 &_a, const IntVec2 &_b ){
    return IntVec2 { _a.x-_b.x, _a.y-_b.y };
}

/* ===========================================================
 *                   operator * 
 * -----------------------------------------------------------
 */
inline IntVec2 operator * ( const IntVec2 &_a, int _m ){
    return IntVec2 { _a.x*_m, _a.y*_m };
}
inline IntVec2 operator * ( int _m, const IntVec2 &_a ){
    return IntVec2 { _a.x*_m, _a.y*_m };
}

/* ===========================================================
 *                   operator /
 * -----------------------------------------------------------
 */
inline IntVec2 operator / ( const IntVec2 &_a, int _div ){
    assert( _div != 0 );
    return IntVec2 { _a.x/_div, _a.y/_div };
}

//-- 常用的 IntVec2 值:
inline const IntVec2 IntVec2_1_1 { 1,1 };



//--- [mem] --//
class IntVec3{
public:
    int  x  {0}; 
    int  y  {0};
    int  z  {0};
};
inline bool is_equal( const IntVec3 &_a, const IntVec3 &_b ){
    return ( ((_a.x==_b.x)&&(_a.y==_b.y)&&(_a.z==_b.z)) );
}




#endif
