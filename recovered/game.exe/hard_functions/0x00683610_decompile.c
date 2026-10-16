/* Synced annotated copy; canonical body in decompiled/window_message.c */
/* ==== 00683610  window_wndproc_main  size=5249 ==== */
/* Recovered from dedicated Ghidra headless run (DecompileOptions timeout 3600s,
 * max payload 1024MB, JVM 6G; project work_ghidra/projects/hard_proj).
 * Simplification style=decompile; wall time ~133s. Pseudo-code, not original source. */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

LRESULT window_wndproc_main(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam)

{
  char cVar1;
  WPARAM *pWVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined1 *puVar6;
  int *piVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  CDocObjectServer *pCVar11;
  undefined4 uVar12;
  uint uVar13;
  char **ppcVar14;
  char *apcStack_1c54 [5];
  undefined *puStack_1c40;
  undefined8 uVar15;
  undefined4 uStack_1910;
  int iStack_190c;
  undefined4 uStack_1908;
  undefined4 uStack_1904;
  undefined4 uStack_1900;
  int iStack_18fc;
  undefined4 uStack_18f8;
  int iStack_18f4;
  undefined4 uStack_18f0;
  undefined4 uStack_18ec;
  int iStack_18e8;
  undefined4 uStack_18e4;
  int iStack_18e0;
  undefined4 uStack_18dc;
  int iStack_18d8;
  undefined4 uStack_18d4;
  int iStack_18d0;
  undefined4 uStack_18cc;
  int iStack_18c8;
  undefined4 uStack_18c4;
  undefined4 uStack_18c0;
  int iStack_18bc;
  undefined4 uStack_18b8;
  int iStack_18b4;
  undefined4 uStack_18b0;
  int iStack_18ac;
  undefined4 uStack_18a8;
  int iStack_18a4;
  undefined4 uStack_18a0;
  int iStack_189c;
  void *pvStack_1898;
  CachedTransmogrifiedPrimary *pCStack_1894;
  void *pvStack_1890;
  CachedTransmogrifiedPrimary *pCStack_188c;
  void *pvStack_1888;
  LONG LStack_1884;
  LPVOID pvStack_1880;
  LPCANDIDATELIST ptStack_187c;
  DWORD DStack_1878;
  undefined4 uStack_1874;
  undefined4 uStack_1870;
  undefined4 uStack_186c;
  undefined4 uStack_1868;
  undefined4 uStack_1864;
  undefined4 uStack_1860;
  undefined4 uStack_185c;
  LPCANDIDATELIST ptStack_1858;
  undefined4 uStack_1854;
  int *piStack_1850;
  undefined4 uStack_184c;
  undefined4 uStack_1848;
  char *pcStack_1844;
  char *pcStack_1840;
  undefined4 uStack_183c;
  undefined4 uStack_1838;
  int *piStack_1834;
  undefined4 uStack_1830;
  undefined4 uStack_182c;
  char *pcStack_1828;
  char *pcStack_1824;
  undefined4 uStack_1820;
  undefined4 uStack_181c;
  int *piStack_1818;
  undefined4 uStack_1814;
  undefined4 uStack_1810;
  char *pcStack_180c;
  char *pcStack_1808;
  undefined4 uStack_1804;
  undefined4 uStack_1800;
  int *piStack_17fc;
  undefined4 uStack_17f8;
  int *piStack_17f4;
  undefined4 uStack_17f0;
  int iStack_17ec;
  undefined4 uStack_17e8;
  int iStack_17e4;
  undefined4 uStack_17e0;
  undefined4 uStack_17dc;
  undefined4 uStack_17d8;
  undefined4 uStack_17d4;
  undefined4 uStack_17d0;
  undefined4 uStack_17cc;
  undefined4 uStack_17c8;
  undefined4 uStack_17c4;
  undefined4 uStack_17c0;
  undefined4 uStack_17bc;
  undefined4 uStack_17b8;
  undefined4 uStack_17b4;
  undefined4 uStack_17b0;
  undefined4 uStack_17ac;
  undefined4 uStack_17a8;
  undefined4 uStack_17a4;
  undefined4 uStack_17a0;
  undefined4 uStack_179c;
  undefined4 uStack_1798;
  undefined4 uStack_1794;
  undefined4 uStack_1790;
  undefined4 uStack_178c;
  undefined4 uStack_1788;
  undefined4 uStack_1784;
  undefined4 uStack_1780;
  undefined4 uStack_177c;
  undefined4 uStack_1778;
  undefined4 uStack_1774;
  undefined4 uStack_1770;
  undefined4 uStack_176c;
  undefined4 uStack_1768;
  undefined4 uStack_1764;
  undefined4 uStack_1760;
  undefined4 uStack_175c;
  undefined4 uStack_1758;
  undefined4 uStack_1754;
  undefined4 uStack_1750;
  undefined4 uStack_174c;
  undefined4 uStack_1748;
  undefined4 uStack_1744;
  undefined4 uStack_1740;
  undefined4 local_173c;
  int local_1738;
  undefined4 local_1734;
  undefined4 local_1730;
  undefined4 uStack_172c;
  undefined4 uStack_1728;
  undefined4 uStack_1724;
  LRESULT local_1720;
  CDocObjectServer *pCStack_171c;
  undefined4 uStack_1718;
  undefined4 uStack_1714;
  undefined4 uStack_1710;
  undefined4 uStack_170c;
  undefined4 uStack_1708;
  undefined4 uStack_1704;
  undefined4 uStack_1700;
  undefined4 uStack_16fc;
  undefined4 uStack_16f8;
  undefined4 uStack_16f4;
  undefined4 uStack_16f0;
  CDocObjectServer *pCStack_16ec;
  undefined4 uStack_16e8;
  undefined4 uStack_16e4;
  undefined4 uStack_16e0;
  undefined4 uStack_16dc;
  undefined4 uStack_16d8;
  undefined4 uStack_16d4;
  undefined4 uStack_16d0;
  undefined4 uStack_16cc;
  undefined4 uStack_16c8;
  undefined4 uStack_16c4;
  undefined4 uStack_16c0;
  undefined4 uStack_16bc;
  undefined4 uStack_16b8;
  undefined4 uStack_16b4;
  undefined4 uStack_16b0;
  undefined4 uStack_16ac;
  undefined4 uStack_16a8;
  undefined4 uStack_16a4;
  CDocObjectServer *pCStack_16a0;
  undefined4 uStack_169c;
  undefined4 uStack_1698;
  undefined4 uStack_1694;
  undefined4 uStack_1690;
  undefined4 uStack_168c;
  undefined4 uStack_1688;
  undefined4 uStack_1684;
  undefined4 uStack_1680;
  undefined4 uStack_167c;
  undefined4 uStack_1678;
  undefined4 uStack_1674;
  CDocObjectServer *pCStack_1670;
  undefined4 uStack_166c;
  undefined4 uStack_1668;
  undefined4 uStack_1664;
  undefined4 uStack_1660;
  undefined4 uStack_165c;
  undefined4 uStack_1658;
  undefined4 uStack_1654;
  undefined4 uStack_1650;
  undefined4 uStack_164c;
  undefined4 uStack_1648;
  undefined4 uStack_1644;
  undefined4 uStack_1640;
  undefined4 uStack_163c;
  undefined4 uStack_1638;
  undefined4 uStack_1634;
  CDocObjectServer *pCStack_1630;
  undefined4 uStack_162c;
  undefined4 uStack_1628;
  undefined4 uStack_1624;
  undefined4 uStack_1620;
  undefined4 uStack_161c;
  undefined4 uStack_1618;
  undefined4 uStack_1614;
  undefined4 uStack_1610;
  undefined4 uStack_160c;
  undefined4 uStack_1608;
  undefined4 uStack_1604;
  CDocObjectServer *pCStack_1600;
  undefined4 uStack_15fc;
  undefined4 uStack_15f8;
  undefined4 uStack_15f4;
  undefined4 uStack_15f0;
  undefined4 uStack_15ec;
  undefined4 uStack_15e8;
  undefined4 uStack_15e4;
  undefined4 uStack_15e0;
  undefined4 uStack_15dc;
  undefined4 uStack_15d8;
  undefined4 uStack_15d4;
  undefined4 uStack_15d0;
  undefined4 uStack_15cc;
  undefined4 uStack_15c8;
  undefined4 uStack_15c4;
  undefined4 uStack_15c0;
  undefined4 uStack_15bc;
  undefined4 uStack_15b8;
  undefined4 uStack_15b4;
  int iStack_15b0;
  undefined4 uStack_15ac;
  int iStack_15a8;
  CDocObjectServer *pCStack_15a4;
  CDocObjectServer *pCStack_15a0;
  undefined4 uStack_159c;
  undefined4 uStack_1598;
  undefined4 uStack_1594;
  undefined4 uStack_1590;
  char *pcStack_158c;
  char *pcStack_1588;
  undefined4 uStack_1584;
  undefined4 uStack_1580;
  int *piStack_157c;
  undefined4 uStack_1578;
  undefined4 uStack_1574;
  undefined4 uStack_1570;
  char *pcStack_156c;
  char *pcStack_1568;
  undefined4 uStack_1564;
  char *pcStack_1560;
  char *pcStack_155c;
  undefined4 uStack_1558;
  undefined4 uStack_1554;
  int *piStack_1550;
  undefined4 uStack_154c;
  undefined4 uStack_1548;
  undefined4 uStack_1544;
  undefined4 uStack_1540;
  undefined4 uStack_153c;
  undefined4 uStack_1538;
  undefined4 uStack_1534;
  undefined4 uStack_1530;
  undefined4 uStack_152c;
  undefined4 uStack_1528;
  undefined4 uStack_1524;
  undefined4 uStack_1520;
  int iStack_151c;
  undefined4 uStack_1518;
  undefined4 uStack_1514;
  int *piStack_1510;
  undefined4 uStack_150c;
  int *piStack_1508;
  undefined4 uStack_1504;
  undefined4 uStack_1500;
  undefined4 uStack_14fc;
  undefined4 uStack_14f8;
  undefined4 uStack_14f4;
  undefined4 uStack_14f0;
  undefined4 uStack_14ec;
  undefined4 uStack_14e8;
  undefined4 uStack_14e4;
  undefined4 uStack_14e0;
  undefined4 uStack_14dc;
  undefined4 uStack_14d8;
  undefined4 uStack_14d4;
  undefined4 uStack_14d0;
  undefined4 uStack_14cc;
  undefined4 uStack_14c8;
  undefined4 uStack_14c4;
  undefined4 uStack_14c0;
  undefined4 uStack_14bc;
  undefined4 uStack_14b8;
  int iStack_14b4;
  undefined4 uStack_14b0;
  int iStack_14ac;
  undefined4 uStack_14a8;
  undefined4 uStack_14a4;
  LRESULT LStack_14a0;
  undefined4 uStack_149c;
  undefined4 uStack_1498;
  undefined4 uStack_1494;
  undefined4 uStack_1490;
  undefined4 uStack_148c;
  undefined4 uStack_1488;
  undefined4 uStack_1484;
  undefined4 uStack_1480;
  undefined4 uStack_147c;
  undefined4 uStack_1478;
  undefined4 uStack_1474;
  undefined4 uStack_1470;
  undefined4 uStack_146c;
  undefined4 uStack_1468;
  undefined4 uStack_1464;
  undefined4 uStack_1460;
  undefined4 uStack_145c;
  undefined4 uStack_1458;
  undefined4 uStack_1454;
  undefined4 uStack_1450;
  undefined4 local_144c;
  int local_1448;
  undefined4 uStack_1444;
  int *piStack_1440;
  int iStack_143c;
  int iStack_1438;
  int iStack_1434;
  int iStack_1430;
  undefined *puStack_142c;
  undefined4 uStack_1428;
  undefined *puStack_1424;
  undefined4 uStack_1420;
  undefined4 uStack_141c;
  undefined4 uStack_1418;
  undefined4 uStack_1414;
  undefined4 uStack_1410;
  undefined4 uStack_140c;
  undefined4 uStack_1408;
  undefined4 uStack_1404;
  undefined4 uStack_1400;
  undefined *puStack_13fc;
  undefined4 uStack_13f8;
  undefined *puStack_13f4;
  undefined4 uStack_13f0;
  undefined4 uStack_13ec;
  undefined4 uStack_13e8;
  undefined4 uStack_13e4;
  undefined4 uStack_13e0;
  int iStack_13dc;
  undefined4 uStack_13d8;
  undefined4 uStack_13d4;
  undefined4 uStack_13d0;
  undefined4 uStack_13cc;
  undefined4 uStack_13c8;
  undefined4 uStack_13c4;
  undefined4 uStack_13c0;
  undefined4 uStack_13bc;
  undefined4 uStack_13b8;
  undefined4 uStack_13b4;
  undefined4 uStack_13b0;
  undefined4 uStack_13ac;
  undefined4 uStack_13a8;
  undefined4 uStack_13a4;
  undefined4 uStack_13a0;
  int local_139c;
  LRESULT local_1398;
  undefined4 local_1394;
  undefined4 local_1390;
  undefined4 local_138c;
  undefined4 local_1388;
  undefined4 local_1384;
  undefined4 local_1380;
  undefined4 local_137c;
  undefined4 local_1378;
  undefined4 local_1374;
  undefined4 local_1370;
  undefined4 local_136c;
  undefined4 local_1368;
  undefined4 local_1364;
  undefined4 local_1360;
  undefined4 local_135c;
  undefined4 local_1358;
  undefined4 local_1354;
  undefined4 local_1350;
  undefined4 local_134c;
  undefined4 local_1348;
  int local_1344;
  undefined4 local_1340;
  int local_133c;
  undefined4 local_1338;
  undefined4 local_1334;
  int local_1330;
  undefined4 local_132c;
  int local_1328;
  undefined4 local_1324;
  undefined4 local_1320;
  int local_131c;
  undefined4 local_1318;
  int local_1314;
  undefined4 local_1310;
  undefined4 local_130c;
  int local_1308;
  undefined4 local_1304;
  int local_1300;
  undefined4 local_12fc;
  undefined4 local_12f8;
  int local_12f4;
  undefined4 local_12f0;
  int local_12ec;
  undefined4 local_12e8;
  undefined4 local_12e4;
  int local_12e0;
  undefined4 local_12dc;
  int local_12d8;
  undefined4 local_12d4;
  undefined4 local_12d0;
  int local_12cc;
  undefined4 local_12c8;
  int local_12c4;
  undefined4 local_12c0;
  undefined4 local_12bc;
  int local_12b8;
  undefined4 local_12b4;
  int local_12b0;
  undefined4 local_12ac;
  undefined4 local_12a8;
  int local_12a4;
  undefined4 uStack_12a0;
  DWORD DStack_129c;
  undefined4 uStack_1298;
  DWORD DStack_1294;
  undefined4 uStack_1290;
  DWORD DStack_128c;
  undefined4 uStack_1288;
  DWORD DStack_1284;
  undefined4 uStack_1280;
  undefined4 uStack_127c;
  undefined4 uStack_1278;
  undefined4 uStack_1274;
  uint uStack_1270;
  undefined4 uStack_126c;
  undefined4 uStack_1268;
  undefined4 uStack_1264;
  undefined4 uStack_1260;
  uint uStack_125c;
  int iStack_1258;
  undefined4 uStack_1254;
  undefined4 uStack_1250;
  undefined4 uStack_124c;
  undefined4 uStack_1248;
  int iStack_1244;
  int iStack_1240;
  undefined4 uStack_123c;
  function<void___cdecl(void)> *pfStack_1238;
  int iStack_1234;
  undefined4 uStack_1230;
  uint uStack_122c;
  uint uStack_1228;
  undefined4 uStack_1224;
  undefined4 uStack_1220;
  uint uStack_121c;
  uint uStack_1218;
  uint uStack_1214;
  uint uStack_1210;
  uint uStack_120c;
  uint uStack_1208;
  uint uStack_1204;
  uint uStack_1200;
  uint uStack_11fc;
  uint uStack_11f8;
  undefined4 uStack_11f4;
  undefined4 uStack_11f0;
  int iStack_11ec;
  undefined4 uStack_11e8;
  int iStack_11e4;
  undefined4 uStack_11e0;
  int iStack_11dc;
  undefined4 uStack_11d8;
  HIMC pHStack_11d4;
  CachedTransmogrifiedPrimary *pCStack_11d0;
  CachedTransmogrifiedPrimary *pCStack_11cc;
  CachedTransmogrifiedPrimary *pCStack_11c8;
  CachedTransmogrifiedPrimary *pCStack_11c4;
  DWORD local_11c0;
  undefined4 local_11bc;
  int iStack_11b8;
  int *piStack_11b4;
  int *piStack_11b0;
  int *piStack_11ac;
  int *piStack_11a8;
  int *piStack_11a4;
  int *piStack_11a0;
  int iStack_119c;
  int iStack_1198;
  int *piStack_1194;
  int *piStack_1190;
  int *piStack_118c;
  int iStack_1188;
  int iStack_1184;
  int *piStack_1180;
  int *piStack_117c;
  int *piStack_1178;
  uint uStack_1174;
  uint uStack_1170;
  uint uStack_116c;
  int *piStack_1168;
  int *piStack_1164;
  int *piStack_1160;
  int iStack_115c;
  int iStack_1158;
  int *piStack_1154;
  int *piStack_1150;
  int *piStack_114c;
  uint uStack_1148;
  uint uStack_1144;
  uint uStack_1140;
  int *piStack_113c;
  int iStack_1138;
  char *pcStack_1134;
  uint uStack_1130;
  char *pcStack_112c;
  uint uStack_1128;
  uint uStack_1124;
  int *piStack_1120;
  int *piStack_111c;
  uint uStack_1118;
  uint uStack_1114;
  uint uStack_1110;
  HIMC pHStack_110c;
  size_t sStack_1108;
  void *pvStack_1104;
  void *pvStack_1100;
  char *pcStack_10fc;
  CDocObjectServer *pCStack_10f4;
  char *pcStack_10f0;
  int iStack_10ec;
  LPVOID pvStack_10e8;
  undefined *puStack_10e4;
  int iStack_10e0;
  DWORD DStack_10dc;
  LPCANDIDATELIST ptStack_10d8;
  int *piStack_10d4;
  char *pcStack_10d0;
  int *piStack_10cc;
  char *pcStack_10c8;
  int *piStack_10c4;
  char *pcStack_10c0;
  int *piStack_10bc;
  int *piStack_10b8;
  int *piStack_10b4;
  int *piStack_10b0;
  int *piStack_10ac;
  char *pcStack_10a8;
  char *pcStack_10a4;
  int *piStack_10a0;
  char *pcStack_109c;
  char *pcStack_1098;
  char *pcStack_1094;
  WPARAM WStack_1090;
  uint uStack_108c;
  int iStack_1088;
  size_t sStack_1084;
  size_t sStack_1080;
  int *piStack_107c;
  int iStack_1078;
  undefined4 uStack_1074;
  undefined4 uStack_1070;
  int local_106c;
  size_t local_1068;
  size_t local_1064;
  WPARAM local_1060;
  char *pcStack_105c;
  uint uStack_1058;
  int iStack_1054;
  undefined4 uStack_1050;
  undefined4 uStack_104c;
  int iStack_1048;
  uint uStack_1044;
  char cStack_103d;
  int iStack_103c;
  undefined4 local_1038;
  char cStack_1033;
  char cStack_1032;
  undefined1 local_1031;
  undefined1 local_1030;
  undefined1 local_102f;
  undefined1 local_102e;
  undefined1 local_102d;
  undefined1 local_102c;
  undefined1 local_102b;
  undefined1 local_102a;
  undefined1 local_1029;
  undefined1 local_1028;
  char cStack_1027;
  undefined1 uStack_1026;
  char cStack_1025;
  char cStack_1024;
  char cStack_1023;
  char cStack_1022;
  char cStack_1021;
  char cStack_1020;
  char cStack_101f;
  char cStack_101e;
  char cStack_101d;
  char cStack_101c;
  char cStack_101b;
  char cStack_101a;
  char cStack_1019;
  char cStack_1018;
  undefined1 uStack_1017;
  undefined1 uStack_1016;
  undefined1 uStack_1015;
  undefined1 uStack_1014;
  undefined1 uStack_1013;
  undefined1 uStack_1012;
  undefined1 uStack_1011;
  undefined1 uStack_1010;
  undefined1 uStack_100f;
  char cStack_100d;
  char cStack_100c;
  char cStack_100b;
  char cStack_100a;
  char cStack_1009;
  LPCANDIDATELIST ptStack_1008;
  int iStack_1004;
  void *pvStack_1000;
  void *pvStack_ffc;
  void *local_ff8;
  void *local_ff4;
  char cStack_fed;
  char cStack_fec;
  char cStack_feb;
  char local_fea;
  char cStack_fe9;
  int iStack_fe8;
  int iStack_fe4;
  uint local_fe0;
  int iStack_fdc;
  int iStack_fd8;
  int local_fd4;
  int local_fd0;
  char cStack_fca;
  char cStack_fc9;
  int *piStack_fc8;
  int *piStack_fc4;
  int *piStack_fc0;
  int *piStack_fbc;
  int *piStack_fb8;
  int *piStack_fb4;
  char cStack_fad;
  int *piStack_fac;
  int *piStack_fa8;
  function<void___cdecl(void)> afStack_fa4 [24];
  function<void___cdecl(void)> afStack_f8c [24];
  function<void___cdecl(void)> afStack_f74 [24];
  function<void___cdecl(void)> afStack_f5c [24];
  function<void___cdecl(void)> afStack_f44 [24];
  function<void___cdecl(void)> afStack_f2c [24];
  function<void___cdecl(void)> afStack_f14 [24];
  function<void___cdecl(void)> afStack_efc [24];
  function<void___cdecl(void)> afStack_ee4 [24];
  function<void___cdecl(void)> afStack_ecc [24];
  function<void___cdecl(void)> afStack_eb4 [24];
  function<void___cdecl(void)> afStack_e9c [24];
  function<void___cdecl(void)> afStack_e84 [24];
  function<void___cdecl(void)> afStack_e6c [24];
  function<void___cdecl(void)> afStack_e54 [24];
  function<void___cdecl(void)> afStack_e3c [24];
  function<void___cdecl(void)> afStack_e24 [24];
  function<void___cdecl(void)> afStack_e0c [24];
  function<void___cdecl(void)> afStack_df4 [24];
  function<void___cdecl(void)> afStack_ddc [24];
  function<void___cdecl(void)> afStack_dc4 [24];
  function<void___cdecl(void)> afStack_dac [24];
  function<void___cdecl(void)> afStack_d94 [24];
  function<void___cdecl(void)> afStack_d7c [24];
  function<void___cdecl(void)> afStack_d64 [24];
  function<void___cdecl(void)> afStack_d4c [24];
  function<void___cdecl(void)> afStack_d34 [24];
  function<void___cdecl(void)> afStack_d1c [24];
  function<void___cdecl(void)> afStack_d04 [24];
  function<void___cdecl(void)> afStack_cec [24];
  function<void___cdecl(void)> afStack_cd4 [24];
  function<void___cdecl(void)> afStack_cbc [24];
  function<void___cdecl(void)> afStack_ca4 [24];
  function<void___cdecl(void)> afStack_c8c [24];
  function<void___cdecl(void)> afStack_c74 [24];
  function<void___cdecl(void)> afStack_c5c [24];
  function<void___cdecl(void)> afStack_c44 [24];
  function<void___cdecl(void)> afStack_c2c [24];
  function<void___cdecl(void)> afStack_c14 [24];
  function<void___cdecl(void)> afStack_bfc [24];
  function<void___cdecl(void)> afStack_be4 [24];
  function<void___cdecl(void)> afStack_bcc [24];
  function<void___cdecl(void)> afStack_bb4 [24];
  function<void___cdecl(void)> afStack_b9c [24];
  function<void___cdecl(void)> afStack_b84 [24];
  function<void___cdecl(void)> afStack_b6c [24];
  function<void___cdecl(void)> afStack_b54 [24];
  function<void___cdecl(void)> afStack_b3c [24];
  function<void___cdecl(void)> afStack_b24 [24];
  function<void___cdecl(void)> afStack_b0c [24];
  function<void___cdecl(void)> afStack_af4 [24];
  function<void___cdecl(void)> afStack_adc [24];
  function<void___cdecl(void)> afStack_ac4 [24];
  function<void___cdecl(void)> afStack_aac [24];
  function<void___cdecl(void)> afStack_a94 [24];
  function<void___cdecl(void)> afStack_a7c [24];
  function<void___cdecl(void)> afStack_a64 [24];
  function<void___cdecl(void)> afStack_a4c [24];
  function<void___cdecl(void)> afStack_a34 [24];
  function<void___cdecl(void)> afStack_a1c [24];
  function<void___cdecl(void)> afStack_a04 [24];
  function<void___cdecl(void)> afStack_9ec [24];
  function<void___cdecl(void)> afStack_9d4 [24];
  function<void___cdecl(void)> afStack_9bc [24];
  function<void___cdecl(void)> afStack_9a4 [24];
  function<void___cdecl(void)> afStack_98c [24];
  function<void___cdecl(void)> afStack_974 [24];
  function<void___cdecl(void)> afStack_95c [24];
  function<void___cdecl(void)> afStack_944 [24];
  function<void___cdecl(void)> afStack_92c [24];
  function<void___cdecl(void)> afStack_914 [24];
  function<void___cdecl(void)> afStack_8fc [24];
  function<void___cdecl(void)> afStack_8e4 [24];
  function<void___cdecl(void)> afStack_8cc [24];
  function<void___cdecl(void)> afStack_8b4 [24];
  function<void___cdecl(void)> afStack_89c [24];
  function<void___cdecl(void)> afStack_884 [24];
  function<void___cdecl(void)> afStack_86c [24];
  function<void___cdecl(void)> afStack_854 [24];
  function<void___cdecl(void)> afStack_83c [24];
  function<void___cdecl(void)> afStack_824 [24];
  function<void___cdecl(void)> afStack_80c [24];
  function<void___cdecl(void)> afStack_7f4 [24];
  function<void___cdecl(void)> afStack_7dc [24];
  function<void___cdecl(void)> afStack_7c4 [24];
  function<void___cdecl(void)> afStack_7ac [24];
  function<void___cdecl(void)> afStack_794 [24];
  function<void___cdecl(void)> afStack_77c [24];
  function<void___cdecl(void)> afStack_764 [24];
  function<void___cdecl(void)> afStack_74c [24];
  function<void___cdecl(void)> afStack_734 [24];
  function<void___cdecl(void)> afStack_71c [24];
  function<void___cdecl(void)> afStack_704 [24];
  function<void___cdecl(void)> afStack_6ec [24];
  function<void___cdecl(void)> afStack_6d4 [24];
  function<void___cdecl(void)> afStack_6bc [24];
  function<void___cdecl(void)> afStack_6a4 [24];
  function<void___cdecl(void)> afStack_68c [24];
  function<void___cdecl(void)> afStack_674 [24];
  function<void___cdecl(void)> afStack_65c [24];
  function<void___cdecl(void)> afStack_644 [24];
  function<void___cdecl(void)> afStack_62c [24];
  function<void___cdecl(void)> afStack_614 [24];
  function<void___cdecl(void)> afStack_5fc [24];
  function<void___cdecl(void)> afStack_5e4 [24];
  function<void___cdecl(void)> afStack_5cc [24];
  function<void___cdecl(void)> afStack_5b4 [24];
  function<void___cdecl(void)> afStack_59c [24];
  function<void___cdecl(void)> afStack_584 [24];
  function<void___cdecl(void)> afStack_56c [24];
  function<void___cdecl(void)> afStack_554 [272];
  function<void___cdecl(void)> local_444 [24];
  function<void___cdecl(void)> afStack_42c [24];
  undefined1 auStack_414 [256];
  char acStack_314 [256];
  undefined1 auStack_214 [256];
  undefined1 auStack_114 [256];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007291b2;
  local_10 = ExceptionList;
  local_14 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_004054a0();
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  local_fe0 = uMsg;
    /* mouse messages: WM_MOUSEMOVE=0x200 and above */
if (0x200 < uMsg) {
    local_fe0 = uMsg - 0x201;
    switch(uMsg) {
        /* WM_LBUTTONDOWN */
case 0x201:
      if (DAT_007ca1d0 == '\0') {
        ui_handle_lbutton_down();
      }
      break;
        /* WM_LBUTTONUP */
case 0x202:
      if (DAT_007ca1d0 == '\0') {
        ui_handle_lbutton_up();
      }
      break;
        /* WM_LBUTTONDBLCLK -> ui_dispatch_focused_widget */
case 0x203:
      if (DAT_007ca1d0 == '\0') {
        ui_dispatch_focused_widget();
      }
      break;
        /* WM_RBUTTONDOWN */
case 0x204:
      if (DAT_007ca1d0 == '\0') {
        ui_reset_rmb_mode_state();
      }
      break;
        /* WM_RBUTTONUP */
case 0x205:
      if (DAT_007ca1d0 == '\0') {
        ui_handle_rbutton_up();
      }
      break;
        /* WM_MOUSEWHEEL: HIWORD(wParam)=delta */
case 0x20a:
      iStack_10ec = (int)(short)(wParam >> 0x10);
      if (iStack_10ec < 1) {
        if (iStack_10ec < 0) {
          iStack_10ec = 0xc;
        }
      }
      else {
        iStack_10ec = -0xc;
      }
      break;
        /* WM_POWERBROADCAST / device change path -> recreate D3D */
case 0x218:
DAT_006880ec:
      pCStack_11cc = DAT_007ca1a4;
      if (DAT_007ca1a4 == (CachedTransmogrifiedPrimary *)0x0) {
        pvStack_1890 = (void *)0x0;
      }
      else {
        pvStack_1890 = Concurrency::details::CachedTransmogrifiedPrimary::
                       _scalar_deleting_destructor_(DAT_007ca1a4,1);
      }
      pvStack_1104 = (void *)FUN_006e4b5e();
      local_8._0_1_ = 0x41;
      if (pvStack_1104 == (void *)0x0) {
        pCStack_11d0 = (CachedTransmogrifiedPrimary *)0x0;
      }
      else {
        _memset(pvStack_1104,0,0x4c);
        pCStack_11d0 = (CachedTransmogrifiedPrimary *)FUN_0068dde0();
      }
      pCStack_188c = pCStack_11d0;
      local_8._0_1_ = 0;
      DAT_007ca1a4 = pCStack_11d0;
      FUN_004b6120();
      break;
        /* WM_IME_NOTIFY; wParam==IMN_OPENCANDIDATE(3) */
case 0x282:
      if (wParam == 3) {
        pHStack_110c = (HIMC)0x0;
        DStack_10dc = 0;
        ptStack_10d8 = (LPCANDIDATELIST)0x0;
        ptStack_1008 = (LPCANDIDATELIST)0x0;
        FUN_004054a0();
        local_8 = CONCAT31(local_8._1_3_,0x42);
        pHStack_110c = ImmGetContext(hWnd);
        puStack_1c40 = &UNK_0068830a;
        DStack_10dc = ImmGetCandidateListA(pHStack_110c,0,(LPCANDIDATELIST)0x0,0);
        if (DStack_10dc != 0) {
          ptStack_187c = (LPCANDIDATELIST)FUN_006e5209();
          puStack_1c40 = &UNK_00688367;
          ptStack_10d8 = ptStack_187c;
          ptStack_1008 = ptStack_187c;
          DStack_1878 = ImmGetCandidateListA(pHStack_110c,0,ptStack_187c,DStack_10dc);
          if ((DStack_1878 != 0) && (1 < ptStack_1008->dwCount)) {
            uStack_1044 = 1;
            _memset(auStack_414,0,0x100);
            while ((uStack_1044 < (ptStack_1008->dwCount - ptStack_1008->dwSelection) + 1 &&
                   (uStack_1044 < ptStack_1008->dwPageSize + 1))) {
              FUN_004054a0();
              local_8._0_1_ = 0x43;
              FUN_00414e80();
              uStack_1874 = FUN_00427d20();
              FUN_004053e0();
              std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_eb4);
              uStack_1870 = FUN_00427d20();
              local_8._0_1_ = 0x44;
              uStack_186c = uStack_1870;
              uStack_1868 = FUN_0040e3d0();
              local_8._0_1_ = 0x45;
              uStack_1864 = uStack_1868;
              uStack_1860 = FUN_005822e0();
              FUN_004053e0();
              std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_e9c);
              local_8._0_1_ = 0x44;
              std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_e84);
              local_8._0_1_ = 0x43;
              std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_e6c);
              uStack_1044 = uStack_1044 + 1;
              local_8 = CONCAT31(local_8._1_3_,0x42);
              std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_644);
            }
            iVar3 = FUN_0069f7f0();
            if (iVar3 != -1) {
              FUN_00410b30();
              FUN_0069f7f0();
              uStack_185c = FUN_004bcf80();
              FUN_004053e0();
              std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_e54);
              FUN_0040d840();
            }
          }
          ptStack_1858 = ptStack_10d8;
          thunk_FUN_006f1902();
        }
        local_8._0_1_ = 0;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_42c);
      }
    }
    goto LAB_0068da66;
  }
    /* WM_MOUSEMOVE */
