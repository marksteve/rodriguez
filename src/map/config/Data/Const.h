#ifndef _RRCONFIGS_CONST_
#define _RRCONFIGS_CONST_
/**
 * rAthena configuration file (http://rathena.org)
 * For detailed guidance on these check http://rathena.org/wiki/SRC/map/config/
 **/

/**
 * @INFO: This file holds constants that aims at making code smoother and more efficient
 */

/**
 * "Constants"
 **/
#if RECASTING

	#if REMODE == 0
		#error RECASTING requires REMODE enabled
	#endif

	#define CONST_CASTRATE_SCALE RECASTING_VMIN
	/**
	 * Cast Rate Formula: (DEX x 2)+INT
	 **/
	#define CONST_CASTRATE_CALC ((status_get_dex(bl)*2)+status_get_int(bl))
#else
	#define CONST_CASTRATE_SCALE battle_config.castrate_dex_scale
	/**
	 * Cast Rate Formula: (DEX)
	 **/
	#define CONST_CASTRATE_CALC (status_get_dex(bl))
#endif

#define isOFF(def) (def == 0)

/**
 * "Sane Checks" to save you from compiling with cool bugs 
 **/
#if SECURE_NPCTIMEOUT_INTERVAL <= 0
	#error SECURE_NPCTIMEOUT_INTERVAL should be at least 1 (1s)
#endif
#if SECURE_NPCTIMEOUT < 0
	#error SECURE_NPCTIMEOUT cannot be lower than 0
#endif

/**
 * Path within the /db folder to (non-)renewal specific db files
 **/
#if REMODE
	#define DBPATH "re/"
#else
	#define DBPATH "pre-re/"
#endif

/**
 * DefType
 **/
#if REMODE
	typedef short defType;
	#define DEFTYPE_MIN SHRT_MIN
	#define DEFTYPE_MAX SHRT_MAX
#else
	typedef signed char defType;
	#define DEFTYPE_MIN CHAR_MIN
	#define DEFTYPE_MAX CHAR_MAX
#endif

/**
 * End of File
 **/
#endif
