#ifndef __MAGIC_BASE_H__
#define __MAGIC_BASE_H__

#include "util.h"

typedef enum
{
	MAGIC_FIELD_ALL,			/* すべての場所で使える */
	MAGIC_FIELD_BATTLE,				/* 戦闘中のみ */
	MAGIC_FIELD_MAP,				/* 通常マップ上のみ */

}MAGIC_FIELDTYPE;

typedef enum
{
	MAGIC_TARGET_MYSELF,		/* 自分のみ */
	MAGIC_TARGET_OTHER,			/* 他の人（自分含む) */
	MAGIC_TARGET_ALLMYSIDE,		/* 味方全体 */
	MAGIC_TARGET_ALLOTHERSIDE,	/* 相手側全体 */
	MAGIC_TARGET_ALL,			/* 全て */
	MAGIC_TARGET_NONE,			/* 誰も選択出来ない。防御やための時 */
	MAGIC_TARGET_OTHERWITHOUTMYSELF,/* 他の人（自分含まない) */
	MAGIC_TARGET_WITHOUTMYSELFANDPET,  /* 自分とペット以外 */
	MAGIC_TARGET_WHOLEOTHERSIDE,/* 片方のサイド全体 */

#ifdef __ATTACK_MAGIC

        MAGIC_TARGET_SINGLE,            // �w刻篠よ�根Y�@�H
        MAGIC_TARGET_ONE_ROW,           // �w刻篠よ�根Y�@�C
        MAGIC_TARGET_ALL_ROWS,          // �w刻篠よ�懇勁海H

#endif
}MAGIC_TARGETTYPE;

typedef enum
{
	MAGIC_ID,					/* 管理番号 */
	MAGIC_FIELD,				/* 使える場所 */
	MAGIC_TARGET,				/* 対象 */
	MAGIC_TARGET_DEADFLG,		/* 死んだ者も対象に含めるか */
#ifdef __ATTACK_MAGIC
  MAGIC_IDX ,
#endif
	MAGIC_DATAINTNUM,
}MAGIC_DATAINT;

typedef enum
{
	MAGIC_NAME,					/* 呪術名 */
	MAGIC_COMMENT,				/* コメント*/
	MAGIC_FUNCNAME,				/* 関数名 */
	MAGIC_OPTION,				/* オプション */
	MAGIC_DATACHARNUM,
}MAGIC_DATACHAR;

typedef struct tagMagic
{
	int			data[MAGIC_DATAINTNUM];
	STRING64	string[MAGIC_DATACHARNUM];

}Magic;

#ifdef __ATTACK_MAGIC

typedef struct tagAttMagic
{
  unsigned int  uiSpriteNum;// �工G�N�bSpr_x.bin�砂s弦
  unsigned int  uiAttackType;// ю聖�困荀　G恰�H�A障影( 除�y ) ,  障影( 除�y ) , 障影( �P�� ) , ��悼( 除�y ) , ��悼( �P�� )
  unsigned int  uiSliceTime;// 除�yю聖�肘混俵｀t
  unsigned int  uiShowType;             // 塔ボ�墾豸mよΑ�Gいァ�B���w
  int           siSx;                   // 塔ボ�墾豸m - X�b
  int           siSy;                   // 塔ボ�墾豸m - Y�b
  unsigned int  uiShowBehindChar;       // 塔ボ�b�H���昆eよ�里Uよ
  unsigned int  uiShakeScreen;          // �O�_�_以�e��
  unsigned int  uiShakeFrom;            // �_以�e�迂紺_�l�俵�( �@�� )
  unsigned int  uiShakeTo;              // �_以�e�迂叉翁��俵�( �@�� _
  unsigned int  uiPrevMagicNum;         // �e�m�G�N�痕舛涕�( 0XFFFFFFFFFF �蹈楜L�e�m�G�N )
  int           siPrevMagicSx;          // �e�m�G�N�催礇椄豸m - X�b
  int           siPrevMagicSy;          // �e�m�G�N�催礇椄豸m - Y�b
  int           siPrevMagicOnChar;      // �e�m�G�N塔ボ�b�H���昆eよ�里Uよ
  unsigned int  uiPostMagicNum;         // �畍m�G�N�痕舛涕�( 0XFFFFFFFF �蹈楜L�畍m�G�N )
  int           siPostMagicSx;          // �畍m�G�N�催礇椄豸m - X�b
  int           siPostMagicSy;          // �畍m�G�N�催礇椄豸m - Y�b
  int           siPostMagicOnChar;      // �畍m�G�N塔ボ�b�H���昆eよ�里Uよ
  int           siField[3][5];          // ю聖�舛�
}AttMagic;

