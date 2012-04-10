#ifndef _RRCONFIGS_SECURE_
#define _RRCONFIGS_SECURE_
/**
 * rAthena configuration file (http://rathena.org)
 * For detailed guidance on these check http://rathena.org/wiki/SRC/map/config/
 **/

/**
 * @INFO: This file holds optional security settings
 **/

/**
 * Optional NPC Dialog Timer
 * When enabled all npcs dialog will 'timeout' if user is on idle for longer than the amount of seconds allowed
 * - On 'timeout' the npc dialog window changes it's next/menu to a 'close' button
 * @values
 * - ? : Desired idle time in seconds (e.g. 10)
 * - 0 : Disabled
 **/
#define SECURE_NPCTIMEOUT 0

/**
 * (Secure) Optional NPC Dialog Timer
 * @requirement : SECURE_NPCTIMEOUT must be enabled
 * Minimum Interval Between timeout checks in seconds
 * Default: 1s
 **/
#define SECURE_NPCTIMEOUT_INTERVAL 1


/**
 * End of File
 **/
#endif