if (uMsg == 0x200) {
    if (DAT_007ca1d0 == '\0') {
      _DAT_007ca724 = DAT_007ca71c;
      _DAT_007ca728 = DAT_007ca720;
      DAT_007ca71c = (int)(short)lParam;
      DAT_007ca720 = (int)(short)(lParam >> 0x10);
      FUN_00661a00();
      puVar9 = &DAT_007ca70c;
      ppcVar14 = apcStack_1c54;
      for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *ppcVar14 = (char *)*puVar9;
        puVar9 = puVar9 + 1;
        ppcVar14 = ppcVar14 + 1;
      }
      FUN_0065e180();
    }
    goto LAB_0068da66;
  }
  if (0x100 < uMsg) {
    local_fe0 = uMsg - 0x101;
    switch(uMsg) {
        /* WM_KEYUP */
case 0x101:
      iVar3 = FUN_00454ea0();
      if (iVar3 != 0) {
        WStack_1090 = wParam;
        FUN_0040d380();
        FUN_0048c970();
        cVar1 = FUN_0040d2d0();
        if (cVar1 != '\0') {
          pWVar2 = (WPARAM *)input_remap_vk_lookup();
          wParam = *pWVar2;
          WStack_1090 = wParam;
        }
        iVar3 = FUN_00454ea0();
        if (((*(char *)(iVar3 + 0xe05) != '\0') ||
            ((iVar3 = FUN_00454ea0(), *(char *)(iVar3 + 0xdb8) != '\0' &&
             (iVar3 = FUN_00454ea0(), *(int *)(iVar3 + 0xdd8) == 4)))) &&
           ((wParam == 0x26 ||
            ((((((wParam == 0x28 || (wParam == 0x25)) || (wParam == 0x27)) ||
               (((wParam == 0x20 || (wParam == 0x5a)) ||
                ((wParam == 0x58 || ((wParam == 0x43 || (wParam == 0x41)))))))) ||
              (wParam == 0x53)) ||
             ((((wParam == 0x44 || (wParam == 0x46)) || (wParam == 0x47)) ||
              ((wParam == 0x48 || (wParam == 0x56)))))))))) {
          iVar3 = FUN_00454ea0();
          if (*(char *)(iVar3 + 0xdfb) == '\0') {
            if ((*(int *)(*(int *)ThreadLocalStoragePointer + 4) < _DAT_007cddd0) &&
               (FUN_006e4c3b(), _DAT_007cddd0 == -1)) {
              local_8._0_1_ = 0x30;
              uStack_1454 = 0x26;
              uStack_1450 = 0x10;
              FUN_004072a0();
              uStack_145c = 0x28;
              uStack_1458 = 0x11;
              FUN_004072a0();
              uStack_1464 = 0x25;
              uStack_1460 = 0x12;
              FUN_004072a0();
              uStack_146c = 0x27;
              uStack_1468 = 0x13;
              FUN_004072a0();
              uStack_1474 = 0x20;
              uStack_1470 = 0x14;
              FUN_004072a0();
              uStack_100f = 0x5a;
              uStack_1478 = 0x15;
              FUN_006a02e0();
              uStack_1010 = 0x58;
              uStack_147c = 0x16;
              FUN_006a02e0();
              uStack_1026 = 0x43;
              uStack_1480 = 0x17;
              FUN_006a02e0();
              uStack_1011 = 0x41;
              uStack_1484 = 0x18;
              FUN_006a02e0();
              uStack_1012 = 0x53;
              uStack_1488 = 0x19;
              FUN_006a02e0();
              uStack_1013 = 0x44;
              uStack_148c = 0x1a;
              FUN_006a02e0();
              uStack_1014 = 0x46;
              uStack_1490 = 0x1b;
              FUN_006a02e0();
              uStack_1015 = 0x47;
              uStack_1494 = 0x1c;
              FUN_006a02e0();
              uStack_1016 = 0x48;
              uStack_1498 = 0x1d;
              FUN_006a02e0();
              uStack_1017 = 0x56;
              uStack_149c = 0x1e;
              FUN_006a02e0();
              FUN_00401880();
              FUN_0069edd0();
              FUN_006e4fef();
              local_8._0_1_ = 0;
              FUN_006e4bea();
            }
            iVar3 = FUN_00454ea0();
            if (*(char *)(iVar3 + 0xe05) == '\0') {
              iVar3 = FUN_00454ea0();
              if (*(char *)(iVar3 + 0xdb8) != '\0') {
                sStack_1084 = 0x1a;
                pvStack_1000 = (void *)FUN_006f191d();
                if (pvStack_1000 != (void *)0x0) {
                  _memset(pvStack_1000,0,sStack_1084);
                }
                iStack_fdc = 0;
                iVar3 = FUN_006a34a0();
                iStack_fdc = iVar3 + iStack_fdc;
                iVar3 = FUN_006a34a0();
                iStack_fdc = iVar3 + iStack_fdc;
                iVar3 = FUN_006a34d0();
                iStack_fdc = iVar3 + iStack_fdc;
                FUN_004d1b20();
                iVar3 = FUN_006a34a0();
                iStack_fdc = iVar3 + iStack_fdc;
                FUN_00454ea0();
                cVar1 = net_packet_write_u8();
                iStack_fdc = cVar1 + iStack_fdc;
                FUN_0069eda0();
                cVar1 = net_packet_write_u8();
                iStack_fdc = cVar1 + iStack_fdc;
                net_socket_send_all();
                FUN_006f1902();
              }
            }
            else {
              sStack_1080 = 0x1d;
              pvStack_ffc = (void *)FUN_006f191d();
              if (pvStack_ffc != (void *)0x0) {
                _memset(pvStack_ffc,0,sStack_1080);
              }
              iStack_fd8 = 0;
              iVar3 = FUN_006a34a0();
              iStack_fd8 = iVar3 + iStack_fd8;
              iVar3 = FUN_006a34a0();
              iStack_fd8 = iVar3 + iStack_fd8;
              iVar3 = FUN_006a34d0();
              iStack_fd8 = iVar3 + iStack_fd8;
              FUN_004d1af0();
              iVar3 = FUN_006a34a0();
              iStack_fd8 = iVar3 + iStack_fd8;
              FUN_00454ea0();
              iVar3 = FUN_006a34a0();
              iStack_fd8 = iVar3 + iStack_fd8;
              FUN_0069eda0();
              cVar1 = net_packet_write_u8();
              iStack_fd8 = cVar1 + iStack_fd8;
              net_socket_send_all();
              FUN_006f1902();
            }
          }
          puStack_1c40 = &UNK_0068711a;
          LStack_14a0 = DefWindowProcA(hWnd,uMsg,wParam,lParam);
          local_8 = 0xffffffff;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_444);
          ExceptionList = local_10;
          return LStack_14a0;
        }
        iStack_1088 = wParam - 0xd;
        switch(wParam) {
        case 0xd:
          uStack_14a4 = 0xaf;
          FUN_004051c0();
          cVar1 = FUN_0040d500();
          if (cVar1 == '\0') {
            uStack_14b0 = 0xaf;
            apcStack_1c54[3] = &UNK_00773c94;
            apcStack_1c54[2] = &UNK_006872ac;
            FUN_004054a0();
            local_8._0_1_ = 0x32;
            apcStack_1c54[3] = (char *)&uStack_14b0;
            apcStack_1c54[2] = &UNK_006872c7;
            apcStack_1c54[3] = (char *)FUN_004051c0();
            local_8._0_1_ = 0;
            apcStack_1c54[2] = &UNK_006872d1;
            iStack_14b4 = ui_find_widget_by_key();
            if (*(char *)(iStack_14b4 + 0x51) == '\0') {
              iVar3 = FUN_00454ea0();
              *(undefined1 *)(iVar3 + 0xdfb) = 1;
              uStack_1900 = 0xaf;
              apcStack_1c54[3] = &UNK_00773ce8;
              apcStack_1c54[2] = &UNK_006875af;
              FUN_004054a0();
              local_8._0_1_ = 0x34;
              apcStack_1c54[3] = (char *)&uStack_1900;
              apcStack_1c54[2] = &UNK_006875ca;
              apcStack_1c54[3] = (char *)FUN_004051c0();
              local_8._0_1_ = 0;
              apcStack_1c54[2] = &UNK_006875d4;
              iStack_18fc = ui_find_widget_by_key();
              *(undefined1 *)(iStack_18fc + 0x51) = 1;
              uStack_18f8 = 0xaf;
              apcStack_1c54[3] = &UNK_00773d38;
              apcStack_1c54[2] = &UNK_00687606;
              FUN_004054a0();
              local_8._0_1_ = 0x35;
              apcStack_1c54[3] = (char *)&uStack_18f8;
              apcStack_1c54[2] = &UNK_00687621;
              apcStack_1c54[3] = (char *)FUN_004051c0();
              local_8._0_1_ = 0;
              apcStack_1c54[2] = &UNK_0068762b;
              iStack_18f4 = ui_find_widget_by_key();
              *(undefined1 *)(iStack_18f4 + 0x51) = 1;
              *(undefined1 *)(iStack_18f4 + 0xad0) = 1;
              *(undefined1 *)(*(int *)(iStack_18f4 + 0x828) + 4) = 1;
              iStack_1004 = iStack_18f4;
              FUN_004053a0();
              CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(iStack_1004 + 0xa3c));
              iVar3 = FUN_00410b30();
              *(int *)(*(int *)(iStack_1004 + 0x828) + 0x24) =
                   iVar3 * 6 + *(int *)(iStack_1004 + 0xa40);
            }
            else {
              uStack_1910 = 0xaf;
              apcStack_1c54[3] = &UNK_00773d08;
              apcStack_1c54[2] = &UNK_0068730b;
              FUN_004054a0();
              local_8._0_1_ = 0x33;
              apcStack_1c54[3] = (char *)&uStack_1910;
              apcStack_1c54[2] = &UNK_00687326;
              apcStack_1c54[3] = (char *)FUN_004051c0();
              local_8._0_1_ = 0;
              apcStack_1c54[2] = &UNK_00687330;
              iStack_190c = ui_find_widget_by_key();
              iStack_fe4 = iStack_190c;
              cVar1 = FUN_0044e480();
              if (cVar1 == '\0') {
                FUN_00454ea0();
                iVar3 = FUN_00405270();
                if (*(int *)(iVar3 + 4) == 0xf62f) {
                  FUN_00454ea0();
                  iVar3 = FUN_00405270();
                  if ((0 < *(int *)(iVar3 + 0x20)) && (iVar3 = FUN_004277a0(), iVar3 != -1)) {
                    pcVar5 = (char *)FUN_00682990();
                    if (*pcVar5 == '\0') {
                      puVar6 = (undefined1 *)FUN_00682990();
                      *puVar6 = 1;
                    }
                    else {
                      puVar6 = (undefined1 *)FUN_00682990();
                      *puVar6 = 0;
                    }
                    puVar9 = (undefined4 *)FUN_006829a0();
                    *puVar9 = *(undefined4 *)(iStack_fe4 + 0x9a0);
                    FUN_006829a0();
                    FUN_0040d840();
                  }
                }
                uStack_1908 = *(undefined4 *)(iStack_fe4 + 0x9a0);
                _memset(acStack_314,0,0x100);
                pcStack_10fc = (char *)FUN_0040d7f0();
                pcStack_10f0 = acStack_314;
                do {
                  cStack_feb = *pcStack_10fc;
                  *pcStack_10f0 = cStack_feb;
                  pcStack_10fc = pcStack_10fc + 1;
                  pcStack_10f0 = pcStack_10f0 + 1;
                } while (cStack_feb != '\0');
                FUN_00454ea0();
                puStack_1c40 = (undefined *)0x9c40;
                apcStack_1c54[4] = &UNK_006874c2;
                net_packet_send_opcode_u32_bytes();
                FUN_0044e420();
                FUN_004053a0();
                CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(iStack_fe4 + 0xa3c));
                iVar3 = FUN_00410b30();
                *(int *)(*(int *)(iStack_fe4 + 0x828) + 0x24) =
                     iVar3 * 6 + *(int *)(iStack_fe4 + 0xa40);
              }
              iVar3 = FUN_00454ea0();
              *(undefined1 *)(iVar3 + 0xdfb) = 0;
              *(undefined1 *)(iStack_fe4 + 0xad0) = 0;
              *(undefined1 *)(*(int *)(iStack_fe4 + 0x828) + 4) = 0;
              uStack_1904 = 0xaf;
              FUN_004051c0();
              ui_clear_flag_bits_on_list();
            }
          }
          else {
            FUN_0049ced0();
            uStack_14a8 = 0xaf;
            apcStack_1c54[3] = &UNK_00773cac;
            apcStack_1c54[2] = &UNK_006871cf;
            FUN_004054a0();
            local_8._0_1_ = 0x31;
            apcStack_1c54[3] = (char *)&uStack_14a8;
            apcStack_1c54[2] = &UNK_006871ea;
            apcStack_1c54[3] = (char *)FUN_004051c0();
            local_8._0_1_ = 0;
            apcStack_1c54[2] = &UNK_006871f4;
            iStack_14ac = ui_find_widget_by_key();
            *(undefined1 *)(iStack_14ac + 0xad0) = 1;
            *(undefined1 *)(*(int *)(iStack_14ac + 0x828) + 4) = 1;
            iStack_103c = iStack_14ac;
            FUN_004053a0();
            CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(iStack_103c + 0xa3c));
            iVar3 = FUN_00410b30();
            *(int *)(*(int *)(iStack_103c + 0x828) + 0x24) =
                 iVar3 * 6 + *(int *)(iStack_103c + 0xa40);
            iVar3 = FUN_00454ea0();
            *(undefined1 *)(iVar3 + 0xdfb) = 1;
          }
          uRam007ca660 = FUN_004274f0();
          break;
              /* WM_CLOSE / also VK_SHIFT in key switch below — context-dependent */
