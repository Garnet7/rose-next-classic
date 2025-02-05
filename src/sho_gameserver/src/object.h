/**
 * \ingroup SHO_GS
 * \file	Object.h
 * \brief	辑滚俊 积己等 傈眉 按眉 包府
 */
#ifndef __CObject_H
#define __CObject_H
#include "CCharDATA.h"
#include "CObjITEM.h"
#include "CObjEVENT.h"
#include "GS_USER.h"

class CObjMNG: public CSyncIdxARRAY<CGameOBJ*> {
public:
    CObjMNG(int iMaxGameObject);
    ~CObjMNG();

    CGameOBJ* Get_OBJECT(WORD wIndex);
    CObjCHAR* Get_CharOBJ(WORD wIndex, bool bCheckHP);
    CObjITEM* Get_ItemOBJ(WORD wIndex);
    classUSER* Get_UserOBJ(DWORD dwIndex);

    CGameOBJ* Get_GameOBJ(WORD wIndex, t_ObjTAG ObjTYPE);

    CGameOBJ* Get_ClientOBJECT(WORD wIndex) { return Get_OBJECT(wIndex); }
    CObjCHAR* Get_ClientCharOBJ(WORD wIndex, bool bCheckHP) {
        return Get_CharOBJ(wIndex, bCheckHP);
    }
    int Get_ClientObjectIndex(int iServerObject) { return iServerObject; }
};
extern CObjMNG* g_pObjMGR;

#endif
