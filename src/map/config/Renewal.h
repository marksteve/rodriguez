#ifndef _RRCONFIGS_RE_
#define _RRCONFIGS_RE_
/**
 * rAthena configuration file (http://rathena.org)
 * For detailed guidance on these check http://rathena.org/wiki/SRC/map/config/
 **/

/**
 * @INFO: This file holds general-purpose renewal settings, for class-specific ones check /src/map/config/Skills folder
 **/

/**
 * Game Server Mode
 * @values: 1 or 0
 *	1 : renewal support, such as renewal-exclusive formulas
 *    -> Note some features may be enabled/disabled at this file despite this setting being ON
 *  0 : renewal support disabled, use original formulas
 **/
#define REMODE 1

/**
 * Renewal Cast Time
 * @values: 1 (enabled) or 0 (disabled)
 *  1 : Cast Time is decreased by DEX*2+INT, 20% of the cast time is not reduced by stats,
 *  - for example, on a skill whose cast time is 10s, only 8s may be reduced. other 2s are
 *  - part of a "fixed cast time" that is only reduced by special items and skills (such as
 *  - Arch Bishop's Sacrament skill).
 *  0 : the old cast time method, influenced by dex, items and skills.
 **/
#define RECASTING 1

/**
 * Renewal Drop Rate Modifier
 * @values: 1 (enabled) or 0 (disabled)
 * - When enabled a modifier based on difference between the player and the monster level is applied,
 * - based on the http://irowiki.org/wiki/Drop_System#Level_Factor table
 **/
#define RE_DROP_MOD 1

/**
 * Renewal Cast Time : Variable-Free
 * - Value required for no variable cast time with stats.
 * - Formula: (casterDex x 2) + (casterInt)
 * Default: 530
 **/
#define RECASTING_VMIN 530

/**
 * Renewal Enchant Deadly Poison Change
 * - In RE EDP no longer increases final damage by 400%.
 * - it increases your weapon atk and your stat atk
 * - it doesn't affect grimtooth
 **/
#define RE_EDP 1

/**
 * End of File
 **/
#endif
