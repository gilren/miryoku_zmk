#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>
#include <dt-bindings/zmk/keys.h>

/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ $ │ « │ » │ " │ - │ + │ * │ / │ = │ ( │ ) │ @ │ # │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ À │ J │ O │ É │ B │ F │ D │ L │ ' │ Q │ X │ Z │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ A │ I │ E │ U │ , │ P │ T │ S │ R │ N │ ^ │ Ç │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │   │ K │ Y │ È │ . │ W │ G │ C │ M │ H │ V │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define OP_DLR   &kp GRAVE  // $
#define OP_LDAQ  &kp N1     // «
#define OP_RDAQ  &kp N2     // »
#define OP_DQUO  &kp N3     // "
#define OP_HMIN  &kp N4     // -
#define OP_PLUS  &kp N5     // +
#define OP_ASTR  &kp N6     // *
#define OP_SLSH  &kp N7     // /
#define OP_EQL   &kp N8     // =
#define OP_LPRN  &kp N9     // (
#define OP_RPRN  &kp N0     // )
#define OP_AT    &kp MINUS // @
#define OP_HASH  &kp EQUAL // #
// Row 2
#define OP_AGRV  &kp Q     // À
#define OP_J     &kp W     // J
#define OP_O     &kp E     // O
#define OP_EACU  &kp R     // È
#define OP_B     &kp T     // B
#define OP_F     &kp Y     // F
#define OP_D     &kp U     // D
#define OP_L     &kp I     // L
#define OP_QUOT  &kp O     // '
#define OP_Q     &kp P     // Q
#define OP_X     &kp LBKT  // X
#define OP_Z     &kp RBKT  // Z

// Row 3
#define OP_A     &kp A     // A
#define OP_I     &kp S     // I
#define OP_E     &kp D     // E
#define OP_U     &kp F     // U
#define OP_COMM  &kp G     // ,
#define OP_P     &kp H     // P
#define OP_T     &kp J     // T
#define OP_S     &kp K     // S
#define OP_R     &kp L     // R
#define OP_N     &kp SEMI  // N
#define OP_DCIR  &kp SQT  // ^ (dead)
#define OP_CCED  &kp NUHS  // Ç

// Row 4
#define OP_K     &kp Z     // K
#define OP_Y     &kp X     // Y
#define OP_EGRV  &kp C     // È
#define OP_DOT   &kp V     // .
#define OP_W     &kp B     // W
#define OP_G     &kp N     // G
#define OP_C     &kp M     // C
#define OP_M     &kp COMMA  // M
#define OP_H     &kp DOT   // H
#define OP_V     &kp SLASH  // V

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ € │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ _ │ % │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │ ? │   │   │   │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │ ; │   │   │   │   │   │ ! │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │   │   │   │   │ : │   │   │   │   │   │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
#define OP_EURO  LS(OP_DLR)  // €
#define OP_1     LS(OP_LDAQ) // 1
#define OP_2     LS(OP_RDAQ) // 2
#define OP_3     LS(OP_DQUO) // 3
#define OP_4     LS(OP_HMIN) // 4
#define OP_5     LS(OP_PLUS) // 5
#define OP_6     LS(OP_ASTR) // 6
#define OP_7     LS(OP_SLSH) // 7
#define OP_8     LS(OP_EQL)  // 8
#define OP_9     LS(OP_LPRN) // 9
#define OP_0     LS(OP_RPRN) // 0
#define OP_UNDS  LS(OP_AT)   // _
#define OP_PERC  LS(OP_HASH) // %
#define OP_QUES  LS(OP_HASH) // ?
#define OP_SCLN  LS(OP_COMM) // ;
#define OP_EXLM  LS(OP_DCIR) // !
#define OP_COLN  LS(OP_DOT)  // :
#define OP_NBSP  LS(SPACE) //   (non-breaking space)

/* AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ¤ │ “ │ ” │ „ │ ‑ │ ± │ × │ \ │ ≠ │ [ │ ] │ − │ ° │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ < │ > │ œ │ ´ │ — │ ‘ │ { │ } │ ’ │ ˚ │ | │  ̛ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ æ │ ₂ │   │ ù │ – │ ` │ & │ ∞ │ L'│ ∼ │ ¨ │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │   │ ø │ ˙ │ ` │ … │ • │ µ │ ¸ │ ¯ │ ˘ │  ˇ│          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define OP_CURR  RA(OP_DLR)   // ¤
#define OP_LDQU  RA(OP_LDAQ)  // “
#define OP_RDQU  RA(OP_RDAQ)  // ”
#define OP_DLQU  RA(OP_DQUO)  // „
#define OP_MMNS  RA(OP_HMIN)  // ‑
#define OP_PLMN  RA(OP_PLUS)  // ±
#define OP_MUL   RA(OP_ASTR)  // ×
#define OP_BSLS  RA(OP_SLSH)  // (backslash)
#define OP_NEQL  RA(OP_EQL)   // ≠
#define OP_LBRC  RA(OP_LPRN)  // [
#define OP_RBRC  RA(OP_RPRN)  // ]
#define OP_MINS  RA(OP_AT)    // −
#define OP_DEG   RA(OP_HASH)  // °
// Row 2
#define OP_LABK  RA(OP_AGRV)  // <
#define OP_RABK  RA(OP_J)     // >
#define OP_OE    RA(OP_O)     // œ
#define OP_ACUT  RA(OP_EACU)  // ´ (dead)
#define OP_MDSH  RA(OP_B)     // —
#define OP_LSQM  RA(OP_F)     //‘
#define OP_LCBR  RA(OP_D)     // {
#define OP_RCBR  RA(OP_L)     // }
#define OP_RSQM  RA(OP_QUOT)  // ’
#define OP_RNGA  RA(OP_Q)     // ˚ (dead)
#define OP_PIPE  RA(OP_X)     // |
#define OP_LIG1  RA(OP_CCED)  // ̉ (dead)
// Row 3
#define OP_AE    RA(OP_A)     // æ
#define OP_SUB2  RA(OP_I)     // ₂
#define OP_SUP2  RA(OP_E)     // superscript two
#define OP_UGRV  RA(OP_U)     // ù
#define OP_EDSH  RA(OP_COMM)  // –
#define OP_GRV   RA(OP_P)     // `
#define OP_AMPR  RA(OP_T)     // &
#define OP_INFT  RA(OP_S)     // ∞
#define OP_LLWC  RA(OP_R)     // L'
#define OP_DTIL  RA(OP_N)     // ~ (dead)
#define OP_DIAE  RA(OP_DCIR)  // ¨ (dead)
#define OP_RWAR  RA(OP_Z)     // Rightwards arrow
// Row 4
#define OP_LOWS  RA(OP_K)     // ø
#define OP_DOTA  RA(OP_Y)     // ˙ (dead)
#define OP_DGRV  RA(OP_EGRV)  // ` (dead)
#define OP_ELLP  RA(OP_DOT)   // …
#define OP_BULT  RA(OP_W)     // •
#define OP_DGRK  RA(OP_G)     // µ (dead Greek key)
#define OP_CEDL  RA(OP_C)     // ¸ (dead)
#define OP_MACR  RA(OP_M)     //  ̄ (dead)
#define OP_BREV  RA(OP_H)     //  ̆ (dead)
#define OP_CARN  RA(OP_V)     // ˇ (dead)

/* Shift+AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ © │ ¼ │ ½ │ ¾ │ ⅓ │ ⅔ │ ✻ │ ÷ │ ≈ │ ′ │ ″ │ ª │ º │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ ⩽ │ ⩾ │ Œ │ ❏ │ ❖ │ ✦ │ † │ ‡ │ ¿ │ ⸮ │ ® │  │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ Æ │ § │ ¶ │ Ù │ ✓ │ ★ │ ⬅ │ ⬇ │ ⬆ │ ➡ │ ¡ │ ™ │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │   │ ⎈ │ ⌥ │ ⌘ │ · │ ✗ │ ✣ │ ♠ │ ♥ │ ♦ │ ♣ │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define OP_COPY  LS(RA(OP_DLR))   // ©
#define OP_QRTR  LS(RA(OP_LDAQ))  // ¼
#define OP_HALF  LS(RA(OP_RDAQ))  // ½
#define OP_TQTR  LS(RA(OP_DQUO))  // ¾
#define OP_OTHD  LS(RA(OP_MINS))  // ⅓
#define OP_TTHD  LS(RA(OP_PLUS))  // ⅔
#define OP_TDSA  LS(RA(OP_ASTR))  // ✻ Teardrop-spoked asterisk
#define OP_DIV   LS(RA(OP_SLSH))  // ÷
#define OP_AEQT  LS(RA(OP_EQL))   // ≈
#define OP_PRIM  LS(RA(OP_LPRN))  // ′
#define OP_DPRM  LS(RA(OP_RPRN))  // ″
#define OP_FOIN  LS(RA(OP_AT))    // ª Feminine ordinal indicator
#define OP_MOIN  LS(RA(OP_HASH))  // º Masculine ordinal indicator
// Row 2
#define OP_LEQL  LS(RA(OP_AGRV))  // ⩽
#define OP_GEQL  LS(RA(OP_J))     // ⩾
#define OP_LRDWS LS(RA(OP_EACU))  // ❏ Lower right drop-shadowed white square
#define OP_BDMW  LS(RA(OP_B))     // ❖ Black diamond minus white x
#define OP_BFPS  LS(RA(OP_F))     // ✦ Black four pointed star
#define OP_DAGG  LS(RA(OP_D))     // †
#define OP_DDAG  LS(RA(OP_L))     // ‡
#define OP_IQUE  LS(RA(OP_QUOT))  // ¿
#define OP_RQUS  LS(RA(OP_Q))     // ⸮
#define OP_REGD  LS(RA(OP_X))     // ®
#define OP_HORN  LS(RA(OP_CCED))  // horne (dead)
// Row 3
#define OP_SECT  LS(RA(OP_I))     // §
#define OP_PARA  LS(RA(OP_E))     // ¶
#define OP_CMRK  LS(RA(OP_COMM))  // ✓
#define OP_BSTR  LS(RA(OP_P))     // ★
#define OP_LBAW  LS(RA(OP_T))     // ⬅
#define OP_DBAW  LS(RA(OP_S))     // ⬇
#define OP_UBAW  LS(RA(OP_R))     // ⬆
#define OP_RBAW  LS(RA(OP_N))     // ➡
#define OP_IEXL  LS(RA(OP_DCIR))  // ¡
#define OP_TM    LS(RA(OP_Z))     // ™
// Row 4
#define OP_HELM  LS(RA(OP_K))     // ⎈
#define OP_OPTN  LS(RA(OP_Y))     // ⌥
#define OP_POI   LS(RA(OP_EGRV))  // ⌘ Place of interest sign
#define OP_MDOT  LS(RA(OP_DOT))   // · Middle dot
#define OP_BLTX  LS(RA(OP_W))     // ✗
#define OP_FBSA  LS(RA(OP_G))     // ✣ Four balloon-spoked asterisk
#define OP_BSS   LS(RA(OP_C))     // ♠
#define OP_BHS   LS(RA(OP_M))     // ♥
#define OP_BDS   LS(RA(OP_H))     // ♦
#define OP_BCS   LS(RA(OP_V))     // ♣