#endif

#ifdef _MAGIC_TOCALL

typedef struct tagToCallMagic
{
  unsigned int  uiSpriteNum;// �工G�N�bSpr_x.bin�砂s弦
  unsigned int  uiAttackType;// ю聖�困荀　G恰�H�A障影( 除�y ) ,  障影( 除�y ) , 障影( �P�� ) , ��悼( 除�y ) , ��悼( �P�� )
  unsigned int  uiSliceTime;// 除�yю聖�肘混俵｀t
  unsigned int  uiShowType;             // 塔ボ�墾豸mよΑ�Gいァ�B���w
  int           siSx;                   // 塔ボ�墾豸m - X�b
  int           siSy;                   // 塔ボ�墾豸m - Y�b
  unsigned int  uiShowBehindChar;       // 塔ボ�b�H���昆eよ�里Uよ
  unsigned int  uiShakeScreen;          // �O�_�_以�e��
  unsigned int  uiShakeFrom;            // �_以�e�迂紺_�l�俵�( �@�� )
  unsigned int  uiShakeTo;              // �_以�e�迂叉翁��俵�( �@�� _
  unsigned int  uiPrevMagicNum;         // �e�m�G�N�痕舛涕�( 0XFFFFFFFFFF �蹈楜L�e�m�G�N )
  int           siPrevMagicSx;          // �e�m�G�N�催礇椄豸m - X�b
  int           siPrevMagicSy;          // �e�m�G�N�催礇椄豸m - Y�b
  int           siPrevMagicOnChar;      // �e�m�G�N塔ボ�b�H���昆eよ�里Uよ
  unsigned int  uiPostMagicNum;         // �畍m�G�N�痕舛涕�( 0XFFFFFFFF �蹈楜L�畍m�G�N )
  int           siPostMagicSx;          // �畍m�G�N�催礇椄豸m - X�b
  int           siPostMagicSy;          // �畍m�G�N�催礇椄豸m - Y�b
  int           siPostMagicOnChar;      // �畍m�G�N塔ボ�b�H���昆eよ�里Uよ
  int			isPostDisappear;		// �G�N�@�襷霎薩庚必O�_姶�W��ア
  int			ToCallMagicNo;			// �l滑�N�砂s弦
}ToCallMagic;

#endif

typedef int (*MAGIC_CALLFUNC)( int, int, int, int );

INLINE BOOL MAGIC_CHECKINDEX( int index );
INLINE int MAGIC_getInt( int index, MAGIC_DATAINT element);
INLINE int MAGIC_setInt( int index, MAGIC_DATAINT element, int data);
INLINE char* MAGIC_getChar( int index, MAGIC_DATACHAR element);
INLINE BOOL MAGIC_setChar( int index ,MAGIC_DATACHAR element, char* new );
int MAGIC_getMagicNum( void);
BOOL MAGIC_initMagic( char *filename);
BOOL MAGIC_reinitMagic( void );

#ifdef __ATTACK_MAGIC

BOOL ATTMAGIC_initMagic( char *filename );
BOOL ATTMAGIC_reinitMagic( void );

#endif

int MAGIC_getMagicArray( int magicid);
MAGIC_CALLFUNC MAGIC_getMagicFuncPointer(char* name);
// Nuke +1 08/23 : For checking the validity of magic target
int MAGIC_isTargetValid( int magicid, int toindex);

#endif