case 0x10:
          iVar3 = FUN_00454ea0();
          if (*(char *)(iVar3 + 0xdfb) == '\0') {
            iVar3 = FUN_00454ea0();
            *(undefined1 *)(iVar3 + 0xdfa) = 0;
          }
          break;
        case 0x20:
          iVar3 = FUN_00454ea0();
          if (*(char *)(iVar3 + 0xdfb) == '\0') {
            iVar3 = FUN_00454ea0();
            *(undefined1 *)(iVar3 + 0xdf9) = 0;
          }
          break;
        case 0x25:
          iVar3 = FUN_00454ea0();
          if (*(char *)(iVar3 + 0xdfb) == '\0') {
            iVar3 = FUN_00454ea0();
            *(undefined1 *)(iVar3 + 0xded) = 0;
            FUN_00454ea0();
            FUN_00470960();
          }
          break;
        case 0x26:
    /* VK_UP */
          cVar1 = FUN_0040d500();
          if (cVar1 == '\0') {
            uStack_18f0 = 0xaf;
            FUN_004051c0();
            cVar1 = FUN_0040d500();
            if (cVar1 == '\0') {
              uStack_18ec = 0xaf;
              apcStack_1c54[3] = &UNK_00773d20;
              apcStack_1c54[2] = &UNK_00687774;
              FUN_004054a0();
              local_8._0_1_ = 0x36;
              apcStack_1c54[3] = (char *)&uStack_18ec;
              apcStack_1c54[2] = &UNK_0068778f;
              apcStack_1c54[3] = (char *)FUN_004051c0();
              local_8._0_1_ = 0;
              apcStack_1c54[2] = &UNK_00687799;
              iStack_18e8 = ui_find_widget_by_key();
              if (*(char *)(iStack_18e8 + 0x51) != '\0') {
                uStack_18e4 = 0xaf;
                apcStack_1c54[3] = &UNK_00773d14;
                apcStack_1c54[2] = &UNK_006877d3;
                FUN_004054a0();
                local_8._0_1_ = 0x37;
                apcStack_1c54[3] = (char *)&uStack_18e4;
                apcStack_1c54[2] = &UNK_006877ee;
                apcStack_1c54[3] = (char *)FUN_004051c0();
                local_8._0_1_ = 0;
                apcStack_1c54[2] = &UNK_006877f8;
                iStack_18e0 = ui_find_widget_by_key();
                if (*(char *)(iStack_18e0 + 0x51) != '\0') {
                  uStack_18dc = 0xaf;
                  apcStack_1c54[3] = &UNK_00773d5c;
                  apcStack_1c54[2] = &UNK_00687832;
                  FUN_004054a0();
                  local_8._0_1_ = 0x38;
                  apcStack_1c54[3] = (char *)&uStack_18dc;
                  apcStack_1c54[2] = &UNK_0068784d;
                  apcStack_1c54[3] = (char *)FUN_004051c0();
                  local_8._0_1_ = 0;
                  apcStack_1c54[2] = &UNK_00687857;
                  iStack_18d8 = ui_find_widget_by_key();
                  if (*(char *)(iStack_18d8 + 0xad0) != '\0') {
                    uStack_18d4 = 0xaf;
                    apcStack_1c54[3] = &UNK_00773d50;
                    apcStack_1c54[2] = &UNK_00687894;
                    FUN_004054a0();
                    local_8._0_1_ = 0x39;
                    apcStack_1c54[3] = (char *)&uStack_18d4;
                    apcStack_1c54[2] = &UNK_006878af;
                    apcStack_1c54[3] = (char *)FUN_004051c0();
                    local_8._0_1_ = 0;
                    apcStack_1c54[2] = &UNK_006878b9;
                    iStack_18d0 = ui_find_widget_by_key();
                    if (*(char *)(*(int *)(iStack_18d0 + 0x828) + 4) != '\0') {
                      uStack_18cc = 0xaf;
                      apcStack_1c54[3] = &UNK_00773d44;
                      apcStack_1c54[2] = &UNK_006878f9;
                      FUN_004054a0();
                      local_8._0_1_ = 0x3a;
                      apcStack_1c54[3] = (char *)&uStack_18cc;
                      apcStack_1c54[2] = &UNK_00687914;
                      apcStack_1c54[3] = (char *)FUN_004051c0();
                      local_8._0_1_ = 0;
                      apcStack_1c54[2] = &UNK_0068791e;
                      iStack_18c8 = ui_find_widget_by_key();
                      uRam007ca660 = uRam007ca660 + 1;
                      iStack_1048 = iStack_18c8;
                      iVar3 = FUN_004274f0();
                      if (iVar3 - 1U < uRam007ca660) {
                        iVar3 = FUN_004274f0();
                        uRam007ca660 = iVar3 - 1;
                        FUN_004053a0();
                      }
                      else {
                        FUN_004274d0();
                        FUN_0040d840();
                      }
                      CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(iStack_1048 + 0xa3c));
                      iVar3 = FUN_00410b30();
                      *(int *)(*(int *)(iStack_1048 + 0x828) + 0x24) =
                           iVar3 * 6 + *(int *)(iStack_1048 + 0xa40);
                    }
                  }
                }
              }
            }
          }
          iVar3 = FUN_00454ea0();
          if (*(char *)(iVar3 + 0xdfb) == '\0') {
            iVar3 = FUN_00454ea0();
            *(undefined1 *)(iVar3 + 0xdeb) = 0;
            FUN_00454ea0();
            FUN_00470960();
          }
          break;
        case 0x27:
    /* VK_RIGHT */
          iVar3 = FUN_00454ea0();
          if (*(char *)(iVar3 + 0xdfb) == '\0') {
            iVar3 = FUN_00454ea0();
            *(undefined1 *)(iVar3 + 0xdee) = 0;
            FUN_00454ea0();
            FUN_00470960();
          }
          break;
        case 0x28:
    /* VK_DOWN */
          cVar1 = FUN_0040d500();
          if (cVar1 == '\0') {
            uStack_18c4 = 0xaf;
            FUN_004051c0();
            cVar1 = FUN_0040d500();
            if (cVar1 == '\0') {
              uStack_18c0 = 0xaf;
              apcStack_1c54[3] = &UNK_00773d8c;
              apcStack_1c54[2] = &UNK_00687a78;
              FUN_004054a0();
              local_8._0_1_ = 0x3b;
              apcStack_1c54[3] = (char *)&uStack_18c0;
              apcStack_1c54[2] = &UNK_00687a93;
              apcStack_1c54[3] = (char *)FUN_004051c0();
              local_8._0_1_ = 0;
              apcStack_1c54[2] = &UNK_00687a9d;
              iStack_18bc = ui_find_widget_by_key();
              if (*(char *)(iStack_18bc + 0x51) != '\0') {
                uStack_18b8 = 0xaf;
                apcStack_1c54[3] = &UNK_00773d80;
                apcStack_1c54[2] = &UNK_00687ad7;
                FUN_004054a0();
                local_8._0_1_ = 0x3c;
                apcStack_1c54[3] = (char *)&uStack_18b8;
                apcStack_1c54[2] = &UNK_00687af2;
                apcStack_1c54[3] = (char *)FUN_004051c0();
                local_8._0_1_ = 0;
                apcStack_1c54[2] = &UNK_00687afc;
                iStack_18b4 = ui_find_widget_by_key();
                if (*(char *)(iStack_18b4 + 0x51) != '\0') {
                  uStack_18b0 = 0xaf;
                  apcStack_1c54[3] = &UNK_00773d74;
                  apcStack_1c54[2] = &UNK_00687b36;
                  FUN_004054a0();
                  local_8._0_1_ = 0x3d;
                  apcStack_1c54[3] = (char *)&uStack_18b0;
                  apcStack_1c54[2] = &UNK_00687b51;
                  apcStack_1c54[3] = (char *)FUN_004051c0();
                  local_8._0_1_ = 0;
                  apcStack_1c54[2] = &UNK_00687b5b;
                  iStack_18ac = ui_find_widget_by_key();
                  if (*(char *)(iStack_18ac + 0xad0) != '\0') {
                    uStack_18a8 = 0xaf;
                    apcStack_1c54[3] = &UNK_00773d68;
                    apcStack_1c54[2] = &UNK_00687b98;
                    FUN_004054a0();
                    local_8._0_1_ = 0x3e;
                    apcStack_1c54[3] = (char *)&uStack_18a8;
                    apcStack_1c54[2] = &UNK_00687bb3;
                    apcStack_1c54[3] = (char *)FUN_004051c0();
                    local_8._0_1_ = 0;
                    apcStack_1c54[2] = &UNK_00687bbd;
                    iStack_18a4 = ui_find_widget_by_key();
                    if (*(char *)(*(int *)(iStack_18a4 + 0x828) + 4) != '\0') {
                      uRam007ca660 = uRam007ca660 - 1;
                      if ((int)uRam007ca660 < 0) {
                        uRam007ca660 = 0;
                      }
                      uStack_18a0 = 0xaf;
                      apcStack_1c54[3] = &UNK_00773da8;
                      apcStack_1c54[2] = &UNK_00687c16;
                      FUN_004054a0();
                      local_8._0_1_ = 0x3f;
                      apcStack_1c54[3] = (char *)&uStack_18a0;
                      apcStack_1c54[2] = &UNK_00687c31;
                      apcStack_1c54[3] = (char *)FUN_004051c0();
                      local_8._0_1_ = 0;
                      apcStack_1c54[2] = &UNK_00687c3b;
                      iStack_189c = ui_find_widget_by_key();
                      iStack_1054 = iStack_189c;
                      FUN_004274d0();
                      FUN_0040d840();
                      CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(iStack_1054 + 0xa3c));
                      iVar3 = FUN_00410b30();
                      *(int *)(*(int *)(iStack_1054 + 0x828) + 0x24) =
                           iVar3 * 6 + *(int *)(iStack_1054 + 0xa40);
                    }
                  }
                }
              }
            }
          }
          iVar3 = FUN_00454ea0();
          if (*(char *)(iVar3 + 0xdfb) == '\0') {
            iVar3 = FUN_00454ea0();
            *(undefined1 *)(iVar3 + 0xdec) = 0;
            FUN_00454ea0();
            FUN_00470960();
          }
          break;
        case 0x41:
    /* VK_A */
          iVar3 = FUN_00454ea0();
          if (*(char *)(iVar3 + 0xdfb) == '\0') {
            iVar3 = FUN_00454ea0();
            *(undefined1 *)(iVar3 + 0xdf2) = 0;
          }
          break;
        case 0x43:
    /* VK_C */
          iVar3 = FUN_00454ea0();
          if (*(char *)(iVar3 + 0xdfb) == '\0') {
            iVar3 = FUN_00454ea0();
            *(undefined1 *)(iVar3 + 0xdef) = 0;
          }
          break;
        case 0x44:
    /* VK_D */
          iVar3 = FUN_00454ea0();
          if (*(char *)(iVar3 + 0xdfb) == '\0') {
            iVar3 = FUN_00454ea0();
            *(undefined1 *)(iVar3 + 0xdf4) = 0;
          }
          break;
        case 0x46:
    /* VK_F */
          iVar3 = FUN_00454ea0();
          if (*(char *)(iVar3 + 0xdfb) == '\0') {
            iVar3 = FUN_00454ea0();
            *(undefined1 *)(iVar3 + 0xdf5) = 0;
          }
          break;
        case 0x47:
    /* VK_G */
          iVar3 = FUN_00454ea0();
          if (*(char *)(iVar3 + 0xdfb) == '\0') {
            iVar3 = FUN_00454ea0();
            *(undefined1 *)(iVar3 + 0xdf6) = 0;
          }
          break;
        case 0x48:
    /* VK_H */
          iVar3 = FUN_00454ea0();
          if (*(char *)(iVar3 + 0xdfb) == '\0') {
            iVar3 = FUN_00454ea0();
            *(undefined1 *)(iVar3 + 0xdf7) = 0;
          }
          break;
        case 0x53:
    /* VK_S */
          iVar3 = FUN_00454ea0();
          if (*(char *)(iVar3 + 0xdfb) == '\0') {
            iVar3 = FUN_00454ea0();
            *(undefined1 *)(iVar3 + 0xdf3) = 0;
          }
          break;
        case 0x56:
    /* VK_V (skill/creature effect path) */
          iVar3 = FUN_00454ea0();
          if (*(char *)(iVar3 + 0xdfb) == '\0') {
            iVar3 = FUN_00454ea0();
            *(undefined1 *)(iVar3 + 0xdf8) = 0;
          }
          break;
        case 0x58:
    /* VK_X */
          iVar3 = FUN_00454ea0();
          if (*(char *)(iVar3 + 0xdfb) == '\0') {
            iVar3 = FUN_00454ea0();
            *(undefined1 *)(iVar3 + 0xdf0) = 0;
          }
          break;
        case 0x5a:
    /* VK_Z */
          iVar3 = FUN_00454ea0();
          if (*(char *)(iVar3 + 0xdfb) == '\0') {
            iVar3 = FUN_00454ea0();
            *(undefined1 *)(iVar3 + 0xdf1) = 0;
          }
        }
        iVar3 = FUN_00454ea0();
        if (((*(char *)(iVar3 + 0xdb8) == '\0') &&
            (iVar3 = FUN_00454ea0(), *(char *)(iVar3 + 0xe05) == '\0')) &&
           (iVar3 = FUN_00454ea0(), 3 < *(int *)(iVar3 + 0xdd8))) {
          FUN_00454ea0();
        }
      }
      break;
        /* WM_CHAR */
