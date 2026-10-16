/* Auto-decompiled pseudo-code from game.exe / ui_command_dispatch */
/* NOT original source. Dedicated hard-function recovery (see hard_functions/). */

/* ==== 0068eb20  ui_command_dispatch  size=20428 ==== */
/* Recovered from dedicated Ghidra headless run (DecompileOptions timeout 3600s,
 * max payload 1024MB, JVM 6G; project work_ghidra/projects/hard_proj).
 * Simplification style=decompile; wall time ~545s.
 * Dispatches integer UI command / widget-type IDs (not network packets or sounds).
 * Signature: ui_command_dispatch(command_id, ui_ctx); ui_ctx often focused widget. */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void ui_command_dispatch(int command_id, int ui_ctx)

{
  void **ppvVar1;
  char cVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  undefined *puVar13;
  int iVar14;
  function<void___cdecl(void)> **ppfVar15;
  undefined1 auStack_2be0 [20];
  undefined4 uStack_2bcc;
  undefined *puStack_2bc8;
  undefined1 auStack_2bc4 [4];
  undefined4 uStack_2bc0;
  undefined1 *puStack_2bbc;
  undefined *puStack_2bb8;
  undefined4 *puStack_2bb4;
  function<void___cdecl(void)> *apfStack_2bb0 [2];
  char *pcStack_2ba8;
  char *pcStack_2ba4;
  function<void___cdecl(void)> *pfStack_2ba0;
  function<void___cdecl(void)> *pfStack_2b9c;
  undefined4 *puStack_2b98;
  char acStack_2b78 [8];
  function<void___cdecl(void)> afStack_2b70 [8];
  undefined1 auStack_2b68 [64];
  char acStack_2b28 [8];
  function<void___cdecl(void)> afStack_2b20 [8];
  undefined1 auStack_2b18 [16];
  char acStack_2b08 [8];
  function<void___cdecl(void)> afStack_2b00 [8];
  undefined1 auStack_2af8 [28];
  undefined1 *puStack_2adc;
  undefined1 *local_2ad8;
  undefined4 local_2ad4;
  function<void___cdecl(void)> **local_2ad0;
  undefined1 *local_2acc;
  undefined1 *local_2aa4;
  undefined1 *local_2aa0;
  undefined1 *local_2a9c;
  undefined1 *local_2a98;
  undefined4 local_2a94;
  function<void___cdecl(void)> **local_2a90;
  char **local_2a8c;
  undefined4 local_2a88;
  function<void___cdecl(void)> **local_2a84;
  char **local_2a80;
  undefined1 *local_2a70;
  undefined4 local_2a6c;
  undefined1 *local_2a68;
  undefined4 local_2a64;
  undefined1 *local_2a60;
  undefined4 local_2a5c;
  undefined1 *local_2a58;
  undefined4 local_2a54;
  undefined1 *local_2a50;
  undefined4 local_2a4c;
  undefined1 *local_2a48;
  undefined4 local_2a44;
  undefined1 *local_2a40;
  undefined4 local_2a3c;
  undefined1 *local_2a38;
  undefined4 local_2a34;
  undefined1 *local_2a30;
  undefined1 *local_2a20;
  undefined4 local_2a1c;
  undefined1 *local_2a18;
  undefined4 local_2a14;
  undefined1 *local_2a10;
  undefined4 local_2a0c;
  undefined1 *local_2a08;
  undefined4 local_2a04;
  undefined1 *local_2a00;
  undefined4 local_29fc;
  undefined1 *local_29f8;
  undefined4 local_29f4;
  undefined1 *local_29f0;
  undefined4 local_29ec;
  undefined1 *local_29e8;
  undefined4 local_29e4;
  undefined1 *local_29e0;
  undefined1 *local_29d0;
  undefined4 local_29cc;
  undefined1 *local_29c8;
  undefined4 local_29c4;
  undefined1 *local_29c0;
  undefined4 local_29bc;
  undefined1 *local_29b8;
  undefined4 local_29b4;
  undefined1 *local_29b0;
  undefined4 local_29ac;
  undefined1 *local_29a8;
  undefined4 local_29a4;
  undefined1 *local_29a0;
  undefined4 local_299c;
  undefined1 *local_2998;
  undefined4 local_2994;
  undefined1 *local_2990;
  undefined1 *local_2980;
  undefined4 local_297c;
  undefined1 *local_2978;
  undefined4 local_2974;
  undefined1 *local_2970;
  undefined4 local_296c;
  undefined1 *local_2968;
  undefined4 local_2964;
  undefined1 *local_2960;
  undefined4 local_295c;
  undefined1 *local_2958;
  undefined4 local_2954;
  undefined1 *local_2950;
  undefined4 local_294c;
  undefined1 *local_2948;
  undefined4 local_2944;
  undefined1 *local_2940;
  undefined1 *local_293c;
  undefined1 local_2938 [16];
  undefined1 *local_2928;
  undefined1 *local_2924;
  undefined1 *local_2920;
  undefined1 *local_291c;
  undefined1 *local_2918;
  undefined1 *local_2914;
  undefined1 *local_2910;
  undefined1 *local_290c;
  undefined1 *local_2908;
  function<void___cdecl(void)> **local_2904;
  undefined4 local_2900;
  undefined1 *local_28fc;
  undefined1 *local_28f8;
  undefined1 *puStack_28f4;
  undefined4 local_28f0;
  undefined1 *puStack_28ec;
  undefined1 *puStack_28e8;
  undefined1 *puStack_28e4;
  undefined4 uStack_28e0;
  undefined4 uStack_28dc;
  undefined1 *puStack_28d8;
  undefined1 *puStack_28d4;
  undefined1 *puStack_28d0;
  undefined4 uStack_28cc;
  undefined1 *puStack_28c8;
  undefined4 uStack_28c4;
  undefined1 *puStack_28c0;
  undefined4 uStack_28bc;
  undefined1 *puStack_28b8;
  undefined4 uStack_28b4;
  undefined1 *puStack_28b0;
  undefined1 *puStack_28ac;
  undefined1 *puStack_28a8;
  undefined1 *puStack_28a4;
  undefined4 uStack_28a0;
  undefined4 uStack_289c;
  undefined1 *puStack_2898;
  undefined4 uStack_2894;
  undefined1 *puStack_2890;
  undefined1 *puStack_288c;
  undefined4 uStack_2888;
  undefined1 *puStack_2884;
  undefined1 *puStack_2880;
  undefined1 *puStack_287c;
  undefined1 *puStack_2878;
  undefined1 *puStack_2874;
  undefined1 *puStack_2870;
  undefined1 *puStack_286c;
  undefined4 uStack_2868;
  undefined1 *puStack_2864;
  undefined4 uStack_2860;
  undefined1 *puStack_285c;
  undefined4 uStack_2858;
  undefined1 *puStack_2854;
  undefined4 uStack_2850;
  undefined1 *puStack_284c;
  undefined4 uStack_2848;
  undefined1 *puStack_2844;
  undefined1 *puStack_2838;
  undefined4 uStack_282c;
  undefined4 uStack_2828;
  undefined1 *puStack_2824;
  undefined4 uStack_2820;
  undefined1 *puStack_281c;
  undefined4 uStack_2818;
  undefined1 *puStack_2814;
  undefined4 uStack_2810;
  undefined1 *puStack_280c;
  undefined4 uStack_2808;
  undefined4 uStack_2804;
  undefined1 *puStack_2800;
  undefined1 *puStack_27fc;
  undefined4 uStack_27f8;
  undefined1 *puStack_27f4;
  undefined4 uStack_27f0;
  undefined1 *puStack_27ec;
  undefined1 *puStack_27e8;
  undefined4 uStack_27e4;
  undefined1 *puStack_27e0;
  undefined4 uStack_27dc;
  undefined1 *puStack_27d8;
  undefined4 uStack_27d4;
  undefined1 *puStack_27d0;
  undefined4 uStack_27cc;
  undefined1 *puStack_27c8;
  undefined4 uStack_27c4;
  undefined1 *puStack_27c0;
  undefined4 uStack_27bc;
  undefined1 *puStack_27b8;
  undefined1 *puStack_27b4;
  undefined4 uStack_27b0;
  undefined1 *puStack_27ac;
  undefined4 uStack_27a8;
  undefined1 *puStack_27a4;
  undefined1 *puStack_27a0;
  undefined1 *puStack_279c;
  undefined1 *puStack_2798;
  undefined1 *puStack_2794;
  undefined1 *puStack_2790;
  undefined1 *puStack_278c;
  undefined1 *puStack_2788;
  undefined1 *puStack_2784;
  undefined1 *puStack_2780;
  undefined1 *puStack_277c;
  undefined1 *puStack_2778;
  undefined1 *puStack_2774;
  undefined4 uStack_2770;
  undefined1 *puStack_276c;
  undefined4 uStack_2768;
  undefined1 *puStack_2764;
  undefined4 uStack_2760;
  undefined1 *puStack_275c;
  undefined4 uStack_2758;
  undefined1 *puStack_2754;
  undefined1 *puStack_2750;
  undefined1 *puStack_274c;
  int iStack_2740;
  undefined1 *puStack_273c;
  undefined1 *puStack_2738;
  undefined1 *puStack_2734;
  undefined1 *puStack_2730;
  undefined1 *puStack_272c;
  undefined1 *puStack_2728;
  undefined4 uStack_271c;
  undefined1 *puStack_2718;
  undefined1 *puStack_270c;
  undefined1 *puStack_2700;
  undefined4 uStack_26fc;
  undefined1 *puStack_26f8;
  undefined4 uStack_26f4;
  function<void___cdecl(void)> **ppfStack_26f0;
  undefined1 *puStack_26ec;
  undefined4 uStack_26e8;
  undefined1 *puStack_26e4;
  undefined4 uStack_26e0;
  function<void___cdecl(void)> **ppfStack_26dc;
  undefined1 *puStack_26d8;
  undefined4 uStack_26d4;
  undefined1 *puStack_26d0;
  undefined4 uStack_26cc;
  function<void___cdecl(void)> **ppfStack_26c8;
  undefined1 *puStack_26c4;
  undefined1 *puStack_26c0;
  undefined4 uStack_26a4;
  char *pcStack_26a0;
  undefined1 *puStack_269c;
  undefined1 *puStack_2698;
  undefined1 *puStack_2694;
  undefined4 uStack_2688;
  undefined1 *puStack_2684;
  undefined1 *puStack_2680;
  undefined1 *puStack_267c;
  undefined1 *puStack_2678;
  undefined1 *puStack_2674;
  undefined1 *puStack_2670;
  undefined1 *puStack_266c;
  undefined1 *puStack_2668;
  undefined4 uStack_2664;
  undefined1 *puStack_2660;
  undefined1 *local_265c;
  undefined4 uStack_2658;
  undefined1 *puStack_2654;
  undefined4 uStack_2650;
  function<void___cdecl(void)> **ppfStack_264c;
  undefined1 *local_2640;
  undefined4 local_263c;
  undefined1 *local_2638;
  undefined4 local_2634;
  undefined1 *local_2630;
  undefined1 *local_262c;
  undefined4 local_2628;
  undefined1 auStack_2624 [12];
  char acStack_2618 [12];
  char acStack_260c [12];
  char acStack_2600 [12];
  char acStack_25f4 [12];
  char acStack_25e8 [12];
  undefined4 local_25dc;
  undefined4 local_25d8;
  undefined4 local_25d4;
  undefined4 local_25d0;
  undefined4 local_25cc;
  undefined4 local_25c8;
  undefined4 local_25c4;
  int local_25c0;
  undefined4 local_25bc;
  undefined4 local_25b8;
  undefined4 local_25b4;
  undefined4 local_25b0;
  undefined4 local_25ac;
  undefined4 local_25a8;
  undefined4 local_25a4;
  undefined4 local_25a0;
  undefined4 local_259c;
  undefined4 local_2598;
  undefined4 local_2594;
  undefined4 local_2590;
  undefined4 local_258c;
  undefined4 local_2588;
  undefined4 local_2584;
  undefined4 local_2580;
  int local_257c;
  undefined4 local_2578;
  int local_2574;
  int local_2570;
  int local_256c;
  int local_2568;
  int local_2564;
  int local_2560;
  int local_255c;
  int local_2558;
  int local_2554;
  int local_2550;
  int local_254c;
  int local_2548;
  int local_2544;
  int local_2540;
  int local_253c;
  int local_2538;
  undefined4 local_2534;
  int local_2530;
  int local_252c;
  int local_2528;
  int local_2524;
  int local_2520;
  int local_251c;
  int local_2518;
  int local_2514;
  int local_2510;
  int local_250c;
  int local_2508;
  int local_2504;
  int local_2500;
  int local_24fc;
  int local_24f8;
  int local_24f4;
  undefined4 local_24f0;
  int local_24ec;
  int local_24e8;
  int local_24e4;
  int local_24e0;
  int local_24dc;
  int local_24d8;
  int local_24d4;
  int local_24d0;
  int local_24cc;
  int local_24c8;
  int local_24c4;
  int local_24c0;
  int local_24bc;
  int local_24b8;
  int local_24b4;
  int local_24b0;
  undefined4 local_24ac;
  int local_24a8;
  int local_24a4;
  int local_24a0;
  int local_249c;
  int local_2498;
  int local_2494;
  int local_2490;
  int local_248c;
  int local_2488;
  int local_2484;
  int local_2480;
  int local_247c;
  int local_2478;
  int local_2474;
  int local_2470;
  int local_246c;
  undefined4 local_2468;
  undefined4 local_2464;
  void *local_2460;
  undefined4 local_245c;
  int *local_2458;
  undefined4 local_2454;
  int local_2450;
  int *local_244c;
  undefined4 local_2448;
  int *local_2444;
  undefined4 local_2440;
  int local_243c;
  undefined4 local_2438;
  int *local_2434;
  undefined4 local_2430;
  int *local_242c;
  undefined4 local_2428;
  int *local_2424;
  undefined4 local_2420;
  undefined4 local_241c;
  undefined4 local_2418;
  undefined4 local_2414;
  undefined4 local_2410;
  undefined4 local_240c;
  undefined4 local_2408;
  undefined4 uStack_2404;
  undefined4 uStack_2400;
  undefined4 uStack_23fc;
  undefined4 uStack_23f8;
  undefined4 uStack_23f4;
  int iStack_23f0;
  undefined4 uStack_23ec;
  int iStack_23e8;
  undefined4 uStack_23e4;
  undefined4 uStack_23e0;
  undefined4 uStack_23dc;
  undefined4 uStack_23d8;
  undefined4 uStack_23d4;
  undefined4 uStack_23d0;
  undefined4 uStack_23cc;
  undefined4 uStack_23c8;
  int iStack_23c4;
  CDocObjectServer *pCStack_23c0;
  undefined4 uStack_23bc;
  char acStack_23b8 [4];
  undefined4 uStack_23b4;
  undefined4 uStack_23b0;
  char acStack_23ac [4];
  undefined4 uStack_23a8;
  undefined4 uStack_23a4;
  undefined4 uStack_23a0;
  undefined4 uStack_239c;
  undefined4 uStack_2398;
  undefined4 uStack_2394;
  CDocObjectServer *pCStack_2390;
  undefined4 uStack_238c;
  char acStack_2388 [4];
  undefined4 uStack_2384;
  undefined4 uStack_2380;
  char acStack_237c [4];
  undefined4 uStack_2378;
  undefined4 uStack_2374;
  undefined4 uStack_2370;
  undefined4 uStack_236c;
  undefined4 uStack_2368;
  undefined4 uStack_2364;
  undefined4 uStack_2360;
  undefined4 uStack_235c;
  undefined4 uStack_2358;
  undefined4 uStack_2354;
  undefined4 uStack_2350;
  int iStack_234c;
  undefined4 uStack_2348;
  int iStack_2344;
  int iStack_2340;
  undefined4 uStack_233c;
  int iStack_2338;
  undefined4 uStack_2334;
  undefined4 uStack_2330;
  undefined4 uStack_232c;
  undefined4 uStack_2328;
  undefined4 uStack_2324;
  undefined4 uStack_2320;
  undefined4 uStack_231c;
  undefined4 uStack_2318;
  CDocObjectServer *pCStack_2314;
  undefined4 uStack_2310;
  char acStack_230c [4];
  undefined4 uStack_2308;
  undefined4 uStack_2304;
  char acStack_2300 [4];
  undefined4 uStack_22fc;
  undefined4 uStack_22f8;
  int iStack_22f4;
  undefined4 uStack_22f0;
  int iStack_22ec;
  undefined4 uStack_22e8;
  int iStack_22e4;
  undefined4 uStack_22e0;
  int iStack_22dc;
  undefined4 uStack_22d8;
  undefined4 uStack_22d4;
  undefined4 uStack_22d0;
  int iStack_22cc;
  int *piStack_22c8;
  undefined4 uStack_22c4;
  int *piStack_22c0;
  undefined4 uStack_22bc;
  int iStack_22b8;
  undefined4 uStack_22b4;
  undefined4 uStack_22b0;
  undefined4 uStack_22ac;
  undefined4 uStack_22a8;
  undefined4 uStack_22a4;
  undefined4 uStack_22a0;
  undefined4 uStack_229c;
  undefined4 uStack_2298;
  undefined4 uStack_2294;
  undefined4 uStack_2290;
  undefined4 uStack_228c;
  undefined4 uStack_2288;
  undefined4 uStack_2284;
  undefined4 uStack_2280;
  undefined4 uStack_227c;
  undefined4 uStack_2278;
  undefined4 uStack_2274;
  undefined4 uStack_2270;
  undefined4 uStack_226c;
  undefined4 uStack_2268;
  undefined4 uStack_2264;
  undefined4 uStack_2260;
  undefined4 uStack_225c;
  undefined4 uStack_2258;
  undefined4 uStack_2254;
  undefined4 uStack_2250;
  undefined4 uStack_224c;
  undefined4 uStack_2248;
  int iStack_2244;
  undefined4 uStack_2240;
  int iStack_223c;
  undefined4 uStack_2238;
  int *piStack_2234;
  undefined4 uStack_2230;
  int *piStack_222c;
  undefined4 uStack_2228;
  int iStack_2224;
  undefined4 uStack_2220;
  undefined4 uStack_221c;
  undefined4 uStack_2218;
  int iStack_2214;
  int *piStack_2210;
  undefined4 uStack_220c;
  int *piStack_2208;
  undefined4 uStack_2204;
  int iStack_2200;
  undefined4 uStack_21fc;
  undefined4 uStack_21f8;
  undefined4 uStack_21f4;
  undefined4 uStack_21f0;
  undefined4 uStack_21ec;
  undefined4 uStack_21e8;
  undefined4 uStack_21e4;
  undefined4 uStack_21e0;
  undefined4 uStack_21dc;
  undefined4 uStack_21d8;
  undefined4 uStack_21d4;
  undefined4 uStack_21d0;
  undefined4 uStack_21cc;
  undefined4 uStack_21c8;
  undefined4 uStack_21c4;
  undefined4 uStack_21c0;
  undefined4 uStack_21bc;
  undefined4 uStack_21b8;
  undefined4 uStack_21b4;
  undefined4 uStack_21b0;
  undefined4 uStack_21ac;
  undefined4 uStack_21a8;
  undefined4 uStack_21a4;
  undefined4 uStack_21a0;
  undefined4 uStack_219c;
  undefined4 uStack_2198;
  undefined4 uStack_2194;
  undefined4 uStack_2190;
  int iStack_218c;
  undefined4 uStack_2188;
  int iStack_2184;
  undefined4 uStack_2180;
  int *piStack_217c;
  undefined4 uStack_2178;
  int *piStack_2174;
  undefined4 uStack_2170;
  int iStack_216c;
  undefined4 uStack_2168;
  undefined4 uStack_2164;
  undefined4 uStack_2160;
  undefined4 uStack_215c;
  undefined1 *puStack_2158;
  undefined1 *puStack_2154;
  int *piStack_2150;
  undefined4 uStack_214c;
  int iStack_2148;
  undefined4 uStack_2144;
  int iStack_2140;
  undefined4 uStack_213c;
  undefined4 uStack_2138;
  char acStack_2134 [4];
  int iStack_2130;
  undefined4 uStack_212c;
  undefined4 uStack_2128;
  char acStack_2124 [4];
  undefined1 *puStack_2120;
  undefined1 *puStack_211c;
  int *piStack_2118;
  undefined4 uStack_2114;
  int iStack_2110;
  undefined4 uStack_210c;
  undefined4 uStack_2108;
  undefined4 uStack_2104;
  CDocObjectServer *pCStack_2100;
  undefined4 uStack_20fc;
  char acStack_20f8 [4];
  undefined4 uStack_20f4;
  undefined4 uStack_20f0;
  char acStack_20ec [4];
  undefined4 uStack_20e8;
  int iStack_20e4;
  undefined4 uStack_20e0;
  undefined4 uStack_20dc;
  undefined4 uStack_20d8;
  undefined4 uStack_20d4;
  int iStack_20d0;
  undefined4 uStack_20cc;
  undefined4 uStack_20c8;
  int iStack_20c4;
  undefined4 uStack_20c0;
  undefined4 uStack_20bc;
  int iStack_20b8;
  undefined4 uStack_20b4;
  undefined4 uStack_20b0;
  int iStack_20ac;
  undefined4 uStack_20a8;
  undefined4 uStack_20a4;
  undefined4 uStack_20a0;
  int iStack_209c;
  int iStack_2098;
  undefined4 local_2094;
  undefined4 local_2090;
  undefined4 uStack_208c;
  undefined4 uStack_2088;
  undefined4 uStack_2084;
  undefined4 uStack_2080;
  int iStack_207c;
  int iStack_2078;
  undefined4 uStack_2074;
  undefined4 uStack_2070;
  int iStack_206c;
  int iStack_2068;
  undefined4 uStack_2064;
  int iStack_2060;
  undefined4 uStack_205c;
  undefined4 uStack_2058;
  undefined4 uStack_2054;
  int iStack_2050;
  undefined4 uStack_204c;
  undefined4 uStack_2048;
  int iStack_2044;
  undefined4 uStack_2040;
  undefined4 uStack_203c;
  undefined4 uStack_2038;
  undefined4 uStack_2034;
  undefined4 uStack_2030;
  undefined4 uStack_202c;
  undefined4 local_2028;
  undefined4 local_2024;
  undefined4 uStack_2020;
  undefined4 uStack_201c;
  int *piStack_2018;
  undefined4 uStack_2014;
  int *piStack_2010;
  undefined4 uStack_200c;
  undefined4 uStack_2008;
  undefined4 uStack_2004;
  undefined *puStack_2000;
  int *piStack_1ffc;
  undefined4 uStack_1ff8;
  undefined4 uStack_1ff4;
  undefined4 uStack_1ff0;
  int *piStack_1fec;
  undefined4 uStack_1fe8;
  undefined4 uStack_1fe4;
  undefined4 uStack_1fe0;
  undefined4 uStack_1fdc;
  undefined4 uStack_1fd8;
  undefined4 uStack_1fd4;
  int iStack_1fd0;
  int iStack_1fcc;
  undefined4 uStack_1fc8;
  int iStack_1fc4;
  int iStack_1fc0;
  undefined4 uStack_1fbc;
  int iStack_1fb8;
  undefined4 uStack_1fb4;
  int *piStack_1fb0;
  undefined4 uStack_1fac;
  undefined4 uStack_1fa8;
  undefined4 uStack_1fa4;
  undefined4 uStack_1fa0;
  undefined4 uStack_1f9c;
  undefined4 uStack_1f98;
  int *piStack_1f94;
  undefined4 uStack_1f90;
  undefined4 uStack_1f8c;
  undefined4 uStack_1f88;
  undefined4 uStack_1f84;
  undefined4 uStack_1f80;
  undefined4 uStack_1f7c;
  int *piStack_1f78;
  undefined4 uStack_1f74;
  undefined4 uStack_1f70;
  undefined4 uStack_1f6c;
  undefined4 uStack_1f68;
  undefined4 uStack_1f64;
  undefined4 uStack_1f60;
  undefined4 uStack_1f5c;
  undefined4 uStack_1f58;
  undefined4 uStack_1f54;
  undefined4 uStack_1f50;
  undefined4 uStack_1f4c;
  int *piStack_1f48;
  undefined4 uStack_1f44;
  undefined4 uStack_1f40;
  undefined4 uStack_1f3c;
  undefined4 uStack_1f38;
  undefined4 uStack_1f34;
  undefined4 uStack_1f30;
  int *piStack_1f2c;
  int iStack_1f28;
  int iStack_1f24;
  int iStack_1f20;
  undefined4 uStack_1f1c;
  int iStack_1f18;
  undefined4 uStack_1f14;
  undefined4 uStack_1f10;
  int *piStack_1f0c;
  undefined4 uStack_1f08;
  undefined4 local_1f04;
  undefined4 local_1f00;
  int local_1efc;
  undefined4 local_1ef8;
  undefined4 local_1ef4;
  undefined4 local_1ef0;
  undefined4 local_1eec;
  undefined4 local_1ee8;
  undefined4 local_1ee4;
  int local_1ee0;
  undefined4 local_1edc;
  undefined4 local_1ed8;
  undefined4 local_1ed4;
  undefined4 local_1ed0;
  undefined4 uStack_1ecc;
  undefined4 uStack_1ec8;
  undefined4 uStack_1ec4;
  undefined4 uStack_1ec0;
  undefined4 uStack_1ebc;
  undefined4 uStack_1eb8;
  undefined4 uStack_1eb4;
  undefined4 uStack_1eb0;
  undefined4 uStack_1eac;
  undefined4 uStack_1ea8;
  undefined4 uStack_1ea4;
  undefined4 uStack_1ea0;
  undefined4 uStack_1e9c;
  undefined4 uStack_1e98;
  undefined4 uStack_1e94;
  undefined4 uStack_1e90;
  undefined4 uStack_1e8c;
  undefined4 uStack_1e88;
  undefined4 uStack_1e84;
  undefined4 uStack_1e80;
  undefined4 uStack_1e7c;
  undefined4 uStack_1e78;
  undefined4 uStack_1e74;
  undefined4 uStack_1e70;
  undefined4 uStack_1e6c;
  undefined4 uStack_1e68;
  undefined4 local_1e64;
  undefined4 local_1e60;
  int local_1e5c;
  int local_1e58;
  undefined4 local_1e54;
  undefined4 local_1e50;
  int *local_1e4c;
  int *local_1e48;
  undefined4 local_1e44;
  undefined4 local_1e40;
  undefined4 local_1e3c;
  undefined4 local_1e38;
  undefined4 local_1e34;
  undefined4 local_1e30;
  undefined4 local_1e2c;
  undefined4 local_1e28;
  undefined4 local_1e24;
  undefined4 local_1e20;
  uint local_1e18;
  uint local_1e10;
  undefined4 local_1e0c;
  undefined4 local_1e08;
  undefined4 local_1e04;
  undefined4 local_1e00;
  undefined4 local_1dfc;
  undefined4 local_1df8;
  undefined4 local_1df4;
  undefined4 local_1df0;
  undefined4 local_1dec;
  undefined4 local_1de8;
  undefined4 local_1de4;
  undefined4 local_1de0;
  undefined4 uStack_1ddc;
  undefined4 uStack_1dd8;
  int *piStack_1dd4;
  int *piStack_1dd0;
  int *piStack_1dcc;
  undefined4 uStack_1dc8;
  int *piStack_1dc4;
  undefined4 uStack_1dc0;
  int *piStack_1dbc;
  int *piStack_1db8;
  undefined *puStack_1db4;
  int iStack_1db0;
  undefined4 uStack_1dac;
  int *piStack_1da8;
  undefined4 uStack_1da4;
  undefined4 local_1da0;
  undefined *local_1d9c;
  undefined *local_1d98;
  undefined4 local_1d94;
  int iStack_1d90;
  undefined4 local_1d8c;
  int local_1d88;
  int local_1d84;
  int local_1d80;
  int local_1d7c;
  CachedTransmogrifiedPrimary *local_1d78;
  undefined4 local_1d74;
  undefined4 local_1d70;
  int *piStack_1d6c;
  int iStack_1d68;
  undefined4 uStack_1d64;
  undefined4 uStack_1d60;
  int iStack_1d5c;
  undefined4 local_1d58;
  undefined4 uStack_1d54;
  int local_1d50;
  undefined4 local_1d4c;
  undefined4 local_1d48;
  undefined4 local_1d44;
  int local_1d40;
  int iStack_1d3c;
  undefined4 uStack_1d38;
  undefined4 uStack_1d34;
  int iStack_1d30;
  undefined4 uStack_1d2c;
  undefined4 uStack_1d28;
  undefined4 uStack_1d24;
  undefined4 uStack_1d20;
  int iStack_1d1c;
  int *piStack_1d18;
  undefined1 *puStack_1d14;
  undefined4 uStack_1d10;
  undefined1 *puStack_1d0c;
  int local_1d08;
  int iStack_1d04;
  int iStack_1d00;
  int iStack_1cfc;
  int iStack_1cf8;
  int iStack_1cf4;
  int iStack_1cf0;
  int iStack_1cec;
  undefined4 uStack_1ce8;
  undefined4 uStack_1ce4;
  int iStack_1ce0;
  undefined4 uStack_1cdc;
  int *piStack_1cd8;
  undefined4 uStack_1cd4;
  int iStack_1cd0;
  int *piStack_1ccc;
  undefined4 uStack_1cc8;
  undefined4 uStack_1cc4;
  undefined4 uStack_1cc0;
  undefined4 uStack_1cbc;
  undefined4 uStack_1cb8;
  int iStack_1cb4;
  int *piStack_1cb0;
  undefined4 uStack_1cac;
  undefined4 uStack_1ca8;
  undefined4 uStack_1ca4;
  int *piStack_1ca0;
  int *piStack_1c9c;
  undefined4 uStack_1c98;
  undefined4 local_1c94;
  char *pcStack_1c90;
  int iStack_1c8c;
  int *piStack_1c88;
  int *piStack_1c84;
  int *piStack_1c7c;
  int *piStack_1c78;
  undefined4 uStack_1c74;
  undefined4 uStack_1c70;
  int *piStack_1c6c;
  int *piStack_1c68;
  int *piStack_1c64;
  function<void___cdecl(void)> *pfStack_1c60;
  int iStack_1c5c;
  function<void___cdecl(void)> *pfStack_1c58;
  function<void___cdecl(void)> *pfStack_1c54;
  int iStack_1c50;
  int *local_1c4c;
  int local_1c44;
  int local_1c3c;
  int *local_1c38;
  int *piStack_1c34;
  undefined1 local_1c2d;
  undefined4 local_1c2c;
  undefined4 local_1c28;
  undefined4 local_1c24;
  int *local_1c20;
  int *local_1c1c;
  int *local_1c18;
  int *piStack_1c14;
  int iStack_1c10;
  int iStack_1c0c;
  int *piStack_1c08;
  int *piStack_1c04;
  char *pcStack_1c00;
  size_t sStack_1bfc;
  int *piStack_1bf4;
  int iStack_1bf0;
  int *piStack_1bec;
  int iStack_1be8;
  int *piStack_1be4;
  int *piStack_1be0;
  int *piStack_1bdc;
  int *piStack_1bd8;
  int *piStack_1bd4;
  undefined4 uStack_1bd0;
  int *piStack_1bcc;
  undefined1 *puStack_1bc8;
  int *piStack_1bc4;
  undefined1 *puStack_1bc0;
  int *piStack_1bbc;
  int iStack_1bb8;
  int *piStack_1bb4;
  int *piStack_1bb0;
  int *piStack_1bac;
  int *piStack_1ba8;
  int *piStack_1ba4;
  int *piStack_1ba0;
  undefined4 uStack_1b98;
  undefined4 local_1b94;
  undefined4 local_1b90;
  int *local_1b8c;
  int local_1b88;
  int *local_1b84;
  int *local_1b80;
  int local_1b7c;
  int *local_1b78;
  int local_1b74;
  int *local_1b70;
  int local_1b6c;
  int *local_1b68;
  int *piStack_1b64;
  int *local_1b60;
  int local_1b5c;
  int *local_1b58;
  uint local_1b54;
  uint local_1b50;
  int local_1b4c;
  int local_1b48;
  uint uStack_1b44;
  int iStack_1b40;
  int iStack_1b3c;
  int iStack_1b38;
  int local_1b34;
  int local_1b30;
  int local_1b2c;
  int local_1b28;
  int local_1b24;
  int local_1b20;
  uint local_1b1c;
  int local_1b18;
  uint uStack_1b14;
  uint uStack_1b10;
  undefined4 uStack_1b0c;
  int iStack_1b08;
  undefined4 uStack_1b04;
  int iStack_1b00;
  uint uStack_1afc;
  uint uStack_1af8;
  int iStack_1af4;
  int iStack_1af0;
  int iStack_1aec;
  int local_1ae8;
  undefined4 uStack_1ae4;
  int iStack_1ae0;
  int *piStack_1adc;
  undefined4 uStack_1ad8;
  uint uStack_1acc;
  int iStack_1ac8;
  int local_1ac4;
  int iStack_1ac0;
  int iStack_1abc;
  uint uStack_1ab8;
  uint uStack_1ab4;
  uint uStack_1ab0;
  uint uStack_1aac;
  uint uStack_1aa8;
  undefined4 local_1aa4;
  char cStack_1a9d;
  char local_1a9c;
  char local_1a9b;
  bool local_1a9a;
  bool local_1a99;
  bool local_1a98;
  bool local_1a97;
  char cStack_1a96;
  char cStack_1a95;
  char cStack_1a94;
  char cStack_1a93;
  char cStack_1a92;
  char cStack_1a91;
  uint uStack_1a90;
  uint uStack_1a8c;
  int local_1a88;
  int local_1a84;
  int local_1a80;
  int *local_1a7c;
  int *local_1a78;
  int local_1a74;
  undefined4 uStack_1a70;
  uint uStack_1a6c;
  int iStack_1a68;
  int local_1a64;
  int iStack_1a5c;
  uint uStack_1a58;
  uint uStack_1a54;
  uint uStack_1a50;
  uint uStack_1a4c;
  void *pvStack_1a48;
  int local_1a44;
  int iStack_1a40;
  int local_1a3c;
  uint uStack_1a38;
  uint uStack_1a34;
  char cStack_1a30;
  char cStack_1a2f;
  undefined1 local_1a2e;
  undefined1 local_1a2d;
  int iStack_1a2c;
  int iStack_1a28;
  int iStack_1a24;
  int iStack_1a20;
  int iStack_1a1c;
  int iStack_1a18;
  int iStack_1a14;
  char cStack_1a0f;
  char cStack_1a0e;
  char cStack_1a0d;
  int iStack_1a0c;
  int *piStack_1a08;
  int *piStack_1a04;
  char local_1a00;
  char local_19ff;
  char local_19fe;
  char local_19fd;
  int *local_19fc;
  int *piStack_19f8;
  int *piStack_19f4;
  int iStack_19f0;
  int local_19ec;
  int iStack_19e8;
  function<void___cdecl(void)> *local_19e4;
  undefined *puStack_19e0;
  int local_19dc;
  int *piStack_19d4;
  int *piStack_19d0;
  undefined4 uStack_19c8;
  undefined4 uStack_19c4;
  undefined4 uStack_1934;
  undefined4 uStack_1930;
  undefined4 local_18a0;
  undefined4 local_189c;
  undefined4 uStack_180c;
  undefined4 uStack_1808;
  undefined4 uStack_1778;
  undefined4 uStack_1774;
  undefined4 uStack_16e4;
  undefined4 uStack_16e0;
  undefined4 uStack_164c;
  undefined4 uStack_15bc;
  undefined4 uStack_15b8;
  undefined1 auStack_152c [8];
  undefined4 uStack_1524;
  undefined4 uStack_1494;
  undefined4 uStack_1490;
  undefined1 auStack_1404 [8];
  undefined4 uStack_13fc;
  undefined1 auStack_1370 [8];
  undefined4 uStack_1368;
  undefined4 uStack_12d8;
  undefined4 uStack_12d4;
  undefined4 uStack_1248;
  undefined4 uStack_1244;
  undefined4 uStack_1240;
  undefined4 uStack_11b0;
  undefined4 uStack_11ac;
  undefined4 uStack_11a8;
  undefined4 uStack_11a0;
  undefined4 uStack_1194;
  undefined4 uStack_111c;
  undefined4 uStack_1118;
  function<void___cdecl(void)> afStack_108c [24];
  function<void___cdecl(void)> afStack_1074 [24];
  function<void___cdecl(void)> afStack_105c [24];
  function<void___cdecl(void)> afStack_1044 [24];
  function<void___cdecl(void)> afStack_102c [24];
  function<void___cdecl(void)> afStack_1014 [24];
  function<void___cdecl(void)> afStack_ffc [24];
  function<void___cdecl(void)> afStack_fe4 [24];
  function<void___cdecl(void)> afStack_fcc [24];
  function<void___cdecl(void)> afStack_fb4 [24];
  function<void___cdecl(void)> afStack_f9c [24];
  function<void___cdecl(void)> afStack_f84 [24];
  function<void___cdecl(void)> afStack_f6c [24];
  function<void___cdecl(void)> afStack_f54 [24];
  function<void___cdecl(void)> afStack_f3c [24];
  function<void___cdecl(void)> afStack_f24 [24];
  function<void___cdecl(void)> afStack_f0c [24];
  function<void___cdecl(void)> afStack_ef4 [24];
  function<void___cdecl(void)> afStack_edc [24];
  function<void___cdecl(void)> afStack_ec4 [24];
  function<void___cdecl(void)> afStack_eac [24];
  function<void___cdecl(void)> afStack_e94 [24];
  function<void___cdecl(void)> afStack_e7c [24];
  function<void___cdecl(void)> afStack_e64 [24];
  function<void___cdecl(void)> afStack_e4c [24];
  function<void___cdecl(void)> afStack_e34 [24];
  function<void___cdecl(void)> afStack_e1c [24];
  function<void___cdecl(void)> afStack_e04 [24];
  function<void___cdecl(void)> afStack_dec [24];
  function<void___cdecl(void)> local_dd4 [24];
  function<void___cdecl(void)> local_dbc [24];
  function<void___cdecl(void)> local_da4 [24];
  function<void___cdecl(void)> local_d8c [24];
  function<void___cdecl(void)> local_d74 [24];
  function<void___cdecl(void)> local_d5c [24];
  function<void___cdecl(void)> local_d44 [24];
  function<void___cdecl(void)> local_d2c [24];
  function<void___cdecl(void)> local_d14 [24];
  function<void___cdecl(void)> local_cfc [24];
  function<void___cdecl(void)> local_ce4 [24];
  function<void___cdecl(void)> local_ccc [24];
  function<void___cdecl(void)> local_cb4 [24];
  function<void___cdecl(void)> local_c9c [24];
  function<void___cdecl(void)> local_c84 [24];
  function<void___cdecl(void)> afStack_c6c [24];
  function<void___cdecl(void)> afStack_c54 [24];
  function<void___cdecl(void)> local_c3c [24];
  function<void___cdecl(void)> afStack_c24 [24];
  function<void___cdecl(void)> afStack_c0c [24];
  function<void___cdecl(void)> afStack_bf4 [24];
  function<void___cdecl(void)> afStack_bdc [24];
  function<void___cdecl(void)> afStack_bc4 [24];
  function<void___cdecl(void)> afStack_bac [24];
  function<void___cdecl(void)> afStack_b94 [24];
  function<void___cdecl(void)> afStack_b7c [24];
  function<void___cdecl(void)> afStack_b64 [24];
  function<void___cdecl(void)> afStack_b4c [24];
  function<void___cdecl(void)> afStack_b34 [24];
  function<void___cdecl(void)> afStack_b1c [24];
  function<void___cdecl(void)> afStack_b04 [24];
  function<void___cdecl(void)> afStack_aec [24];
  function<void___cdecl(void)> afStack_ad4 [24];
  function<void___cdecl(void)> afStack_abc [24];
  function<void___cdecl(void)> local_aa4 [24];
  function<void___cdecl(void)> afStack_a8c [24];
  function<void___cdecl(void)> afStack_a74 [24];
  function<void___cdecl(void)> afStack_a5c [24];
  function<void___cdecl(void)> afStack_a44 [24];
  function<void___cdecl(void)> afStack_a2c [24];
  function<void___cdecl(void)> afStack_a14 [24];
  function<void___cdecl(void)> afStack_9fc [24];
  function<void___cdecl(void)> afStack_9e4 [24];
  function<void___cdecl(void)> afStack_9cc [24];
  function<void___cdecl(void)> afStack_9b4 [24];
  function<void___cdecl(void)> afStack_99c [24];
  function<void___cdecl(void)> afStack_984 [24];
  function<void___cdecl(void)> afStack_96c [24];
  function<void___cdecl(void)> afStack_954 [24];
  function<void___cdecl(void)> afStack_93c [24];
  function<void___cdecl(void)> afStack_924 [24];
  function<void___cdecl(void)> afStack_90c [24];
  function<void___cdecl(void)> afStack_8f4 [24];
  function<void___cdecl(void)> afStack_8dc [24];
  function<void___cdecl(void)> afStack_8c4 [24];
  function<void___cdecl(void)> afStack_8ac [24];
  function<void___cdecl(void)> afStack_894 [24];
  function<void___cdecl(void)> afStack_87c [24];
  function<void___cdecl(void)> local_864 [24];
  function<void___cdecl(void)> local_84c [24];
  function<void___cdecl(void)> local_834 [24];
  function<void___cdecl(void)> afStack_81c [24];
  function<void___cdecl(void)> local_804 [24];
  function<void___cdecl(void)> local_7ec [24];
  undefined1 local_7d4 [360];
  undefined1 local_66c [360];
  undefined1 auStack_504 [360];
  undefined1 auStack_39c [120];
  undefined1 local_324 [120];
  undefined1 local_2ac [120];
  function<void___cdecl(void)> afStack_234 [256];
  undefined1 auStack_134 [256];
  char acStack_34 [32];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00729a67;
  local_10 = ExceptionList;
  local_14 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  local_19dc = command_id;
  ppvVar1 = &local_10;
    /* Primary ranges below 0x529: 0xa.., 0x1a4.., 0x398.. then sparse */
if (command_id < 0x529) {
    if (command_id == 0x528) {
      ExceptionList = &local_10;
      ui_command_dispatch();
      ppvVar1 = ExceptionList;
    }
    else if (command_id < 0x19b) {
      if (command_id == 0x19a) {
        local_2024 = 0x32;
        ExceptionList = &local_10;
        FUN_004051c0();
        ui_close_matching_widgets();
        local_2028 = 0x32;
        puVar9 = (undefined1 *)FUN_005187c0();
        *puVar9 = 0;
        ppvVar1 = ExceptionList;
      }
      else {
                /* switch range base 0xA (10): low UI commands */
        local_19dc = command_id + -10;
        switch(command_id) {
        case 10:
          iStack_1a24 = ui_ctx;
          uStack_1e68 = 0x38;
          uStack_1e6c = 0x38;
          ExceptionList = &local_10;
          FUN_004051c0();
          ui_register_or_show_widget();
          FUN_004051c0();
          ui_activate_widget_pair();
          if (*(int *)(iStack_1a24 + 0x98c) == 7000) {
            uStack_1e70 = 7000;
            uStack_1e74 = 7000;
            FUN_004051c0();
            ui_register_or_show_widget();
            FUN_004051c0();
            ui_activate_widget_pair();
          }
          if (*(int *)(iStack_1a24 + 0x98c) == 0x41) {
            uStack_1e78 = 0x41;
            uStack_1e7c = 0x41;
            FUN_004051c0();
            ui_register_or_show_widget();
            FUN_004051c0();
            ui_activate_widget_pair();
          }
          if (*(int *)(iStack_1a24 + 0x98c) == 0x42) {
            uStack_1e80 = 0x42;
            uStack_1e84 = 0x42;
            FUN_004051c0();
            ui_register_or_show_widget();
            FUN_004051c0();
            ui_activate_widget_pair();
          }
          if (*(int *)(iStack_1a24 + 0x98c) == 0x43) {
            uStack_1e88 = 0x43;
            uStack_1e8c = 0x43;
            FUN_004051c0();
            ui_register_or_show_widget();
            FUN_004051c0();
            ui_activate_widget_pair();
          }
          if (*(int *)(iStack_1a24 + 0x98c) == 0x44) {
            uStack_1e90 = 0x44;
            uStack_1e94 = 0x44;
            FUN_004051c0();
            ui_register_or_show_widget();
            FUN_004051c0();
            ui_activate_widget_pair();
          }
          if (*(int *)(iStack_1a24 + 0x98c) == 0x45) {
            uStack_1e98 = 0x45;
            uStack_1e9c = 0x45;
            FUN_004051c0();
            ui_register_or_show_widget();
            FUN_004051c0();
            ui_activate_widget_pair();
          }
          if (*(int *)(iStack_1a24 + 0x98c) == 0x46) {
            uStack_1ea0 = 0x46;
            uStack_1ea4 = 0x46;
            FUN_004051c0();
            ui_register_or_show_widget();
            FUN_004051c0();
            ui_activate_widget_pair();
          }
          if (*(int *)(iStack_1a24 + 0x98c) == 0x47) {
            uStack_1ea8 = 0x47;
            uStack_1eac = 0x47;
            FUN_004051c0();
            ui_register_or_show_widget();
            FUN_004051c0();
            ui_activate_widget_pair();
          }
          if (*(int *)(iStack_1a24 + 0x98c) == 0x3c) {
            uStack_1eb0 = 0x3c;
            uStack_1eb4 = 0x3c;
            FUN_004051c0();
            ui_register_or_show_widget();
            FUN_004051c0();
            ui_activate_widget_pair();
          }
          if (*(int *)(iStack_1a24 + 0x98c) == 0x3d) {
            uStack_1eb8 = 0x3d;
            uStack_1ebc = 0x3d;
            FUN_004051c0();
            ui_register_or_show_widget();
            FUN_004051c0();
            ui_activate_widget_pair();
          }
          if (*(int *)(iStack_1a24 + 0x98c) == 0x3e) {
            uStack_1ec0 = 0x3e;
            uStack_1ec4 = 0x3e;
            FUN_004051c0();
            ui_register_or_show_widget();
            FUN_004051c0();
            ui_activate_widget_pair();
          }
          ppvVar1 = ExceptionList;
          if (*(int *)(iStack_1a24 + 0x98c) == 0x48) {
            uStack_1ec8 = 0x48;
            uStack_1ecc = 0x48;
            FUN_004051c0();
            ui_register_or_show_widget();
            FUN_004051c0();
            ui_activate_widget_pair();
            ppvVar1 = ExceptionList;
          }
          break;
        case 0x14:
          puStack_26c0 = (undefined1 *)&pfStack_2b9c;
          pfStack_2ba0 = (function<void___cdecl(void)> *)&DAT_00774c98;
          pcStack_2ba4 = (char *)0x695305;
          ExceptionList = &local_10;
          FUN_004054a0();
          pfStack_2ba0 = (function<void___cdecl(void)> *)0x69530a;
          cStack_1a9d = FUN_0065d840();
          ppvVar1 = ExceptionList;
          if (cStack_1a9d != '\x01') {
            iStack_1cb4 = 0;
            uStack_1fac = 0x514;
            uStack_1cac = FUN_004051c0();
            piStack_1be4 = (int *)FUN_004018d0();
            piStack_1fb0 = (int *)FUN_004018b0();
            for (; piStack_1be4 != piStack_1fb0; piStack_1be4 = piStack_1be4 + 1) {
              piStack_1cb0 = piStack_1be4;
              if (*(char *)(*piStack_1be4 + 0x9a8) == '\x01') {
                iStack_1cb4 = *(int *)(*piStack_1be4 + 0x9a0);
                break;
              }
            }
            if (iStack_1cb4 != 0) {
              puStack_2b98 = (undefined4 *)0xa;
              puStack_26c4 = (undefined1 *)apfStack_2bb0;
              puStack_2bb4 = (undefined4 *)&DAT_00774c80;
              puStack_2bb8 = (undefined *)0x6953f0;
              FUN_004054a0();
              puStack_2bb4 = (undefined4 *)0x6953f5;
              FUN_006634f0();
              ExceptionList = local_10;
              return;
            }
            uStack_1fb4 = 7000;
            FUN_004051c0();
            ppfStack_26c8 = apfStack_2bb0 + 1;
            apfStack_2bb0[0] = (function<void___cdecl(void)> *)0x774d10;
            puStack_2bb4 = (undefined4 *)0x695434;
            uStack_26cc = FUN_004054a0();
            local_8 = 0x66;
            puStack_26d0 = auStack_2bc4;
            puStack_2bc8 = &DAT_00774cfc;
            uStack_2bcc = 0x695456;
            uStack_26d4 = FUN_004054a0();
            local_8 = CONCAT31(local_8._1_3_,0x67);
            puStack_2bc8 = (undefined *)0x46;
            puStack_26d8 = auStack_2be0;
            FUN_004054a0(&DAT_00774ce8);
            local_8 = 0xffffffff;
            iStack_1fb8 = FUN_00661cc0(0,0);
            *(undefined4 *)(iStack_1fb8 + 0x98c) = 7000;
            *(undefined1 *)(iStack_1fb8 + 0x50) = 1;
            iStack_1a0c = iStack_1fb8;
            CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(iStack_1fb8 + 0xa3c));
            *(undefined4 *)(iStack_1a0c + 0xa40) = 0xb;
            *(undefined4 *)(iStack_1a0c + 0xa44) = 0x1a;
            *(undefined1 *)(iStack_1a0c + 0xad0) = 1;
            FUN_004d1b30();
            uVar8 = FUN_00517150();
            *(undefined4 *)(iStack_1a0c + 0x828) = uVar8;
            *(undefined1 *)(*(int *)(iStack_1a0c + 0x828) + 4) = 1;
            FUN_004053a0();
            *(undefined1 *)(*(int *)(iStack_1a0c + 0x828) + 0x20) = 0;
            *(undefined4 *)(*(int *)(iStack_1a0c + 0x828) + 0x24) = 0xb;
            *(undefined4 *)(*(int *)(iStack_1a0c + 0x828) + 0x28) = 0x1a;
            *(undefined4 *)(*(int *)(iStack_1a0c + 0x828) + 0x44) = 1000;
            uStack_1fbc = 7000;
            FUN_004051c0();
            ppfStack_26dc = apfStack_2bb0 + 1;
            apfStack_2bb0[0] = (function<void___cdecl(void)> *)0x774d70;
            puStack_2bb4 = (undefined4 *)0x6955b5;
            uStack_26e0 = FUN_004054a0();
            local_8 = 0x68;
            puStack_26e4 = auStack_2bc4;
            puStack_2bc8 = &DAT_00774d5c;
            uStack_2bcc = 0x6955d7;
            uStack_26e8 = FUN_004054a0();
            local_8 = CONCAT31(local_8._1_3_,0x69);
            puStack_2bc8 = (undefined *)0x41;
            puStack_26ec = auStack_2be0;
            FUN_004054a0(&DAT_00774d48);
            local_8 = 0xffffffff;
            iStack_1fc0 = FUN_00661cc0(0,2);
            *(undefined4 *)(iStack_1fc0 + 0x984) = 0x1e0;
            iStack_1a40 = iStack_1fc0;
            FUN_004053a0();
            *(undefined4 *)(iStack_1a40 + 0x98c) = 7000;
            *(int *)(iStack_1a40 + 0xc) = iStack_1a0c;
            iStack_1fc4 = iStack_1a40;
            FUN_0040d490();
            uStack_1fc8 = 7000;
            FUN_004051c0();
            ppfStack_26f0 = apfStack_2bb0 + 1;
            apfStack_2bb0[0] = (function<void___cdecl(void)> *)0x774dd0;
            puStack_2bb4 = (undefined4 *)0x6956b8;
            uStack_26f4 = FUN_004054a0();
            local_8 = 0x6a;
            puStack_26f8 = auStack_2bc4;
            puStack_2bc8 = &DAT_00774dbc;
            uStack_2bcc = 0x6956da;
            uStack_26fc = FUN_004054a0();
            local_8 = CONCAT31(local_8._1_3_,0x6b);
            puStack_2bc8 = (undefined *)0x41;
            puStack_2700 = auStack_2be0;
            FUN_004054a0(&DAT_00774da8);
            local_8 = 0xffffffff;
            iStack_1fcc = FUN_00661cc0(0,2);
            *(undefined4 *)(iStack_1fcc + 0x984) = 10;
            iStack_1a40 = iStack_1fcc;
            FUN_004053a0();
            *(undefined4 *)(iStack_1a40 + 0x98c) = 7000;
            *(int *)(iStack_1a40 + 0xc) = iStack_1a0c;
            iStack_1fd0 = iStack_1a40;
            FUN_0040d490();
            uStack_1fd4 = 7000;
            uStack_1fd8 = 7000;
            FUN_004051c0();
            FUN_00402170();
            puStack_2b98 = (undefined4 *)0x6957d7;
            FUN_004051c0();
            FUN_004021b0();
            FUN_00405d30();
            ppfVar15 = apfStack_2bb0;
            puVar3 = &DAT_007ca70c;
            for (iVar14 = 8; ppfVar15 = (function<void___cdecl(void)> **)((int)ppfVar15 + 4),
                iVar14 != 0; iVar14 = iVar14 + -1) {
              *ppfVar15 = (function<void___cdecl(void)> *)*puVar3;
              puVar3 = puVar3 + 1;
            }
            apfStack_2bb0[0] = (function<void___cdecl(void)> *)0x69580c;
            FUN_0065e180();
            ppvVar1 = ExceptionList;
          }
          break;
        case 0x28:
          iStack_1c50 = ui_ctx;
          puStack_270c = (undefined1 *)&pfStack_2b9c;
          pfStack_2ba0 = (function<void___cdecl(void)> *)0x774e34;
          pcStack_2ba4 = (char *)0x695832;
          ExceptionList = &local_10;
          FUN_004054a0();
          pfStack_2ba0 = (function<void___cdecl(void)> *)0x69583d;
          FUN_004c1990();
          uStack_1fdc = 0x514;
          FUN_004051c0();
          FUN_004021b0();
          while( true ) {
            uStack_1fe0 = 0x514;
            FUN_004051c0();
            FUN_00402170();
            cVar2 = FUN_00426ed0();
            if (cVar2 == '\0') break;
            piVar5 = (int *)FUN_0044ddc0();
            *(undefined4 *)(*piVar5 + 0x8dc) = 0;
            FUN_00489b50();
          }
          *(undefined4 *)(iStack_1c50 + 0x8dc) = 2;
          uStack_1fe4 = 7000;
          puStack_2718 = (undefined1 *)&pfStack_2b9c;
          pfStack_2ba0 = (function<void___cdecl(void)> *)&DAT_00774e20;
          pcStack_2ba4 = (char *)0x695903;
          uStack_271c = FUN_004054a0();
          local_8 = 0x6c;
          pfStack_2ba0 = (function<void___cdecl(void)> *)&uStack_1fe4;
          pcStack_2ba4 = (char *)0x695921;
          pfStack_2ba0 = (function<void___cdecl(void)> *)FUN_004051c0();
          local_8 = 0xffffffff;
          pcStack_2ba4 = (char *)0x69592e;
          FUN_0065d990();
          uStack_1b0c = 0;
          uStack_1fe8 = 0x514;
          uStack_1cb8 = FUN_004051c0();
          piStack_1be0 = (int *)FUN_004018d0();
          piStack_1fec = (int *)FUN_004018b0();
          for (; piStack_1be0 != piStack_1fec; piStack_1be0 = piStack_1be0 + 1) {
            piStack_1c7c = piStack_1be0;
            if (*(int *)(*piStack_1be0 + 0x9a0) == *(int *)(iStack_1c50 + 0x9a0)) {
              *(undefined1 *)(*piStack_1be0 + 0x9a8) = 1;
              uStack_1b0c = *(undefined4 *)(iStack_1c50 + 0x9a0);
            }
            else {
              *(undefined1 *)(*piStack_1be0 + 0x9a8) = 0;
            }
          }
          uStack_1ff0 = 7000;
          FUN_004051c0();
          FUN_004021b0();
          while( true ) {
            uStack_1ff4 = 7000;
            FUN_004051c0();
            FUN_00402170();
            cVar2 = FUN_00426ed0();
            ppvVar1 = ExceptionList;
            if (cVar2 == '\0') break;
            FUN_0044ddc0();
            cVar2 = FUN_00427c60();
            if (cVar2 == '\0') {
              FUN_0044ddc0();
              cVar2 = FUN_00427c60();
              if (cVar2 == '\0') {
                FUN_0044ddc0();
                cVar2 = FUN_00427c60();
                if (cVar2 == '\0') {
                  FUN_0044ddc0();
                  cVar2 = FUN_00427c60();
                  if (cVar2 != '\0') {
                    uStack_1cc4 = uStack_1b0c;
                    switch(uStack_1b0c) {
                    case 0:
                      FUN_0040d650();
                      local_8 = 0x6d;
                      FUN_004054a0();
                      local_8 = CONCAT31(local_8._1_3_,0x6e);
                      FUN_0040d7f0();
                      FUN_004cb3e0();
                      FUN_0044ddc0();
                      FUN_006ac870();
                      FUN_0044ddc0();
                      FUN_00427260();
                      puStack_2728 = (undefined1 *)&pfStack_2ba0;
                      pcStack_2ba4 = acStack_25f4;
                      pcStack_2ba8 = (char *)0x695d90;
                      FUN_00411bf0();
                      pcStack_2ba4 = (char *)0x695d9b;
                      piVar5 = (int *)FUN_0044ddc0();
                      pcStack_2ba4 = (char *)(*piVar5 + 0x1ac);
                      pcStack_2ba8 = (char *)0x695da9;
                      FUN_004cbbb0();
                      FUN_0044ddc0();
                      uVar4 = FUN_00427230();
                      if (uVar4 < 0xf) {
                        piVar5 = (int *)FUN_0044ddc0();
                        *(undefined4 *)(*piVar5 + 0xb04) = 0;
                        piVar5 = (int *)FUN_0044ddc0();
                        *(undefined4 *)(*piVar5 + 0xb00) = 0;
                      }
                      else {
                        piVar5 = (int *)FUN_0044ddc0();
                        *(undefined4 *)(*piVar5 + 0xb04) = 0;
                        FUN_0044ddc0();
                        iVar14 = FUN_00427230();
                        piVar5 = (int *)FUN_0044ddc0();
                        *(int *)(*piVar5 + 0xb00) = iVar14 + -0xe;
                        uStack_1aa8 = 0;
                        while( true ) {
                          FUN_0044ddc0();
                          uVar4 = FUN_00427230();
                          if (uVar4 <= uStack_1aa8) break;
                          piVar5 = (int *)FUN_0044ddc0();
                          if ((uStack_1aa8 < *(uint *)(*piVar5 + 0xb04)) ||
                             (piVar5 = (int *)FUN_0044ddc0(),
                             *(int *)(*piVar5 + 0xb04) + 0xeU <= uStack_1aa8)) {
                            FUN_0044ddc0();
                            puVar9 = (undefined1 *)FUN_00427200();
                            *puVar9 = 0;
                          }
                          else {
                            FUN_0044ddc0();
                            puVar9 = (undefined1 *)FUN_00427200();
                            *puVar9 = 1;
                          }
                          uStack_1aa8 = uStack_1aa8 + 1;
                        }
                      }
                      local_8 = CONCAT31(local_8._1_3_,0x6d);
                      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_8ac);
                      local_8 = 0xffffffff;
                      FUN_0040d7d0();
                      break;
                    case 1:
                      FUN_0040d650();
                      local_8 = 0x6f;
                      FUN_004054a0();
                      local_8 = CONCAT31(local_8._1_3_,0x70);
                      FUN_0040d7f0();
                      FUN_004cb3e0();
                      FUN_0044ddc0();
                      FUN_006ac870();
                      FUN_0044ddc0();
                      FUN_00427260();
                      puStack_272c = (undefined1 *)&pfStack_2ba0;
                      pcStack_2ba4 = acStack_25e8;
                      pcStack_2ba8 = (char *)0x695fe6;
                      FUN_00411bf0();
                      pcStack_2ba4 = (char *)0x695ff1;
                      piVar5 = (int *)FUN_0044ddc0();
                      pcStack_2ba4 = (char *)(*piVar5 + 0x1ac);
                      pcStack_2ba8 = (char *)0x695ffe;
                      FUN_004cbbb0();
                      FUN_0044ddc0();
                      uVar4 = FUN_00427230();
                      if (uVar4 < 0xf) {
                        piVar5 = (int *)FUN_0044ddc0();
                        *(undefined4 *)(*piVar5 + 0xb04) = 0;
                        piVar5 = (int *)FUN_0044ddc0();
                        *(undefined4 *)(*piVar5 + 0xb00) = 0;
                      }
                      else {
                        piVar5 = (int *)FUN_0044ddc0();
                        *(undefined4 *)(*piVar5 + 0xb04) = 0;
                        FUN_0044ddc0();
                        iVar14 = FUN_00427230();
                        piVar5 = (int *)FUN_0044ddc0();
                        *(int *)(*piVar5 + 0xb00) = iVar14 + -0xe;
                        uStack_1aac = 0;
                        while( true ) {
                          FUN_0044ddc0();
                          uVar4 = FUN_00427230();
                          if (uVar4 <= uStack_1aac) break;
                          piVar5 = (int *)FUN_0044ddc0();
                          if ((uStack_1aac < *(uint *)(*piVar5 + 0xb04)) ||
                             (piVar5 = (int *)FUN_0044ddc0(),
                             *(int *)(*piVar5 + 0xb04) + 0xeU <= uStack_1aac)) {
                            FUN_0044ddc0();
                            puVar9 = (undefined1 *)FUN_00427200();
                            *puVar9 = 0;
                          }
                          else {
                            FUN_0044ddc0();
                            puVar9 = (undefined1 *)FUN_00427200();
                            *puVar9 = 1;
                          }
                          uStack_1aac = uStack_1aac + 1;
                        }
                      }
                      local_8 = CONCAT31(local_8._1_3_,0x6f);
                      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_87c);
                      local_8 = 0xffffffff;
                      FUN_0040d7d0();
                      break;
                    case 2:
                      FUN_0040d650();
                      local_8 = 0x71;
                      FUN_004054a0();
                      local_8 = CONCAT31(local_8._1_3_,0x72);
                      FUN_0040d7f0();
                      FUN_004cb3e0();
                      FUN_0044ddc0();
                      FUN_006ac870();
                      FUN_0044ddc0();
                      FUN_00427260();
                      puStack_2730 = (undefined1 *)&pfStack_2ba0;
                      pcStack_2ba4 = acStack_2600;
                      pcStack_2ba8 = (char *)0x69623b;
                      FUN_00411bf0();
                      pcStack_2ba4 = (char *)0x696246;
                      piVar5 = (int *)FUN_0044ddc0();
                      pcStack_2ba4 = (char *)(*piVar5 + 0x1ac);
                      pcStack_2ba8 = (char *)0x696253;
                      FUN_004cbbb0();
                      FUN_0044ddc0();
                      uVar4 = FUN_00427230();
                      if (uVar4 < 0xf) {
                        piVar5 = (int *)FUN_0044ddc0();
                        *(undefined4 *)(*piVar5 + 0xb04) = 0;
                        piVar5 = (int *)FUN_0044ddc0();
                        *(undefined4 *)(*piVar5 + 0xb00) = 0;
                      }
                      else {
                        piVar5 = (int *)FUN_0044ddc0();
                        *(undefined4 *)(*piVar5 + 0xb04) = 0;
                        FUN_0044ddc0();
                        iVar14 = FUN_00427230();
                        piVar5 = (int *)FUN_0044ddc0();
                        *(int *)(*piVar5 + 0xb00) = iVar14 + -0xe;
                        uStack_1ab0 = 0;
                        while( true ) {
                          FUN_0044ddc0();
                          uVar4 = FUN_00427230();
                          if (uVar4 <= uStack_1ab0) break;
                          piVar5 = (int *)FUN_0044ddc0();
                          if ((uStack_1ab0 < *(uint *)(*piVar5 + 0xb04)) ||
                             (piVar5 = (int *)FUN_0044ddc0(),
                             *(int *)(*piVar5 + 0xb04) + 0xeU <= uStack_1ab0)) {
                            FUN_0044ddc0();
                            puVar9 = (undefined1 *)FUN_00427200();
                            *puVar9 = 0;
                          }
                          else {
                            FUN_0044ddc0();
                            puVar9 = (undefined1 *)FUN_00427200();
                            *puVar9 = 1;
                          }
                          uStack_1ab0 = uStack_1ab0 + 1;
                        }
                      }
                      local_8 = CONCAT31(local_8._1_3_,0x71);
                      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_8dc);
                      local_8 = 0xffffffff;
                      FUN_0040d7d0();
                      break;
                    case 3:
                      FUN_0040d650();
                      local_8 = 0x73;
                      FUN_004054a0();
                      local_8 = CONCAT31(local_8._1_3_,0x74);
                      FUN_0040d7f0();
                      FUN_004cb3e0();
                      FUN_0044ddc0();
                      FUN_006ac870();
                      FUN_0044ddc0();
                      FUN_00427260();
                      puStack_2734 = (undefined1 *)&pfStack_2ba0;
                      pcStack_2ba4 = acStack_260c;
                      pcStack_2ba8 = (char *)0x696490;
                      FUN_00411bf0();
                      pcStack_2ba4 = (char *)0x69649b;
                      piVar5 = (int *)FUN_0044ddc0();
                      pcStack_2ba4 = (char *)(*piVar5 + 0x1ac);
                      pcStack_2ba8 = (char *)0x6964a8;
                      FUN_004cbbb0();
                      FUN_0044ddc0();
                      uVar4 = FUN_00427230();
                      if (uVar4 < 0xf) {
                        piVar5 = (int *)FUN_0044ddc0();
                        *(undefined4 *)(*piVar5 + 0xb04) = 0;
                        piVar5 = (int *)FUN_0044ddc0();
                        *(undefined4 *)(*piVar5 + 0xb00) = 0;
                      }
                      else {
                        piVar5 = (int *)FUN_0044ddc0();
                        *(undefined4 *)(*piVar5 + 0xb04) = 0;
                        FUN_0044ddc0();
                        iVar14 = FUN_00427230();
                        piVar5 = (int *)FUN_0044ddc0();
                        *(int *)(*piVar5 + 0xb00) = iVar14 + -0xe;
                        uStack_1ab4 = 0;
                        while( true ) {
                          FUN_0044ddc0();
                          uVar4 = FUN_00427230();
                          if (uVar4 <= uStack_1ab4) break;
                          piVar5 = (int *)FUN_0044ddc0();
                          if ((uStack_1ab4 < *(uint *)(*piVar5 + 0xb04)) ||
                             (piVar5 = (int *)FUN_0044ddc0(),
                             *(int *)(*piVar5 + 0xb04) + 0xeU <= uStack_1ab4)) {
                            FUN_0044ddc0();
                            puVar9 = (undefined1 *)FUN_00427200();
                            *puVar9 = 0;
                          }
                          else {
                            FUN_0044ddc0();
                            puVar9 = (undefined1 *)FUN_00427200();
                            *puVar9 = 1;
                          }
                          uStack_1ab4 = uStack_1ab4 + 1;
                        }
                      }
                      local_8 = CONCAT31(local_8._1_3_,0x73);
                      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_8c4);
                      local_8 = 0xffffffff;
                      FUN_0040d7d0();
                      break;
                    case 4:
                      FUN_0040d650();
                      local_8 = 0x75;
                      FUN_004054a0();
                      local_8 = CONCAT31(local_8._1_3_,0x76);
                      FUN_0040d7f0();
                      FUN_004cb3e0();
                      FUN_0044ddc0();
                      FUN_006ac870();
                      FUN_0044ddc0();
                      FUN_00427260();
                      puStack_2738 = (undefined1 *)&pfStack_2ba0;
                      pcStack_2ba4 = acStack_2618;
                      pcStack_2ba8 = (char *)0x6966e5;
                      FUN_00411bf0();
                      pcStack_2ba4 = (char *)0x6966f0;
                      piVar5 = (int *)FUN_0044ddc0();
                      pcStack_2ba4 = (char *)(*piVar5 + 0x1ac);
                      pcStack_2ba8 = (char *)0x6966fd;
                      FUN_004cbbb0();
                      FUN_0044ddc0();
                      uVar4 = FUN_00427230();
                      if (uVar4 < 0xf) {
                        piVar5 = (int *)FUN_0044ddc0();
                        *(undefined4 *)(*piVar5 + 0xb04) = 0;
                        piVar5 = (int *)FUN_0044ddc0();
                        *(undefined4 *)(*piVar5 + 0xb00) = 0;
                      }
                      else {
                        piVar5 = (int *)FUN_0044ddc0();
                        *(undefined4 *)(*piVar5 + 0xb04) = 0;
                        FUN_0044ddc0();
                        iVar14 = FUN_00427230();
                        piVar5 = (int *)FUN_0044ddc0();
                        *(int *)(*piVar5 + 0xb00) = iVar14 + -0xe;
                        uStack_1ab8 = 0;
                        while( true ) {
                          FUN_0044ddc0();
                          uVar4 = FUN_00427230();
                          if (uVar4 <= uStack_1ab8) break;
                          piVar5 = (int *)FUN_0044ddc0();
                          if ((uStack_1ab8 < *(uint *)(*piVar5 + 0xb04)) ||
                             (piVar5 = (int *)FUN_0044ddc0(),
                             *(int *)(*piVar5 + 0xb04) + 0xeU <= uStack_1ab8)) {
                            FUN_0044ddc0();
                            puVar9 = (undefined1 *)FUN_00427200();
                            *puVar9 = 0;
                          }
                          else {
                            FUN_0044ddc0();
                            puVar9 = (undefined1 *)FUN_00427200();
                            *puVar9 = 1;
                          }
                          uStack_1ab8 = uStack_1ab8 + 1;
                        }
                      }
                      local_8 = CONCAT31(local_8._1_3_,0x75);
                      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_894);
                      local_8 = 0xffffffff;
                      FUN_0040d7d0();
                    }
                  }
                }
                else {
                  uStack_1cc0 = uStack_1b0c;
                  switch(uStack_1b0c) {
                  case 0:
                    FUN_0044ddc0();
                    iVar14 = FUN_0040d680();
                    *(undefined1 *)(iVar14 + 0x20) = 0x11;
                    break;
                  case 1:
                    FUN_0044ddc0();
                    iVar14 = FUN_0040d680();
                    *(undefined1 *)(iVar14 + 0x20) = 0x12;
                    break;
                  case 2:
                    FUN_0044ddc0();
                    iVar14 = FUN_0040d680();
                    *(undefined1 *)(iVar14 + 0x20) = 0x23;
                    break;
                  case 3:
                    FUN_0044ddc0();
                    iVar14 = FUN_0040d680();
                    *(undefined1 *)(iVar14 + 0x20) = 0x29;
                    break;
                  case 4:
                    FUN_0044ddc0();
                    iVar14 = FUN_0040d680();
                    *(undefined1 *)(iVar14 + 0x20) = 0x2e;
                  }
                }
              }
              else {
                uStack_1cbc = uStack_1b0c;
                switch(uStack_1b0c) {
                case 0:
                  FUN_0044ddc0();
                  iVar14 = FUN_0040d680();
                  *(undefined1 *)(iVar14 + 0x20) = 0x13;
                  break;
                case 1:
                  FUN_0044ddc0();
                  iVar14 = FUN_0040d680();
                  *(undefined1 *)(iVar14 + 0x20) = 0x14;
                  break;
                case 2:
                  FUN_0044ddc0();
                  iVar14 = FUN_0040d680();
                  *(undefined1 *)(iVar14 + 0x20) = 0x24;
                  break;
                case 3:
                  FUN_0044ddc0();
                  iVar14 = FUN_0040d680();
                  *(undefined1 *)(iVar14 + 0x20) = 0x2a;
                  break;
                case 4:
                  FUN_0044ddc0();
                  iVar14 = FUN_0040d680();
                  *(undefined1 *)(iVar14 + 0x20) = 0x2f;
                }
              }
            }
            else {
              FUN_0044ddc0();
              iVar14 = FUN_0040d680();
              *(undefined1 *)(iVar14 + 0x20) = (undefined1)uStack_1b0c;
            }
            FUN_00489b50();
          }
          break;
        case 0x32:
          ExceptionList = &local_10;
          FUN_006a3f10();
          FUN_004f2720();
          ppvVar1 = ExceptionList;
          break;
        case 0x3c:
          ExceptionList = &local_10;
          FUN_006a3f10();
          FUN_004f2720();
          ppvVar1 = ExceptionList;
          break;
        case 0x46:
          ExceptionList = &local_10;
          FUN_006a3f10();
          FUN_004f2720();
          ppvVar1 = ExceptionList;
          break;
        case 0x50:
          ExceptionList = &local_10;
          FUN_00656450();
          ppvVar1 = ExceptionList;
          break;
        case 100:
          iStack_1cd0 = -1;
          uStack_1ff8 = 0x4b0;
          ExceptionList = &local_10;
          uStack_1cc8 = FUN_004051c0();
          piStack_1bdc = (int *)FUN_004018d0();
          piStack_1ffc = (int *)FUN_004018b0();
          for (; piStack_1bdc != piStack_1ffc; piStack_1bdc = piStack_1bdc + 1) {
            piStack_1ccc = piStack_1bdc;
            if (*(char *)(*piStack_1bdc + 0x9a8) == '\x01') {
              iStack_1cd0 = *(int *)(*piStack_1bdc + 0xa10);
              break;
            }
          }
          ppvVar1 = ExceptionList;
          if (iStack_1cd0 != -1) {
            puStack_2000 = &UNK_00775fa0;
            puStack_2b98 = (undefined4 *)0x6e;
            puStack_273c = (undefined1 *)apfStack_2bb0;
            puStack_2bb4 = (undefined4 *)&UNK_00775fa0;
            puStack_2bb8 = &UNK_00696a03;
            FUN_004054a0();
            puStack_2bb4 = (undefined4 *)&UNK_00696a08;
            FUN_006634f0();
            ppvVar1 = ExceptionList;
          }
          break;
        case 0x6e:
          iStack_2740 = ui_ctx;
          uStack_2004 = 0x38;
          uStack_2008 = 0x38;
          ExceptionList = &local_10;
          FUN_004051c0();
          ui_register_or_show_widget();
          FUN_004051c0();
          ui_activate_widget_pair();
          iStack_1b08 = -1;
          uStack_200c = 0x4b0;
          uStack_1cd4 = FUN_004051c0();
          piStack_1bd8 = (int *)FUN_004018d0();
          piStack_2010 = (int *)FUN_004018b0();
          for (; piStack_1bd8 != piStack_2010; piStack_1bd8 = piStack_1bd8 + 1) {
            piStack_1cd8 = piStack_1bd8;
            if (*(char *)(*piStack_1bd8 + 0x9a8) == '\x01') {
              iStack_1b08 = *(int *)(*piStack_1bd8 + 0xa10);
              break;
            }
          }
          ppvVar1 = ExceptionList;
          if (iStack_1b08 != -1) {
            FUN_00454ef0();
            FUN_00401a70();
            FUN_00454ef0();
            FUN_00401a70();
            FUN_006a54f0();
            do {
              iVar14 = FUN_004f27a0();
            } while (iVar14 != 0x38);
            FUN_00454ef0();
            piVar5 = (int *)FUN_00401a70();
            iStack_1ce0 = *(int *)(*piVar5 + 0xa94);
            FUN_00454ef0();
            FUN_004021b0();
            while( true ) {
              FUN_00454ef0();
              FUN_00402170();
              cVar2 = FUN_00426ed0();
              if (cVar2 == '\0') break;
              piVar5 = (int *)FUN_0044ddc0();
              if (*(int *)(*piVar5 + 0xa94) == iStack_1ce0) {
                FUN_0044ddc0();
                FUN_004d1b30();
                FUN_00517db0();
                uStack_2014 = uStack_1b04;
                FUN_00454ef0();
                FUN_0044dea0();
                break;
              }
              FUN_0044dda0();
            }
            uStack_1cdc = FUN_00454ef0();
            piStack_1bd4 = (int *)FUN_004018d0();
            piStack_2018 = (int *)FUN_004018b0();
            for (; piStack_1bd4 != piStack_2018; piStack_1bd4 = piStack_1bd4 + 1) {
              piStack_1c78 = piStack_1bd4;
              if (iStack_1ce0 < *(int *)(*piStack_1bd4 + 0xa94)) {
                *(int *)(*piStack_1bd4 + 0xa94) = *(int *)(*piStack_1bd4 + 0xa94) + -1;
              }
            }
            FUN_00454ef0();
            FUN_00654db0();
            puStack_2b98 = (undefined4 *)0xa;
            puStack_274c = (undefined1 *)apfStack_2bb0;
            puStack_2bb4 = (undefined4 *)&UNK_00775f8c;
            puStack_2bb8 = &UNK_00696cf5;
            FUN_004054a0();
            puStack_2bb4 = (undefined4 *)&UNK_00696cfa;
            FUN_006634f0();
            ppvVar1 = ExceptionList;
          }
        }
      }
    }
    else if (command_id < 0x364) {
      if (command_id == 0x363) {
        local_257c = ui_ctx;
        ExceptionList = &local_10;
        FUN_00405520();
        local_8 = 0x48;
        FUN_004054a0();
        local_8._0_1_ = 0x49;
        local_1d84 = FUN_004277a0();
        if (local_1d84 != -1) {
          FUN_00410b30();
          FUN_00427800();
        }
        local_1b54 = 0;
        while( true ) {
          local_2580 = 7000;
          FUN_004051c0();
          uVar4 = FUN_00401a90();
          if (uVar4 <= local_1b54) break;
          local_2584 = 7000;
          FUN_004051c0();
          piVar5 = (int *)FUN_00401a70();
          local_1a44 = *piVar5;
          local_258c = FUN_004054a0();
          local_8._0_1_ = 0x4a;
          local_2588 = local_258c;
          local_2590 = FUN_00427c80();
          local_1a9b = destroy<>();
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_dd4);
          local_8._0_1_ = 0x49;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_dbc);
          if (((local_1a9b != '\0') && (1 < *(int *)(local_1a44 + 0xb04))) &&
             (*(int *)(local_1a44 + 0xb00) != 1)) {
            *(int *)(local_1a44 + 0xb04) = *(int *)(local_1a44 + 0xb04) + -1;
            local_25ac = FUN_0040a850();
            local_8._0_1_ = 0x4b;
            local_2594 = local_25ac;
            local_25a0 = FUN_004054a0();
            local_8._0_1_ = 0x4c;
            local_2598 = local_25a0;
            local_25a4 = FUN_0040a850();
            local_8._0_1_ = 0x4d;
            local_259c = local_25a4;
            local_25b0 = FUN_00405cf0();
            local_8._0_1_ = 0x4e;
            local_25a8 = local_25b0;
            local_25b4 = FUN_00405cf0();
            FUN_004053e0();
            std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_da4);
            local_8._0_1_ = 0x4d;
            std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_d8c);
            local_8._0_1_ = 0x4c;
            std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_d74);
            local_8._0_1_ = 0x4b;
            std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_d5c);
            local_8._0_1_ = 0x49;
            std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_d44);
            CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(local_1a44 + 0xa3c));
            local_25bc = 7000;
            local_2a80 = &pcStack_2ba8;
            apfStack_2bb0[1] = local_7ec;
            apfStack_2bb0[0] = (function<void___cdecl(void)> *)0x6918dc;
            FUN_00405520();
            apfStack_2bb0[1] = (function<void___cdecl(void)> *)0x6918e1;
            local_25b8 = FUN_006ce090();
            local_2a84 = apfStack_2bb0 + 1;
            apfStack_2bb0[0] = local_7ec;
            puStack_2bb4 = (undefined4 *)0x691908;
            local_2a88 = FUN_00405520();
            local_8._0_1_ = 0x4f;
            apfStack_2bb0[0] = (function<void___cdecl(void)> *)0x1;
            puStack_2bb4 = &local_25bc;
            puStack_2bb8 = (undefined *)0x691925;
            puStack_2bb4 = (undefined4 *)FUN_004051c0();
            local_8._0_1_ = 0x49;
            puStack_2bb8 = (undefined *)0x69192f;
            FUN_00622460();
            break;
          }
          local_1b54 = local_1b54 + 1;
        }
        ppfVar15 = apfStack_2bb0;
        puVar3 = &DAT_007ca70c;
        for (iVar14 = 8; ppfVar15 = (function<void___cdecl(void)> **)((int)ppfVar15 + 4),
            iVar14 != 0; iVar14 = iVar14 + -1) {
          *ppfVar15 = (function<void___cdecl(void)> *)*puVar3;
          puVar3 = puVar3 + 1;
        }
        apfStack_2bb0[0] = (function<void___cdecl(void)> *)0x69195d;
        FUN_0065e180();
        local_8 = CONCAT31(local_8._1_3_,0x48);
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_84c);
        local_8 = 0xffffffff;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_7ec);
        ppvVar1 = ExceptionList;
      }
      else {
                /* switch range base 0x1A4: mid UI commands */
        local_19dc = command_id + -0x1a4;
        switch(command_id) {
        case 0x1a4:
          puStack_2750 = (undefined1 *)&pfStack_2b9c;
          pfStack_2ba0 = (function<void___cdecl(void)> *)0x775f7c;
          pcStack_2ba4 = (char *)0x696e69;
          ExceptionList = &local_10;
          FUN_004054a0();
          pfStack_2ba0 = (function<void___cdecl(void)> *)0x696e6e;
          FUN_004c3570();
          FUN_0066a7f0();
          uStack_202c = 0x32;
          FUN_004051c0();
          FUN_0065ddb0();
          uStack_2030 = 0x32;
          puVar9 = (undefined1 *)FUN_005187c0();
          *puVar9 = 1;
          ppvVar1 = ExceptionList;
          break;
        case 0x1ae:
          if (ui_ctx == 0) {
            uStack_201c = 900;
            ExceptionList = &local_10;
            FUN_004051c0();
            cVar2 = FUN_0040d500();
            if (cVar2 == '\0') {
              uStack_2020 = 900;
              FUN_004051c0();
              ui_close_matching_widgets();
              ppvVar1 = ExceptionList;
            }
            else {
              FUN_00454ea0();
              FUN_0066b900();
              ppvVar1 = ExceptionList;
            }
          }
          else {
            iStack_1d68 = *(int *)(ui_ctx + 0x9a0);
            ExceptionList = &local_10;
            iVar14 = FUN_00454ea0();
            if (iStack_1d68 == *(int *)(iVar14 + 0x1e8)) {
              uStack_1ce4 = 900;
            }
            else {
              uStack_1ce4 = 0x3b6;
            }
            uStack_1ce8 = uStack_1ce4;
            FUN_00426f10();
            cVar2 = FUN_0040d500();
            if (cVar2 == '\0') {
              FUN_00426f10();
              ui_close_matching_widgets();
              ppvVar1 = ExceptionList;
            }
            else {
              FUN_00454ee0();
              FUN_00489bf0();
              FUN_0066b900();
              ppvVar1 = ExceptionList;
            }
          }
          break;
        case 0x1c2:
          uStack_2034 = 0x32;
          ExceptionList = &local_10;
          pcVar10 = (char *)FUN_005187c0();
          if (*pcVar10 == '\x01') {
            ui_command_dispatch();
            ppvVar1 = ExceptionList;
          }
          else {
            uStack_2038 = 0x32;
            pcVar10 = (char *)FUN_005187c0();
            ppvVar1 = ExceptionList;
            if (*pcVar10 == '\0') {
              ui_command_dispatch();
              ppvVar1 = ExceptionList;
            }
          }
          break;
        case 0x1e0:
          ExceptionList = &local_10;
          FUN_004054a0();
          local_8 = 0x65;
          uStack_1f3c = 7000;
          FUN_004051c0();
          FUN_004021b0();
          while( true ) {
            uStack_1f40 = 7000;
            FUN_004051c0();
            FUN_00402170();
            cVar2 = FUN_00426ed0();
            if (cVar2 == '\0') break;
            FUN_0044ddc0();
            cVar2 = FUN_00427c60();
            if (cVar2 != '\0') {
              FUN_0044ddc0();
              FUN_0040d840();
              break;
            }
            FUN_00489b50();
          }
          cVar2 = FUN_00427c60();
          if (cVar2 == '\0') {
            puStack_2698 = (undefined1 *)&pfStack_2b9c;
            pfStack_2ba0 = afStack_81c;
            pcStack_2ba4 = (char *)0x6944eb;
            FUN_00405520();
            pfStack_2ba0 = (function<void___cdecl(void)> *)0x6944f0;
            cStack_1a96 = FUN_00682c10();
            if (cStack_1a96 == '\0') {
              puStack_2b98 = (undefined4 *)0xa;
              puStack_269c = (undefined1 *)apfStack_2bb0;
              puStack_2bb4 = (undefined4 *)&DAT_00774c4c;
              puStack_2bb8 = (undefined *)0x694523;
              FUN_004054a0();
              puStack_2bb4 = (undefined4 *)0x694528;
              FUN_006634f0();
            }
            else {
              uStack_1c98 = 0;
              uStack_1f44 = 0x514;
              uStack_1dc0 = FUN_004051c0();
              piStack_1c04 = (int *)FUN_004018d0();
              piStack_1f48 = (int *)FUN_004018b0();
              for (; piStack_1c04 != piStack_1f48; piStack_1c04 = piStack_1c04 + 1) {
                piStack_1dc4 = piStack_1c04;
                if (*(char *)(*piStack_1c04 + 0x9a8) == '\x01') {
                  uStack_1c98 = *(undefined4 *)(*piStack_1c04 + 0x9a0);
                  break;
                }
              }
              pcStack_1c90 = (char *)FUN_0040d7f0();
              pcStack_26a0 = acStack_34;
              pcStack_1c00 = pcStack_26a0;
              do {
                cStack_1a2f = *pcStack_1c90;
                *pcStack_1c00 = cStack_1a2f;
                pcStack_1c90 = pcStack_1c90 + 1;
                pcStack_1c00 = pcStack_1c00 + 1;
              } while (cStack_1a2f != '\0');
              sStack_1bfc = 0x38;
              pvStack_1a48 = (void *)FUN_006f191d();
              if (pvStack_1a48 == (void *)0x0) {
                FUN_006425b0();
              }
              if (pvStack_1a48 != (void *)0x0) {
                _memset(pvStack_1a48,0,sStack_1bfc);
              }
              iStack_1a14 = 0;
              iVar14 = FUN_006a34a0();
              iStack_1a14 = iVar14 + iStack_1a14;
              iVar14 = FUN_006a34a0();
              iStack_1a14 = iVar14 + iStack_1a14;
              iVar14 = FUN_006a34d0();
              iStack_1a14 = iVar14 + iStack_1a14;
              iVar14 = FUN_006a34d0();
              iStack_1a14 = iVar14 + iStack_1a14;
              iVar14 = FUN_006a34a0();
              iStack_1a14 = iVar14 + iStack_1a14;
              uStack_26a4 = FUN_006a31b0();
              FUN_006f1902();
              do {
                iStack_1c8c = FUN_004f27a0();
                if ((iStack_1c8c == 0x32) || (iStack_1c8c == 0x33)) break;
              } while (iStack_1c8c != 0x35);
            }
          }
          else {
            puStack_2b98 = (undefined4 *)0xa;
            puStack_2694 = (undefined1 *)apfStack_2bb0;
            puStack_2bb4 = (undefined4 *)&DAT_00774c6c;
            puStack_2bb8 = (undefined *)0x6944c7;
            FUN_004054a0();
            puStack_2bb4 = (undefined4 *)0x6944cc;
            FUN_006634f0();
          }
          local_8 = 0xffffffff;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_81c);
          ppvVar1 = ExceptionList;
          break;
        case 0x1ea:
          ExceptionList = &local_10;
          FUN_006a3f10();
          FUN_004f2720();
          ppvVar1 = ExceptionList;
          break;
        case 500:
          uStack_1b14 = 0;
          ExceptionList = &local_10;
          while( true ) {
            uStack_1f4c = 7000;
            FUN_004051c0();
            uVar4 = FUN_00401a90();
            ppvVar1 = ExceptionList;
            if (uVar4 <= uStack_1b14) break;
            uStack_1f50 = 7000;
            FUN_004051c0();
            FUN_00401a70();
            cVar2 = FUN_00427c60();
            if (cVar2 != '\0') {
              uStack_1f54 = 7000;
              FUN_004051c0();
              piVar5 = (int *)FUN_00401a70();
              iStack_1a1c = *piVar5;
              ppvVar1 = ExceptionList;
              if ((*(int *)(iStack_1a1c + 0xb04) < *(int *)(iStack_1a1c + 0xb00)) &&
                 (*(int *)(iStack_1a1c + 0xb00) != 0)) {
                *(int *)(iStack_1a1c + 0xb04) = *(int *)(iStack_1a1c + 0xb04) + 1;
                uStack_1a4c = 0;
                while (uVar4 = FUN_00427230(), ppvVar1 = ExceptionList, uStack_1a4c < uVar4) {
                  iVar14 = FUN_00427200();
                  piStack_1c9c = (int *)(iVar14 + 8);
                  iVar14 = FUN_00427200();
                  iVar6 = FUN_00427200();
                  *piStack_1c9c = *piStack_1c9c - (*(int *)(iVar14 + 0x30) + *(int *)(iVar6 + 0x50))
                  ;
                  if ((uStack_1a4c < *(uint *)(iStack_1a1c + 0xb04)) ||
                     (*(int *)(iStack_1a1c + 0xb04) + 0xeU <= uStack_1a4c)) {
                    puVar9 = (undefined1 *)FUN_00427200();
                    *puVar9 = 0;
                  }
                  else {
                    puVar9 = (undefined1 *)FUN_00427200();
                    *puVar9 = 1;
                  }
                  uStack_1a4c = uStack_1a4c + 1;
                }
              }
              break;
            }
            uStack_1b14 = uStack_1b14 + 1;
          }
          break;
        case 0x1fe:
          uStack_1b10 = 0;
          ExceptionList = &local_10;
          while( true ) {
            uStack_1f58 = 7000;
            FUN_004051c0();
            uVar4 = FUN_00401a90();
            ppvVar1 = ExceptionList;
            if (uVar4 <= uStack_1b10) break;
            uStack_1f5c = 7000;
            FUN_004051c0();
            FUN_00401a70();
            cVar2 = FUN_00427c60();
            if (cVar2 != '\0') {
              uStack_1f60 = 7000;
              FUN_004051c0();
              piVar5 = (int *)FUN_00401a70();
              iStack_1a20 = *piVar5;
              ppvVar1 = ExceptionList;
              if ((0 < *(int *)(iStack_1a20 + 0xb04)) && (*(int *)(iStack_1a20 + 0xb00) != 0)) {
                *(int *)(iStack_1a20 + 0xb04) = *(int *)(iStack_1a20 + 0xb04) + -1;
                uStack_1a50 = 0;
                while (uVar4 = FUN_00427230(), ppvVar1 = ExceptionList, uStack_1a50 < uVar4) {
                  iVar14 = FUN_00427200();
                  piStack_1ca0 = (int *)(iVar14 + 8);
                  iVar14 = FUN_00427200();
                  iVar6 = FUN_00427200();
                  *piStack_1ca0 = *(int *)(iVar14 + 0x30) + *(int *)(iVar6 + 0x50) + *piStack_1ca0;
                  if ((uStack_1a50 < *(uint *)(iStack_1a20 + 0xb04)) ||
                     (*(int *)(iStack_1a20 + 0xb04) + 0xeU <= uStack_1a50)) {
                    puVar9 = (undefined1 *)FUN_00427200();
                    *puVar9 = 0;
                  }
                  else {
                    puVar9 = (undefined1 *)FUN_00427200();
                    *puVar9 = 1;
                  }
                  uStack_1a50 = uStack_1a50 + 1;
                }
              }
              break;
            }
            uStack_1b10 = uStack_1b10 + 1;
          }
          break;
        case 0x208:
          DAT_007ca224 = *(undefined4 *)(ui_ctx + 0x9a0);
          uStack_1f64 = 0x44c;
          ExceptionList = &local_10;
          FUN_004051c0();
          FUN_004021b0();
          while( true ) {
            uStack_1f68 = 0x44c;
            FUN_004051c0();
            FUN_00402170();
            cVar2 = FUN_00426ed0();
            if (cVar2 == '\0') break;
            FUN_0044ddc0();
            iVar14 = FUN_0040d4b0();
            *(undefined4 *)(iVar14 + 0x90) = 0;
            piVar5 = (int *)FUN_0044ddc0();
            *(undefined4 *)(*piVar5 + 0x8dc) = 0;
            FUN_00489b50();
          }
          uStack_1f6c = 0x44c;
          FUN_004051c0();
          FUN_00401a70();
          iVar14 = FUN_0040d4b0();
          *(undefined4 *)(iVar14 + 0x90) = 1;
          uStack_1f70 = 0x44c;
          FUN_004051c0();
          piVar5 = (int *)FUN_00401a70();
          *(undefined4 *)(*piVar5 + 0x8dc) = 1;
          ppvVar1 = ExceptionList;
          break;
        case 0x212:
          DAT_007ca224 = *(undefined4 *)(ui_ctx + 0x9a0);
          ExceptionList = &local_10;
          ui_command_dispatch();
          ppvVar1 = ExceptionList;
          break;
        case 0x21c:
          iStack_1bf0 = ui_ctx;
          uStack_1f74 = 0x4b0;
          ExceptionList = &local_10;
          uStack_1ca4 = FUN_004051c0();
          piStack_1bf4 = (int *)FUN_004018d0();
          piStack_1f78 = (int *)FUN_004018b0();
          for (; piStack_1bf4 != piStack_1f78; piStack_1bf4 = piStack_1bf4 + 1) {
            piStack_1c88 = piStack_1bf4;
            if (*(int *)(*piStack_1bf4 + 0x9a0) == *(int *)(iStack_1bf0 + 0x9a0)) {
              *(undefined1 *)(*piStack_1bf4 + 0x9a8) = 1;
            }
            else {
              *(undefined1 *)(*piStack_1bf4 + 0x9a8) = 0;
            }
          }
          uStack_1f7c = 0x4b0;
          FUN_004051c0();
          FUN_004021b0();
          while( true ) {
            uStack_1f80 = 0x4b0;
            FUN_004051c0();
            FUN_00402170();
            cVar2 = FUN_00426ed0();
            if (cVar2 == '\0') break;
            FUN_0044ddc0();
            iVar14 = FUN_0040d4b0();
            *(undefined4 *)(iVar14 + 0x90) = 0;
            FUN_0044ddc0();
            iVar14 = FUN_0040d4b0();
            *(undefined4 *)(iVar14 + 0x90) = 0;
            FUN_0044ddc0();
            iVar14 = FUN_0040d4b0();
            *(undefined4 *)(iVar14 + 0x90) = 0;
            FUN_0044ddc0();
            iVar14 = FUN_0040d4b0();
            *(undefined4 *)(iVar14 + 0x90) = 0;
            FUN_00489b50();
          }
          uStack_1f84 = 0x4b0;
          FUN_004051c0();
          FUN_00401a70();
          iVar14 = FUN_0040d4b0();
          *(undefined4 *)(iVar14 + 0x90) = 1;
          uStack_1f88 = 0x4b0;
          FUN_004051c0();
          FUN_00401a70();
          iVar14 = FUN_0040d4b0();
          *(undefined4 *)(iVar14 + 0x90) = 1;
          uStack_1f8c = 0x4b0;
          FUN_004051c0();
          FUN_00401a70();
          iVar14 = FUN_0040d4b0();
          *(undefined4 *)(iVar14 + 0x90) = 1;
          ppvVar1 = ExceptionList;
          break;
        case 0x226:
          iStack_1be8 = ui_ctx;
          uStack_1f90 = 0x4b0;
          ExceptionList = &local_10;
          uStack_1ca8 = FUN_004051c0();
          piStack_1bec = (int *)FUN_004018d0();
          piStack_1f94 = (int *)FUN_004018b0();
          for (; piStack_1bec != piStack_1f94; piStack_1bec = piStack_1bec + 1) {
            piStack_1c84 = piStack_1bec;
            if (*(int *)(*piStack_1bec + 0x9a0) == *(int *)(iStack_1be8 + 0x9a0)) {
              *(undefined1 *)(*piStack_1bec + 0x9a8) = 1;
            }
            else {
              *(undefined1 *)(*piStack_1bec + 0x9a8) = 0;
            }
          }
          uStack_1f98 = 0x4b0;
          FUN_004051c0();
          FUN_004021b0();
          while( true ) {
            uStack_1f9c = 0x4b0;
            FUN_004051c0();
            FUN_00402170();
            cVar2 = FUN_00426ed0();
            if (cVar2 == '\0') break;
            FUN_0044ddc0();
            iVar14 = FUN_0040d4b0();
            *(undefined4 *)(iVar14 + 0x90) = 0;
            FUN_0044ddc0();
            iVar14 = FUN_0040d4b0();
            *(undefined4 *)(iVar14 + 0x90) = 0;
            FUN_0044ddc0();
            iVar14 = FUN_0040d4b0();
            *(undefined4 *)(iVar14 + 0x90) = 0;
            FUN_0044ddc0();
            iVar14 = FUN_0040d4b0();
            *(undefined4 *)(iVar14 + 0x90) = 0;
            FUN_00489b50();
          }
          uStack_1fa0 = 0x4b0;
          FUN_004051c0();
          FUN_00401a70();
          iVar14 = FUN_0040d4b0();
          *(undefined4 *)(iVar14 + 0x90) = 1;
          uStack_1fa4 = 0x4b0;
          FUN_004051c0();
          FUN_00401a70();
          iVar14 = FUN_0040d4b0();
          *(undefined4 *)(iVar14 + 0x90) = 1;
          uStack_1fa8 = 0x4b0;
          FUN_004051c0();
          FUN_00401a70();
          iVar14 = FUN_0040d4b0();
          *(undefined4 *)(iVar14 + 0x90) = 1;
          ui_command_dispatch();
          ppvVar1 = ExceptionList;
          break;
        case 0x282:
          iStack_2044 = ui_ctx;
          iStack_1b00 = *(int *)(ui_ctx + 0x9d0);
          if (iStack_1b00 == 0) {
            return;
          }
          ExceptionList = &local_10;
          FUN_00642750();
          FUN_0040d5c0();
          piVar5 = (int *)FUN_00401a70();
          if (*(int *)(iStack_1b00 + 0x10) != *piVar5) {
            ExceptionList = local_10;
            return;
          }
          iStack_1cec = *(int *)(iStack_1b00 + 0x9d0);
          if (*(int *)(iStack_1cec + 4) < 1) {
            ExceptionList = local_10;
            return;
          }
          FUN_0040a880();
          local_8 = 0x77;
          uStack_15bc = *(undefined4 *)(iStack_1cec + 4);
          uStack_15b8 = 1;
          FUN_00454ea0();
          puStack_2b98 = (undefined4 *)0x697041;
          FUN_0067f8c0();
          FUN_00454ea0();
          FUN_006a3c30();
          FUN_00454ea0();
          FUN_00454ea0();
          FUN_00457890();
          for (iStack_1a68 = 0; iStack_1a68 < 5; iStack_1a68 = iStack_1a68 + 1) {
            uStack_1ad8 = 0;
            if (iStack_1a68 == 0) {
              uStack_1ad8 = 0x64a;
            }
            else if (iStack_1a68 == 1) {
              uStack_1ad8 = 0x654;
            }
            else if (iStack_1a68 == 2) {
              uStack_1ad8 = 0x65e;
            }
            else if (iStack_1a68 == 3) {
              uStack_1ad8 = 0x668;
            }
            else if (iStack_1a68 == 4) {
              uStack_1ad8 = 0x672;
            }
            for (uStack_1afc = 0; uStack_1afc < 0x2a; uStack_1afc = uStack_1afc + 1) {
              FUN_00454ea0();
              FUN_004273a0();
              FUN_00405270();
              FUN_00426f10();
              FUN_00401a70();
              FUN_00454ea0();
              FUN_006cd5d0();
            }
          }
          for (uStack_1af8 = 0; uStack_1af8 < 6; uStack_1af8 = uStack_1af8 + 1) {
            uStack_2048 = 0x640;
            FUN_00454ea0();
            FUN_00405270();
            FUN_004051c0();
            FUN_00401a70();
            FUN_00454ea0();
            FUN_006cd5d0();
          }
          uStack_204c = 0xce4;
          puStack_2754 = (undefined1 *)&pfStack_2b9c;
          pfStack_2ba0 = (function<void___cdecl(void)> *)&DAT_00775f6c;
          pcStack_2ba4 = (char *)0x697225;
          uStack_2758 = FUN_004054a0();
          local_8._0_1_ = 0x78;
          pfStack_2ba0 = (function<void___cdecl(void)> *)&uStack_204c;
          pcStack_2ba4 = (char *)0x697240;
          pfStack_2ba0 = (function<void___cdecl(void)> *)FUN_004051c0();
          local_8._0_1_ = 0x77;
          pcStack_2ba4 = (char *)0x69724a;
          iStack_2050 = ui_find_widget_by_key();
          if (iStack_2050 != 0) {
            uStack_2054 = 0xce4;
            puStack_275c = (undefined1 *)&pfStack_2b9c;
            pfStack_2ba0 = (function<void___cdecl(void)> *)&DAT_0077601c;
            pcStack_2ba4 = (char *)0x69727b;
            uStack_2760 = FUN_004054a0();
            local_8._0_1_ = 0x79;
            pfStack_2ba0 = (function<void___cdecl(void)> *)&uStack_2054;
            pcStack_2ba4 = (char *)0x697296;
            pfStack_2ba0 = (function<void___cdecl(void)> *)FUN_004051c0();
            local_8._0_1_ = 0x77;
            pcStack_2ba4 = (char *)0x6972a0;
            uStack_2058 = ui_find_widget_by_key();
            FUN_00454ea0();
            FUN_00629db0();
          }
          uStack_205c = 0x28a;
          puStack_2764 = (undefined1 *)&pfStack_2b9c;
          pfStack_2ba0 = (function<void___cdecl(void)> *)&DAT_00776018;
          pcStack_2ba4 = (char *)0x6972e3;
          uStack_2768 = FUN_004054a0();
          local_8._0_1_ = 0x7a;
          pfStack_2ba0 = (function<void___cdecl(void)> *)&uStack_205c;
          pcStack_2ba4 = (char *)0x6972f9;
          FUN_004d1bb0();
          pcStack_2ba4 = (char *)0x697300;
          pfStack_2ba0 = (function<void___cdecl(void)> *)FUN_004051c0();
          local_8._0_1_ = 0x77;
          pcStack_2ba4 = (char *)0x69730a;
          iStack_2060 = ui_find_widget_by_key();
          if (iStack_2060 != 0) {
            uStack_2064 = 0x28a;
            puStack_276c = (undefined1 *)&pfStack_2b9c;
            pfStack_2ba0 = (function<void___cdecl(void)> *)&DAT_00776014;
            pcStack_2ba4 = (char *)0x69733b;
            uStack_2770 = FUN_004054a0();
            local_8._0_1_ = 0x7b;
            pfStack_2ba0 = (function<void___cdecl(void)> *)&uStack_2064;
            pcStack_2ba4 = (char *)0x697351;
            FUN_004d1bb0();
            pcStack_2ba4 = (char *)0x697358;
            pfStack_2ba0 = (function<void___cdecl(void)> *)FUN_004051c0();
            local_8 = CONCAT31(local_8._1_3_,0x77);
            pcStack_2ba4 = (char *)0x697362;
            iStack_2068 = ui_find_widget_by_key();
            iVar14 = FUN_00454ea0();
            *(undefined4 *)(iStack_2068 + 0xa28) = *(undefined4 *)(iVar14 + 0xac4);
          }
          local_8 = 0xffffffff;
          FUN_004039a0();
          ppvVar1 = ExceptionList;
        }
      }
    }
    else if (command_id < 0x38f) {
      if (command_id == 0x38e) {
        local_1b48 = ui_ctx;
        local_1ae8 = *(int *)(ui_ctx + 0x9d0);
        if (local_1ae8 == 0) {
          return;
        }
        local_1ac4 = *(int *)(local_1ae8 + 0x9d0);
        ExceptionList = &local_10;
        FUN_00454ea0();
        iVar14 = FUN_00405270();
        if (local_1ac4 == iVar14) {
          FUN_00454ea0();
          cVar2 = FUN_0067e9b0();
          if (cVar2 == '\0') {
            ExceptionList = local_10;
            return;
          }
          FUN_00454ea0();
          FUN_00454ea0();
          FUN_00680fb0();
        }
        else {
          FUN_00642750();
          FUN_0040d5c0();
          piVar5 = (int *)FUN_00401a70();
          if (*(int *)(local_1ae8 + 0x10) != *piVar5) {
            ExceptionList = local_10;
            return;
          }
          iVar14 = FUN_006caba0();
          if (iVar14 == 0x8e) {
            FUN_00454ea0();
            cVar2 = FUN_0067e9f0();
            if (cVar2 == '\0') {
              ExceptionList = local_10;
              return;
            }
            FUN_0040a880();
            local_8 = 0x7e;
            local_18a0 = *(undefined4 *)(local_1ac4 + 4);
            local_189c = *(undefined4 *)(local_1b48 + 0x9a0);
            FUN_00454ea0();
            puStack_2b98 = (undefined4 *)0x697bc0;
            FUN_0067f8c0();
            local_8 = 0xffffffff;
            FUN_004039a0();
          }
          else {
            iVar14 = FUN_006caba0();
            if (iVar14 == 0x71) {
              cVar2 = FUN_0067e9d0();
              if (cVar2 == '\0') {
                ExceptionList = local_10;
                return;
              }
              FUN_00454ea0();
              puStack_2b98 = (undefined4 *)0x697c20;
              FUN_0067f8c0();
            }
          }
        }
        local_2090 = 0x38;
        local_2094 = 0x38;
        FUN_004051c0();
        ui_register_or_show_widget();
        FUN_004051c0();
        ui_activate_widget_pair();
        ppvVar1 = ExceptionList;
      }
      else if (command_id == 0x36d) {
        local_25c0 = ui_ctx;
        ExceptionList = &local_10;
        FUN_00405520();
        local_8 = 0x50;
        FUN_004054a0();
        local_8._0_1_ = 0x51;
        local_1d88 = FUN_004277a0();
        if (local_1d88 != -1) {
          FUN_00410b30();
          FUN_00427800();
        }
        local_1b50 = 0;
        while( true ) {
          local_25c4 = 7000;
          FUN_004051c0();
          uVar4 = FUN_00401a90();
          if (uVar4 <= local_1b50) break;
          local_25c8 = 7000;
          FUN_004051c0();
          piVar5 = (int *)FUN_00401a70();
          local_1a3c = *piVar5;
          local_25d0 = FUN_004054a0();
          local_8._0_1_ = 0x52;
          local_25cc = local_25d0;
          local_25d4 = FUN_00427c80();
          local_1a9c = destroy<>();
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_c3c);
          local_8._0_1_ = 0x51;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_d2c);
          if (((local_1a9c != '\0') && (*(int *)(local_1a3c + 0xb04) < *(int *)(local_1a3c + 0xb00))
              ) && (*(int *)(local_1a3c + 0xb00) != 1)) {
            *(int *)(local_1a3c + 0xb04) = *(int *)(local_1a3c + 0xb04) + 1;
            local_25d8 = FUN_0040a850();
            local_8._0_1_ = 0x53;
            local_1df4 = local_25d8;
            local_25dc = FUN_004054a0();
            local_8._0_1_ = 0x54;
            local_1de8 = local_25dc;
            local_1dec = FUN_0040a850();
            local_8._0_1_ = 0x55;
            local_1de4 = local_1dec;
            local_1df8 = FUN_00405cf0();
            local_8._0_1_ = 0x56;
            local_1df0 = local_1df8;
            local_1dfc = FUN_00405cf0();
            FUN_004053e0();
            std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_d14);
            local_8._0_1_ = 0x55;
            std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_cfc);
            local_8._0_1_ = 0x54;
            std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_ce4);
            local_8._0_1_ = 0x53;
            std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_ccc);
            local_8._0_1_ = 0x51;
            std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_aa4);
            CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(local_1a3c + 0xa3c));
            local_1e04 = 7000;
            local_2a8c = &pcStack_2ba8;
            apfStack_2bb0[1] = local_804;
            apfStack_2bb0[0] = (function<void___cdecl(void)> *)0x691cfd;
            FUN_00405520();
            apfStack_2bb0[1] = (function<void___cdecl(void)> *)0x691d02;
            local_1e00 = FUN_006ce090();
            local_2a90 = apfStack_2bb0 + 1;
            apfStack_2bb0[0] = local_804;
            puStack_2bb4 = (undefined4 *)0x691d29;
            local_2a94 = FUN_00405520();
            local_8._0_1_ = 0x57;
            apfStack_2bb0[0] = (function<void___cdecl(void)> *)0x1;
            puStack_2bb4 = &local_1e04;
            puStack_2bb8 = (undefined *)0x691d46;
            puStack_2bb4 = (undefined4 *)FUN_004051c0();
            local_8._0_1_ = 0x51;
            puStack_2bb8 = (undefined *)0x691d50;
            FUN_00622460();
            break;
          }
          local_1b50 = local_1b50 + 1;
        }
        ppfVar15 = apfStack_2bb0;
        puVar3 = &DAT_007ca70c;
        for (iVar14 = 8; ppfVar15 = (function<void___cdecl(void)> **)((int)ppfVar15 + 4),
            iVar14 != 0; iVar14 = iVar14 + -1) {
          *ppfVar15 = (function<void___cdecl(void)> *)*puVar3;
          puVar3 = puVar3 + 1;
        }
        apfStack_2bb0[0] = (function<void___cdecl(void)> *)0x691d7e;
        FUN_0065e180();
        local_8 = CONCAT31(local_8._1_3_,0x50);
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_864);
        local_8 = 0xffffffff;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_804);
        ppvVar1 = ExceptionList;
      }
    }
    else {
            /* switch range base 0x398 */
      local_19dc = command_id + -0x398;
      switch(command_id) {
      case 0x398:
        iStack_1cfc = ui_ctx;
        if (ui_ctx == 0) {
          return;
        }
        uStack_1c70 = *(undefined4 *)(ui_ctx + 0x9a0);
        ExceptionList = &local_10;
        FUN_00454ea0();
        uStack_1a70 = FUN_006c7f40();
        FUN_00454ea0();
        uStack_20a0 = FUN_006c81d0();
        FUN_00454ea0();
        uStack_20a4 = FUN_006c84c0();
        do {
          cStack_1a0f = '\x01';
          uStack_1a6c = 0;
          while (iVar14 = FUN_004274a0(), uStack_1a6c < iVar14 - 1U) {
            iVar14 = FUN_00405270();
            if (*(int *)(iVar14 + 4) == 0) {
              iStack_1d00 = 0x7fffffff;
            }
            else {
              iVar14 = FUN_00405270();
              iStack_1d00 = *(int *)(iVar14 + 4);
            }
            iStack_2098 = iStack_1d00;
            iVar14 = FUN_00405270();
            if (*(int *)(iVar14 + 4) == 0) {
              iStack_1d04 = 0x7fffffff;
            }
            else {
              iVar14 = FUN_00405270();
              iStack_1d04 = *(int *)(iVar14 + 4);
            }
            iStack_209c = iStack_1d04;
            if (iStack_1d04 < iStack_2098) {
              FUN_00405270();
              FUN_00405270();
              FUN_006a01b0();
              cStack_1a0f = '\0';
            }
            uStack_1a6c = uStack_1a6c + 1;
          }
        } while (cStack_1a0f == '\0');
        uStack_1b44 = 0;
        while (uVar4 = FUN_004274a0(), uStack_1b44 < uVar4) {
          FUN_00405270();
          FUN_00401a70();
          FUN_00454ea0();
          FUN_006cdee0();
          uStack_1b44 = uStack_1b44 + 1;
        }
        FUN_00454ea0();
        FUN_006a50c0();
        ppvVar1 = ExceptionList;
        break;
      case 0x39b:
        iStack_2078 = ui_ctx;
        iStack_1af4 = *(int *)(ui_ctx + 0x9d0);
        if (iStack_1af4 == 0) {
          return;
        }
        ExceptionList = &local_10;
        FUN_00642750();
        FUN_0040d5c0();
        piVar5 = (int *)FUN_00401a70();
        if (*(int *)(iStack_1af4 + 0x10) != *piVar5) {
          ExceptionList = local_10;
          return;
        }
        uStack_1c74 = *(undefined4 *)(iStack_1af4 + 0x9d0);
        FUN_005e9240();
        iStack_207c = FUN_005cc840();
        cVar2 = FUN_0067e9d0();
        if (cVar2 == '\0') {
          ExceptionList = local_10;
          return;
        }
        FUN_00454ea0();
        puStack_2b98 = (undefined4 *)0x69757e;
        FUN_0067f8c0();
        FUN_0040a880();
        local_8 = 0x7c;
        uStack_11b0 = *(undefined4 *)(iStack_207c + 0x174);
        uStack_11a8 = 1;
        uStack_11ac = 0;
        uStack_11a0 = 1;
        uStack_1194 = 100;
        FUN_00454ea0();
        puStack_2b98 = (undefined4 *)0x6975e3;
        FUN_0067f8c0();
        uStack_2080 = 0x38;
        uStack_2084 = 0x38;
        FUN_004051c0();
        ui_register_or_show_widget();
        FUN_004051c0();
        ui_activate_widget_pair();
        local_8 = 0xffffffff;
        FUN_004039a0();
        ppvVar1 = ExceptionList;
        break;
      case 0x39c:
        iStack_206c = ui_ctx;
        iStack_1abc = *(int *)(ui_ctx + 0x9d0);
        if (iStack_1abc == 0) {
          return;
        }
        ExceptionList = &local_10;
        FUN_00642750();
        FUN_0040d5c0();
        piVar5 = (int *)FUN_00401a70();
        if (*(int *)(iStack_1abc + 0x10) != *piVar5) {
          ExceptionList = local_10;
          return;
        }
        iStack_1cf0 = *(int *)(iStack_1abc + 0x9d0);
        *(undefined4 *)(iStack_1cf0 + 0x14) = 1;
        FUN_00454ea0();
        FUN_006cdee0();
        uStack_2070 = 0x38;
        uStack_2074 = 0x38;
        FUN_004051c0();
        ui_register_or_show_widget();
        FUN_004051c0();
        ui_activate_widget_pair();
        FUN_00454ea0();
        FUN_0065c5f0();
        ppvVar1 = ExceptionList;
        break;
      case 0x3b1:
        uStack_203c = 0x1644;
        ExceptionList = &local_10;
        FUN_004051c0();
        ui_close_matching_widgets();
        uStack_2040 = 0x15e0;
        FUN_004051c0();
        ui_close_matching_widgets();
        ppvVar1 = ExceptionList;
        break;
      case 0x456:
        if (*(char *)(DAT_007ca1dc + 0xdb8) == '\0') {
          ExceptionList = &local_10;
          iVar14 = FUN_00454ea0();
          if (*(char *)(iVar14 + 0xdb8) == '\0') {
            FUN_00454ea0();
            FUN_006a3c30();
            puStack_2b98 = (undefined4 *)0xa;
            puStack_2788 = (undefined1 *)apfStack_2bb0;
            puStack_2bb4 = (undefined4 *)&DAT_007760d4;
            puStack_2bb8 = (undefined *)0x698023;
            FUN_004054a0();
            puStack_2bb4 = (undefined4 *)0x698028;
            FUN_006634f0();
            ppvVar1 = ExceptionList;
          }
          else {
            iVar14 = FUN_00454ea0();
            if (*(char *)(iVar14 + 0xdb9) == '\0') {
              FUN_00454ea0();
              FUN_006a3c30();
              puStack_2b98 = (undefined4 *)0xa;
              puStack_2784 = (undefined1 *)apfStack_2bb0;
              puStack_2bb4 = (undefined4 *)&DAT_0077602c;
              puStack_2bb8 = (undefined *)0x697fda;
              FUN_004054a0();
              puStack_2bb4 = (undefined4 *)0x697fdf;
              FUN_006634f0();
              ppvVar1 = ExceptionList;
            }
            else {
              iVar14 = FUN_00454ea0();
              if (*(int *)(iVar14 + 0xdc4) < 4) {
                FUN_00454ea0();
                FUN_006a3c30();
                puStack_2b98 = (undefined4 *)0xa;
                puStack_2780 = (undefined1 *)apfStack_2bb0;
                puStack_2bb4 = (undefined4 *)&DAT_0077603c;
                puStack_2bb8 = (undefined *)0x697f6e;
                FUN_004054a0();
                puStack_2bb4 = (undefined4 *)0x697f73;
                FUN_006634f0();
                uStack_20a8 = 0x1644;
                FUN_004051c0();
                ui_close_matching_widgets();
                ppvVar1 = ExceptionList;
              }
              else {
                puStack_2b98 = (undefined4 *)0xa;
                puStack_277c = (undefined1 *)apfStack_2bb0;
                puStack_2bb4 = (undefined4 *)&DAT_0077604c;
                puStack_2bb8 = (undefined *)0x697f26;
                FUN_004054a0();
                puStack_2bb4 = (undefined4 *)0x697f2b;
                FUN_006634f0();
                ppvVar1 = ExceptionList;
              }
            }
          }
        }
        else {
          puStack_2b98 = (undefined4 *)0xa;
          puStack_278c = (undefined1 *)apfStack_2bb0;
          puStack_2bb4 = (undefined4 *)&DAT_007760b4;
          puStack_2bb8 = (undefined *)0x69804c;
          ExceptionList = &local_10;
          FUN_004054a0();
          puStack_2bb4 = (undefined4 *)0x698051;
          FUN_006634f0();
          ppvVar1 = ExceptionList;
        }
        break;
      case 0x460:
        iStack_20ac = ui_ctx;
        ExceptionList = &local_10;
        FUN_00454ea0();
        FUN_006a3c30();
        uStack_20b0 = 0x38;
        uStack_20b4 = 0x38;
        FUN_004051c0();
        ui_register_or_show_widget();
        FUN_004051c0();
        ui_activate_widget_pair();
        ppvVar1 = ExceptionList;
        break;
      case 0x46a:
        iStack_20b8 = ui_ctx;
        ExceptionList = &local_10;
        FUN_006a3f10();
        uStack_20bc = 0x38;
        uStack_20c0 = 0x38;
        FUN_004051c0();
        ui_register_or_show_widget();
        FUN_004051c0();
        ui_activate_widget_pair();
        ppvVar1 = ExceptionList;
        break;
      case 0x474:
        if (*(char *)(DAT_007ca1dc + 0xdb8) == '\0') {
          puStack_2b98 = (undefined4 *)0xa;
          puStack_27a0 = (undefined1 *)apfStack_2bb0;
          puStack_2bb4 = (undefined4 *)&DAT_007760e4;
          puStack_2bb8 = (undefined *)0x69827d;
          ExceptionList = &local_10;
          FUN_004054a0();
          puStack_2bb4 = (undefined4 *)0x698282;
          FUN_006634f0();
          ppvVar1 = ExceptionList;
        }
        else {
          ExceptionList = &local_10;
          iVar14 = FUN_00454ea0();
          if (*(char *)(iVar14 + 0xdb8) == '\0') {
            if (*(int *)(DAT_007ca1dc + 0xdc4) < 4) {
              FUN_00454ea0();
              FUN_006a3c30();
              puStack_2b98 = (undefined4 *)0xa;
              puStack_2794 = (undefined1 *)apfStack_2bb0;
              puStack_2bb4 = (undefined4 *)&DAT_00776084;
              puStack_2bb8 = (undefined *)0x6981e9;
              FUN_004054a0();
              puStack_2bb4 = (undefined4 *)0x6981ee;
              FUN_006634f0();
              ppvVar1 = ExceptionList;
            }
            else {
              puStack_2b98 = (undefined4 *)0xa;
              puStack_2790 = (undefined1 *)apfStack_2bb0;
              puStack_2bb4 = (undefined4 *)&DAT_00776098;
              puStack_2bb8 = (undefined *)0x6981a0;
              FUN_004054a0();
              puStack_2bb4 = (undefined4 *)0x6981a5;
              FUN_006634f0();
              ppvVar1 = ExceptionList;
            }
          }
          else {
            iVar14 = FUN_00454ea0();
            if (*(int *)(iVar14 + 0xdbc) == *(int *)(DAT_007ca1dc + 0xdbc)) {
              puStack_2b98 = (undefined4 *)0xa;
              puStack_2798 = (undefined1 *)apfStack_2bb0;
              puStack_2bb4 = (undefined4 *)&DAT_00776148;
              puStack_2bb8 = (undefined *)0x69822b;
              FUN_004054a0();
              puStack_2bb4 = (undefined4 *)0x698230;
              FUN_006634f0();
              ppvVar1 = ExceptionList;
            }
            else {
              puStack_2b98 = (undefined4 *)0xa;
              puStack_279c = (undefined1 *)apfStack_2bb0;
              puStack_2bb4 = (undefined4 *)&DAT_00776118;
              puStack_2bb8 = (undefined *)0x698254;
              FUN_004054a0();
              puStack_2bb4 = (undefined4 *)0x698259;
              FUN_006634f0();
              ppvVar1 = ExceptionList;
            }
          }
        }
        break;
      case 0x47e:
        iStack_20c4 = ui_ctx;
        ExceptionList = &local_10;
        FUN_00454ea0();
        FUN_006a3c30();
        uStack_20c8 = 0x38;
        uStack_20cc = 0x38;
        FUN_004051c0();
        ui_register_or_show_widget();
        FUN_004051c0();
        ui_activate_widget_pair();
        ppvVar1 = ExceptionList;
        break;
      case 0x488:
        iStack_20d0 = ui_ctx;
        ExceptionList = &local_10;
        FUN_006a3f10();
        uStack_20d4 = 0x38;
        uStack_20d8 = 0x38;
        FUN_004051c0();
        ui_register_or_show_widget();
        FUN_004051c0();
        ui_activate_widget_pair();
        ppvVar1 = ExceptionList;
      }
    }
    goto LAB_0069e6d6;
  }
  if (0x636 < command_id) {
    if (command_id < 0xe11) {
      if (command_id == 0xe10) {
        ExceptionList = &local_10;
        iVar14 = FUN_00454ea0();
        iVar6 = FUN_00454ea0();
        if (*(int *)(iVar14 + 0x6e8) == *(int *)(iVar6 + 0x6e0)) {
          local_1f00 = 0x48;
          FUN_004051c0();
          ui_close_matching_widgets();
          ppvVar1 = ExceptionList;
        }
        else {
          iVar14 = FUN_00454ea0();
          FUN_00454ea0();
          iVar6 = FUN_00642760();
          if (*(int *)(iVar14 + 0xac8) < iVar6) {
            local_1f04 = 0x48;
            FUN_004051c0();
            ui_close_matching_widgets();
            puStack_2b98 = (undefined4 *)0xa;
            local_2640 = (undefined1 *)apfStack_2bb0;
            puStack_2bb4 = (undefined4 *)&DAT_00774aa0;
            puStack_2bb8 = (undefined *)0x693b45;
            FUN_004054a0();
            puStack_2bb4 = (undefined4 *)0x693b4a;
            FUN_006634f0();
            ppvVar1 = ExceptionList;
          }
          else {
            *(undefined1 *)(ui_ctx + 0x9a8) = 1;
            local_1a64 = FUN_00657510();
            FUN_004053a0();
            FUN_004053a0();
            FUN_0040d680();
            FUN_0040d840();
            *(undefined4 *)(local_1a64 + 0xad4) = 0;
            *(undefined4 *)(local_1a64 + 0xadc) = 0;
            *(undefined4 *)(local_1a64 + 0xad8) = 0;
            *(undefined4 *)(local_1a64 + 0xae8) = 6000;
            *(undefined4 *)(local_1a64 + 0xaec) = 3000;
            ppvVar1 = ExceptionList;
          }
        }
      }
      else if (command_id < 0xbb9) {
        if (command_id == 3000) {
          ExceptionList = &local_10;
          iVar14 = FUN_00454ea0();
          if (*(char *)(iVar14 + 0xdb8) == '\0') {
            piVar5 = (int *)FUN_004d1520();
            ppvVar1 = ExceptionList;
            if (((*(char *)(*piVar5 + 0xb0) == '\0') &&
                (piVar5 = (int *)FUN_004d1520(), ppvVar1 = ExceptionList,
                *(char *)(*piVar5 + 0xb1) == '\0')) &&
               (piVar5 = (int *)FUN_004d1520(), ppvVar1 = ExceptionList,
               *(char *)(*piVar5 + 0xb2) == '\0')) {
              local_1e08 = 0x32;
              FUN_004051c0();
              ui_clear_flag_bits_on_list();
              piVar5 = (int *)FUN_004d1520();
              *(undefined1 *)(*piVar5 + 0xb0) = 1;
              piVar5 = (int *)FUN_004d1520();
              if (*(char *)(*piVar5 + 0x9d4) == '\0') {
                local_1b28 = FUN_00657510();
                *(undefined4 *)(local_1b28 + 0xad4) = 0;
                *(undefined4 *)(local_1b28 + 0xadc) = 500;
                *(undefined4 *)(local_1b28 + 0xad8) = 500;
                *(undefined4 *)(local_1b28 + 0xae8) = 1;
                *(undefined4 *)(local_1b28 + 0xaec) = 1;
                ppvVar1 = ExceptionList;
              }
              else {
                local_1b2c = FUN_00657510();
                *(undefined4 *)(local_1b2c + 0xad4) = 1000;
                *(undefined4 *)(local_1b2c + 0xadc) = 1000;
                *(undefined4 *)(local_1b2c + 0xad8) = 1000;
                *(undefined4 *)(local_1b2c + 0xae8) = 500;
                *(undefined4 *)(local_1b2c + 0xaec) = 500;
                ppvVar1 = ExceptionList;
              }
            }
          }
          else {
            piVar5 = (int *)FUN_004d1520();
            ppvVar1 = ExceptionList;
            if (((*(char *)(*piVar5 + 0xb0) == '\0') &&
                (piVar5 = (int *)FUN_004d1520(), ppvVar1 = ExceptionList,
                *(char *)(*piVar5 + 0xb1) == '\0')) &&
               (piVar5 = (int *)FUN_004d1520(), ppvVar1 = ExceptionList,
               *(char *)(*piVar5 + 0xb2) == '\0')) {
              local_1e0c = 0x32;
              FUN_004051c0();
              ui_clear_flag_bits_on_list();
              piVar5 = (int *)FUN_004d1520();
              if (*(char *)(*piVar5 + 0x9d4) == '\0') {
                FUN_00454ea0();
                FUN_00454ea0();
                FUN_006a3c30();
                ppvVar1 = ExceptionList;
              }
              else {
                iVar14 = FUN_00454ea0();
                ppvVar1 = ExceptionList;
                if (*(char *)(iVar14 + 0xdb9) != '\0') {
                  FUN_00454ea0();
                  FUN_006a3f10();
                  ppvVar1 = ExceptionList;
                }
              }
            }
          }
        }
        else if (command_id < 0xafb) {
          if (command_id == 0xafa) {
            local_1a84 = ui_ctx;
            if ((*(int *)(ui_ctx + 0x5c) != 0) && (*(int *)(ui_ctx + 0x60) != 0)) {
              local_1a00 = '\0';
              local_24b0 = 0xe;
              local_2990 = (undefined1 *)&pfStack_2b9c;
              pfStack_2ba0 = (function<void___cdecl(void)> *)&DAT_00774878;
              pcStack_2ba4 = (char *)0x6909bb;
              ExceptionList = &local_10;
              local_2994 = FUN_004054a0();
              local_8 = 0x30;
              pfStack_2ba0 = (function<void___cdecl(void)> *)&local_24b0;
              pcStack_2ba4 = (char *)0x6909d9;
              pfStack_2ba0 = (function<void___cdecl(void)> *)FUN_004051c0();
              local_8 = 0xffffffff;
              pcStack_2ba4 = (char *)0x6909e6;
              local_24b4 = ui_find_widget_by_key();
              if (local_24b4 != 0) {
                local_24b8 = 0xe;
                local_2998 = (undefined1 *)&pfStack_2b9c;
                pfStack_2ba0 = (function<void___cdecl(void)> *)&DAT_00774870;
                pcStack_2ba4 = (char *)0x690a17;
                local_299c = FUN_004054a0();
                local_8 = 0x31;
                pfStack_2ba0 = (function<void___cdecl(void)> *)&local_24b8;
                pcStack_2ba4 = (char *)0x690a35;
                pfStack_2ba0 = (function<void___cdecl(void)> *)FUN_004051c0();
                local_8 = 0xffffffff;
                pcStack_2ba4 = (char *)0x690a42;
                local_24bc = ui_find_widget_by_key();
                if (*(char *)(local_24bc + 0x9a8) != '\0') {
                  local_1a00 = '\x01';
                }
              }
              local_24c0 = 0xe;
              local_29a0 = (undefined1 *)&pfStack_2b9c;
              pfStack_2ba0 = (function<void___cdecl(void)> *)&DAT_007748b0;
              pcStack_2ba4 = (char *)0x690a82;
              local_29a4 = FUN_004054a0();
              local_8 = 0x32;
              pfStack_2ba0 = (function<void___cdecl(void)> *)&local_24c0;
              pcStack_2ba4 = (char *)0x690aa0;
              pfStack_2ba0 = (function<void___cdecl(void)> *)FUN_004051c0();
              local_8 = 0xffffffff;
              pcStack_2ba4 = (char *)0x690aad;
              local_24c4 = ui_find_widget_by_key();
              if (local_24c4 != 0) {
                local_24c8 = 0xe;
                local_29a8 = (undefined1 *)&pfStack_2b9c;
                pfStack_2ba0 = (function<void___cdecl(void)> *)&DAT_007748a8;
                pcStack_2ba4 = (char *)0x690ade;
                local_29ac = FUN_004054a0();
                local_8 = 0x33;
                pfStack_2ba0 = (function<void___cdecl(void)> *)&local_24c8;
                pcStack_2ba4 = (char *)0x690afc;
                pfStack_2ba0 = (function<void___cdecl(void)> *)FUN_004051c0();
                local_8 = 0xffffffff;
                pcStack_2ba4 = (char *)0x690b09;
                local_24cc = ui_find_widget_by_key();
                if (*(char *)(local_24cc + 0x9a8) != '\0') {
                  local_1a00 = '\x01';
                }
              }
              local_24d0 = 0xe;
              local_29b0 = (undefined1 *)&pfStack_2b9c;
              pfStack_2ba0 = (function<void___cdecl(void)> *)&DAT_007748a0;
              pcStack_2ba4 = (char *)0x690b49;
              local_29b4 = FUN_004054a0();
              local_8 = 0x34;
              pfStack_2ba0 = (function<void___cdecl(void)> *)&local_24d0;
              pcStack_2ba4 = (char *)0x690b67;
              pfStack_2ba0 = (function<void___cdecl(void)> *)FUN_004051c0();
              local_8 = 0xffffffff;
              pcStack_2ba4 = (char *)0x690b74;
              local_24d4 = ui_find_widget_by_key();
              if (local_24d4 != 0) {
                local_24d8 = 0xe;
                local_29b8 = (undefined1 *)&pfStack_2b9c;
                pfStack_2ba0 = (function<void___cdecl(void)> *)&DAT_00774898;
                pcStack_2ba4 = (char *)0x690ba5;
                local_29bc = FUN_004054a0();
                local_8 = 0x35;
                pfStack_2ba0 = (function<void___cdecl(void)> *)&local_24d8;
                pcStack_2ba4 = (char *)0x690bc3;
                pfStack_2ba0 = (function<void___cdecl(void)> *)FUN_004051c0();
                local_8 = 0xffffffff;
                pcStack_2ba4 = (char *)0x690bd0;
                local_24dc = ui_find_widget_by_key();
                if (*(char *)(local_24dc + 0x9a8) != '\0') {
                  local_1a00 = '\x01';
                }
              }
              local_24e0 = 0xe;
              local_29c0 = (undefined1 *)&pfStack_2b9c;
              pfStack_2ba0 = (function<void___cdecl(void)> *)&DAT_007748d8;
              pcStack_2ba4 = (char *)0x690c10;
              local_29c4 = FUN_004054a0();
              local_8 = 0x36;
              pfStack_2ba0 = (function<void___cdecl(void)> *)&local_24e0;
              pcStack_2ba4 = (char *)0x690c2e;
              pfStack_2ba0 = (function<void___cdecl(void)> *)FUN_004051c0();
              local_8 = 0xffffffff;
              pcStack_2ba4 = (char *)0x690c3b;
              local_24e4 = ui_find_widget_by_key();
              if (local_24e4 != 0) {
                local_24e8 = 0xe;
                local_29c8 = (undefined1 *)&pfStack_2b9c;
                pfStack_2ba0 = (function<void___cdecl(void)> *)&DAT_007748d0;
                pcStack_2ba4 = (char *)0x690c6c;
                local_29cc = FUN_004054a0();
                local_8 = 0x37;
                pfStack_2ba0 = (function<void___cdecl(void)> *)&local_24e8;
                pcStack_2ba4 = (char *)0x690c8a;
                pfStack_2ba0 = (function<void___cdecl(void)> *)FUN_004051c0();
                local_8 = 0xffffffff;
                pcStack_2ba4 = (char *)0x690c97;
                local_24ec = ui_find_widget_by_key();
                if (*(char *)(local_24ec + 0x9a8) != '\0') {
                  local_1a00 = '\x01';
                }
              }
              ppvVar1 = ExceptionList;
              if (local_1a00 == '\0') {
                local_29d0 = (undefined1 *)&pfStack_2b9c;
                pfStack_2ba0 = (function<void___cdecl(void)> *)0x7748c0;
                pcStack_2ba4 = (char *)0x690cdc;
                FUN_004054a0();
                pfStack_2ba0 = (function<void___cdecl(void)> *)0x690ce1;
                FUN_004c3570();
                *(undefined1 *)(local_1a84 + 0x9a8) = 1;
                *(undefined4 *)(local_1a84 + 0x4c) = 0;
                *(undefined4 *)(local_1a84 + 0x8dc) = 0;
                uVar4 = FUN_0040d6a0();
                ppvVar1 = ExceptionList;
                if (1 < uVar4) {
                  FUN_00402170();
                  puVar3 = (undefined4 *)FUN_0069f180();
                  local_24f0 = *puVar3;
                  FUN_0069f720();
                  ppvVar1 = ExceptionList;
                }
              }
            }
          }
          else if (command_id == 0x637) {
            ExceptionList = &local_10;
            FUN_006a3f10();
            FUN_004f2720();
            ppvVar1 = ExceptionList;
          }
          else if (((command_id == 0xaf0) && (local_1a80 = ui_ctx, *(int *)(ui_ctx + 0x5c) != 0)) &&
                  (*(int *)(ui_ctx + 0x60) != 0)) {
            local_19fd = '\0';
            local_246c = 0xe;
            local_2940 = (undefined1 *)&pfStack_2b9c;
            pfStack_2ba0 = (function<void___cdecl(void)> *)&DAT_00774848;
            pcStack_2ba4 = (char *)0x6905ae;
            ExceptionList = &local_10;
            local_2944 = FUN_004054a0();
            local_8 = 0x28;
            pfStack_2ba0 = (function<void___cdecl(void)> *)&local_246c;
            pcStack_2ba4 = (char *)0x6905cc;
            pfStack_2ba0 = (function<void___cdecl(void)> *)FUN_004051c0();
            local_8 = 0xffffffff;
            pcStack_2ba4 = (char *)0x6905d9;
            local_2470 = ui_find_widget_by_key();
            if (local_2470 != 0) {
              local_2474 = 0xe;
              local_2948 = (undefined1 *)&pfStack_2b9c;
              pfStack_2ba0 = (function<void___cdecl(void)> *)&DAT_00774840;
              pcStack_2ba4 = (char *)0x69060a;
              local_294c = FUN_004054a0();
              local_8 = 0x29;
              pfStack_2ba0 = (function<void___cdecl(void)> *)&local_2474;
              pcStack_2ba4 = (char *)0x690628;
              pfStack_2ba0 = (function<void___cdecl(void)> *)FUN_004051c0();
              local_8 = 0xffffffff;
              pcStack_2ba4 = (char *)0x690635;
              local_2478 = ui_find_widget_by_key();
              if (*(char *)(local_2478 + 0x9a8) != '\0') {
                local_19fd = '\x01';
              }
            }
            local_247c = 0xe;
            local_2950 = (undefined1 *)&pfStack_2b9c;
            pfStack_2ba0 = (function<void___cdecl(void)> *)&DAT_00774838;
            pcStack_2ba4 = (char *)0x690675;
            local_2954 = FUN_004054a0();
            local_8 = 0x2a;
            pfStack_2ba0 = (function<void___cdecl(void)> *)&local_247c;
            pcStack_2ba4 = (char *)0x690693;
            pfStack_2ba0 = (function<void___cdecl(void)> *)FUN_004051c0();
            local_8 = 0xffffffff;
            pcStack_2ba4 = (char *)0x6906a0;
            local_2480 = ui_find_widget_by_key();
            if (local_2480 != 0) {
              local_2484 = 0xe;
              local_2958 = (undefined1 *)&pfStack_2b9c;
              pfStack_2ba0 = (function<void___cdecl(void)> *)&DAT_00774868;
              pcStack_2ba4 = (char *)0x6906d1;
              local_295c = FUN_004054a0();
              local_8 = 0x2b;
              pfStack_2ba0 = (function<void___cdecl(void)> *)&local_2484;
              pcStack_2ba4 = (char *)0x6906ef;
              pfStack_2ba0 = (function<void___cdecl(void)> *)FUN_004051c0();
              local_8 = 0xffffffff;
              pcStack_2ba4 = (char *)0x6906fc;
              local_2488 = ui_find_widget_by_key();
              if (*(char *)(local_2488 + 0x9a8) != '\0') {
                local_19fd = '\x01';
              }
            }
            local_248c = 0xe;
            local_2960 = (undefined1 *)&pfStack_2b9c;
            pfStack_2ba0 = (function<void___cdecl(void)> *)&DAT_00774860;
            pcStack_2ba4 = (char *)0x69073c;
            local_2964 = FUN_004054a0();
            local_8 = 0x2c;
            pfStack_2ba0 = (function<void___cdecl(void)> *)&local_248c;
            pcStack_2ba4 = (char *)0x69075a;
            pfStack_2ba0 = (function<void___cdecl(void)> *)FUN_004051c0();
            local_8 = 0xffffffff;
            pcStack_2ba4 = (char *)0x690767;
            local_2490 = ui_find_widget_by_key();
            if (local_2490 != 0) {
              local_2494 = 0xe;
              local_2968 = (undefined1 *)&pfStack_2b9c;
              pfStack_2ba0 = (function<void___cdecl(void)> *)&DAT_00774858;
              pcStack_2ba4 = (char *)0x690798;
              local_296c = FUN_004054a0();
              local_8 = 0x2d;
              pfStack_2ba0 = (function<void___cdecl(void)> *)&local_2494;
              pcStack_2ba4 = (char *)0x6907b6;
              pfStack_2ba0 = (function<void___cdecl(void)> *)FUN_004051c0();
              local_8 = 0xffffffff;
              pcStack_2ba4 = (char *)0x6907c3;
              local_2498 = ui_find_widget_by_key();
              if (*(char *)(local_2498 + 0x9a8) != '\0') {
                local_19fd = '\x01';
              }
            }
            local_249c = 0xe;
            local_2970 = (undefined1 *)&pfStack_2b9c;
            pfStack_2ba0 = (function<void___cdecl(void)> *)&DAT_00774850;
            pcStack_2ba4 = (char *)0x690803;
            local_2974 = FUN_004054a0();
            local_8 = 0x2e;
            pfStack_2ba0 = (function<void___cdecl(void)> *)&local_249c;
            pcStack_2ba4 = (char *)0x690821;
            pfStack_2ba0 = (function<void___cdecl(void)> *)FUN_004051c0();
            local_8 = 0xffffffff;
            pcStack_2ba4 = (char *)0x69082e;
            local_24a0 = ui_find_widget_by_key();
            if (local_24a0 != 0) {
              local_24a4 = 0xe;
              local_2978 = (undefined1 *)&pfStack_2b9c;
              pfStack_2ba0 = (function<void___cdecl(void)> *)&DAT_00774890;
              pcStack_2ba4 = (char *)0x69085f;
              local_297c = FUN_004054a0();
              local_8 = 0x2f;
              pfStack_2ba0 = (function<void___cdecl(void)> *)&local_24a4;
              pcStack_2ba4 = (char *)0x69087d;
              pfStack_2ba0 = (function<void___cdecl(void)> *)FUN_004051c0();
              local_8 = 0xffffffff;
              pcStack_2ba4 = (char *)0x69088a;
              local_24a8 = ui_find_widget_by_key();
              if (*(char *)(local_24a8 + 0x9a8) != '\0') {
                local_19fd = '\x01';
              }
            }
            ppvVar1 = ExceptionList;
            if (local_19fd == '\0') {
              local_2980 = (undefined1 *)&pfStack_2b9c;
              pfStack_2ba0 = (function<void___cdecl(void)> *)0x774880;
              pcStack_2ba4 = (char *)0x6908cf;
              FUN_004054a0();
              pfStack_2ba0 = (function<void___cdecl(void)> *)0x6908d4;
              FUN_004c3570();
              *(undefined1 *)(local_1a80 + 0x9a8) = 1;
              *(undefined4 *)(local_1a80 + 0x4c) = 0;
              *(undefined4 *)(local_1a80 + 0x8dc) = 0;
              uVar4 = FUN_0040d6a0();
              ppvVar1 = ExceptionList;
              if (1 < uVar4) {
                FUN_00402170();
                puVar3 = (undefined4 *)FUN_0069f180();
                local_24ac = *puVar3;
                FUN_0069f720();
                ppvVar1 = ExceptionList;
              }
            }
          }
        }
        else if (command_id == 0xb04) {
          local_1a74 = ui_ctx;
          if ((*(int *)(ui_ctx + 0x5c) != 0) && (*(int *)(ui_ctx + 0x60) != 0)) {
            local_19fe = '\0';
            local_24f4 = 0xe;
            local_29e0 = (undefined1 *)&pfStack_2b9c;
            pfStack_2ba0 = (function<void___cdecl(void)> *)&DAT_007748b8;
            pcStack_2ba4 = (char *)0x690dc8;
            ExceptionList = &local_10;
            local_29e4 = FUN_004054a0();
            local_8 = 0x38;
            pfStack_2ba0 = (function<void___cdecl(void)> *)&local_24f4;
            pcStack_2ba4 = (char *)0x690de6;
            pfStack_2ba0 = (function<void___cdecl(void)> *)FUN_004051c0();
            local_8 = 0xffffffff;
            pcStack_2ba4 = (char *)0x690df3;
            local_24f8 = ui_find_widget_by_key();
            if (local_24f8 != 0) {
              local_24fc = 0xe;
              local_29e8 = (undefined1 *)&pfStack_2b9c;
              pfStack_2ba0 = (function<void___cdecl(void)> *)&DAT_007748f8;
              pcStack_2ba4 = (char *)0x690e24;
              local_29ec = FUN_004054a0();
              local_8 = 0x39;
              pfStack_2ba0 = (function<void___cdecl(void)> *)&local_24fc;
              pcStack_2ba4 = (char *)0x690e42;
              pfStack_2ba0 = (function<void___cdecl(void)> *)FUN_004051c0();
              local_8 = 0xffffffff;
              pcStack_2ba4 = (char *)0x690e4f;
              local_2500 = ui_find_widget_by_key();
              if (*(char *)(local_2500 + 0x9a8) != '\0') {
                local_19fe = '\x01';
              }
            }
            local_2504 = 0xe;
            local_29f0 = (undefined1 *)&pfStack_2b9c;
            pfStack_2ba0 = (function<void___cdecl(void)> *)&DAT_007748f0;
            pcStack_2ba4 = (char *)0x690e8f;
            local_29f4 = FUN_004054a0();
            local_8 = 0x3a;
            pfStack_2ba0 = (function<void___cdecl(void)> *)&local_2504;
            pcStack_2ba4 = (char *)0x690ead;
            pfStack_2ba0 = (function<void___cdecl(void)> *)FUN_004051c0();
            local_8 = 0xffffffff;
            pcStack_2ba4 = (char *)0x690eba;
            local_2508 = ui_find_widget_by_key();
            if (local_2508 != 0) {
              local_250c = 0xe;
              local_29f8 = (undefined1 *)&pfStack_2b9c;
              pfStack_2ba0 = (function<void___cdecl(void)> *)&DAT_007748e8;
              pcStack_2ba4 = (char *)0x690eeb;
              local_29fc = FUN_004054a0();
              local_8 = 0x3b;
              pfStack_2ba0 = (function<void___cdecl(void)> *)&local_250c;
              pcStack_2ba4 = (char *)0x690f09;
              pfStack_2ba0 = (function<void___cdecl(void)> *)FUN_004051c0();
              local_8 = 0xffffffff;
              pcStack_2ba4 = (char *)0x690f16;
              local_2510 = ui_find_widget_by_key();
              if (*(char *)(local_2510 + 0x9a8) != '\0') {
                local_19fe = '\x01';
              }
            }
            local_2514 = 0xe;
            local_2a00 = (undefined1 *)&pfStack_2b9c;
            pfStack_2ba0 = (function<void___cdecl(void)> *)&DAT_007748e0;
            pcStack_2ba4 = (char *)0x690f56;
            local_2a04 = FUN_004054a0();
            local_8 = 0x3c;
            pfStack_2ba0 = (function<void___cdecl(void)> *)&local_2514;
            pcStack_2ba4 = (char *)0x690f74;
            pfStack_2ba0 = (function<void___cdecl(void)> *)FUN_004051c0();
            local_8 = 0xffffffff;
            pcStack_2ba4 = (char *)0x690f81;
            local_2518 = ui_find_widget_by_key();
            if (local_2518 != 0) {
              local_251c = 0xe;
              local_2a08 = (undefined1 *)&pfStack_2b9c;
              pfStack_2ba0 = (function<void___cdecl(void)> *)&DAT_00774920;
              pcStack_2ba4 = (char *)0x690fb2;
              local_2a0c = FUN_004054a0();
              local_8 = 0x3d;
              pfStack_2ba0 = (function<void___cdecl(void)> *)&local_251c;
              pcStack_2ba4 = (char *)0x690fd0;
              pfStack_2ba0 = (function<void___cdecl(void)> *)FUN_004051c0();
              local_8 = 0xffffffff;
              pcStack_2ba4 = (char *)0x690fdd;
              local_2520 = ui_find_widget_by_key();
              if (*(char *)(local_2520 + 0x9a8) != '\0') {
                local_19fe = '\x01';
              }
            }
            local_2524 = 0xe;
            local_2a10 = (undefined1 *)&pfStack_2b9c;
            pfStack_2ba0 = (function<void___cdecl(void)> *)&DAT_00774918;
            pcStack_2ba4 = (char *)0x69101d;
            local_2a14 = FUN_004054a0();
            local_8 = 0x3e;
            pfStack_2ba0 = (function<void___cdecl(void)> *)&local_2524;
            pcStack_2ba4 = (char *)0x69103b;
            pfStack_2ba0 = (function<void___cdecl(void)> *)FUN_004051c0();
            local_8 = 0xffffffff;
            pcStack_2ba4 = (char *)0x691048;
            local_2528 = ui_find_widget_by_key();
            if (local_2528 != 0) {
              local_252c = 0xe;
              local_2a18 = (undefined1 *)&pfStack_2b9c;
              pfStack_2ba0 = (function<void___cdecl(void)> *)&DAT_00774910;
              pcStack_2ba4 = (char *)0x691079;
              local_2a1c = FUN_004054a0();
              local_8 = 0x3f;
              pfStack_2ba0 = (function<void___cdecl(void)> *)&local_252c;
              pcStack_2ba4 = (char *)0x691097;
              pfStack_2ba0 = (function<void___cdecl(void)> *)FUN_004051c0();
              local_8 = 0xffffffff;
              pcStack_2ba4 = (char *)0x6910a4;
              local_2530 = ui_find_widget_by_key();
              if (*(char *)(local_2530 + 0x9a8) != '\0') {
                local_19fe = '\x01';
              }
            }
            ppvVar1 = ExceptionList;
            if (local_19fe == '\0') {
              local_2a20 = (undefined1 *)&pfStack_2b9c;
              pfStack_2ba0 = (function<void___cdecl(void)> *)0x774900;
              pcStack_2ba4 = (char *)0x6910e9;
              FUN_004054a0();
              pfStack_2ba0 = (function<void___cdecl(void)> *)0x6910ee;
              FUN_004c3570();
              *(undefined1 *)(local_1a74 + 0x9a8) = 1;
              *(undefined4 *)(local_1a74 + 0x4c) = 0;
              *(undefined4 *)(local_1a74 + 0x8dc) = 0;
              uVar4 = FUN_0040d6a0();
              ppvVar1 = ExceptionList;
              if (1 < uVar4) {
                FUN_00402170();
                puVar3 = (undefined4 *)FUN_0069f180();
                local_2534 = *puVar3;
                FUN_0069f720();
                ppvVar1 = ExceptionList;
              }
            }
          }
        }
        else if (((command_id == 0xb0e) && (local_1a88 = ui_ctx, *(int *)(ui_ctx + 0x5c) != 0)) &&
                (*(int *)(ui_ctx + 0x60) != 0)) {
          local_19ff = '\0';
          local_2538 = 0xe;
          local_2a30 = (undefined1 *)&pfStack_2b9c;
          pfStack_2ba0 = (function<void___cdecl(void)> *)&DAT_00774940;
          pcStack_2ba4 = (char *)0x6911d5;
          ExceptionList = &local_10;
          local_2a34 = FUN_004054a0();
          local_8 = 0x40;
          pfStack_2ba0 = (function<void___cdecl(void)> *)&local_2538;
          pcStack_2ba4 = (char *)0x6911f3;
          pfStack_2ba0 = (function<void___cdecl(void)> *)FUN_004051c0();
          local_8 = 0xffffffff;
          pcStack_2ba4 = (char *)0x691200;
          local_253c = ui_find_widget_by_key();
          if (local_253c != 0) {
            local_2540 = 0xe;
            local_2a38 = (undefined1 *)&pfStack_2b9c;
            pfStack_2ba0 = (function<void___cdecl(void)> *)&DAT_00774938;
            pcStack_2ba4 = (char *)0x691231;
            local_2a3c = FUN_004054a0();
            local_8 = 0x41;
            pfStack_2ba0 = (function<void___cdecl(void)> *)&local_2540;
            pcStack_2ba4 = (char *)0x69124f;
            pfStack_2ba0 = (function<void___cdecl(void)> *)FUN_004051c0();
            local_8 = 0xffffffff;
            pcStack_2ba4 = (char *)0x69125c;
            local_2544 = ui_find_widget_by_key();
            if (*(char *)(local_2544 + 0x9a8) != '\0') {
              local_19ff = '\x01';
            }
          }
          local_2548 = 0xe;
          local_2a40 = (undefined1 *)&pfStack_2b9c;
          pfStack_2ba0 = (function<void___cdecl(void)> *)&DAT_00774930;
          pcStack_2ba4 = (char *)0x69129c;
          local_2a44 = FUN_004054a0();
          local_8 = 0x42;
          pfStack_2ba0 = (function<void___cdecl(void)> *)&local_2548;
          pcStack_2ba4 = (char *)0x6912ba;
          pfStack_2ba0 = (function<void___cdecl(void)> *)FUN_004051c0();
          local_8 = 0xffffffff;
          pcStack_2ba4 = (char *)0x6912c7;
          local_254c = ui_find_widget_by_key();
          if (local_254c != 0) {
            local_2550 = 0xe;
            local_2a48 = (undefined1 *)&pfStack_2b9c;
            pfStack_2ba0 = (function<void___cdecl(void)> *)&DAT_00774928;
            pcStack_2ba4 = (char *)0x6912f8;
            local_2a4c = FUN_004054a0();
            local_8 = 0x43;
            pfStack_2ba0 = (function<void___cdecl(void)> *)&local_2550;
            pcStack_2ba4 = (char *)0x691316;
            pfStack_2ba0 = (function<void___cdecl(void)> *)FUN_004051c0();
            local_8 = 0xffffffff;
            pcStack_2ba4 = (char *)0x691323;
            local_2554 = ui_find_widget_by_key();
            if (*(char *)(local_2554 + 0x9a8) != '\0') {
              local_19ff = '\x01';
            }
          }
          local_2558 = 0xe;
          local_2a50 = (undefined1 *)&pfStack_2b9c;
          pfStack_2ba0 = (function<void___cdecl(void)> *)&DAT_00774960;
          pcStack_2ba4 = (char *)0x691363;
          local_2a54 = FUN_004054a0();
          local_8 = 0x44;
          pfStack_2ba0 = (function<void___cdecl(void)> *)&local_2558;
          pcStack_2ba4 = (char *)0x691381;
          pfStack_2ba0 = (function<void___cdecl(void)> *)FUN_004051c0();
          local_8 = 0xffffffff;
          pcStack_2ba4 = (char *)0x69138e;
          local_255c = ui_find_widget_by_key();
          if (local_255c != 0) {
            local_2560 = 0xe;
            local_2a58 = (undefined1 *)&pfStack_2b9c;
            pfStack_2ba0 = (function<void___cdecl(void)> *)&DAT_00774958;
            pcStack_2ba4 = (char *)0x6913bf;
            local_2a5c = FUN_004054a0();
            local_8 = 0x45;
            pfStack_2ba0 = (function<void___cdecl(void)> *)&local_2560;
            pcStack_2ba4 = (char *)0x6913dd;
            pfStack_2ba0 = (function<void___cdecl(void)> *)FUN_004051c0();
            local_8 = 0xffffffff;
            pcStack_2ba4 = (char *)0x6913ea;
            local_2564 = ui_find_widget_by_key();
            if (*(char *)(local_2564 + 0x9a8) != '\0') {
              local_19ff = '\x01';
            }
          }
          local_2568 = 0xe;
          local_2a60 = (undefined1 *)&pfStack_2b9c;
          pfStack_2ba0 = (function<void___cdecl(void)> *)&DAT_00774950;
          pcStack_2ba4 = (char *)0x69142a;
          local_2a64 = FUN_004054a0();
          local_8 = 0x46;
          pfStack_2ba0 = (function<void___cdecl(void)> *)&local_2568;
          pcStack_2ba4 = (char *)0x691448;
          pfStack_2ba0 = (function<void___cdecl(void)> *)FUN_004051c0();
          local_8 = 0xffffffff;
          pcStack_2ba4 = (char *)0x691455;
          local_256c = ui_find_widget_by_key();
          if (local_256c != 0) {
            local_2570 = 0xe;
            local_2a68 = (undefined1 *)&pfStack_2b9c;
            pfStack_2ba0 = (function<void___cdecl(void)> *)&DAT_00774948;
            pcStack_2ba4 = (char *)0x691486;
            local_2a6c = FUN_004054a0();
            local_8 = 0x47;
            pfStack_2ba0 = (function<void___cdecl(void)> *)&local_2570;
            pcStack_2ba4 = (char *)0x6914a4;
            pfStack_2ba0 = (function<void___cdecl(void)> *)FUN_004051c0();
            local_8 = 0xffffffff;
            pcStack_2ba4 = (char *)0x6914b1;
            local_2574 = ui_find_widget_by_key();
            if (*(char *)(local_2574 + 0x9a8) != '\0') {
              local_19ff = '\x01';
            }
          }
          ppvVar1 = ExceptionList;
          if (local_19ff == '\0') {
            local_2a70 = (undefined1 *)&pfStack_2b9c;
            pfStack_2ba0 = (function<void___cdecl(void)> *)0x77498c;
            pcStack_2ba4 = (char *)0x6914f6;
            FUN_004054a0();
            pfStack_2ba0 = (function<void___cdecl(void)> *)0x6914fb;
            FUN_004c3570();
            *(undefined1 *)(local_1a88 + 0x9a8) = 1;
            *(undefined4 *)(local_1a88 + 0x4c) = 0;
            *(undefined4 *)(local_1a88 + 0x8dc) = 0;
            uVar4 = FUN_0040d6a0();
            ppvVar1 = ExceptionList;
            if (1 < uVar4) {
              FUN_00402170();
              puVar3 = (undefined4 *)FUN_0069f180();
              local_2578 = *puVar3;
              FUN_0069f720();
              ppvVar1 = ExceptionList;
            }
          }
        }
      }
      else if (command_id < 0xce5) {
        if (command_id == 0xce4) {
          local_1e20 = 0xdac;
          ExceptionList = &local_10;
          FUN_004051c0();
          ui_close_matching_widgets();
          local_1e24 = 0xd48;
          FUN_004051c0();
          ui_close_matching_widgets();
          local_1e28 = 0x13;
          FUN_0040d330();
          FUN_0040d540();
          local_1e2c = 0x12;
          FUN_004051c0();
          ui_close_matching_widgets();
          local_1e30 = 0x2a8;
          FUN_004051c0();
          ui_close_matching_widgets();
          for (local_1b4c = 0; local_1b4c < 4; local_1b4c = local_1b4c + 1) {
            FUN_004d1520();
            FUN_004ce8c0();
          }
          FUN_004d1520();
          cVar2 = FUN_0040d500();
          if (cVar2 == '\0') {
            FUN_004d1520();
            FUN_004021b0();
            while( true ) {
              FUN_004d1520();
              FUN_00402170();
              cVar2 = FUN_00426ed0();
              if (cVar2 == '\0') break;
              FUN_00401b20();
              FUN_0044e0f0();
              while( true ) {
                FUN_00401b20();
                FUN_0040d9a0();
                cVar2 = FUN_0040d2d0();
                if (cVar2 == '\0') break;
                piVar5 = (int *)FUN_0042a580();
                if ((*(int *)(*piVar5 + 0x204) == 0) ||
                   (piVar5 = (int *)FUN_0042a580(), *(int *)(*piVar5 + 0x204) == 300)) {
                  FUN_00518450();
                }
                else {
                  FUN_0042a580();
                  FUN_0062ed50();
                  piVar5 = (int *)FUN_0042a580();
                  local_1d08 = *piVar5;
                  if (local_1d08 == 0) {
                    local_1e38 = 0;
                  }
                  else {
                    local_1e38 = FUN_004d1980();
                  }
                  local_1e3c = local_1aa4;
                  FUN_00401b20();
                  puVar3 = (undefined4 *)FUN_0044e0a0();
                  local_1aa4 = *puVar3;
                }
              }
              FUN_00401b20();
              FUN_004021b0();
              while( true ) {
                FUN_00401b20();
                FUN_00402170();
                cVar2 = FUN_00426ed0();
                if (cVar2 == '\0') break;
                FUN_0044ddc0();
                FUN_004d1b30();
                FUN_00517980();
                local_1e40 = local_1c28;
                FUN_00401b20();
                puVar3 = (undefined4 *)FUN_0044dea0();
                local_1c28 = *puVar3;
              }
              FUN_00518450();
            }
            FUN_004d1520();
            FUN_0069f300();
            FUN_004d1520();
            FUN_004021b0();
            while( true ) {
              FUN_004d1520();
              FUN_00402170();
              cVar2 = FUN_00426ed0();
              if (cVar2 == '\0') break;
              FUN_0044ddc0();
              FUN_004d1b30();
              FUN_00517980();
              local_1e44 = local_1c24;
              FUN_004d1520();
              puVar3 = (undefined4 *)FUN_0044dea0();
              local_1c24 = *puVar3;
            }
            FUN_004d1520();
            FUN_0040d5f0();
          }
          else {
            FUN_004d1520();
            FUN_004021b0();
            while( true ) {
              FUN_004d1520();
              FUN_00402170();
              cVar2 = FUN_00426ed0();
              if (cVar2 == '\0') break;
              FUN_0044ddc0();
              FUN_004d1b30();
              FUN_00517980();
              local_1e34 = local_1c2c;
              FUN_004d1520();
              puVar3 = (undefined4 *)FUN_0044dea0();
              local_1c2c = *puVar3;
            }
            FUN_004d1520();
            FUN_0040d5f0();
          }
          FUN_004d1520();
          FUN_0069f880();
          piVar5 = (int *)FUN_004d1520();
          *(undefined1 *)(*piVar5 + 0x44) = 0;
          FUN_0053c7e0();
          FUN_004a1510();
          FUN_0053c880();
          DAT_007ca1d8 = 2;
          local_19e4 = (function<void___cdecl(void)> *)FUN_00454ea0();
          if (local_19e4[0xdb8] == (function<void___cdecl(void)>)0x0) {
            *(int *)(local_19e4 + 0x22c) = 0;
            *(int *)(local_19e4 + 0xdd8) = 2;
            local_19e4[0x170] = (function<void___cdecl(void)>)0x1;
            *(int *)(local_19e4 + 0x24) = 0;
            local_19e4[0x28] = (function<void___cdecl(void)>)0x0;
            FUN_0047fef0();
            FUN_004821f0();
            FUN_00483360();
            FUN_00465880();
            FUN_00465570();
            FUN_00465a40();
            FUN_00465db0();
            FUN_00465c50();
            FUN_00484d20();
            FUN_00630c00();
            FUN_004aae50();
            *(int *)(local_19e4 + 0x20) = 0;
            *(int *)(local_19e4 + 0x214) = 0;
            (**(code **)(*(int *)local_19e4 + 0x134))();
            (**(code **)(*(int *)local_19e4 + 0x138))();
          }
          else {
            local_1d98 = &DAT_007ca758;
            local_1c20 = (int *)FUN_004018d0();
            local_1e48 = (int *)FUN_004018b0();
            for (; local_1c20 != local_1e48; local_1c20 = local_1c20 + 1) {
              local_19fc = local_1c20;
              if (*local_1c20 != 0) {
                *(undefined4 *)(*local_1c20 + 0x22c) = 0;
                *(undefined4 *)(*local_1c20 + 0xdd8) = 2;
                *(undefined1 *)(*local_1c20 + 0x170) = 1;
                *(undefined4 *)(*local_1c20 + 0x24) = 0;
                *(undefined1 *)(*local_1c20 + 0x28) = 0;
                FUN_0047fef0();
                FUN_004821f0();
                FUN_00483360();
                FUN_00465880();
                FUN_00465570();
                FUN_00465a40();
                FUN_00465db0();
                FUN_00465c50();
                FUN_00484d20();
                FUN_00630c00();
                FUN_004aae50();
                *(undefined4 *)(*local_19fc + 0x20) = 0;
                *(undefined4 *)(*local_19fc + 0x214) = 0;
                (**(code **)(*(int *)*local_19fc + 0x134))();
                (**(code **)(*(int *)*local_19fc + 0x138))();
              }
            }
          }
          local_1c94 = FUN_005a7d70();
          FUN_004054a0();
          local_8 = 0x58;
          local_1b1c = 0;
          while (uVar4 = FUN_00519290(), local_1b1c < uVar4) {
            piVar5 = (int *)FUN_00519270();
            if (*piVar5 == *(int *)(local_19e4 + 0xae0)) {
              FUN_00519270();
              FUN_0040d840();
            }
            local_1b1c = local_1b1c + 1;
          }
          local_2acc = (undefined1 *)&pfStack_2b9c;
          pfStack_2ba0 = local_834;
          pcStack_2ba4 = (char *)0x692f38;
          FUN_00405520();
          pfStack_2ba0 = local_19e4;
          pcStack_2ba4 = (char *)0x692f44;
          FUN_004e95d0();
          if (local_19e4[0xdb8] == (function<void___cdecl(void)>)0x0) {
            *(int *)(local_19e4 + 0x224) = *(int *)(local_19e4 + 0x9fc);
            *(int *)(local_19e4 + 0x228) = *(int *)(local_19e4 + 0xa00);
            FUN_00479060();
          }
          else {
            local_1d9c = &DAT_007ca758;
            local_1c1c = (int *)FUN_004018d0();
            local_1e4c = (int *)FUN_004018b0();
            for (; local_1c1c != local_1e4c; local_1c1c = local_1c1c + 1) {
              local_1c18 = local_1c1c;
              if (*local_1c1c != 0) {
                *(int *)(*local_1c1c + 0x224) = *(int *)(local_19e4 + 0x9fc);
                *(int *)(*local_1c1c + 0x228) = *(int *)(local_19e4 + 0xa00);
                FUN_00479060();
              }
            }
          }
          piVar5 = (int *)FUN_004d1520();
          if (*(char *)(*piVar5 + 0x9d4) == '\0') {
            if (*(int *)(local_19e4 + 0x1fc) < 4) {
              local_1e60 = 0x39;
              FUN_004051c0();
              ui_close_matching_widgets();
              local_1e64 = 0x294;
              FUN_004051c0();
              ui_close_matching_widgets();
              *(int *)(local_19e4 + 0x6e8) = *(int *)(local_19e4 + 0x6e0);
              *(int *)(local_19e4 + 0x6ec) = *(int *)(local_19e4 + 0x6e4);
            }
            else {
              *(int *)(local_19e4 + 0x6e8) = (*(int *)(local_19e4 + 0x6e0) * 10) / 100;
              *(int *)(local_19e4 + 0x6ec) = (*(int *)(local_19e4 + 0x6e4) * 10) / 100;
              local_1e50 = 0x294;
              FUN_004051c0();
              cVar2 = FUN_0040d500();
              if (cVar2 != '\0') {
                local_1e54 = 0x294;
                FUN_004051c0();
                local_2ad0 = apfStack_2bb0 + 1;
                apfStack_2bb0[0] = (function<void___cdecl(void)> *)0x774a18;
                puStack_2bb4 = (undefined4 *)0x693145;
                local_2ad4 = FUN_004054a0();
                local_8._0_1_ = 0x59;
                local_2ad8 = auStack_2bc4;
                puStack_2bc8 = &DAT_00774a08;
                uStack_2bcc = 0x693164;
                local_28f0 = FUN_004054a0();
                local_8._0_1_ = 0x5a;
                puStack_2bc8 = (undefined *)0x64;
                local_28f8 = auStack_2be0;
                FUN_004054a0(&DAT_00774a98);
                local_8._0_1_ = 0x58;
                local_1e5c = FUN_00661cc0(0,2);
                *(undefined4 *)(local_1e5c + 0x984) = 0xed8;
                pcStack_2ba4 = &DAT_00774a84;
                pcStack_2ba8 = (char *)0x6931d1;
                local_28fc = (undefined1 *)&pfStack_2ba0;
                local_1e58 = local_1e5c;
                local_2900 = FUN_004054a0();
                local_8._0_1_ = 0x5b;
                pcStack_2ba4 = (char *)0x6931e0;
                iVar14 = FUN_00454ea0();
                pcStack_2ba4 = *(char **)(iVar14 + 0xdcc);
                pcStack_2ba8 = (char *)0x6931ec;
                pcStack_2ba8 = (char *)FUN_00454ea0();
                local_8 = CONCAT31(local_8._1_3_,0x58);
                apfStack_2bb0[1] = (function<void___cdecl(void)> *)0x6931f6;
                FUN_006427e0();
              }
            }
          }
          else {
            *(int *)(local_19e4 + 0x6e8) = *(int *)(local_19e4 + 0x99c);
            *(int *)(local_19e4 + 0x6ec) = *(int *)(local_19e4 + 0x9a0);
          }
          FUN_00454ea0();
          FUN_004f0610();
          puStack_2b98 = (undefined4 *)0x7;
          pfStack_2b9c = (function<void___cdecl(void)> *)0x2904;
          pfStack_2ba0 = (function<void___cdecl(void)> *)0x6932b2;
          FUN_006a38b0();
          local_8 = 0xffffffff;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_834);
          ppvVar1 = ExceptionList;
        }
        else if (command_id == 0xc1c) {
          ExceptionList = &local_10;
          iVar14 = FUN_00454ea0();
          if (*(char *)(iVar14 + 0xdb8) == '\0') {
            piVar5 = (int *)FUN_004d1520();
            ppvVar1 = ExceptionList;
            if (((*(char *)(*piVar5 + 0xb0) == '\0') &&
                (piVar5 = (int *)FUN_004d1520(), ppvVar1 = ExceptionList,
                *(char *)(*piVar5 + 0xb1) == '\0')) &&
               (piVar5 = (int *)FUN_004d1520(), ppvVar1 = ExceptionList,
               *(char *)(*piVar5 + 0xb2) == '\0')) {
              piVar5 = (int *)FUN_004d1520();
              *(undefined1 *)(*piVar5 + 0xb1) = 1;
              local_1b30 = FUN_00657510();
              *(undefined4 *)(local_1b30 + 0xad4) = 1000;
              *(undefined4 *)(local_1b30 + 0xadc) = 1000;
              *(undefined4 *)(local_1b30 + 0xad8) = 1000;
              *(undefined4 *)(local_1b30 + 0xae8) = 500;
              *(undefined4 *)(local_1b30 + 0xaec) = 500;
              ppvVar1 = ExceptionList;
            }
          }
          else {
            piVar5 = (int *)FUN_004d1520();
            ppvVar1 = ExceptionList;
            if ((((*(char *)(*piVar5 + 0xb0) == '\0') &&
                 (piVar5 = (int *)FUN_004d1520(), ppvVar1 = ExceptionList,
                 *(char *)(*piVar5 + 0xb1) == '\0')) &&
                (piVar5 = (int *)FUN_004d1520(), ppvVar1 = ExceptionList,
                *(char *)(*piVar5 + 0xb2) == '\0')) &&
               (iVar14 = FUN_00454ea0(), ppvVar1 = ExceptionList, *(char *)(iVar14 + 0xdb9) != '\0')
               ) {
              FUN_00454ea0();
              FUN_006a3f10();
              ppvVar1 = ExceptionList;
            }
          }
        }
        else if (command_id == 0xc80) {
          ExceptionList = &local_10;
          iVar14 = FUN_00454ea0();
          if (*(char *)(iVar14 + 0xdb8) == '\0') {
            piVar5 = (int *)FUN_004d1520();
            ppvVar1 = ExceptionList;
            if (((*(char *)(*piVar5 + 0xb0) == '\0') &&
                (piVar5 = (int *)FUN_004d1520(), ppvVar1 = ExceptionList,
                *(char *)(*piVar5 + 0xb1) == '\0')) &&
               (piVar5 = (int *)FUN_004d1520(), ppvVar1 = ExceptionList,
               *(char *)(*piVar5 + 0xb2) == '\0')) {
              piVar5 = (int *)FUN_004d1520();
              *(undefined1 *)(*piVar5 + 0xb2) = 1;
              local_1b34 = FUN_00657510();
              *(undefined4 *)(local_1b34 + 0xad4) = 1000;
              *(undefined4 *)(local_1b34 + 0xadc) = 1000;
              *(undefined4 *)(local_1b34 + 0xad8) = 1000;
              *(undefined4 *)(local_1b34 + 0xae8) = 500;
              *(undefined4 *)(local_1b34 + 0xaec) = 500;
              ppvVar1 = ExceptionList;
            }
          }
          else {
            piVar5 = (int *)FUN_004d1520();
            ppvVar1 = ExceptionList;
            if (((*(char *)(*piVar5 + 0xb0) == '\0') &&
                (piVar5 = (int *)FUN_004d1520(), ppvVar1 = ExceptionList,
                *(char *)(*piVar5 + 0xb1) == '\0')) &&
               ((piVar5 = (int *)FUN_004d1520(), ppvVar1 = ExceptionList,
                *(char *)(*piVar5 + 0xb2) == '\0' &&
                (iVar14 = FUN_00454ea0(), ppvVar1 = ExceptionList, *(char *)(iVar14 + 0xdb9) != '\0'
                )))) {
              FUN_00454ea0();
              FUN_006a3f10();
              ppvVar1 = ExceptionList;
            }
          }
        }
      }
      else if (command_id == 0xd48) {
        ExceptionList = &local_10;
        piVar5 = (int *)FUN_004d1520();
        local_1e18 = (uint)*(byte *)(*piVar5 + 0x44);
        ui_command_dispatch();
        local_1a2e = local_1e18 != 0;
        piVar5 = (int *)FUN_004d1520();
        *(undefined1 *)(*piVar5 + 0x44) = local_1a2e;
        iVar14 = FUN_00454ea0();
        if (*(char *)(iVar14 + 0xdb8) == '\0') {
          FUN_00454ea0();
          FUN_006a3f10();
          ppvVar1 = ExceptionList;
        }
        else {
          iVar14 = FUN_00454ea0();
          if (*(char *)(iVar14 + 0xdb9) == '\0') {
            puStack_2b98 = (undefined4 *)0xa;
            local_2aa4 = (undefined1 *)apfStack_2bb0;
            puStack_2bb4 = (undefined4 *)&DAT_00774a34;
            puStack_2bb8 = (undefined *)0x692686;
            FUN_004054a0();
            puStack_2bb4 = (undefined4 *)0x69268b;
            FUN_006634f0();
            ppvVar1 = ExceptionList;
          }
          else {
            local_1c3c = 0;
            local_1d94 = FUN_00454ee0();
            FUN_0042a810();
            FUN_0042a7f0();
            while (cVar2 = FUN_0040d2d0(), cVar2 != '\0') {
              local_1b20 = FUN_0042a580();
              if ((((*(char *)(*(int *)(local_1b20 + 4) + 0xdb8) != '\0') &&
                   (iVar14 = FUN_00454ea0(),
                   *(int *)(iVar14 + 0xdbc) == *(int *)(*(int *)(local_1b20 + 4) + 0xdbc))) &&
                  (iVar14 = FUN_00454ea0(),
                  *(int *)(iVar14 + 0xadc) == *(int *)(*(int *)(local_1b20 + 4) + 0xadc))) &&
                 ((iVar14 = FUN_00454ea0(),
                  *(int *)(iVar14 + 0xae0) == *(int *)(*(int *)(local_1b20 + 4) + 0xae0) &&
                  (iVar14 = FUN_00454ea0(),
                  *(int *)(iVar14 + 0xdd8) == *(int *)(*(int *)(local_1b20 + 4) + 0xdd8))))) {
                local_1c3c = local_1c3c + 1;
              }
              FUN_0042a560();
            }
            iVar14 = FUN_00454ea0();
            if (*(int *)(iVar14 + 0xdc4) == local_1c3c) {
              FUN_00454ea0();
              FUN_006a3f10();
              ppvVar1 = ExceptionList;
            }
            else {
              puStack_2b98 = (undefined4 *)0xa;
              local_2aa0 = (undefined1 *)apfStack_2bb0;
              puStack_2bb4 = (undefined4 *)&DAT_007749c4;
              puStack_2bb8 = (undefined *)0x69265d;
              FUN_004054a0();
              puStack_2bb4 = (undefined4 *)0x692662;
              FUN_006634f0();
              ppvVar1 = ExceptionList;
            }
          }
        }
      }
      else if (command_id == 0xdac) {
        ExceptionList = &local_10;
        piVar5 = (int *)FUN_004d1520();
        local_1e10 = (uint)*(byte *)(*piVar5 + 0x44);
        ui_command_dispatch();
        local_1a2d = local_1e10 != 0;
        piVar5 = (int *)FUN_004d1520();
        *(undefined1 *)(*piVar5 + 0x44) = local_1a2d;
        iVar14 = FUN_00454ea0();
        if (*(char *)(iVar14 + 0xdb8) == '\0') {
          FUN_00454ea0();
          FUN_006a3f10();
        }
        else {
          iVar14 = FUN_00454ea0();
          if (*(char *)(iVar14 + 0xdb9) == '\0') {
            puStack_2b98 = (undefined4 *)0xa;
            local_2a9c = (undefined1 *)apfStack_2bb0;
            puStack_2bb4 = (undefined4 *)&DAT_007749d8;
            puStack_2bb8 = (undefined *)0x69244a;
            FUN_004054a0();
            puStack_2bb4 = (undefined4 *)0x69244f;
            FUN_006634f0();
          }
          else {
            local_1c44 = 0;
            local_1d8c = FUN_00454ee0();
            FUN_0042a810();
            FUN_0042a7f0();
            while (cVar2 = FUN_0040d2d0(), cVar2 != '\0') {
              local_1b24 = FUN_0042a580();
              if (((*(char *)(*(int *)(local_1b24 + 4) + 0xdb8) != '\0') &&
                  (iVar14 = FUN_00454ea0(),
                  *(int *)(iVar14 + 0xdbc) == *(int *)(*(int *)(local_1b24 + 4) + 0xdbc))) &&
                 ((iVar14 = FUN_00454ea0(),
                  *(int *)(iVar14 + 0xadc) == *(int *)(*(int *)(local_1b24 + 4) + 0xadc) &&
                  ((iVar14 = FUN_00454ea0(),
                   *(int *)(iVar14 + 0xae0) == *(int *)(*(int *)(local_1b24 + 4) + 0xae0) &&
                   (iVar14 = FUN_00454ea0(),
                   *(int *)(iVar14 + 0xdd8) == *(int *)(*(int *)(local_1b24 + 4) + 0xdd8))))))) {
                local_1c44 = local_1c44 + 1;
              }
              FUN_0042a560();
            }
            iVar14 = FUN_00454ea0();
            if (*(int *)(iVar14 + 0xdc4) == local_1c44) {
              FUN_00454ea0();
              FUN_006a3f10();
            }
            else {
              puStack_2b98 = (undefined4 *)0xa;
              local_2a98 = (undefined1 *)apfStack_2bb0;
              puStack_2bb4 = (undefined4 *)&DAT_007749f0;
              puStack_2bb8 = (undefined *)0x692421;
              FUN_004054a0();
              puStack_2bb4 = (undefined4 *)0x692426;
              FUN_006634f0();
            }
          }
        }
        FUN_00454ea0();
        FUN_004d1520();
        FUN_006a3c30();
        ppvVar1 = ExceptionList;
      }
      goto LAB_0069e6d6;
    }
    if (command_id < 0x361b) {
      if (command_id == 0x361a) {
        ExceptionList = &local_10;
        FUN_004054a0();
        local_8 = 0x1e;
        FUN_004054a0();
        local_8._0_1_ = 0x1f;
        FUN_004054a0();
        local_8._0_1_ = 0x20;
        FUN_004054a0();
        local_8 = CONCAT31(local_8._1_3_,0x21);
        FUN_004054a0();
        local_8 = 0x22;
        local_2440 = 0x78;
        local_1d44 = FUN_004051c0();
        local_1b70 = (int *)FUN_004018d0();
        local_2444 = (int *)FUN_004018b0();
        for (; local_1b70 != local_2444; local_1b70 = local_1b70 + 1) {
          local_1a7c = local_1b70;
          cVar2 = FUN_00427c60();
          if (cVar2 == '\0') {
            for (local_1b6c = 0; local_1b6c < 0xf; local_1b6c = local_1b6c + 1) {
              cVar2 = destroy<>();
              if (cVar2 != '\0') {
                local_1a99 = *(char *)(*local_1a7c + 0x51) != '\0';
                if (local_1a99) {
                  *(undefined1 *)(*local_1a7c + 0x51) = 0;
                }
                else {
                  *(undefined1 *)(*local_1a7c + 0x51) = 1;
                }
                local_1a99 = !local_1a99;
                break;
              }
            }
          }
          else {
            local_1a98 = *(char *)(*local_1a7c + 0x51) != '\0';
            if (local_1a98) {
              *(undefined1 *)(*local_1a7c + 0x51) = 0;
            }
            else {
              *(undefined1 *)(*local_1a7c + 0x51) = 1;
            }
            local_1a98 = !local_1a98;
          }
        }
        local_8 = 0xffffffff;
        puStack_2b98 = (undefined4 *)0x69015f;
        _eh_vector_destructor_iterator_
                  (local_2ac,0x18,5,std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                  );
        ppvVar1 = ExceptionList;
      }
      else if (command_id < 0xf0b) {
        if (command_id == 0xf0a) {
          local_1c2d = 0;
          ExceptionList = &local_10;
          piVar5 = (int *)FUN_004d1520();
          if (*(char *)(*piVar5 + 0x68) == '\0') {
            piVar5 = (int *)FUN_004d1520();
            *(undefined1 *)(*piVar5 + 0x68) = 1;
            ppvVar1 = ExceptionList;
          }
          else {
            piVar5 = (int *)FUN_004d1520();
            *(undefined1 *)(*piVar5 + 0x68) = 0;
            ppvVar1 = ExceptionList;
          }
        }
        else if (command_id == 0xe74) {
          local_1edc = 0x48;
          local_2630 = (undefined1 *)&pfStack_2b9c;
          pfStack_2ba0 = (function<void___cdecl(void)> *)&DAT_00774ae0;
          pcStack_2ba4 = (char *)0x6938fc;
          ExceptionList = &local_10;
          local_2634 = FUN_004054a0();
          local_8 = 0x5d;
          pfStack_2ba0 = (function<void___cdecl(void)> *)&local_1edc;
          pcStack_2ba4 = (char *)0x69391a;
          pfStack_2ba0 = (function<void___cdecl(void)> *)FUN_004051c0();
          local_8 = 0xffffffff;
          pcStack_2ba4 = (char *)0x693927;
          local_1ee0 = ui_find_widget_by_key();
          ppvVar1 = ExceptionList;
          local_1b18 = local_1ee0;
          if (local_1ee0 != 0) {
            FUN_00454ea0();
            local_1da0 = FUN_00642760();
            local_1eec = FUN_004054a0();
            local_8 = 0x5e;
            local_1ee4 = local_1eec;
            local_1ef0 = FUN_0040a850();
            local_8._0_1_ = 0x5f;
            local_1ee8 = local_1ef0;
            local_1ef4 = FUN_00405cf0();
            FUN_004053e0();
            std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_cb4);
            local_8 = CONCAT31(local_8._1_3_,0x5e);
            std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_c9c);
            local_8 = 0xffffffff;
            std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_c84);
            CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(local_1b18 + 0xa3c));
            local_1ef8 = 0x48;
            local_2638 = (undefined1 *)&pfStack_2b9c;
            pfStack_2ba0 = (function<void___cdecl(void)> *)&DAT_00774ac0;
            pcStack_2ba4 = (char *)0x693a4b;
            local_263c = FUN_004054a0();
            local_8 = 0x60;
            pfStack_2ba0 = (function<void___cdecl(void)> *)&local_1ef8;
            pcStack_2ba4 = (char *)0x693a69;
            pfStack_2ba0 = (function<void___cdecl(void)> *)FUN_004051c0();
            local_8 = 0xffffffff;
            pcStack_2ba4 = (char *)0x693a76;
            local_1efc = ui_find_widget_by_key();
            *(undefined4 *)(local_1efc + 0x9a0) = local_1da0;
            ppvVar1 = ExceptionList;
            local_1b18 = local_1efc;
          }
        }
        else if ((command_id == 0xed8) &&
                (ExceptionList = &local_10, iVar14 = FUN_00454ea0(), ppvVar1 = ExceptionList,
                *(int *)(iVar14 + 0xdd8) < 4)) {
          iVar14 = FUN_00454ea0();
          iVar6 = FUN_00454ea0();
          if (*(int *)(iVar14 + 0x6e8) < *(int *)(iVar6 + 0x6e0)) {
            local_1ed0 = 0x39;
            FUN_004051c0();
            cVar2 = FUN_0040d500();
            if (cVar2 == '\0') {
              local_1ed4 = 0x39;
              FUN_004051c0();
              ui_close_matching_widgets();
            }
            local_2904 = apfStack_2bb0 + 1;
            apfStack_2bb0[0] = (function<void___cdecl(void)> *)&DAT_00774a70;
            puStack_2bb4 = (undefined4 *)0x693869;
            local_2628 = FUN_004054a0();
            local_8 = 0x5c;
            apfStack_2bb0[0] = (function<void___cdecl(void)> *)0x69387b;
            apfStack_2bb0[0] = (function<void___cdecl(void)> *)FUN_00454ea0();
            local_8 = 0xffffffff;
            puStack_2bb4 = (undefined4 *)0x693888;
            FUN_00643010();
          }
          else {
            puStack_2b98 = (undefined4 *)0xa;
            local_262c = (undefined1 *)apfStack_2bb0;
            puStack_2bb4 = (undefined4 *)&DAT_00774a4c;
            puStack_2bb8 = (undefined *)0x6938ac;
            FUN_004054a0();
            puStack_2bb4 = (undefined4 *)0x6938b1;
            FUN_006634f0();
          }
          local_1ed8 = 0x15e0;
          FUN_004051c0();
          ui_close_matching_widgets();
          ppvVar1 = ExceptionList;
        }
      }
      else if (command_id == 0x35e8) {
        ExceptionList = &local_10;
        FUN_004054a0();
        local_8 = 0;
        FUN_004054a0();
        local_8._0_1_ = 1;
        FUN_004054a0();
        local_8._0_1_ = 2;
        FUN_004054a0();
        local_8._0_1_ = 3;
        FUN_004054a0();
        local_8._0_1_ = 4;
        FUN_004054a0();
        local_8._0_1_ = 5;
        FUN_004054a0();
        local_8._0_1_ = 6;
        FUN_004054a0();
        local_8._0_1_ = 7;
        FUN_004054a0();
        local_8._0_1_ = 8;
        FUN_004054a0();
        local_8._0_1_ = 9;
        FUN_004054a0();
        local_8._0_1_ = 10;
        FUN_004054a0();
        local_8._0_1_ = 0xb;
        FUN_004054a0();
        local_8._0_1_ = 0xc;
        FUN_004054a0();
        local_8 = CONCAT31(local_8._1_3_,0xd);
        FUN_004054a0();
        local_8 = 0xe;
        local_2420 = 0x78;
        local_1de0 = FUN_004051c0();
        local_1b8c = (int *)FUN_004018d0();
        local_2424 = (int *)FUN_004018b0();
        for (; local_1b8c != local_2424; local_1b8c = local_1b8c + 1) {
          local_1a78 = local_1b8c;
          cVar2 = FUN_00427c60();
          if (cVar2 == '\0') {
            for (local_1b88 = 0; local_1b88 < 0xf; local_1b88 = local_1b88 + 1) {
              cVar2 = destroy<>();
              if (cVar2 != '\0') {
                local_1a97 = *(char *)(*local_1a78 + 0x51) != '\0';
                if (local_1a97) {
                  *(undefined1 *)(*local_1a78 + 0x51) = 0;
                }
                else {
                  *(undefined1 *)(*local_1a78 + 0x51) = 1;
                }
                local_1a97 = !local_1a97;
                break;
              }
            }
          }
          else {
            local_1a9a = *(char *)(*local_1a78 + 0x51) != '\0';
            if (local_1a9a) {
              *(undefined1 *)(*local_1a78 + 0x51) = 0;
            }
            else {
              *(undefined1 *)(*local_1a78 + 0x51) = 1;
            }
            local_1a9a = !local_1a9a;
          }
        }
        local_8 = 0xffffffff;
        puStack_2b98 = (undefined4 *)0x68f5b8;
        _eh_vector_destructor_iterator_
                  (local_7d4,0x18,0xf,
                   std::function<void___cdecl(void)>::~function<void___cdecl(void)>);
        ppvVar1 = ExceptionList;
      }
      else if (command_id == 0x35f2) {
        ExceptionList = &local_10;
        FUN_004054a0();
        local_8 = 0xf;
        FUN_004054a0();
        local_8._0_1_ = 0x10;
        FUN_004054a0();
        local_8._0_1_ = 0x11;
        FUN_004054a0();
        local_8._0_1_ = 0x12;
        FUN_004054a0();
        local_8._0_1_ = 0x13;
        FUN_004054a0();
        local_8._0_1_ = 0x14;
        FUN_004054a0();
        local_8._0_1_ = 0x15;
        FUN_004054a0();
        local_8._0_1_ = 0x16;
        FUN_004054a0();
        local_8._0_1_ = 0x17;
        FUN_004054a0();
        local_8._0_1_ = 0x18;
        FUN_004054a0();
        local_8._0_1_ = 0x19;
        FUN_004054a0();
        local_8._0_1_ = 0x1a;
        FUN_004054a0();
        local_8._0_1_ = 0x1b;
        FUN_004054a0();
        local_8 = CONCAT31(local_8._1_3_,0x1c);
        FUN_004054a0();
        local_8 = 0x1d;
        local_1d40 = ui_ctx;
        local_2428 = 0x78;
        local_1d74 = FUN_004051c0();
        local_1b84 = (int *)FUN_004018d0();
        local_242c = (int *)FUN_004018b0();
        while( true ) {
          if (local_1b84 == local_242c) goto LAB_0068f8ea;
          local_1c38 = local_1b84;
          cVar2 = FUN_00427c60();
          if (cVar2 != '\0') break;
          local_1b84 = local_1b84 + 1;
        }
        FUN_0040d840();
        CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(*local_1c38 + 0xa3c));
        local_2430 = 0x78;
        local_1d70 = FUN_004051c0();
        local_1b80 = (int *)FUN_004018d0();
        local_2434 = (int *)FUN_004018b0();
        for (; local_1b80 != local_2434; local_1b80 = local_1b80 + 1) {
          local_1b78 = local_1b80;
          cVar2 = FUN_00427c60();
          if (cVar2 == '\0') {
            for (local_1b7c = 0; local_1b7c < 0xf; local_1b7c = local_1b7c + 1) {
              cVar2 = destroy<>();
              if (cVar2 != '\0') {
                *(undefined1 *)(*local_1b78 + 0x51) = 0;
                break;
              }
            }
          }
          else {
            *(undefined1 *)(*local_1b78 + 0x51) = 0;
          }
        }
LAB_0068f8ea:
        local_2438 = 0x78;
        local_1d58 = FUN_004051c0();
        local_1b74 = FUN_004018d0();
        local_243c = FUN_004018b0();
        for (; local_1b74 != local_243c; local_1b74 = local_1b74 + 4) {
          local_19ec = local_1b74;
          cVar2 = FUN_0040d500();
          if (cVar2 == '\0') {
            FUN_00402170();
            FUN_00402170();
            puStack_2b98 = (undefined4 *)0x68f9d8;
            FUN_004021b0();
            puStack_2b98 = (undefined4 *)local_2938;
            pfStack_2b9c = (function<void___cdecl(void)> *)0x68f9e7;
            FUN_0048ce10();
            cVar2 = FUN_00426ed0();
            if (cVar2 == '\0') {
              cVar2 = FUN_0040e1c0();
              if (cVar2 == '\0') {
                FUN_004019a0();
                FUN_00401790();
                FUN_004019a0();
                FUN_00401790();
              }
            }
            else {
              cVar2 = FUN_0040e1c0();
              if (cVar2 == '\0') {
                FUN_004019a0();
                FUN_00401790();
                FUN_004019a0();
                FUN_00401790();
              }
              else {
                FUN_0040d3c0();
                FUN_0040d4e0();
                FUN_0040d4b0();
                FUN_0040d730();
                FUN_0040d4b0();
                FUN_0040d680();
                FUN_004053a0();
                FUN_0040d4b0();
                iVar14 = FUN_0040d680();
                *(undefined1 *)(iVar14 + 0x20) = 0xd;
                FUN_0040d4b0();
                iVar14 = FUN_0040d680();
                *(undefined4 *)(iVar14 + 0x24) = 0xfffffffc;
                FUN_0040d4b0();
                iVar14 = FUN_0040d680();
                *(undefined4 *)(iVar14 + 0x28) = 0xfffffff0;
                FUN_0040d4b0();
                iVar14 = FUN_0040d680();
                *(undefined4 *)(iVar14 + 0x44) = 0xfa;
                FUN_0040d4b0();
                iVar14 = FUN_0040d680();
                *(undefined1 *)(iVar14 + 0x3d) = 3;
                FUN_0040d4b0();
                FUN_0040d680();
                FUN_004053a0();
                FUN_0040d4b0();
                iVar14 = FUN_0040d680();
                *(undefined1 *)(iVar14 + 0x20) = 0xf;
                FUN_0040d4b0();
                iVar14 = FUN_0040d680();
                *(undefined4 *)(iVar14 + 0x24) = 0xfffffffc;
                FUN_0040d4b0();
                iVar14 = FUN_0040d680();
                *(undefined4 *)(iVar14 + 0x28) = 0xfffffff0;
                FUN_0040d4b0();
                iVar14 = FUN_0040d680();
                *(undefined4 *)(iVar14 + 0x44) = 0xfa;
                FUN_0040d4b0();
                iVar14 = FUN_0040d680();
                *(undefined1 *)(iVar14 + 0x3d) = 3;
                iVar14 = FUN_0040d4b0();
                *(undefined4 *)(iVar14 + 0x8c) = 2;
                iVar14 = FUN_0040d4b0();
                *(undefined4 *)(iVar14 + 0x84) = 1;
                FUN_0040d4b0();
                FUN_0040d730();
                FUN_0040d4b0();
                FUN_0040d680();
                FUN_004053a0();
                FUN_0040d4b0();
                iVar14 = FUN_0040d680();
                *(undefined1 *)(iVar14 + 0x20) = 0xc;
                FUN_0040d4b0();
                iVar14 = FUN_0040d680();
                *(undefined4 *)(iVar14 + 0x24) = 0xfffffffc;
                FUN_0040d4b0();
                iVar14 = FUN_0040d680();
                *(undefined4 *)(iVar14 + 0x28) = 0xfffffff0;
                FUN_0040d4b0();
                iVar14 = FUN_0040d680();
                *(undefined4 *)(iVar14 + 0x44) = 0xfa;
                FUN_0040d4b0();
                FUN_0040d680();
                FUN_004053a0();
                FUN_0040d4b0();
                iVar14 = FUN_0040d680();
                *(undefined1 *)(iVar14 + 0x20) = 0xe;
                FUN_0040d4b0();
                iVar14 = FUN_0040d680();
                *(undefined4 *)(iVar14 + 0x24) = 0xfffffffc;
                FUN_0040d4b0();
                iVar14 = FUN_0040d680();
                *(undefined4 *)(iVar14 + 0x28) = 0xfffffff0;
                FUN_0040d4b0();
                iVar14 = FUN_0040d680();
                *(undefined4 *)(iVar14 + 0x44) = 0xfa;
                iVar14 = FUN_0040d4b0();
                *(undefined4 *)(iVar14 + 0x8c) = 2;
                iVar14 = FUN_0040d4b0();
                *(undefined4 *)(iVar14 + 0x84) = 1;
              }
            }
          }
        }
        local_8 = 0xffffffff;
        puStack_2b98 = (undefined4 *)0x68ff58;
        _eh_vector_destructor_iterator_
                  (local_66c,0x18,0xf,
                   std::function<void___cdecl(void)>::~function<void___cdecl(void)>);
        ppvVar1 = ExceptionList;
      }
      goto LAB_0069e6d6;
    }
    if (0x184b6 < command_id) {
      if (command_id == 0x184c0) {
        local_2414 = *(undefined4 *)(ui_ctx + 0x9a0);
        ExceptionList = &local_10;
        FUN_006a3f10();
        puStack_2b98 = (undefined4 *)0xa;
        local_2928 = (undefined1 *)apfStack_2bb0;
        puStack_2bb4 = (undefined4 *)&DAT_007744c4;
        puStack_2bb8 = (undefined *)0x68f2b2;
        FUN_004054a0();
        puStack_2bb4 = (undefined4 *)0x68f2b7;
        FUN_006634f0();
        local_2418 = 0x38;
        local_241c = 0x38;
        FUN_004051c0();
        ui_register_or_show_widget();
        FUN_004051c0();
        ui_activate_widget_pair();
        ppvVar1 = ExceptionList;
      }
      else if (command_id == 0x1869e) {
        ExceptionList = &local_10;
        *(undefined4 *)(ui_ctx + 0x984) = 0x1869e;
        local_293c = (undefined1 *)&pfStack_2b9c;
        pfStack_2ba0 = (function<void___cdecl(void)> *)&DAT_00740702;
        pcStack_2ba4 = (char *)0x690436;
        FUN_004054a0();
        pfStack_2ba0 = (function<void___cdecl(void)> *)0x69043b;
        FUN_004c3330();
        FUN_00653550();
        FUN_00653470();
        local_1d50 = DAT_007ca640;
        if (DAT_007ca640 == 0) {
          local_245c = 0;
        }
        else {
          local_245c = FUN_0069ed00();
        }
        DAT_007ca640 = 0;
        local_1d78 = DAT_007ca1a4;
        if (DAT_007ca1a4 == (CachedTransmogrifiedPrimary *)0x0) {
          local_2460 = (void *)0x0;
        }
        else {
          local_2460 = Concurrency::details::CachedTransmogrifiedPrimary::
                       _scalar_deleting_destructor_(DAT_007ca1a4,1);
        }
        DAT_007ca1a4 = (CachedTransmogrifiedPrimary *)0x0;
        local_1d7c = DAT_007ca230;
        if (DAT_007ca230 == 0) {
          local_2464 = 0;
        }
        else {
          local_2464 = FUN_0069ed40();
        }
        DAT_007ca230 = 0;
        local_1d80 = DAT_007ca238;
        if (DAT_007ca238 == 0) {
          local_2468 = 0;
        }
        else {
          local_2468 = FUN_0069ed70();
        }
        DAT_007ca238 = 0;
        FUN_004d1b80();
        DestroyWindow(DAT_007ca22c);
        PostQuitMessage(0);
        ppvVar1 = ExceptionList;
      }
      goto LAB_0069e6d6;
    }
    if (command_id != 0x184b6) {
      if (command_id == 0x3624) {
        ExceptionList = &local_10;
        FUN_004054a0();
        local_8 = 0x23;
        FUN_004054a0();
        local_8._0_1_ = 0x24;
        FUN_004054a0();
        local_8._0_1_ = 0x25;
        FUN_004054a0();
        local_8 = CONCAT31(local_8._1_3_,0x26);
        FUN_004054a0();
        local_8 = 0x27;
        local_2450 = ui_ctx;
        local_2448 = 0x78;
        local_1d48 = FUN_004051c0();
        local_1b68 = (int *)FUN_004018d0();
        local_244c = (int *)FUN_004018b0();
        while( true ) {
          if (local_1b68 == local_244c) goto LAB_006903c8;
          local_1c4c = local_1b68;
          cVar2 = FUN_00427c60();
          if (cVar2 != '\0') break;
          local_1b68 = local_1b68 + 1;
        }
        FUN_0040d840();
        CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(*local_1c4c + 0xa3c));
        local_2454 = 0x78;
        local_1d4c = FUN_004051c0();
        local_1b60 = (int *)FUN_004018d0();
        local_2458 = (int *)FUN_004018b0();
        for (; local_1b60 != local_2458; local_1b60 = local_1b60 + 1) {
          local_1b58 = local_1b60;
          cVar2 = FUN_00427c60();
          if (cVar2 == '\0') {
            for (local_1b5c = 0; local_1b5c < 0xf; local_1b5c = local_1b5c + 1) {
              cVar2 = destroy<>();
              if (cVar2 != '\0') {
                *(undefined1 *)(*local_1b58 + 0x51) = 0;
                break;
              }
            }
          }
          else {
            *(undefined1 *)(*local_1b58 + 0x51) = 0;
          }
        }
LAB_006903c8:
        local_8 = 0xffffffff;
        puStack_2b98 = (undefined4 *)0x6903e4;
        _eh_vector_destructor_iterator_
                  (local_324,0x18,5,std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                  );
        ppvVar1 = ExceptionList;
        goto LAB_0069e6d6;
      }
      if ((command_id == 0x184ac) && (ui_ctx != 0)) {
        local_1b94 = *(undefined4 *)(ui_ctx + 0x9a0);
        ExceptionList = &local_10;
        FUN_00454ee0();
        piVar5 = (int *)FUN_00489bf0();
        if (*(char *)(*piVar5 + 0xe05) == '\0') {
          iVar14 = FUN_00454ea0();
          if (*(char *)(iVar14 + 0xe05) == '\0') {
            iVar14 = FUN_00454ea0();
            if ((*(int *)(iVar14 + 0xadc) == 2) &&
               (iVar14 = FUN_00454ea0(), *(int *)(iVar14 + 0xae0) == 4)) {
              iVar14 = FUN_00454ea0();
              FUN_00454ee0();
              piVar5 = (int *)FUN_00489bf0();
              if (*(int *)(iVar14 + 0xadc) != *(int *)(*piVar5 + 0xadc)) {
                iVar14 = FUN_00454ea0();
                FUN_00454ee0();
                piVar5 = (int *)FUN_00489bf0();
                if (*(int *)(iVar14 + 0xae0) != *(int *)(*piVar5 + 0xae0)) {
                  puStack_2b98 = (undefined4 *)0xa;
                  local_2908 = (undefined1 *)apfStack_2bb0;
                  puStack_2bb4 = (undefined4 *)&DAT_007743ec;
                  puStack_2bb8 = (undefined *)0x68f00c;
                  FUN_004054a0();
                  puStack_2bb4 = (undefined4 *)0x68f011;
                  FUN_006634f0();
                  ppvVar1 = ExceptionList;
                  goto LAB_0069e6d6;
                }
              }
              FUN_00454ea0();
              FUN_006a3c30();
              puStack_2b98 = (undefined4 *)0xa;
              local_265c = (undefined1 *)apfStack_2bb0;
              puStack_2bb4 = (undefined4 *)&DAT_0077440c;
              puStack_2bb8 = (undefined *)0x68efbf;
              FUN_004054a0();
              puStack_2bb4 = (undefined4 *)0x68efc4;
              FUN_006634f0();
              local_2408 = 0x1644;
              FUN_004051c0();
              ui_close_matching_widgets();
              ppvVar1 = ExceptionList;
            }
            else {
              puStack_2b98 = (undefined4 *)0xa;
              local_290c = (undefined1 *)apfStack_2bb0;
              puStack_2bb4 = (undefined4 *)&DAT_007743bc;
              puStack_2bb8 = (undefined *)0x68f035;
              FUN_004054a0();
              puStack_2bb4 = (undefined4 *)0x68f03a;
              FUN_006634f0();
              ppvVar1 = ExceptionList;
            }
          }
          else {
            puStack_2b98 = (undefined4 *)0xa;
            local_2910 = (undefined1 *)apfStack_2bb0;
            puStack_2bb4 = (undefined4 *)&DAT_0077439c;
            puStack_2bb8 = (undefined *)0x68f05e;
            FUN_004054a0();
            puStack_2bb4 = (undefined4 *)0x68f063;
            FUN_006634f0();
            ppvVar1 = ExceptionList;
          }
        }
        else {
          puStack_2b98 = (undefined4 *)0xa;
          local_2914 = (undefined1 *)apfStack_2bb0;
          puStack_2bb4 = (undefined4 *)&DAT_0077448c;
          puStack_2bb8 = (undefined *)0x68f087;
          FUN_004054a0();
          puStack_2bb4 = (undefined4 *)0x68f08c;
          FUN_006634f0();
          ppvVar1 = ExceptionList;
        }
      }
      goto LAB_0069e6d6;
    }
    local_1b90 = *(undefined4 *)(ui_ctx + 0x9a0);
    ExceptionList = &local_10;
    FUN_00454ee0();
    piVar5 = (int *)FUN_00489bf0();
    if (*(char *)(*piVar5 + 0xe05) == '\0') {
      iVar14 = FUN_00454ea0();
      if (*(char *)(iVar14 + 0xe05) == '\0') {
        iVar14 = FUN_00454ea0();
        if ((*(int *)(iVar14 + 0xadc) == 2) &&
           (iVar14 = FUN_00454ea0(), *(int *)(iVar14 + 0xae0) == 4)) {
          iVar14 = FUN_00454ea0();
          FUN_00454ee0();
          piVar5 = (int *)FUN_00489bf0();
          if (*(int *)(iVar14 + 0xadc) != *(int *)(*piVar5 + 0xadc)) {
            iVar14 = FUN_00454ea0();
            FUN_00454ee0();
            piVar5 = (int *)FUN_00489bf0();
            if (*(int *)(iVar14 + 0xae0) != *(int *)(*piVar5 + 0xae0)) {
              puStack_2b98 = (undefined4 *)0xa;
              local_2918 = (undefined1 *)apfStack_2bb0;
              puStack_2bb4 = (undefined4 *)&DAT_0077446c;
              puStack_2bb8 = (undefined *)0x68f19b;
              FUN_004054a0();
              puStack_2bb4 = (undefined4 *)0x68f1a0;
              FUN_006634f0();
              goto LAB_0068f21e;
            }
          }
          FUN_00454ea0();
          FUN_006a3c30();
          FUN_004f2720();
        }
        else {
          puStack_2b98 = (undefined4 *)0xa;
          local_291c = (undefined1 *)apfStack_2bb0;
          puStack_2bb4 = (undefined4 *)&DAT_0077443c;
          puStack_2bb8 = (undefined *)0x68f1c4;
          FUN_004054a0();
          puStack_2bb4 = (undefined4 *)0x68f1c9;
          FUN_006634f0();
        }
      }
      else {
        puStack_2b98 = (undefined4 *)0xa;
        local_2920 = (undefined1 *)apfStack_2bb0;
        puStack_2bb4 = (undefined4 *)&DAT_0077441c;
        puStack_2bb8 = (undefined *)0x68f1ed;
        FUN_004054a0();
        puStack_2bb4 = (undefined4 *)0x68f1f2;
        FUN_006634f0();
      }
    }
    else {
      puStack_2b98 = (undefined4 *)0xa;
      local_2924 = (undefined1 *)apfStack_2bb0;
      puStack_2bb4 = (undefined4 *)&DAT_007744dc;
      puStack_2bb8 = (undefined *)0x68f216;
      FUN_004054a0();
      puStack_2bb4 = (undefined4 *)0x68f21b;
      FUN_006634f0();
    }
LAB_0068f21e:
    local_240c = 0x38;
    local_2410 = 0x38;
    FUN_004051c0();
    ui_register_or_show_widget();
    FUN_004051c0();
    ui_activate_widget_pair();
    ppvVar1 = ExceptionList;
    goto LAB_0069e6d6;
  }
  if (command_id == 0x636) {
    ExceptionList = &local_10;
    FUN_006a3f10();
    FUN_004f2720();
    ppvVar1 = ExceptionList;
    goto LAB_0069e6d6;
  }
    /* switch range base 0x532: large inventory/shop/skill family */
  local_19dc = command_id + -0x532;
  switch(command_id) {
  case 0x532:
    iStack_1ac0 = ui_ctx;
    iStack_1af0 = *(int *)(ui_ctx + 0x9d0);
    if (iStack_1af0 == 0) {
      return;
    }
    ExceptionList = &local_10;
    FUN_00642750();
    FUN_0040d5c0();
    piVar5 = (int *)FUN_00401a70();
    if (*(int *)(iStack_1af0 + 0x10) != *piVar5) {
      ExceptionList = local_10;
      return;
    }
    iStack_1aec = *(int *)(iStack_1af0 + 0x9d0);
    uStack_1bd0 = *(undefined4 *)(iStack_1aec + 4);
    FUN_0040a880();
    local_8 = 0x7d;
    uStack_111c = *(undefined4 *)(iStack_1aec + 4);
    uStack_1118 = *(undefined4 *)(iStack_1ac0 + 0x9a0);
    iVar14 = FUN_006caba0();
    if (iVar14 == 0x71) {
      cVar2 = FUN_0067e9d0();
      if (cVar2 == '\0') {
        local_8 = 0xffffffff;
        FUN_004039a0();
        ExceptionList = local_10;
        return;
      }
      iStack_1cf4 = FUN_005cc840();
      iVar12 = FUN_00454ea0();
      iVar14 = *(int *)(iStack_1ac0 + 0x9a0);
      iVar6 = *(int *)(iStack_1cf4 + 0x14c);
      iVar12 = *(int *)(iVar12 + 0xac8);
      FUN_00454ea0();
      FUN_005dbce0();
      iVar11 = FUN_00427540();
      if (*(int *)(iVar11 + 4) < (iVar14 * iVar6) / 5 + iVar12) {
        puStack_2b98 = (undefined4 *)0xa;
        puStack_2774 = (undefined1 *)apfStack_2bb0;
        puStack_2bb4 = (undefined4 *)&DAT_00776000;
        puStack_2bb8 = (undefined *)0x6977eb;
        FUN_004054a0();
        puStack_2bb4 = (undefined4 *)0x6977f0;
        FUN_006634f0();
        local_8 = 0xffffffff;
        FUN_004039a0();
        ExceptionList = local_10;
        return;
      }
      FUN_00454ea0();
      FUN_00454ea0();
      FUN_00680fb0();
      FUN_00454ea0();
      puStack_2b98 = (undefined4 *)0x697860;
      FUN_0067f8c0();
    }
    else {
      iVar14 = FUN_006caba0();
      if (iVar14 == 0x8e) {
        FUN_00454ea0();
        cVar2 = FUN_0067e9f0();
        if (cVar2 == '\0') {
          local_8 = 0xffffffff;
          FUN_004039a0();
          ExceptionList = local_10;
          return;
        }
        iStack_1cf8 = FUN_005cd6d0();
        iVar12 = FUN_00454ea0();
        iVar14 = *(int *)(iStack_1ac0 + 0x9a0);
        iVar6 = *(int *)(iStack_1cf8 + 0x104);
        iVar12 = *(int *)(iVar12 + 0xac8);
        FUN_00454ea0();
        FUN_005dbce0();
        iVar11 = FUN_00427540();
        if (*(int *)(iVar11 + 4) < (iVar14 * iVar6) / 5 + iVar12) {
          puStack_2b98 = (undefined4 *)0xa;
          puStack_2778 = (undefined1 *)apfStack_2bb0;
          puStack_2bb4 = (undefined4 *)&DAT_00776070;
          puStack_2bb8 = (undefined *)0x697952;
          FUN_004054a0();
          puStack_2bb4 = (undefined4 *)0x697957;
          FUN_006634f0();
          local_8 = 0xffffffff;
          FUN_004039a0();
          ExceptionList = local_10;
          return;
        }
        FUN_00454ea0();
        FUN_00454ea0();
        FUN_00680fb0();
        FUN_00454ea0();
        puStack_2b98 = (undefined4 *)0x6979c7;
        FUN_0067f8c0();
      }
    }
    uStack_2088 = 0x38;
    uStack_208c = 0x38;
    FUN_004051c0();
    ui_register_or_show_widget();
    FUN_004051c0();
    ui_activate_widget_pair();
    local_8 = 0xffffffff;
    FUN_004039a0();
    ppvVar1 = ExceptionList;
    break;
  case 0x53c:
    iStack_20e4 = ui_ctx;
    DAT_007ca1f8 = *(undefined4 *)(ui_ctx + 0x9a0);
    DAT_007ca1e0 = 0;
    uStack_20e8 = DAT_007ca1f8;
    break;
  case 0x541:
    iStack_1a5c = ui_ctx;
    ExceptionList = &local_10;
    *(undefined1 *)(ui_ctx + 0xad0) = 1;
    cVar2 = FUN_00427c60();
    ppvVar1 = ExceptionList;
    if (cVar2 != '\0') {
      acStack_20ec[0] = -0x4c;
      acStack_20ec[1] = '\x14';
      acStack_20ec[2] = '\0';
      acStack_20ec[3] = '\0';
      puStack_27a4 = (undefined1 *)&pcStack_2ba4;
      pcStack_2ba8 = &DAT_00776184;
      apfStack_2bb0[1] = (function<void___cdecl(void)> *)0x698472;
      uStack_27a8 = FUN_004054a0();
      local_8 = 0x7f;
      pcStack_2ba8 = acStack_20ec;
      apfStack_2bb0[1] = (function<void___cdecl(void)> *)0x698490;
      pcStack_2ba8 = (char *)FUN_004051c0();
      local_8 = 0xffffffff;
      apfStack_2bb0[1] = (function<void___cdecl(void)> *)0x69849d;
      uStack_20f0 = ui_find_widget_by_key();
      uStack_20f4 = FUN_00427200();
      FUN_004053a0();
      acStack_20f8[0] = -0x4c;
      acStack_20f8[1] = '\x14';
      acStack_20f8[2] = '\0';
      acStack_20f8[3] = '\0';
      puStack_27ac = (undefined1 *)&pfStack_2ba0;
      pcStack_2ba4 = &DAT_00776174;
      pcStack_2ba8 = (char *)0x6984ed;
      uStack_27b0 = FUN_004054a0();
      local_8 = 0x80;
      pcStack_2ba4 = acStack_20f8;
      pcStack_2ba8 = (char *)0x69850b;
      pcStack_2ba4 = (char *)FUN_004051c0();
      local_8 = 0xffffffff;
      pcStack_2ba8 = (char *)0x698518;
      uStack_20fc = ui_find_widget_by_key();
      pCStack_2100 = (CDocObjectServer *)FUN_00427200();
      CDocObjectServer::ReleaseDocSite(pCStack_2100);
      CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(iStack_1a5c + 0xa3c));
      *(undefined1 *)(*(int *)(iStack_1a5c + 0x828) + 4) = 1;
      FUN_004053a0();
      *(undefined1 *)(*(int *)(iStack_1a5c + 0x828) + 0x20) = 0;
      *(undefined4 *)(*(int *)(iStack_1a5c + 0x828) + 0x24) = 8;
      *(undefined4 *)(*(int *)(iStack_1a5c + 0x828) + 0x28) = 9;
      *(undefined4 *)(*(int *)(iStack_1a5c + 0x828) + 0x44) = 1000;
      ppvVar1 = ExceptionList;
    }
    break;
  case 0x546:
    puStack_27b4 = (undefined1 *)&pfStack_2b9c;
    pfStack_2ba0 = (function<void___cdecl(void)> *)0x7761c0;
    pcStack_2ba4 = (char *)0x6985e1;
    ExceptionList = &local_10;
    FUN_004054a0();
    pfStack_2ba0 = (function<void___cdecl(void)> *)0x6985e6;
    FUN_004c3570();
    uStack_2104 = 0x78;
    FUN_004051c0();
    FUN_0065ddb0();
    uStack_2108 = 0x78;
    puVar9 = (undefined1 *)FUN_005187c0();
    *puVar9 = 1;
    uStack_210c = 0x78;
    puStack_27b8 = (undefined1 *)&pfStack_2b9c;
    pfStack_2ba0 = (function<void___cdecl(void)> *)&DAT_007761ac;
    pcStack_2ba4 = (char *)0x69864a;
    uStack_27bc = FUN_004054a0();
    local_8 = 0x81;
    pfStack_2ba0 = (function<void___cdecl(void)> *)&uStack_210c;
    pcStack_2ba4 = (char *)0x698668;
    pfStack_2ba0 = (function<void___cdecl(void)> *)FUN_004051c0();
    local_8 = 0xffffffff;
    pcStack_2ba4 = (char *)0x698675;
    iStack_2110 = ui_find_widget_by_key();
    *(undefined1 *)(iStack_2110 + 0x51) = 0;
    FUN_004054a0();
    local_8 = 0x82;
    FUN_004054a0();
    local_8._0_1_ = 0x83;
    FUN_004054a0();
    local_8._0_1_ = 0x84;
    FUN_004054a0();
    local_8._0_1_ = 0x85;
    FUN_004054a0();
    local_8._0_1_ = 0x86;
    FUN_004054a0();
    local_8._0_1_ = 0x87;
    FUN_004054a0();
    local_8._0_1_ = 0x88;
    FUN_004054a0();
    local_8._0_1_ = 0x89;
    FUN_004054a0();
    local_8._0_1_ = 0x8a;
    FUN_004054a0();
    local_8._0_1_ = 0x8b;
    FUN_004054a0();
    local_8._0_1_ = 0x8c;
    FUN_004054a0();
    local_8._0_1_ = 0x8d;
    FUN_004054a0();
    local_8._0_1_ = 0x8e;
    FUN_004054a0();
    local_8 = CONCAT31(local_8._1_3_,0x8f);
    FUN_004054a0();
    local_8 = 0x90;
    uStack_2114 = 0x78;
    uStack_1dac = FUN_004051c0();
    piStack_1bcc = (int *)FUN_004018d0();
    piStack_2118 = (int *)FUN_004018b0();
    for (; piStack_1bcc != piStack_2118; piStack_1bcc = piStack_1bcc + 1) {
      piStack_1adc = piStack_1bcc;
      puStack_211c = auStack_39c;
      puStack_1d0c = auStack_504;
      for (puStack_1bc8 = puStack_1d0c; puStack_1bc8 != puStack_211c;
          puStack_1bc8 = puStack_1bc8 + 0x18) {
        puStack_2120 = puStack_1bc8;
        cVar2 = destroy<>();
        if (cVar2 != '\0') {
          *(undefined1 *)(*piStack_1adc + 0x51) = 0;
          break;
        }
      }
      cVar2 = FUN_0040d500();
      if ((cVar2 == '\0') && (cVar2 = FUN_0040e1c0(), cVar2 == '\0')) {
        FUN_004019a0();
        FUN_00401790();
        FUN_004019a0();
        FUN_00401790();
      }
    }
    acStack_2124[0] = 'x';
    acStack_2124[1] = '\0';
    acStack_2124[2] = '\0';
    acStack_2124[3] = '\0';
    puStack_27c0 = (undefined1 *)&pfStack_2ba0;
    pcStack_2ba4 = &DAT_00776288;
    pcStack_2ba8 = (char *)0x69895b;
    uStack_27c4 = FUN_004054a0();
    local_8._0_1_ = 0x91;
    pcStack_2ba4 = acStack_2124;
    pcStack_2ba8 = (char *)0x698976;
    pcStack_2ba4 = (char *)FUN_004051c0();
    local_8._0_1_ = 0x90;
    pcStack_2ba8 = (char *)0x698980;
    uStack_2128 = ui_find_widget_by_key();
    FUN_004053a0();
    uStack_212c = 0x78;
    puStack_27c8 = (undefined1 *)&pfStack_2b9c;
    pfStack_2ba0 = (function<void___cdecl(void)> *)&DAT_00776264;
    pcStack_2ba4 = (char *)0x6989ba;
    uStack_27cc = FUN_004054a0();
    local_8._0_1_ = 0x92;
    pfStack_2ba0 = (function<void___cdecl(void)> *)&uStack_212c;
    pcStack_2ba4 = (char *)0x6989d5;
    pfStack_2ba0 = (function<void___cdecl(void)> *)FUN_004051c0();
    local_8._0_1_ = 0x90;
    pcStack_2ba4 = (char *)0x6989df;
    iStack_2130 = ui_find_widget_by_key();
    CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(iStack_2130 + 0xa3c));
    acStack_2134[0] = 'x';
    acStack_2134[1] = '\0';
    acStack_2134[2] = '\0';
    acStack_2134[3] = '\0';
    puStack_27d0 = (undefined1 *)&pfStack_2ba0;
    pcStack_2ba4 = &DAT_007762dc;
    pcStack_2ba8 = (char *)0x698a1e;
    uStack_27d4 = FUN_004054a0();
    local_8._0_1_ = 0x93;
    pcStack_2ba4 = acStack_2134;
    pcStack_2ba8 = (char *)0x698a39;
    pcStack_2ba4 = (char *)FUN_004051c0();
    local_8._0_1_ = 0x90;
    pcStack_2ba8 = (char *)0x698a43;
    uStack_2138 = ui_find_widget_by_key();
    FUN_004053a0();
    uStack_213c = 0x78;
    puStack_27d8 = (undefined1 *)&pfStack_2b9c;
    pfStack_2ba0 = (function<void___cdecl(void)> *)&DAT_007762bc;
    pcStack_2ba4 = (char *)0x698a7d;
    uStack_27dc = FUN_004054a0();
    local_8._0_1_ = 0x94;
    pfStack_2ba0 = (function<void___cdecl(void)> *)&uStack_213c;
    pcStack_2ba4 = (char *)0x698a98;
    pfStack_2ba0 = (function<void___cdecl(void)> *)FUN_004051c0();
    local_8._0_1_ = 0x90;
    pcStack_2ba4 = (char *)0x698aa2;
    iStack_2140 = ui_find_widget_by_key();
    CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(iStack_2140 + 0xa3c));
    uStack_2144 = 0x78;
    puStack_27e0 = (undefined1 *)&pfStack_2b9c;
    pfStack_2ba0 = (function<void___cdecl(void)> *)&DAT_007762a8;
    pcStack_2ba4 = (char *)0x698adc;
    uStack_27e4 = FUN_004054a0();
    local_8._0_1_ = 0x95;
    pfStack_2ba0 = (function<void___cdecl(void)> *)&uStack_2144;
    pcStack_2ba4 = (char *)0x698af7;
    pfStack_2ba0 = (function<void___cdecl(void)> *)FUN_004051c0();
    local_8._0_1_ = 0x90;
    pcStack_2ba4 = (char *)0x698b01;
    iStack_2148 = ui_find_widget_by_key();
    *(undefined1 *)(iStack_2148 + 0x51) = 0;
    FUN_004054a0();
    local_8._0_1_ = 0x96;
    FUN_004054a0();
    local_8._0_1_ = 0x97;
    FUN_004054a0();
    local_8._0_1_ = 0x98;
    FUN_004054a0();
    local_8._0_1_ = 0x99;
    FUN_004054a0();
    local_8 = CONCAT31(local_8._1_3_,0x9a);
    uStack_214c = 0x78;
    uStack_1d10 = FUN_004051c0();
    piStack_1bc4 = (int *)FUN_004018d0();
    piStack_2150 = (int *)FUN_004018b0();
    for (; piStack_1bc4 != piStack_2150; piStack_1bc4 = piStack_1bc4 + 1) {
      piStack_1d18 = piStack_1bc4;
      puStack_2154 = local_324;
      puStack_1d14 = auStack_39c;
      for (puStack_1bc0 = puStack_1d14; puStack_1bc0 != puStack_2154;
          puStack_1bc0 = puStack_1bc0 + 0x18) {
        puStack_2158 = puStack_1bc0;
        cVar2 = destroy<>();
        if (cVar2 != '\0') {
          *(undefined1 *)(*piStack_1d18 + 0x51) = 0;
          break;
        }
      }
    }
    local_8 = CONCAT31(local_8._1_3_,0x90);
    puStack_2b98 = (undefined4 *)0x698c8c;
    _eh_vector_destructor_iterator_
              (auStack_39c,0x18,5,std::function<void___cdecl(void)>::~function<void___cdecl(void)>);
    local_8 = 0xffffffff;
    puStack_2b98 = (undefined4 *)0x698ca8;
    _eh_vector_destructor_iterator_
              (auStack_504,0x18,0xf,std::function<void___cdecl(void)>::~function<void___cdecl(void)>
              );
    ppvVar1 = ExceptionList;
    break;
  case 0x550:
    puStack_27e8 = (undefined1 *)&pfStack_2b9c;
    pfStack_2ba0 = (function<void___cdecl(void)> *)0x77635c;
    pcStack_2ba4 = (char *)0x698cf9;
    ExceptionList = &local_10;
    FUN_004054a0();
    pfStack_2ba0 = (function<void___cdecl(void)> *)0x698cfe;
    FUN_004c3570();
    uStack_215c = 0x78;
    FUN_004051c0();
    ui_clear_flag_bits_on_list();
    uStack_2160 = 0x78;
    puVar9 = (undefined1 *)FUN_005187c0();
    *puVar9 = 0;
    ppvVar1 = ExceptionList;
    break;
  case 0x55a:
    uStack_2164 = 0x78;
    ExceptionList = &local_10;
    pcVar10 = (char *)FUN_005187c0();
    if (*pcVar10 == '\x01') {
      ui_command_dispatch();
      ppvVar1 = ExceptionList;
    }
    else {
      uStack_2168 = 0x78;
      pcVar10 = (char *)FUN_005187c0();
      ppvVar1 = ExceptionList;
      if (*pcVar10 == '\0') {
        ui_command_dispatch();
        ppvVar1 = ExceptionList;
      }
    }
    break;
  case 0x564:
    uStack_20dc = 0x15e0;
    ExceptionList = &local_10;
    FUN_004051c0();
    ui_close_matching_widgets();
    uStack_20e0 = 0x1644;
    FUN_004051c0();
    ui_close_matching_widgets();
    ppvVar1 = ExceptionList;
    break;
  case 0x56e:
    puStack_27ec = (undefined1 *)&pfStack_2b9c;
    pfStack_2ba0 = (function<void___cdecl(void)> *)0x77634c;
    pcStack_2ba4 = (char *)0x698dc7;
    ExceptionList = &local_10;
    FUN_004054a0();
    pfStack_2ba0 = (function<void___cdecl(void)> *)0x698dcc;
    FUN_004c3570();
    iStack_216c = ui_ctx;
    iStack_1d1c = *(int *)(ui_ctx + 0x9d0);
    if (iStack_1d1c == 0) {
      ExceptionList = local_10;
      return;
    }
    uStack_27f0 = *(undefined4 *)(iStack_1d1c + 0x9d0);
    uStack_2170 = 0x3a;
    uStack_1d20 = FUN_004051c0();
    piStack_1bbc = (int *)FUN_004018d0();
    piStack_2174 = (int *)FUN_004018b0();
    for (; ppvVar1 = ExceptionList, piStack_1bbc != piStack_2174; piStack_1bbc = piStack_1bbc + 1) {
      piStack_19d0 = piStack_1bbc;
      cVar2 = FUN_00427c60();
      if (cVar2 != '\0') {
        ppvVar1 = ExceptionList;
        if ((*(char *)(*piStack_19d0 + 0xad0) != '\0') && (*(int *)(*piStack_19d0 + 0x828) != 0)) {
          iStack_1a18 = 0;
          piStack_19f4 = (int *)0x0;
          uStack_2178 = 0x3a;
          uStack_1d24 = FUN_004051c0();
          piStack_1b64 = (int *)FUN_004018d0();
          piStack_217c = (int *)FUN_004018b0();
          for (; piStack_1b64 != piStack_217c; piStack_1b64 = piStack_1b64 + 1) {
            piStack_1c6c = piStack_1b64;
            iVar14 = FUN_004277a0();
            if ((iVar14 != -1) || (iVar14 = FUN_004277a0(), iVar14 != -1)) {
              iStack_1a18 = *(int *)(*piStack_1c6c + 0x9d0);
              piStack_19f4 = *(int **)(iStack_1a18 + 0x9d0);
            }
          }
          if (((piStack_19f4[1] != 0) &&
              ((*(int *)(*piStack_19d0 + 0x9d0) == 0 ||
               (*(int *)(*(int *)(*piStack_19d0 + 0x9d0) + 0xa0c) != 6)))) &&
             ((*(int *)(*piStack_19d0 + 0x9d0) == 0 ||
              (*(int *)(*(int *)(*piStack_19d0 + 0x9d0) + 0xa0c) != 4)))) {
            if (*(int *)(*piStack_19d0 + 0x9d0) != 0) {
              uStack_2180 = 0xdac;
              puStack_27f4 = (undefined1 *)&pfStack_2b9c;
              pfStack_2ba0 = (function<void___cdecl(void)> *)&DAT_00776388;
              pcStack_2ba4 = (char *)0x699049;
              uStack_27f8 = FUN_004054a0();
              local_8 = 0x9b;
              pfStack_2ba0 = (function<void___cdecl(void)> *)&uStack_2180;
              pcStack_2ba4 = (char *)0x699067;
              pfStack_2ba0 = (function<void___cdecl(void)> *)FUN_004051c0();
              local_8 = 0xffffffff;
              pcStack_2ba4 = (char *)0x699074;
              iStack_2184 = ui_find_widget_by_key();
              if (*(int *)(*piStack_19d0 + 0x9d0) == iStack_2184) goto LAB_00699171;
            }
            if (((*(int *)(*piStack_19d0 + 0x9d0) == 0) ||
                (*(int *)(*(int *)(*piStack_19d0 + 0x9d0) + 0xa0c) != 9)) &&
               ((*(int *)(*piStack_19d0 + 0x9d0) == 0 ||
                (*(int *)(*(int *)(*piStack_19d0 + 0x9d0) + 0xa0c) != 10)))) {
              if (*(int *)(*piStack_19d0 + 0x9d0) != 0) {
                uStack_2188 = 0x14b4;
                puStack_27fc = (undefined1 *)&pfStack_2b9c;
                pfStack_2ba0 = (function<void___cdecl(void)> *)&DAT_0077637c;
                pcStack_2ba4 = (char *)0x699123;
                uStack_289c = FUN_004054a0();
                local_8 = 0x9c;
                pfStack_2ba0 = (function<void___cdecl(void)> *)&uStack_2188;
                pcStack_2ba4 = (char *)0x699141;
                pfStack_2ba0 = (function<void___cdecl(void)> *)FUN_004051c0();
                local_8 = 0xffffffff;
                pcStack_2ba4 = (char *)0x69914e;
                iStack_218c = ui_find_widget_by_key();
                if (*(int *)(*piStack_19d0 + 0x9d0) == iStack_218c) goto LAB_00699171;
              }
              if (*(int *)(iStack_1a18 + 0x4c) == 10) {
                cVar2 = FUN_00427c60();
                if ((cVar2 == '\0') &&
                   ((iVar14 = FUN_00410b30(), iVar14 != 1 ||
                    (pcVar10 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>
                               ::operator[]((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                             *)(*piStack_19d0 + 0xa4c),0), *pcVar10 != '0')))) {
                  uStack_21c0 = 0xd48;
                  FUN_004051c0();
                  cVar2 = FUN_006caa00();
                  if (cVar2 == '\0') {
                    uStack_21cc = 0x1450;
                    FUN_004051c0();
                    cVar2 = FUN_006caa00();
                    if (cVar2 != '\0') {
                      iVar14 = FUN_004cdfe0();
                      iVar6 = (iVar14 + 1) * *piStack_19f4;
                      iVar14 = FUN_00454ea0();
                      if (iVar6 - *(int *)(iVar14 + 0xac8) == 0 || iVar6 < *(int *)(iVar14 + 0xac8))
                      {
                        FUN_004cdfe0();
                        uStack_21d0 = FUN_004c7c00();
                        FUN_004053e0();
                        std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                  (afStack_a74);
                        iVar14 = FUN_004cdfe0();
                        if (piStack_19f4[2] <= iVar14) {
                          uStack_21d4 = FUN_004c7c00();
                          FUN_004053e0();
                          std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                    (afStack_a5c);
                        }
                      }
                      else {
                        FUN_00454ea0();
                        uStack_21d8 = FUN_004c7c00();
                        FUN_004053e0();
                        std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                  (afStack_a44);
                        iVar14 = FUN_004cdfe0();
                        if (piStack_19f4[2] <= iVar14) {
                          uStack_21dc = FUN_004c7c00();
                          FUN_004053e0();
                          std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                    (afStack_a2c);
                        }
                      }
                    }
                  }
                  else {
                    iVar6 = FUN_004cdfe0();
                    iVar14 = FUN_005cd6d0();
                    iVar14 = *(int *)(iVar14 + 0x104);
                    iVar12 = FUN_00454ea0();
                    if (*(int *)(iVar12 + 0xac8) < ((iVar6 + 1) * iVar14) / 5) {
                      FUN_00454ea0();
                      FUN_005cd6d0();
                      uStack_21c8 = FUN_004c7c00();
                      FUN_004053e0();
                      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_a8c);
                    }
                    else {
                      FUN_004cdfe0();
                      uStack_21c4 = FUN_004c7c00();
                      FUN_004053e0();
                      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_8f4);
                    }
                  }
                  CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(*piStack_19d0 + 0xa3c));
                  iVar14 = FUN_00410b30();
                  *(int *)(*(int *)(*piStack_19d0 + 0x828) + 0x24) = iVar14 * 6 + 0x26;
                  ppvVar1 = ExceptionList;
                }
                else {
                  uStack_21a0 = 0xd48;
                  FUN_004051c0();
                  cVar2 = FUN_006caa00();
                  if (cVar2 == '\0') {
                    uStack_21ac = 0x1450;
                    FUN_004051c0();
                    cVar2 = FUN_006caa00();
                    if (cVar2 != '\0') {
                      iVar14 = FUN_00454ea0();
                      if (*(int *)(iVar14 + 0xac8) < *piStack_19f4) {
                        FUN_00454ea0();
                        uStack_21b8 = FUN_004c7c00();
                        FUN_004053e0();
                        std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                  (afStack_ad4);
                        iVar14 = FUN_004cdfe0();
                        if (piStack_19f4[2] <= iVar14) {
                          uStack_21bc = FUN_004c7c00();
                          FUN_004053e0();
                          std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                    (afStack_abc);
                        }
                      }
                      else {
                        uStack_21b0 = FUN_004c7c00();
                        FUN_004053e0();
                        std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                  (afStack_b04);
                        iVar14 = FUN_004cdfe0();
                        if (piStack_19f4[2] <= iVar14) {
                          uStack_21b4 = FUN_004c7c00();
                          FUN_004053e0();
                          std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                    (afStack_aec);
                        }
                      }
                    }
                  }
                  else {
                    iVar14 = FUN_005cd6d0();
                    iVar14 = *(int *)(iVar14 + 0x104);
                    iVar6 = FUN_00454ea0();
                    if (*(int *)(iVar6 + 0xac8) < iVar14 / 5) {
                      FUN_00454ea0();
                      FUN_005cd6d0();
                      uStack_21a8 = FUN_004c7c00();
                      FUN_004053e0();
                      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_b1c);
                    }
                    else {
                      uStack_21a4 = FUN_004c7c00();
                      FUN_004053e0();
                      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_b34);
                    }
                  }
                  CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(*piStack_19d0 + 0xa3c));
                  iVar14 = FUN_00410b30();
                  *(int *)(*(int *)(*piStack_19d0 + 0x828) + 0x24) = iVar14 * 6 + 0x26;
                  ppvVar1 = ExceptionList;
                }
                break;
              }
              if (*(int *)(iStack_1a18 + 0x4c) == 0xb) {
LAB_00699b45:
                cVar2 = FUN_00427c60();
                if ((cVar2 == '\0') &&
                   ((iVar14 = FUN_00410b30(), iVar14 != 1 ||
                    (pcVar10 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>
                               ::operator[]((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                             *)(*piStack_19d0 + 0xa4c),0), *pcVar10 != '0')))) {
                  iVar14 = FUN_004cdfe0();
                  if (*(int *)(*piStack_19d0 + 0x9a0) < iVar14 + 1) {
                    uStack_21ec = FUN_004c7c00();
                    FUN_004053e0();
                    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_9cc);
                  }
                  else {
                    FUN_004cdfe0();
                    uStack_21e8 = FUN_004c7c00();
                    FUN_004053e0();
                    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_9e4);
                  }
                  CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(*piStack_19d0 + 0xa3c));
                  iVar14 = FUN_00410b30();
                  *(int *)(*(int *)(*piStack_19d0 + 0x828) + 0x24) = iVar14 * 6 + 0x26;
                  ppvVar1 = ExceptionList;
                }
                else {
                  if (*(int *)(*piStack_19d0 + 0x9a0) < 1) {
                    uStack_21e4 = FUN_004c7c00();
                    FUN_004053e0();
                    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_9fc);
                  }
                  else {
                    uStack_21e0 = FUN_004c7c00();
                    FUN_004053e0();
                    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_a14);
                  }
                  CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(*piStack_19d0 + 0xa3c));
                  iVar14 = FUN_00410b30();
                  *(int *)(*(int *)(*piStack_19d0 + 0x828) + 0x24) = iVar14 * 6 + 0x26;
                  ppvVar1 = ExceptionList;
                }
              }
              else {
                if ((*(int *)(iStack_1a18 + 0x9d0) != 0) &&
                   (iVar14 = FUN_006caba0(), iVar14 == 0x8e)) {
                  FUN_005cd6d0();
                  cVar2 = FUN_00427c60();
                  if (cVar2 != '\0') goto LAB_00699b45;
                }
                if ((*(int *)(iStack_1a18 + 0x4c) == 0xe) ||
                   (ppvVar1 = ExceptionList, *(int *)(iStack_1a18 + 0x4c) == 0xf)) {
                  cVar2 = FUN_00427c60();
                  if ((cVar2 == '\0') &&
                     ((iVar14 = FUN_00410b30(), iVar14 != 1 ||
                      (pcVar10 = std::
                                 basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                                 operator[]((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                             *)(*piStack_19d0 + 0xa4c),0), *pcVar10 != '0')))) {
                    iVar14 = FUN_004cdfe0();
                    if (piStack_19f4[2] < iVar14 + 1) {
                      uStack_21fc = FUN_004c7c00();
                      FUN_004053e0();
                      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_bdc);
                    }
                    else {
                      FUN_004cdfe0();
                      uStack_21f8 = FUN_004c7c00();
                      FUN_004053e0();
                      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_bf4);
                    }
                    CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(*piStack_19d0 + 0xa3c));
                    iVar14 = FUN_00410b30();
                    *(int *)(*(int *)(*piStack_19d0 + 0x828) + 0x24) = iVar14 * 6 + 0x26;
                    ppvVar1 = ExceptionList;
                  }
                  else {
                    if (piStack_19f4[2] < 1) {
                      uStack_21f4 = FUN_004c7c00();
                      FUN_004053e0();
                      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_99c);
                    }
                    else {
                      uStack_21f0 = FUN_004c7c00();
                      FUN_004053e0();
                      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_9b4);
                    }
                    CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(*piStack_19d0 + 0xa3c));
                    iVar14 = FUN_00410b30();
                    *(int *)(*(int *)(*piStack_19d0 + 0x828) + 0x24) = iVar14 * 6 + 0x26;
                    ppvVar1 = ExceptionList;
                  }
                }
              }
              break;
            }
          }
LAB_00699171:
          cVar2 = FUN_00427c60();
          if ((cVar2 == '\0') &&
             ((iVar14 = FUN_00410b30(), iVar14 != 1 ||
              (pcVar10 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                         operator[]((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                     *)(*piStack_19d0 + 0xa4c),0), *pcVar10 != '0')))) {
            iVar14 = FUN_004cdfe0();
            if (piStack_19f4[2] < iVar14 + 1) {
              uStack_219c = FUN_004c7c00();
              FUN_004053e0();
              std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_c0c);
            }
            else {
              FUN_004cdfe0();
              uStack_2198 = FUN_004c7c00();
              FUN_004053e0();
              std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_c24);
            }
            CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(*piStack_19d0 + 0xa3c));
            iVar14 = FUN_00410b30();
            *(int *)(*(int *)(*piStack_19d0 + 0x828) + 0x24) = iVar14 * 6 + 0x26;
            ppvVar1 = ExceptionList;
          }
          else {
            if (piStack_19f4[2] < 1) {
              uStack_2194 = FUN_004c7c00();
              FUN_004053e0();
              std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_c54);
            }
            else {
              uStack_2190 = FUN_004c7c00();
              FUN_004053e0();
              std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_c6c);
            }
            CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(*piStack_19d0 + 0xa3c));
            iVar14 = FUN_00410b30();
            *(int *)(*(int *)(*piStack_19d0 + 0x828) + 0x24) = iVar14 * 6 + 0x26;
            ppvVar1 = ExceptionList;
          }
        }
        break;
      }
    }
    break;
  case 0x578:
    puStack_2800 = (undefined1 *)&pfStack_2b9c;
    pfStack_2ba0 = (function<void___cdecl(void)> *)0x7763c4;
    pcStack_2ba4 = (char *)0x69a011;
    ExceptionList = &local_10;
    FUN_004054a0();
    pfStack_2ba0 = (function<void___cdecl(void)> *)0x69a016;
    FUN_004c3570();
    iStack_2200 = ui_ctx;
    iStack_1d5c = *(int *)(ui_ctx + 0x9d0);
    if (iStack_1d5c == 0) {
      ExceptionList = local_10;
      return;
    }
    uStack_2804 = *(undefined4 *)(iStack_1d5c + 0x9d0);
    uStack_2204 = 0x3a;
    uStack_1d28 = FUN_004051c0();
    piStack_1bb4 = (int *)FUN_004018d0();
    piStack_2208 = (int *)FUN_004018b0();
    for (; ppvVar1 = ExceptionList, piStack_1bb4 != piStack_2208; piStack_1bb4 = piStack_1bb4 + 1) {
      piStack_1a08 = piStack_1bb4;
      cVar2 = FUN_00427c60();
      if (cVar2 != '\0') {
        ppvVar1 = ExceptionList;
        if ((*(char *)(*piStack_1a08 + 0xad0) != '\0') && (*(int *)(*piStack_1a08 + 0x828) != 0)) {
          uStack_220c = 0x3a;
          uStack_1d2c = FUN_004051c0();
          piStack_1bb0 = (int *)FUN_004018d0();
          piStack_2210 = (int *)FUN_004018b0();
          for (; piStack_1bb0 != piStack_2210; piStack_1bb0 = piStack_1bb0 + 1) {
            piStack_1c68 = piStack_1bb0;
            iVar14 = FUN_004277a0();
            if ((iVar14 != -1) || (iVar14 = FUN_004277a0(), iVar14 != -1)) {
              iStack_2214 = *(int *)(*piStack_1c68 + 0x9d0);
              uStack_2808 = *(undefined4 *)(iStack_2214 + 0x9d0);
            }
          }
          cVar2 = FUN_00427c60();
          ppvVar1 = ExceptionList;
          if (cVar2 == '\0') {
            iVar14 = FUN_00410b30();
            if ((iVar14 == 1) &&
               (pcVar10 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                          operator[]((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                      *)(*piStack_1a08 + 0xa4c),0), *pcVar10 == '0')) {
              uStack_2218 = FUN_004c7c00();
              FUN_004053e0();
              std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_bc4);
              CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(*piStack_1a08 + 0xa3c));
              iVar14 = FUN_00410b30();
              *(int *)(*(int *)(*piStack_1a08 + 0x828) + 0x24) = iVar14 * 6 + 0x26;
              ppvVar1 = ExceptionList;
            }
            else {
              iVar14 = FUN_004cdfe0();
              if (iVar14 + -1 < 0) {
                uStack_2220 = FUN_004c7c00();
                FUN_004053e0();
                std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_b94);
              }
              else {
                FUN_004cdfe0();
                uStack_221c = FUN_004c7c00();
                FUN_004053e0();
                std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_bac);
              }
              CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(*piStack_1a08 + 0xa3c));
              iVar14 = FUN_00410b30();
              *(int *)(*(int *)(*piStack_1a08 + 0x828) + 0x24) = iVar14 * 6 + 0x26;
              ppvVar1 = ExceptionList;
            }
          }
        }
        break;
      }
    }
    break;
  case 0x582:
    puStack_280c = (undefined1 *)&pfStack_2b9c;
    pfStack_2ba0 = (function<void___cdecl(void)> *)0x7763e4;
    pcStack_2ba4 = (char *)0x69a3e0;
    ExceptionList = &local_10;
    FUN_004054a0();
    pfStack_2ba0 = (function<void___cdecl(void)> *)0x69a3e5;
    FUN_004c3570();
    iStack_2224 = ui_ctx;
    iStack_1d30 = *(int *)(ui_ctx + 0x9d0);
    if (iStack_1d30 == 0) {
      ExceptionList = local_10;
      return;
    }
    uStack_2810 = *(undefined4 *)(iStack_1d30 + 0x9d0);
    uStack_2228 = 0x3a;
    uStack_1d34 = FUN_004051c0();
    piStack_1bac = (int *)FUN_004018d0();
    piStack_222c = (int *)FUN_004018b0();
    for (; ppvVar1 = ExceptionList, piStack_1bac != piStack_222c; piStack_1bac = piStack_1bac + 1) {
      piStack_19d4 = piStack_1bac;
      cVar2 = FUN_00427c60();
      if (cVar2 != '\0') {
        ppvVar1 = ExceptionList;
        if ((*(char *)(*piStack_19d4 + 0xad0) != '\0') && (*(int *)(*piStack_19d4 + 0x828) != 0)) {
          uStack_2230 = 0x3a;
          uStack_1d38 = FUN_004051c0();
          piStack_1ba8 = (int *)FUN_004018d0();
          piStack_2234 = (int *)FUN_004018b0();
          for (; piStack_1ba8 != piStack_2234; piStack_1ba8 = piStack_1ba8 + 1) {
            piStack_1c34 = piStack_1ba8;
            iVar14 = FUN_004277a0();
            if ((iVar14 != -1) || (iVar14 = FUN_004277a0(), iVar14 != -1)) {
              iStack_1a2c = *(int *)(*piStack_1c34 + 0x9d0);
              piStack_19f8 = *(int **)(iStack_1a2c + 0x9d0);
            }
          }
          if (((piStack_19f8[1] != 0) &&
              ((*(int *)(*piStack_19d4 + 0x9d0) == 0 ||
               (*(int *)(*(int *)(*piStack_19d4 + 0x9d0) + 0xa0c) != 6)))) &&
             ((*(int *)(*piStack_19d4 + 0x9d0) == 0 ||
              (*(int *)(*(int *)(*piStack_19d4 + 0x9d0) + 0xa0c) != 4)))) {
            if (*(int *)(*piStack_19d4 + 0x9d0) != 0) {
              uStack_2238 = 0xdac;
              puStack_2814 = (undefined1 *)&pfStack_2b9c;
              pfStack_2ba0 = (function<void___cdecl(void)> *)&DAT_00776408;
              pcStack_2ba4 = (char *)0x69a64e;
              uStack_2818 = FUN_004054a0();
              local_8 = 0x9d;
              pfStack_2ba0 = (function<void___cdecl(void)> *)&uStack_2238;
              pcStack_2ba4 = (char *)0x69a66c;
              pfStack_2ba0 = (function<void___cdecl(void)> *)FUN_004051c0();
              local_8 = 0xffffffff;
              pcStack_2ba4 = (char *)0x69a679;
              iStack_223c = ui_find_widget_by_key();
              if (*(int *)(*piStack_19d4 + 0x9d0) == iStack_223c) goto LAB_0069a776;
            }
            if (((*(int *)(*piStack_19d4 + 0x9d0) == 0) ||
                (*(int *)(*(int *)(*piStack_19d4 + 0x9d0) + 0xa0c) != 9)) &&
               ((*(int *)(*piStack_19d4 + 0x9d0) == 0 ||
                (*(int *)(*(int *)(*piStack_19d4 + 0x9d0) + 0xa0c) != 10)))) {
              if (*(int *)(*piStack_19d4 + 0x9d0) != 0) {
                uStack_2240 = 0x14b4;
                puStack_281c = (undefined1 *)&pfStack_2b9c;
                pfStack_2ba0 = (function<void___cdecl(void)> *)&DAT_007763fc;
                pcStack_2ba4 = (char *)0x69a728;
                uStack_2820 = FUN_004054a0();
                local_8 = 0x9e;
                pfStack_2ba0 = (function<void___cdecl(void)> *)&uStack_2240;
                pcStack_2ba4 = (char *)0x69a746;
                pfStack_2ba0 = (function<void___cdecl(void)> *)FUN_004051c0();
                local_8 = 0xffffffff;
                pcStack_2ba4 = (char *)0x69a753;
                iStack_2244 = ui_find_widget_by_key();
                if (*(int *)(*piStack_19d4 + 0x9d0) == iStack_2244) goto LAB_0069a776;
              }
              if (*(int *)(iStack_1a2c + 0x4c) == 10) {
                cVar2 = FUN_00427c60();
                if ((cVar2 == '\0') &&
                   ((iVar14 = FUN_00410b30(), iVar14 != 1 ||
                    (pcVar10 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>
                               ::operator[]((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                             *)(*piStack_19d4 + 0xa4c),0), *pcVar10 != '0')))) {
                  uStack_2278 = 0xd48;
                  FUN_004051c0();
                  cVar2 = FUN_006caa00();
                  if (cVar2 == '\0') {
                    uStack_2284 = 0x1450;
                    FUN_004051c0();
                    cVar2 = FUN_006caa00();
                    if (cVar2 != '\0') {
                      iVar14 = FUN_004cdfe0();
                      iVar6 = (iVar14 + 10) * *piStack_19f8;
                      iVar14 = FUN_00454ea0();
                      if (iVar6 - *(int *)(iVar14 + 0xac8) == 0 || iVar6 < *(int *)(iVar14 + 0xac8))
                      {
                        FUN_004cdfe0();
                        uStack_2288 = FUN_004c7c00();
                        FUN_004053e0();
                        std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                  (afStack_e04);
                        iVar14 = FUN_004cdfe0();
                        if (piStack_19f8[2] <= iVar14) {
                          uStack_228c = FUN_004c7c00();
                          FUN_004053e0();
                          std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                    (afStack_1044);
                        }
                      }
                      else {
                        FUN_00454ea0();
                        uStack_2290 = FUN_004c7c00();
                        FUN_004053e0();
                        std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                  (afStack_dec);
                        iVar14 = FUN_004cdfe0();
                        if (piStack_19f8[2] <= iVar14) {
                          uStack_2294 = FUN_004c7c00();
                          FUN_004053e0();
                          std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                    (afStack_102c);
                        }
                      }
                    }
                  }
                  else {
                    iVar6 = FUN_004cdfe0();
                    iVar14 = FUN_005cd6d0();
                    iVar14 = *(int *)(iVar14 + 0x104);
                    iVar12 = FUN_00454ea0();
                    if (*(int *)(iVar12 + 0xac8) < ((iVar6 + 10) * iVar14) / 5) {
                      FUN_00454ea0();
                      FUN_005cd6d0();
                      uStack_2280 = FUN_004c7c00();
                      FUN_004053e0();
                      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_105c)
                      ;
                    }
                    else {
                      FUN_004cdfe0();
                      uStack_227c = FUN_004c7c00();
                      FUN_004053e0();
                      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_1074)
                      ;
                    }
                  }
                  CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(*piStack_19d4 + 0xa3c));
                  iVar14 = FUN_00410b30();
                  *(int *)(*(int *)(*piStack_19d4 + 0x828) + 0x24) = iVar14 * 6 + 0x26;
                  ppvVar1 = ExceptionList;
                }
                else {
                  uStack_2258 = 0xd48;
                  FUN_004051c0();
                  cVar2 = FUN_006caa00();
                  if (cVar2 == '\0') {
                    uStack_2264 = 0x1450;
                    FUN_004051c0();
                    cVar2 = FUN_006caa00();
                    if (cVar2 != '\0') {
                      iVar14 = *piStack_19f8;
                      iVar6 = FUN_00454ea0();
                      if (iVar14 * 10 - *(int *)(iVar6 + 0xac8) == 0 ||
                          iVar14 * 10 < *(int *)(iVar6 + 0xac8)) {
                        uStack_2268 = FUN_004c7c00();
                        FUN_004053e0();
                        std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                  (afStack_93c);
                        iVar14 = FUN_004cdfe0();
                        if (piStack_19f8[2] <= iVar14) {
                          uStack_226c = FUN_004c7c00();
                          FUN_004053e0();
                          std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                    (afStack_924);
                        }
                      }
                      else {
                        FUN_00454ea0();
                        uStack_2270 = FUN_004c7c00();
                        FUN_004053e0();
                        std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                  (afStack_90c);
                        iVar14 = FUN_004cdfe0();
                        if (piStack_19f8[2] <= iVar14) {
                          uStack_2274 = FUN_004c7c00();
                          FUN_004053e0();
                          std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                    (afStack_108c);
                        }
                      }
                    }
                  }
                  else {
                    iVar14 = FUN_005cd6d0();
                    iVar14 = *(int *)(iVar14 + 0x104);
                    iVar6 = FUN_00454ea0();
                    if (*(int *)(iVar6 + 0xac8) < (iVar14 * 10) / 5) {
                      FUN_00454ea0();
                      FUN_005cd6d0();
                      uStack_2260 = FUN_004c7c00();
                      FUN_004053e0();
                      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_954);
                    }
                    else {
                      uStack_225c = FUN_004c7c00();
                      FUN_004053e0();
                      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_96c);
                    }
                  }
                  CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(*piStack_19d4 + 0xa3c));
                  iVar14 = FUN_00410b30();
                  *(int *)(*(int *)(*piStack_19d4 + 0x828) + 0x24) = iVar14 * 6 + 0x26;
                  ppvVar1 = ExceptionList;
                }
                break;
              }
              if (*(int *)(iStack_1a2c + 0x4c) == 0xb) {
LAB_0069b14c:
                cVar2 = FUN_00427c60();
                if ((cVar2 == '\0') &&
                   ((iVar14 = FUN_00410b30(), iVar14 != 1 ||
                    (pcVar10 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>
                               ::operator[]((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                             *)(*piStack_19d4 + 0xa4c),0), *pcVar10 != '0')))) {
                  iVar14 = FUN_004cdfe0();
                  if (*(int *)(*piStack_19d4 + 0x9a0) < iVar14 + 10) {
                    uStack_22a4 = FUN_004c7c00();
                    FUN_004053e0();
                    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_fcc);
                  }
                  else {
                    FUN_004cdfe0();
                    uStack_22a0 = FUN_004c7c00();
                    FUN_004053e0();
                    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_fe4);
                  }
                  CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(*piStack_19d4 + 0xa3c));
                  iVar14 = FUN_00410b30();
                  *(int *)(*(int *)(*piStack_19d4 + 0x828) + 0x24) = iVar14 * 6 + 0x26;
                  ppvVar1 = ExceptionList;
                }
                else {
                  if (*(int *)(*piStack_19d4 + 0x9a0) < 10) {
                    uStack_229c = FUN_004c7c00();
                    FUN_004053e0();
                    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_ffc);
                  }
                  else {
                    uStack_2298 = FUN_004c7c00();
                    FUN_004053e0();
                    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_1014);
                  }
                  CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(*piStack_19d4 + 0xa3c));
                  iVar14 = FUN_00410b30();
                  *(int *)(*(int *)(*piStack_19d4 + 0x828) + 0x24) = iVar14 * 6 + 0x26;
                  ppvVar1 = ExceptionList;
                }
              }
              else {
                if ((*(int *)(iStack_1a2c + 0x9d0) != 0) &&
                   (iVar14 = FUN_006caba0(), iVar14 == 0x8e)) {
                  FUN_005cd6d0();
                  cVar2 = FUN_00427c60();
                  if (cVar2 != '\0') goto LAB_0069b14c;
                }
                if ((*(int *)(iStack_1a2c + 0x4c) == 0xe) ||
                   (ppvVar1 = ExceptionList, *(int *)(iStack_1a2c + 0x4c) == 0xf)) {
                  cVar2 = FUN_00427c60();
                  if ((cVar2 == '\0') &&
                     ((iVar14 = FUN_00410b30(), iVar14 != 1 ||
                      (pcVar10 = std::
                                 basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                                 operator[]((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                             *)(*piStack_19d4 + 0xa4c),0), *pcVar10 != '0')))) {
                    iVar14 = FUN_004cdfe0();
                    if (piStack_19f8[2] < iVar14 + 10) {
                      uStack_22b4 = FUN_004c7c00();
                      FUN_004053e0();
                      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_f6c);
                    }
                    else {
                      FUN_004cdfe0();
                      uStack_22b0 = FUN_004c7c00();
                      FUN_004053e0();
                      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_f84);
                    }
                    CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(*piStack_19d4 + 0xa3c));
                    iVar14 = FUN_00410b30();
                    *(int *)(*(int *)(*piStack_19d4 + 0x828) + 0x24) = iVar14 * 6 + 0x26;
                    ppvVar1 = ExceptionList;
                  }
                  else {
                    if (piStack_19f8[2] < 10) {
                      uStack_22ac = FUN_004c7c00();
                      FUN_004053e0();
                      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_f9c);
                    }
                    else {
                      uStack_22a8 = FUN_004c7c00();
                      FUN_004053e0();
                      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_fb4);
                    }
                    CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(*piStack_19d4 + 0xa3c));
                    iVar14 = FUN_00410b30();
                    *(int *)(*(int *)(*piStack_19d4 + 0x828) + 0x24) = iVar14 * 6 + 0x26;
                    ppvVar1 = ExceptionList;
                  }
                }
              }
              break;
            }
          }
LAB_0069a776:
          cVar2 = FUN_00427c60();
          if ((cVar2 == '\0') &&
             ((iVar14 = FUN_00410b30(), iVar14 != 1 ||
              (pcVar10 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                         operator[]((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                     *)(*piStack_19d4 + 0xa4c),0), *pcVar10 != '0')))) {
            iVar14 = FUN_004cdfe0();
            if (piStack_19f8[2] < iVar14 + 10) {
              uStack_2254 = FUN_004c7c00();
              FUN_004053e0();
              std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_984);
            }
            else {
              FUN_004cdfe0();
              uStack_2250 = FUN_004c7c00();
              FUN_004053e0();
              std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_b4c);
            }
            CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(*piStack_19d4 + 0xa3c));
            iVar14 = FUN_00410b30();
            *(int *)(*(int *)(*piStack_19d4 + 0x828) + 0x24) = iVar14 * 6 + 0x26;
            ppvVar1 = ExceptionList;
          }
          else {
            if (piStack_19f8[2] < 10) {
              uStack_224c = FUN_004c7c00();
              FUN_004053e0();
              std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_b64);
            }
            else {
              uStack_2248 = FUN_004c7c00();
              FUN_004053e0();
              std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_b7c);
            }
            CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(*piStack_19d4 + 0xa3c));
            iVar14 = FUN_00410b30();
            *(int *)(*(int *)(*piStack_19d4 + 0x828) + 0x24) = iVar14 * 6 + 0x26;
            ppvVar1 = ExceptionList;
          }
        }
        break;
      }
    }
    break;
  case 0x58c:
    puStack_2824 = (undefined1 *)&pfStack_2b9c;
    pfStack_2ba0 = (function<void___cdecl(void)> *)0x776444;
    pcStack_2ba4 = (char *)0x69b618;
    ExceptionList = &local_10;
    FUN_004054a0();
    pfStack_2ba0 = (function<void___cdecl(void)> *)0x69b61d;
    FUN_004c3570();
    iStack_22b8 = ui_ctx;
    iStack_1d3c = *(int *)(ui_ctx + 0x9d0);
    if (iStack_1d3c == 0) {
      ExceptionList = local_10;
      return;
    }
    uStack_2828 = *(undefined4 *)(iStack_1d3c + 0x9d0);
    uStack_22bc = 0x3a;
    uStack_1ddc = FUN_004051c0();
    piStack_1ba4 = (int *)FUN_004018d0();
    piStack_22c0 = (int *)FUN_004018b0();
    for (; ppvVar1 = ExceptionList, piStack_1ba4 != piStack_22c0; piStack_1ba4 = piStack_1ba4 + 1) {
      piStack_1a04 = piStack_1ba4;
      cVar2 = FUN_00427c60();
      if (cVar2 != '\0') {
        ppvVar1 = ExceptionList;
        if ((*(char *)(*piStack_1a04 + 0xad0) != '\0') && (*(int *)(*piStack_1a04 + 0x828) != 0)) {
          uStack_22c4 = 0x3a;
          uStack_1dd8 = FUN_004051c0();
          piStack_1ba0 = (int *)FUN_004018d0();
          piStack_22c8 = (int *)FUN_004018b0();
          for (; piStack_1ba0 != piStack_22c8; piStack_1ba0 = piStack_1ba0 + 1) {
            piStack_1c64 = piStack_1ba0;
            iVar14 = FUN_004277a0();
            if ((iVar14 != -1) || (iVar14 = FUN_004277a0(), iVar14 != -1)) {
              iStack_22cc = *(int *)(*piStack_1c64 + 0x9d0);
              uStack_282c = *(undefined4 *)(iStack_22cc + 0x9d0);
            }
          }
          cVar2 = FUN_00427c60();
          ppvVar1 = ExceptionList;
          if (cVar2 == '\0') {
            iVar14 = FUN_00410b30();
            if ((iVar14 == 1) &&
               (pcVar10 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                          operator[]((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                      *)(*piStack_1a04 + 0xa4c),0), *pcVar10 == '0')) {
              uStack_22d0 = FUN_004c7c00();
              FUN_004053e0();
              std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_f54);
              CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(*piStack_1a04 + 0xa3c));
              iVar14 = FUN_00410b30();
              *(int *)(*(int *)(*piStack_1a04 + 0x828) + 0x24) = iVar14 * 6 + 0x26;
              ppvVar1 = ExceptionList;
            }
            else {
              iVar14 = FUN_004cdfe0();
              if (iVar14 + -10 < 0) {
                uStack_22d8 = FUN_004c7c00();
                FUN_004053e0();
                std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_f24);
              }
              else {
                FUN_004cdfe0();
                uStack_22d4 = FUN_004c7c00();
                FUN_004053e0();
                std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_f3c);
              }
              CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(*piStack_1a04 + 0xa3c));
              iVar14 = FUN_00410b30();
              *(int *)(*(int *)(*piStack_1a04 + 0x828) + 0x24) = iVar14 * 6 + 0x26;
              ppvVar1 = ExceptionList;
            }
          }
        }
        break;
      }
    }
    break;
  case 0x596:
    puStack_2838 = (undefined1 *)&pfStack_2b9c;
    pfStack_2ba0 = (function<void___cdecl(void)> *)0x776464;
    pcStack_2ba4 = (char *)0x69ba9d;
    ExceptionList = &local_10;
    FUN_004054a0();
    pfStack_2ba0 = (function<void___cdecl(void)> *)0x69baa2;
    FUN_004c3570();
    iStack_22dc = ui_ctx;
    iStack_19f0 = *(int *)(ui_ctx + 0x9d0);
    if (iStack_19f0 == 0) {
      ExceptionList = local_10;
      return;
    }
    FUN_00642750();
    FUN_00489e00();
    FUN_00642750();
    FUN_00489da0();
    cVar2 = FUN_0040d2d0();
    if (cVar2 != '\0') {
      FUN_00642750();
      FUN_0040d5c0();
      piVar5 = (int *)FUN_00401a70();
      if (*(int *)(iStack_19f0 + 0x10) != *piVar5) {
        ExceptionList = local_10;
        return;
      }
    }
    puStack_19e0 = *(undefined **)(iStack_19f0 + 0x9d0);
    uStack_22e0 = 0x3a;
    puStack_2844 = (undefined1 *)&pfStack_2b9c;
    pfStack_2ba0 = (function<void___cdecl(void)> *)&DAT_00776454;
    pcStack_2ba4 = (char *)0x69bb7f;
    uStack_2848 = FUN_004054a0();
    local_8 = 0x9f;
    pfStack_2ba0 = (function<void___cdecl(void)> *)&uStack_22e0;
    pcStack_2ba4 = (char *)0x69bb9d;
    pfStack_2ba0 = (function<void___cdecl(void)> *)FUN_004051c0();
    local_8 = 0xffffffff;
    pcStack_2ba4 = (char *)0x69bbaa;
    iStack_22e4 = ui_find_widget_by_key();
    ppvVar1 = ExceptionList;
    iStack_19e8 = iStack_22e4;
    if (iStack_22e4 == 0) break;
    cVar2 = FUN_00427e30();
    if ((cVar2 == '\0') || (cVar2 = FUN_00427e30(), cVar2 == '\0')) {
      uStack_23e4 = 0x3a;
      FUN_004051c0();
      ui_close_matching_widgets();
      ppvVar1 = ExceptionList;
      break;
    }
    if (*(int *)(iStack_19f0 + 0x4c) == 0xd) {
      FUN_00454ea0();
      puStack_2b98 = (undefined4 *)0x69bc40;
      FUN_004cdfe0();
      cVar2 = FUN_0067e9b0();
      if (cVar2 == '\0') {
        ExceptionList = local_10;
        return;
      }
      uStack_22e8 = 0x42e;
      puStack_284c = (undefined1 *)&pfStack_2b9c;
      pfStack_2ba0 = (function<void___cdecl(void)> *)0x776488;
      pcStack_2ba4 = (char *)0x69bc77;
      uStack_2850 = FUN_004054a0();
      local_8 = 0xa0;
      pfStack_2ba0 = (function<void___cdecl(void)> *)&uStack_22e8;
      pcStack_2ba4 = (char *)0x69bc95;
      pfStack_2ba0 = (function<void___cdecl(void)> *)FUN_004051c0();
      local_8 = 0xffffffff;
      pcStack_2ba4 = (char *)0x69bca2;
      iStack_22ec = ui_find_widget_by_key();
      if (*(char *)(iStack_22ec + 0x9a8) == '\0') {
        uStack_22f0 = 0x42e;
        puStack_2854 = (undefined1 *)&pfStack_2b9c;
        pfStack_2ba0 = (function<void___cdecl(void)> *)0x77647c;
        pcStack_2ba4 = (char *)0x69bcdf;
        uStack_2858 = FUN_004054a0();
        local_8 = 0xa1;
        pfStack_2ba0 = (function<void___cdecl(void)> *)&uStack_22f0;
        pcStack_2ba4 = (char *)0x69bcfd;
        pfStack_2ba0 = (function<void___cdecl(void)> *)FUN_004051c0();
        local_8 = 0xffffffff;
        pcStack_2ba4 = (char *)0x69bd0a;
        iStack_22f4 = ui_find_widget_by_key();
        *(undefined1 *)(iStack_22f4 + 0x9a8) = 1;
        FUN_00454ea0();
        puStack_2b98 = (undefined4 *)0x69bd3c;
        FUN_004cdfe0();
        puStack_2b98 = (undefined4 *)0x69bd57;
        FUN_006a3b20();
        FUN_00454ea0();
        FUN_00454ea0();
        puStack_2b98 = (undefined4 *)0x69bd7d;
        FUN_004cdfe0();
        FUN_00680fb0();
        acStack_2300[0] = '.';
        acStack_2300[1] = '\x04';
        acStack_2300[2] = '\0';
        acStack_2300[3] = '\0';
        FUN_004cdfe0();
        uStack_22fc = FUN_004c7c70();
        local_8 = 0xa2;
        puStack_285c = (undefined1 *)&pcStack_2ba4;
        pcStack_2ba8 = "TradeWindow";
        apfStack_2bb0[1] = (function<void___cdecl(void)> *)0x69bdfa;
        uStack_22f8 = uStack_22fc;
        uStack_2860 = FUN_004054a0();
        local_8._0_1_ = 0xa3;
        pcStack_2ba8 = acStack_2300;
        apfStack_2bb0[1] = (function<void___cdecl(void)> *)0x69be15;
        pcStack_2ba8 = (char *)FUN_004051c0();
        local_8 = CONCAT31(local_8._1_3_,0xa2);
        apfStack_2bb0[1] = (function<void___cdecl(void)> *)0x69be1f;
        uStack_2304 = ui_find_widget_by_key();
        uStack_2308 = FUN_00427200();
        FUN_004053e0();
        local_8 = 0xffffffff;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_f0c);
        acStack_230c[0] = '.';
        acStack_230c[1] = '\x04';
        acStack_230c[2] = '\0';
        acStack_230c[3] = '\0';
        puStack_2864 = (undefined1 *)&pfStack_2ba0;
        pcStack_2ba4 = "TradeWindow";
        pcStack_2ba8 = (char *)0x69be81;
        uStack_2868 = FUN_004054a0();
        local_8 = 0xa4;
        pcStack_2ba4 = acStack_230c;
        pcStack_2ba8 = (char *)0x69be9f;
        pcStack_2ba4 = (char *)FUN_004051c0();
        local_8 = 0xffffffff;
        pcStack_2ba8 = (char *)0x69beac;
        uStack_2310 = ui_find_widget_by_key();
        pCStack_2314 = (CDocObjectServer *)FUN_00427200();
        CDocObjectServer::ReleaseDocSite(pCStack_2314);
      }
    }
    else if (*(int *)(iStack_19f0 + 0x4c) == 0xe) {
      FUN_0040a880();
      local_8 = 0xa5;
      FUN_00426c50();
      uStack_1368 = FUN_004cdfe0();
      FUN_00454ea0();
      uStack_2318 = FUN_0067f440();
      cStack_1a91 = FUN_00427e30();
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_ef4);
      if (cStack_1a91 == '\0') {
        FUN_00454ea0();
        puStack_2b98 = (undefined4 *)0x69bfd0;
        FUN_0067f8c0();
        iVar14 = FUN_004cdfe0();
        *(int *)(puStack_19e0 + 8) = *(int *)(puStack_19e0 + 8) - iVar14;
        if (*(int *)(puStack_19e0 + 8) < 1) {
          FUN_0040a900();
        }
        FUN_00454ea0();
        FUN_006cdee0();
        FUN_00454ea0();
        puStack_2b98 = (undefined4 *)0x10cc;
        pfStack_2b9c = (function<void___cdecl(void)> *)0x69c06a;
        FUN_006a4370();
      }
      else {
        puStack_2b98 = (undefined4 *)0xa;
        puStack_286c = (undefined1 *)apfStack_2bb0;
        puStack_2bb4 = (undefined4 *)auStack_1370;
        puStack_2bb8 = (undefined *)0x69bfa3;
        puStack_2bb8 = (undefined *)FUN_00454ea0();
        uStack_2bc0 = 0x69bfaa;
        puStack_2bbc = (undefined1 *)apfStack_2bb0;
        FUN_0067f440();
        puStack_2bb4 = (undefined4 *)0x69bfb2;
        FUN_006634f0();
      }
      local_8 = 0xffffffff;
      FUN_004039a0();
    }
    else if (*(int *)(iStack_19f0 + 0x98c) == 0x578) {
      FUN_0040a880();
      local_8 = 0xa6;
      FUN_00426c50();
      uStack_13fc = FUN_004cdfe0();
      FUN_00454ea0();
      uStack_231c = FUN_0067f440();
      cStack_1a92 = FUN_00427e30();
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_edc);
      if (cStack_1a92 == '\0') {
        FUN_00454ea0();
        puStack_2b98 = (undefined4 *)0x69c17d;
        pfStack_1c60 = (function<void___cdecl(void)> *)FUN_0067f8c0();
        iVar14 = FUN_004cdfe0();
        *(int *)(puStack_19e0 + 8) = *(int *)(puStack_19e0 + 8) - iVar14;
        if (*(int *)(puStack_19e0 + 8) < 1) {
          FUN_0040a900();
        }
        FUN_00454ea0();
        FUN_006cdee0();
        FUN_00454ea0();
        puStack_2b98 = (undefined4 *)0x69c207;
        FUN_006c9280();
        FUN_00454ea0();
        puStack_2b98 = (undefined4 *)auStack_2b68;
        pfStack_2b9c = (function<void___cdecl(void)> *)0x69c227;
        FUN_006c9280();
        puStack_2b98 = (undefined4 *)0x69c239;
        puStack_2b98 = (undefined4 *)FUN_00454ea0();
        pfStack_2b9c = pfStack_1c60;
        pfStack_2ba0 = afStack_2b70;
        pcStack_2ba4 = (char *)0x69c24d;
        iVar14 = FUN_006c9280();
        puStack_2b98 = *(undefined4 **)(iVar14 + 4);
        pfStack_2b9c = (function<void___cdecl(void)> *)0x69c259;
        pfStack_2b9c = (function<void___cdecl(void)> *)FUN_00454ea0();
        pfStack_2ba0 = pfStack_1c60;
        pcStack_2ba4 = acStack_2b78;
        pcStack_2ba8 = (char *)0x69c26d;
        piVar5 = (int *)FUN_006c9280();
        pfStack_2b9c = (function<void___cdecl(void)> *)*piVar5;
        pfStack_2ba0 = (function<void___cdecl(void)> *)0x0;
        pcStack_2ba4 = (char *)0x69c27a;
        FUN_0067b1a0();
      }
      else {
        puStack_2b98 = (undefined4 *)0xa;
        puStack_2870 = (undefined1 *)apfStack_2bb0;
        puStack_2bb4 = (undefined4 *)auStack_1404;
        puStack_2bb8 = (undefined *)0x69c150;
        puStack_2bb8 = (undefined *)FUN_00454ea0();
        uStack_2bc0 = 0x69c157;
        puStack_2bbc = (undefined1 *)apfStack_2bb0;
        FUN_0067f440();
        puStack_2bb4 = (undefined4 *)0x69c15f;
        FUN_006634f0();
      }
      local_8 = 0xffffffff;
      FUN_004039a0();
    }
    else if (*(int *)(iStack_19f0 + 0x4c) == 0xf) {
      FUN_0040a880();
      local_8 = 0xa7;
      FUN_00426c50();
      uStack_1524 = FUN_004cdfe0();
      FUN_00454ea0();
      uStack_2320 = FUN_0067f440();
      cStack_1a93 = FUN_00427e30();
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_ec4);
      if (cStack_1a93 == '\0') {
        FUN_00454ea0();
        puStack_2b98 = (undefined4 *)0x69c385;
        FUN_0067f8c0();
        iVar14 = FUN_004cdfe0();
        *(int *)(puStack_19e0 + 8) = *(int *)(puStack_19e0 + 8) - iVar14;
        if (*(int *)(puStack_19e0 + 8) < 1) {
          FUN_0040a900();
        }
        FUN_00454ea0();
        FUN_006cdee0();
      }
      else {
        puStack_2b98 = (undefined4 *)0xa;
        puStack_2874 = (undefined1 *)apfStack_2bb0;
        puStack_2bb4 = (undefined4 *)auStack_152c;
        puStack_2bb8 = (undefined *)0x69c35b;
        puStack_2bb8 = (undefined *)FUN_00454ea0();
        uStack_2bc0 = 0x69c362;
        puStack_2bbc = (undefined1 *)apfStack_2bb0;
        FUN_0067f440();
        puStack_2bb4 = (undefined4 *)0x69c36a;
        FUN_006634f0();
      }
      local_8 = 0xffffffff;
      FUN_004039a0();
    }
    else if (*(int *)(iStack_19f0 + 0x4c) == 10) {
      uStack_2324 = 0xd48;
      FUN_004051c0();
      cVar2 = FUN_006caa00();
      if (cVar2 == '\0') {
        uStack_2328 = 0x1450;
        FUN_004051c0();
        cVar2 = FUN_006caa00();
        if (cVar2 != '\0') {
          FUN_004cdfe0();
          puStack_2b98 = (undefined4 *)0x69c58f;
          FUN_004cdfe0();
          FUN_005cd6d0();
          FUN_0040d7f0();
          puStack_2b98 = (undefined4 *)auStack_134;
          pfStack_2b9c = (function<void___cdecl(void)> *)0x69c5c1;
          FUN_00414e80();
          FUN_004cdfe0();
          puStack_2b98 = (undefined4 *)0x1450;
          puStack_287c = (undefined1 *)apfStack_2bb0;
          puStack_2bb4 = (undefined4 *)auStack_134;
          puStack_2bb8 = (undefined *)0x69c604;
          FUN_004054a0();
          puStack_2bb4 = (undefined4 *)0x69c609;
          FUN_006634f0();
        }
      }
      else {
        FUN_004cdfe0();
        FUN_005cd6d0();
        puStack_2b98 = (undefined4 *)0x69c49f;
        FUN_004cdfe0();
        FUN_005cd6d0();
        FUN_0040d7f0();
        puStack_2b98 = (undefined4 *)auStack_134;
        pfStack_2b9c = (function<void___cdecl(void)> *)0x69c4d1;
        FUN_00414e80();
        FUN_004cdfe0();
        puStack_2b98 = (undefined4 *)0x384;
        puStack_2878 = (undefined1 *)apfStack_2bb0;
        puStack_2bb4 = (undefined4 *)auStack_134;
        puStack_2bb8 = (undefined *)0x69c514;
        FUN_004054a0();
        puStack_2bb4 = (undefined4 *)0x69c519;
        FUN_006634f0();
      }
    }
    else if (*(int *)(iStack_19f0 + 0x4c) == 0xb) {
LAB_0069c68c:
      FUN_00454ea0();
      uStack_232c = FUN_00591d50();
      cStack_1a94 = FUN_0040d500();
      FUN_00401ac0();
      if (cStack_1a94 != '\0') {
        ExceptionList = local_10;
        return;
      }
      uStack_1b98 = FUN_005cd6d0();
      FUN_0040a880();
      local_8 = 0xa8;
      FUN_00401a90();
      puVar3 = (undefined4 *)FUN_00401a70();
      uStack_180c = *puVar3;
      FUN_00401a90();
      puVar3 = (undefined4 *)FUN_00401a70();
      uStack_1808 = *puVar3;
      FUN_0040d650();
      local_8._0_1_ = 0xa9;
      iStack_1c5c = 0;
      while (iVar14 = FUN_004cdfe0(), iStack_1c5c < iVar14) {
        FUN_00519dd0();
        iStack_1c5c = iStack_1c5c + 1;
      }
      FUN_00454ea0();
      uStack_2330 = FUN_0067f660();
      cStack_1a95 = FUN_00427e30();
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_eac);
      if (cStack_1a95 == '\0') {
        FUN_004cdfe0();
        puStack_2b98 = (undefined4 *)0xa;
        puStack_2884 = (undefined1 *)apfStack_2bb0;
        puStack_2bb4 = (undefined4 *)&DAT_00776530;
        puStack_2bb8 = (undefined *)0x69c888;
        uStack_2888 = FUN_004054a0();
        local_8._0_1_ = 0xaa;
        puStack_2bb4 = (undefined4 *)puStack_19e0;
        puStack_2bb8 = (undefined *)0x69c89e;
        puStack_2bb8 = (undefined *)FUN_00454ea0();
        local_8._0_1_ = 0xa9;
        puStack_2bbc = (undefined1 *)0x69c8a8;
        FUN_0058e900();
      }
      else {
        puStack_2b98 = (undefined4 *)0xa;
        puStack_2880 = (undefined1 *)apfStack_2bb0;
        puStack_2bb4 = (undefined4 *)auStack_2624;
        puStack_2bb8 = (undefined *)0x69c838;
        puStack_2bb8 = (undefined *)FUN_00454ea0();
        uStack_2bc0 = 0x69c83f;
        puStack_2bbc = (undefined1 *)apfStack_2bb0;
        FUN_0067f660();
        puStack_2bb4 = (undefined4 *)0x69c847;
        FUN_006634f0();
      }
      local_8 = CONCAT31(local_8._1_3_,0xa8);
      FUN_004052a0();
      local_8 = 0xffffffff;
      FUN_004039a0();
    }
    else {
      if ((*(int *)(iStack_19f0 + 0x9d0) != 0) && (iVar14 = FUN_006caba0(), iVar14 == 0x8e)) {
        FUN_005cd6d0();
        cVar2 = FUN_00427c60();
        if (cVar2 != '\0') goto LAB_0069c68c;
      }
      FUN_00454ea0();
      puVar13 = (undefined *)FUN_00405270();
      if (puStack_19e0 == puVar13) {
        FUN_004cdfe0();
        FUN_00414e80();
        FUN_004cdfe0();
        puStack_2b98 = (undefined4 *)0x38e;
        puStack_288c = (undefined1 *)apfStack_2bb0;
        puStack_2bb4 = (undefined4 *)auStack_134;
        puStack_2bb8 = (undefined *)0x69c95b;
        FUN_004054a0();
        puStack_2bb4 = (undefined4 *)0x69c960;
        FUN_006634f0();
      }
      else {
        iStack_1a28 = *(int *)(iStack_19e8 + 0x9d0);
        if (iStack_1a28 != 0) {
          if ((*(int *)(iStack_1a28 + 0xa0c) != 4) && (*(int *)(iStack_1a28 + 0x9d4) != 3)) {
            uStack_2334 = 0xdac;
            puStack_2890 = (undefined1 *)&pfStack_2b9c;
            pfStack_2ba0 = (function<void___cdecl(void)> *)&DAT_0077650c;
            pcStack_2ba4 = (char *)0x69c9c4;
            uStack_2894 = FUN_004054a0();
            local_8 = 0xab;
            pfStack_2ba0 = (function<void___cdecl(void)> *)&uStack_2334;
            pcStack_2ba4 = (char *)0x69c9e2;
            pfStack_2ba0 = (function<void___cdecl(void)> *)FUN_004051c0();
            local_8 = 0xffffffff;
            pcStack_2ba4 = (char *)0x69c9ef;
            iStack_2338 = ui_find_widget_by_key();
            if (iStack_1a28 != iStack_2338) {
              if ((*(int *)(iStack_1a28 + 0xa0c) != 10) && (*(int *)(iStack_1a28 + 0x9d4) != 9)) {
                uStack_233c = 0x14b4;
                puStack_28f4 = (undefined1 *)&pfStack_2b9c;
                pfStack_2ba0 = (function<void___cdecl(void)> *)&DAT_0077655c;
                pcStack_2ba4 = (char *)0x69cb20;
                uStack_28a0 = FUN_004054a0();
                local_8 = 0xac;
                pfStack_2ba0 = (function<void___cdecl(void)> *)&uStack_233c;
                pcStack_2ba4 = (char *)0x69cb3e;
                pfStack_2ba0 = (function<void___cdecl(void)> *)FUN_004051c0();
                local_8 = 0xffffffff;
                pcStack_2ba4 = (char *)0x69cb4b;
                iStack_2340 = ui_find_widget_by_key();
                if (iStack_1a28 != iStack_2340) {
                  if (*(int *)(iStack_1a28 + 0xa0c) != 6) {
                    if (*(int *)(iStack_1a28 + 0xa0c) == 9) {
                      FUN_00454ea0();
                      puStack_2b98 = (undefined4 *)(iStack_19e8 + 0xa4c);
                      pfStack_2b9c = (function<void___cdecl(void)> *)0x69d114;
                      FUN_004cdfe0();
                      cVar2 = FUN_0067e9f0();
                      if (cVar2 == '\0') {
                        ExceptionList = local_10;
                        return;
                      }
                      cStack_1a0e = '\0';
                      uStack_1a38 = 0;
                      while( true ) {
                        FUN_00454ea0();
                        uVar4 = FUN_004274a0();
                        if (uVar4 <= uStack_1a38) break;
                        FUN_00454ea0();
                        iVar14 = FUN_00405270();
                        if (*(int *)(iVar14 + 4) == *(int *)(puStack_19e0 + 4)) {
                          iStack_234c = FUN_005cd6d0();
                          FUN_00454ea0();
                          iVar14 = FUN_00405270();
                          iVar6 = FUN_004cdfe0();
                          if (*(int *)(iStack_234c + 0xac) < iVar6 + *(int *)(iVar14 + 8)) {
                            puStack_2b98 = (undefined4 *)0xa;
                            puStack_28ac = (undefined1 *)apfStack_2bb0;
                            puStack_2bb4 = (undefined4 *)&DAT_007765b8;
                            puStack_2bb8 = (undefined *)0x69d213;
                            FUN_004054a0();
                            puStack_2bb4 = (undefined4 *)0x69d218;
                            FUN_006634f0();
                          }
                          else {
                            FUN_0040a880();
                            local_8 = 0xaf;
                            uStack_16e4 = *(undefined4 *)(puStack_19e0 + 4);
                            uStack_16e0 = FUN_004cdfe0();
                            FUN_00454ea0();
                            puStack_2b98 = (undefined4 *)0x69d276;
                            FUN_0067f8c0();
                            FUN_00454ea0();
                            iVar14 = FUN_00405270();
                            piStack_1dcc = (int *)(iVar14 + 8);
                            iVar14 = FUN_004cdfe0();
                            *piStack_1dcc = iVar14 + *piStack_1dcc;
                            uStack_2350 = 0x424;
                            FUN_00454ea0();
                            FUN_00405270();
                            FUN_004051c0();
                            FUN_00401a70();
                            FUN_00454ea0();
                            FUN_006cdee0();
                            uStack_2354 = 0x424;
                            FUN_00454ea0();
                            FUN_00405270();
                            puStack_2b98 = (undefined4 *)0x69d358;
                            FUN_004051c0();
                            FUN_00401a70();
                            FUN_00454ea0();
                            puStack_2b98 = (undefined4 *)0x10cc;
                            pfStack_2b9c = (function<void___cdecl(void)> *)0x69d37e;
                            FUN_006a4370();
                            local_8 = 0xffffffff;
                            FUN_004039a0();
                          }
                          cStack_1a0e = '\x01';
                          break;
                        }
                        uStack_1a38 = uStack_1a38 + 1;
                      }
                      if (cStack_1a0e == '\0') {
                        uStack_1a54 = 0;
                        while( true ) {
                          FUN_00454ea0();
                          uVar4 = FUN_004274a0();
                          if (uVar4 <= uStack_1a54) break;
                          FUN_00454ea0();
                          iVar14 = FUN_00405270();
                          if (*(int *)(iVar14 + 4) == 0) {
                            FUN_0040a880();
                            local_8 = 0xb0;
                            uStack_1494 = *(undefined4 *)(puStack_19e0 + 4);
                            uStack_1490 = FUN_004cdfe0();
                            FUN_00454ea0();
                            puStack_2b98 = (undefined4 *)0x69d461;
                            FUN_0067f8c0();
                            FUN_00454ea0();
                            FUN_00405270();
                            FUN_00426c50();
                            uStack_2358 = 0x424;
                            FUN_00454ea0();
                            FUN_00405270();
                            FUN_004051c0();
                            FUN_00401a70();
                            FUN_00454ea0();
                            FUN_006cdee0();
                            uStack_235c = 0x424;
                            FUN_00454ea0();
                            FUN_00405270();
                            puStack_2b98 = (undefined4 *)0x69d520;
                            FUN_004051c0();
                            FUN_00401a70();
                            FUN_00454ea0();
                            puStack_2b98 = (undefined4 *)0x10cc;
                            pfStack_2b9c = (function<void___cdecl(void)> *)0x69d546;
                            FUN_006a4370();
                            cStack_1a0e = '\x01';
                            local_8 = 0xffffffff;
                            FUN_004039a0();
                            break;
                          }
                          uStack_1a54 = uStack_1a54 + 1;
                        }
                      }
                    }
                    else if (*(int *)(iStack_1a28 + 0x98c) == 0x53c) {
                      FUN_00454ea0();
                      puStack_2b98 = (undefined4 *)(iStack_19e8 + 0xa4c);
                      pfStack_2b9c = (function<void___cdecl(void)> *)0x69d5be;
                      FUN_004cdfe0();
                      cVar2 = FUN_0067e9f0();
                      if (cVar2 == '\0') {
                        ExceptionList = local_10;
                        return;
                      }
                      FUN_00408f70();
                      local_8 = 0xb1;
                      uStack_164c = FUN_004cdfe0();
                      FUN_00454ea0();
                      puStack_2b98 = (undefined4 *)0x69d624;
                      FUN_0067f8c0();
                      FUN_00454ea0();
                      FUN_00519c60();
                      FUN_00426c50();
                      uStack_2360 = 0x53c;
                      FUN_00454ea0();
                      FUN_00519c60();
                      FUN_004051c0();
                      FUN_00401a70();
                      FUN_00454ea0();
                      FUN_006cdee0();
                      FUN_00454ea0();
                      iVar14 = FUN_00519c60();
                      if (*(int *)(iVar14 + 0x2c) == 1) {
                        FUN_00454ea0();
                        iVar14 = FUN_00519c60();
                        if (*(int *)(iVar14 + 0x28) == 0) {
                          uStack_1dc8 = 0;
                        }
                        else {
                          uStack_1dc8 = 1000;
                        }
                        FUN_00454ea0();
                        iVar14 = FUN_00519c60();
                        if (*(int *)(iVar14 + 0xb8) < 0x14) {
                          uStack_1d60 = 0;
                        }
                        else {
                          FUN_00454ea0();
                          FUN_00519c60();
                          puStack_2b98 = (undefined4 *)0x69d731;
                          uStack_1d60 = FUN_006816e0();
                        }
                        acStack_237c[0] = 'h';
                        acStack_237c[1] = '\x10';
                        acStack_237c[2] = '\0';
                        acStack_237c[3] = '\0';
                        FUN_00454ea0();
                        FUN_00454ea0();
                        FUN_00519c60();
                        uStack_236c = FUN_004c7c00();
                        local_8._0_1_ = 0xb2;
                        uStack_2364 = uStack_236c;
                        uStack_2370 = FUN_004054a0();
                        local_8._0_1_ = 0xb3;
                        uStack_2368 = uStack_2370;
                        uStack_2378 = FUN_00405cf0();
                        local_8._0_1_ = 0xb4;
                        puStack_28b0 = (undefined1 *)&pcStack_2ba4;
                        pcStack_2ba8 = &DAT_00776590;
                        apfStack_2bb0[1] = (function<void___cdecl(void)> *)0x69d814;
                        uStack_2374 = uStack_2378;
                        uStack_28b4 = FUN_004054a0();
                        local_8._0_1_ = 0xb5;
                        pcStack_2ba8 = acStack_237c;
                        apfStack_2bb0[1] = (function<void___cdecl(void)> *)0x69d82f;
                        pcStack_2ba8 = (char *)FUN_004051c0();
                        local_8._0_1_ = 0xb4;
                        apfStack_2bb0[1] = (function<void___cdecl(void)> *)0x69d839;
                        uStack_2380 = ui_find_widget_by_key();
                        uStack_2384 = FUN_00427200();
                        FUN_004053e0();
                        local_8._0_1_ = 0xb3;
                        std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                  (afStack_e94);
                        local_8._0_1_ = 0xb2;
                        std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                  (afStack_e7c);
                        local_8._0_1_ = 0xb1;
                        std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                  (afStack_e64);
                        acStack_2388[0] = 'h';
                        acStack_2388[1] = '\x10';
                        acStack_2388[2] = '\0';
                        acStack_2388[3] = '\0';
                        puStack_28b8 = (undefined1 *)&pfStack_2ba0;
                        pcStack_2ba4 = &DAT_0077662c;
                        pcStack_2ba8 = (char *)0x69d8b6;
                        uStack_28bc = FUN_004054a0();
                        local_8._0_1_ = 0xb6;
                        pcStack_2ba4 = acStack_2388;
                        pcStack_2ba8 = (char *)0x69d8d1;
                        pcStack_2ba4 = (char *)FUN_004051c0();
                        local_8 = CONCAT31(local_8._1_3_,0xb1);
                        pcStack_2ba8 = (char *)0x69d8db;
                        uStack_238c = ui_find_widget_by_key();
                        pCStack_2390 = (CDocObjectServer *)FUN_00427200();
                        CDocObjectServer::ReleaseDocSite(pCStack_2390);
                        FUN_00454ea0();
                        iVar14 = FUN_00519c60();
                        if (*(int *)(iVar14 + 0x28) == 0) {
                          uStack_1d64 = 0;
                        }
                        else {
                          uStack_1d64 = 1000;
                        }
                        FUN_00454ea0();
                        iVar14 = FUN_00519c60();
                        if (*(int *)(iVar14 + 0xb8) < 0x14) {
                          uStack_1d54 = 0;
                        }
                        else {
                          FUN_00454ea0();
                          FUN_00519c60();
                          puStack_2b98 = (undefined4 *)0x69d983;
                          uStack_1d54 = FUN_006816e0();
                        }
                        acStack_23ac[0] = 'h';
                        acStack_23ac[1] = '\x10';
                        acStack_23ac[2] = '\0';
                        acStack_23ac[3] = '\0';
                        uStack_239c = FUN_004c7c00();
                        local_8._0_1_ = 0xb7;
                        uStack_2394 = uStack_239c;
                        uStack_23a0 = FUN_004054a0();
                        local_8._0_1_ = 0xb8;
                        uStack_2398 = uStack_23a0;
                        uStack_23a8 = FUN_00405cf0();
                        local_8._0_1_ = 0xb9;
                        puStack_2adc = (undefined1 *)&pcStack_2ba4;
                        pcStack_2ba8 = &DAT_00776604;
                        apfStack_2bb0[1] = (function<void___cdecl(void)> *)0x69da43;
                        uStack_23a4 = uStack_23a8;
                        uStack_28c4 = FUN_004054a0();
                        local_8._0_1_ = 0xba;
                        pcStack_2ba8 = acStack_23ac;
                        apfStack_2bb0[1] = (function<void___cdecl(void)> *)0x69da5e;
                        pcStack_2ba8 = (char *)FUN_004051c0();
                        local_8._0_1_ = 0xb9;
                        apfStack_2bb0[1] = (function<void___cdecl(void)> *)0x69da68;
                        uStack_23b0 = ui_find_widget_by_key();
                        uStack_23b4 = FUN_00427200();
                        FUN_004053e0();
                        local_8._0_1_ = 0xb8;
                        std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                  (afStack_e4c);
                        local_8._0_1_ = 0xb7;
                        std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                  (afStack_e34);
                        local_8._0_1_ = 0xb1;
                        std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                  (afStack_e1c);
                        acStack_23b8[0] = 'h';
                        acStack_23b8[1] = '\x10';
                        acStack_23b8[2] = '\0';
                        acStack_23b8[3] = '\0';
                        puStack_28c8 = (undefined1 *)&pfStack_2ba0;
                        pcStack_2ba4 = &DAT_00776694;
                        pcStack_2ba8 = (char *)0x69dae5;
                        uStack_28cc = FUN_004054a0();
                        local_8._0_1_ = 0xbb;
                        pcStack_2ba4 = acStack_23b8;
                        pcStack_2ba8 = (char *)0x69db00;
                        pcStack_2ba4 = (char *)FUN_004051c0();
                        local_8 = CONCAT31(local_8._1_3_,0xb1);
                        pcStack_2ba8 = (char *)0x69db0a;
                        uStack_23bc = ui_find_widget_by_key();
                        pCStack_23c0 = (CDocObjectServer *)FUN_00427200();
                        CDocObjectServer::ReleaseDocSite(pCStack_23c0);
                      }
                      local_8 = 0xffffffff;
                      FUN_004039a0();
                    }
                    else if (*(int *)(iStack_1a28 + 0x98c) == 0x578) {
                      FUN_00454ea0();
                      puStack_2b98 = (undefined4 *)(iStack_19e8 + 0xa4c);
                      pfStack_2b9c = (function<void___cdecl(void)> *)0x69db8a;
                      FUN_004cdfe0();
                      cVar2 = FUN_0067e9f0();
                      if (cVar2 == '\0') {
                        ExceptionList = local_10;
                        return;
                      }
                      cStack_1a0d = '\0';
                      uStack_1a34 = 0;
                      while( true ) {
                        FUN_00454ea0();
                        uVar4 = FUN_004274a0();
                        if (uVar4 <= uStack_1a34) break;
                        FUN_00454ea0();
                        iVar14 = FUN_00405270();
                        if (*(int *)(iVar14 + 4) == *(int *)(puStack_19e0 + 4)) {
                          iStack_23c4 = FUN_005cd6d0();
                          FUN_00454ea0();
                          iVar14 = FUN_00405270();
                          iVar6 = FUN_004cdfe0();
                          if (*(int *)(iStack_23c4 + 0xac) < iVar6 + *(int *)(iVar14 + 8)) {
                            puStack_2b98 = (undefined4 *)0xa;
                            puStack_28d0 = (undefined1 *)apfStack_2bb0;
                            puStack_2bb4 = (undefined4 *)&DAT_0077667c;
                            puStack_2bb8 = (undefined *)0x69dc88;
                            FUN_004054a0();
                            puStack_2bb4 = (undefined4 *)0x69dc8d;
                            FUN_006634f0();
                          }
                          else {
                            FUN_0040a880();
                            local_8 = 0xbc;
                            uStack_19c8 = *(undefined4 *)(puStack_19e0 + 4);
                            uStack_19c4 = FUN_004cdfe0();
                            FUN_00454ea0();
                            puStack_2b98 = (undefined4 *)0x69dceb;
                            pfStack_1c58 = (function<void___cdecl(void)> *)FUN_0067f8c0();
                            FUN_00454ea0();
                            iVar14 = FUN_00405270();
                            piStack_1d6c = (int *)(iVar14 + 8);
                            iVar14 = FUN_004cdfe0();
                            *piStack_1d6c = iVar14 + *piStack_1d6c;
                            uStack_23c8 = 0x578;
                            FUN_00454ea0();
                            FUN_00405270();
                            FUN_004051c0();
                            FUN_00401a70();
                            FUN_00454ea0();
                            FUN_006cdee0();
                            uStack_23cc = 0x578;
                            uStack_23d0 = 0x578;
                            FUN_00454ea0();
                            FUN_00405270();
                            FUN_00454ea0();
                            puStack_2b98 = (undefined4 *)0x69dddc;
                            FUN_004051c0();
                            FUN_00401a70();
                            puStack_2b98 = (undefined4 *)0x69ddf8;
                            FUN_006c9280();
                            FUN_00454ea0();
                            puStack_2b98 = &uStack_23d0;
                            pfStack_2b9c = (function<void___cdecl(void)> *)0x69de1d;
                            FUN_004051c0();
                            puStack_2b98 = (undefined4 *)0x69de24;
                            FUN_00401a70();
                            puStack_2b98 = (undefined4 *)auStack_2af8;
                            pfStack_2b9c = (function<void___cdecl(void)> *)0x69de39;
                            FUN_006c9280();
                            puStack_2b98 = (undefined4 *)0x69de4b;
                            puStack_2b98 = (undefined4 *)FUN_00454ea0();
                            pfStack_2b9c = pfStack_1c58;
                            pfStack_2ba0 = afStack_2b00;
                            pcStack_2ba4 = (char *)0x69de5f;
                            iVar14 = FUN_006c9280();
                            puStack_2b98 = *(undefined4 **)(iVar14 + 4);
                            pfStack_2b9c = (function<void___cdecl(void)> *)0x69de6b;
                            pfStack_2b9c = (function<void___cdecl(void)> *)FUN_00454ea0();
                            pfStack_2ba0 = pfStack_1c58;
                            pcStack_2ba4 = acStack_2b08;
                            pcStack_2ba8 = (char *)0x69de7f;
                            piVar5 = (int *)FUN_006c9280();
                            pfStack_2b9c = (function<void___cdecl(void)> *)*piVar5;
                            pfStack_2ba0 = (function<void___cdecl(void)> *)0x0;
                            pcStack_2ba4 = (char *)0x69de8c;
                            FUN_0067b1a0();
                            local_8 = 0xffffffff;
                            FUN_004039a0();
                          }
                          cStack_1a0d = '\x01';
                          break;
                        }
                        uStack_1a34 = uStack_1a34 + 1;
                      }
                      if (cStack_1a0d == '\0') {
                        uStack_1a58 = 0;
                        while( true ) {
                          FUN_00454ea0();
                          uVar4 = FUN_004274a0();
                          if (uVar4 <= uStack_1a58) break;
                          FUN_00454ea0();
                          iVar14 = FUN_00405270();
                          if (*(int *)(iVar14 + 4) == 0) {
                            FUN_0040a880();
                            local_8 = 0xbd;
                            uStack_12d8 = *(undefined4 *)(puStack_19e0 + 4);
                            uStack_12d4 = FUN_004cdfe0();
                            FUN_00454ea0();
                            puStack_2b98 = (undefined4 *)0x69df6f;
                            pfStack_1c54 = (function<void___cdecl(void)> *)FUN_0067f8c0();
                            FUN_00454ea0();
                            FUN_00405270();
                            FUN_00426c50();
                            uStack_23d4 = 0x578;
                            FUN_00454ea0();
                            FUN_00405270();
                            FUN_004051c0();
                            FUN_00401a70();
                            FUN_00454ea0();
                            FUN_006cdee0();
                            uStack_23d8 = 0x578;
                            uStack_23dc = 0x578;
                            FUN_00454ea0();
                            FUN_00405270();
                            FUN_00454ea0();
                            puStack_2b98 = (undefined4 *)0x69e03d;
                            FUN_004051c0();
                            FUN_00401a70();
                            puStack_2b98 = (undefined4 *)0x69e059;
                            FUN_006c9280();
                            FUN_00454ea0();
                            puStack_2b98 = &uStack_23dc;
                            pfStack_2b9c = (function<void___cdecl(void)> *)0x69e07e;
                            FUN_004051c0();
                            puStack_2b98 = (undefined4 *)0x69e085;
                            FUN_00401a70();
                            puStack_2b98 = (undefined4 *)auStack_2b18;
                            pfStack_2b9c = (function<void___cdecl(void)> *)0x69e09a;
                            FUN_006c9280();
                            puStack_2b98 = (undefined4 *)0x69e0ac;
                            puStack_2b98 = (undefined4 *)FUN_00454ea0();
                            pfStack_2b9c = pfStack_1c54;
                            pfStack_2ba0 = afStack_2b20;
                            pcStack_2ba4 = (char *)0x69e0c0;
                            iVar14 = FUN_006c9280();
                            puStack_2b98 = *(undefined4 **)(iVar14 + 4);
                            pfStack_2b9c = (function<void___cdecl(void)> *)0x69e0cc;
                            pfStack_2b9c = (function<void___cdecl(void)> *)FUN_00454ea0();
                            pfStack_2ba0 = pfStack_1c54;
                            pcStack_2ba4 = acStack_2b28;
                            pcStack_2ba8 = (char *)0x69e0e0;
                            piVar5 = (int *)FUN_006c9280();
                            pfStack_2b9c = (function<void___cdecl(void)> *)*piVar5;
                            pfStack_2ba0 = (function<void___cdecl(void)> *)0x0;
                            pcStack_2ba4 = (char *)0x69e0ed;
                            FUN_0067b1a0();
                            cStack_1a0d = '\x01';
                            local_8 = 0xffffffff;
                            FUN_004039a0();
                            break;
                          }
                          uStack_1a58 = uStack_1a58 + 1;
                        }
                      }
                    }
                    goto LAB_0069e124;
                  }
                  iVar14 = FUN_00454ea0();
                  if (*(int *)(iVar14 + 0xdd8) == 4) {
                    FUN_005cd6d0();
                    cVar2 = FUN_00427c60();
                    if (cVar2 == '\0') goto LAB_0069ce4c;
                  }
                  else {
LAB_0069ce4c:
                    FUN_005cd6d0();
                    cVar2 = FUN_00427c60();
                    if ((cVar2 == '\0') || (*(int *)(puStack_19e0 + 0x14) != 0)) {
                      FUN_004cdfe0();
                      FUN_005cd6d0();
                      FUN_0040d7f0();
                      puStack_2b98 = (undefined4 *)0x69d08a;
                      FUN_00414e80();
                      FUN_004cdfe0();
                      puStack_2b98 = (undefined4 *)0x38e;
                      puStack_28a8 = (undefined1 *)apfStack_2bb0;
                      puStack_2bb4 = (undefined4 *)auStack_134;
                      puStack_2bb8 = (undefined *)0x69d0ce;
                      FUN_004054a0();
                      puStack_2bb4 = (undefined4 *)0x69d0d3;
                      FUN_006634f0();
                      goto LAB_0069e124;
                    }
                  }
                  iVar14 = FUN_00454ea0();
                  if ((*(char *)(iVar14 + 0xdb8) == '\0') &&
                     (iVar14 = FUN_00454ea0(), *(char *)(iVar14 + 0xe05) == '\0')) {
                    FUN_00454ea0();
                    FUN_00454ea0();
                    FUN_00454ea0();
                    puStack_2b98 = (undefined4 *)0x0;
                    pfStack_2b9c = (function<void___cdecl(void)> *)(iStack_19e8 + 0xa4c);
                    pfStack_2ba0 = (function<void___cdecl(void)> *)0x69ceef;
                    FUN_004cdfe0();
                    puStack_2b98 = *(undefined4 **)(puStack_19e0 + 4);
                    pfStack_2b9c = (function<void___cdecl(void)> *)0x69cf02;
                    piVar5 = (int *)FUN_004d1520();
                    pfStack_2b9c = (function<void___cdecl(void)> *)(*piVar5 + 0x160);
                    pfStack_2ba0 = (function<void___cdecl(void)> *)0x69cf10;
                    iStack_1ac8 = FUN_004cca70();
                    if (iStack_1ac8 != 0) {
                      FUN_00426c50();
                      uVar8 = FUN_004cdfe0();
                      *(undefined4 *)(iStack_1ac8 + 0x10) = uVar8;
                      iVar14 = FUN_00454ea0();
                      *(undefined4 *)(iStack_1ac8 + 0xbc) = *(undefined4 *)(iVar14 + 0x224);
                      iVar14 = FUN_00454ea0();
                      *(undefined4 *)(iStack_1ac8 + 0xbc) = *(undefined4 *)(iVar14 + 0x228);
                      piStack_1dd0 = (int *)FUN_00454ea0();
                      iVar14 = (**(code **)(*piStack_1dd0 + 0x70))();
                      iVar6 = FUN_00454ea0();
                      *(int *)(iStack_1ac8 + 0xc0) = iVar14 / 2 + *(int *)(iVar6 + 0x22c);
                      FUN_004cca10();
                      FUN_0040a880();
                      local_8 = 0xae;
                      uStack_1778 = *(undefined4 *)(puStack_19e0 + 4);
                      uStack_1774 = FUN_004cdfe0();
                      FUN_00454ea0();
                      puStack_2b98 = (undefined4 *)0x69d028;
                      FUN_0067f8c0();
                      local_8 = 0xffffffff;
                      FUN_004039a0();
                    }
                  }
                  goto LAB_0069e124;
                }
              }
              FUN_00454ea0();
              puStack_2b98 = (undefined4 *)(iStack_19e8 + 0xa4c);
              pfStack_2b9c = (function<void___cdecl(void)> *)0x69cb8b;
              FUN_004cdfe0();
              cVar2 = FUN_0067e9f0();
              if (cVar2 == '\0') {
                ExceptionList = local_10;
                return;
              }
              cStack_1a30 = '\0';
              uStack_1a8c = 0;
              while( true ) {
                FUN_00454ea0();
                uVar4 = FUN_004274a0();
                if (uVar4 <= uStack_1a8c) break;
                FUN_00454ea0();
                iVar14 = FUN_00405270();
                if (*(int *)(iVar14 + 4) == *(int *)(puStack_19e0 + 4)) {
                  iStack_2344 = FUN_005cd6d0();
                  FUN_00454ea0();
                  iVar14 = FUN_00405270();
                  iVar6 = FUN_004cdfe0();
                  if (*(int *)(iStack_2344 + 0xac) < iVar6 + *(int *)(iVar14 + 8)) {
                    puStack_2b98 = (undefined4 *)0xa;
                    puStack_28a4 = (undefined1 *)apfStack_2bb0;
                    puStack_2bb4 = (undefined4 *)&DAT_00776544;
                    puStack_2bb8 = (undefined *)0x69cc89;
                    FUN_004054a0();
                    puStack_2bb4 = (undefined4 *)0x69cc8e;
                    FUN_006634f0();
                  }
                  else {
                    FUN_0040a880();
                    local_8 = 0xad;
                    uStack_1934 = *(undefined4 *)(puStack_19e0 + 4);
                    uStack_1930 = FUN_004cdfe0();
                    FUN_00454ea0();
                    puStack_2b98 = (undefined4 *)0x69ccec;
                    FUN_0067f8c0();
                    FUN_00454ea0();
                    iVar14 = FUN_00405270();
                    piStack_1dd4 = (int *)(iVar14 + 8);
                    iVar14 = FUN_004cdfe0();
                    *piStack_1dd4 = iVar14 + *piStack_1dd4;
                    uStack_2348 = 0x1450;
                    FUN_00454ea0();
                    FUN_00405270();
                    FUN_004051c0();
                    FUN_00401a70();
                    FUN_00454ea0();
                    FUN_006cdee0();
                    local_8 = 0xffffffff;
                    FUN_004039a0();
                  }
                  cStack_1a30 = '\x01';
                  break;
                }
                uStack_1a8c = uStack_1a8c + 1;
              }
              if (cStack_1a30 == '\0') {
                FUN_004cdfe0();
                puVar3 = &DAT_007ca70c;
                ppfVar15 = apfStack_2bb0;
                for (iVar14 = 8; iVar14 != 0; iVar14 = iVar14 + -1) {
                  *ppfVar15 = (function<void___cdecl(void)> *)*puVar3;
                  puVar3 = puVar3 + 1;
                  ppfVar15 = ppfVar15 + 1;
                }
                puStack_2bb4 = (undefined4 *)0x69cdf6;
                FUN_00663ec0();
              }
              goto LAB_0069e124;
            }
          }
          FUN_004cdfe0();
          FUN_005cd6d0();
          puStack_2b98 = (undefined4 *)0x69ca61;
          FUN_004cdfe0();
          FUN_005cd6d0();
          FUN_0040d7f0();
          puStack_2b98 = (undefined4 *)auStack_134;
          pfStack_2b9c = (function<void___cdecl(void)> *)0x69ca93;
          FUN_00414e80();
          FUN_004cdfe0();
          puStack_2b98 = (undefined4 *)0x532;
          puStack_2898 = (undefined1 *)apfStack_2bb0;
          puStack_2bb4 = (undefined4 *)auStack_134;
          puStack_2bb8 = (undefined *)0x69cad6;
          FUN_004054a0();
          puStack_2bb4 = (undefined4 *)0x69cadb;
          FUN_006634f0();
        }
      }
    }
LAB_0069e124:
    uStack_23e0 = 0x3a;
    FUN_004051c0();
    ui_close_matching_widgets();
    ppvVar1 = ExceptionList;
    break;
  case 0x59b:
    puStack_28d4 = (undefined1 *)&pfStack_2b9c;
    pfStack_2ba0 = (function<void___cdecl(void)> *)0x77666c;
    pcStack_2ba4 = (char *)0x69e188;
    ExceptionList = &local_10;
    FUN_004054a0();
    pfStack_2ba0 = (function<void___cdecl(void)> *)0x69e18d;
    FUN_004c3570();
    iStack_23e8 = ui_ctx;
    iStack_1b38 = *(int *)(ui_ctx + 0x9d0);
    if (iStack_1b38 == 0) {
      ExceptionList = local_10;
      return;
    }
    FUN_00642750();
    FUN_0040d5c0();
    piVar5 = (int *)FUN_00401a70();
    if (*(int *)(iStack_1b38 + 0x10) != *piVar5) {
      ExceptionList = local_10;
      return;
    }
    iStack_1b3c = *(int *)(iStack_1b38 + 0x9d0);
    uStack_23ec = 0x3b;
    puStack_28d8 = (undefined1 *)&pfStack_2b9c;
    pfStack_2ba0 = (function<void___cdecl(void)> *)&DAT_0077665c;
    pcStack_2ba4 = (char *)0x69e228;
    uStack_28dc = FUN_004054a0();
    local_8 = 0xbe;
    pfStack_2ba0 = (function<void___cdecl(void)> *)&uStack_23ec;
    pcStack_2ba4 = (char *)0x69e246;
    pfStack_2ba0 = (function<void___cdecl(void)> *)FUN_004051c0();
    local_8 = 0xffffffff;
    pcStack_2ba4 = (char *)0x69e253;
    iStack_23f0 = ui_find_widget_by_key();
    iStack_1ae0 = iStack_23f0;
    cVar2 = FUN_00427c60();
    if (cVar2 != '\0') {
      ExceptionList = local_10;
      return;
    }
    cVar2 = FUN_00427c60();
    if (cVar2 != '\0') {
      ExceptionList = local_10;
      return;
    }
    uStack_28e0 = *(undefined4 *)(iStack_1ae0 + 0x9a0);
    iVar14 = FUN_006caba0();
    if (iVar14 == 0x71) {
      uStack_1a90 = 0;
      while( true ) {
        FUN_00454ea0();
        uVar4 = FUN_004274a0();
        if (uVar4 <= uStack_1a90) break;
        FUN_00454ea0();
        iVar14 = FUN_00405270();
        if (*(int *)(iVar14 + 4) == 0) {
          FUN_00454ea0();
          FUN_00405270();
          FUN_00426c50();
          uVar8 = FUN_004cdfe0();
          FUN_00454ea0();
          puVar3 = (undefined4 *)FUN_00405270();
          *puVar3 = uVar8;
          uStack_23f4 = 0x1450;
          FUN_00454ea0();
          FUN_00405270();
          FUN_004051c0();
          FUN_00401a70();
          FUN_00454ea0();
          FUN_006cdee0();
          FUN_00454ea0();
          puStack_2b98 = (undefined4 *)0x69e3f9;
          FUN_0067f8c0();
          break;
        }
        uStack_1a90 = uStack_1a90 + 1;
      }
    }
    else {
      iVar14 = FUN_006caba0();
      if (iVar14 == 0x8e) {
        uStack_1acc = 0;
        while( true ) {
          FUN_00454ea0();
          uVar4 = FUN_004274a0();
          if (uVar4 <= uStack_1acc) break;
          FUN_00454ea0();
          iVar14 = FUN_00405270();
          if (*(int *)(iVar14 + 4) == 0) {
            FUN_0040a880();
            local_8 = 0xbf;
            uStack_1244 = *(undefined4 *)(iStack_1b3c + 4);
            uStack_1240 = *(undefined4 *)(iStack_1ae0 + 0x9a0);
            FUN_00454ea0();
            puStack_2b98 = (undefined4 *)0x69e4c8;
            FUN_0067f8c0();
            uStack_1248 = FUN_004cdfe0();
            FUN_00454ea0();
            FUN_00405270();
            FUN_00426c50();
            uStack_23f8 = 0x1450;
            FUN_00454ea0();
            FUN_00405270();
            FUN_004051c0();
            FUN_00401a70();
            FUN_00454ea0();
            FUN_006cdee0();
            local_8 = 0xffffffff;
            FUN_004039a0();
            break;
          }
          uStack_1acc = uStack_1acc + 1;
        }
      }
    }
    uStack_23fc = 0x3b;
    FUN_004051c0();
    ui_close_matching_widgets();
    ppvVar1 = ExceptionList;
    break;
  case 0x5a0:
    iStack_1b40 = ui_ctx;
    ExceptionList = &local_10;
    FUN_00642750();
    FUN_00489e00();
    FUN_00642750();
    FUN_00489da0();
    cVar2 = FUN_0040d2d0();
    if (cVar2 != '\0') {
      FUN_00642750();
      FUN_0040d5c0();
      puVar3 = (undefined4 *)FUN_00401a70();
      *(undefined4 *)(iStack_1b40 + 0x10) = *puVar3;
    }
    ppfVar15 = apfStack_2bb0;
    puVar3 = &DAT_007ca70c;
    for (iVar14 = 8; ppfVar15 = (function<void___cdecl(void)> **)((int)ppfVar15 + 4), iVar14 != 0;
        iVar14 = iVar14 + -1) {
      *ppfVar15 = (function<void___cdecl(void)> *)*puVar3;
      puVar3 = puVar3 + 1;
    }
    apfStack_2bb0[0] = (function<void___cdecl(void)> *)0x69ba74;
    iVar14 = FUN_00454ea0();
    apfStack_2bb0[0] = *(function<void___cdecl(void)> **)(iVar14 + 0xac8);
    puStack_2bb4 = (undefined4 *)0x69ba80;
    FUN_00664250();
    ppvVar1 = ExceptionList;
    break;
  case 0x5aa:
    puStack_28e4 = (undefined1 *)&pfStack_2b9c;
    pfStack_2ba0 = (function<void___cdecl(void)> *)0x7766cc;
    pcStack_2ba4 = (char *)0x69e5cf;
    ExceptionList = &local_10;
    FUN_004054a0();
    pfStack_2ba0 = (function<void___cdecl(void)> *)0x69e5d4;
    FUN_004c3570();
    uStack_2400 = 0x3a;
    FUN_004051c0();
    ui_close_matching_widgets();
    ppvVar1 = ExceptionList;
    break;
  case 0x5af:
    puStack_28e8 = (undefined1 *)&pfStack_2b9c;
    pfStack_2ba0 = (function<void___cdecl(void)> *)0x7766bc;
    pcStack_2ba4 = (char *)0x69e615;
    ExceptionList = &local_10;
    FUN_004054a0();
    pfStack_2ba0 = (function<void___cdecl(void)> *)0x69e61a;
    FUN_004c3570();
    uStack_2404 = 0x3b;
    FUN_004051c0();
    ui_close_matching_widgets();
    ppvVar1 = ExceptionList;
    break;
  case 0x5b4:
    puStack_2680 = (undefined1 *)&pfStack_2b9c;
    pfStack_2ba0 = (function<void___cdecl(void)> *)0x774c34;
    pcStack_2ba4 = (char *)0x6941b2;
    ExceptionList = &local_10;
    FUN_004054a0();
    pfStack_2ba0 = (function<void___cdecl(void)> *)0x6941b7;
    FUN_004c3570();
    iStack_1f28 = ui_ctx;
    iVar14 = FUN_00454ea0();
    *(undefined4 *)(iVar14 + 0xdcc) = *(undefined4 *)(iStack_1f28 + 0x9a0);
    iVar14 = FUN_00454ea0();
    *(undefined4 *)(iVar14 + 0xdd0) = 0;
    iVar14 = FUN_00454ea0();
    if (*(char *)(iVar14 + 0xdb8) != '\0') {
      puStack_1db4 = &DAT_007ca758;
      piStack_1c08 = (int *)FUN_004018d0();
      piStack_1f2c = (int *)FUN_004018b0();
      for (; piStack_1c08 != piStack_1f2c; piStack_1c08 = piStack_1c08 + 1) {
        piStack_1db8 = piStack_1c08;
        if (*piStack_1c08 != 0) {
          *(undefined4 *)(*piStack_1c08 + 0xdd0) = 0;
        }
      }
    }
    FUN_00454ea0();
    FUN_00454ea0();
    FUN_006a3c30();
    uStack_1f30 = 0x40;
    puStack_2684 = (undefined1 *)&pfStack_2b9c;
    pfStack_2ba0 = (function<void___cdecl(void)> *)&DAT_00774c24;
    pcStack_2ba4 = (char *)0x6942ad;
    uStack_2688 = FUN_004054a0();
    local_8 = 100;
    pfStack_2ba0 = (function<void___cdecl(void)> *)&uStack_1f30;
    pcStack_2ba4 = (char *)0x6942cb;
    pfStack_2ba0 = (function<void___cdecl(void)> *)FUN_004051c0();
    local_8 = 0xffffffff;
    pcStack_2ba4 = (char *)0x6942d8;
    uStack_1f38 = ui_find_widget_by_key();
    uStack_1f34 = uStack_1f38;
    iVar14 = FUN_0040d4b0();
    *(undefined4 *)(iVar14 + 0x40) = 0x280;
    ppvVar1 = ExceptionList;
    break;
  case 0x5be:
    ExceptionList = &local_10;
    iVar14 = FUN_00454ea0();
    ppvVar1 = ExceptionList;
    if (0 < *(int *)(iVar14 + 0xdd0)) {
      iVar14 = FUN_00454ea0();
      piStack_1dbc = (int *)(iVar14 + 0xdd0);
      *piStack_1dbc = *piStack_1dbc + -1;
      iVar14 = FUN_00454ea0();
      piVar5 = (int *)FUN_004d1520();
      *(undefined4 *)(*piVar5 + 0x170) = *(undefined4 *)(iVar14 + 0xdd0);
      FUN_00454ea0();
      FUN_00454ea0();
      FUN_006a3c30();
      ppvVar1 = ExceptionList;
    }
    break;
  case 0x5c8:
    ExceptionList = &local_10;
    iVar14 = FUN_00454ea0();
    ppvVar1 = ExceptionList;
    if (*(int *)(iVar14 + 0xdd0) < 3) {
      FUN_00454ea0();
      FUN_00454ea0();
      FUN_006a3c30();
      ppvVar1 = ExceptionList;
    }
    break;
  case 0x5d2:
    ExceptionList = &local_10;
    FUN_00454ea0();
    FUN_006a3f10();
    FUN_004f2720();
    ppvVar1 = ExceptionList;
    break;
  case 0x5d7:
    ExceptionList = &local_10;
    FUN_00454ea0();
    FUN_006a51c0();
    ppvVar1 = ExceptionList;
    break;
  case 0x5d9:
    ExceptionList = &local_10;
    FUN_00454ea0();
    FUN_006a51c0();
    ppvVar1 = ExceptionList;
    break;
  case 0x5f0:
    ExceptionList = &local_10;
    piVar5 = (int *)FUN_004d1520();
    if ((*(char *)(*piVar5 + 0x44) == '\0') ||
       ((((iVar14 = FUN_00454ea0(), *(int *)(iVar14 + 0xdcc) != 0x1b &&
          (iVar14 = FUN_00454ea0(), *(int *)(iVar14 + 0xdcc) != 0x21)) &&
         (iVar14 = FUN_00454ea0(), *(int *)(iVar14 + 0xdcc) != 0x5dc)) &&
        (iVar14 = FUN_00454ea0(), *(int *)(iVar14 + 0xdcc) != 0x5dd)))) {
      FUN_00454ea0();
      FUN_004d1520();
      FUN_006a3c30();
      ppvVar1 = ExceptionList;
    }
    else {
      puStack_28ec = (undefined1 *)&pfStack_2ba0;
      pcStack_2ba4 = &UNK_007766e0;
      pcStack_2ba8 = &UNK_0069e6ad;
      FUN_004054a0();
      pcStack_2ba4 = &UNK_0069e6b2;
      FUN_0049d850();
      ppvVar1 = ExceptionList;
    }
    break;
  case 0x62c:
    iStack_1c10 = -1;
    uStack_1f08 = 0x4b0;
    ExceptionList = &local_10;
    uStack_1da4 = FUN_004051c0();
    piStack_1c14 = (int *)FUN_004018d0();
    piStack_1f0c = (int *)FUN_004018b0();
    for (; piStack_1c14 != piStack_1f0c; piStack_1c14 = piStack_1c14 + 1) {
      piStack_1da8 = piStack_1c14;
      if (*(char *)(*piStack_1c14 + 0x9a8) == '\x01') {
        iStack_1c10 = *(int *)(*piStack_1c14 + 0xa10);
        break;
      }
    }
    ppvVar1 = ExceptionList;
    if (iStack_1c10 != -1) {
      FUN_00653470();
      FUN_00454ef0();
      piVar5 = (int *)FUN_00401a70();
      iVar14 = *piVar5;
      puVar3 = (undefined4 *)FUN_00454e90();
      *puVar3 = *(undefined4 *)(iVar14 + 0x1e8);
      FUN_00454e90();
      FUN_006a3f10();
      FUN_00454ef0();
      puVar3 = (undefined4 *)FUN_00401a70();
      FUN_00454e90();
      FUN_00454ee0();
      puVar7 = (undefined4 *)FUN_00489c40();
      *puVar7 = *puVar3;
      FUN_00454ef0();
      FUN_004021b0();
      while( true ) {
        FUN_00454ef0();
        FUN_00402170();
        cVar2 = FUN_00426ed0();
        if (cVar2 == '\0') break;
        piVar5 = (int *)FUN_0044ddc0();
        iVar14 = FUN_00454ea0();
        if (*piVar5 == iVar14) {
          FUN_0044dda0();
        }
        else {
          FUN_0044ddc0();
          FUN_004d1b30();
          FUN_00517db0();
          uStack_1f10 = uStack_1ae4;
          FUN_00454ef0();
          puVar3 = (undefined4 *)FUN_0044dea0();
          uStack_1ae4 = *puVar3;
        }
      }
      FUN_00454ef0();
      FUN_0040d5f0();
      iVar14 = FUN_00454ea0();
      *(undefined4 *)(iVar14 + 0xdd8) = 1;
      FUN_00454ea0();
      FUN_004ec7b0();
      FUN_00454ea0();
      FUN_0047ecf0();
      FUN_00454ea0();
      FUN_006149a0();
      iVar14 = FUN_00454ea0();
      iVar6 = FUN_00454ea0();
      if (*(int *)(iVar14 + 0x6e8) != *(int *)(iVar6 + 0x6e0)) {
        uStack_1f14 = 0x294;
        FUN_004051c0();
        ppfStack_264c = apfStack_2bb0 + 1;
        apfStack_2bb0[0] = (function<void___cdecl(void)> *)0x774b04;
        puStack_2bb4 = (undefined4 *)0x693e71;
        uStack_2650 = FUN_004054a0();
        local_8 = 0x61;
        puStack_2654 = auStack_2bc4;
        puStack_2bc8 = &DAT_00774af4;
        uStack_2bcc = 0x693e93;
        uStack_2658 = FUN_004054a0();
        local_8 = CONCAT31(local_8._1_3_,0x62);
        puStack_2bc8 = (undefined *)0x64;
        puStack_28c0 = auStack_2be0;
        FUN_004054a0(&DAT_00774b70);
        local_8 = 0xffffffff;
        iStack_1f18 = FUN_00661cc0(0,2);
        iStack_1db0 = iStack_1f18;
        if (iStack_1f18 != 0) {
          *(undefined4 *)(iStack_1f18 + 0x984) = 0xed8;
        }
      }
      uStack_1f1c = 0x28a;
      puStack_2660 = (undefined1 *)&pfStack_2b9c;
      pfStack_2ba0 = (function<void___cdecl(void)> *)&DAT_00774b68;
      pcStack_2ba4 = (char *)0x693f11;
      uStack_2664 = FUN_004054a0();
      local_8 = 99;
      pfStack_2ba0 = (function<void___cdecl(void)> *)&uStack_1f1c;
      pcStack_2ba4 = (char *)0x693f2f;
      pfStack_2ba0 = (function<void___cdecl(void)> *)FUN_004051c0();
      local_8 = 0xffffffff;
      pcStack_2ba4 = (char *)0x693f3c;
      iStack_1f20 = ui_find_widget_by_key();
      iVar14 = FUN_00454ea0();
      *(int *)(iStack_1f20 + 0x8a4) = (*(int *)(iVar14 + 0x998) * 100) / 0x9c;
      DAT_007ca1d8 = 2;
      FUN_0067b5a0();
      iStack_1d90 = FUN_00454ea0();
      iStack_1d90 = iStack_1d90 + 0xd9c;
      iStack_1c0c = FUN_004018d0();
      iStack_1f24 = FUN_004018b0();
      for (; iStack_1c0c != iStack_1f24; iStack_1c0c = iStack_1c0c + 0x20) {
        iStack_1bb8 = iStack_1c0c;
        if (*(int *)(iStack_1c0c + 0x18) == 0x10) {
          FUN_006a52a0();
          FUN_004f2720();
          _memset(afStack_234,0,0x100);
          FUN_004a1d50();
          FUN_0040d7f0();
          FUN_004a1be0();
          FUN_005e9240();
          FUN_005cd6d0();
          FUN_0040d7f0();
          puStack_2b98 = (undefined4 *)0x69406a;
          FUN_00414e80();
          puStack_2668 = (undefined1 *)&pfStack_2b9c;
          pfStack_2ba0 = afStack_234;
          pcStack_2ba4 = (char *)0x694084;
          FUN_004054a0();
          pfStack_2ba0 = (function<void___cdecl(void)> *)0x694089;
          FUN_0049d780();
          break;
        }
      }
      FUN_00454ea0();
      FUN_006a3c30();
      puStack_266c = (undefined1 *)&pfStack_2b9c;
      pfStack_2ba0 = (function<void___cdecl(void)> *)&DAT_00774b30;
      pcStack_2ba4 = (char *)0x6940c1;
      FUN_004054a0();
      pfStack_2ba0 = (function<void___cdecl(void)> *)0x6940c6;
      FUN_0049d780();
      puStack_2670 = (undefined1 *)&pfStack_2b9c;
      pfStack_2ba0 = (function<void___cdecl(void)> *)&DAT_00774bec;
      pcStack_2ba4 = (char *)0x6940de;
      FUN_004054a0();
      pfStack_2ba0 = (function<void___cdecl(void)> *)0x6940e3;
      FUN_0049d780();
      puStack_2674 = (undefined1 *)&pfStack_2b9c;
      pfStack_2ba0 = (function<void___cdecl(void)> *)&DAT_00774bc8;
      pcStack_2ba4 = (char *)0x6940fb;
      FUN_004054a0();
      pfStack_2ba0 = (function<void___cdecl(void)> *)0x694100;
      FUN_0049d780();
      puStack_2678 = (undefined1 *)&pfStack_2b9c;
      pfStack_2ba0 = (function<void___cdecl(void)> *)&DAT_00774ba0;
      pcStack_2ba4 = (char *)0x694118;
      FUN_004054a0();
      pfStack_2ba0 = (function<void___cdecl(void)> *)0x69411d;
      FUN_0049d780();
      puStack_267c = (undefined1 *)&pfStack_2b9c;
      pfStack_2ba0 = (function<void___cdecl(void)> *)&DAT_00774b78;
      pcStack_2ba4 = (char *)0x694135;
      FUN_004054a0();
      pfStack_2ba0 = (function<void___cdecl(void)> *)0x69413a;
      FUN_0049d780();
      ppvVar1 = ExceptionList;
    }
  }
LAB_0069e6d6:
  ExceptionList = ppvVar1;
  FUN_00454ea0();
  FUN_00614bd0();
  FUN_00454ea0();
  FUN_004a3110();
  FUN_00454ea0();
  FUN_0041d440();
  FUN_00454ea0();
  FUN_00594b70();
  FUN_00454ea0();
  FUN_006a56d0();
  FUN_00454ea0();
  FUN_004b13c0();
  FUN_00454ea0();
  FUN_0040b1d0();
  FUN_00454ea0();
  FUN_00412880();
  FUN_00454ea0();
  FUN_00535050();
  FUN_00454ea0();
  FUN_00586540();
  FUN_00454ea0();
  FUN_00625350();
  FUN_00454ea0();
  FUN_00624170();
  FUN_004995d0();
  FUN_00454ea0();
  FUN_0052c550();
  FUN_00454ea0();
  FUN_0062e4f0();
  FUN_00454ea0();
  FUN_005386a0();
  FUN_00454ea0();
  FUN_00403be0();
  FUN_00454ea0();
  FUN_004adc80();
  ppfVar15 = apfStack_2bb0;
  puVar3 = &DAT_007ca70c;
  for (iVar14 = 8; ppfVar15 = (function<void___cdecl(void)> **)((int)ppfVar15 + 4), iVar14 != 0;
      iVar14 = iVar14 + -1) {
    *ppfVar15 = (function<void___cdecl(void)> *)*puVar3;
    puVar3 = puVar3 + 1;
  }
  apfStack_2bb0[0] = (function<void___cdecl(void)> *)0x69e880;
  FUN_0065e180();
  ExceptionList = local_10;
  return;
}


