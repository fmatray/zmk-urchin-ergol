/**
 * This file includes custom keycodes for the french input language setting.
 * If you only type in english, you can delete this file and it's import.
 * If you wish to replace this file with your preferred language, use
 * the qmk version as reference:
 * https://github.com/qmk/qmk_firmware/tree/master/quantum/keymap_extras
 */

/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ² │ & │ é │ " │ ' │ ( │ § │ è │ ! │ ç │ à │ ) │ - │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ A │ Z │ E │ R │ T │ Y │ U │ I │ O │ P │ ^ │ $ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ Q │ S │ D │ F │ G │ H │ J │ K │ L │ M │ ù │ ` │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ < │ W │ X │ C │ V │ B │ N │ , │ ; │ : │ = │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define FR_AT   (GRAVE)  // @
#define FR_AMPR (N1)     // &
#define FR_EACU (N2)     // é
#define FR_DQUO (N3)     // "
#define FR_QUOT (N4)     // '
#define FR_LPRN (N5)     // (
#define FR_SECT (N6)     // §
#define FR_EGRV (N7)     // è
#define FR_EXLM (N8)     // !
#define FR_CCED (N9)     // ç
#define FR_AGRV (N0)     // à
#define FR_RPRN (MINUS)  // )
#define FR_MINS (EQUAL)  // -

// Row 2
#define FR_A    (Q)     // A
#define FR_Z    (W)     // Z
#define FR_E    (E)     // E
#define FR_R    (R)     // R
#define FR_T    (T)     // T
#define FR_Y    (Y)     // Y
#define FR_U    (U)     // U
#define FR_I    (I)     // I
#define FR_O    (O)     // O
#define FR_P    (P)     // P
#define FR_CIRC (LBKT)  // ^ (dead)
#define FR_DLR  (RBKT)  // $

// Row 3
#define FR_Q    (A)     // Q
#define FR_S    (S)     // S
#define FR_D    (D)     // D
#define FR_F    (F)     // F
#define FR_G    (G)     // G
#define FR_H    (H)     // H
#define FR_J    (J)     // J
#define FR_K    (K)     // K
#define FR_L    (L)     // L
#define FR_M    (SEMI)  // M
#define FR_UGRV (APOS)  // ù
#define FR_GRV  (BSLH)  // `

// Row 4
#define FR_LABK (NON_US_BSLH)  // <
#define FR_W    (Z)            // W
#define FR_X    (X)            // X
#define FR_C    (C)            // C
#define FR_V    (V)            // V
#define FR_B    (B)            // B
#define FR_N    (N)            // N
#define FR_COMM (M)            // ,
#define FR_SCLN (COMMA)        // ;
#define FR_COLN (DOT)          // :
#define FR_EQL  (SLASH)        // =

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ # │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ ° │ _ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │ ¨ │ * │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │ % │ £ │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ > │   │   │   │   │   │   │ ? │ . │ / │ § │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define FR_HASH LS(FR_AT)    // #
#define FR_1    LS(FR_AMPR)  // 1
#define FR_2    LS(FR_EACU)  // 2
#define FR_3    LS(FR_DQUO)  // 3
#define FR_4    LS(FR_QUOT)  // 4
#define FR_5    LS(FR_LPRN)  // 5
#define FR_6    LS(FR_MINS)  // 6
#define FR_7    LS(FR_EGRV)  // 7
#define FR_8    LS(FR_UNDS)  // 8
#define FR_9    LS(FR_CCED)  // 9
#define FR_0    LS(FR_AGRV)  // 0
#define FR_DEG  LS(FR_RPRN)  // °
#define FR_UNDS LS(FR_MINS)  // _

// Row 2
#define FR_DIAE LS(FR_CIRC)  // ¨ (dead)
#define FR_ASTR LS(FR_DLR)   // *

// Row 3
#define FR_PERC LS(FR_UGRV)  // %
#define FR_PND  LS(FR_GRV)   // µ

// Row 4
#define FR_RABK LS(FR_LABK)  // >
#define FR_QUES LS(FR_COMM)  // ?
#define FR_DOT  LS(FR_SCLN)  // .
#define FR_SLSH LS(FR_COLN)  // /
#define FR_PLUS LS(FR_EQL)   // +

/* AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ • │  │ ë │ “ │ ‘ │ { │ ¶ │ « │ ¡ │ Ç │ ø │ } │ — │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ æ │   │ ê │ ® │ † │ Ú │ º │ î │ œ │ π │ ô │ € │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ ‡ │ Ò │ ∂ │ ƒ │ ﬁ │ Ì │ Ï │ È │ ¬ │ µ │ Ù │ @ │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ ≤ │ ‹ │ ≈ │ © │ ◊ │ ß │ ~ │ ∞ │ … │ ÷ │ ≠ │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define FR_BULT RA(FR_AT)    // •
#define FR_APPL RA(FR_AMPR)  //  (Apple logo)
#define FR_LEDI RA(FR_LEAC)  // ë
#define FR_LDQU RA(FR_DQUO)  // “
#define FR_LSQU RA(FR_QUOT)  // ‘
#define FR_LCBR RA(FR_LPRN)  // {
#define FR_PILC RA(FR_SECT)  // ¶
#define FR_LDAQ RA(FR_LEGR)  // «
#define FR_IEXL RA(FR_EXLM)  // ¡
#define FR_CCCE RA(FR_LCCE)  // Ç
#define FR_OSTR RA(FR_LAGR)  // Ø
#define FR_RCBR RA(FR_RPRN)  // }
#define FR_MDSH RA(FR_MINS)  // —

// Row 2
#define FR_AE   RA(FR_A)     // æ
#define FR_CACI RA(FR_Z)     // Â
#define FR_ECIR RA(FR_E)     // Ê
#define FR_REGD RA(FR_R)     // ®
#define FR_DAGG RA(FR_T)     // †
#define FR_CUAC RA(FR_Y)     // Ú
#define FR_MORD RA(FR_U)     // º
#define FR_LICI RA(FR_I)     // î
#define FR_OE   RA(FR_O)     // œ
#define FR_PI   RA(FR_P)     // π
#define FR_OCIR RA(FR_CIRC)  // Ô
#define FR_EURO RA(FR_DLR)   // €

// Row 3
#define FR_DDAG RA(FR_Q)     // ‡
#define FR_COGR RA(FR_S)     // Ò
#define FR_PDIF RA(FR_D)     // ∂
#define FR_FHK  RA(FR_F)     // ƒ
#define FR_FI   RA(FR_G)     // ﬁ
#define FR_CIGR RA(FR_H)     // Ì
#define FR_CIDI RA(FR_J)     // Ï
#define FR_CEGR RA(FR_K)     // È
#define FR_NOT  RA(FR_L)     // ¬
#define FR_MICR RA(FR_M)     // µ
#define FR_CUGR RA(FR_LUGR)  // Ù
#define FR_LTEQ RA(FR_LABK)  // ≤

// Row 4
#define FR_LSAQ RA(FR_W)     // ‹
#define FR_AEQL RA(FR_X)     // ≈
#define FR_COPY RA(FR_C)     // ©
#define FR_LOZN RA(FR_V)     // ◊
#define FR_SS   RA(FR_B)     // ß
#define FR_TILD RA(FR_N)     // ~ (dead)
#define FR_INFN RA(FR_COMM)  // ∞
#define FR_ELLP RA(FR_SCLN)  // …
#define FR_DIV  RA(FR_COLN)  // ÷
#define FR_NEQL RA(FR_EQL)   // ≠

/* Shifted AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ Ÿ │ ´ │ „ │ ” │ ’ │ [ │ å │ » │ Û │ Á │ Ø │ ] │ – │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │ Å │ Ê │ ‚ │ ™ │ Ÿ │ ª │   │ Œ │ ∏ │ Ô │ ¥ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ Ω │ ∑ │ ∆ │ · │ ﬁ │ Ì │ Í │ Ë │ | │ Ó │ ‰ │ # │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ ≥ │ › │ ⁄ │ ¢ │ √ │ ∫ │ ı │ ¿ │ • │ \ │ ± │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */

// Row 1
#define FR_CYDI LS(RA(FR_AT))    // Ÿ
#define FR_ACUT LS(RA(FR_AMPR))  // ´ (dead)
#define FR_DLQU LS(RA(FR_LEAC))  // „
#define FR_LBRC LS(RA(FR_LPRN))  // [
#define FR_LARI LS(RA(FR_SECT))  // å
#define FR_RDAQ LS(RA(FR_LEGR))  // »
#define FR_CUCI LS(RA(FR_EXLM))  // Û
#define FR_CAAC LS(RA(FR_LCCE))  // Á
#define FR_RBRC LS(RA(FR_RPRN))  // ]
#define FR_NDSH LS(RA(FR_MINS))  // –

// Row 2
#define FR_CARI LS(RA(FR_Z))    // Å
#define FR_SLQU LS(RA(FR_R))    // ‚
#define FR_TM   LS(RA(FR_T))    // ™
#define FR_FORD LS(RA(FR_U))    // ª
#define FR_LIDI LS(RA(FR_I))    // ï
#define FR_NARP LS(RA(FR_P))    // ∏
#define FR_YEN  LS(RA(FR_DLR))  // ¥

// Row 3
#define FR_OMEG LS(RA(FR_Q))     // Ω
#define FR_NARS LS(RA(FR_S))     // ∑
#define FR_INCR LS(RA(FR_D))     // ∆
#define FR_MDDT LS(RA(FR_F))     // ·
#define FR_FL   LS(RA(FR_G))     // ﬂ
#define FR_CICI LS(RA(FR_H))     // Î
#define FR_CIAC LS(RA(FR_J))     // Í
#define FR_CEDI LS(RA(FR_K))     // Ë
#define FR_PIPE LS(RA(FR_L))     // |
#define FR_COAC LS(RA(FR_M))     // Ó
#define FR_PERM LS(RA(FR_LUGR))  // ‰

// Row 4
#define FR_GTEQ LS(RA(FR_LABK)) // ≥
#define FR_RSAQ LS(RA(FR_W))    // ›
#define FR_FRSL LS(RA(FR_X))    // ⁄
#define FR_CENT LS(RA(FR_C))    // ¢
#define FR_SQRT LS(RA(FR_V))    // √
#define FR_INTG LS(RA(FR_B))    // ∫
#define FR_DLSI LS(RA(FR_N))    // ı
#define FR_IQUE LS(RA(FR_COMM)) // ¿
#define FR_BSLS LS(RA(FR_COLN)) // (backslash)
#define FR_PLMN LS(RA(FR_EQL))  // ±