case 0x102:
      uStack_1854 = 7000;
      uStack_11d8 = FUN_004051c0();
      piStack_10d4 = (int *)FUN_004018d0();
      piStack_1850 = (int *)FUN_004018b0();
      for (; piStack_10d4 != piStack_1850; piStack_10d4 = piStack_10d4 + 1) {
        piStack_fbc = piStack_10d4;
        cVar1 = FUN_00427c60();
        if ((cVar1 != '\0') && (*(char *)(*piStack_fbc + 0xad0) != '\0')) {
          if (wParam == 8) {
            iVar3 = FUN_00410b30();
            if (iVar3 != 0) {
              FUN_00410b30();
              pcVar5 = (char *)FUN_0069f850();
              if (((int)*pcVar5 & 0x80U) != 0) {
                FUN_004cc1a0();
                puVar9 = (undefined4 *)FUN_004cc110();
                uStack_184c = *puVar9;
                FUN_004cc1e0();
                *(int *)(*(int *)(*piStack_fbc + 0x828) + 0x24) =
                     *(int *)(*(int *)(*piStack_fbc + 0x828) + 0x24) + -6;
              }
              iVar3 = FUN_00410b30();
              if (iVar3 != 0) {
                FUN_004cc1a0();
                puVar9 = (undefined4 *)FUN_004cc110();
                uStack_1848 = *puVar9;
                FUN_004cc1e0();
                *(int *)(*(int *)(*piStack_fbc + 0x828) + 0x24) =
                     *(int *)(*(int *)(*piStack_fbc + 0x828) + 0x24) + -6;
              }
              CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(*piStack_fbc + 0xa3c));
            }
          }
          else if ((wParam != 0xd) && (uVar4 = FUN_00410b30(), uVar4 < 0xc)) {
            FUN_004cc240();
            *(int *)(*(int *)(*piStack_fbc + 0x828) + 0x24) =
                 *(int *)(*(int *)(*piStack_fbc + 0x828) + 0x24) + 6;
            iVar3 = FUN_00410b30();
            if (iVar3 == 0xc) {
              uStack_1110 = 0;
              iStack_11dc = *piStack_fbc + 0xa4c;
              pcStack_10d0 = (char *)FUN_0040d7f0();
              pcStack_1844 = (char *)FUN_004cc180();
              for (; pcStack_10d0 != pcStack_1844; pcStack_10d0 = pcStack_10d0 + 1) {
                pcStack_1840 = pcStack_10d0;
                if (((int)*pcStack_10d0 & 0x80U) != 0) {
                  uStack_1110 = uStack_1110 + 1;
                }
              }
              uVar4 = uStack_1110 & 0x80000001;
              if ((int)uVar4 < 0) {
                uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
              }
              if (uVar4 != 0) {
                FUN_004cc1a0();
                puVar9 = (undefined4 *)FUN_004cc110();
                uStack_183c = *puVar9;
                FUN_004cc1e0();
                *(int *)(*(int *)(*piStack_fbc + 0x828) + 0x24) =
                     *(int *)(*(int *)(*piStack_fbc + 0x828) + 0x24) + -6;
              }
            }
            CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(*piStack_fbc + 0xa3c));
          }
        }
      }
      uStack_1838 = 0x3c;
      uStack_11e0 = FUN_004051c0();
      piStack_10cc = (int *)FUN_004018d0();
      piStack_1834 = (int *)FUN_004018b0();
      for (; piStack_10cc != piStack_1834; piStack_10cc = piStack_10cc + 1) {
        piStack_fc0 = piStack_10cc;
        cVar1 = FUN_00427c60();
        if ((cVar1 != '\0') && (*(char *)(*piStack_fc0 + 0xad0) != '\0')) {
          if (wParam == 8) {
            iVar3 = FUN_00410b30();
            if (iVar3 != 0) {
              FUN_00410b30();
              pcVar5 = (char *)FUN_0069f850();
              if (((int)*pcVar5 & 0x80U) != 0) {
                FUN_004cc1a0();
                puVar9 = (undefined4 *)FUN_004cc110();
                uStack_1830 = *puVar9;
                FUN_004cc1e0();
                *(int *)(*(int *)(*piStack_fc0 + 0x828) + 0x24) =
                     *(int *)(*(int *)(*piStack_fc0 + 0x828) + 0x24) + -6;
              }
              iVar3 = FUN_00410b30();
              if (iVar3 != 0) {
                FUN_004cc1a0();
                puVar9 = (undefined4 *)FUN_004cc110();
                uStack_182c = *puVar9;
                FUN_004cc1e0();
                *(int *)(*(int *)(*piStack_fc0 + 0x828) + 0x24) =
                     *(int *)(*(int *)(*piStack_fc0 + 0x828) + 0x24) + -6;
              }
              CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(*piStack_fc0 + 0xa3c));
            }
          }
          else if ((wParam != 0xd) && (uVar4 = FUN_00410b30(), uVar4 < 0xc)) {
            FUN_004cc240();
            *(int *)(*(int *)(*piStack_fc0 + 0x828) + 0x24) =
                 *(int *)(*(int *)(*piStack_fc0 + 0x828) + 0x24) + 6;
            iVar3 = FUN_00410b30();
            if (iVar3 == 0xc) {
              uStack_1114 = 0;
              iStack_11e4 = *piStack_fc0 + 0xa4c;
              pcStack_10c8 = (char *)FUN_0040d7f0();
              pcStack_1828 = (char *)FUN_004cc180();
              for (; pcStack_10c8 != pcStack_1828; pcStack_10c8 = pcStack_10c8 + 1) {
                pcStack_1824 = pcStack_10c8;
                if (((int)*pcStack_10c8 & 0x80U) != 0) {
                  uStack_1114 = uStack_1114 + 1;
                }
              }
              uVar4 = uStack_1114 & 0x80000001;
              if ((int)uVar4 < 0) {
                uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
              }
              if (uVar4 != 0) {
                FUN_004cc1a0();
                puVar9 = (undefined4 *)FUN_004cc110();
                uStack_1820 = *puVar9;
                FUN_004cc1e0();
                *(int *)(*(int *)(*piStack_fc0 + 0x828) + 0x24) =
                     *(int *)(*(int *)(*piStack_fc0 + 0x828) + 0x24) + -6;
              }
            }
            CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(*piStack_fc0 + 0xa3c));
          }
        }
      }
      uStack_181c = 0xaf;
      uStack_11e8 = FUN_004051c0();
      piStack_10c4 = (int *)FUN_004018d0();
      piStack_1818 = (int *)FUN_004018b0();
      for (; piStack_10c4 != piStack_1818; piStack_10c4 = piStack_10c4 + 1) {
        piStack_fc4 = piStack_10c4;
        cVar1 = FUN_00427c60();
        if (cVar1 != '\0') {
          if (*(char *)(*piStack_fc4 + 0xad0) != '\0') {
            if (wParam == 8) {
              iVar3 = FUN_00410b30();
              if (iVar3 != 0) {
                FUN_00410b30();
                pcVar5 = (char *)FUN_0069f850();
                if (((int)*pcVar5 & 0x80U) != 0) {
                  FUN_004cc1a0();
                  puVar9 = (undefined4 *)FUN_004cc110();
                  uStack_1814 = *puVar9;
                  FUN_004cc1e0();
                  *(int *)(*(int *)(*piStack_fc4 + 0x828) + 0x24) =
                       *(int *)(*(int *)(*piStack_fc4 + 0x828) + 0x24) + -6;
                }
                iVar3 = FUN_00410b30();
                if (iVar3 != 0) {
                  FUN_004cc1a0();
                  puVar9 = (undefined4 *)FUN_004cc110();
                  uStack_1810 = *puVar9;
                  FUN_004cc1e0();
                  *(int *)(*(int *)(*piStack_fc4 + 0x828) + 0x24) =
                       *(int *)(*(int *)(*piStack_fc4 + 0x828) + 0x24) + -6;
                }
                CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(*piStack_fc4 + 0xa3c));
              }
            }
            else if ((wParam != 0xd) && (uVar4 = FUN_00410b30(), uVar4 < 0x50)) {
              FUN_004cc240();
              *(int *)(*(int *)(*piStack_fc4 + 0x828) + 0x24) =
                   *(int *)(*(int *)(*piStack_fc4 + 0x828) + 0x24) + 6;
              iVar3 = FUN_00410b30();
              if (iVar3 == 0x50) {
                uStack_1118 = 0;
                iStack_11ec = *piStack_fc4 + 0xa4c;
                pcStack_10c0 = (char *)FUN_0040d7f0();
                pcStack_180c = (char *)FUN_004cc180();
                for (; pcStack_10c0 != pcStack_180c; pcStack_10c0 = pcStack_10c0 + 1) {
                  pcStack_1808 = pcStack_10c0;
                  if (((int)*pcStack_10c0 & 0x80U) != 0) {
                    uStack_1118 = uStack_1118 + 1;
                  }
                }
                uVar4 = uStack_1118 & 0x80000001;
                if ((int)uVar4 < 0) {
                  uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
                }
                if (uVar4 != 0) {
                  FUN_004cc1a0();
                  puVar9 = (undefined4 *)FUN_004cc110();
                  uStack_1804 = *puVar9;
                  FUN_004cc1e0();
                  *(int *)(*(int *)(*piStack_fc4 + 0x828) + 0x24) =
                       *(int *)(*(int *)(*piStack_fc4 + 0x828) + 0x24) + -6;
                }
              }
              CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(*piStack_fc4 + 0xa3c));
            }
          }
          break;
        }
      }
      uStack_1800 = 0x3a;
      uStack_11f0 = FUN_004051c0();
      piStack_10bc = (int *)FUN_004018d0();
      piStack_17fc = (int *)FUN_004018b0();
      for (; piStack_10bc != piStack_17fc; piStack_10bc = piStack_10bc + 1) {
        piStack_fac = piStack_10bc;
        cVar1 = FUN_00427c60();
        if (cVar1 != '\0') {
          if (*(char *)(*piStack_fac + 0xad0) != '\0') {
            cStack_fad = (char)wParam;
            if (wParam == 8) {
              iVar3 = FUN_00410b30();
              if (iVar3 != 0) {
                FUN_0069f820();
                CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(*piStack_fac + 0xa3c));
                *(int *)(*(int *)(*piStack_fac + 0x828) + 0x24) =
                     *(int *)(*(int *)(*piStack_fac + 0x828) + 0x24) + -6;
              }
            }
            else {
              iVar3 = _isdigit((int)(char)wParam);
              if (iVar3 != 0) {
                uStack_17f8 = 0x3a;
                uStack_11f4 = FUN_004051c0();
                piStack_10b8 = (int *)FUN_004018d0();
                piStack_17f4 = (int *)FUN_004018b0();
                for (; piStack_10b8 != piStack_17f4; piStack_10b8 = piStack_10b8 + 1) {
                  piStack_111c = piStack_10b8;
                  iVar3 = FUN_004277a0();
                  if ((iVar3 != -1) || (iVar3 = FUN_004277a0(), iVar3 != -1)) {
                    iStack_fe8 = *(int *)(*piStack_111c + 0x9d0);
                    piStack_fc8 = *(int **)(iStack_fe8 + 0x9d0);
                  }
                }
                FUN_00454ea0();
                piVar7 = (int *)FUN_00405270();
                if ((piStack_fc8 == piVar7) ||
                   ((*(int *)(*piStack_fac + 0x9d0) != 0 &&
                    (*(int *)(*(int *)(*piStack_fac + 0x9d0) + 0x9d4) == 3)))) {
code_r0x00689615:
                  cVar1 = FUN_00427c60();
                  if ((cVar1 == '\0') &&
                     ((iVar3 = FUN_00410b30(), iVar3 != 1 ||
                      (pcVar5 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                ::operator[]((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                              *)(*piStack_fac + 0xa4c),0), *pcVar5 != '0')))) {
                    uStack_17d0 = FUN_0069f8a0();
                    local_8._0_1_ = 0x49;
                    uStack_17cc = uStack_17d0;
                    uStack_17c8 = FUN_00427c80();
                    local_8._0_1_ = 0x4a;
                    uStack_17c4 = uStack_17c8;
                    iVar3 = FUN_004cdfe0();
                    cStack_1019 = iVar3 <= piStack_fc8[2];
                    uStack_11fc = (uint)(byte)cStack_1019;
                    local_8._0_1_ = 0x49;
                    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_df4);
                    local_8._0_1_ = 0;
                    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_ddc);
                    if (cStack_1019 == '\0') {
                      uStack_17bc = FUN_004c7c00();
                      FUN_004053e0();
                      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_dac);
                    }
                    else {
                      uStack_17c0 = FUN_0069f8a0();
                      local_8._0_1_ = 0x4b;
                      uStack_1728 = uStack_17c0;
                      FUN_0051a160();
                      local_8._0_1_ = 0;
                      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_dc4);
                    }
                    CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(*piStack_fac + 0xa3c));
                    iVar3 = FUN_00410b30();
                    *(int *)(*(int *)(*piStack_fac + 0x828) + 0x24) = iVar3 * 6 + 0x26;
                  }
                  else {
                    uStack_17e0 = FUN_0069f8a0();
                    local_8._0_1_ = 0x48;
                    uStack_17dc = uStack_17e0;
                    iVar3 = FUN_004cdfe0();
                    cStack_1018 = iVar3 <= piStack_fc8[2];
                    uStack_11f8 = (uint)(byte)cStack_1018;
                    local_8._0_1_ = 0;
                    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_e3c);
                    if (cStack_1018 == '\0') {
                      uStack_17d4 = FUN_004c7c00();
                      FUN_004053e0();
                      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_e0c);
                    }
                    else {
                      uStack_17d8 = FUN_0069f8a0();
                      FUN_004053e0();
                      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_e24);
                    }
                    CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(*piStack_fac + 0xa3c));
                    iVar3 = FUN_00410b30();
                    *(int *)(*(int *)(*piStack_fac + 0x828) + 0x24) = iVar3 * 6 + 0x26;
                  }
                }
                else {
                  if (*(int *)(*piStack_fac + 0x9d0) != 0) {
                    uStack_17f0 = 0xdac;
                    apcStack_1c54[3] = &UNK_00773e14;
                    apcStack_1c54[2] = &UNK_0068941f;
                    FUN_004054a0();
                    local_8._0_1_ = 0x46;
                    apcStack_1c54[3] = (char *)&uStack_17f0;
                    apcStack_1c54[2] = &UNK_0068943a;
                    apcStack_1c54[3] = (char *)FUN_004051c0();
                    local_8._0_1_ = 0;
                    apcStack_1c54[2] = &UNK_00689444;
                    iStack_17ec = ui_find_widget_by_key();
                    if (*(int *)(*piStack_fac + 0x9d0) == iStack_17ec) goto code_r0x00689615;
                  }
                  if ((*(int *)(*piStack_fac + 0x9d0) != 0) &&
                     (*(int *)(*(int *)(*piStack_fac + 0x9d0) + 0x9d4) == 9)) goto code_r0x00689615;
                  if (*(int *)(*piStack_fac + 0x9d0) != 0) {
                    uStack_17e8 = 0x14b4;
                    apcStack_1c54[3] = &UNK_00773e08;
                    apcStack_1c54[2] = &UNK_006894c3;
                    FUN_004054a0();
                    local_8._0_1_ = 0x47;
                    apcStack_1c54[3] = (char *)&uStack_17e8;
                    apcStack_1c54[2] = &UNK_006894de;
                    apcStack_1c54[3] = (char *)FUN_004051c0();
                    local_8._0_1_ = 0;
                    apcStack_1c54[2] = &UNK_006894e8;
                    iStack_17e4 = ui_find_widget_by_key();
                    if (*(int *)(*piStack_fac + 0x9d0) == iStack_17e4) goto code_r0x00689615;
                  }
                  if ((((((*(int *)(*piStack_fac + 0x9d0) != 0) &&
                         (*(int *)(*(int *)(*piStack_fac + 0x9d0) + 0xa0c) == 6)) ||
                        ((*(int *)(*piStack_fac + 0x9d0) != 0 &&
                         (*(int *)(*(int *)(*piStack_fac + 0x9d0) + 0xa0c) == 4)))) ||
                       ((*(int *)(*piStack_fac + 0x9d0) != 0 &&
                        (*(int *)(*(int *)(*piStack_fac + 0x9d0) + 0xa0c) == 9)))) ||
                      ((*(int *)(*piStack_fac + 0x9d0) != 0 &&
                       (*(int *)(*(int *)(*piStack_fac + 0x9d0) + 0xa0c) == 10)))) ||
                     (((*(int *)(*piStack_fac + 0x9d0) != 0 &&
                       (*(int *)(*(int *)(*piStack_fac + 0x9d0) + 0x98c) == 0x53c)) ||
                      ((*(int *)(*piStack_fac + 0x9d0) != 0 &&
                       (*(int *)(*(int *)(*piStack_fac + 0x9d0) + 0x98c) == 0x578))))))
                  goto code_r0x00689615;
                  if (*(int *)(iStack_fe8 + 0x4c) == 10) {
                    cVar1 = FUN_00427c60();
                    if ((cVar1 == '\0') &&
                       ((iVar3 = FUN_00410b30(), iVar3 != 1 ||
                        (pcVar5 = std::
                                  basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                                  operator[]((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                              *)(*piStack_fac + 0xa4c),0), *pcVar5 != '0')))) {
                      uStack_1788 = 0xd48;
                      FUN_004051c0();
                      cVar1 = FUN_006caa00();
                      if (cVar1 == '\0') {
                        uStack_1768 = 0x1450;
                        FUN_004051c0();
                        cVar1 = FUN_006caa00();
                        if (cVar1 != '\0') {
                          uStack_1764 = FUN_0069f8a0();
                          local_8._0_1_ = 0x51;
                          uStack_1760 = uStack_1764;
                          uStack_175c = FUN_00427c80();
                          local_8._0_1_ = 0x52;
                          uStack_1758 = uStack_175c;
                          iVar8 = FUN_004cdfe0();
                          iVar3 = *piStack_fc8;
                          iVar10 = FUN_00454ea0();
                          cStack_101d = iVar8 * iVar3 - *(int *)(iVar10 + 0xac8) == 0 ||
                                        iVar8 * iVar3 < *(int *)(iVar10 + 0xac8);
                          uStack_120c = (uint)(byte)cStack_101d;
                          local_8._0_1_ = 0x51;
                          std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                    (afStack_704);
                          local_8._0_1_ = 0;
                          std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                    (afStack_c74);
                          if (cStack_101d == '\0') {
                            FUN_00454ea0();
                            uStack_1748 = FUN_004c7c00();
                            FUN_004053e0();
                            std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                      (afStack_c2c);
                            iVar3 = FUN_004cdfe0();
                            if (piStack_fc8[2] <= iVar3) {
                              uStack_1744 = FUN_004c7c00();
                              FUN_004053e0();
                              std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                        (afStack_c14);
                            }
                          }
                          else {
                            uStack_1754 = FUN_0069f8a0();
                            local_8._0_1_ = 0x53;
                            uStack_1750 = uStack_1754;
                            FUN_0051a160();
                            local_8._0_1_ = 0;
                            std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                      (afStack_c5c);
                            iVar3 = FUN_004cdfe0();
                            if (piStack_fc8[2] <= iVar3) {
                              uStack_174c = FUN_004c7c00();
                              FUN_004053e0();
                              std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                        (afStack_c44);
                            }
                          }
                        }
                      }
                      else {
                        uStack_1784 = FUN_0069f8a0();
                        local_8._0_1_ = 0x4e;
                        uStack_1780 = uStack_1784;
                        uStack_177c = FUN_00427c80();
                        local_8._0_1_ = 0x4f;
                        uStack_1778 = uStack_177c;
                        iVar8 = FUN_004cdfe0();
                        iVar3 = FUN_005cd6d0();
                        iVar3 = *(int *)(iVar3 + 0x104);
                        iVar10 = FUN_00454ea0();
                        cStack_101c = (iVar8 * iVar3) / 5 <= *(int *)(iVar10 + 0xac8);
                        uStack_1208 = (uint)(byte)cStack_101c;
                        local_8._0_1_ = 0x4e;
                        std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                  (afStack_cd4);
                        local_8._0_1_ = 0;
                        std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                  (afStack_cbc);
                        if (cStack_101c == '\0') {
                          FUN_00454ea0();
                          FUN_005cd6d0();
                          uStack_176c = FUN_004c7c00();
                          FUN_004053e0();
                          std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                    (afStack_c8c);
                        }
                        else {
                          uStack_1774 = FUN_0069f8a0();
                          local_8._0_1_ = 0x50;
                          uStack_1770 = uStack_1774;
                          FUN_0051a160();
                          local_8._0_1_ = 0;
                          std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                    (afStack_ca4);
                        }
                      }
                      CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(*piStack_fac + 0xa3c));
                      iVar3 = FUN_00410b30();
                      *(int *)(*(int *)(*piStack_fac + 0x828) + 0x24) = iVar3 * 6 + 0x26;
                    }
                    else {
                      uStack_17b8 = 0xd48;
                      FUN_004051c0();
                      cVar1 = FUN_006caa00();
                      if (cVar1 == '\0') {
                        uStack_17a4 = 0x1450;
                        FUN_004051c0();
                        cVar1 = FUN_006caa00();
                        if (cVar1 != '\0') {
                          uStack_17a0 = FUN_0069f8a0();
                          local_8._0_1_ = 0x4d;
                          uStack_179c = uStack_17a0;
                          iVar8 = FUN_004cdfe0();
                          iVar3 = *piStack_fc8;
                          iVar10 = FUN_00454ea0();
                          cStack_101b = iVar8 * iVar3 - *(int *)(iVar10 + 0xac8) == 0 ||
                                        iVar8 * iVar3 < *(int *)(iVar10 + 0xac8);
                          uStack_1204 = (uint)(byte)cStack_101b;
                          local_8._0_1_ = 0;
                          std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                    (afStack_d4c);
                          if (cStack_101b == '\0') {
                            FUN_00454ea0();
                            uStack_1790 = FUN_004c7c00();
                            FUN_004053e0();
                            std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                      (afStack_d04);
                            iVar3 = FUN_004cdfe0();
                            if (piStack_fc8[2] <= iVar3) {
                              uStack_178c = FUN_004c7c00();
                              FUN_004053e0();
                              std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                        (afStack_cec);
                            }
                          }
                          else {
                            uStack_1798 = FUN_0069f8a0();
                            FUN_004053e0();
                            std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                      (afStack_d34);
                            iVar3 = FUN_004cdfe0();
                            if (piStack_fc8[2] <= iVar3) {
                              uStack_1794 = FUN_004c7c00();
                              FUN_004053e0();
                              std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                        (afStack_d1c);
                            }
                          }
                        }
                      }
                      else {
                        uStack_17b4 = FUN_0069f8a0();
                        local_8._0_1_ = 0x4c;
                        uStack_17b0 = uStack_17b4;
                        iVar8 = FUN_004cdfe0();
                        iVar3 = FUN_005cd6d0();
                        iVar3 = *(int *)(iVar3 + 0x104);
                        iVar10 = FUN_00454ea0();
                        cStack_101a = (iVar8 * iVar3) / 5 <= *(int *)(iVar10 + 0xac8);
                        uStack_1200 = (uint)(byte)cStack_101a;
                        local_8._0_1_ = 0;
                        std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                  (afStack_d94);
                        if (cStack_101a == '\0') {
                          FUN_00454ea0();
                          FUN_005cd6d0();
                          uStack_17a8 = FUN_004c7c00();
                          FUN_004053e0();
                          std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                    (afStack_d64);
                        }
                        else {
                          uStack_17ac = FUN_0069f8a0();
                          FUN_004053e0();
                          std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                    (afStack_d7c);
                        }
                      }
                      CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(*piStack_fac + 0xa3c));
                      iVar3 = FUN_00410b30();
                      *(int *)(*(int *)(*piStack_fac + 0x828) + 0x24) = iVar3 * 6 + 0x26;
                    }
                  }
                  else if (*(int *)(iStack_fe8 + 0x4c) == 0xb) {
code_r0x0068a34e:
                    cVar1 = FUN_00427c60();
                    if ((cVar1 == '\0') &&
                       ((iVar3 = FUN_00410b30(), iVar3 != 1 ||
                        (pcVar5 = std::
                                  basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                                  operator[]((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                              *)(*piStack_fac + 0xa4c),0), *pcVar5 != '0')))) {
                      uStack_14c0 = FUN_0069f8a0();
                      local_8._0_1_ = 0x55;
                      uStack_14bc = uStack_14c0;
                      uStack_14c8 = FUN_00427c80();
                      local_8._0_1_ = 0x56;
                      uStack_14c4 = uStack_14c8;
                      iVar3 = FUN_004cdfe0();
                      cStack_101f = iVar3 <= *(int *)(*piStack_fac + 0x9a0);
                      uStack_1214 = (uint)(byte)cStack_101f;
                      local_8._0_1_ = 0x55;
                      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_bb4);
                      local_8._0_1_ = 0;
                      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_b9c);
                      if (cStack_101f == '\0') {
                        uStack_14d4 = FUN_004c7c00();
                        FUN_004053e0();
                        std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                  (afStack_b6c);
                      }
                      else {
                        uStack_14d0 = FUN_0069f8a0();
                        local_8._0_1_ = 0x57;
                        uStack_14cc = uStack_14d0;
                        FUN_0051a160();
                        local_8._0_1_ = 0;
                        std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                  (afStack_b84);
                      }
                      CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(*piStack_fac + 0xa3c));
                      iVar3 = FUN_00410b30();
                      *(int *)(*(int *)(*piStack_fac + 0x828) + 0x24) = iVar3 * 6 + 0x26;
                    }
                    else {
                      uStack_172c = FUN_0069f8a0();
                      local_8._0_1_ = 0x54;
                      uStack_1724 = uStack_172c;
                      iVar3 = FUN_004cdfe0();
                      cStack_101e = iVar3 <= *(int *)(*piStack_fac + 0x9a0);
                      uStack_1210 = (uint)(byte)cStack_101e;
                      local_8._0_1_ = 0;
                      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_bfc);
                      if (cStack_101e == '\0') {
                        uStack_14b8 = FUN_004c7c00();
                        FUN_004053e0();
                        std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                  (afStack_bcc);
                      }
                      else {
                        uStack_1740 = FUN_0069f8a0();
                        FUN_004053e0();
                        std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                  (afStack_be4);
                      }
                      CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(*piStack_fac + 0xa3c));
                      iVar3 = FUN_00410b30();
                      *(int *)(*(int *)(*piStack_fac + 0x828) + 0x24) = iVar3 * 6 + 0x26;
                    }
                  }
                  else {
                    if ((*(int *)(iStack_fe8 + 0x9d0) != 0) &&
                       (iVar3 = FUN_006caba0(), iVar3 == 0x8e)) {
                      FUN_005cd6d0();
                      cVar1 = FUN_00427c60();
                      if (cVar1 != '\0') goto code_r0x0068a34e;
                    }
                    if (((*(int *)(iStack_fe8 + 0x4c) == 0xe) ||
                        (*(int *)(iStack_fe8 + 0x4c) == 0xf)) ||
                       (*(int *)(iStack_fe8 + 0x98c) == 0x578)) {
                      cVar1 = FUN_00427c60();
                      if ((cVar1 == '\0') &&
                         ((iVar3 = FUN_00410b30(), iVar3 != 1 ||
                          (pcVar5 = std::
                                    basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                    ::operator[]((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                                  *)(*piStack_fac + 0xa4c),0), *pcVar5 != '0')))) {
                        uStack_14ec = FUN_0069f8a0();
                        local_8._0_1_ = 0x59;
                        uStack_14e8 = uStack_14ec;
                        uStack_14f4 = FUN_00427c80();
                        local_8._0_1_ = 0x5a;
                        uStack_14f0 = uStack_14f4;
                        iVar3 = FUN_004cdfe0();
                        cStack_1027 = iVar3 <= piStack_fc8[2];
                        uStack_121c = (uint)(byte)cStack_1027;
                        local_8._0_1_ = 0x59;
                        std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                  (afStack_b0c);
                        local_8._0_1_ = 0;
                        std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                  (afStack_af4);
                        if (cStack_1027 == '\0') {
                          uStack_1500 = FUN_004c7c00();
                          FUN_004053e0();
                          std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                    (afStack_ac4);
                        }
                        else {
                          uStack_14fc = FUN_0069f8a0();
                          local_8._0_1_ = 0x5b;
                          uStack_14f8 = uStack_14fc;
                          FUN_0051a160();
                          local_8._0_1_ = 0;
                          std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                    (afStack_adc);
                        }
                        CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(*piStack_fac + 0xa3c))
                        ;
                        iVar3 = FUN_00410b30();
                        *(int *)(*(int *)(*piStack_fac + 0x828) + 0x24) = iVar3 * 6 + 0x26;
                      }
                      else {
                        uStack_14dc = FUN_0069f8a0();
                        local_8._0_1_ = 0x58;
                        uStack_14d8 = uStack_14dc;
                        iVar3 = FUN_004cdfe0();
                        cStack_1020 = iVar3 <= piStack_fc8[2];
                        uStack_1218 = (uint)(byte)cStack_1020;
                        local_8._0_1_ = 0;
                        std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                  (afStack_b54);
                        if (cStack_1020 == '\0') {
                          uStack_14e4 = FUN_004c7c00();
                          FUN_004053e0();
                          std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                    (afStack_b24);
                        }
                        else {
                          uStack_14e0 = FUN_0069f8a0();
                          FUN_004053e0();
                          std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                    (afStack_b3c);
                        }
                        CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(*piStack_fac + 0xa3c))
                        ;
                        iVar3 = FUN_00410b30();
                        *(int *)(*(int *)(*piStack_fac + 0x828) + 0x24) = iVar3 * 6 + 0x26;
                      }
                    }
                  }
                }
              }
            }
          }
          break;
        }
      }
      uStack_1504 = 0x3b;
      uStack_1220 = FUN_004051c0();
      piStack_10b4 = (int *)FUN_004018d0();
      piStack_1508 = (int *)FUN_004018b0();
      for (; piStack_10b4 != piStack_1508; piStack_10b4 = piStack_10b4 + 1) {
        piStack_fb8 = piStack_10b4;
        cVar1 = FUN_00427c60();
        if (cVar1 != '\0') {
          if (*(char *)(*piStack_fb8 + 0xad0) != '\0') {
            if (wParam == 8) {
              iVar3 = FUN_00410b30();
              if (iVar3 != 0) {
                FUN_0069f820();
                CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(*piStack_fb8 + 0xa3c));
                *(int *)(*(int *)(*piStack_fb8 + 0x828) + 0x24) =
                     *(int *)(*(int *)(*piStack_fb8 + 0x828) + 0x24) + -6;
              }
            }
            else {
              cStack_fc9 = (char)wParam;
              iVar3 = _isdigit((int)(char)wParam);
              if (iVar3 != 0) {
                uStack_150c = 0x3b;
                uStack_1224 = FUN_004051c0();
                piStack_10b0 = (int *)FUN_004018d0();
                piStack_1510 = (int *)FUN_004018b0();
                for (; piStack_10b0 != piStack_1510; piStack_10b0 = piStack_10b0 + 1) {
                  piStack_1120 = piStack_10b0;
                  iVar3 = FUN_004277a0();
                  if ((iVar3 != -1) || (iVar3 = FUN_004277a0(), iVar3 != -1)) {
                    uStack_1514 = *(undefined4 *)(*piStack_1120 + 0x9d0);
                  }
                }
                if (((*(int *)(*piStack_fb8 + 0x9d0) == 0) ||
                    (*(int *)(*(int *)(*piStack_fb8 + 0x9d0) + 0x9d4) != 9)) &&
                   ((*(int *)(*piStack_fb8 + 0x9d0) == 0 ||
                    (*(int *)(*(int *)(*piStack_fb8 + 0x9d0) + 0xa0c) != 10)))) {
                  if (*(int *)(*piStack_fb8 + 0x9d0) != 0) {
                    uStack_1518 = 0x14b4;
                    apcStack_1c54[3] = &UNK_00773e38;
                    apcStack_1c54[2] = &UNK_0068ace3;
                    FUN_004054a0();
                    local_8._0_1_ = 0x5c;
                    apcStack_1c54[3] = (char *)&uStack_1518;
                    apcStack_1c54[2] = &UNK_0068acfe;
                    apcStack_1c54[3] = (char *)FUN_004051c0();
                    local_8._0_1_ = 0;
                    apcStack_1c54[2] = &UNK_0068ad08;
                    iStack_151c = ui_find_widget_by_key();
                    if (*(int *)(*piStack_fb8 + 0x9d0) == iStack_151c) goto code_r0x0068ad2b;
                  }
                }
                else {
code_r0x0068ad2b:
                  cVar1 = FUN_00427c60();
                  if ((cVar1 == '\0') &&
                     ((iVar3 = FUN_00410b30(), iVar3 != 1 ||
                      (pcVar5 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                ::operator[]((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                              *)(*piStack_fb8 + 0xa4c),0), *pcVar5 != '0')))) {
                    uStack_1534 = FUN_0069f8a0();
                    local_8._0_1_ = 0x5e;
                    uStack_1530 = uStack_1534;
                    uStack_153c = FUN_00427c80();
                    local_8._0_1_ = 0x5f;
                    uStack_1538 = uStack_153c;
                    iVar8 = FUN_00454ea0();
                    iVar3 = FUN_00454ea0();
                    iVar3 = *(int *)(iVar3 + 0x1fc);
                    iVar8 = *(int *)(iVar8 + 0x1fc);
                    iVar10 = FUN_004cdfe0();
                    cStack_1022 = iVar10 <= iVar3 * iVar8 * 10000;
                    uStack_122c = (uint)(byte)cStack_1022;
                    local_8._0_1_ = 0x5e;
                    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_a64);
                    local_8._0_1_ = 0;
                    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_a4c);
                    if (cStack_1022 == '\0') {
                      FUN_00454ea0();
                      FUN_00454ea0();
                      uStack_1548 = FUN_004c7c00();
                      FUN_004053e0();
                      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_a1c);
                    }
                    else {
                      uStack_1544 = FUN_0069f8a0();
                      local_8._0_1_ = 0x60;
                      uStack_1540 = uStack_1544;
                      FUN_0051a160();
                      local_8._0_1_ = 0;
                      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_a34);
                    }
                    CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(*piStack_fb8 + 0xa3c));
                    iVar3 = FUN_00410b30();
                    *(int *)(*(int *)(*piStack_fb8 + 0x828) + 0x24) = iVar3 * 6 + 0x26;
                  }
                  else {
                    uStack_1524 = FUN_0069f8a0();
                    local_8._0_1_ = 0x5d;
                    uStack_1520 = uStack_1524;
                    iVar8 = FUN_00454ea0();
                    iVar3 = FUN_00454ea0();
                    iVar3 = *(int *)(iVar3 + 0x1fc);
                    iVar8 = *(int *)(iVar8 + 0x1fc);
                    iVar10 = FUN_004cdfe0();
                    cStack_1021 = iVar10 <= iVar3 * iVar8 * 10000;
                    uStack_1228 = (uint)(byte)cStack_1021;
                    local_8._0_1_ = 0;
                    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_aac);
                    if (cStack_1021 == '\0') {
                      FUN_00454ea0();
                      FUN_00454ea0();
                      uStack_152c = FUN_004c7c00();
                      FUN_004053e0();
                      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_a7c);
                    }
                    else {
                      uStack_1528 = FUN_0069f8a0();
                      FUN_004053e0();
                      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_a94);
                    }
                    CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(*piStack_fb8 + 0xa3c));
                    iVar3 = FUN_00410b30();
                    *(int *)(*(int *)(*piStack_fb8 + 0x828) + 0x24) = iVar3 * 6 + 0x26;
                  }
                }
              }
            }
          }
          break;
        }
      }
      uStack_154c = 0x14b4;
      uStack_1230 = FUN_004051c0();
      piStack_10ac = (int *)FUN_004018d0();
      piStack_1550 = (int *)FUN_004018b0();
      do {
        if (piStack_10ac == piStack_1550) {
code_r0x0068b6f5:
          uStack_1578 = 0x1068;
          uStack_123c = FUN_004051c0();
          piStack_10a0 = (int *)FUN_004018d0();
          piStack_157c = (int *)FUN_004018b0();
          for (; piStack_10a0 != piStack_157c; piStack_10a0 = piStack_10a0 + 1) {
            piStack_fa8 = piStack_10a0;
            cVar1 = FUN_00427c60();
            if (cVar1 == '\0') {
              cVar1 = FUN_00427c60();
              if (cVar1 == '\0') {
                cVar1 = FUN_00427c60();
                if ((cVar1 != '\0') && (*(char *)(*piStack_fa8 + 0xad0) != '\0')) {
                  if (wParam == 8) {
                    iVar3 = FUN_00410b30();
                    if (iVar3 != 0) {
                      FUN_0069f820();
                      CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(*piStack_fa8 + 0xa3c));
                      cVar1 = FUN_00427c60();
                      if (cVar1 == '\0') {
                        uVar12 = FUN_004cdfe0();
                        FUN_00454ea0();
                        iVar3 = FUN_00519c60();
                        *(undefined4 *)(iVar3 + 0xb8) = uVar12;
                      }
                      else {
                        FUN_00454ea0();
                        iVar3 = FUN_00519c60();
                        *(undefined4 *)(iVar3 + 0xb8) = 0;
                      }
                      FUN_00454ea0();
                      iVar3 = FUN_00519c60();
                      if (*(int *)(iVar3 + 0x28) == 0) {
                        uStack_1248 = 0;
                      }
                      else {
                        uStack_1248 = 1000;
                      }
                      FUN_00454ea0();
                      iVar3 = FUN_00519c60();
                      if (*(int *)(iVar3 + 0xb8) < 0x14) {
                        uStack_124c = 0;
                      }
                      else {
                        FUN_00454ea0();
                        FUN_00519c60();
                        puStack_1c40 = &UNK_0068c729;
                        uStack_124c = FUN_006816e0();
                      }
                      uStack_15ec = 0x1068;
                      FUN_00454ea0();
                      FUN_00454ea0();
                      FUN_00519c60();
                      uStack_15dc = FUN_004c7c00();
                      local_8._0_1_ = 0x65;
                      uStack_15d4 = uStack_15dc;
                      uStack_15e0 = FUN_004054a0();
                      local_8._0_1_ = 0x66;
                      uStack_15d8 = uStack_15e0;
                      uStack_15e8 = FUN_00405cf0();
                      local_8._0_1_ = 0x67;
                      apcStack_1c54[1] = &UNK_00773f18;
                      apcStack_1c54[0] = &UNK_0068c80c;
                      uStack_15e4 = uStack_15e8;
                      FUN_004054a0();
                      local_8._0_1_ = 0x68;
                      apcStack_1c54[1] = (char *)&uStack_15ec;
                      apcStack_1c54[0] = &UNK_0068c827;
                      apcStack_1c54[1] = (char *)FUN_004051c0();
                      local_8._0_1_ = 0x67;
                      apcStack_1c54[0] = &UNK_0068c831;
                      uStack_15f0 = ui_find_widget_by_key();
                      uStack_15f4 = FUN_00427200();
                      FUN_004053e0();
                      local_8._0_1_ = 0x66;
                      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_95c);
                      local_8._0_1_ = 0x65;
                      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_944);
                      local_8._0_1_ = 0;
                      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_92c);
                      uStack_15f8 = 0x1068;
                      apcStack_1c54[2] = &UNK_00773ee8;
                      apcStack_1c54[1] = &UNK_0068c8ae;
                      FUN_004054a0();
                      local_8._0_1_ = 0x69;
                      apcStack_1c54[2] = (char *)&uStack_15f8;
                      apcStack_1c54[1] = &UNK_0068c8c9;
                      apcStack_1c54[2] = (char *)FUN_004051c0();
                      local_8 = (uint)local_8._1_3_ << 8;
                      apcStack_1c54[1] = &UNK_0068c8d3;
                      uStack_15fc = ui_find_widget_by_key();
                      pCStack_1600 = (CDocObjectServer *)FUN_00427200();
                      CDocObjectServer::ReleaseDocSite(pCStack_1600);
                      FUN_00454ea0();
                      iVar3 = FUN_00519c60();
                      if (*(int *)(iVar3 + 0x28) == 0) {
                        uStack_1254 = 0;
                      }
                      else {
                        uStack_1254 = 1000;
                      }
                      FUN_00454ea0();
                      iVar3 = FUN_00519c60();
                      if (*(int *)(iVar3 + 0xb8) < 0x14) {
                        uStack_1250 = 0;
                      }
                      else {
                        FUN_00454ea0();
                        FUN_00519c60();
                        puStack_1c40 = &UNK_0068c97b;
                        uStack_1250 = FUN_006816e0();
                      }
                      uStack_161c = 0x1068;
                      uStack_160c = FUN_004c7c00();
                      local_8._0_1_ = 0x6a;
                      uStack_1604 = uStack_160c;
                      uStack_1610 = FUN_004054a0();
                      local_8._0_1_ = 0x6b;
                      uStack_1608 = uStack_1610;
                      uStack_1618 = FUN_00405cf0();
                      local_8._0_1_ = 0x6c;
                      apcStack_1c54[1] = &UNK_00773ec0;
                      apcStack_1c54[0] = &UNK_0068ca3b;
                      uStack_1614 = uStack_1618;
                      FUN_004054a0();
                      local_8._0_1_ = 0x6d;
                      apcStack_1c54[1] = (char *)&uStack_161c;
                      apcStack_1c54[0] = &UNK_0068ca56;
                      apcStack_1c54[1] = (char *)FUN_004051c0();
                      local_8._0_1_ = 0x6c;
                      apcStack_1c54[0] = &UNK_0068ca60;
                      uStack_1620 = ui_find_widget_by_key();
                      uStack_1624 = FUN_00427200();
                      FUN_004053e0();
                      local_8._0_1_ = 0x6b;
                      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_914);
                      local_8._0_1_ = 0x6a;
                      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_8fc);
                      local_8._0_1_ = 0;
                      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_8e4);
                      uStack_1628 = 0x1068;
                      apcStack_1c54[2] = &UNK_00773f40;
                      apcStack_1c54[1] = &UNK_0068cadd;
                      FUN_004054a0();
                      local_8._0_1_ = 0x6e;
                      apcStack_1c54[2] = (char *)&uStack_1628;
                      apcStack_1c54[1] = &UNK_0068caf8;
                      apcStack_1c54[2] = (char *)FUN_004051c0();
                      local_8._0_1_ = 0;
                      apcStack_1c54[1] = &UNK_0068cb02;
                      uStack_162c = ui_find_widget_by_key();
                      pCStack_1630 = (CDocObjectServer *)FUN_00427200();
                      CDocObjectServer::ReleaseDocSite(pCStack_1630);
                    }
                  }
                  else {
                    cStack_fca = (char)wParam;
                    iVar3 = _isdigit((int)(char)wParam);
                    if (iVar3 != 0) {
                      FUN_00454ea0();
                      iVar3 = FUN_00519c60();
                      if (*(int *)(iVar3 + 0x28) == 0) {
                        iStack_1258 = 0;
                      }
                      else {
                        iStack_1258 = 1000;
                      }
                      iVar3 = FUN_00454ea0();
                      puStack_10e4 = (undefined *)((*(int *)(iVar3 + 0xac8) + -100) - iStack_1258);
                      iStack_10e0 = (int)puStack_10e4 >> 0x1f;
                      cVar1 = FUN_00427c60();
                      if ((cVar1 == '\0') &&
                         ((iVar3 = FUN_00410b30(), iVar3 != 1 ||
                          (pcVar5 = std::
                                    basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                    ::operator[]((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                                  *)(*piStack_fa8 + 0xa4c),0), *pcVar5 != '0')))) {
                        uStack_16a8 = FUN_0069f8a0();
                        local_8._0_1_ = 0x7a;
                        uStack_16a4 = uStack_16a8;
                        uStack_16b0 = FUN_00427c80();
                        local_8._0_1_ = 0x7b;
                        puStack_1c40 = (undefined *)iStack_10e0;
                        apcStack_1c54[4] = puStack_10e4;
                        apcStack_1c54[3] = &UNK_0068d35d;
                        uStack_16ac = uStack_16b0;
                        __allmul();
                        puStack_1c40 = &UNK_0068d364;
                        iVar3 = FUN_00681710();
                        iVar8 = FUN_004cdfe0();
                        cStack_1025 = iVar8 <= iVar3;
                        uStack_1270 = (uint)(byte)cStack_1025;
                        local_8._0_1_ = 0x7a;
                        std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                  (afStack_7f4);
                        local_8._0_1_ = 0;
                        std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                  (afStack_7dc);
                        if (cStack_1025 == '\0') {
                          puStack_1c40 = (undefined *)iStack_10e0;
                          apcStack_1c54[4] = puStack_10e4;
                          apcStack_1c54[3] = &UNK_0068d4ba;
                          __allmul();
                          puStack_1c40 = &UNK_0068d4c1;
                          FUN_00681710();
                          uStack_16bc = FUN_004c7c00();
                          FUN_004053e0();
                          std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                    (afStack_7ac);
                          cVar1 = FUN_00427c60();
                          if (cVar1 == '\0') {
                            uVar12 = FUN_004cdfe0();
                            FUN_00454ea0();
                            iVar3 = FUN_00519c60();
                            *(undefined4 *)(iVar3 + 0xb8) = uVar12;
                          }
                          else {
                            FUN_00454ea0();
                            iVar3 = FUN_00519c60();
                            *(undefined4 *)(iVar3 + 0xb8) = 0;
                          }
                        }
                        else {
                          uStack_16b8 = FUN_0069f8a0();
                          local_8._0_1_ = 0x7c;
                          uStack_16b4 = uStack_16b8;
                          FUN_0051a160();
                          local_8._0_1_ = 0;
                          std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                    (afStack_7c4);
                          cVar1 = FUN_00427c60();
                          if (cVar1 == '\0') {
                            uVar12 = FUN_004cdfe0();
                            FUN_00454ea0();
                            iVar3 = FUN_00519c60();
                            *(undefined4 *)(iVar3 + 0xb8) = uVar12;
                          }
                          else {
                            FUN_00454ea0();
                            iVar3 = FUN_00519c60();
                            *(undefined4 *)(iVar3 + 0xb8) = 0;
                          }
                        }
                      }
                      else {
                        uStack_1638 = FUN_0069f8a0();
                        local_8._0_1_ = 0x6f;
                        puStack_1c40 = (undefined *)iStack_10e0;
                        apcStack_1c54[4] = puStack_10e4;
                        apcStack_1c54[3] = &UNK_0068cc4a;
                        uStack_1634 = uStack_1638;
                        __allmul();
                        puStack_1c40 = &UNK_0068cc51;
                        iVar3 = FUN_00681710();
                        iVar8 = FUN_004cdfe0();
                        cStack_1024 = iVar8 <= iVar3;
                        uStack_125c = (uint)(byte)cStack_1024;
                        local_8 = (uint)local_8._1_3_ << 8;
                        std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                  (afStack_8cc);
                        if (cStack_1024 == '\0') {
                          puStack_1c40 = (undefined *)iStack_10e0;
                          apcStack_1c54[4] = puStack_10e4;
                          apcStack_1c54[3] = &UNK_0068cd86;
                          __allmul();
                          puStack_1c40 = &UNK_0068cd8d;
                          FUN_00681710();
                          uStack_1640 = FUN_004c7c00();
                          FUN_004053e0();
                          std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                    (afStack_89c);
                          cVar1 = FUN_00427c60();
                          if (cVar1 == '\0') {
                            uVar12 = FUN_004cdfe0();
                            FUN_00454ea0();
                            iVar3 = FUN_00519c60();
                            *(undefined4 *)(iVar3 + 0xb8) = uVar12;
                          }
                          else {
                            FUN_00454ea0();
                            iVar3 = FUN_00519c60();
                            *(undefined4 *)(iVar3 + 0xb8) = 0;
                          }
                        }
                        else {
                          uStack_163c = FUN_0069f8a0();
                          FUN_004053e0();
                          std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                    (afStack_8b4);
                          cVar1 = FUN_00427c60();
                          if (cVar1 == '\0') {
                            uVar12 = FUN_004cdfe0();
                            FUN_00454ea0();
                            iVar3 = FUN_00519c60();
                            *(undefined4 *)(iVar3 + 0xb8) = uVar12;
                          }
                          else {
                            FUN_00454ea0();
                            iVar3 = FUN_00519c60();
                            *(undefined4 *)(iVar3 + 0xb8) = 0;
                          }
                        }
                        CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(*piStack_fa8 + 0xa3c))
                        ;
                        FUN_00454ea0();
                        iVar3 = FUN_00519c60();
                        if (*(int *)(iVar3 + 0x28) == 0) {
                          uStack_1260 = 0;
                        }
                        else {
                          uStack_1260 = 1000;
                        }
                        FUN_00454ea0();
                        iVar3 = FUN_00519c60();
                        if (*(int *)(iVar3 + 0xb8) < 0x14) {
                          uStack_1264 = 0;
                        }
                        else {
                          FUN_00454ea0();
                          FUN_00519c60();
                          puStack_1c40 = &UNK_0068ced2;
                          uStack_1264 = FUN_006816e0();
                        }
                        uStack_165c = 0x1068;
                        FUN_00454ea0();
                        FUN_00454ea0();
                        FUN_00519c60();
                        uStack_164c = FUN_004c7c00();
                        local_8._0_1_ = 0x70;
                        uStack_1644 = uStack_164c;
                        uStack_1650 = FUN_004054a0();
                        local_8._0_1_ = 0x71;
                        uStack_1648 = uStack_1650;
                        uStack_1658 = FUN_00405cf0();
                        local_8._0_1_ = 0x72;
                        apcStack_1c54[1] = &UNK_00773fa0;
                        apcStack_1c54[0] = &UNK_0068cfb5;
                        uStack_1654 = uStack_1658;
                        FUN_004054a0();
                        local_8._0_1_ = 0x73;
                        apcStack_1c54[1] = (char *)&uStack_165c;
                        apcStack_1c54[0] = &UNK_0068cfd0;
                        apcStack_1c54[1] = (char *)FUN_004051c0();
                        local_8._0_1_ = 0x72;
                        apcStack_1c54[0] = &UNK_0068cfda;
                        uStack_1660 = ui_find_widget_by_key();
                        uStack_1664 = FUN_00427200();
                        FUN_004053e0();
                        local_8._0_1_ = 0x71;
                        std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                  (afStack_884);
                        local_8._0_1_ = 0x70;
                        std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                  (afStack_86c);
                        local_8._0_1_ = 0;
                        std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                  (afStack_854);
                        uStack_1668 = 0x1068;
                        apcStack_1c54[2] = &UNK_00773f70;
                        apcStack_1c54[1] = &UNK_0068d057;
                        FUN_004054a0();
                        local_8._0_1_ = 0x74;
                        apcStack_1c54[2] = (char *)&uStack_1668;
                        apcStack_1c54[1] = &UNK_0068d072;
                        apcStack_1c54[2] = (char *)FUN_004051c0();
                        local_8 = (uint)local_8._1_3_ << 8;
                        apcStack_1c54[1] = &UNK_0068d07c;
                        uStack_166c = ui_find_widget_by_key();
                        pCStack_1670 = (CDocObjectServer *)FUN_00427200();
                        CDocObjectServer::ReleaseDocSite(pCStack_1670);
                        FUN_00454ea0();
                        iVar3 = FUN_00519c60();
                        if (*(int *)(iVar3 + 0x28) == 0) {
                          uStack_126c = 0;
                        }
                        else {
                          uStack_126c = 1000;
                        }
                        FUN_00454ea0();
                        iVar3 = FUN_00519c60();
                        if (*(int *)(iVar3 + 0xb8) < 0x14) {
                          uStack_1268 = 0;
                        }
                        else {
                          FUN_00454ea0();
                          FUN_00519c60();
                          puStack_1c40 = &UNK_0068d124;
                          uStack_1268 = FUN_006816e0();
                        }
                        uStack_168c = 0x1068;
                        uStack_167c = FUN_004c7c00();
                        local_8._0_1_ = 0x75;
                        uStack_1674 = uStack_167c;
                        uStack_1680 = FUN_004054a0();
                        local_8._0_1_ = 0x76;
                        uStack_1678 = uStack_1680;
                        uStack_1688 = FUN_00405cf0();
                        local_8._0_1_ = 0x77;
                        apcStack_1c54[1] = &UNK_00773ff8;
                        apcStack_1c54[0] = &UNK_0068d1e4;
                        uStack_1684 = uStack_1688;
                        FUN_004054a0();
                        local_8._0_1_ = 0x78;
                        apcStack_1c54[1] = (char *)&uStack_168c;
                        apcStack_1c54[0] = &UNK_0068d1ff;
                        apcStack_1c54[1] = (char *)FUN_004051c0();
                        local_8._0_1_ = 0x77;
                        apcStack_1c54[0] = &UNK_0068d209;
                        uStack_1690 = ui_find_widget_by_key();
                        uStack_1694 = FUN_00427200();
                        FUN_004053e0();
                        local_8._0_1_ = 0x76;
                        std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                  (afStack_83c);
                        local_8._0_1_ = 0x75;
                        std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                  (afStack_824);
                        local_8._0_1_ = 0;
                        std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                                  (afStack_80c);
                        uStack_1698 = 0x1068;
                        apcStack_1c54[2] = &UNK_00773fc8;
                        apcStack_1c54[1] = &UNK_0068d286;
                        FUN_004054a0();
                        local_8._0_1_ = 0x79;
                        apcStack_1c54[2] = (char *)&uStack_1698;
                        apcStack_1c54[1] = &UNK_0068d2a1;
                        apcStack_1c54[2] = (char *)FUN_004051c0();
                        local_8._0_1_ = 0;
                        apcStack_1c54[1] = &UNK_0068d2ab;
                        uStack_169c = ui_find_widget_by_key();
                        pCStack_16a0 = (CDocObjectServer *)FUN_00427200();
                        CDocObjectServer::ReleaseDocSite(pCStack_16a0);
                      }
                      CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(*piStack_fa8 + 0xa3c));
                      FUN_00454ea0();
                      iVar3 = FUN_00519c60();
                      if (*(int *)(iVar3 + 0x28) == 0) {
                        uStack_1274 = 0;
                      }
                      else {
                        uStack_1274 = 1000;
                      }
                      FUN_00454ea0();
                      iVar3 = FUN_00519c60();
                      if (*(int *)(iVar3 + 0xb8) < 0x14) {
                        uStack_1278 = 0;
                      }
                      else {
                        FUN_00454ea0();
                        FUN_00519c60();
                        puStack_1c40 = &UNK_0068d608;
                        uStack_1278 = FUN_006816e0();
                      }
                      uStack_16d8 = 0x1068;
                      FUN_00454ea0();
                      FUN_00454ea0();
                      FUN_00519c60();
                      uStack_16c8 = FUN_004c7c00();
                      local_8._0_1_ = 0x7d;
                      uStack_16c0 = uStack_16c8;
                      uStack_16cc = FUN_004054a0();
                      local_8._0_1_ = 0x7e;
                      uStack_16c4 = uStack_16cc;
                      uStack_16d4 = FUN_00405cf0();
                      local_8._0_1_ = 0x7f;
                      apcStack_1c54[1] = &UNK_00774050;
                      apcStack_1c54[0] = &UNK_0068d6eb;
                      uStack_16d0 = uStack_16d4;
                      FUN_004054a0();
                      local_8._0_1_ = 0x80;
                      apcStack_1c54[1] = (char *)&uStack_16d8;
                      apcStack_1c54[0] = &UNK_0068d706;
                      apcStack_1c54[1] = (char *)FUN_004051c0();
                      local_8._0_1_ = 0x7f;
                      apcStack_1c54[0] = &UNK_0068d710;
                      uStack_16dc = ui_find_widget_by_key();
                      uStack_16e0 = FUN_00427200();
                      FUN_004053e0();
                      local_8._0_1_ = 0x7e;
                      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_794);
                      local_8._0_1_ = 0x7d;
                      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_77c);
                      local_8._0_1_ = 0;
                      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_764);
                      uStack_16e4 = 0x1068;
                      apcStack_1c54[2] = &UNK_00774020;
                      apcStack_1c54[1] = &UNK_0068d78d;
                      FUN_004054a0();
                      local_8._0_1_ = 0x81;
                      apcStack_1c54[2] = (char *)&uStack_16e4;
                      apcStack_1c54[1] = &UNK_0068d7a8;
                      apcStack_1c54[2] = (char *)FUN_004051c0();
                      local_8 = (uint)local_8._1_3_ << 8;
                      apcStack_1c54[1] = &UNK_0068d7b2;
                      uStack_16e8 = ui_find_widget_by_key();
                      pCStack_16ec = (CDocObjectServer *)FUN_00427200();
                      CDocObjectServer::ReleaseDocSite(pCStack_16ec);
                      FUN_00454ea0();
                      iVar3 = FUN_00519c60();
                      if (*(int *)(iVar3 + 0x28) == 0) {
                        uStack_1280 = 0;
                      }
                      else {
                        uStack_1280 = 1000;
                      }
                      FUN_00454ea0();
                      iVar3 = FUN_00519c60();
                      if (*(int *)(iVar3 + 0xb8) < 0x14) {
                        uStack_127c = 0;
                      }
                      else {
                        FUN_00454ea0();
                        FUN_00519c60();
                        puStack_1c40 = &UNK_0068d85a;
                        uStack_127c = FUN_006816e0();
                      }
                      uStack_1708 = 0x1068;
                      uStack_16f8 = FUN_004c7c00();
                      local_8._0_1_ = 0x82;
                      uStack_16f0 = uStack_16f8;
                      uStack_16fc = FUN_004054a0();
                      local_8._0_1_ = 0x83;
                      uStack_16f4 = uStack_16fc;
                      uStack_1704 = FUN_00405cf0();
                      local_8._0_1_ = 0x84;
                      apcStack_1c54[1] = &UNK_007740ac;
                      apcStack_1c54[0] = &UNK_0068d91a;
                      uStack_1700 = uStack_1704;
                      FUN_004054a0();
                      local_8._0_1_ = 0x85;
                      apcStack_1c54[1] = (char *)&uStack_1708;
                      apcStack_1c54[0] = &UNK_0068d935;
                      apcStack_1c54[1] = (char *)FUN_004051c0();
                      local_8._0_1_ = 0x84;
                      apcStack_1c54[0] = &UNK_0068d93f;
                      uStack_170c = ui_find_widget_by_key();
                      uStack_1710 = FUN_00427200();
                      FUN_004053e0();
                      local_8._0_1_ = 0x83;
                      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_74c);
                      local_8._0_1_ = 0x82;
                      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_734);
                      local_8._0_1_ = 0;
                      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_71c);
                      uStack_1714 = 0x1068;
                      apcStack_1c54[2] = &UNK_0077407c;
                      apcStack_1c54[1] = &UNK_0068d9bc;
                      FUN_004054a0();
                      local_8._0_1_ = 0x86;
                      apcStack_1c54[2] = (char *)&uStack_1714;
                      apcStack_1c54[1] = &UNK_0068d9d7;
                      apcStack_1c54[2] = (char *)FUN_004051c0();
                      local_8._0_1_ = 0;
                      apcStack_1c54[1] = &UNK_0068d9e1;
                      uStack_1718 = ui_find_widget_by_key();
                      pCStack_171c = (CDocObjectServer *)FUN_00427200();
                      CDocObjectServer::ReleaseDocSite(pCStack_171c);
                    }
                  }
                  iVar3 = *piStack_fa8;
                  iVar8 = FUN_00410b30();
                  *(int *)(*(int *)(*piStack_fa8 + 0x828) + 0x24) =
                       iVar8 * 6 + *(int *)(iVar3 + 0xa40);
                  *(undefined4 *)(*(int *)(*piStack_fa8 + 0x828) + 0x28) =
                       *(undefined4 *)(*piStack_fa8 + 0xa44);
                }
              }
              else if (*(char *)(*piStack_fa8 + 0xad0) != '\0') {
                if (wParam == 8) {
                  FUN_00427230();
                  FUN_00427200();
                  iVar3 = FUN_00410b30();
                  if (iVar3 != 0) {
                    FUN_00427230();
                    pCVar11 = (CDocObjectServer *)FUN_00427200();
                    CDocObjectServer::ReleaseDocSite(pCVar11);
                    FUN_00427230();
                    FUN_00427200();
                    FUN_00410b30();
                    FUN_00427230();
                    FUN_00427200();
                    pcVar5 = (char *)FUN_0069f850();
                    if (((int)*pcVar5 & 0x80U) != 0) {
                      FUN_00427230();
                      puStack_1c40 = &UNK_0068bfad;
                      FUN_00427200();
                      FUN_004cc1a0();
                      puVar9 = (undefined4 *)FUN_004cc110();
                      uStack_1594 = *puVar9;
                      FUN_00427230();
                      FUN_00427200();
                      FUN_004cc1e0();
                    }
                    FUN_00427230();
                    FUN_00427200();
                    iVar3 = FUN_00410b30();
                    if (iVar3 != 0) {
                      FUN_00427230();
                      puStack_1c40 = &UNK_0068c07f;
                      FUN_00427200();
                      FUN_004cc1a0();
                      puVar9 = (undefined4 *)FUN_004cc110();
                      uStack_1598 = *puVar9;
                      FUN_00427230();
                      FUN_00427200();
                      FUN_004cc1e0();
                    }
                    FUN_00427230();
                    FUN_00427200();
                    iVar3 = FUN_00410b30();
                    if ((iVar3 == 0) && (uVar4 = FUN_00427230(), 1 < uVar4)) {
                      FUN_00402170();
                      puVar9 = (undefined4 *)FUN_0069f1b0();
                      uStack_159c = *puVar9;
                      FUN_0069f390();
                    }
                    iStack_1244 = *piStack_fa8 + 0x1ac;
                    pCStack_10f4 = (CDocObjectServer *)FUN_004018d0();
                    pCStack_15a0 = (CDocObjectServer *)FUN_004018b0();
                    for (; pCStack_10f4 != pCStack_15a0; pCStack_10f4 = pCStack_10f4 + 0x90) {
                      pCStack_15a4 = pCStack_10f4;
                      CDocObjectServer::ReleaseDocSite(pCStack_10f4);
                    }
                  }
                }
                else {
                  FUN_00427230();
                  FUN_00427200();
                  FUN_004cb660();
                }
                uVar15 = 0x10000000000;
                FUN_00454ea0();
                iVar3 = FUN_00519c60();
                _memset((void *)(iVar3 + 0xbc),(int)uVar15,(size_t)((ulonglong)uVar15 >> 0x20));
                iStack_1138 = 0;
                uStack_1058 = 0;
                while (uVar4 = FUN_00427230(), uStack_1058 < uVar4) {
                  uStack_108c = 0;
                  while( true ) {
                    FUN_00427200();
                    uVar4 = FUN_00410b30();
                    if (uVar4 <= uStack_108c) break;
                    uVar4 = uStack_108c;
                    iVar3 = FUN_00427200();
                    pcVar5 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                             operator[]((basic_string<char,std::char_traits<char>,std::allocator<char>_>
                                         *)(iVar3 + 0x10),uVar4);
                    FUN_00454ea0();
                    iVar3 = FUN_00519c60();
                    *(char *)(iVar3 + 0xbc + iStack_1138) = *pcVar5;
                    iStack_1138 = iStack_1138 + 1;
                    uStack_108c = uStack_108c + 1;
                  }
                  uStack_1058 = uStack_1058 + 1;
                }
                FUN_00454ea0();
                iStack_15a8 = FUN_00519c60();
                pcStack_105c = (char *)(iStack_15a8 + 0xbc);
                iStack_15a8 = iStack_15a8 + 0xbd;
                do {
                  cStack_1023 = *pcStack_105c;
                  pcStack_105c = pcStack_105c + 1;
                } while (cStack_1023 != '\0');
                iStack_15b0 = (int)pcStack_105c - iStack_15a8;
                uStack_15c8 = FUN_004054a0();
                local_8._0_1_ = 0x61;
                uStack_15ac = uStack_15c8;
                uStack_15bc = FUN_004c7c00();
                local_8._0_1_ = 0x62;
                uStack_15b4 = uStack_15bc;
                uStack_15c0 = FUN_004054a0();
                local_8._0_1_ = 99;
                uStack_15b8 = uStack_15c0;
                uStack_15cc = FUN_00405cf0();
                local_8._0_1_ = 100;
                uStack_15c4 = uStack_15cc;
                uStack_15d0 = FUN_00405cf0();
                FUN_004053e0();
                std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_9d4);
                local_8._0_1_ = 99;
                std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_9a4);
                local_8._0_1_ = 0x62;
                std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_9bc);
                local_8._0_1_ = 0x61;
                std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_98c);
                local_8._0_1_ = 0;
                std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_974);
                CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(*piStack_fa8 + 0xa3c));
                FUN_00427230();
                iVar3 = FUN_00427200();
                FUN_00427230();
                FUN_00427200();
                iVar8 = FUN_00410b30();
                *(int *)(*(int *)(*piStack_fa8 + 0x828) + 0x24) = iVar8 * 6 + *(int *)(iVar3 + 4);
                FUN_00427230();
                iVar3 = FUN_00427200();
                *(undefined4 *)(*(int *)(*piStack_fa8 + 0x828) + 0x28) = *(undefined4 *)(iVar3 + 8);
              }
            }
            else if (*(char *)(*piStack_fa8 + 0xad0) != '\0') {
              if (wParam == 8) {
                FUN_00427230();
                FUN_00427200();
                iVar3 = FUN_00410b30();
                if (iVar3 != 0) {
                  FUN_00427230();
                  FUN_00427200();
                  FUN_00410b30();
                  FUN_00427230();
                  FUN_00427200();
                  pcVar5 = (char *)FUN_0069f850();
                  if (((int)*pcVar5 & 0x80U) != 0) {
                    FUN_00427230();
                    puStack_1c40 = &UNK_0068b89d;
                    FUN_00427200();
                    FUN_004cc1a0();
                    puVar9 = (undefined4 *)FUN_004cc110();
                    uStack_1580 = *puVar9;
                    FUN_00427230();
                    FUN_00427200();
                    FUN_004cc1e0();
                  }
                  FUN_00427230();
                  FUN_00427200();
                  iVar3 = FUN_00410b30();
                  if (iVar3 != 0) {
                    FUN_00427230();
                    puStack_1c40 = &UNK_0068b96f;
                    FUN_00427200();
                    FUN_004cc1a0();
                    puVar9 = (undefined4 *)FUN_004cc110();
                    uStack_1584 = *puVar9;
                    FUN_00427230();
                    FUN_00427200();
                    FUN_004cc1e0();
                  }
                  FUN_00427230();
                  pCVar11 = (CDocObjectServer *)FUN_00427200();
                  CDocObjectServer::ReleaseDocSite(pCVar11);
                  FUN_00427230();
                  FUN_00427200();
                  pcStack_112c = (char *)FUN_0040d7f0();
                  FUN_00454ea0();
                  iVar3 = FUN_00519c60();
                  pcStack_109c = (char *)(iVar3 + 4);
                  do {
                    cStack_fec = *pcStack_112c;
                    *pcStack_109c = cStack_fec;
                    pcStack_112c = pcStack_112c + 1;
                    pcStack_109c = pcStack_109c + 1;
                  } while (cStack_fec != '\0');
                }
              }
              else {
                FUN_00427230();
                FUN_00427200();
                uVar4 = FUN_00410b30();
                if (uVar4 < 0xc) {
                  FUN_00427230();
                  FUN_00427200();
                  FUN_004cc240();
                  FUN_00427230();
                  FUN_00427200();
                  iVar3 = FUN_00410b30();
                  if (iVar3 == 0xc) {
                    uStack_1130 = 0;
                    FUN_00427230();
                    iStack_1240 = FUN_00427200();
                    iStack_1240 = iStack_1240 + 0x10;
                    pcStack_1098 = (char *)FUN_0040d7f0();
                    pcStack_1588 = (char *)FUN_004cc180();
                    for (; pcStack_1098 != pcStack_1588; pcStack_1098 = pcStack_1098 + 1) {
                      pcStack_158c = pcStack_1098;
                      if (((int)*pcStack_1098 & 0x80U) != 0) {
                        uStack_1130 = uStack_1130 + 1;
                      }
                    }
                    uVar4 = uStack_1130 & 0x80000001;
                    if ((int)uVar4 < 0) {
                      uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
                    }
                    if (uVar4 != 0) {
                      FUN_00427230();
                      puStack_1c40 = &UNK_0068bc5a;
                      FUN_00427200();
                      FUN_004cc1a0();
                      puVar9 = (undefined4 *)FUN_004cc110();
                      uStack_1590 = *puVar9;
                      FUN_00427230();
                      FUN_00427200();
                      FUN_004cc1e0();
                    }
                  }
                  FUN_00427230();
                  pCVar11 = (CDocObjectServer *)FUN_00427200();
                  CDocObjectServer::ReleaseDocSite(pCVar11);
                  FUN_00427230();
                  FUN_00427200();
                  pcStack_1134 = (char *)FUN_0040d7f0();
                  FUN_00454ea0();
                  iVar3 = FUN_00519c60();
                  pcStack_1094 = (char *)(iVar3 + 4);
                  do {
                    cStack_fed = *pcStack_1134;
                    *pcStack_1094 = cStack_fed;
                    pcStack_1134 = pcStack_1134 + 1;
                    pcStack_1094 = pcStack_1094 + 1;
                  } while (cStack_fed != '\0');
                }
              }
              FUN_00427230();
              iVar3 = FUN_00427200();
              FUN_00427230();
              FUN_00427200();
              iVar8 = FUN_00410b30();
              *(int *)(*(int *)(*piStack_fa8 + 0x828) + 0x24) = iVar8 * 6 + *(int *)(iVar3 + 4);
              FUN_00427230();
              iVar3 = FUN_00427200();
              *(undefined4 *)(*(int *)(*piStack_fa8 + 0x828) + 0x28) = *(undefined4 *)(iVar3 + 8);
            }
          }
          break;
        }
        piStack_fb4 = piStack_10ac;
        cVar1 = FUN_00427c60();
        if (cVar1 != '\0') {
          if (*(char *)(*piStack_fb4 + 0xad0) != '\0') {
            if (wParam == 8) {
              iVar3 = FUN_00410b30();
              if (iVar3 != 0) {
                CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(*piStack_fb4 + 0xa3c));
                FUN_00410b30();
                pcVar5 = (char *)FUN_0069f850();
                if (((int)*pcVar5 & 0x80U) != 0) {
                  FUN_004cc1a0();
                  puVar9 = (undefined4 *)FUN_004cc110();
                  uStack_1554 = *puVar9;
                  FUN_004cc1e0();
                  *(int *)(*(int *)(*piStack_fb4 + 0x828) + 0x24) =
                       *(int *)(*(int *)(*piStack_fb4 + 0x828) + 0x24) + -6;
                }
                iVar3 = FUN_00410b30();
                if (iVar3 != 0) {
                  FUN_004cc1a0();
                  puVar9 = (undefined4 *)FUN_004cc110();
                  uStack_1558 = *puVar9;
                  FUN_004cc1e0();
                  *(int *)(*(int *)(*piStack_fb4 + 0x828) + 0x24) =
                       *(int *)(*(int *)(*piStack_fb4 + 0x828) + 0x24) + -6;
                }
              }
            }
            else {
              uVar4 = FUN_00410b30();
              if (uVar4 < 0x16) {
                FUN_004cc240();
                CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(*piStack_fb4 + 0xa3c));
                *(int *)(*(int *)(*piStack_fb4 + 0x828) + 0x24) =
                     *(int *)(*(int *)(*piStack_fb4 + 0x828) + 0x24) + 6;
                iVar3 = FUN_00410b30();
                if (iVar3 == 0x16) {
                  uStack_1124 = 0;
                  iStack_1234 = *piStack_fb4 + 0xa4c;
                  pcStack_10a8 = (char *)FUN_0040d7f0();
                  pcStack_155c = (char *)FUN_004cc180();
                  for (; pcStack_10a8 != pcStack_155c; pcStack_10a8 = pcStack_10a8 + 1) {
                    pcStack_1560 = pcStack_10a8;
                    if (((int)*pcStack_10a8 & 0x80U) != 0) {
                      uStack_1124 = uStack_1124 + 1;
                    }
                  }
                  uVar4 = uStack_1124 & 0x80000001;
                  if ((int)uVar4 < 0) {
                    uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
                  }
                  if (uVar4 != 0) {
                    FUN_004cc1a0();
                    puVar9 = (undefined4 *)FUN_004cc110();
                    uStack_1564 = *puVar9;
                    FUN_004cc1e0();
                    CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(*piStack_fb4 + 0xa3c));
                    *(int *)(*(int *)(*piStack_fb4 + 0x828) + 0x24) =
                         *(int *)(*(int *)(*piStack_fb4 + 0x828) + 0x24) + -6;
                  }
                }
              }
            }
            uVar4 = FUN_00410b30();
            if (uVar4 < 0x17) {
              FUN_004053a0();
              iVar3 = FUN_00410b30();
              *(int *)(*(int *)(*piStack_fb4 + 0x828) + 0x24) = iVar3 * 6 + 8;
            }
            else {
              uStack_1128 = 0;
              FUN_00410b30();
              FUN_004bcf80();
              pfStack_1238 = afStack_65c;
              pcStack_10a4 = (char *)FUN_0040d7f0();
              pcStack_1568 = (char *)FUN_004cc180();
              for (; pcStack_10a4 != pcStack_1568; pcStack_10a4 = pcStack_10a4 + 1) {
                pcStack_156c = pcStack_10a4;
                if (((int)*pcStack_10a4 & 0x80U) != 0) {
                  uStack_1128 = uStack_1128 + 1;
                }
              }
              std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_65c);
              uVar4 = uStack_1128 & 0x80000001;
              if ((int)uVar4 < 0) {
                uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
              }
              if (uVar4 == 0) {
                FUN_00410b30();
                uStack_1574 = FUN_004bcf80();
                FUN_004053e0();
                std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_9ec);
              }
              else {
                FUN_00410b30();
                uStack_1570 = FUN_004bcf80();
                FUN_004053e0();
                std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_a04);
              }
              iVar3 = FUN_00410b30();
              *(int *)(*(int *)(*piStack_fb4 + 0x828) + 0x24) = iVar3 * 6 + 8;
            }
          }
          goto code_r0x0068b6f5;
        }
        piStack_10ac = piStack_10ac + 1;
      } while( true );
        /* WM_IME_STARTCOMPOSITION (or nearby IME) */
