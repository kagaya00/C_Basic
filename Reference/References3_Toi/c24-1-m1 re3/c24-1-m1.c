/*
 * c24-1-m1.c
 *
 *  Created on: May 3, 2017
 *      Author: kagaya
 */



#include "c24-1-m1.h"
 /* プロトタイプ宣言 ----------------------------------------------------- */
int *Getmaxaddress(const int *p, int size);
void Sortdesc(int *p, int size);



 /* ---------------------------------------------------------------------- */
/* 関数名:Sortdesc */
/* 機 能:int 型配列を降順にソートする */
/* 戻り値:なし */
/* 引 数:int *p :配列の先頭番地 */
/* int size:配列の要素数 */
/* ---------------------------------------------------------------------- */
void Sortdesc(int *p, int size) {
int i, work, *max;
//配列を降順にソート
for ( i = 0 ; i < size - 1 ; i++, p++ ) {
max = Getmaxaddress(p, size - i); //未整列の要素の中から
//最大値(アドレス)を取得
work = *max; //┐
*max = *p; //│入れ替え処理
*p = work; //┘
}
}




/* ---------------------------------------------------------------------- */
/* 関数名:Getmaxaddress */
/* 機 能:int 型配列中の最大値が格納されているアドレスを取得 */
/* 戻り値:最大値の格納されているアドレス(int 型ポインタ) */
/* 引 数:const int *p :配列の先頭番地 */
/* int size :配列の要素数 */
/* ---------------------------------------------------------------------- */
int *Getmaxaddress(const int *p, int size) {
const int *max;
int i;
max = p; //仮の最大値が格納されているアドレス
//最大値(アドレス)の検索

for ( i = 1 ; i < size ; i++ ) {
if ( *(p + i) > *max ) { //仮の最大値との比較
max = (p + i); //仮の最大値(アドレス)の更新
} }
return (int *)max;
}