case 0x10e:
      FUN_004053a0();
      break;
        /* WM_IME_COMPOSITION; GCS_RESULTSTR=0x800 */
case 0x10f:
      if ((lParam & 0x800) != 0) {
        pHStack_11d4 = ImmGetContext(hWnd);
        sStack_1108 = 0xff;
        pvStack_1888 = (void *)FUN_006e5209();
        pvStack_10e8 = pvStack_1888;
        _memset(pvStack_1888,0,sStack_1108);
        puStack_1c40 = &UNK_0068823f;
        LStack_1884 = ImmGetCompositionStringA(pHStack_11d4,0x800,pvStack_10e8,sStack_1108);
        *(undefined1 *)((int)pvStack_10e8 + LStack_1884) = 0;
        pvStack_1880 = pvStack_10e8;
        thunk_FUN_006f1902();
        ImmReleaseContext(hWnd,pHStack_11d4);
      }
    }
    goto LAB_0068da66;
  }
    /* not WM_KEYDOWN: low messages */
if (uMsg != 0x100) {
    local_fe0 = uMsg - 0xf;
    switch(uMsg) {
          /* WM_PAINT */
case 0xf:
      ui_command_dispatch();
      break;
    case 0x10:
      DestroyWindow(hWnd);
      PostQuitMessage(0);
      break;
          /* WM_QUIT path alias / WM_QUIT-related recreate */
case 0x12:
      goto DAT_006880ec;
          /* WM_DISPLAYCHANGE -> recreate D3D device */
case 0x7e:
      pCStack_11c4 = DAT_007ca1a4;
      if (DAT_007ca1a4 == (CachedTransmogrifiedPrimary *)0x0) {
        pvStack_1898 = (void *)0x0;
      }
      else {
        pvStack_1898 = Concurrency::details::CachedTransmogrifiedPrimary::
                       _scalar_deleting_destructor_(DAT_007ca1a4,1);
      }
      pvStack_1100 = (void *)FUN_006e4b5e();
      local_8._0_1_ = 0x40;
      if (pvStack_1100 == (void *)0x0) {
        pCStack_11c8 = (CachedTransmogrifiedPrimary *)0x0;
      }
      else {
        _memset(pvStack_1100,0,0x4c);
        pCStack_11c8 = (CachedTransmogrifiedPrimary *)FUN_0068dde0();
      }
      pCStack_1894 = pCStack_11c8;
      local_8._0_1_ = 0;
      DAT_007ca1a4 = pCStack_11c8;
      FUN_004b6120();
    }
    goto LAB_0068da66;
  }
  if ((lParam & 0x40000000) != 0) goto LAB_0068da66;
  local_1060 = wParam;
  FUN_0040d380();
  FUN_0048c970();
  cVar1 = FUN_0040d2d0();
  if (cVar1 != '\0') {
    pWVar2 = (WPARAM *)input_remap_vk_lookup();
    wParam = *pWVar2;
    local_1060 = wParam;
  }
  iVar3 = FUN_00454ea0();
  if (iVar3 == 0) goto LAB_0068da66;
  local_1730 = 7000;
  FUN_004051c0();
  cVar1 = FUN_0040d500();
  if (cVar1 == '\0') {
    local_1734 = 7000;
    apcStack_1c54[3] = &DAT_00773794;
    apcStack_1c54[2] = (char *)0x683803;
    FUN_004054a0();
    local_8._0_1_ = 1;
    apcStack_1c54[3] = (char *)&local_1734;
    apcStack_1c54[2] = (char *)0x68381e;
    apcStack_1c54[3] = (char *)FUN_004051c0();
    local_8._0_1_ = 0;
    apcStack_1c54[2] = (undefined *)0x683828;
    local_1738 = ui_find_widget_by_key();
    if (local_1738 == 0) goto LAB_0068389c;
    local_173c = 7000;
    apcStack_1c54[3] = &DAT_007737e4;
    apcStack_1c54[2] = (char *)0x683859;
    FUN_004054a0();
    local_8._0_1_ = 2;
    apcStack_1c54[3] = (char *)&local_173c;
    apcStack_1c54[2] = (char *)0x683874;
    apcStack_1c54[3] = (char *)FUN_004051c0();
    local_8._0_1_ = 0;
    apcStack_1c54[2] = (undefined *)0x68387e;
    local_12a4 = ui_find_widget_by_key();
    if (*(char *)(local_12a4 + 0xad0) == '\0') goto LAB_0068389c;
LAB_00683fe8:
    iVar3 = FUN_00454ea0();
    *(undefined1 *)(iVar3 + 0xdfb) = 1;
  }
  else {
LAB_0068389c:
    local_12a8 = 0x3c;
    FUN_004051c0();
    cVar1 = FUN_0040d500();
    if (cVar1 == '\0') {
      local_12ac = 0x3c;
      apcStack_1c54[3] = &DAT_007737d4;
      apcStack_1c54[2] = (char *)0x6838e8;
      FUN_004054a0();
      local_8._0_1_ = 3;
      apcStack_1c54[3] = (char *)&local_12ac;
      apcStack_1c54[2] = (char *)0x683903;
      apcStack_1c54[3] = (char *)FUN_004051c0();
      local_8._0_1_ = 0;
      apcStack_1c54[2] = (undefined *)0x68390d;
      local_12b0 = ui_find_widget_by_key();
      if (local_12b0 != 0) {
        local_12b4 = 0x3c;
        apcStack_1c54[3] = &DAT_007737c4;
        apcStack_1c54[2] = (char *)0x68393e;
        FUN_004054a0();
        local_8._0_1_ = 4;
        apcStack_1c54[3] = (char *)&local_12b4;
        apcStack_1c54[2] = (char *)0x683959;
        apcStack_1c54[3] = (char *)FUN_004051c0();
        local_8._0_1_ = 0;
        apcStack_1c54[2] = (undefined *)0x683963;
        local_12b8 = ui_find_widget_by_key();
        if (*(char *)(local_12b8 + 0xad0) != '\0') goto LAB_00683fe8;
      }
    }
    local_12bc = 0xaf;
    FUN_004051c0();
    cVar1 = FUN_0040d500();
    if (cVar1 == '\0') {
      local_12c0 = 0xaf;
      apcStack_1c54[3] = &DAT_007737b8;
      apcStack_1c54[2] = (char *)0x6839cd;
      FUN_004054a0();
      local_8._0_1_ = 5;
      apcStack_1c54[3] = (char *)&local_12c0;
      apcStack_1c54[2] = (char *)0x6839e8;
      apcStack_1c54[3] = (char *)FUN_004051c0();
      local_8._0_1_ = 0;
      apcStack_1c54[2] = (undefined *)0x6839f2;
      local_12c4 = ui_find_widget_by_key();
      if (local_12c4 != 0) {
        local_12c8 = 0xaf;
        apcStack_1c54[3] = &DAT_00773828;
        apcStack_1c54[2] = (char *)0x683a23;
        FUN_004054a0();
        local_8._0_1_ = 6;
        apcStack_1c54[3] = (char *)&local_12c8;
        apcStack_1c54[2] = (char *)0x683a3e;
        apcStack_1c54[3] = (char *)FUN_004051c0();
        local_8._0_1_ = 0;
        apcStack_1c54[2] = (undefined *)0x683a48;
        local_12cc = ui_find_widget_by_key();
        if (*(char *)(local_12cc + 0xad0) != '\0') goto LAB_00683fe8;
      }
    }
    local_12d0 = 0x3a;
    FUN_004051c0();
    cVar1 = FUN_0040d500();
    if (cVar1 == '\0') {
      local_12d4 = 0x3a;
      apcStack_1c54[3] = &DAT_00773818;
      apcStack_1c54[2] = (char *)0x683ab2;
      FUN_004054a0();
      local_8._0_1_ = 7;
      apcStack_1c54[3] = (char *)&local_12d4;
      apcStack_1c54[2] = (char *)0x683acd;
      apcStack_1c54[3] = (char *)FUN_004051c0();
      local_8._0_1_ = 0;
      apcStack_1c54[2] = (undefined *)0x683ad7;
      local_12d8 = ui_find_widget_by_key();
      if (local_12d8 != 0) {
        local_12dc = 0x3a;
        apcStack_1c54[3] = &DAT_00773808;
        apcStack_1c54[2] = (char *)0x683b08;
        FUN_004054a0();
        local_8._0_1_ = 8;
        apcStack_1c54[3] = (char *)&local_12dc;
        apcStack_1c54[2] = (char *)0x683b23;
        apcStack_1c54[3] = (char *)FUN_004051c0();
        local_8._0_1_ = 0;
        apcStack_1c54[2] = (undefined *)0x683b2d;
        local_12e0 = ui_find_widget_by_key();
        if (*(char *)(local_12e0 + 0xad0) != '\0') goto LAB_00683fe8;
      }
    }
    local_12e4 = 0x3b;
    FUN_004051c0();
    cVar1 = FUN_0040d500();
    if (cVar1 == '\0') {
      local_12e8 = 0x3b;
      apcStack_1c54[3] = &DAT_007737f8;
      apcStack_1c54[2] = (char *)0x683b97;
      FUN_004054a0();
      local_8._0_1_ = 9;
      apcStack_1c54[3] = (char *)&local_12e8;
      apcStack_1c54[2] = (char *)0x683bb2;
      apcStack_1c54[3] = (char *)FUN_004051c0();
      local_8._0_1_ = 0;
      apcStack_1c54[2] = (undefined *)0x683bbc;
      local_12ec = ui_find_widget_by_key();
      if (local_12ec != 0) {
        local_12f0 = 0x3b;
        apcStack_1c54[3] = &DAT_00773874;
        apcStack_1c54[2] = (char *)0x683bed;
        FUN_004054a0();
        local_8._0_1_ = 10;
        apcStack_1c54[3] = (char *)&local_12f0;
        apcStack_1c54[2] = (char *)0x683c08;
        apcStack_1c54[3] = (char *)FUN_004051c0();
        local_8._0_1_ = 0;
        apcStack_1c54[2] = (undefined *)0x683c12;
        local_12f4 = ui_find_widget_by_key();
        if (*(char *)(local_12f4 + 0xad0) != '\0') goto LAB_00683fe8;
      }
    }
    local_12f8 = 0x14b4;
    FUN_004051c0();
    cVar1 = FUN_0040d500();
    if (cVar1 == '\0') {
      local_12fc = 0x14b4;
      apcStack_1c54[3] = &DAT_00773864;
      apcStack_1c54[2] = (char *)0x683c7c;
      FUN_004054a0();
      local_8._0_1_ = 0xb;
      apcStack_1c54[3] = (char *)&local_12fc;
      apcStack_1c54[2] = (char *)0x683c97;
      apcStack_1c54[3] = (char *)FUN_004051c0();
      local_8._0_1_ = 0;
      apcStack_1c54[2] = (undefined *)0x683ca1;
      local_1300 = ui_find_widget_by_key();
      if (local_1300 != 0) {
        local_1304 = 0x14b4;
        apcStack_1c54[3] = &DAT_00773854;
        apcStack_1c54[2] = (char *)0x683cd2;
        FUN_004054a0();
        local_8._0_1_ = 0xc;
        apcStack_1c54[3] = (char *)&local_1304;
        apcStack_1c54[2] = (char *)0x683ced;
        apcStack_1c54[3] = (char *)FUN_004051c0();
        local_8._0_1_ = 0;
        apcStack_1c54[2] = (undefined *)0x683cf7;
        local_1308 = ui_find_widget_by_key();
        if (*(char *)(local_1308 + 0xad0) != '\0') goto LAB_00683fe8;
      }
    }
    iVar3 = FUN_00454ea0();
    if ((*(char *)(iVar3 + 0xe07) != '\0') ||
       (iVar3 = FUN_00454ea0(), *(char *)(iVar3 + 0xe08) != '\0')) goto LAB_00683fe8;
    local_130c = 0x1068;
    FUN_004051c0();
    cVar1 = FUN_0040d500();
    if (cVar1 == '\0') {
      local_1310 = 0x1068;
      apcStack_1c54[3] = &DAT_00773834;
      apcStack_1c54[2] = (char *)0x683d89;
      FUN_004054a0();
      local_8._0_1_ = 0xd;
      apcStack_1c54[3] = (char *)&local_1310;
      apcStack_1c54[2] = (char *)0x683da4;
      apcStack_1c54[3] = (char *)FUN_004051c0();
      local_8._0_1_ = 0;
      apcStack_1c54[2] = (undefined *)0x683dae;
      local_1314 = ui_find_widget_by_key();
      if (local_1314 != 0) {
        local_1318 = 0x1068;
        apcStack_1c54[3] = &DAT_007738d0;
        apcStack_1c54[2] = (char *)0x683ddf;
        FUN_004054a0();
        local_8._0_1_ = 0xe;
        apcStack_1c54[3] = (char *)&local_1318;
        apcStack_1c54[2] = (char *)0x683dfa;
        apcStack_1c54[3] = (char *)FUN_004051c0();
        local_8._0_1_ = 0;
        apcStack_1c54[2] = (undefined *)0x683e04;
        local_131c = ui_find_widget_by_key();
        if (*(char *)(local_131c + 0xad0) != '\0') goto LAB_00683fe8;
      }
    }
    local_1320 = 0x1068;
    FUN_004051c0();
    cVar1 = FUN_0040d500();
    if (cVar1 == '\0') {
      local_1324 = 0x1068;
      apcStack_1c54[3] = &DAT_007738b8;
      apcStack_1c54[2] = (char *)0x683e6e;
      FUN_004054a0();
      local_8._0_1_ = 0xf;
      apcStack_1c54[3] = (char *)&local_1324;
      apcStack_1c54[2] = (char *)0x683e89;
      apcStack_1c54[3] = (char *)FUN_004051c0();
      local_8._0_1_ = 0;
      apcStack_1c54[2] = (undefined *)0x683e93;
      local_1328 = ui_find_widget_by_key();
      if (local_1328 != 0) {
        local_132c = 0x1068;
        apcStack_1c54[3] = &DAT_007738a0;
        apcStack_1c54[2] = (char *)0x683ec4;
        FUN_004054a0();
        local_8._0_1_ = 0x10;
        apcStack_1c54[3] = (char *)&local_132c;
        apcStack_1c54[2] = (char *)0x683edf;
        apcStack_1c54[3] = (char *)FUN_004051c0();
        local_8._0_1_ = 0;
        apcStack_1c54[2] = (undefined *)0x683ee9;
        local_1330 = ui_find_widget_by_key();
        if (*(char *)(local_1330 + 0xad0) != '\0') goto LAB_00683fe8;
      }
    }
    local_1334 = 0x1068;
    FUN_004051c0();
    cVar1 = FUN_0040d500();
    if (cVar1 == '\0') {
      local_1338 = 0x1068;
      apcStack_1c54[3] = &DAT_00773884;
      apcStack_1c54[2] = (char *)0x683f53;
      FUN_004054a0();
      local_8._0_1_ = 0x11;
      apcStack_1c54[3] = (char *)&local_1338;
      apcStack_1c54[2] = (char *)0x683f6e;
      apcStack_1c54[3] = (char *)FUN_004051c0();
      local_8._0_1_ = 0;
      apcStack_1c54[2] = (undefined *)0x683f78;
      local_133c = ui_find_widget_by_key();
      if (local_133c != 0) {
        local_1340 = 0x1068;
        apcStack_1c54[3] = &DAT_00773920;
        apcStack_1c54[2] = (char *)0x683fa9;
        FUN_004054a0();
        local_8._0_1_ = 0x12;
        apcStack_1c54[3] = (char *)&local_1340;
        apcStack_1c54[2] = (char *)0x683fc4;
        apcStack_1c54[3] = (char *)FUN_004051c0();
        local_8._0_1_ = 0;
        apcStack_1c54[2] = (undefined *)0x683fce;
        local_1344 = ui_find_widget_by_key();
        if (*(char *)(local_1344 + 0xad0) != '\0') goto LAB_00683fe8;
      }
    }
    iVar3 = FUN_00454ea0();
    *(undefined1 *)(iVar3 + 0xdfb) = 0;
  }
  iVar3 = FUN_00454ea0();
  if (((*(char *)(iVar3 + 0xe05) != '\0') ||
      ((iVar3 = FUN_00454ea0(), *(char *)(iVar3 + 0xdb8) != '\0' &&
       (iVar3 = FUN_00454ea0(), *(int *)(iVar3 + 0xdd8) == 4)))) &&
     (((wParam == 0x26 ||
       ((((wParam == 0x28 || (wParam == 0x25)) || (wParam == 0x27)) ||
        (((wParam == 0x20 || (wParam == 0x5a)) ||
         ((wParam == 0x58 || ((wParam == 0x43 || (wParam == 0x41)))))))))) ||
      ((wParam == 0x53 ||
       ((((wParam == 0x44 || (wParam == 0x46)) || (wParam == 0x47)) ||
        ((wParam == 0x48 || (wParam == 0x56)))))))))) {
    iVar3 = FUN_00454ea0();
    if (*(char *)(iVar3 + 0xdfb) == '\0') {
      if ((*(int *)(*(int *)ThreadLocalStoragePointer + 4) < DAT_007cde08) &&
         (FUN_006e4c3b(), DAT_007cde08 == -1)) {
        local_8._0_1_ = 0x13;
        local_134c = 0x26;
        local_1348 = 1;
        FUN_004072a0();
        local_1354 = 0x28;
        local_1350 = 2;
        FUN_004072a0();
        local_135c = 0x25;
        local_1358 = 3;
        FUN_004072a0();
        local_1364 = 0x27;
        local_1360 = 4;
        FUN_004072a0();
        local_136c = 0x20;
        local_1368 = 5;
        FUN_004072a0();
        local_1028 = 0x5a;
        local_1370 = 6;
        FUN_006a02e0();
        local_1029 = 0x58;
        local_1374 = 7;
        FUN_006a02e0();
        local_102a = 0x43;
        local_1378 = 8;
        FUN_006a02e0();
        local_102b = 0x41;
        local_137c = 9;
        FUN_006a02e0();
        local_102c = 0x53;
        local_1380 = 10;
        FUN_006a02e0();
        local_102d = 0x44;
        local_1384 = 0xb;
        FUN_006a02e0();
        local_102e = 0x46;
        local_1388 = 0xc;
        FUN_006a02e0();
        local_102f = 0x47;
        local_138c = 0xd;
        FUN_006a02e0();
        local_1030 = 0x48;
        local_1390 = 0xe;
        FUN_006a02e0();
        local_1031 = 0x56;
        local_1394 = 0xf;
        FUN_006a02e0();
        FUN_00401880();
        FUN_0069edd0();
        FUN_006e4fef();
        local_8._0_1_ = 0;
        FUN_006e4bea();
      }
      iVar3 = FUN_00454ea0();
      if (*(char *)(iVar3 + 0xe05) == '\0') {
        iVar3 = FUN_00454ea0();
        if (*(char *)(iVar3 + 0xdb8) != '\0') {
          local_1068 = 0x1a;
          local_ff8 = (void *)FUN_006f191d();
          if (local_ff8 != (void *)0x0) {
            _memset(local_ff8,0,local_1068);
          }
          local_fd4 = 0;
          iVar3 = FUN_006a34a0();
          local_fd4 = iVar3 + local_fd4;
          iVar3 = FUN_006a34a0();
          local_fd4 = iVar3 + local_fd4;
          iVar3 = FUN_006a34d0();
          local_fd4 = iVar3 + local_fd4;
          FUN_004d1b20();
          iVar3 = FUN_006a34a0();
          local_fd4 = iVar3 + local_fd4;
          FUN_00454ea0();
          cVar1 = net_packet_write_u8();
          local_fd4 = cVar1 + local_fd4;
          FUN_0069eda0();
          cVar1 = net_packet_write_u8();
          local_fd4 = cVar1 + local_fd4;
          net_socket_send_all();
          FUN_006f1902();
        }
      }
      else {
        local_1064 = 0x1d;
        local_ff4 = (void *)FUN_006f191d();
        if (local_ff4 != (void *)0x0) {
          _memset(local_ff4,0,local_1064);
        }
        local_fd0 = 0;
        iVar3 = FUN_006a34a0();
        local_fd0 = iVar3 + local_fd0;
        iVar3 = FUN_006a34a0();
        local_fd0 = iVar3 + local_fd0;
        iVar3 = FUN_006a34d0();
        local_fd0 = iVar3 + local_fd0;
        FUN_004d1af0();
        iVar3 = FUN_006a34a0();
        local_fd0 = iVar3 + local_fd0;
        FUN_00454ea0();
        iVar3 = FUN_006a34a0();
        local_fd0 = iVar3 + local_fd0;
        FUN_0069eda0();
        cVar1 = net_packet_write_u8();
        local_fd0 = cVar1 + local_fd0;
        net_socket_send_all();
        FUN_006f1902();
      }
    }
    puStack_1c40 = (undefined *)0x6846d9;
    local_1398 = DefWindowProcA(hWnd,0x100,wParam,lParam);
    local_8 = 0xffffffff;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_444);
    ExceptionList = local_10;
    return local_1398;
  }
  iVar3 = FUN_00454ea0();
  if (iVar3 != 0) {
    apcStack_1c54[3] = &DAT_00773918;
    apcStack_1c54[2] = (undefined *)0x68471a;
    FUN_004054a0();
    local_8._0_1_ = 0x14;
    apcStack_1c54[3] = (char *)0x684729;
    FUN_00454ea0();
    local_8._0_1_ = 0;
    apcStack_1c54[3] = (undefined *)0x684734;
    local_139c = FUN_006356a0();
    if (local_139c != 0) {
      if (wParam == 0x26) {
        wParam = 0x28;
      }
      else if (wParam == 0x28) {
        wParam = 0x26;
      }
      else if (wParam == 0x25) {
        wParam = 0x27;
      }
      else if (wParam == 0x27) {
        wParam = 0x25;
      }
    }
  }
  local_106c = wParam - 0x10;
  switch(wParam) {
  case 0x10:
    iVar3 = FUN_00454ea0();
    if (*(char *)(iVar3 + 0xdfb) == '\0') {
      iVar3 = FUN_00454ea0();
      *(undefined1 *)(iVar3 + 0xdfa) = 1;
    }
    break;
  case 0x1b:
    /* VK_ESCAPE: close many UI command IDs via ui_command_dispatch */
    puVar6 = (undefined1 *)game_get_modal_block_flag();
    *puVar6 = 0;
    uStack_13a0 = 0x15e0;
    FUN_004051c0();
    ui_close_matching_widgets();
    uStack_13a4 = 0x1644;
    FUN_004051c0();
    ui_close_matching_widgets();
    ui_command_dispatch();
    ui_command_dispatch();
    ui_command_dispatch();
    ui_command_dispatch();
    ui_command_dispatch();
    ui_command_dispatch();
    ui_command_dispatch();
    ui_command_dispatch();
    ui_command_dispatch();
    ui_command_dispatch();
    uStack_13a8 = 0x39;
    FUN_004051c0();
    ui_close_matching_widgets();
    uStack_13ac = 900;
    FUN_004051c0();
    ui_close_matching_widgets();
    uStack_13b0 = 0x3b6;
    FUN_004051c0();
    ui_close_matching_widgets();
    ui_command_dispatch();
    ui_command_dispatch();
    ui_command_dispatch();
    ui_command_dispatch();
    ui_command_dispatch();
    uStack_13b4 = 0x43;
    FUN_004051c0();
    ui_close_matching_widgets();
    uStack_13b8 = 0x44;
    FUN_004051c0();
    ui_close_matching_widgets();
    ui_command_dispatch();
    ui_command_dispatch();
    ui_command_dispatch();
    ui_command_dispatch();
    ui_command_dispatch();
    iVar3 = FUN_00454ea0();
    if ((*(char *)(iVar3 + 0xe07) != '\x01') ||
       (iVar3 = FUN_00454ea0(), *(char *)(iVar3 + 0xe08) != '\0')) {
      uStack_13bc = 0x1450;
      FUN_004051c0();
      ui_close_matching_widgets();
      uStack_13c0 = 0x14b4;
      FUN_004051c0();
      ui_close_matching_widgets();
    }
    uStack_13c4 = 0xaf;
    FUN_004051c0();
    ui_clear_flag_bits_on_list();
    uStack_13c8 = 7000;
    apcStack_1c54[3] = &UNK_00773904;
    apcStack_1c54[2] = &UNK_00684ad6;
    FUN_004054a0();
    local_8._0_1_ = 0x15;
    apcStack_1c54[3] = (char *)&uStack_13c8;
    apcStack_1c54[2] = &UNK_00684af1;
    apcStack_1c54[3] = (char *)FUN_004051c0();
    local_8._0_1_ = 0;
    apcStack_1c54[2] = &UNK_00684afb;
    FUN_0065d990();
    uStack_13cc = 0x38;
    FUN_004051c0();
    ui_close_matching_widgets();
    uStack_13d0 = 0x49;
    FUN_004051c0();
    ui_close_matching_widgets();
    ui_clear_modal_input_state();
    uStack_13d4 = 0xaf;
    FUN_004051c0();
    cVar1 = FUN_0040d500();
    if (cVar1 == '\0') {
      iVar3 = FUN_00454ea0();
      *(undefined1 *)(iVar3 + 0xdfb) = 0;
    }
    uStack_13d8 = 0x5e;
    FUN_004051c0();
    cVar1 = FUN_0040d500();
    if (cVar1 == '\0') {
      ui_command_dispatch();
    }
    break;
  case 0x20:
    iVar3 = FUN_00454ea0();
    if (*(char *)(iVar3 + 0xdfb) == '\0') {
      iVar3 = FUN_00454ea0();
      *(undefined1 *)(iVar3 + 0xdf9) = 1;
    }
    break;
  case 0x25:
    iVar3 = FUN_00454ea0();
    if (*(char *)(iVar3 + 0xdfb) == '\0') {
      iVar3 = FUN_00454ea0();
      *(undefined1 *)(iVar3 + 0xded) = 1;
      FUN_00454ea0();
      FUN_0044de80();
      if ((((lParam & 0x40000000) == 0) && (iVar3 = FUN_00454ea0(), *(int *)(iVar3 + 0x1a4) == 100)
          ) && (iVar3 = FUN_00454ea0(), *(int *)(iVar3 + 0x19c) == 4)) {
        Concurrency::details::QuickBitSet::QuickBitSet((QuickBitSet *)&uStack_1288);
        DStack_1284 = timeGetTime();
        uStack_1288 = 0x25;
        FUN_004054a0();
        local_8._0_1_ = 0x16;
        FUN_00454ea0();
        FUN_0069f500();
        FUN_0069f4c0();
        local_8 = (uint)local_8._1_3_ << 8;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_674);
        while( true ) {
          FUN_004054a0();
          local_8._0_1_ = 0x17;
          FUN_00454ea0();
          FUN_0069f500();
          cVar1 = FUN_0044e1c0();
          cStack_1032 = cVar1 == '\x01';
          uStack_1140 = (uint)(byte)cStack_1032;
          local_8._0_1_ = 0;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_68c);
          if (cStack_1032 != '\0') break;
          FUN_004054a0();
          local_8._0_1_ = 0x18;
          FUN_00454ea0();
          FUN_0069f500();
          iVar3 = FUN_004a1850();
          cStack_1033 = *(uint *)(iVar3 + 4) < DStack_1284 - 500;
          uStack_1144 = (uint)(byte)cStack_1033;
          local_8._0_1_ = 0;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_6a4);
          if (cStack_1033 == '\0') break;
          FUN_004054a0();
          local_8._0_1_ = 0x19;
          FUN_00454ea0();
          FUN_0069f500();
          FUN_0069f4e0();
          local_8 = (uint)local_8._1_3_ << 8;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_6bc);
        }
        FUN_004054a0();
        local_8._0_1_ = 0x1a;
        FUN_00454ea0();
        FUN_0069f500();
        uVar4 = FUN_00401c40();
        cStack_103d = 1 < uVar4;
        uStack_1148 = (uint)(byte)cStack_103d;
        local_8._0_1_ = 0;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_6d4);
        if (cStack_103d != '\0') {
          FUN_004acd90();
          FUN_004054a0();
          local_8._0_1_ = 0x1b;
          FUN_00454ea0();
          FUN_0069f500();
          puVar9 = (undefined4 *)FUN_0040d9a0();
          uStack_104c = *puVar9;
          local_8._0_1_ = 0;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_6ec);
          FUN_0069ef20();
          piVar7 = (int *)FUN_0044de10();
          iStack_1158 = *piVar7;
          FUN_0069ef20();
          piVar7 = (int *)FUN_0044de10();
          iStack_115c = *piVar7;
          if ((iStack_1158 == 0x25) && (iStack_115c == 0x27)) {
            FUN_004054a0();
            local_8._0_1_ = 0x1c;
            FUN_00454ea0();
            FUN_0069f500();
            FUN_0048a160();
            local_8._0_1_ = 0;
            std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_554);
            FUN_00454ea0();
            piStack_114c = (int *)FUN_00401a70();
            *piStack_114c = *piStack_114c + 1;
            iVar3 = FUN_00454ea0();
            piStack_1150 = (int *)(iVar3 + 0x224);
            *piStack_1150 = *piStack_1150 + -1;
            iVar3 = FUN_00454ea0();
            piStack_1154 = (int *)(*(int *)(iVar3 + 0x18c) + 0x224);
            *piStack_1154 = *piStack_1154 + -1;
          }
          if ((iStack_1158 == 0x27) && (iStack_115c == 0x25)) {
            FUN_004054a0();
            local_8._0_1_ = 0x1d;
            FUN_00454ea0();
            FUN_0069f500();
            FUN_0048a160();
            local_8._0_1_ = 0;
            std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_56c);
            FUN_00454ea0();
            piStack_1160 = (int *)FUN_00401a70();
            *piStack_1160 = *piStack_1160 + 1;
            iVar3 = FUN_00454ea0();
            piStack_1164 = (int *)(iVar3 + 0x224);
            *piStack_1164 = *piStack_1164 + 1;
            iVar3 = FUN_00454ea0();
            piStack_1168 = (int *)(*(int *)(iVar3 + 0x18c) + 0x224);
            *piStack_1168 = *piStack_1168 + 1;
          }
        }
      }
      FUN_00454ea0();
      cStack_1009 = FUN_00466590();
      if ((cStack_1009 != '\0') && ((lParam & 0x40000000) == 0)) {
        Concurrency::details::QuickBitSet::QuickBitSet((QuickBitSet *)&uStack_1290);
        DStack_128c = timeGetTime();
        uStack_1290 = 0x25;
        FUN_00454ea0();
        FUN_0069f4c0();
        while( true ) {
          FUN_00454ea0();
          cVar1 = FUN_0044e1c0();
          if (cVar1 == '\x01') break;
          FUN_00454ea0();
          iVar3 = FUN_004a1850();
          if (DStack_128c - 500 <= *(uint *)(iVar3 + 4)) break;
          FUN_00454ea0();
          FUN_0069f4e0();
        }
        FUN_00454ea0();
        uVar4 = FUN_00401c40();
        if (1 < uVar4) {
          FUN_00454ea0();
          piVar7 = (int *)FUN_004b1090();
          if (*piVar7 == 0x25) {
            FUN_004acd90();
            FUN_00454ea0();
            puVar9 = (undefined4 *)FUN_0040d9a0();
            uStack_1070 = *puVar9;
            FUN_0069ef20();
            FUN_0069ef20();
            piVar7 = (int *)FUN_0044de10();
            if (*piVar7 == 0x25) {
              iVar3 = FUN_00454ea0();
              *(undefined1 *)(iVar3 + 0xdfc) = 1;
              iVar3 = FUN_00454ea0();
              iVar8 = FUN_00454ea0();
              *(undefined4 *)(iVar8 + 0xe00) = *(undefined4 *)(iVar3 + 500);
            }
          }
        }
      }
    }
    break;
  case 0x26:
    iVar3 = FUN_00454ea0();
    if (*(char *)(iVar3 + 0xdfb) == '\0') {
      iVar3 = FUN_00454ea0();
      *(undefined1 *)(iVar3 + 0xdeb) = 1;
      FUN_00454ea0();
      FUN_0044de80();
      FUN_00454ea0();
      FUN_00466590();
    }
    break;
  case 0x27:
    iVar3 = FUN_00454ea0();
    if (*(char *)(iVar3 + 0xdfb) == '\0') {
      iVar3 = FUN_00454ea0();
      *(undefined1 *)(iVar3 + 0xdee) = 1;
      FUN_00454ea0();
      FUN_0044de80();
      if ((((lParam & 0x40000000) == 0) && (iVar3 = FUN_00454ea0(), *(int *)(iVar3 + 0x1a4) == 100)
          ) && (iVar3 = FUN_00454ea0(), *(int *)(iVar3 + 0x19c) == 4)) {
        Concurrency::details::QuickBitSet::QuickBitSet((QuickBitSet *)&uStack_1298);
        DStack_1294 = timeGetTime();
        uStack_1298 = 0x27;
        FUN_004054a0();
        local_8._0_1_ = 0x1e;
        FUN_00454ea0();
        FUN_0069f500();
        FUN_0069f4c0();
        local_8 = (uint)local_8._1_3_ << 8;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_584);
        while( true ) {
          FUN_004054a0();
          local_8._0_1_ = 0x1f;
          FUN_00454ea0();
          FUN_0069f500();
          cVar1 = FUN_0044e1c0();
          cStack_100a = cVar1 == '\x01';
          uStack_116c = (uint)(byte)cStack_100a;
          local_8._0_1_ = 0;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_59c);
          if (cStack_100a != '\0') break;
          FUN_004054a0();
          local_8._0_1_ = 0x20;
          FUN_00454ea0();
          FUN_0069f500();
          iVar3 = FUN_004a1850();
          cStack_100b = *(uint *)(iVar3 + 4) < DStack_1294 - 500;
          uStack_1170 = (uint)(byte)cStack_100b;
          local_8._0_1_ = 0;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_5b4);
          if (cStack_100b == '\0') break;
          FUN_004054a0();
          local_8._0_1_ = 0x21;
          FUN_00454ea0();
          FUN_0069f500();
          FUN_0069f4e0();
          local_8 = (uint)local_8._1_3_ << 8;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_5cc);
        }
        FUN_004054a0();
        local_8._0_1_ = 0x22;
        FUN_00454ea0();
        FUN_0069f500();
        uVar4 = FUN_00401c40();
        cStack_100c = 1 < uVar4;
        uStack_1174 = (uint)(byte)cStack_100c;
        local_8._0_1_ = 0;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_5e4);
        if (cStack_100c != '\0') {
          FUN_004acd90();
          FUN_004054a0();
          local_8._0_1_ = 0x23;
          FUN_00454ea0();
          FUN_0069f500();
          puVar9 = (undefined4 *)FUN_0040d9a0();
          uStack_1050 = *puVar9;
          local_8._0_1_ = 0;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_5fc);
          FUN_0069ef20();
          piVar7 = (int *)FUN_0044de10();
          iStack_1184 = *piVar7;
          FUN_0069ef20();
          piVar7 = (int *)FUN_0044de10();
          iStack_1188 = *piVar7;
          if ((iStack_1184 == 0x25) && (iStack_1188 == 0x27)) {
            FUN_004054a0();
            local_8._0_1_ = 0x24;
            FUN_00454ea0();
            FUN_0069f500();
            FUN_0048a160();
            local_8._0_1_ = 0;
            std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_614);
            FUN_00454ea0();
            piStack_1178 = (int *)FUN_00401a70();
            *piStack_1178 = *piStack_1178 + 1;
            iVar3 = FUN_00454ea0();
            piStack_117c = (int *)(iVar3 + 0x224);
            *piStack_117c = *piStack_117c + -1;
            iVar3 = FUN_00454ea0();
            piStack_1180 = (int *)(*(int *)(iVar3 + 0x18c) + 0x224);
            *piStack_1180 = *piStack_1180 + -1;
          }
          if ((iStack_1184 == 0x27) && (iStack_1188 == 0x25)) {
            FUN_004054a0();
            local_8._0_1_ = 0x25;
            FUN_00454ea0();
            FUN_0069f500();
            FUN_0048a160();
            local_8._0_1_ = 0;
            std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_62c);
            FUN_00454ea0();
            piStack_118c = (int *)FUN_00401a70();
            *piStack_118c = *piStack_118c + 1;
            iVar3 = FUN_00454ea0();
            piStack_1190 = (int *)(iVar3 + 0x224);
            *piStack_1190 = *piStack_1190 + 1;
            iVar3 = FUN_00454ea0();
            piStack_1194 = (int *)(*(int *)(iVar3 + 0x18c) + 0x224);
            *piStack_1194 = *piStack_1194 + 1;
          }
        }
      }
      FUN_00454ea0();
      cStack_100d = FUN_00466590();
      if ((cStack_100d != '\0') && ((lParam & 0x40000000) == 0)) {
        Concurrency::details::QuickBitSet::QuickBitSet((QuickBitSet *)&uStack_12a0);
        DStack_129c = timeGetTime();
        uStack_12a0 = 0x27;
        FUN_00454ea0();
        FUN_0069f4c0();
        while( true ) {
          FUN_00454ea0();
          cVar1 = FUN_0044e1c0();
          if (cVar1 == '\x01') break;
          FUN_00454ea0();
          iVar3 = FUN_004a1850();
          if (DStack_129c - 500 <= *(uint *)(iVar3 + 4)) break;
          FUN_00454ea0();
          FUN_0069f4e0();
        }
        FUN_00454ea0();
        uVar4 = FUN_00401c40();
        if (1 < uVar4) {
          FUN_00454ea0();
          piVar7 = (int *)FUN_004b1090();
          if (*piVar7 == 0x27) {
            FUN_004acd90();
            FUN_00454ea0();
            puVar9 = (undefined4 *)FUN_0040d9a0();
            uStack_1074 = *puVar9;
            FUN_0069ef20();
            FUN_0069ef20();
            piVar7 = (int *)FUN_0044de10();
            if (*piVar7 == 0x27) {
              iVar3 = FUN_00454ea0();
              *(undefined1 *)(iVar3 + 0xdfc) = 1;
              iVar3 = FUN_00454ea0();
              iVar8 = FUN_00454ea0();
              *(undefined4 *)(iVar8 + 0xe00) = *(undefined4 *)(iVar3 + 500);
            }
          }
        }
      }
    }
    break;
  case 0x28:
    iVar3 = FUN_00454ea0();
    if (*(char *)(iVar3 + 0xdfb) == '\0') {
      iVar3 = FUN_00454ea0();
      *(undefined1 *)(iVar3 + 0xdec) = 1;
      FUN_00454ea0();
      FUN_0044de80();
      FUN_00454ea0();
      FUN_00466590();
    }
    break;
  case 0x31:
    /* VK_1 */
    iVar3 = FUN_00454ea0();
    if (*(char *)(iVar3 + 0xdfb) == '\0') {
      FUN_0067e820();
    }
    break;
  case 0x32:
    /* VK_2 */
    iVar3 = FUN_00454ea0();
    if (*(char *)(iVar3 + 0xdfb) == '\0') {
      FUN_0067e820();
    }
    break;
  case 0x33:
    /* VK_3 */
    iVar3 = FUN_00454ea0();
    if (*(char *)(iVar3 + 0xdfb) == '\0') {
      FUN_0067e820();
    }
    break;
  case 0x34:
    /* VK_4 */
    iVar3 = FUN_00454ea0();
    if (*(char *)(iVar3 + 0xdfb) == '\0') {
      FUN_0067e820();
    }
    break;
  case 0x35:
    /* VK_5 */
    iVar3 = FUN_00454ea0();
    if (*(char *)(iVar3 + 0xdfb) == '\0') {
      FUN_0067e820();
    }
    break;
  case 0x36:
    /* VK_6 */
    iVar3 = FUN_00454ea0();
    if (*(char *)(iVar3 + 0xdfb) == '\0') {
      FUN_0067e820();
    }
    break;
  case 0x41:
    iVar3 = FUN_00454ea0();
    if (*(char *)(iVar3 + 0xdfb) == '\0') {
      iVar3 = FUN_00454ea0();
      *(undefined1 *)(iVar3 + 0xdf2) = 1;
      FUN_00454ea0();
      FUN_00465f30();
    }
    break;
  case 0x43:
    iVar3 = FUN_00454ea0();
    if (*(char *)(iVar3 + 0xdfb) == '\0') {
      iVar3 = FUN_00454ea0();
      *(undefined1 *)(iVar3 + 0xdef) = 1;
    }
    break;
  case 0x44:
    iVar3 = FUN_00454ea0();
    if (*(char *)(iVar3 + 0xdfb) == '\0') {
      iVar3 = FUN_00454ea0();
      *(undefined1 *)(iVar3 + 0xdf4) = 1;
      FUN_00454ea0();
      FUN_00465f30();
    }
    break;
  case 0x46:
    iVar3 = FUN_00454ea0();
    if (*(char *)(iVar3 + 0xdfb) == '\0') {
      iVar3 = FUN_00454ea0();
      *(undefined1 *)(iVar3 + 0xdf5) = 1;
      FUN_00454ea0();
      FUN_00465f30();
    }
    break;
  case 0x47:
    iVar3 = FUN_00454ea0();
    if (*(char *)(iVar3 + 0xdfb) == '\0') {
      iVar3 = FUN_00454ea0();
      *(undefined1 *)(iVar3 + 0xdf6) = 1;
      FUN_00454ea0();
      FUN_00465f30();
    }
    break;
  case 0x48:
    iVar3 = FUN_00454ea0();
    if (*(char *)(iVar3 + 0xdfb) == '\0') {
      iVar3 = FUN_00454ea0();
      *(undefined1 *)(iVar3 + 0xdf7) = 1;
      FUN_00454ea0();
      FUN_00465f30();
    }
    break;
  case 0x49:
    /* VK_I (inventory-related UI command) */
    iVar3 = FUN_00454ea0();
    if (*(char *)(iVar3 + 0xdfb) == '\0') {
      ui_command_dispatch();
    }
    break;
  case 0x4b:
    /* VK_K */
    iVar3 = FUN_00454ea0();
    if (*(char *)(iVar3 + 0xdfb) == '\0') {
      ui_command_dispatch();
    }
    break;
  case 0x4d:
    /* VK_M */
    iVar3 = FUN_00454ea0();
    if (*(char *)(iVar3 + 0xdfb) == '\0') {
      FUN_00454ea0();
      FUN_0066b900();
    }
    break;
  case 0x4e:
    /* VK_N */
    iVar3 = FUN_00454ea0();
    if (*(char *)(iVar3 + 0xdfb) == '\0') {
      iVar3 = FUN_00454ea0();
      if (*(int *)(iVar3 + 0xdd8) < 4) {
        ui_command_dispatch();
      }
      else {
        iVar3 = FUN_00454ea0();
        if (*(int *)(iVar3 + 0xdd8) == 4) {
          ui_command_dispatch();
        }
      }
    }
    break;
  case 0x4f:
    /* VK_O */
    iVar3 = FUN_00454ea0();
    if (*(char *)(iVar3 + 0xdfb) == '\0') {
      ui_command_dispatch();
    }
    break;
  case 0x50:
    /* VK_P */
    iVar3 = FUN_00454ea0();
    if ((*(char *)(iVar3 + 0xdfb) == '\0') && (piVar7 = (int *)FUN_004d1520(), *piVar7 != 0)) {
      FUN_004d1520();
      cVar1 = FUN_0040d500();
      if ((cVar1 == '\0') &&
         (((piVar7 = (int *)FUN_004d1520(), *(char *)(*piVar7 + 0x34) == '\0' &&
           (iVar3 = FUN_00454ea0(), *(char *)(iVar3 + 0xdb8) == '\0')) &&
          (iVar3 = FUN_00454ea0(), *(char *)(iVar3 + 0xe05) == '\0')))) {
        piVar7 = (int *)FUN_004d1520();
        iStack_11b8 = *piVar7 + 0x160;
        piStack_107c = (int *)FUN_004018d0();
        piStack_1440 = (int *)FUN_004018b0();
        for (; piStack_107c != piStack_1440; piStack_107c = piStack_107c + 1) {
          piStack_113c = piStack_107c;
          if (*(int *)(*piStack_107c + 0xc0) == 0) {
            iVar3 = FUN_00454ea0();
            *(undefined4 *)(*piStack_113c + 0xb8) = *(undefined4 *)(iVar3 + 0x224);
            iVar3 = FUN_00454ea0();
            *(undefined4 *)(*piStack_113c + 0xbc) = *(undefined4 *)(iVar3 + 0x228);
          }
        }
        piVar7 = (int *)FUN_004d1520();
        *(undefined1 *)(*piVar7 + 0x34) = 1;
      }
    }
    break;
  case 0x51:
    /* VK_Q */
    iVar3 = FUN_00454ea0();
    if (*(char *)(iVar3 + 0xdfb) == '\0') {
      uStack_1444 = 0x12c0;
      FUN_004051c0();
      cVar1 = FUN_0040d500();
      if (cVar1 == '\0') {
        ui_command_dispatch();
      }
      else {
        ui_command_dispatch();
      }
    }
    break;
  case 0x53:
    iVar3 = FUN_00454ea0();
    if (*(char *)(iVar3 + 0xdfb) == '\0') {
      iVar3 = FUN_00454ea0();
      *(undefined1 *)(iVar3 + 0xdf3) = 1;
      FUN_00454ea0();
      FUN_00465f30();
    }
    break;
  case 0x55:
    /* VK_U */
    iVar3 = FUN_00454ea0();
    if (*(char *)(iVar3 + 0xdfb) == '\0') {
      ui_command_dispatch();
    }
    break;
  case 0x56:
    iVar3 = FUN_00454ea0();
    if ((3 < *(int *)(iVar3 + 0xdd8)) && (iVar3 = FUN_00454ea0(), *(char *)(iVar3 + 0xdfb) == '\0'))
    {
      iVar3 = FUN_00454ea0();
      *(undefined1 *)(iVar3 + 0xdf8) = 1;
      iVar3 = FUN_00454ea0();
      if (*(int *)(iVar3 + 0xd74) != 0) {
        FUN_00454ea0();
        iVar3 = FUN_00405270();
        if (0 < *(int *)(iVar3 + 0x20)) {
          FUN_00454ea0();
          iVar3 = FUN_00405270();
          if (*(int *)(iVar3 + 4) == 0xf621) {
            FUN_00454ea0();
            iVar3 = FUN_00405270();
            if (0x18 < *(int *)(iVar3 + 8)) {
              FUN_00454ea0();
              cVar1 = FUN_00486660();
              if (cVar1 != '\0') {
                iVar3 = FUN_00454ea0();
                piStack_11a0 = *(int **)(iVar3 + 0xd74);
                apcStack_1c54[3] = "creature/marbas/effect/animation/powerup_body_dodge_under.ani";
                apcStack_1c54[2] = &UNK_006861c3;
                FUN_004054a0();
                apcStack_1c54[3] = &UNK_006861d6;
                iStack_1430 = (**(code **)(*piStack_11a0 + 0x78))();
                *(undefined4 *)(iStack_1430 + 0x114) = 0xffffff38;
                apcStack_1c54[3] = &UNK_006861f1;
                iVar3 = FUN_00454ea0();
                piStack_11a4 = *(int **)(iVar3 + 0xd74);
                FUN_004054a0();
                iStack_1434 = (**(code **)(*piStack_11a4 + 0x78))();
                *(undefined4 *)(iStack_1434 + 0x114) = 0xffffff9c;
                iVar3 = FUN_00454ea0();
                piStack_11a8 = *(int **)(iVar3 + 0xd74);
                FUN_004054a0();
                iStack_1438 = (**(code **)(*piStack_11a8 + 0x78))();
                *(undefined4 *)(iStack_1438 + 0x114) = 100;
                iVar3 = FUN_00454ea0();
                piStack_11ac = *(int **)(iVar3 + 0xd74);
                FUN_004054a0("creature/common/animation/levelup_dodgeover.ani");
                iStack_143c = (**(code **)(*piStack_11ac + 0x78))();
                *(undefined4 *)(iStack_143c + 0x114) = 200;
              }
              break;
            }
          }
          FUN_00454ea0();
          iVar3 = FUN_00405270();
          if (*(int *)(iVar3 + 4) == 0x1e8482) {
            FUN_00454ea0();
            iVar3 = FUN_00405270();
            iVar3 = *(int *)(iVar3 + 0xc);
            FUN_005e9240();
            FUN_005cc840();
            FUN_00489f20();
            iVar8 = FUN_00489f00();
            *(int *)(iVar8 + 0x30) = (iVar3 / 10) * 10 + 10;
            FUN_00454ea0();
            cVar1 = FUN_00486660();
            if (cVar1 != '\0') {
              iVar3 = FUN_00454ea0();
              piStack_11b0 = *(int **)(iVar3 + 0xd74);
              apcStack_1c54[3] = "creature/redpanda/effect/animation/powerup.ani";
              apcStack_1c54[2] = &UNK_0068638d;
              FUN_004054a0();
              apcStack_1c54[3] = &UNK_006863a0;
              (**(code **)(*piStack_11b0 + 0x78))();
            }
          }
          else {
            FUN_00454ea0();
            iVar3 = FUN_00405270();
            if (*(int *)(iVar3 + 4) == 0x1e8484) {
              FUN_00454ea0();
              iVar3 = FUN_00405270();
              iVar3 = *(int *)(iVar3 + 0xc);
              FUN_005e9240();
              FUN_005cc840();
              FUN_00489f20();
              iVar8 = FUN_00489f00();
              *(int *)(iVar8 + 0x30) = (iVar3 / 10) * 10 + 10;
              FUN_00454ea0();
              cVar1 = FUN_00486660();
              if (cVar1 != '\0') {
                iVar3 = FUN_00454ea0();
                piStack_11b4 = *(int **)(iVar3 + 0xd74);
                apcStack_1c54[3] = "creature/bluepanda/effect/animation/powerup.ani";
                apcStack_1c54[2] = &UNK_00686455;
                FUN_004054a0();
                apcStack_1c54[3] = &UNK_00686468;
                (**(code **)(*piStack_11b4 + 0x78))();
              }
            }
          }
        }
      }
    }
    break;
  case 0x58:
    iVar3 = FUN_00454ea0();
    if (*(char *)(iVar3 + 0xdfb) == '\0') {
      iVar3 = FUN_00454ea0();
      *(undefined1 *)(iVar3 + 0xdf0) = 1;
      FUN_00454ea0();
      FUN_00459220();
    }
    break;
  case 0x59:
    /* VK_Y */
    iVar3 = FUN_00454ea0();
    if (*(char *)(iVar3 + 0xdfb) == '\0') {
      ui_command_dispatch();
    }
    break;
  case 0x5a:
    iVar3 = FUN_00454ea0();
    if (*(char *)(iVar3 + 0xdfb) == '\0') {
      iVar3 = FUN_00454ea0();
      *(undefined1 *)(iVar3 + 0xdf1) = 1;
    }
    break;
  case 0x70:
    /* VK_F1 */
    iVar3 = FUN_00454ea0();
    if (((*(char *)(iVar3 + 0xe05) == '\0') &&
        (iVar3 = FUN_00454ea0(), *(char *)(iVar3 + 0xdb8) == '\0')) &&
       (iVar3 = FUN_00454ea0(), *(int *)(iVar3 + 0xd70) != 0)) {
      cStack_fe9 = '\x01';
      FUN_004d1520();
      piVar7 = (int *)FUN_004d58e0();
      iStack_1198 = *piVar7 + 0x134;
      iStack_1078 = FUN_004018d0();
      iStack_13dc = FUN_004018b0();
      for (; iStack_1078 != iStack_13dc; iStack_1078 = iStack_1078 + 0x408) {
        iStack_119c = iStack_1078;
        iVar3 = FUN_00454ea0();
        uVar4 = *(int *)(iVar3 + 0x224) - *(int *)(iStack_119c + 0x1c);
        uVar13 = (int)uVar4 >> 0x1f;
        if (((int)((uVar4 ^ uVar13) - uVar13) < 0x65) &&
           (iVar3 = FUN_00454ea0(), uVar4 = *(int *)(iVar3 + 0x228) - *(int *)(iStack_119c + 0x20),
           uVar13 = (int)uVar4 >> 0x1f, (int)((uVar4 ^ uVar13) - uVar13) < 0x65)) {
          cStack_fe9 = '\0';
          break;
        }
      }
      if (cStack_fe9 == '\0') {
        puStack_1c40 = (undefined *)0xa;
        FUN_004054a0();
        FUN_00663db0();
      }
      else {
        iVar3 = FUN_00454ea0();
        if ((*(char *)(iVar3 + 0xe07) == '\0') &&
           (iVar3 = FUN_00454ea0(), *(char *)(iVar3 + 0xe08) == '\0')) {
          ui_command_dispatch();
        }
      }
    }
    break;
  case 0x71:
    /* VK_F2 */
    pcVar5 = (char *)game_get_f2_toggle_flag();
    if (*pcVar5 == '\0') {
      puVar6 = (undefined1 *)game_get_f2_toggle_flag();
      *puVar6 = 1;
      apcStack_1c54[3] = &UNK_00773ae8;
      apcStack_1c54[2] = &UNK_00685b14;
      FUN_004054a0();
      apcStack_1c54[3] = &UNK_00685b19;
      FUN_0049d780();
    }
    else {
      puVar6 = (undefined1 *)game_get_f2_toggle_flag();
      *puVar6 = 0;
      apcStack_1c54[3] = &UNK_00773af8;
      apcStack_1c54[2] = &UNK_00685aed;
      FUN_004054a0();
      apcStack_1c54[3] = &UNK_00685af2;
      FUN_0049d780();
    }
    break;
  case 0x72:
    /* VK_F3 */
    piVar7 = (int *)FUN_004d1520();
    if ((*piVar7 != 0) && (iVar3 = FUN_00454ea0(), iVar3 != 0)) {
      puStack_1c40 = (undefined *)0x375;
      FUN_004054a0();
      FUN_006634f0();
    }
    break;
  case 0x73:
    /* VK_F4 */
    piVar7 = (int *)FUN_004d1520();
    if ((*piVar7 != 0) && (iVar3 = FUN_00454ea0(), iVar3 != 0)) {
      puStack_1c40 = (undefined *)0x375;
      FUN_004054a0();
      FUN_006634f0();
    }
    break;
  case 0x74:
    /* VK_F5 */
    piVar7 = (int *)FUN_004d1520();
    if ((*piVar7 != 0) && (iVar3 = FUN_00454ea0(), iVar3 != 0)) {
      puStack_1c40 = (undefined *)0x375;
      FUN_004054a0();
      FUN_006634f0();
    }
    break;
  case 0x75:
    /* VK_F6 */
    piVar7 = (int *)FUN_004d1520();
    if ((*piVar7 != 0) && (iVar3 = FUN_00454ea0(), iVar3 != 0)) {
      uStack_13f8 = FUN_004054a0();
      local_8._0_1_ = 0x26;
      uStack_13e0 = uStack_13f8;
      FUN_00454ea0();
      uStack_13ec = FUN_004c7c00();
      local_8._0_1_ = 0x27;
      uStack_13e4 = uStack_13ec;
      uStack_13f0 = FUN_004054a0();
      local_8._0_1_ = 0x28;
      uStack_13e8 = uStack_13f0;
      apcStack_1c54[2] = (char *)FUN_00405cf0();
      local_8._0_1_ = 0x29;
      apcStack_1c54[1] = (char *)(apcStack_1c54 + 4);
      apcStack_1c54[3] = (char *)uStack_13f8;
      apcStack_1c54[0] = &UNK_00685cd7;
      puStack_13fc = apcStack_1c54[2];
      puStack_13f4 = apcStack_1c54[2];
      FUN_00405cf0();
      apcStack_1c54[3] = &UNK_00685cdf;
      FUN_0049d780();
      local_8._0_1_ = 0x28;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_f8c);
      local_8._0_1_ = 0x27;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_f74);
      local_8._0_1_ = 0x26;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_f5c);
      local_8._0_1_ = 0;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_f44);
    }
    break;
  case 0x76:
    /* VK_F7 */
    piVar7 = (int *)FUN_004d1520();
    if ((*piVar7 != 0) && (iVar3 = FUN_00454ea0(), iVar3 != 0)) {
      _memset(auStack_214,0,0x100);
      FUN_00454ea0();
      puStack_1c40 = &UNK_00685d87;
      FUN_00414e80();
      _memset(auStack_114,0,0x100);
      FUN_00454ea0();
      puStack_1c40 = &UNK_00685dd2;
      FUN_00414e80();
      uStack_1428 = FUN_004054a0();
      local_8._0_1_ = 0x2a;
      uStack_1400 = uStack_1428;
      uStack_141c = FUN_004054a0();
      local_8._0_1_ = 0x2b;
      uStack_1404 = uStack_141c;
      uStack_1410 = FUN_004054a0();
      local_8._0_1_ = 0x2c;
      uStack_1408 = uStack_1410;
      uStack_1414 = FUN_004054a0();
      local_8._0_1_ = 0x2d;
      uStack_140c = uStack_1414;
      uStack_1420 = FUN_00405cf0();
      local_8._0_1_ = 0x2e;
      uStack_1418 = uStack_1420;
      apcStack_1c54[2] = (char *)FUN_00405cf0();
      local_8._0_1_ = 0x2f;
      apcStack_1c54[1] = (char *)(apcStack_1c54 + 4);
      apcStack_1c54[3] = (char *)uStack_1428;
      apcStack_1c54[0] = &UNK_00685ef6;
      puStack_142c = apcStack_1c54[2];
      puStack_1424 = apcStack_1c54[2];
      FUN_00405cf0();
      apcStack_1c54[3] = &UNK_00685efe;
      FUN_0049d780();
      local_8._0_1_ = 0x2e;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_f2c);
      local_8._0_1_ = 0x2d;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_fa4);
      local_8._0_1_ = 0x2c;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_f14);
      local_8._0_1_ = 0x2b;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_efc);
      local_8._0_1_ = 0x2a;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_ee4);
      local_8._0_1_ = 0;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_ecc);
    }
  }
  iVar3 = FUN_00454ea0();
  if ((((*(char *)(iVar3 + 0xdfb) == '\0') &&
       (iVar3 = FUN_00454ea0(), *(char *)(iVar3 + 0xdb8) == '\0')) &&
      (iVar3 = FUN_00454ea0(), *(char *)(iVar3 + 0xe05) == '\0')) &&
     (iVar3 = FUN_00454ea0(), 3 < *(int *)(iVar3 + 0xdd8))) {
    local_fea = '\0';
    local_11bc = FUN_006cd3d0();
    FUN_0044dff0();
    FUN_0044dfd0();
    while (cVar1 = FUN_0044dd70(), cVar1 != '\0') {
      local_1448 = FUN_0044dd50();
      if (wParam == *(WPARAM *)(local_1448 + 0x18)) {
        local_fea = '\x01';
        break;
      }
      FUN_0044dd30();
    }
    if (local_fea != '\0') {
      local_11c0 = timeGetTime();
      FUN_00454ea0();
      FUN_0044e0f0();
      while( true ) {
        FUN_00454ea0();
        FUN_0040d9a0();
        cVar1 = FUN_0040d2d0();
        if (cVar1 == '\0') break;
        iVar3 = FUN_0044de10();
        if (local_11c0 - *(int *)(iVar3 + 4) < 500) {
          FUN_0042a560();
        }
        else {
          FUN_0044de10();
          FUN_00454ea0();
          cVar1 = FUN_00466220();
          if (cVar1 == '\0') {
            local_144c = local_1038;
            FUN_00454ea0();
            puVar9 = (undefined4 *)FUN_0069f470();
            local_1038 = *puVar9;
          }
          else {
            FUN_0042a560();
          }
        }
      }
      FUN_00401880();
      FUN_00454ea0();
      FUN_0069f4c0();
      FUN_00454ea0();
      FUN_00466080();
    }
  }
LAB_0068da66:
  puStack_1c40 = (undefined *)0x68da7c;
  local_1720 = DefWindowProcA(hWnd,uMsg,wParam,lParam);
  local_8 = 0xffffffff;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_444);
  ExceptionList = local_10;
  return local_1720;
}


