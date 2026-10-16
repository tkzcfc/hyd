/* Auto-decompiled pseudo-code from game.exe / render_d3d9 */
/* NOT original source. Bucketed by evidence (strings/imports/call-graph), not raw address. */

/* ==== 0041d440  d3d9_create_texture  size=13633 ==== */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void d3d9_create_texture(int param_1,int param_2,function<void___cdecl(void)> *param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined1 *puVar8;
  CDocObjectServer *pCVar9;
  function<void___cdecl(void)> **ppfVar10;
  undefined1 auStack_2268 [12];
  undefined4 uStack_225c;
  undefined1 *puStack_2258;
  undefined *puStack_2254;
  char *pcStack_2250;
  undefined1 auStack_224c [4];
  undefined *puStack_2248;
  undefined *puStack_2244;
  function<void___cdecl(void)> *pfStack_2240;
  function<void___cdecl(void)> *pfStack_223c;
  function<void___cdecl(void)> *pfStack_2238;
  function<void___cdecl(void)> *apfStack_2234 [3];
  char *pcStack_2228;
  int *piStack_2224;
  char *pcStack_2220;
  char *pcStack_221c;
  function<void___cdecl(void)> *pfStack_2218;
  function<void___cdecl(void)> *pfStack_2214;
  undefined1 local_21d4 [4];
  undefined1 *local_21d0;
  undefined4 local_21cc;
  undefined1 *local_21c8;
  undefined4 local_21c4;
  undefined1 *local_21c0;
  undefined1 *local_21bc;
  undefined4 local_21b8;
  undefined1 *local_21b4;
  undefined4 local_21b0;
  undefined1 *local_21ac;
  undefined1 *local_21a8;
  undefined4 local_21a4;
  undefined1 *local_21a0;
  undefined4 local_219c;
  undefined1 *local_2198;
  undefined1 *local_2194;
  undefined4 local_2190;
  undefined1 *local_218c;
  undefined4 local_2188;
  undefined1 *local_2184;
  undefined1 *local_2180;
  undefined4 local_217c;
  undefined1 *local_2178;
  undefined4 local_2174;
  undefined1 *local_2170;
  undefined1 local_216c [8];
  undefined1 *local_2164;
  undefined4 local_2160;
  undefined1 *local_215c;
  undefined4 local_2158;
  undefined1 *local_2154;
  undefined1 *local_2150;
  undefined4 local_214c;
  undefined1 *local_2148;
  undefined4 local_2144;
  undefined1 *local_2140;
  undefined1 *local_213c;
  undefined4 local_2138;
  undefined1 *local_2134;
  undefined4 local_2130;
  undefined1 *local_212c;
  undefined1 *local_2128;
  undefined4 local_2124;
  undefined1 *local_2120;
  undefined4 local_211c;
  undefined1 *local_2118;
  undefined1 *local_2114;
  undefined4 local_2110;
  undefined1 *local_210c;
  undefined4 local_2108;
  undefined1 *local_2104;
  undefined1 *local_2100;
  undefined4 local_20fc;
  undefined1 *local_20f8;
  undefined4 local_20f4;
  undefined1 *local_20f0;
  function<void___cdecl(void)> **local_20ec;
  function<void___cdecl(void)> **local_20e8;
  undefined4 local_20e4;
  undefined1 *local_20e0;
  undefined1 *local_20dc;
  function<void___cdecl(void)> **local_20d8;
  function<void___cdecl(void)> **local_20d4;
  undefined4 local_20d0;
  undefined1 *local_20cc;
  undefined1 *local_20c8;
  undefined4 local_20c4;
  undefined1 *local_20c0;
  undefined1 *local_20bc;
  undefined1 *local_20b8;
  undefined4 local_20b4;
  undefined1 *local_20b0;
  undefined4 local_20ac;
  undefined1 *local_20a8;
  undefined1 local_20a4 [8];
  undefined1 *local_209c;
  undefined4 local_2098;
  undefined1 *local_2094;
  undefined4 local_2090;
  undefined1 *local_208c;
  undefined1 *local_2088;
  undefined4 local_2084;
  undefined1 *local_2080;
  undefined4 local_207c;
  undefined1 *local_2078;
  undefined1 *local_2074;
  undefined4 local_2070;
  undefined1 *local_206c;
  undefined4 local_2068;
  undefined1 *local_2064;
  undefined4 uStack_2060;
  undefined1 *puStack_205c;
  undefined1 *local_2058;
  undefined1 *local_2054;
  undefined1 *puStack_2050;
  undefined4 uStack_204c;
  undefined1 *puStack_2048;
  undefined4 uStack_2044;
  undefined1 *puStack_2040;
  undefined4 local_203c;
  undefined1 *local_2038;
  undefined4 local_2034;
  undefined1 *local_2030;
  undefined1 *local_202c;
  function<void___cdecl(void)> **ppfStack_200c;
  undefined1 *puStack_2008;
  undefined4 uStack_2004;
  undefined1 *puStack_2000;
  undefined4 uStack_1ffc;
  undefined1 *puStack_1ff8;
  undefined4 uStack_1ff4;
  undefined1 *puStack_1ff0;
  undefined1 *puStack_1fec;
  undefined1 *puStack_1fe8;
  undefined4 uStack_1fe4;
  undefined1 *puStack_1fe0;
  undefined4 uStack_1fdc;
  undefined1 *puStack_1fd8;
  undefined4 uStack_1fd4;
  undefined1 *puStack_1fd0;
  char *pcStack_1fcc;
  char *pcStack_1fc8;
  undefined4 uStack_1fc4;
  undefined1 *puStack_1fc0;
  undefined4 uStack_1fbc;
  undefined1 *puStack_1fb8;
  undefined1 *puStack_1fb4;
  undefined4 uStack_1fb0;
  undefined1 *puStack_1fac;
  undefined4 uStack_1fa8;
  undefined1 *puStack_1fa4;
  undefined4 uStack_1fa0;
  undefined1 *puStack_1f9c;
  undefined4 uStack_1f98;
  undefined1 *puStack_1f94;
  undefined4 uStack_1f90;
  undefined1 *puStack_1f8c;
  undefined1 *puStack_1f88;
  undefined4 uStack_1f84;
  undefined1 *puStack_1f80;
  undefined1 *puStack_1f7c;
  undefined1 *puStack_1f78;
  undefined4 uStack_1f74;
  undefined1 *puStack_1f70;
  undefined4 uStack_1f6c;
  undefined1 *puStack_1f68;
  undefined4 uStack_1f64;
  undefined1 *puStack_1f60;
  undefined4 uStack_1f5c;
  undefined1 *puStack_1f58;
  undefined1 *puStack_1f54;
  undefined4 uStack_1f50;
  undefined1 *puStack_1f4c;
  undefined4 uStack_1f48;
  undefined1 *puStack_1f44;
  function<void___cdecl(void)> **ppfStack_1f40;
  undefined1 *puStack_1f3c;
  undefined4 uStack_1f38;
  undefined1 *puStack_1f34;
  function<void___cdecl(void)> **ppfStack_1f30;
  function<void___cdecl(void)> **ppfStack_1f2c;
  function<void___cdecl(void)> **ppfStack_1f28;
  function<void___cdecl(void)> **ppfStack_1f24;
  function<void___cdecl(void)> **ppfStack_1f20;
  function<void___cdecl(void)> **ppfStack_1f1c;
  function<void___cdecl(void)> **ppfStack_1f18;
  function<void___cdecl(void)> **ppfStack_1f14;
  function<void___cdecl(void)> **ppfStack_1f10;
  function<void___cdecl(void)> **ppfStack_1f0c;
  undefined1 *puStack_1f08;
  undefined4 uStack_1f04;
  undefined1 *puStack_1f00;
  function<void___cdecl(void)> **ppfStack_1efc;
  function<void___cdecl(void)> **ppfStack_1ef8;
  function<void___cdecl(void)> **ppfStack_1ef4;
  function<void___cdecl(void)> **ppfStack_1ef0;
  function<void___cdecl(void)> **ppfStack_1eec;
  function<void___cdecl(void)> **ppfStack_1ee8;
  function<void___cdecl(void)> **ppfStack_1ee4;
  function<void___cdecl(void)> **ppfStack_1ee0;
  function<void___cdecl(void)> **ppfStack_1edc;
  function<void___cdecl(void)> **ppfStack_1ed8;
  undefined1 *puStack_1ed4;
  undefined4 uStack_1ed0;
  undefined1 *puStack_1ecc;
  function<void___cdecl(void)> **ppfStack_1ec8;
  function<void___cdecl(void)> **ppfStack_1ec4;
  function<void___cdecl(void)> **ppfStack_1ec0;
  function<void___cdecl(void)> **ppfStack_1ebc;
  function<void___cdecl(void)> **ppfStack_1eb8;
  function<void___cdecl(void)> **ppfStack_1eb4;
  function<void___cdecl(void)> **ppfStack_1eb0;
  function<void___cdecl(void)> **ppfStack_1eac;
  function<void___cdecl(void)> **ppfStack_1ea8;
  function<void___cdecl(void)> **ppfStack_1ea4;
  undefined1 *puStack_1ea0;
  undefined4 uStack_1e9c;
  undefined1 *puStack_1e98;
  function<void___cdecl(void)> **ppfStack_1e94;
  function<void___cdecl(void)> **ppfStack_1e90;
  function<void___cdecl(void)> **ppfStack_1e8c;
  function<void___cdecl(void)> **ppfStack_1e88;
  function<void___cdecl(void)> **ppfStack_1e84;
  function<void___cdecl(void)> **ppfStack_1e80;
  function<void___cdecl(void)> **ppfStack_1e7c;
  function<void___cdecl(void)> **ppfStack_1e78;
  function<void___cdecl(void)> **ppfStack_1e74;
  function<void___cdecl(void)> **ppfStack_1e70;
  undefined1 *puStack_1e6c;
  undefined4 uStack_1e68;
  undefined1 *puStack_1e64;
  function<void___cdecl(void)> **ppfStack_1e60;
  function<void___cdecl(void)> **ppfStack_1e5c;
  function<void___cdecl(void)> **ppfStack_1e58;
  function<void___cdecl(void)> **ppfStack_1e54;
  function<void___cdecl(void)> **ppfStack_1e50;
  function<void___cdecl(void)> **ppfStack_1e4c;
  function<void___cdecl(void)> **ppfStack_1e48;
  function<void___cdecl(void)> **ppfStack_1e44;
  function<void___cdecl(void)> **ppfStack_1e40;
  function<void___cdecl(void)> **ppfStack_1e3c;
  undefined1 *puStack_1e38;
  undefined4 uStack_1e34;
  undefined1 *puStack_1e30;
  function<void___cdecl(void)> **ppfStack_1e2c;
  function<void___cdecl(void)> **ppfStack_1e28;
  function<void___cdecl(void)> **ppfStack_1e24;
  function<void___cdecl(void)> **ppfStack_1e20;
  function<void___cdecl(void)> **ppfStack_1e1c;
  undefined1 *puStack_1e18;
  function<void___cdecl(void)> **ppfStack_1e14;
  function<void___cdecl(void)> **ppfStack_1e10;
  function<void___cdecl(void)> **ppfStack_1e0c;
  function<void___cdecl(void)> **ppfStack_1e08;
  undefined1 *puStack_1e04;
  undefined4 uStack_1e00;
  undefined1 *puStack_1dfc;
  function<void___cdecl(void)> **ppfStack_1df8;
  function<void___cdecl(void)> **ppfStack_1df4;
  function<void___cdecl(void)> **ppfStack_1df0;
  function<void___cdecl(void)> **ppfStack_1dec;
  function<void___cdecl(void)> **ppfStack_1de8;
  function<void___cdecl(void)> **ppfStack_1de4;
  function<void___cdecl(void)> **ppfStack_1de0;
  function<void___cdecl(void)> **ppfStack_1ddc;
  function<void___cdecl(void)> **ppfStack_1dd8;
  function<void___cdecl(void)> **ppfStack_1dd4;
  undefined1 *puStack_1dd0;
  undefined4 uStack_1dcc;
  undefined1 *puStack_1dc8;
  function<void___cdecl(void)> **ppfStack_1dc4;
  function<void___cdecl(void)> **ppfStack_1dc0;
  function<void___cdecl(void)> **ppfStack_1dbc;
  function<void___cdecl(void)> **ppfStack_1db8;
  function<void___cdecl(void)> **ppfStack_1db4;
  function<void___cdecl(void)> **ppfStack_1db0;
  function<void___cdecl(void)> **ppfStack_1dac;
  function<void___cdecl(void)> **ppfStack_1da8;
  function<void___cdecl(void)> **ppfStack_1da4;
  function<void___cdecl(void)> **ppfStack_1da0;
  undefined1 *puStack_1d9c;
  undefined4 uStack_1d98;
  undefined1 *puStack_1d94;
  undefined4 uStack_1d90;
  undefined1 *puStack_1d8c;
  function<void___cdecl(void)> **ppfStack_1d88;
  undefined4 uStack_1d84;
  undefined1 *puStack_1d80;
  undefined4 uStack_1d7c;
  undefined1 *puStack_1d78;
  undefined4 uStack_1d74;
  undefined1 *puStack_1d70;
  undefined4 uStack_1d6c;
  undefined1 *puStack_1d68;
  undefined4 uStack_1d64;
  undefined1 *puStack_1d60;
  function<void___cdecl(void)> **ppfStack_1d5c;
  undefined4 uStack_1d58;
  undefined1 *puStack_1d54;
  undefined4 uStack_1d50;
  undefined1 *puStack_1d4c;
  undefined4 uStack_1d48;
  undefined1 *puStack_1d44;
  undefined4 uStack_1d40;
  undefined1 *puStack_1d3c;
  undefined4 uStack_1d38;
  undefined1 *puStack_1d34;
  function<void___cdecl(void)> **ppfStack_1d30;
  undefined4 uStack_1d2c;
  undefined1 *puStack_1d28;
  undefined4 uStack_1d24;
  undefined1 *puStack_1d20;
  undefined4 uStack_1d1c;
  undefined1 *puStack_1d18;
  undefined4 uStack_1d14;
  undefined1 *puStack_1d10;
  undefined4 uStack_1d0c;
  undefined1 *puStack_1d08;
  function<void___cdecl(void)> **ppfStack_1d04;
  function<void___cdecl(void)> **ppfStack_1d00;
  undefined1 *puStack_1cfc;
  undefined4 uStack_1cf8;
  undefined1 *puStack_1cf4;
  function<void___cdecl(void)> **ppfStack_1cf0;
  function<void___cdecl(void)> **ppfStack_1cec;
  undefined1 *puStack_1ce8;
  undefined1 *local_1ce0;
  undefined1 *local_1cdc;
  undefined1 *local_1cd8;
  undefined1 local_1cd4 [40];
  function<void___cdecl(void)> *local_1cac;
  undefined4 local_1ca8;
  undefined4 local_1ca4;
  undefined4 local_1ca0;
  undefined4 local_1c9c;
  undefined4 local_1c98;
  undefined4 local_1c94;
  function<void___cdecl(void)> *local_1c84;
  undefined4 local_1c80;
  undefined4 local_1c7c;
  undefined4 local_1c78;
  int local_1c74;
  undefined4 local_1c70;
  int local_1c6c;
  int local_1c5c;
  int local_1c58;
  int local_1c54;
  int local_1c50;
  undefined4 local_1c4c;
  undefined4 local_1c48;
  undefined4 local_1c44;
  undefined4 local_1c40;
  undefined4 local_1c3c;
  undefined4 local_1c38;
  undefined4 local_1c34;
  undefined4 local_1c30;
  int local_1c2c;
  undefined4 local_1c28;
  undefined4 local_1c24;
  undefined4 local_1c20;
  undefined4 local_1c1c;
  undefined4 local_1c18;
  undefined4 local_1c14;
  undefined4 local_1c10;
  undefined4 local_1c0c;
  undefined4 local_1c08;
  undefined4 local_1c04;
  undefined4 local_1c00;
  int local_1bfc;
  undefined4 local_1bf8;
  undefined4 local_1bf4;
  undefined4 local_1bf0;
  undefined4 local_1bec;
  int local_1be8;
  undefined4 local_1be4;
  undefined4 uStack_1be0;
  undefined4 uStack_1bdc;
  undefined4 uStack_1bd8;
  undefined4 uStack_1bd4;
  int iStack_1bd0;
  undefined4 uStack_1bcc;
  undefined4 uStack_1bc8;
  undefined4 uStack_1bc4;
  int *piStack_1bc0;
  undefined4 uStack_1bbc;
  undefined4 local_1bb8;
  undefined4 local_1bb4;
  undefined4 local_1bb0;
  undefined4 local_1bac;
  undefined4 local_1ba8;
  undefined4 local_1ba4;
  undefined4 local_1ba0;
  int *local_1b9c;
  undefined4 local_1b98;
  undefined4 uStack_1b8c;
  undefined4 uStack_1b88;
  int iStack_1b84;
  undefined4 uStack_1b80;
  undefined4 uStack_1b7c;
  int *piStack_1b78;
  undefined4 uStack_1b74;
  int *piStack_1b70;
  undefined4 uStack_1b6c;
  undefined4 local_1b68;
  undefined4 local_1b64;
  undefined4 local_1b60;
  int *local_1b5c;
  undefined4 local_1b58;
  int *local_1b54;
  undefined4 local_1b50;
  undefined4 local_1b4c;
  int local_1b48;
  undefined4 local_1b44;
  undefined4 local_1b40;
  int *local_1b3c;
  undefined4 local_1b38;
  int local_1b34;
  int iStack_1b30;
  char acStack_1b2c [4];
  int *piStack_1b28;
  undefined4 uStack_1b24;
  int *piStack_1b20;
  undefined4 uStack_1b1c;
  int *piStack_1b18;
  undefined4 uStack_1b14;
  int iStack_1b10;
  int iStack_1b0c;
  int iStack_1b08;
  undefined4 uStack_1b04;
  undefined4 uStack_1b00;
  undefined4 uStack_1afc;
  undefined4 uStack_1af8;
  undefined4 uStack_1af4;
  undefined4 uStack_1af0;
  undefined4 uStack_1aec;
  undefined4 uStack_1ae8;
  undefined4 uStack_1ae4;
  undefined4 uStack_1ae0;
  undefined4 uStack_1adc;
  undefined4 uStack_1ad8;
  undefined4 uStack_1ad4;
  undefined4 uStack_1ad0;
  undefined4 uStack_1acc;
  undefined4 uStack_1ac8;
  undefined4 uStack_1ac4;
  undefined4 uStack_1ac0;
  undefined4 uStack_1abc;
  undefined4 uStack_1ab8;
  undefined4 uStack_1ab4;
  undefined4 uStack_1ab0;
  undefined4 uStack_1aac;
  undefined4 uStack_1aa8;
  undefined4 uStack_1aa4;
  undefined4 uStack_1aa0;
  undefined4 uStack_1a9c;
  undefined4 uStack_1a98;
  undefined4 uStack_1a94;
  undefined4 uStack_1a20;
  undefined4 uStack_1a1c;
  undefined4 uStack_1a18;
  undefined4 uStack_1a14;
  undefined4 uStack_1a10;
  int iStack_1a0c;
  char acStack_1a08 [4];
  undefined4 uStack_1a04;
  undefined4 uStack_1a00;
  undefined4 uStack_19fc;
  undefined4 uStack_19f8;
  undefined4 uStack_19f4;
  undefined4 uStack_19f0;
  undefined4 uStack_19ec;
  undefined4 uStack_19e8;
  undefined4 uStack_19e4;
  undefined4 uStack_19e0;
  int iStack_19dc;
  char acStack_19d8 [4];
  undefined4 uStack_19d4;
  undefined4 uStack_19d0;
  undefined4 uStack_19cc;
  undefined4 uStack_19c8;
  undefined4 uStack_19c4;
  int iStack_19c0;
  char acStack_19bc [4];
  undefined4 uStack_19b8;
  undefined4 uStack_19b4;
  undefined4 uStack_19b0;
  undefined4 uStack_19ac;
  undefined4 uStack_19a8;
  undefined4 uStack_19a4;
  undefined4 uStack_19a0;
  int iStack_199c;
  char acStack_1998 [4];
  undefined4 uStack_1994;
  undefined4 uStack_1990;
  undefined4 uStack_198c;
  undefined4 uStack_1988;
  undefined4 uStack_1984;
  undefined4 uStack_1980;
  undefined4 uStack_197c;
  undefined4 uStack_1978;
  undefined4 uStack_1974;
  undefined4 uStack_1970;
  int iStack_196c;
  undefined4 uStack_1968;
  int iStack_1964;
  int iStack_1960;
  char acStack_195c [4];
  undefined4 uStack_1958;
  undefined4 uStack_1954;
  undefined4 uStack_1950;
  undefined4 uStack_194c;
  undefined4 uStack_1948;
  int iStack_1944;
  char acStack_1940 [4];
  int *piStack_193c;
  undefined4 uStack_1938;
  undefined4 uStack_1934;
  int iStack_1930;
  char acStack_192c [4];
  int iStack_1928;
  undefined4 uStack_1924;
  undefined4 uStack_1920;
  undefined4 uStack_191c;
  int iStack_1918;
  char acStack_1914 [4];
  int iStack_1910;
  undefined4 uStack_190c;
  undefined4 uStack_1908;
  char acStack_1904 [4];
  int iStack_1900;
  char acStack_18fc [4];
  int iStack_18f8;
  undefined4 uStack_18f4;
  int *piStack_18f0;
  undefined4 uStack_18ec;
  undefined4 uStack_18e8;
  undefined4 uStack_18e4;
  undefined1 *puStack_18e0;
  undefined4 uStack_18dc;
  undefined4 uStack_18d8;
  undefined *puStack_18d4;
  undefined4 uStack_18d0;
  undefined4 uStack_18cc;
  int iStack_18c8;
  int iStack_18c4;
  char acStack_18c0 [4];
  int iStack_18bc;
  undefined4 uStack_18b8;
  int iStack_18b4;
  int iStack_18b0;
  undefined *puStack_18ac;
  undefined4 uStack_18a8;
  char acStack_18a4 [4];
  int iStack_18a0;
  char acStack_189c [4];
  int iStack_1898;
  undefined4 uStack_1894;
  undefined4 uStack_1890;
  char acStack_188c [4];
  undefined4 uStack_1888;
  undefined4 uStack_1884;
  char acStack_1880 [4];
  undefined4 uStack_187c;
  undefined4 uStack_1878;
  char acStack_1874 [4];
  undefined4 uStack_1870;
  undefined4 uStack_186c;
  char acStack_1868 [4];
  undefined4 uStack_1864;
  undefined4 uStack_1860;
  char acStack_185c [4];
  undefined4 uStack_1858;
  undefined4 uStack_1854;
  char acStack_1850 [4];
  undefined4 uStack_184c;
  undefined4 uStack_1848;
  char acStack_1844 [4];
  undefined4 uStack_1840;
  undefined4 uStack_183c;
  char acStack_1838 [4];
  undefined4 uStack_1834;
  undefined4 uStack_1830;
  char acStack_182c [4];
  undefined4 uStack_1828;
  undefined4 uStack_1824;
  undefined4 uStack_1820;
  char acStack_181c [4];
  undefined4 uStack_1818;
  undefined4 uStack_1814;
  undefined4 uStack_1810;
  undefined4 uStack_180c;
  undefined4 uStack_1808;
  undefined4 uStack_1804;
  char acStack_1800 [4];
  undefined4 uStack_17fc;
  undefined4 uStack_17f8;
  undefined4 uStack_17f4;
  undefined4 uStack_17f0;
  undefined4 uStack_17ec;
  undefined4 uStack_17e8;
  char acStack_17e4 [4];
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
  int iStack_1790;
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
  int iStack_1748;
  undefined4 local_1744;
  undefined4 local_1740;
  undefined4 local_173c;
  undefined4 local_1738;
  undefined4 local_1734;
  undefined4 local_1730;
  int *local_172c;
  undefined4 local_1728;
  int local_1724;
  int local_1720;
  undefined4 local_171c;
  undefined4 local_1718;
  int local_1714;
  undefined4 local_1710;
  int local_170c;
  undefined4 local_1708;
  int local_1704;
  undefined4 local_1700;
  int local_16fc;
  undefined4 local_16f8;
  int local_16f4;
  undefined4 local_16f0;
  undefined4 local_16ec;
  undefined4 local_16e8;
  function<void___cdecl(void)> *local_16e4;
  function<void___cdecl(void)> *local_16e0;
  function<void___cdecl(void)> *local_16dc;
  function<void___cdecl(void)> *local_16d8;
  undefined4 local_16d4;
  undefined4 local_16d0;
  int local_16cc;
  undefined4 local_16c8;
  undefined4 local_16c4;
  undefined4 local_16c0;
  function<void___cdecl(void)> *local_16bc;
  function<void___cdecl(void)> *local_16b8;
  function<void___cdecl(void)> *local_16b4;
  function<void___cdecl(void)> *local_16b0;
  undefined4 local_16ac;
  undefined4 local_16a8;
  int local_16a4;
  undefined4 local_16a0;
  undefined4 local_169c;
  undefined4 local_1698;
  function<void___cdecl(void)> *local_1694;
  function<void___cdecl(void)> *local_1690;
  function<void___cdecl(void)> *local_168c;
  function<void___cdecl(void)> *local_1688;
  undefined4 local_1684;
  undefined4 local_1680;
  int local_167c;
  undefined4 local_1678;
  int local_1674;
  undefined4 local_1670;
  int local_166c;
  undefined4 local_1668;
  int local_1664;
  undefined4 local_1660;
  int local_165c;
  undefined4 local_1658;
  int local_1654;
  undefined4 local_1650;
  int *local_164c;
  undefined4 local_1648;
  undefined4 local_1644;
  int local_1640;
  undefined4 local_163c;
  undefined4 local_1638;
  undefined4 local_1634;
  undefined4 local_1630;
  undefined4 local_162c;
  function<void___cdecl(void)> *local_1628;
  undefined4 local_1624;
  undefined4 local_1620;
  undefined4 local_161c;
  undefined4 local_1618;
  function<void___cdecl(void)> *local_1614;
  undefined1 *local_1610;
  int local_160c;
  undefined4 local_1608;
  undefined4 local_1604;
  function<void___cdecl(void)> *local_1600;
  function<void___cdecl(void)> *local_15fc;
  undefined4 local_15f8;
  undefined4 uStack_15f4;
  int local_15f0;
  undefined4 local_15ec;
  int local_15e8;
  int local_15e4;
  int *local_15e0;
  int *piStack_15dc;
  undefined4 uStack_15d8;
  int *local_15d4;
  int local_15d0;
  undefined4 local_15cc;
  undefined4 uStack_15c8;
  undefined4 uStack_15c4;
  int local_15c0;
  int iStack_15bc;
  int iStack_15b8;
  undefined4 uStack_15b4;
  int iStack_15b0;
  int iStack_15ac;
  int iStack_15a8;
  int iStack_15a4;
  undefined4 uStack_15a0;
  int *local_159c;
  undefined4 local_1598;
  undefined4 local_1594;
  undefined4 local_1590;
  undefined4 local_158c;
  int iStack_1588;
  undefined4 uStack_1584;
  undefined4 uStack_1580;
  undefined4 uStack_157c;
  undefined4 local_1578;
  undefined *local_1574;
  int *piStack_1570;
  int *piStack_156c;
  undefined4 uStack_1568;
  undefined4 uStack_1564;
  undefined4 uStack_1560;
  undefined4 uStack_155c;
  undefined4 uStack_1558;
  int iStack_1554;
  int iStack_1550;
  undefined1 local_154a;
  undefined1 local_1549;
  undefined1 local_1548;
  undefined1 local_1547;
  undefined1 local_1546;
  undefined1 local_1545;
  int iStack_1544;
  int *local_1540;
  undefined4 local_153c;
  undefined4 local_1538;
  int iStack_1534;
  int *local_1530;
  int iStack_152c;
  int *piStack_1528;
  int local_1524;
  undefined4 local_1520;
  int iStack_151c;
  char *pcStack_1518;
  char *pcStack_1514;
  uint local_1510;
  undefined4 *local_150c;
  int *local_1508;
  int *local_1504;
  uint uStack_1500;
  uint uStack_14fc;
  int iStack_14f8;
  undefined *puStack_14f4;
  int *piStack_14f0;
  int *piStack_14ec;
  char *pcStack_14e8;
  char *pcStack_14e4;
  int *local_14e0;
  uint uStack_14dc;
  int *piStack_14d8;
  int *piStack_14d4;
  int *piStack_14d0;
  int *local_14cc;
  int *local_14c8;
  int *piStack_14c4;
  int *piStack_14c0;
  int *piStack_14bc;
  int *piStack_14b8;
  int *local_14b4;
  int *piStack_14b0;
  uint local_14ac;
  uint local_14a8;
  undefined4 *local_14a4;
  int *local_14a0;
  uint local_149c;
  uint uStack_1498;
  function<void___cdecl(void)> *pfStack_1494;
  int *piStack_1490;
  undefined4 local_148c;
  uint uStack_1488;
  uint local_1484;
  int iStack_1480;
  int *piStack_147c;
  uint uStack_1478;
  int iStack_1474;
  undefined *puStack_1470;
  int local_146c;
  char local_1468;
  char cStack_1467;
  undefined1 local_1466;
  bool local_1465;
  bool local_1464;
  bool local_1463;
  bool bStack_1462;
  char cStack_1461;
  char cStack_1460;
  char cStack_145f;
  char cStack_145e;
  char local_145d;
  char local_145c;
  char local_145b;
  char local_145a;
  char local_1459;
  uint local_1458;
  undefined1 uStack_1451;
  uint uStack_1450;
  uint local_144c;
  int *piStack_1448;
  int *piStack_1444;
  int local_1440;
  uint uStack_143c;
  uint uStack_1438;
  int *piStack_1434;
  int *local_1430;
  char local_1429;
  int iStack_1428;
  undefined1 uStack_1423;
  undefined1 uStack_1422;
  char cStack_1421;
  int iStack_1420;
  int iStack_141c;
  int *local_1418;
  uint local_1414;
  int local_1410;
  int iStack_140c;
  uint uStack_1408;
  int local_1404;
  int local_1400;
  undefined4 uStack_1370;
  undefined4 uStack_136c;
  int iStack_12c8;
  int iStack_12c4;
  undefined4 uStack_12c0;
  undefined4 uStack_12bc;
  function<void___cdecl(void)> local_10d8 [24];
  function<void___cdecl(void)> local_10c0 [24];
  function<void___cdecl(void)> local_10a8 [24];
  function<void___cdecl(void)> local_1090 [24];
  function<void___cdecl(void)> local_1078 [24];
  function<void___cdecl(void)> local_1060 [24];
  function<void___cdecl(void)> local_1048 [24];
  function<void___cdecl(void)> local_1030 [24];
  function<void___cdecl(void)> local_1018 [24];
  function<void___cdecl(void)> local_1000 [24];
  function<void___cdecl(void)> local_fe8 [24];
  function<void___cdecl(void)> local_fd0 [24];
  function<void___cdecl(void)> local_fb8 [24];
  function<void___cdecl(void)> local_fa0 [24];
  function<void___cdecl(void)> local_f88 [24];
  function<void___cdecl(void)> local_f70 [24];
  function<void___cdecl(void)> local_f58 [24];
  function<void___cdecl(void)> local_f40 [24];
  function<void___cdecl(void)> local_f28 [24];
  function<void___cdecl(void)> local_f10 [24];
  function<void___cdecl(void)> local_ef8 [24];
  function<void___cdecl(void)> local_ee0 [24];
  function<void___cdecl(void)> local_ec8 [24];
  function<void___cdecl(void)> local_eb0 [24];
  function<void___cdecl(void)> afStack_e98 [24];
  function<void___cdecl(void)> afStack_e80 [24];
  function<void___cdecl(void)> afStack_e68 [24];
  function<void___cdecl(void)> afStack_e50 [24];
  function<void___cdecl(void)> afStack_e38 [24];
  function<void___cdecl(void)> afStack_e20 [24];
  function<void___cdecl(void)> afStack_e08 [24];
  function<void___cdecl(void)> afStack_df0 [24];
  function<void___cdecl(void)> afStack_dd8 [24];
  function<void___cdecl(void)> afStack_dc0 [24];
  function<void___cdecl(void)> afStack_da8 [24];
  function<void___cdecl(void)> afStack_d90 [24];
  function<void___cdecl(void)> afStack_d78 [24];
  function<void___cdecl(void)> afStack_d60 [24];
  function<void___cdecl(void)> afStack_d48 [24];
  function<void___cdecl(void)> afStack_d30 [24];
  function<void___cdecl(void)> afStack_d18 [24];
  function<void___cdecl(void)> afStack_d00 [24];
  function<void___cdecl(void)> afStack_ce8 [24];
  function<void___cdecl(void)> afStack_cd0 [24];
  function<void___cdecl(void)> afStack_cb8 [24];
  function<void___cdecl(void)> afStack_ca0 [24];
  function<void___cdecl(void)> afStack_c88 [24];
  function<void___cdecl(void)> local_c70 [24];
  function<void___cdecl(void)> afStack_c58 [24];
  function<void___cdecl(void)> afStack_c40 [24];
  function<void___cdecl(void)> afStack_c28 [24];
  function<void___cdecl(void)> afStack_c10 [24];
  function<void___cdecl(void)> afStack_bf8 [24];
  function<void___cdecl(void)> afStack_be0 [24];
  function<void___cdecl(void)> afStack_bc8 [24];
  function<void___cdecl(void)> afStack_bb0 [24];
  function<void___cdecl(void)> afStack_b98 [24];
  function<void___cdecl(void)> afStack_b80 [24];
  function<void___cdecl(void)> afStack_b68 [24];
  function<void___cdecl(void)> afStack_b50 [24];
  function<void___cdecl(void)> afStack_b38 [24];
  function<void___cdecl(void)> afStack_b20 [24];
  function<void___cdecl(void)> afStack_b08 [24];
  function<void___cdecl(void)> afStack_af0 [24];
  function<void___cdecl(void)> afStack_ad8 [144];
  function<void___cdecl(void)> local_a48 [24];
  function<void___cdecl(void)> afStack_a30 [24];
  function<void___cdecl(void)> afStack_a18 [24];
  function<void___cdecl(void)> afStack_a00 [24];
  function<void___cdecl(void)> local_9e8 [24];
  function<void___cdecl(void)> local_9d0 [24];
  function<void___cdecl(void)> afStack_9b8 [192];
  function<void___cdecl(void)> afStack_8f8 [56];
  undefined1 local_8c0;
  undefined4 local_8bc;
  undefined4 local_8b8;
  undefined1 local_8a3;
  char cStack_860;
  int iStack_85c;
  undefined4 uStack_858;
  function<void___cdecl(void)> afStack_820 [24];
  function<void___cdecl(void)> local_808 [24];
  function<void___cdecl(void)> local_7f0 [24];
  function<void___cdecl(void)> afStack_7d8 [56];
  undefined1 local_7a0;
  undefined4 local_79c;
  undefined4 local_798;
  undefined1 local_783;
  uint local_748;
  uint local_744;
  uint local_728;
  uint local_724;
  undefined4 uStack_71c;
  int iStack_718;
  undefined4 uStack_714;
  undefined4 uStack_6f8;
  function<void___cdecl(void)> local_690 [24];
  function<void___cdecl(void)> local_678 [24];
  function<void___cdecl(void)> afStack_660 [24];
  function<void___cdecl(void)> afStack_648 [48];
  undefined *puStack_618;
  undefined4 uStack_614;
  undefined *puStack_5f8;
  undefined *puStack_5f4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_5f0 [24];
  function<void___cdecl(void)> afStack_5d8 [4];
  undefined *puStack_5d4;
  int iStack_5d0;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  char acStack_58c [72];
  function<void___cdecl(void)> afStack_544 [24];
  function<void___cdecl(void)> afStack_52c [24];
  function<void___cdecl(void)> afStack_514 [512];
  function<void___cdecl(void)> local_314 [512];
  char local_114 [256];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070df0c;
  local_10 = ExceptionList;
  local_14 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  local_1410 = param_1;
  if (param_1 < 0x2711) {
    if (param_1 == 10000) {
      ExceptionList = &local_10;
      iVar2 = game_get_player_or_session_blob();
      if (3 < *(int *)(iVar2 + 0xdd8)) {
        ExceptionList = local_10;
        return;
      }
      if (DAT_007ca234 != 0) {
        FUN_00415450();
      }
      pfStack_2214 = (function<void___cdecl(void)> *)0x41deb6;
      img_path_loader_10();
      local_2054 = (undefined1 *)&piStack_2224;
      pcStack_2228 = "WINDOW_SHOW";
      apfStack_2234[2] = (function<void___cdecl(void)> *)0x41dece;
      FUN_004054a0();
      pcStack_2228 = (char *)0x41ded3;
      FUN_004c3570();
      local_2058 = (undefined1 *)&piStack_2224;
      pcStack_2228 = "SERA_SHOP";
      apfStack_2234[2] = (function<void___cdecl(void)> *)0x41deeb;
      FUN_004054a0();
      pcStack_2228 = (char *)0x41def0;
      FUN_004c3570();
      ExceptionList = local_10;
      return;
    }
    local_1410 = param_1 + -0x35c;
    switch(param_1) {
    case 0x35c:
      iStack_1748 = param_2;
      pfStack_2214 = (function<void___cdecl(void)> *)0x421c73;
      ExceptionList = &local_10;
      FUN_00405520();
      local_8 = 0x52;
      pfStack_2214 = (function<void___cdecl(void)> *)0x421c8a;
      FUN_004054a0();
      local_8._0_1_ = 0x53;
      pfStack_2214 = (function<void___cdecl(void)> *)&DAT_00741f74;
      pfStack_2218 = (function<void___cdecl(void)> *)0x421ca0;
      iStack_15a4 = FUN_004277a0();
      if (iStack_15a4 != -1) {
        FUN_00410b30();
        pfStack_2214 = (function<void___cdecl(void)> *)iStack_15a4;
        pfStack_2218 = (function<void___cdecl(void)> *)0x421ccd;
        FUN_00427800();
      }
      uStack_1500 = 0;
      break;
    default:
      return;
    case 0x366:
      iStack_1790 = param_2;
      pfStack_2214 = (function<void___cdecl(void)> *)0x4220ff;
      ExceptionList = &local_10;
      FUN_00405520();
      local_8 = 0x5a;
      pfStack_2214 = (function<void___cdecl(void)> *)0x422116;
      FUN_004054a0();
      local_8._0_1_ = 0x5b;
      pfStack_2214 = (function<void___cdecl(void)> *)&DAT_00741fa4;
      pfStack_2218 = (function<void___cdecl(void)> *)0x42212c;
      iStack_15a8 = FUN_004277a0();
      if (iStack_15a8 != -1) {
        FUN_00410b30();
        pfStack_2214 = (function<void___cdecl(void)> *)iStack_15a8;
        pfStack_2218 = (function<void___cdecl(void)> *)0x422159;
        FUN_00427800();
      }
      uStack_14fc = 0;
      do {
        uStack_1794 = 0x5e;
        pfStack_2214 = (function<void___cdecl(void)> *)0x422190;
        game_timing_or_delay_helper();
        uVar5 = FUN_00401a90();
        if (uVar5 <= uStack_14fc) {
LAB_00422508:
          pfStack_2214 = (function<void___cdecl(void)> *)DAT_007ca764;
          puVar6 = &DAT_007ca70c;
          ppfVar10 = apfStack_2234;
          for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
            *ppfVar10 = (function<void___cdecl(void)> *)*puVar6;
            puVar6 = puVar6 + 1;
            ppfVar10 = ppfVar10 + 1;
          }
          pfStack_2238 = (function<void___cdecl(void)> *)0x42252c;
          FUN_0065e180();
          local_8 = CONCAT31(local_8._1_3_,0x5a);
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_648);
          local_8 = 0xffffffff;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_52c);
          ExceptionList = local_10;
          return;
        }
        uStack_1798 = 0x5e;
        pfStack_2214 = (function<void___cdecl(void)> *)&uStack_1798;
        pfStack_2218 = (function<void___cdecl(void)> *)0x4221c5;
        game_timing_or_delay_helper();
        pfStack_2214 = (function<void___cdecl(void)> *)0x4221cc;
        piVar3 = (int *)game_get_flag_object_01a70();
        iStack_1420 = *piVar3;
        pfStack_2214 = (function<void___cdecl(void)> *)0x4221e4;
        uStack_17a0 = FUN_004054a0();
        local_8._0_1_ = 0x5c;
        pfStack_2214 = afStack_52c;
        pfStack_2218 = afStack_e08;
        pcStack_221c = (char *)0x422214;
        uStack_179c = uStack_17a0;
        uStack_17a4 = FUN_00427c80();
        pfStack_2214 = (function<void___cdecl(void)> *)(iStack_1420 + 0x1c);
        pfStack_2218 = (function<void___cdecl(void)> *)0x422233;
        cStack_145f = destroy<>();
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_e08);
        local_8._0_1_ = 0x5b;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_df0);
        if (((cStack_145f != '\0') &&
            (*(int *)(iStack_1420 + 0xb04) < *(int *)(iStack_1420 + 0xb00))) &&
           (*(int *)(iStack_1420 + 0xb00) != 1)) {
          *(int *)(iStack_1420 + 0xb04) = *(int *)(iStack_1420 + 0xb04) + 1;
          pfStack_2214 = afStack_d78;
          pfStack_2218 = (function<void___cdecl(void)> *)0x4222ca;
          uStack_17c0 = FUN_0040a850();
          local_8._0_1_ = 0x5d;
          pfStack_2214 = (function<void___cdecl(void)> *)0x4222f3;
          uStack_17a8 = uStack_17c0;
          uStack_17b4 = FUN_004054a0();
          local_8._0_1_ = 0x5e;
          pfStack_2214 = afStack_da8;
          pfStack_2218 = (function<void___cdecl(void)> *)0x422322;
          uStack_17ac = uStack_17b4;
          pfStack_2214 = (function<void___cdecl(void)> *)FUN_0040a850();
          local_8._0_1_ = 0x5f;
          pfStack_2218 = afStack_dc0;
          pcStack_221c = (char *)0x422355;
          uStack_17b8 = pfStack_2214;
          uStack_17b0 = pfStack_2214;
          pfStack_2214 = (function<void___cdecl(void)> *)FUN_00405cf0();
          local_8._0_1_ = 0x60;
          pfStack_2218 = afStack_dd8;
          pcStack_221c = (char *)0x422388;
          uStack_17c4 = pfStack_2214;
          uStack_17bc = pfStack_2214;
          uStack_17c8 = FUN_00405cf0();
          pfStack_2214 = (function<void___cdecl(void)> *)0x4223a9;
          FUN_004053e0();
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_dd8);
          local_8._0_1_ = 0x5f;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_dc0);
          local_8._0_1_ = 0x5e;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_da8);
          local_8._0_1_ = 0x5d;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_d90);
          local_8._0_1_ = 0x5b;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_d78);
          CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(iStack_1420 + 0xa3c));
          pfStack_2214 = (function<void___cdecl(void)> *)&DAT_00741fc0;
          pfStack_2218 = (function<void___cdecl(void)> *)0x422415;
          iVar2 = FUN_004277a0();
          if (iVar2 == -1) {
            uStack_17d4 = 0x5e;
            pfStack_2214 = (function<void___cdecl(void)> *)0x6;
            pfStack_2218 = (function<void___cdecl(void)> *)0x4;
            ppfStack_1d04 = apfStack_2234 + 1;
            apfStack_2234[0] = afStack_52c;
            pfStack_2238 = (function<void___cdecl(void)> *)0x4224ab;
            FUN_00405520();
            apfStack_2234[0] = (function<void___cdecl(void)> *)0x4224b0;
            pcStack_221c = (char *)FUN_006ce090();
            puStack_1d08 = (undefined1 *)apfStack_2234;
            pfStack_2238 = afStack_52c;
            pfStack_223c = (function<void___cdecl(void)> *)0x4224d7;
            uStack_17d0 = pcStack_221c;
            uStack_1d0c = FUN_00405520();
            local_8._0_1_ = 0x61;
            pfStack_2238 = (function<void___cdecl(void)> *)0x1;
            pfStack_223c = (function<void___cdecl(void)> *)&uStack_17d4;
            pfStack_2240 = (function<void___cdecl(void)> *)0x4224f4;
            pfStack_223c = (function<void___cdecl(void)> *)game_timing_or_delay_helper();
            local_8._0_1_ = 0x5b;
            pfStack_2240 = (function<void___cdecl(void)> *)0x4224fe;
            FUN_00622460();
          }
          else {
            puStack_1cfc = (undefined1 *)&pcStack_2228;
            apfStack_2234[2] = afStack_52c;
            apfStack_2234[1] = (function<void___cdecl(void)> *)0x42243e;
            FUN_00405520();
            apfStack_2234[2] = (function<void___cdecl(void)> *)0x422443;
            pfStack_2214 = (function<void___cdecl(void)> *)FUN_006ce090();
            ppfStack_1d00 = apfStack_2234 + 2;
            apfStack_2234[1] = afStack_52c;
            apfStack_2234[0] = (function<void___cdecl(void)> *)0x42246a;
            uStack_17cc = pfStack_2214;
            FUN_00405520();
            apfStack_2234[1] = (function<void___cdecl(void)> *)0x1;
            apfStack_2234[0] = (function<void___cdecl(void)> *)0x422471;
            FUN_00417730();
          }
          goto LAB_00422508;
        }
        uStack_14fc = uStack_14fc + 1;
      } while( true );
    case 0x370:
      iStack_1898 = param_2;
      iStack_15ac = *(int *)(param_2 + 0x9d0);
      if (iStack_15ac == 0) {
        return;
      }
      pfStack_1494 = *(function<void___cdecl(void)> **)(iStack_15ac + 0x9d0);
      pfStack_2214 = (function<void___cdecl(void)> *)&UNK_00423d47;
      ExceptionList = &local_10;
      FUN_00408f70();
      local_8 = 0x7a;
      acStack_189c[0] = 'P';
      acStack_189c[1] = '\0';
      acStack_189c[2] = '\0';
      acStack_189c[3] = '\0';
      puStack_1f44 = (undefined1 *)&piStack_2224;
      pcStack_2228 = &UNK_007426a4;
      apfStack_2234[2] = (function<void___cdecl(void)> *)&UNK_00423d6d;
      uStack_1f48 = FUN_004054a0();
      local_8._0_1_ = 0x7b;
      pcStack_2228 = acStack_189c;
      apfStack_2234[2] = (function<void___cdecl(void)> *)&UNK_00423d88;
      pcStack_2228 = (char *)game_timing_or_delay_helper();
      local_8._0_1_ = 0x7a;
      apfStack_2234[2] = (function<void___cdecl(void)> *)&UNK_00423d92;
      iStack_18a0 = ui_find_widget_by_key();
      if (*(int *)(param_3 + 0xacc) < *(int *)(iStack_18a0 + 0x9a0)) {
        puStack_18ac = &UNK_007426b4;
        acStack_18a4[0] = 'P';
        acStack_18a4[1] = '\0';
        acStack_18a4[2] = '\0';
        acStack_18a4[3] = '\0';
        puStack_1f4c = (undefined1 *)&piStack_2224;
        pcStack_2228 = &UNK_007426d0;
        apfStack_2234[2] = (function<void___cdecl(void)> *)&UNK_00423ddf;
        uStack_1f50 = FUN_004054a0();
        local_8._0_1_ = 0x7c;
        pcStack_2228 = acStack_18a4;
        apfStack_2234[2] = (function<void___cdecl(void)> *)&UNK_00423dfa;
        pcStack_2228 = (char *)game_timing_or_delay_helper();
        local_8 = CONCAT31(local_8._1_3_,0x7a);
        apfStack_2234[2] = (function<void___cdecl(void)> *)&UNK_00423e04;
        uStack_18a8 = ui_find_widget_by_key();
        pfStack_2214 = (function<void___cdecl(void)> *)puStack_18ac;
        pfStack_2218 = afStack_514;
        pcStack_221c = &UNK_00423e36;
        FUN_00414e80();
        pfStack_2214 = (function<void___cdecl(void)> *)0x0;
        pfStack_2218 = (function<void___cdecl(void)> *)0x0;
        pcStack_221c = (char *)0x0;
        pcStack_2220 = (char *)0xa;
        puStack_1f54 = (undefined1 *)&pfStack_2238;
        pfStack_223c = afStack_514;
        pfStack_2240 = (function<void___cdecl(void)> *)&UNK_00423e5a;
        FUN_004054a0();
        pfStack_223c = (function<void___cdecl(void)> *)&UNK_00423e5f;
        FUN_006634f0();
        local_8 = 0xffffffff;
        FUN_004039a0();
        ExceptionList = local_10;
        return;
      }
      iStack_18b0 = game_loop_helper_cd070();
      cStack_1421 = '\0';
      iStack_15b0 = iStack_18b0 + 0x18;
      iStack_14f8 = game_loop_helper_018d0();
      iStack_18b4 = game_loop_helper_018b0();
      for (; iStack_14f8 != iStack_18b4; iStack_14f8 = iStack_14f8 + 0x30) {
        iStack_15b8 = iStack_14f8;
        if (*(int *)(iStack_14f8 + 4) == *(int *)(pfStack_1494 + 4)) {
          pfStack_2214 = (function<void___cdecl(void)> *)(iStack_14f8 + 0x18);
          pfStack_2218 = (function<void___cdecl(void)> *)&UNK_00423f16;
          cVar1 = FUN_00427c60();
          if (cVar1 != '\0') {
            cStack_1421 = '\x01';
            break;
          }
        }
      }
      if (cStack_1421 == '\0') {
        FUN_0040a880();
        local_8 = CONCAT31(local_8._1_3_,0x84);
        pfStack_2214 = (function<void___cdecl(void)> *)&UNK_00424962;
        FUN_00426c50();
        uStack_18ec = 0x50;
        pfStack_2214 = (function<void___cdecl(void)> *)&UNK_0042497e;
        uStack_1568 = game_timing_or_delay_helper();
        piStack_14f0 = (int *)game_loop_helper_018d0();
        piStack_18f0 = (int *)game_loop_helper_018b0();
        for (; piStack_14f0 != piStack_18f0; piStack_14f0 = piStack_14f0 + 1) {
          piStack_156c = piStack_14f0;
          pfStack_2214 = (function<void___cdecl(void)> *)(*piStack_14f0 + 0x1c);
          pfStack_2218 = (function<void___cdecl(void)> *)&UNK_004249e7;
          cVar1 = FUN_00427c60();
          if (cVar1 != '\0') {
            uStack_5c0 = *(undefined4 *)(*piStack_156c + 0x9a0);
            break;
          }
        }
        if (puStack_5d4 == (undefined *)0x1) {
          uStack_18f4 = 0x50;
          puStack_1f8c = (undefined1 *)&pcStack_2228;
          apfStack_2234[2] = (function<void___cdecl(void)> *)&UNK_00742780;
          apfStack_2234[1] = (function<void___cdecl(void)> *)&UNK_00424a39;
          uStack_1f90 = FUN_004054a0();
          local_8._0_1_ = 0x85;
          apfStack_2234[2] = (function<void___cdecl(void)> *)&uStack_18f4;
          apfStack_2234[1] = (function<void___cdecl(void)> *)&UNK_00424a54;
          apfStack_2234[2] = (function<void___cdecl(void)> *)game_timing_or_delay_helper();
          local_8._0_1_ = 0x84;
          apfStack_2234[1] = (function<void___cdecl(void)> *)&UNK_00424a5e;
          iStack_18f8 = ui_find_widget_by_key();
          pfStack_2214 = *(function<void___cdecl(void)> **)(iStack_18f8 + 0x9a0);
          pfStack_2218 = (function<void___cdecl(void)> *)0xf;
          pcStack_221c = (char *)0x2904;
          pcStack_2220 = &UNK_00424a80;
          FUN_006a3b20();
          acStack_18fc[0] = 'P';
          acStack_18fc[1] = '\0';
          acStack_18fc[2] = '\0';
          acStack_18fc[3] = '\0';
          puStack_1f94 = (undefined1 *)&piStack_2224;
          pcStack_2228 = &UNK_00742790;
          apfStack_2234[2] = (function<void___cdecl(void)> *)&UNK_00424aa2;
          uStack_1f98 = FUN_004054a0();
          local_8._0_1_ = 0x86;
          pcStack_2228 = acStack_18fc;
          apfStack_2234[2] = (function<void___cdecl(void)> *)&UNK_00424abd;
          pcStack_2228 = (char *)game_timing_or_delay_helper();
          local_8._0_1_ = 0x84;
          apfStack_2234[2] = (function<void___cdecl(void)> *)&UNK_00424ac7;
          iStack_1900 = ui_find_widget_by_key();
          *(int *)(param_3 + 0xacc) = *(int *)(param_3 + 0xacc) - *(int *)(iStack_1900 + 0x9a0);
          *(int *)(param_3 + 0xe2c) = *(int *)(param_3 + 0xe2c) + iStack_5d0;
          pfStack_2214 = *(function<void___cdecl(void)> **)(param_3 + 0xe2c);
          pfStack_2218 = (function<void___cdecl(void)> *)0xb;
          pcStack_221c = (undefined *)0x2904;
          pcStack_2220 = &UNK_00424b20;
          FUN_006a3b20();
          acStack_1904[0] = '<';
          acStack_1904[1] = '\x0f';
          acStack_1904[2] = '\0';
          acStack_1904[3] = '\0';
          puStack_1f9c = (undefined1 *)&piStack_2224;
          pcStack_2228 = &UNK_007427a0;
          apfStack_2234[2] = (function<void___cdecl(void)> *)&UNK_00424b42;
          uStack_1fa0 = FUN_004054a0();
          local_8._0_1_ = 0x87;
          pcStack_2228 = acStack_1904;
          apfStack_2234[2] = (function<void___cdecl(void)> *)&UNK_00424b58;
          FUN_004d1bb0();
          apfStack_2234[2] = (function<void___cdecl(void)> *)&UNK_00424b5f;
          pcStack_2228 = (char *)game_timing_or_delay_helper();
          local_8._0_1_ = 0x84;
          apfStack_2234[2] = (function<void___cdecl(void)> *)&UNK_00424b69;
          uStack_1908 = ui_find_widget_by_key();
          pfStack_2214 = param_3;
          pfStack_2218 = (function<void___cdecl(void)> *)&UNK_00424b82;
          FUN_005397f0();
        }
        else if (puStack_5d4 == (undefined *)0x10) {
          uStack_190c = 0x50;
          puStack_1fa4 = (undefined1 *)&pcStack_2228;
          apfStack_2234[2] = (function<void___cdecl(void)> *)&UNK_007427b0;
          apfStack_2234[1] = (function<void___cdecl(void)> *)&UNK_00424bba;
          uStack_1fa8 = FUN_004054a0();
          local_8._0_1_ = 0x88;
          apfStack_2234[2] = (function<void___cdecl(void)> *)&uStack_190c;
          apfStack_2234[1] = (function<void___cdecl(void)> *)&UNK_00424bd5;
          apfStack_2234[2] = (function<void___cdecl(void)> *)game_timing_or_delay_helper();
          local_8._0_1_ = 0x84;
          apfStack_2234[1] = (function<void___cdecl(void)> *)&UNK_00424bdf;
          iStack_1910 = ui_find_widget_by_key();
          pfStack_2214 = *(function<void___cdecl(void)> **)(iStack_1910 + 0x9a0);
          pfStack_2218 = (function<void___cdecl(void)> *)0xf;
          pcStack_221c = (char *)0x2904;
          pcStack_2220 = &UNK_00424c01;
          FUN_006a3b20();
          acStack_1914[0] = 'P';
          acStack_1914[1] = '\0';
          acStack_1914[2] = '\0';
          acStack_1914[3] = '\0';
          puStack_1fac = (undefined1 *)&piStack_2224;
          pcStack_2228 = &UNK_007427c0;
          apfStack_2234[2] = (function<void___cdecl(void)> *)&UNK_00424c23;
          uStack_1fb0 = FUN_004054a0();
          local_8._0_1_ = 0x89;
          pcStack_2228 = acStack_1914;
          apfStack_2234[2] = (function<void___cdecl(void)> *)&UNK_00424c3e;
          pcStack_2228 = (char *)game_timing_or_delay_helper();
          local_8._0_1_ = 0x84;
          apfStack_2234[2] = (function<void___cdecl(void)> *)&UNK_00424c48;
          iStack_1918 = ui_find_widget_by_key();
          *(int *)(param_3 + 0xacc) = *(int *)(param_3 + 0xacc) - *(int *)(iStack_1918 + 0x9a0);
          FUN_00414f50();
          local_8._0_1_ = 0x8a;
          puStack_618 = puStack_5d4;
          uStack_614 = 0x1e;
          pfStack_2214 = (function<void___cdecl(void)> *)&UNK_00424c9e;
          FUN_006a52a0();
          pfStack_2214 = (function<void___cdecl(void)> *)&UNK_00424cab;
          game_missing_asset_fallback_2();
          FUN_004a1d50();
          pfStack_2214 = (function<void___cdecl(void)> *)&UNK_00424cbf;
          uStack_191c = FUN_004054a0();
          pfStack_2214 = (function<void___cdecl(void)> *)&UNK_00424cd7;
          FUN_004053e0();
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_d48);
          pfStack_2214 = (function<void___cdecl(void)> *)&UNK_00424cf8;
          FUN_00427380();
          pfStack_2214 = (function<void___cdecl(void)> *)0x14;
          pfStack_2218 = (function<void___cdecl(void)> *)&UNK_00424d03;
          pfStack_2218 = (function<void___cdecl(void)> *)FUN_004a1d50();
          pcStack_221c = (undefined *)0x1e;
          pcStack_2220 = puStack_5d4;
          piStack_2224 = (int *)0x14;
          pcStack_2228 = (char *)0x2904;
          apfStack_2234[2] = (function<void___cdecl(void)> *)&UNK_00424d19;
          FUN_006a3220();
          pfStack_2214 = (function<void___cdecl(void)> *)&UNK_00424d25;
          FUN_004ad9d0();
          pfStack_2214 = (function<void___cdecl(void)> *)0x2711;
          pfStack_2218 = (function<void___cdecl(void)> *)&UNK_00424d34;
          ui_command_dispatch();
          pfStack_2214 = (function<void___cdecl(void)> *)0x2710;
          pfStack_2218 = (function<void___cdecl(void)> *)&UNK_00424d43;
          ui_command_dispatch();
          pfStack_2214 = (function<void___cdecl(void)> *)0x271c;
          pfStack_2218 = (function<void___cdecl(void)> *)&UNK_00424d52;
          ui_command_dispatch();
          local_8._0_1_ = 0x84;
          FUN_004089b0();
        }
        else {
          pfStack_2214 = param_3;
          pfStack_2218 = afStack_d30;
          pcStack_221c = &UNK_00424d81;
          uStack_1920 = FUN_0067f440();
          pfStack_2214 = (function<void___cdecl(void)> *)&UNK_0073f5c7;
          pfStack_2218 = (function<void___cdecl(void)> *)&UNK_00424d9b;
          cStack_1460 = FUN_00427e70();
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_d30);
          if (cStack_1460 != '\0') {
            pfStack_2214 = (function<void___cdecl(void)> *)0x0;
            pfStack_2218 = (function<void___cdecl(void)> *)0x0;
            pcStack_221c = (char *)0x0;
            pcStack_2220 = (char *)0xa;
            puStack_1fb4 = (undefined1 *)&pfStack_2238;
            puStack_2244 = (undefined *)&pfStack_2238;
            pfStack_223c = pfStack_1494;
            pfStack_2240 = param_3;
            puStack_2248 = &UNK_00424de0;
            FUN_0067f440();
            pfStack_223c = (function<void___cdecl(void)> *)&UNK_00424de8;
            FUN_006634f0();
            local_8 = CONCAT31(local_8._1_3_,0x7a);
            FUN_004039a0();
            local_8 = 0xffffffff;
            FUN_004039a0();
            ExceptionList = local_10;
            return;
          }
          uStack_1924 = 0x50;
          puStack_1fb8 = (undefined1 *)&pcStack_2228;
          apfStack_2234[2] = (function<void___cdecl(void)> *)&UNK_007427d0;
          apfStack_2234[1] = (function<void___cdecl(void)> *)&UNK_00424e3a;
          uStack_1fbc = FUN_004054a0();
          local_8._0_1_ = 0x8b;
          apfStack_2234[2] = (function<void___cdecl(void)> *)&uStack_1924;
          apfStack_2234[1] = (function<void___cdecl(void)> *)&UNK_00424e55;
          apfStack_2234[2] = (function<void___cdecl(void)> *)game_timing_or_delay_helper();
          local_8._0_1_ = 0x84;
          apfStack_2234[1] = (function<void___cdecl(void)> *)&UNK_00424e5f;
          iStack_1928 = ui_find_widget_by_key();
          pfStack_2214 = *(function<void___cdecl(void)> **)(iStack_1928 + 0x9a0);
          pfStack_2218 = (function<void___cdecl(void)> *)0xf;
          pcStack_221c = (char *)0x2904;
          pcStack_2220 = &UNK_00424e81;
          FUN_006a3b20();
          acStack_192c[0] = 'P';
          acStack_192c[1] = '\0';
          acStack_192c[2] = '\0';
          acStack_192c[3] = '\0';
          puStack_1fc0 = (undefined1 *)&piStack_2224;
          pcStack_2228 = &UNK_007427e0;
          apfStack_2234[2] = (function<void___cdecl(void)> *)&UNK_00424ea3;
          uStack_1fc4 = FUN_004054a0();
          local_8._0_1_ = 0x8c;
          pcStack_2228 = acStack_192c;
          apfStack_2234[2] = (function<void___cdecl(void)> *)&UNK_00424ebe;
          pcStack_2228 = (char *)game_timing_or_delay_helper();
          local_8._0_1_ = 0x84;
          apfStack_2234[2] = (function<void___cdecl(void)> *)&UNK_00424ec8;
          iStack_1930 = ui_find_widget_by_key();
          *(int *)(param_3 + 0xacc) = *(int *)(param_3 + 0xacc) - *(int *)(iStack_1930 + 0x9a0);
          if (((((puStack_5d4 == (undefined *)0x1e) || (puStack_5d4 == (undefined *)0x1f)) ||
               (puStack_5d4 == (undefined *)0x21)) ||
              ((puStack_5d4 == (undefined *)0x22 || (puStack_5d4 == (undefined *)0x2b)))) ||
             ((puStack_5d4 == (undefined *)0x2c ||
              ((puStack_5d4 == (undefined *)0x2d || (puStack_5d4 == (undefined *)0x2e)))))) {
            puStack_1470 = (undefined *)0x0;
            if ((puStack_5d4 == (undefined *)0x1e) || (puStack_5d4 == (undefined *)0x2b)) {
              puStack_1470 = (undefined *)0x1;
            }
            else if ((puStack_5d4 == (undefined *)0x1f) || (puStack_5d4 == (undefined *)0x2c)) {
              puStack_1470 = (undefined *)0x3;
            }
            else if ((puStack_5d4 == (undefined *)0x21) || (puStack_5d4 == (undefined *)0x2d)) {
              puStack_1470 = (undefined *)0x7;
            }
            else if ((puStack_5d4 == (undefined *)0x22) || (puStack_5d4 == (undefined *)0x2e)) {
              puStack_1470 = (undefined *)0xf;
            }
            FUN_00414f50();
            local_8._0_1_ = 0x8d;
            puStack_5f8 = puStack_5d4;
            puStack_5f4 = puStack_1470;
            pfStack_2214 = (function<void___cdecl(void)> *)&UNK_00424fec;
            FUN_006a52a0();
            pfStack_2214 = (function<void___cdecl(void)> *)&UNK_00424ff9;
            game_missing_asset_fallback_2();
            FUN_004a1d50();
            pfStack_2214 = (function<void___cdecl(void)> *)&UNK_0042500d;
            uStack_1934 = FUN_004054a0();
            pfStack_2214 = (function<void___cdecl(void)> *)&UNK_00425025;
            FUN_004053e0();
            std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_d18);
            pfStack_2214 = (function<void___cdecl(void)> *)&UNK_00425046;
            FUN_00427380();
            pfStack_2214 = (function<void___cdecl(void)> *)0x14;
            pfStack_2218 = (function<void___cdecl(void)> *)&UNK_00425051;
            pfStack_2218 = (function<void___cdecl(void)> *)FUN_004a1d50();
            pcStack_221c = puStack_1470;
            pcStack_2220 = puStack_5d4;
            piStack_2224 = (int *)0x14;
            pcStack_2228 = (char *)0x2904;
            apfStack_2234[2] = (function<void___cdecl(void)> *)&UNK_0042506c;
            FUN_006a3220();
            FUN_0067b5a0();
            local_8._0_1_ = 0x84;
            FUN_004089b0();
          }
          else {
            pfStack_2214 = (function<void___cdecl(void)> *)&UNK_00425095;
            iVar2 = FUN_006c8730();
            if (iVar2 == 0x10) {
              uStack_1938 = 0x50;
              pfStack_2214 = (function<void___cdecl(void)> *)&UNK_004250bc;
              uStack_15b4 = game_timing_or_delay_helper();
              piStack_14ec = (int *)game_loop_helper_018d0();
              piStack_193c = (int *)game_loop_helper_018b0();
              for (; piStack_14ec != piStack_193c; piStack_14ec = piStack_14ec + 1) {
                piStack_1490 = piStack_14ec;
                if ((*(int *)(*piStack_14ec + 0x984) == 0x32e6) &&
                   (*(char *)(*piStack_14ec + 0x9a8) != '\0')) {
                  pfStack_2214 = (function<void___cdecl(void)> *)&UNK_007427f0;
                  pfStack_2218 = (function<void___cdecl(void)> *)&UNK_00425159;
                  iVar2 = FUN_004277a0();
                  if (iVar2 == -1) {
                    pfStack_2214 = (function<void___cdecl(void)> *)&UNK_007427f4;
                    pfStack_2218 = (function<void___cdecl(void)> *)&UNK_00425208;
                    iVar2 = FUN_004277a0();
                    if (iVar2 == -1) {
                      pfStack_2214 = (function<void___cdecl(void)> *)&UNK_007427fc;
                      pfStack_2218 = (function<void___cdecl(void)> *)&UNK_004252b4;
                      iVar2 = FUN_004277a0();
                      if (iVar2 != -1) {
                        uStack_5bc = 0;
                        acStack_58c[0] = '\0';
                        acStack_58c[1] = '\0';
                        acStack_58c[2] = '\0';
                        acStack_58c[3] = '\0';
                        acStack_58c[4] = '\0';
                        acStack_58c[5] = '\0';
                        acStack_58c[6] = '\0';
                        acStack_58c[7] = '\0';
                        acStack_58c[8] = '\0';
                        acStack_58c[9] = '\0';
                        acStack_58c[10] = '\0';
                        acStack_58c[0xb] = '\0';
                        acStack_58c[0xc] = '\0';
                        acStack_58c[0xd] = '\0';
                        acStack_58c[0xe] = '\0';
                        acStack_58c[0xf] = '\0';
                        acStack_58c[0x10] = '\0';
                        acStack_58c[0x11] = '\0';
                        acStack_58c[0x12] = '\0';
                        acStack_58c[0x13] = '\0';
                      }
                    }
                    else {
                      uStack_5bc = 0x1e;
                      pfStack_2214 = (function<void___cdecl(void)> *)&UNK_00425225;
                      FUN_006a52a0();
                      pfStack_2214 = (function<void___cdecl(void)> *)&UNK_00425232;
                      game_missing_asset_fallback_2();
                      pcStack_1518 = (char *)FUN_004a1d50();
                      pcStack_1fcc = acStack_58c;
                      pcStack_14e4 = pcStack_1fcc;
                      do {
                        cVar1 = *pcStack_1518;
                        *pcStack_14e4 = cVar1;
                        pcStack_1518 = pcStack_1518 + 1;
                        pcStack_14e4 = pcStack_14e4 + 1;
                      } while (cVar1 != '\0');
                      uStack_1423 = 0;
                    }
                  }
                  else {
                    uStack_5bc = 7;
                    pfStack_2214 = (function<void___cdecl(void)> *)&UNK_00425176;
                    FUN_006a52a0();
                    pfStack_2214 = (function<void___cdecl(void)> *)&UNK_00425183;
                    game_missing_asset_fallback_2();
                    pcStack_1514 = (char *)FUN_004a1d50();
                    pcStack_1fc8 = acStack_58c;
                    pcStack_14e8 = pcStack_1fc8;
                    do {
                      cVar1 = *pcStack_1514;
                      *pcStack_14e8 = cVar1;
                      pcStack_1514 = pcStack_1514 + 1;
                      pcStack_14e8 = pcStack_14e8 + 1;
                    } while (cVar1 != '\0');
                    uStack_1422 = 0;
                  }
                  break;
                }
              }
            }
            pfStack_2214 = afStack_5d8;
            pfStack_2218 = param_3;
            pcStack_221c = (undefined *)0x1;
            pcStack_2220 = &UNK_004252fe;
            FUN_0067f8c0();
          }
          if (puStack_5d4 == (undefined *)0x33) {
            pfStack_2214 = (function<void___cdecl(void)> *)0x2711;
            pfStack_2218 = (function<void___cdecl(void)> *)&UNK_00425316;
            ui_command_dispatch();
            pfStack_2214 = (function<void___cdecl(void)> *)0x2710;
            pfStack_2218 = (function<void___cdecl(void)> *)&UNK_00425325;
            ui_command_dispatch();
            pfStack_2214 = (function<void___cdecl(void)> *)0x271c;
            pfStack_2218 = (function<void___cdecl(void)> *)&UNK_00425334;
            ui_command_dispatch();
          }
        }
        local_8 = CONCAT31(local_8._1_3_,0x7a);
        FUN_004039a0();
      }
      else {
        uStack_18b8 = 0x50;
        puStack_1f58 = (undefined1 *)&pcStack_2228;
        apfStack_2234[2] = (function<void___cdecl(void)> *)&UNK_007426f4;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&UNK_00423f5d;
        uStack_1f5c = FUN_004054a0();
        local_8._0_1_ = 0x7d;
        apfStack_2234[2] = (function<void___cdecl(void)> *)&uStack_18b8;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&UNK_00423f78;
        apfStack_2234[2] = (function<void___cdecl(void)> *)game_timing_or_delay_helper();
        local_8._0_1_ = 0x7a;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&UNK_00423f82;
        iStack_18bc = ui_find_widget_by_key();
        pfStack_2214 = *(function<void___cdecl(void)> **)(iStack_18bc + 0x9a0);
        pfStack_2218 = (function<void___cdecl(void)> *)0xf;
        pcStack_221c = (char *)0x2904;
        pcStack_2220 = &UNK_00423fa4;
        FUN_006a3b20();
        acStack_18c0[0] = 'P';
        acStack_18c0[1] = '\0';
        acStack_18c0[2] = '\0';
        acStack_18c0[3] = '\0';
        puStack_1f60 = (undefined1 *)&piStack_2224;
        pcStack_2228 = &UNK_00742704;
        apfStack_2234[2] = (function<void___cdecl(void)> *)&UNK_00423fc6;
        uStack_1f64 = FUN_004054a0();
        local_8._0_1_ = 0x7e;
        pcStack_2228 = acStack_18c0;
        apfStack_2234[2] = (function<void___cdecl(void)> *)&UNK_00423fe1;
        pcStack_2228 = (char *)game_timing_or_delay_helper();
        local_8._0_1_ = 0x7a;
        apfStack_2234[2] = (function<void___cdecl(void)> *)&UNK_00423feb;
        iStack_18c4 = ui_find_widget_by_key();
        *(int *)(param_3 + 0xacc) = *(int *)(param_3 + 0xacc) - *(int *)(iStack_18c4 + 0x9a0);
        iStack_18c8 = 0x10;
        pfStack_2214 = (function<void___cdecl(void)> *)&UNK_00424031;
        FUN_004052c0();
        local_8 = CONCAT31(local_8._1_3_,0x7f);
        *(int *)(param_3 + 0xae4) = *(int *)(param_3 + 0xae4) + iStack_18c8;
        pfStack_2214 = *(function<void___cdecl(void)> **)(param_3 + 0xae4);
        pfStack_2218 = (function<void___cdecl(void)> *)0xd;
        pcStack_221c = (undefined *)0x2904;
        pcStack_2220 = &UNK_00424067;
        FUN_006a3b20();
        FUN_0040d540();
        pfStack_2214 = (function<void___cdecl(void)> *)&UNK_00424090;
        FUN_0040d5a0();
        uStack_18cc = 0x578;
        pfStack_2214 = (function<void___cdecl(void)> *)&UNK_004240ac;
        game_timing_or_delay_helper();
        pfStack_2214 = (function<void___cdecl(void)> *)&UNK_004240b2;
        ui_close_matching_widgets();
        uStack_143c = 0;
        while (uVar5 = FUN_004274a0(), uStack_143c < uVar5) {
          uVar5 = FUN_004274a0();
          if (uStack_143c < uVar5) {
            pfStack_2214 = (function<void___cdecl(void)> *)&UNK_0042410f;
            FUN_00405270();
            pfStack_2214 = (function<void___cdecl(void)> *)uStack_143c;
            pfStack_2218 = (function<void___cdecl(void)> *)&UNK_00424125;
            FUN_00405270();
            pfStack_2214 = (function<void___cdecl(void)> *)&UNK_0042412c;
            FUN_00426c50();
          }
          uStack_18d0 = 0x578;
          if (*(int *)(param_3 + 0xae4) < 0x48) {
            iStack_15bc = 0x54;
          }
          else {
            iStack_15bc = 0x58;
          }
          if (*(int *)(param_3 + 0xae4) < 0x48) {
            iStack_1550 = 0x33;
          }
          else {
            iStack_1550 = 0x29;
          }
          pfStack_2214 = (function<void___cdecl(void)> *)&UNK_0042418c;
          game_timing_or_delay_helper();
          pfStack_2214 = (function<void___cdecl(void)> *)((uStack_143c >> 3) * 0x20 + iStack_15bc);
          pfStack_2218 = (function<void___cdecl(void)> *)((uStack_143c % 8) * 0x20 + iStack_1550);
          pcStack_221c = (char *)0x6;
          puStack_1f68 = (undefined1 *)apfStack_2234;
          pfStack_2238 = (function<void___cdecl(void)> *)0x742714;
          pfStack_223c = (function<void___cdecl(void)> *)&UNK_004241d0;
          uStack_1f6c = FUN_004054a0();
          local_8._0_1_ = 0x80;
          puStack_1f70 = auStack_224c;
          pcStack_2250 = &UNK_00742740;
          puStack_2254 = &UNK_004241ef;
          uStack_1f74 = FUN_004054a0();
          local_8._0_1_ = 0x81;
          pcStack_2250 = (char *)0x46;
          puStack_1f78 = auStack_2268;
          FUN_004054a0(&UNK_00742754);
          local_8 = CONCAT31(local_8._1_3_,0x7f);
          puStack_18d4 = (undefined *)FUN_00661cc0(0,8);
          *(undefined4 *)(puStack_18d4 + 0xa08) = 0xff;
          *(undefined4 *)(puStack_18d4 + 0xa0c) = 1;
          pfStack_2214 = (function<void___cdecl(void)> *)&UNK_00424267;
          puStack_14f4 = puStack_18d4;
          FUN_00405270();
          pfStack_2214 = (function<void___cdecl(void)> *)puStack_14f4;
          pfStack_2218 = param_3;
          pcStack_221c = &UNK_00424278;
          FUN_006cdee0();
          *(uint *)(puStack_14f4 + 0xa10) = uStack_143c;
          uStack_143c = uStack_143c + 1;
        }
        uStack_18d8 = 0x5aa;
        uStack_18dc = 0x5aa;
        pfStack_2214 = (function<void___cdecl(void)> *)&UNK_004242b7;
        game_timing_or_delay_helper();
        FUN_00401a90();
        pfStack_2214 = (function<void___cdecl(void)> *)&uStack_18dc;
        pfStack_2218 = (function<void___cdecl(void)> *)&UNK_004242d3;
        game_timing_or_delay_helper();
        pfStack_2214 = (function<void___cdecl(void)> *)&UNK_004242da;
        piVar3 = (int *)game_get_flag_object_01a70();
        if (*(char *)(*piVar3 + 0x51) == '\0') {
          pfStack_2214 = (function<void___cdecl(void)> *)&UNK_0042430a;
          FUN_0062d970();
          pfStack_2214 = (function<void___cdecl(void)> *)0x5e6;
          pfStack_2218 = (function<void___cdecl(void)> *)&UNK_00424319;
          ui_command_dispatch();
        }
        else {
          pfStack_2214 = (function<void___cdecl(void)> *)&UNK_004242ed;
          FUN_0062d970();
          pfStack_2214 = (function<void___cdecl(void)> *)0x5dc;
          pfStack_2218 = (function<void___cdecl(void)> *)&UNK_004242fc;
          ui_command_dispatch();
        }
        uStack_1408 = 0;
        while (uVar5 = FUN_00426f70(), uStack_1408 < uVar5) {
          pfStack_2214 = (function<void___cdecl(void)> *)&UNK_0042436c;
          piVar3 = (int *)FUN_00426f40();
          iStack_1554 = *piVar3;
          pfStack_2214 = (function<void___cdecl(void)> *)&UNK_00424386;
          iStack_1474 = FUN_005aa430();
          if (iStack_1554 == 0x16) {
            if (*(int *)(param_3 + 0xae4) < 9) {
              pfStack_2214 = (function<void___cdecl(void)> *)&UNK_004243b8;
              uStack_1558 = FUN_005e9250();
              pfStack_2214 = (function<void___cdecl(void)> *)&UNK_004243d9;
              iVar2 = FUN_00426f40();
              *(undefined1 *)(iVar2 + 0x51) = 1;
              pfStack_2214 = (function<void___cdecl(void)> *)uStack_1408;
              pfStack_2218 = (function<void___cdecl(void)> *)&UNK_004243ff;
              FUN_00426f40();
              pfStack_2214 = (function<void___cdecl(void)> *)&UNK_00424409;
              FUN_004275e0();
              pfStack_2214 = (function<void___cdecl(void)> *)&UNK_00424421;
              iVar2 = FUN_00426f40();
              *(undefined4 *)(iVar2 + 0xb8) = 0;
              pfStack_2214 = (function<void___cdecl(void)> *)&UNK_00424443;
              iVar2 = FUN_00426f40();
              *(undefined4 *)(iVar2 + 0xac) = 0;
              pfStack_2214 = (function<void___cdecl(void)> *)&UNK_00424465;
              iVar2 = FUN_00426f40();
              *(undefined4 *)(iVar2 + 0xb4) = 1;
              pfStack_2214 = (function<void___cdecl(void)> *)&UNK_0042447b;
              FUN_004d1b30();
              pfStack_2214 = (function<void___cdecl(void)> *)&UNK_00424482;
              FUN_00517ee0();
            }
            else if (*(int *)(param_3 + 0xae4) == 0x18) {
              pfStack_2214 = (function<void___cdecl(void)> *)&UNK_004244a7;
              uStack_155c = FUN_005e9250();
              pfStack_2214 = (function<void___cdecl(void)> *)&UNK_004244c8;
              iVar2 = FUN_00426f40();
              *(undefined1 *)(iVar2 + 0x51) = 1;
              pfStack_2214 = (function<void___cdecl(void)> *)uStack_1408;
              pfStack_2218 = (function<void___cdecl(void)> *)&UNK_004244ee;
              FUN_00426f40();
              pfStack_2214 = (function<void___cdecl(void)> *)&UNK_004244f8;
              FUN_004275e0();
              pfStack_2214 = (function<void___cdecl(void)> *)&UNK_00424510;
              iVar2 = FUN_00426f40();
              *(undefined4 *)(iVar2 + 0xb8) = 1;
              pfStack_2214 = (function<void___cdecl(void)> *)&UNK_00424532;
              iVar2 = FUN_00426f40();
              *(undefined4 *)(iVar2 + 0xac) = 0;
              pfStack_2214 = (function<void___cdecl(void)> *)&UNK_00424554;
              iVar2 = FUN_00426f40();
              *(undefined4 *)(iVar2 + 0xb4) = 1;
              pfStack_2214 = (function<void___cdecl(void)> *)&UNK_0042456a;
              FUN_004d1b30();
              pfStack_2214 = (function<void___cdecl(void)> *)&UNK_00424571;
              FUN_00517ee0();
            }
            else if ((*(int *)(param_3 + 0xae4) < 0x28) || (0x47 < *(int *)(param_3 + 0xae4))) {
              if ((*(int *)(param_3 + 0xae4) < 0x48) || (0x77 < *(int *)(param_3 + 0xae4))) {
                if (*(int *)(param_3 + 0xae4) == 0x78) {
                  puStack_1f7c = (undefined1 *)&piStack_2224;
                  puStack_18e0 = (undefined1 *)&piStack_2224;
                  puStack_1f80 = (undefined1 *)&pfStack_223c;
                  pfStack_2240 = (function<void___cdecl(void)> *)(iStack_1474 + 0xfc);
                  puStack_2244 = &UNK_004247b2;
                  FUN_00405520();
                  pfStack_2240 = (function<void___cdecl(void)> *)puStack_18e0;
                  puStack_2244 = &UNK_004247be;
                  uStack_1f84 = FUN_004c7590();
                  local_8._0_1_ = 0x82;
                  puStack_1f88 = (undefined1 *)&pfStack_223c;
                  pfStack_2240 = (function<void___cdecl(void)> *)iStack_1474;
                  puStack_2244 = &UNK_004247e2;
                  FUN_00405520();
                  pfStack_2240 = afStack_d60;
                  local_8._0_1_ = 0x7f;
                  puStack_2244 = &UNK_004247f2;
                  uStack_18e8 = FUN_004c7af0();
                  local_8._0_1_ = 0x83;
                  pfStack_2214 = (function<void___cdecl(void)> *)&UNK_00424817;
                  uStack_18e4 = uStack_18e8;
                  iStack_1544 = FUN_005e9250();
                  local_8 = CONCAT31(local_8._1_3_,0x7f);
                  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_d60);
                  pfStack_2214 = (function<void___cdecl(void)> *)&UNK_00424848;
                  iVar2 = FUN_00426f40();
                  *(undefined1 *)(iVar2 + 0x51) = 1;
                  pfStack_2214 = (function<void___cdecl(void)> *)uStack_1408;
                  pfStack_2218 = (function<void___cdecl(void)> *)&UNK_0042486e;
                  FUN_00426f40();
                  pfStack_2214 = (function<void___cdecl(void)> *)&UNK_00424878;
                  FUN_004275e0();
                  pfStack_2214 = (function<void___cdecl(void)> *)&UNK_00424890;
                  iVar2 = FUN_00426f40();
                  *(undefined4 *)(iVar2 + 0xb8) = 0;
                  pfStack_2214 = (function<void___cdecl(void)> *)&UNK_004248b2;
                  iVar2 = FUN_00426f40();
                  *(undefined4 *)(iVar2 + 0xac) = 0;
                  pfStack_2214 = (function<void___cdecl(void)> *)&UNK_004248d4;
                  iVar2 = FUN_00426f40();
                  *(undefined4 *)(iVar2 + 0xb4) = *(undefined4 *)(iStack_1544 + 0x8c);
                  pfStack_2214 = (function<void___cdecl(void)> *)&UNK_004248f2;
                  FUN_004d1b30();
                  pfStack_2214 = (function<void___cdecl(void)> *)&UNK_004248f9;
                  FUN_00517ee0();
                }
              }
              else {
                pfStack_2214 = (function<void___cdecl(void)> *)&UNK_004246a5;
                uStack_1564 = FUN_005e9250();
                pfStack_2214 = (function<void___cdecl(void)> *)&UNK_004246c6;
                iVar2 = FUN_00426f40();
                *(undefined1 *)(iVar2 + 0x51) = 1;
                pfStack_2214 = (function<void___cdecl(void)> *)uStack_1408;
                pfStack_2218 = (function<void___cdecl(void)> *)&UNK_004246ec;
                FUN_00426f40();
                pfStack_2214 = (function<void___cdecl(void)> *)&UNK_004246f6;
                FUN_004275e0();
                pfStack_2214 = (function<void___cdecl(void)> *)&UNK_0042470e;
                iVar2 = FUN_00426f40();
                *(undefined4 *)(iVar2 + 0xb8) = 3;
                pfStack_2214 = (function<void___cdecl(void)> *)&UNK_00424730;
                iVar2 = FUN_00426f40();
                *(undefined4 *)(iVar2 + 0xac) = 0;
                pfStack_2214 = (function<void___cdecl(void)> *)&UNK_00424752;
                iVar2 = FUN_00426f40();
                *(undefined4 *)(iVar2 + 0xb4) = 1;
                pfStack_2214 = (function<void___cdecl(void)> *)&UNK_00424768;
                FUN_004d1b30();
                pfStack_2214 = (function<void___cdecl(void)> *)&UNK_0042476f;
                FUN_00517ee0();
              }
            }
            else {
              pfStack_2214 = (function<void___cdecl(void)> *)&UNK_004245a6;
              uStack_1560 = FUN_005e9250();
              pfStack_2214 = (function<void___cdecl(void)> *)&UNK_004245c7;
              iVar2 = FUN_00426f40();
              *(undefined1 *)(iVar2 + 0x51) = 1;
              pfStack_2214 = (function<void___cdecl(void)> *)uStack_1408;
              pfStack_2218 = (function<void___cdecl(void)> *)&UNK_004245ed;
              FUN_00426f40();
              pfStack_2214 = (function<void___cdecl(void)> *)&UNK_004245f7;
              FUN_004275e0();
              pfStack_2214 = (function<void___cdecl(void)> *)&UNK_0042460f;
              iVar2 = FUN_00426f40();
              *(undefined4 *)(iVar2 + 0xb8) = 2;
              pfStack_2214 = (function<void___cdecl(void)> *)&UNK_00424631;
              iVar2 = FUN_00426f40();
              *(undefined4 *)(iVar2 + 0xac) = 0;
              pfStack_2214 = (function<void___cdecl(void)> *)&UNK_00424653;
              iVar2 = FUN_00426f40();
              *(undefined4 *)(iVar2 + 0xb4) = 1;
              pfStack_2214 = (function<void___cdecl(void)> *)&UNK_00424669;
              FUN_004d1b30();
              pfStack_2214 = (function<void___cdecl(void)> *)&UNK_00424670;
              FUN_00517ee0();
            }
          }
          uStack_1408 = uStack_1408 + 1;
        }
        pfStack_2214 = (function<void___cdecl(void)> *)0x2711;
        pfStack_2218 = (function<void___cdecl(void)> *)&UNK_0042490b;
        ui_command_dispatch();
        pfStack_2214 = (function<void___cdecl(void)> *)0x2710;
        pfStack_2218 = (function<void___cdecl(void)> *)&UNK_0042491a;
        ui_command_dispatch();
        pfStack_2214 = (function<void___cdecl(void)> *)0x271c;
        pfStack_2218 = (function<void___cdecl(void)> *)&UNK_00424929;
        ui_command_dispatch();
        local_8 = CONCAT31(local_8._1_3_,0x7a);
        FUN_004052a0();
      }
      acStack_1940[0] = -0x60;
      acStack_1940[1] = '\x0f';
      acStack_1940[2] = '\0';
      acStack_1940[3] = '\0';
      puStack_1fd0 = (undefined1 *)&piStack_2224;
      pcStack_2228 = &UNK_00742804;
      apfStack_2234[2] = (function<void___cdecl(void)> *)&UNK_00425366;
      uStack_1fd4 = FUN_004054a0();
      local_8._0_1_ = 0x8e;
      pcStack_2228 = acStack_1940;
      apfStack_2234[2] = (function<void___cdecl(void)> *)&UNK_00425381;
      pcStack_2228 = (char *)game_timing_or_delay_helper();
      local_8._0_1_ = 0x7a;
      apfStack_2234[2] = (function<void___cdecl(void)> *)&UNK_0042538b;
      iStack_1944 = ui_find_widget_by_key();
      iStack_141c = iStack_1944;
      if (iStack_1944 != 0) {
        CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(iStack_1944 + 0xa3c));
        pfStack_2214 = (function<void___cdecl(void)> *)&UNK_004253cf;
        uStack_1950 = FUN_004054a0();
        local_8._0_1_ = 0x8f;
        pfStack_2214 = afStack_ce8;
        pfStack_2218 = (function<void___cdecl(void)> *)&UNK_004253fb;
        uStack_1948 = uStack_1950;
        pfStack_2214 = (function<void___cdecl(void)> *)FUN_004c7c70();
        local_8._0_1_ = 0x90;
        pfStack_2218 = afStack_d00;
        pcStack_221c = &UNK_0042542e;
        uStack_1954 = pfStack_2214;
        uStack_194c = pfStack_2214;
        uStack_1958 = FUN_00405cf0();
        pfStack_2214 = (function<void___cdecl(void)> *)&UNK_0042544f;
        FUN_004053e0();
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_d00);
        local_8._0_1_ = 0x8f;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_ce8);
        local_8._0_1_ = 0x7a;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_cd0);
      }
      acStack_195c[0] = '^';
      acStack_195c[1] = '\0';
      acStack_195c[2] = '\0';
      acStack_195c[3] = '\0';
      puStack_1fd8 = (undefined1 *)&piStack_2224;
      pcStack_2228 = &UNK_00742818;
      apfStack_2234[2] = (function<void___cdecl(void)> *)&UNK_00425498;
      uStack_1fdc = FUN_004054a0();
      local_8._0_1_ = 0x91;
      pcStack_2228 = acStack_195c;
      apfStack_2234[2] = (function<void___cdecl(void)> *)&UNK_004254b3;
      pcStack_2228 = (char *)game_timing_or_delay_helper();
      local_8._0_1_ = 0x7a;
      apfStack_2234[2] = (function<void___cdecl(void)> *)&UNK_004254bd;
      iStack_1960 = ui_find_widget_by_key();
      iStack_141c = iStack_1960;
      if (iStack_1960 != 0) {
        pfStack_2214 = (function<void___cdecl(void)> *)abStack_5f0;
        pfStack_2218 = (function<void___cdecl(void)> *)&UNK_004254f5;
        FUN_0040a850();
        local_8 = CONCAT31(local_8._1_3_,0x92);
        iStack_1964 = FUN_00410b30();
        iStack_1964 = 4 - iStack_1964;
        for (iStack_151c = 0; iStack_151c < iStack_1964; iStack_151c = iStack_151c + 1) {
          pfStack_2214 = (function<void___cdecl(void)> *)0x30;
          pfStack_2218 = afStack_cb8;
          pcStack_221c = &UNK_00425552;
          uStack_1968 = FUN_00427db0();
          pfStack_2214 = (function<void___cdecl(void)> *)&UNK_0042556d;
          FUN_004053e0();
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_cb8);
        }
        for (uStack_1498 = 0; uStack_1498 < 4; uStack_1498 = uStack_1498 + 1) {
          FUN_0040ac90();
          local_8._0_1_ = 0x93;
          FUN_0040aa90();
          local_8._0_1_ = 0x94;
          pfStack_2214 = (function<void___cdecl(void)> *)&UNK_004255d3;
          pcVar7 = std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::operator[]
                             (abStack_5f0,uStack_1498);
          cStack_1461 = *pcVar7;
          iStack_196c = cStack_1461 + -0x30;
          pfStack_2214 = (function<void___cdecl(void)> *)&UNK_004255fb;
          FUN_004053a0();
          cStack_860 = (char)iStack_196c + '\x1a';
          iStack_85c = uStack_1498 * 0xb + 0x2f;
          uStack_858 = 0x8a;
          pfStack_2214 = (function<void___cdecl(void)> *)&UNK_00425636;
          FUN_00427660();
          FUN_00414fc0();
          uStack_136c = 0;
          uStack_1370 = 1;
          pfStack_2214 = (function<void___cdecl(void)> *)&UNK_0042566d;
          FUN_00405250();
          FUN_004150a0();
          local_8._0_1_ = 0x93;
          FUN_00407a80();
          local_8 = CONCAT31(local_8._1_3_,0x92);
          FUN_00403a10();
        }
        pfStack_2214 = (function<void___cdecl(void)> *)&UNK_004256af;
        pCVar9 = (CDocObjectServer *)FUN_00427200();
        CDocObjectServer::ReleaseDocSite(pCVar9);
        pfStack_2214 = (function<void___cdecl(void)> *)&UNK_004256c7;
        uStack_1978 = FUN_004054a0();
        local_8._0_1_ = 0x95;
        pfStack_2214 = afStack_c88;
        pfStack_2218 = (function<void___cdecl(void)> *)&UNK_004256f3;
        uStack_1970 = uStack_1978;
        pfStack_2214 = (function<void___cdecl(void)> *)FUN_004c7c70();
        local_8._0_1_ = 0x96;
        pfStack_2218 = afStack_ca0;
        pcStack_221c = &UNK_00425726;
        uStack_197c = pfStack_2214;
        uStack_1974 = pfStack_2214;
        uStack_1980 = FUN_00405cf0();
        pfStack_2214 = (function<void___cdecl(void)> *)0x0;
        pfStack_2218 = (function<void___cdecl(void)> *)&UNK_00425749;
        FUN_00427200();
        pfStack_2214 = (function<void___cdecl(void)> *)&UNK_00425753;
        FUN_004053e0();
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_ca0);
        local_8._0_1_ = 0x95;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_c88);
        local_8._0_1_ = 0x92;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_8f8);
        pfStack_2214 = (function<void___cdecl(void)> *)&UNK_00425790;
        pCVar9 = (CDocObjectServer *)FUN_00427200();
        CDocObjectServer::ReleaseDocSite(pCVar9);
        pfStack_2214 = (function<void___cdecl(void)> *)&UNK_004257a8;
        uStack_198c = FUN_004054a0();
        local_8._0_1_ = 0x97;
        pfStack_2214 = afStack_c40;
        pfStack_2218 = (function<void___cdecl(void)> *)&UNK_004257d4;
        uStack_1984 = uStack_198c;
        pfStack_2214 = (function<void___cdecl(void)> *)FUN_004c7c70();
        local_8._0_1_ = 0x98;
        pfStack_2218 = afStack_c58;
        pcStack_221c = &UNK_00425807;
        uStack_1990 = pfStack_2214;
        uStack_1988 = pfStack_2214;
        uStack_1994 = FUN_00405cf0();
        pfStack_2214 = (function<void___cdecl(void)> *)0x1;
        pfStack_2218 = (function<void___cdecl(void)> *)&UNK_0042582a;
        FUN_00427200();
        pfStack_2214 = (function<void___cdecl(void)> *)&UNK_00425834;
        FUN_004053e0();
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_c58);
        local_8._0_1_ = 0x97;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_c40);
        local_8._0_1_ = 0x92;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_c28);
        local_8._0_1_ = 0x7a;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                  ((function<void___cdecl(void)> *)abStack_5f0);
      }
      acStack_1998[0] = 'P';
      acStack_1998[1] = '\0';
      acStack_1998[2] = '\0';
      acStack_1998[3] = '\0';
      puStack_1fe0 = (undefined1 *)&piStack_2224;
      pcStack_2228 = &UNK_00742870;
      apfStack_2234[2] = (function<void___cdecl(void)> *)&UNK_0042588d;
      uStack_1fe4 = FUN_004054a0();
      local_8._0_1_ = 0x99;
      pcStack_2228 = acStack_1998;
      apfStack_2234[2] = (function<void___cdecl(void)> *)&UNK_004258a8;
      pcStack_2228 = (char *)game_timing_or_delay_helper();
      local_8._0_1_ = 0x7a;
      apfStack_2234[2] = (function<void___cdecl(void)> *)&UNK_004258b2;
      iStack_199c = ui_find_widget_by_key();
      iStack_141c = iStack_199c;
      if (iStack_199c != 0) {
        pfStack_2214 = (function<void___cdecl(void)> *)&UNK_004258e7;
        pCVar9 = (CDocObjectServer *)FUN_00427200();
        CDocObjectServer::ReleaseDocSite(pCVar9);
        pfStack_2214 = (function<void___cdecl(void)> *)&UNK_004258ff;
        uStack_19a8 = FUN_004054a0();
        local_8._0_1_ = 0x9a;
        pfStack_2214 = afStack_bf8;
        pfStack_2218 = (function<void___cdecl(void)> *)&UNK_0042592b;
        uStack_19a0 = uStack_19a8;
        pfStack_2214 = (function<void___cdecl(void)> *)FUN_0040a850();
        local_8._0_1_ = 0x9b;
        pfStack_2218 = afStack_c10;
        pcStack_221c = &UNK_0042595e;
        uStack_19ac = pfStack_2214;
        uStack_19a4 = pfStack_2214;
        uStack_19b0 = FUN_00405cf0();
        pfStack_2214 = (function<void___cdecl(void)> *)0x2;
        pfStack_2218 = (function<void___cdecl(void)> *)&UNK_00425981;
        FUN_00427200();
        pfStack_2214 = (function<void___cdecl(void)> *)&UNK_0042598b;
        FUN_004053e0();
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_c10);
        local_8._0_1_ = 0x9a;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_bf8);
        local_8._0_1_ = 0x7a;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_be0);
        pfStack_2214 = param_3;
        pfStack_2218 = (function<void___cdecl(void)> *)&UNK_004259c5;
        FUN_0041cfa0();
      }
      pfStack_2214 = (function<void___cdecl(void)> *)&UNK_004259d4;
      FUN_00415690();
      uStack_19b4 = 0x38;
      uStack_19b8 = 0x38;
      pfStack_2214 = (function<void___cdecl(void)> *)&uStack_19b4;
      pfStack_2218 = (function<void___cdecl(void)> *)&UNK_00425a00;
      pfStack_2214 = (function<void___cdecl(void)> *)game_timing_or_delay_helper();
      pfStack_2218 = (function<void___cdecl(void)> *)&UNK_00425a06;
      ui_register_or_show_widget();
      pfStack_2214 = (function<void___cdecl(void)> *)&uStack_19b8;
      pfStack_2218 = (function<void___cdecl(void)> *)&UNK_00425a1b;
      pfStack_2214 = (function<void___cdecl(void)> *)game_timing_or_delay_helper();
      pfStack_2218 = (function<void___cdecl(void)> *)&UNK_00425a21;
      ui_activate_widget_pair();
      pfStack_2214 = (function<void___cdecl(void)> *)0x2ee1;
      pfStack_2218 = (function<void___cdecl(void)> *)&UNK_00425a30;
      ui_command_dispatch();
      local_8 = 0xffffffff;
      FUN_004039a0();
      ExceptionList = local_10;
      return;
    case 0x375:
      ExceptionList = &local_10;
      iVar2 = game_get_player_or_session_blob();
      if (*(int *)(iVar2 + 0xacc) < *(int *)(param_2 + 0x9a0)) {
        pfStack_2214 = (function<void___cdecl(void)> *)0x0;
        pfStack_2218 = (function<void___cdecl(void)> *)0x0;
        pcStack_221c = (char *)0x0;
        pcStack_2220 = (char *)0xa;
        puStack_1fe8 = (undefined1 *)&pfStack_2238;
        pfStack_223c = (function<void___cdecl(void)> *)&DAT_00742888;
        pfStack_2240 = (function<void___cdecl(void)> *)0x425a93;
        FUN_004054a0();
        pfStack_223c = (function<void___cdecl(void)> *)0x425a98;
        FUN_006634f0();
        ExceptionList = local_10;
        return;
      }
      iStack_1480 = 0;
      if (*(int *)(param_2 + 0x9a0) == 100) {
        iStack_1480 = 100000;
      }
      else if (*(int *)(param_2 + 0x9a0) == 0x370) {
        iStack_1480 = 1000000;
      }
      else if (*(int *)(param_2 + 0x9a0) == 8000) {
        iStack_1480 = 10000000;
      }
      game_get_player_or_session_blob();
      pfStack_2214 = (function<void___cdecl(void)> *)0x425b07;
      game_loop_helper_e9240();
      pfStack_2214 = (function<void___cdecl(void)> *)0x425b0e;
      FUN_005dbce0();
      pfStack_2214 = (function<void___cdecl(void)> *)0x425b15;
      iVar2 = FUN_00427540();
      iVar4 = game_get_player_or_session_blob();
      if (*(int *)(iVar2 + 4) < *(int *)(iVar4 + 0xac8) + iStack_1480) {
        pfStack_2214 = (function<void___cdecl(void)> *)0x0;
        pfStack_2218 = (function<void___cdecl(void)> *)0x0;
        pcStack_221c = (char *)0x0;
        pcStack_2220 = (char *)0xa;
        puStack_1fec = (undefined1 *)&pfStack_2238;
        pfStack_223c = (function<void___cdecl(void)> *)&DAT_007428a4;
        pfStack_2240 = (function<void___cdecl(void)> *)0x425b4c;
        FUN_004054a0();
        pfStack_223c = (function<void___cdecl(void)> *)0x425b51;
        FUN_006634f0();
        ExceptionList = local_10;
        return;
      }
      game_get_player_or_session_blob();
      pfStack_2214 = *(function<void___cdecl(void)> **)(param_2 + 0x9a0);
      pfStack_2218 = (function<void___cdecl(void)> *)0x1d;
      pcStack_221c = (char *)0x2904;
      pcStack_2220 = (char *)0x425b75;
      FUN_006a3b20();
      iVar2 = game_get_player_or_session_blob();
      piStack_1570 = (int *)(iVar2 + 0xacc);
      *piStack_1570 = *piStack_1570 - *(int *)(param_2 + 0x9a0);
      acStack_19bc[0] = -0x60;
      acStack_19bc[1] = '\x0f';
      acStack_19bc[2] = '\0';
      acStack_19bc[3] = '\0';
      puStack_1ff0 = (undefined1 *)&piStack_2224;
      pcStack_2228 = &DAT_007428c4;
      apfStack_2234[2] = (function<void___cdecl(void)> *)0x425bc0;
      uStack_1ff4 = FUN_004054a0();
      local_8 = 0x9c;
      pcStack_2228 = acStack_19bc;
      apfStack_2234[2] = (function<void___cdecl(void)> *)0x425bde;
      pcStack_2228 = (char *)game_timing_or_delay_helper();
      local_8 = 0xffffffff;
      apfStack_2234[2] = (function<void___cdecl(void)> *)0x425beb;
      iStack_19c0 = ui_find_widget_by_key();
      iStack_140c = iStack_19c0;
      if (iStack_19c0 != 0) {
        CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(iStack_19c0 + 0xa3c));
        pfStack_2214 = (function<void___cdecl(void)> *)0x425c2f;
        uStack_19cc = FUN_004054a0();
        local_8 = 0x9d;
        pfStack_2214 = afStack_bb0;
        pfStack_2218 = (function<void___cdecl(void)> *)0x425c5e;
        uStack_19c4 = uStack_19cc;
        pfStack_2214 = (function<void___cdecl(void)> *)FUN_004c7c70();
        local_8._0_1_ = 0x9e;
        pfStack_2218 = afStack_bc8;
        pcStack_221c = (char *)0x425c91;
        uStack_19d0 = pfStack_2214;
        uStack_19c8 = pfStack_2214;
        uStack_19d4 = FUN_00405cf0();
        pfStack_2214 = (function<void___cdecl(void)> *)0x425cb2;
        FUN_004053e0();
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_bc8);
        local_8 = CONCAT31(local_8._1_3_,0x9d);
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_bb0);
        local_8 = 0xffffffff;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_b98);
      }
      game_get_player_or_session_blob();
      pfStack_2214 = (function<void___cdecl(void)> *)(*(int *)(param_3 + 0xac8) + iStack_1480);
      pfStack_2218 = (function<void___cdecl(void)> *)0x425cfa;
      FUN_00680fb0();
      acStack_19d8[0] = '^';
      acStack_19d8[1] = '\0';
      acStack_19d8[2] = '\0';
      acStack_19d8[3] = '\0';
      puStack_1ff8 = (undefined1 *)&piStack_2224;
      pcStack_2228 = &DAT_007428d8;
      apfStack_2234[2] = (function<void___cdecl(void)> *)0x425d1c;
      uStack_1ffc = FUN_004054a0();
      local_8 = 0x9f;
      pcStack_2228 = acStack_19d8;
      apfStack_2234[2] = (function<void___cdecl(void)> *)0x425d3a;
      pcStack_2228 = (char *)game_timing_or_delay_helper();
      local_8 = 0xffffffff;
      apfStack_2234[2] = (function<void___cdecl(void)> *)0x425d47;
      iStack_19dc = ui_find_widget_by_key();
      iStack_140c = iStack_19dc;
      if (iStack_19dc != 0) {
        pfStack_2214 = (function<void___cdecl(void)> *)0x425d7c;
        pCVar9 = (CDocObjectServer *)FUN_00427200();
        CDocObjectServer::ReleaseDocSite(pCVar9);
        pfStack_2214 = (function<void___cdecl(void)> *)0x425d94;
        uStack_19e8 = FUN_004054a0();
        local_8 = 0xa0;
        pfStack_2214 = afStack_b68;
        pfStack_2218 = (function<void___cdecl(void)> *)0x425dc3;
        uStack_19e0 = uStack_19e8;
        pfStack_2214 = (function<void___cdecl(void)> *)FUN_004c7c70();
        local_8._0_1_ = 0xa1;
        pfStack_2218 = afStack_b80;
        pcStack_221c = (char *)0x425df6;
        uStack_19ec = pfStack_2214;
        uStack_19e4 = pfStack_2214;
        uStack_19f0 = FUN_00405cf0();
        pfStack_2214 = (function<void___cdecl(void)> *)0x0;
        pfStack_2218 = (function<void___cdecl(void)> *)0x425e19;
        FUN_00427200();
        pfStack_2214 = (function<void___cdecl(void)> *)0x425e23;
        FUN_004053e0();
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_b80);
        local_8 = CONCAT31(local_8._1_3_,0xa0);
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_b68);
        local_8 = 0xffffffff;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_b50);
        pfStack_2214 = (function<void___cdecl(void)> *)0x425e63;
        pCVar9 = (CDocObjectServer *)FUN_00427200();
        CDocObjectServer::ReleaseDocSite(pCVar9);
        pfStack_2214 = (function<void___cdecl(void)> *)0x425e7b;
        uStack_19fc = FUN_004054a0();
        local_8 = 0xa2;
        pfStack_2214 = afStack_b38;
        pfStack_2218 = (function<void___cdecl(void)> *)0x425eaa;
        uStack_19f4 = uStack_19fc;
        pfStack_2214 = (function<void___cdecl(void)> *)FUN_004c7c70();
        local_8._0_1_ = 0xa3;
        pfStack_2218 = afStack_7d8;
        pcStack_221c = (char *)0x425edd;
        uStack_1a00 = pfStack_2214;
        uStack_19f8 = pfStack_2214;
        uStack_1a04 = FUN_00405cf0();
        pfStack_2214 = (function<void___cdecl(void)> *)0x1;
        pfStack_2218 = (function<void___cdecl(void)> *)0x425f00;
        FUN_00427200();
        pfStack_2214 = (function<void___cdecl(void)> *)0x425f0a;
        FUN_004053e0();
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_7d8);
        local_8 = CONCAT31(local_8._1_3_,0xa2);
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_b38);
        local_8 = 0xffffffff;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_b20);
      }
      acStack_1a08[0] = 'P';
      acStack_1a08[1] = '\0';
      acStack_1a08[2] = '\0';
      acStack_1a08[3] = '\0';
      puStack_2000 = (undefined1 *)&piStack_2224;
      pcStack_2228 = &DAT_00742904;
      apfStack_2234[2] = (function<void___cdecl(void)> *)0x425f56;
      uStack_2004 = FUN_004054a0();
      local_8 = 0xa4;
      pcStack_2228 = acStack_1a08;
      apfStack_2234[2] = (function<void___cdecl(void)> *)0x425f74;
      pcStack_2228 = (char *)game_timing_or_delay_helper();
      local_8 = 0xffffffff;
      apfStack_2234[2] = (function<void___cdecl(void)> *)0x425f81;
      iStack_1a0c = ui_find_widget_by_key();
      iStack_140c = iStack_1a0c;
      if (iStack_1a0c != 0) {
        pfStack_2214 = (function<void___cdecl(void)> *)0x425fb6;
        pCVar9 = (CDocObjectServer *)FUN_00427200();
        CDocObjectServer::ReleaseDocSite(pCVar9);
        pfStack_2214 = (function<void___cdecl(void)> *)0x425fce;
        uStack_1a18 = FUN_004054a0();
        local_8 = 0xa5;
        pfStack_2214 = afStack_af0;
        pfStack_2218 = (function<void___cdecl(void)> *)0x425ffd;
        uStack_1a10 = uStack_1a18;
        pfStack_2214 = (function<void___cdecl(void)> *)FUN_0040a850();
        local_8._0_1_ = 0xa6;
        pfStack_2218 = afStack_b08;
        pcStack_221c = (char *)0x426030;
        uStack_1a1c = pfStack_2214;
        uStack_1a14 = pfStack_2214;
        uStack_1a20 = FUN_00405cf0();
        pfStack_2214 = (function<void___cdecl(void)> *)0x2;
        pfStack_2218 = (function<void___cdecl(void)> *)0x426053;
        FUN_00427200();
        pfStack_2214 = (function<void___cdecl(void)> *)0x42605d;
        FUN_004053e0();
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_b08);
        local_8 = CONCAT31(local_8._1_3_,0xa5);
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_af0);
        local_8 = 0xffffffff;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_ad8);
        pfStack_2214 = param_3;
        pfStack_2218 = (function<void___cdecl(void)> *)0x42609a;
        FUN_0041cfa0();
      }
      pfStack_2214 = (function<void___cdecl(void)> *)0x0;
      pfStack_2218 = (function<void___cdecl(void)> *)0x0;
      pcStack_221c = (char *)0x0;
      pcStack_2220 = (char *)0xa;
      puStack_2008 = (undefined1 *)&pfStack_2238;
      pfStack_223c = (function<void___cdecl(void)> *)&DAT_0074291c;
      pfStack_2240 = (function<void___cdecl(void)> *)0x4260bc;
      FUN_004054a0();
      pfStack_223c = (function<void___cdecl(void)> *)0x1;
      pfStack_2240 = (function<void___cdecl(void)> *)0x4260c3;
      FUN_00663db0();
      ExceptionList = local_10;
      return;
    }
    do {
      uStack_174c = 0x5e;
      pfStack_2214 = (function<void___cdecl(void)> *)0x421d04;
      game_timing_or_delay_helper();
      uVar5 = FUN_00401a90();
      if (uVar5 <= uStack_1500) {
LAB_00422071:
        pfStack_2214 = (function<void___cdecl(void)> *)DAT_007ca764;
        puVar6 = &DAT_007ca70c;
        ppfVar10 = apfStack_2234;
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *ppfVar10 = (function<void___cdecl(void)> *)*puVar6;
          puVar6 = puVar6 + 1;
          ppfVar10 = ppfVar10 + 1;
        }
        pfStack_2238 = (function<void___cdecl(void)> *)0x422095;
        FUN_0065e180();
        local_8 = CONCAT31(local_8._1_3_,0x52);
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_660);
        local_8 = 0xffffffff;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_544);
        ExceptionList = local_10;
        return;
      }
      uStack_1750 = 0x5e;
      pfStack_2214 = (function<void___cdecl(void)> *)&uStack_1750;
      pfStack_2218 = (function<void___cdecl(void)> *)0x421d39;
      game_timing_or_delay_helper();
      pfStack_2214 = (function<void___cdecl(void)> *)0x421d40;
      piVar3 = (int *)game_get_flag_object_01a70();
      iStack_1428 = *piVar3;
      pfStack_2214 = (function<void___cdecl(void)> *)0x421d58;
      uStack_1758 = FUN_004054a0();
      local_8._0_1_ = 0x54;
      pfStack_2214 = afStack_544;
      pfStack_2218 = afStack_e98;
      pcStack_221c = (char *)0x421d88;
      uStack_1754 = uStack_1758;
      uStack_175c = FUN_00427c80();
      pfStack_2214 = (function<void___cdecl(void)> *)(iStack_1428 + 0x1c);
      pfStack_2218 = (function<void___cdecl(void)> *)0x421da7;
      cStack_145e = destroy<>();
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_e98);
      local_8._0_1_ = 0x53;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_e80);
      if (((cStack_145e != '\0') && (1 < *(int *)(iStack_1428 + 0xb04))) &&
         (*(int *)(iStack_1428 + 0xb00) != 1)) {
        *(int *)(iStack_1428 + 0xb04) = *(int *)(iStack_1428 + 0xb04) + -1;
        pfStack_2214 = afStack_a18;
        pfStack_2218 = (function<void___cdecl(void)> *)0x421e33;
        uStack_1778 = FUN_0040a850();
        local_8._0_1_ = 0x55;
        pfStack_2214 = (function<void___cdecl(void)> *)0x421e5c;
        uStack_1760 = uStack_1778;
        uStack_176c = FUN_004054a0();
        local_8._0_1_ = 0x56;
        pfStack_2214 = afStack_e38;
        pfStack_2218 = (function<void___cdecl(void)> *)0x421e8b;
        uStack_1764 = uStack_176c;
        pfStack_2214 = (function<void___cdecl(void)> *)FUN_0040a850();
        local_8._0_1_ = 0x57;
        pfStack_2218 = afStack_e50;
        pcStack_221c = (char *)0x421ebe;
        uStack_1770 = pfStack_2214;
        uStack_1768 = pfStack_2214;
        pfStack_2214 = (function<void___cdecl(void)> *)FUN_00405cf0();
        local_8._0_1_ = 0x58;
        pfStack_2218 = afStack_e68;
        pcStack_221c = (char *)0x421ef1;
        uStack_177c = pfStack_2214;
        uStack_1774 = pfStack_2214;
        uStack_1780 = FUN_00405cf0();
        pfStack_2214 = (function<void___cdecl(void)> *)0x421f12;
        FUN_004053e0();
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_e68);
        local_8._0_1_ = 0x57;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_e50);
        local_8._0_1_ = 0x56;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_e38);
        local_8._0_1_ = 0x55;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_e20);
        local_8._0_1_ = 0x53;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_a18);
        CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(iStack_1428 + 0xa3c));
        pfStack_2214 = (function<void___cdecl(void)> *)&DAT_00741f90;
        pfStack_2218 = (function<void___cdecl(void)> *)0x421f7e;
        iVar2 = FUN_004277a0();
        if (iVar2 == -1) {
          uStack_178c = 0x5e;
          pfStack_2214 = (function<void___cdecl(void)> *)0x6;
          pfStack_2218 = (function<void___cdecl(void)> *)0x4;
          ppfStack_1cf0 = apfStack_2234 + 1;
          apfStack_2234[0] = afStack_544;
          pfStack_2238 = (function<void___cdecl(void)> *)0x422014;
          FUN_00405520();
          apfStack_2234[0] = (function<void___cdecl(void)> *)0x422019;
          pcStack_221c = (char *)FUN_006ce090();
          puStack_1cf4 = (undefined1 *)apfStack_2234;
          pfStack_2238 = afStack_544;
          pfStack_223c = (function<void___cdecl(void)> *)0x422040;
          uStack_1788 = pcStack_221c;
          uStack_1cf8 = FUN_00405520();
          local_8._0_1_ = 0x59;
          pfStack_2238 = (function<void___cdecl(void)> *)0x1;
          pfStack_223c = (function<void___cdecl(void)> *)&uStack_178c;
          pfStack_2240 = (function<void___cdecl(void)> *)0x42205d;
          pfStack_223c = (function<void___cdecl(void)> *)game_timing_or_delay_helper();
          local_8._0_1_ = 0x53;
          pfStack_2240 = (function<void___cdecl(void)> *)0x422067;
          FUN_00622460();
        }
        else {
          puStack_1ce8 = (undefined1 *)&pcStack_2228;
          apfStack_2234[2] = afStack_544;
          apfStack_2234[1] = (function<void___cdecl(void)> *)0x421fa7;
          FUN_00405520();
          apfStack_2234[2] = (function<void___cdecl(void)> *)0x421fac;
          pfStack_2214 = (function<void___cdecl(void)> *)FUN_006ce090();
          ppfStack_1cec = apfStack_2234 + 2;
          apfStack_2234[1] = afStack_544;
          apfStack_2234[0] = (function<void___cdecl(void)> *)0x421fd3;
          uStack_1784 = pfStack_2214;
          FUN_00405520();
          apfStack_2234[1] = (function<void___cdecl(void)> *)0x1;
          apfStack_2234[0] = (function<void___cdecl(void)> *)0x421fda;
          FUN_00417730();
        }
        goto LAB_00422071;
      }
      uStack_1500 = uStack_1500 + 1;
    } while( true );
  }
  if (param_1 < 0x2af9) {
    if (param_1 != 11000) {
      local_1410 = param_1 + -0x2711;
      switch(param_1) {
      case 0x2711:
        goto LAB_0041d5bd;
      default:
        return;
      case 0x271a:
        pfStack_2214 = (function<void___cdecl(void)> *)0x42257f;
        ExceptionList = &local_10;
        FUN_004192b0();
        uStack_17d8 = 0x5e;
        pfStack_2214 = (function<void___cdecl(void)> *)0x6;
        pfStack_2218 = (function<void___cdecl(void)> *)0x4;
        pcStack_221c = (char *)0x5b;
        puStack_1d10 = (undefined1 *)apfStack_2234;
        pfStack_2238 = (function<void___cdecl(void)> *)&DAT_00741fc8;
        pfStack_223c = (function<void___cdecl(void)> *)0x4225a9;
        uStack_1d14 = FUN_004054a0();
        local_8 = 0x62;
        pfStack_2238 = (function<void___cdecl(void)> *)0x0;
        pfStack_223c = (function<void___cdecl(void)> *)&uStack_17d8;
        pfStack_2240 = (function<void___cdecl(void)> *)0x4225c9;
        pfStack_223c = (function<void___cdecl(void)> *)game_timing_or_delay_helper();
        local_8 = 0xffffffff;
        pfStack_2240 = (function<void___cdecl(void)> *)0x4225d6;
        FUN_00622460();
        uStack_17dc = 0x5e;
        pfStack_2214 = (function<void___cdecl(void)> *)0x6;
        pfStack_2218 = (function<void___cdecl(void)> *)0x4;
        pcStack_221c = (char *)0x5c;
        puStack_1d18 = (undefined1 *)apfStack_2234;
        pfStack_2238 = (function<void___cdecl(void)> *)&DAT_00741fd4;
        pfStack_223c = (function<void___cdecl(void)> *)0x422600;
        uStack_1d1c = FUN_004054a0();
        local_8 = 99;
        pfStack_2238 = (function<void___cdecl(void)> *)0x0;
        pfStack_223c = (function<void___cdecl(void)> *)&uStack_17dc;
        pfStack_2240 = (function<void___cdecl(void)> *)0x422620;
        pfStack_223c = (function<void___cdecl(void)> *)game_timing_or_delay_helper();
        local_8 = 0xffffffff;
        pfStack_2240 = (function<void___cdecl(void)> *)0x42262d;
        FUN_00622460();
        uStack_17e0 = 0x5e;
        pfStack_2214 = (function<void___cdecl(void)> *)0x6;
        pfStack_2218 = (function<void___cdecl(void)> *)0x4;
        pcStack_221c = (char *)0x5d;
        puStack_1d20 = (undefined1 *)apfStack_2234;
        pfStack_2238 = (function<void___cdecl(void)> *)&DAT_00741fe0;
        pfStack_223c = (function<void___cdecl(void)> *)0x422657;
        uStack_1d24 = FUN_004054a0();
        local_8 = 100;
        pfStack_2238 = (function<void___cdecl(void)> *)0x0;
        pfStack_223c = (function<void___cdecl(void)> *)&uStack_17e0;
        pfStack_2240 = (function<void___cdecl(void)> *)0x422677;
        pfStack_223c = (function<void___cdecl(void)> *)game_timing_or_delay_helper();
        local_8 = 0xffffffff;
        pfStack_2240 = (function<void___cdecl(void)> *)0x422684;
        FUN_00622460();
        pfStack_2214 = (function<void___cdecl(void)> *)DAT_007ca764;
        puVar6 = &DAT_007ca70c;
        ppfVar10 = apfStack_2234;
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *ppfVar10 = (function<void___cdecl(void)> *)*puVar6;
          puVar6 = puVar6 + 1;
          ppfVar10 = ppfVar10 + 1;
        }
        pfStack_2238 = (function<void___cdecl(void)> *)0x4226aa;
        FUN_0065e180();
        ExceptionList = local_10;
        return;
      case 0x271b:
        pfStack_2214 = (function<void___cdecl(void)> *)0x4226b9;
        ExceptionList = &local_10;
        FUN_004192b0();
        acStack_17e4[0] = '^';
        acStack_17e4[1] = '\0';
        acStack_17e4[2] = '\0';
        acStack_17e4[3] = '\0';
        uStack_17f0 = 0x5e;
        puStack_1d28 = (undefined1 *)&piStack_2224;
        pcStack_2228 = &DAT_00741fec;
        apfStack_2234[2] = (function<void___cdecl(void)> *)0x4226e5;
        uStack_1d2c = FUN_004054a0();
        local_8 = 0x65;
        pcStack_2228 = acStack_17e4;
        apfStack_2234[2] = (function<void___cdecl(void)> *)0x422703;
        pcStack_2228 = (char *)game_timing_or_delay_helper();
        local_8 = 0xffffffff;
        apfStack_2234[2] = (function<void___cdecl(void)> *)0x422710;
        uStack_17e8 = FUN_00622340();
        pfStack_2214 = (function<void___cdecl(void)> *)0x6;
        pfStack_2218 = (function<void___cdecl(void)> *)0x4;
        ppfStack_1d30 = apfStack_2234 + 1;
        apfStack_2234[0] = (function<void___cdecl(void)> *)&DAT_00741ff8;
        pfStack_2238 = (function<void___cdecl(void)> *)0x422739;
        FUN_004054a0();
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x42273e;
        pcStack_221c = (char *)FUN_006ce090();
        puStack_1d34 = (undefined1 *)apfStack_2234;
        pfStack_2238 = (function<void___cdecl(void)> *)&DAT_00742004;
        pfStack_223c = (function<void___cdecl(void)> *)0x422763;
        uStack_17ec = pcStack_221c;
        uStack_1d38 = FUN_004054a0();
        local_8 = 0x66;
        pfStack_2238 = (function<void___cdecl(void)> *)0x1;
        pfStack_223c = (function<void___cdecl(void)> *)&uStack_17f0;
        pfStack_2240 = (function<void___cdecl(void)> *)0x422783;
        pfStack_223c = (function<void___cdecl(void)> *)game_timing_or_delay_helper();
        local_8 = 0xffffffff;
        pfStack_2240 = (function<void___cdecl(void)> *)0x422790;
        FUN_00622460();
        uStack_17f4 = 0x5e;
        pfStack_2214 = (function<void___cdecl(void)> *)0x6;
        pfStack_2218 = (function<void___cdecl(void)> *)0x4;
        pcStack_221c = (char *)0x5c;
        puStack_1d3c = (undefined1 *)apfStack_2234;
        pfStack_2238 = (function<void___cdecl(void)> *)&DAT_00742010;
        pfStack_223c = (function<void___cdecl(void)> *)0x4227ba;
        uStack_1d40 = FUN_004054a0();
        local_8 = 0x67;
        pfStack_2238 = (function<void___cdecl(void)> *)0x0;
        pfStack_223c = (function<void___cdecl(void)> *)&uStack_17f4;
        pfStack_2240 = (function<void___cdecl(void)> *)0x4227da;
        pfStack_223c = (function<void___cdecl(void)> *)game_timing_or_delay_helper();
        local_8 = 0xffffffff;
        pfStack_2240 = (function<void___cdecl(void)> *)0x4227e7;
        FUN_00622460();
        uStack_17f8 = 0x5e;
        pfStack_2214 = (function<void___cdecl(void)> *)0x6;
        pfStack_2218 = (function<void___cdecl(void)> *)0x4;
        pcStack_221c = (char *)0x5d;
        puStack_1d44 = (undefined1 *)apfStack_2234;
        pfStack_2238 = (function<void___cdecl(void)> *)&DAT_0074201c;
        pfStack_223c = (function<void___cdecl(void)> *)0x422811;
        uStack_1d48 = FUN_004054a0();
        local_8 = 0x68;
        pfStack_2238 = (function<void___cdecl(void)> *)0x0;
        pfStack_223c = (function<void___cdecl(void)> *)&uStack_17f8;
        pfStack_2240 = (function<void___cdecl(void)> *)0x422831;
        pfStack_223c = (function<void___cdecl(void)> *)game_timing_or_delay_helper();
        local_8 = 0xffffffff;
        pfStack_2240 = (function<void___cdecl(void)> *)0x42283e;
        FUN_00622460();
        pfStack_2214 = (function<void___cdecl(void)> *)DAT_007ca764;
        puVar6 = &DAT_007ca70c;
        ppfVar10 = apfStack_2234;
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *ppfVar10 = (function<void___cdecl(void)> *)*puVar6;
          puVar6 = puVar6 + 1;
          ppfVar10 = ppfVar10 + 1;
        }
        pfStack_2238 = (function<void___cdecl(void)> *)0x422864;
        FUN_0065e180();
        ExceptionList = local_10;
        return;
      case 0x271c:
        pfStack_2214 = (function<void___cdecl(void)> *)0x422873;
        ExceptionList = &local_10;
        FUN_004192b0();
        uStack_17fc = 0x5e;
        pfStack_2214 = (function<void___cdecl(void)> *)0x6;
        pfStack_2218 = (function<void___cdecl(void)> *)0x4;
        pcStack_221c = (char *)0x5b;
        puStack_1d4c = (undefined1 *)apfStack_2234;
        pfStack_2238 = (function<void___cdecl(void)> *)&DAT_00742028;
        pfStack_223c = (function<void___cdecl(void)> *)0x42289d;
        uStack_1d50 = FUN_004054a0();
        local_8 = 0x69;
        pfStack_2238 = (function<void___cdecl(void)> *)0x0;
        pfStack_223c = (function<void___cdecl(void)> *)&uStack_17fc;
        pfStack_2240 = (function<void___cdecl(void)> *)0x4228bd;
        pfStack_223c = (function<void___cdecl(void)> *)game_timing_or_delay_helper();
        local_8 = 0xffffffff;
        pfStack_2240 = (function<void___cdecl(void)> *)0x4228ca;
        FUN_00622460();
        acStack_1800[0] = '^';
        acStack_1800[1] = '\0';
        acStack_1800[2] = '\0';
        acStack_1800[3] = '\0';
        uStack_180c = 0x5e;
        puStack_1d54 = (undefined1 *)&piStack_2224;
        pcStack_2228 = &DAT_00742034;
        apfStack_2234[2] = (function<void___cdecl(void)> *)0x4228f6;
        uStack_1d58 = FUN_004054a0();
        local_8 = 0x6a;
        pcStack_2228 = acStack_1800;
        apfStack_2234[2] = (function<void___cdecl(void)> *)0x422914;
        pcStack_2228 = (char *)game_timing_or_delay_helper();
        local_8 = 0xffffffff;
        apfStack_2234[2] = (function<void___cdecl(void)> *)0x422921;
        uStack_1804 = FUN_00622340();
        pfStack_2214 = (function<void___cdecl(void)> *)0x6;
        pfStack_2218 = (function<void___cdecl(void)> *)0x4;
        ppfStack_1d5c = apfStack_2234 + 1;
        apfStack_2234[0] = (function<void___cdecl(void)> *)&DAT_00742040;
        pfStack_2238 = (function<void___cdecl(void)> *)0x42294a;
        FUN_004054a0();
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x42294f;
        pcStack_221c = (char *)FUN_006ce090();
        puStack_1d60 = (undefined1 *)apfStack_2234;
        pfStack_2238 = (function<void___cdecl(void)> *)&DAT_0074204c;
        pfStack_223c = (function<void___cdecl(void)> *)0x422974;
        uStack_1808 = pcStack_221c;
        uStack_1d64 = FUN_004054a0();
        local_8 = 0x6b;
        pfStack_2238 = (function<void___cdecl(void)> *)0x1;
        pfStack_223c = (function<void___cdecl(void)> *)&uStack_180c;
        pfStack_2240 = (function<void___cdecl(void)> *)0x422994;
        pfStack_223c = (function<void___cdecl(void)> *)game_timing_or_delay_helper();
        local_8 = 0xffffffff;
        pfStack_2240 = (function<void___cdecl(void)> *)0x4229a1;
        FUN_00622460();
        uStack_1810 = 0x5e;
        pfStack_2214 = (function<void___cdecl(void)> *)0x6;
        pfStack_2218 = (function<void___cdecl(void)> *)0x4;
        pcStack_221c = (char *)0x5d;
        puStack_1d68 = (undefined1 *)apfStack_2234;
        pfStack_2238 = (function<void___cdecl(void)> *)&DAT_00742058;
        pfStack_223c = (function<void___cdecl(void)> *)0x4229cb;
        uStack_1d6c = FUN_004054a0();
        local_8 = 0x6c;
        pfStack_2238 = (function<void___cdecl(void)> *)0x0;
        pfStack_223c = (function<void___cdecl(void)> *)&uStack_1810;
        pfStack_2240 = (function<void___cdecl(void)> *)0x4229eb;
        pfStack_223c = (function<void___cdecl(void)> *)game_timing_or_delay_helper();
        local_8 = 0xffffffff;
        pfStack_2240 = (function<void___cdecl(void)> *)0x4229f8;
        FUN_00622460();
        pfStack_2214 = (function<void___cdecl(void)> *)DAT_007ca764;
        puVar6 = &DAT_007ca70c;
        ppfVar10 = apfStack_2234;
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *ppfVar10 = (function<void___cdecl(void)> *)*puVar6;
          puVar6 = puVar6 + 1;
          ppfVar10 = ppfVar10 + 1;
        }
        pfStack_2238 = (function<void___cdecl(void)> *)0x422a1f;
        FUN_0065e180();
        ExceptionList = local_10;
        return;
      case 0x271d:
        pfStack_2214 = (function<void___cdecl(void)> *)0x422a2e;
        ExceptionList = &local_10;
        FUN_004192b0();
        uStack_1814 = 0x5e;
        pfStack_2214 = (function<void___cdecl(void)> *)0x6;
        pfStack_2218 = (function<void___cdecl(void)> *)0x4;
        pcStack_221c = (char *)0x5b;
        puStack_1d70 = (undefined1 *)apfStack_2234;
        pfStack_2238 = (function<void___cdecl(void)> *)&DAT_00742064;
        pfStack_223c = (function<void___cdecl(void)> *)0x422a58;
        uStack_1d74 = FUN_004054a0();
        local_8 = 0x6d;
        pfStack_2238 = (function<void___cdecl(void)> *)0x0;
        pfStack_223c = (function<void___cdecl(void)> *)&uStack_1814;
        pfStack_2240 = (function<void___cdecl(void)> *)0x422a78;
        pfStack_223c = (function<void___cdecl(void)> *)game_timing_or_delay_helper();
        local_8 = 0xffffffff;
        pfStack_2240 = (function<void___cdecl(void)> *)0x422a85;
        FUN_00622460();
        uStack_1818 = 0x5e;
        pfStack_2214 = (function<void___cdecl(void)> *)0x6;
        pfStack_2218 = (function<void___cdecl(void)> *)0x4;
        pcStack_221c = (char *)0x5c;
        puStack_1d78 = (undefined1 *)apfStack_2234;
        pfStack_2238 = (function<void___cdecl(void)> *)&DAT_00742070;
        pfStack_223c = (function<void___cdecl(void)> *)0x422aaf;
        uStack_1d7c = FUN_004054a0();
        local_8 = 0x6e;
        pfStack_2238 = (function<void___cdecl(void)> *)0x0;
        pfStack_223c = (function<void___cdecl(void)> *)&uStack_1818;
        pfStack_2240 = (function<void___cdecl(void)> *)0x422acf;
        pfStack_223c = (function<void___cdecl(void)> *)game_timing_or_delay_helper();
        local_8 = 0xffffffff;
        pfStack_2240 = (function<void___cdecl(void)> *)0x422adc;
        FUN_00622460();
        acStack_181c[0] = '^';
        acStack_181c[1] = '\0';
        acStack_181c[2] = '\0';
        acStack_181c[3] = '\0';
        uStack_1828 = 0x5e;
        puStack_1d80 = (undefined1 *)&piStack_2224;
        pcStack_2228 = &DAT_0074207c;
        apfStack_2234[2] = (function<void___cdecl(void)> *)0x422b08;
        uStack_1d84 = FUN_004054a0();
        local_8 = 0x6f;
        pcStack_2228 = acStack_181c;
        apfStack_2234[2] = (function<void___cdecl(void)> *)0x422b26;
        pcStack_2228 = (char *)game_timing_or_delay_helper();
        local_8 = 0xffffffff;
        apfStack_2234[2] = (function<void___cdecl(void)> *)0x422b33;
        uStack_1820 = FUN_00622340();
        pfStack_2214 = (function<void___cdecl(void)> *)0x6;
        pfStack_2218 = (function<void___cdecl(void)> *)0x4;
        ppfStack_1d88 = apfStack_2234 + 1;
        apfStack_2234[0] = (function<void___cdecl(void)> *)&DAT_00742088;
        pfStack_2238 = (function<void___cdecl(void)> *)0x422b5c;
        FUN_004054a0();
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x422b61;
        pcStack_221c = (char *)FUN_006ce090();
        puStack_1d8c = (undefined1 *)apfStack_2234;
        pfStack_2238 = (function<void___cdecl(void)> *)&DAT_00742094;
        pfStack_223c = (function<void___cdecl(void)> *)0x422b86;
        uStack_1824 = pcStack_221c;
        uStack_1d90 = FUN_004054a0();
        local_8 = 0x70;
        pfStack_2238 = (function<void___cdecl(void)> *)0x1;
        pfStack_223c = (function<void___cdecl(void)> *)&uStack_1828;
        pfStack_2240 = (function<void___cdecl(void)> *)0x422ba6;
        pfStack_223c = (function<void___cdecl(void)> *)game_timing_or_delay_helper();
        local_8 = 0xffffffff;
        pfStack_2240 = (function<void___cdecl(void)> *)0x422bb3;
        FUN_00622460();
        pfStack_2214 = (function<void___cdecl(void)> *)DAT_007ca764;
        puVar6 = &DAT_007ca70c;
        ppfVar10 = apfStack_2234;
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *ppfVar10 = (function<void___cdecl(void)> *)*puVar6;
          puVar6 = puVar6 + 1;
          ppfVar10 = ppfVar10 + 1;
        }
        pfStack_2238 = (function<void___cdecl(void)> *)0x422bd9;
        FUN_0065e180();
        ExceptionList = local_10;
        return;
      case 0x271e:
        ExceptionList = &local_10;
        pcVar7 = (char *)game_get_modal_block_flag();
        if (*pcVar7 != '\0') {
          puVar8 = (undefined1 *)game_get_modal_block_flag();
          *puVar8 = 0;
          ExceptionList = local_10;
          return;
        }
        puVar8 = (undefined1 *)game_get_modal_block_flag();
        *puVar8 = 1;
        ExceptionList = local_10;
        return;
      case 0x2774:
        acStack_182c[0] = '^';
        acStack_182c[1] = '\0';
        acStack_182c[2] = '\0';
        acStack_182c[3] = '\0';
        puStack_1d94 = (undefined1 *)&piStack_2224;
        pcStack_2228 = &DAT_007420a0;
        apfStack_2234[2] = (function<void___cdecl(void)> *)0x422c00;
        ExceptionList = &local_10;
        uStack_1d98 = FUN_004054a0();
        local_8 = 0x71;
        pcStack_2228 = acStack_182c;
        apfStack_2234[2] = (function<void___cdecl(void)> *)0x422c1e;
        pcStack_2228 = (char *)game_timing_or_delay_helper();
        local_8 = 0xffffffff;
        apfStack_2234[2] = (function<void___cdecl(void)> *)0x422c2b;
        uStack_1830 = FUN_00622340();
        puStack_1d9c = (undefined1 *)&pcStack_2228;
        apfStack_2234[2] = (function<void___cdecl(void)> *)&DAT_007420b0;
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x422c50;
        FUN_004054a0();
        apfStack_2234[2] = (function<void___cdecl(void)> *)0x422c55;
        pfStack_2214 = (function<void___cdecl(void)> *)FUN_006ce090();
        ppfStack_1da0 = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_007420c0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x422c7a;
        uStack_1834 = pfStack_2214;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x1;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x422c81;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x52;
        ppfStack_1da4 = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_007420d0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x422c9d;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x422ca4;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x53;
        ppfStack_1da8 = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_007420e0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x422cc0;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x422cc7;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x54;
        ppfStack_1dac = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_007420f0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x422ce3;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x422cea;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x55;
        ppfStack_1db0 = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_00742100;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x422d06;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x422d0d;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x56;
        ppfStack_1db4 = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_00742110;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x422d29;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x422d30;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x57;
        ppfStack_1db8 = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_00742120;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x422d4c;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x422d53;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x58;
        ppfStack_1dbc = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_00742130;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x422d6f;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x422d76;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x59;
        ppfStack_1dc0 = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_0074213c;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x422d92;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x422d99;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)DAT_007ca764;
        puVar6 = &DAT_007ca70c;
        ppfVar10 = apfStack_2234;
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *ppfVar10 = (function<void___cdecl(void)> *)*puVar6;
          puVar6 = puVar6 + 1;
          ppfVar10 = ppfVar10 + 1;
        }
        pfStack_2238 = (function<void___cdecl(void)> *)0x422dbf;
        FUN_0065e180();
        ExceptionList = local_10;
        return;
      case 0x2775:
        pfStack_2214 = (function<void___cdecl(void)> *)0x51;
        ppfStack_1dc4 = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_0074214c;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x422de0;
        ExceptionList = &local_10;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x422de7;
        FUN_00417730();
        acStack_1838[0] = '^';
        acStack_1838[1] = '\0';
        acStack_1838[2] = '\0';
        acStack_1838[3] = '\0';
        puStack_1dc8 = (undefined1 *)&piStack_2224;
        pcStack_2228 = &DAT_0074215c;
        apfStack_2234[2] = (function<void___cdecl(void)> *)0x422e09;
        uStack_1dcc = FUN_004054a0();
        local_8 = 0x72;
        pcStack_2228 = acStack_1838;
        apfStack_2234[2] = (function<void___cdecl(void)> *)0x422e27;
        pcStack_2228 = (char *)game_timing_or_delay_helper();
        local_8 = 0xffffffff;
        apfStack_2234[2] = (function<void___cdecl(void)> *)0x422e34;
        uStack_183c = FUN_00622340();
        puStack_1dd0 = (undefined1 *)&pcStack_2228;
        apfStack_2234[2] = (function<void___cdecl(void)> *)&DAT_0074216c;
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x422e59;
        FUN_004054a0();
        apfStack_2234[2] = (function<void___cdecl(void)> *)0x422e5e;
        pfStack_2214 = (function<void___cdecl(void)> *)FUN_006ce090();
        ppfStack_1dd4 = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_0074217c;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x422e83;
        uStack_1840 = pfStack_2214;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x1;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x422e8a;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x53;
        ppfStack_1dd8 = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_0074218c;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x422ea6;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x422ead;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x54;
        ppfStack_1ddc = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_0074219c;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x422ec9;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x422ed0;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x55;
        ppfStack_1de0 = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_007421ac;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x422eec;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x422ef3;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x56;
        ppfStack_1de4 = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_007421bc;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x422f0f;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x422f16;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x57;
        ppfStack_1de8 = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_007421cc;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x422f32;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x422f39;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x58;
        ppfStack_1dec = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_007421dc;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x422f55;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x422f5c;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x59;
        ppfStack_1df0 = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_007421e8;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x422f78;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x422f7f;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)DAT_007ca764;
        puVar6 = &DAT_007ca70c;
        ppfVar10 = apfStack_2234;
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *ppfVar10 = (function<void___cdecl(void)> *)*puVar6;
          puVar6 = puVar6 + 1;
          ppfVar10 = ppfVar10 + 1;
        }
        pfStack_2238 = (function<void___cdecl(void)> *)0x422fa6;
        FUN_0065e180();
        ExceptionList = local_10;
        return;
      case 0x2776:
        pfStack_2214 = (function<void___cdecl(void)> *)0x51;
        ppfStack_1df4 = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_007421f8;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x422fc7;
        ExceptionList = &local_10;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x422fce;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x52;
        ppfStack_1df8 = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_00742208;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x422fea;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x422ff1;
        FUN_00417730();
        acStack_1844[0] = '^';
        acStack_1844[1] = '\0';
        acStack_1844[2] = '\0';
        acStack_1844[3] = '\0';
        puStack_1dfc = (undefined1 *)&piStack_2224;
        pcStack_2228 = &DAT_00742218;
        apfStack_2234[2] = (function<void___cdecl(void)> *)0x423013;
        uStack_1e00 = FUN_004054a0();
        local_8 = 0x73;
        pcStack_2228 = acStack_1844;
        apfStack_2234[2] = (function<void___cdecl(void)> *)0x423031;
        pcStack_2228 = (char *)game_timing_or_delay_helper();
        local_8 = 0xffffffff;
        apfStack_2234[2] = (function<void___cdecl(void)> *)0x42303e;
        uStack_1848 = FUN_00622340();
        puStack_1e04 = (undefined1 *)&pcStack_2228;
        apfStack_2234[2] = (function<void___cdecl(void)> *)&DAT_00742228;
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x423063;
        FUN_004054a0();
        apfStack_2234[2] = (function<void___cdecl(void)> *)0x423068;
        pfStack_2214 = (function<void___cdecl(void)> *)FUN_006ce090();
        ppfStack_1e08 = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_00742238;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x42308d;
        uStack_184c = pfStack_2214;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x1;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x423094;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x54;
        ppfStack_1e0c = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_00742248;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x4230b0;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x4230b7;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x55;
        ppfStack_1e10 = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_00742258;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x4230d3;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x4230da;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x56;
        ppfStack_1e14 = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_00742268;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x4230f6;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x4230fd;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x57;
        ppfStack_200c = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_00742278;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x423119;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x423120;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x58;
        ppfStack_1e1c = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_00742288;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x42313c;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x423143;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x59;
        ppfStack_1e20 = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_00742294;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x42315f;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x423166;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)DAT_007ca764;
        puVar6 = &DAT_007ca70c;
        ppfVar10 = apfStack_2234;
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *ppfVar10 = (function<void___cdecl(void)> *)*puVar6;
          puVar6 = puVar6 + 1;
          ppfVar10 = ppfVar10 + 1;
        }
        pfStack_2238 = (function<void___cdecl(void)> *)0x42318c;
        FUN_0065e180();
        ExceptionList = local_10;
        return;
      case 0x2777:
        pfStack_2214 = (function<void___cdecl(void)> *)0x51;
        ppfStack_1e24 = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_007422a4;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x4231ad;
        ExceptionList = &local_10;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x4231b4;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x52;
        ppfStack_1e28 = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_007422b4;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x4231d0;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x4231d7;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x53;
        ppfStack_1e2c = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_007422c4;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x4231f3;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x4231fa;
        FUN_00417730();
        acStack_1850[0] = '^';
        acStack_1850[1] = '\0';
        acStack_1850[2] = '\0';
        acStack_1850[3] = '\0';
        puStack_1e30 = (undefined1 *)&piStack_2224;
        pcStack_2228 = &DAT_007422d4;
        apfStack_2234[2] = (function<void___cdecl(void)> *)0x42321c;
        uStack_1e34 = FUN_004054a0();
        local_8 = 0x74;
        pcStack_2228 = acStack_1850;
        apfStack_2234[2] = (function<void___cdecl(void)> *)0x42323a;
        pcStack_2228 = (char *)game_timing_or_delay_helper();
        local_8 = 0xffffffff;
        apfStack_2234[2] = (function<void___cdecl(void)> *)0x423247;
        uStack_1854 = FUN_00622340();
        puStack_1e38 = (undefined1 *)&pcStack_2228;
        apfStack_2234[2] = (function<void___cdecl(void)> *)&DAT_007422e4;
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x42326c;
        FUN_004054a0();
        apfStack_2234[2] = (function<void___cdecl(void)> *)0x423271;
        pfStack_2214 = (function<void___cdecl(void)> *)FUN_006ce090();
        ppfStack_1e3c = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_007422f4;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x423296;
        uStack_1858 = pfStack_2214;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x1;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x42329d;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x55;
        ppfStack_1e40 = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_00742304;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x4232b9;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x4232c0;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x56;
        ppfStack_1e44 = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_00742314;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x4232dc;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x4232e3;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x57;
        ppfStack_1e48 = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_00742324;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x4232ff;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x423306;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x58;
        ppfStack_1e4c = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_00742334;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x423322;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x423329;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x59;
        ppfStack_1e50 = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_00742340;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x423345;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x42334c;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)DAT_007ca764;
        puVar6 = &DAT_007ca70c;
        ppfVar10 = apfStack_2234;
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *ppfVar10 = (function<void___cdecl(void)> *)*puVar6;
          puVar6 = puVar6 + 1;
          ppfVar10 = ppfVar10 + 1;
        }
        pfStack_2238 = (function<void___cdecl(void)> *)0x423372;
        FUN_0065e180();
        ExceptionList = local_10;
        return;
      case 0x2778:
        pfStack_2214 = (function<void___cdecl(void)> *)0x51;
        ppfStack_1e54 = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&UNK_00742350;
        apfStack_2234[0] = (function<void___cdecl(void)> *)&UNK_00423393;
        ExceptionList = &local_10;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)&UNK_0042339a;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x52;
        ppfStack_1e58 = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&UNK_00742360;
        apfStack_2234[0] = (function<void___cdecl(void)> *)&UNK_004233b6;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)&UNK_004233bd;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x53;
        ppfStack_1e5c = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&UNK_00742370;
        apfStack_2234[0] = (function<void___cdecl(void)> *)&UNK_004233d9;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)&UNK_004233e0;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x54;
        ppfStack_1e60 = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&UNK_00742380;
        apfStack_2234[0] = (function<void___cdecl(void)> *)&UNK_004233fc;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)&UNK_00423403;
        FUN_00417730();
        acStack_185c[0] = '^';
        acStack_185c[1] = '\0';
        acStack_185c[2] = '\0';
        acStack_185c[3] = '\0';
        puStack_1e64 = (undefined1 *)&piStack_2224;
        pcStack_2228 = &UNK_00742390;
        apfStack_2234[2] = (function<void___cdecl(void)> *)&UNK_00423425;
        uStack_1e68 = FUN_004054a0();
        local_8 = 0x75;
        pcStack_2228 = acStack_185c;
        apfStack_2234[2] = (function<void___cdecl(void)> *)&UNK_00423443;
        pcStack_2228 = (char *)game_timing_or_delay_helper();
        local_8 = 0xffffffff;
        apfStack_2234[2] = (function<void___cdecl(void)> *)&UNK_00423450;
        uStack_1860 = FUN_00622340();
        puStack_1e6c = (undefined1 *)&pcStack_2228;
        apfStack_2234[2] = (function<void___cdecl(void)> *)&UNK_007423a0;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&UNK_00423475;
        FUN_004054a0();
        apfStack_2234[2] = (function<void___cdecl(void)> *)&UNK_0042347a;
        pfStack_2214 = (function<void___cdecl(void)> *)FUN_006ce090();
        ppfStack_1e70 = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&UNK_007423b0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)&UNK_0042349f;
        uStack_1864 = pfStack_2214;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x1;
        apfStack_2234[0] = (function<void___cdecl(void)> *)&UNK_004234a6;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x56;
        ppfStack_1e74 = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&UNK_007423c0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)&UNK_004234c2;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)&UNK_004234c9;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x57;
        ppfStack_1e78 = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&UNK_007423d0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)&UNK_004234e5;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)&UNK_004234ec;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x58;
        ppfStack_1e7c = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&UNK_007423e0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)&UNK_00423508;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)&UNK_0042350f;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x59;
        ppfStack_1e80 = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&UNK_007423ec;
        apfStack_2234[0] = (function<void___cdecl(void)> *)&UNK_0042352b;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)&UNK_00423532;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)DAT_007ca764;
        puVar6 = &DAT_007ca70c;
        ppfVar10 = apfStack_2234;
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *ppfVar10 = (function<void___cdecl(void)> *)*puVar6;
          puVar6 = puVar6 + 1;
          ppfVar10 = ppfVar10 + 1;
        }
        pfStack_2238 = (function<void___cdecl(void)> *)&UNK_00423559;
        FUN_0065e180();
        ExceptionList = local_10;
        return;
      case 0x2779:
        pfStack_2214 = (function<void___cdecl(void)> *)0x51;
        ppfStack_1e84 = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_007423fc;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x42357a;
        ExceptionList = &local_10;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x423581;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x52;
        ppfStack_1e88 = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_0074240c;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x42359d;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x4235a4;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x53;
        ppfStack_1e8c = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_0074241c;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x4235c0;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x4235c7;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x54;
        ppfStack_1e90 = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_0074242c;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x4235e3;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x4235ea;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x55;
        ppfStack_1e94 = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_0074243c;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x423606;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x42360d;
        FUN_00417730();
        acStack_1868[0] = '^';
        acStack_1868[1] = '\0';
        acStack_1868[2] = '\0';
        acStack_1868[3] = '\0';
        puStack_1e98 = (undefined1 *)&piStack_2224;
        pcStack_2228 = &DAT_0074244c;
        apfStack_2234[2] = (function<void___cdecl(void)> *)0x42362f;
        uStack_1e9c = FUN_004054a0();
        local_8 = 0x76;
        pcStack_2228 = acStack_1868;
        apfStack_2234[2] = (function<void___cdecl(void)> *)0x42364d;
        pcStack_2228 = (char *)game_timing_or_delay_helper();
        local_8 = 0xffffffff;
        apfStack_2234[2] = (function<void___cdecl(void)> *)0x42365a;
        uStack_186c = FUN_00622340();
        puStack_1ea0 = (undefined1 *)&pcStack_2228;
        apfStack_2234[2] = (function<void___cdecl(void)> *)&DAT_0074245c;
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x42367f;
        FUN_004054a0();
        apfStack_2234[2] = (function<void___cdecl(void)> *)0x423684;
        pfStack_2214 = (function<void___cdecl(void)> *)FUN_006ce090();
        ppfStack_1ea4 = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_0074246c;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x4236a9;
        uStack_1870 = pfStack_2214;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x1;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x4236b0;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x57;
        ppfStack_1ea8 = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_0074247c;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x4236cc;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x4236d3;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x58;
        ppfStack_1eac = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_0074248c;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x4236ef;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x4236f6;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x59;
        ppfStack_1eb0 = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_00742498;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x423712;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x423719;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)DAT_007ca764;
        puVar6 = &DAT_007ca70c;
        ppfVar10 = apfStack_2234;
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *ppfVar10 = (function<void___cdecl(void)> *)*puVar6;
          puVar6 = puVar6 + 1;
          ppfVar10 = ppfVar10 + 1;
        }
        pfStack_2238 = (function<void___cdecl(void)> *)0x42373f;
        FUN_0065e180();
        ExceptionList = local_10;
        return;
      case 0x277a:
        pfStack_2214 = (function<void___cdecl(void)> *)0x51;
        ppfStack_1eb4 = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_007424a8;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x423760;
        ExceptionList = &local_10;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x423767;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x52;
        ppfStack_1eb8 = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_007424b8;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x423783;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x42378a;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x53;
        ppfStack_1ebc = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_007424c8;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x4237a6;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x4237ad;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x54;
        ppfStack_1ec0 = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_007424d8;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x4237c9;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x4237d0;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x55;
        ppfStack_1ec4 = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_007424e8;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x4237ec;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x4237f3;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x56;
        ppfStack_1ec8 = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_007424f8;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x42380f;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x423816;
        FUN_00417730();
        acStack_1874[0] = '^';
        acStack_1874[1] = '\0';
        acStack_1874[2] = '\0';
        acStack_1874[3] = '\0';
        puStack_1ecc = (undefined1 *)&piStack_2224;
        pcStack_2228 = &DAT_00742508;
        apfStack_2234[2] = (function<void___cdecl(void)> *)0x423838;
        uStack_1ed0 = FUN_004054a0();
        local_8 = 0x77;
        pcStack_2228 = acStack_1874;
        apfStack_2234[2] = (function<void___cdecl(void)> *)0x423856;
        pcStack_2228 = (char *)game_timing_or_delay_helper();
        local_8 = 0xffffffff;
        apfStack_2234[2] = (function<void___cdecl(void)> *)0x423863;
        uStack_1878 = FUN_00622340();
        puStack_1ed4 = (undefined1 *)&pcStack_2228;
        apfStack_2234[2] = (function<void___cdecl(void)> *)&DAT_00742518;
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x423888;
        FUN_004054a0();
        apfStack_2234[2] = (function<void___cdecl(void)> *)0x42388d;
        pfStack_2214 = (function<void___cdecl(void)> *)FUN_006ce090();
        ppfStack_1ed8 = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_00742528;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x4238b2;
        uStack_187c = pfStack_2214;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x1;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x4238b9;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x58;
        ppfStack_1edc = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_00742538;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x4238d5;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x4238dc;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x59;
        ppfStack_1ee0 = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_00742544;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x4238f8;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x4238ff;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)DAT_007ca764;
        puVar6 = &DAT_007ca70c;
        ppfVar10 = apfStack_2234;
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *ppfVar10 = (function<void___cdecl(void)> *)*puVar6;
          puVar6 = puVar6 + 1;
          ppfVar10 = ppfVar10 + 1;
        }
        pfStack_2238 = (function<void___cdecl(void)> *)0x423925;
        FUN_0065e180();
        ExceptionList = local_10;
        return;
      case 0x277b:
        pfStack_2214 = (function<void___cdecl(void)> *)0x51;
        ppfStack_1ee4 = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_00742554;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x423946;
        ExceptionList = &local_10;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x42394d;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x52;
        ppfStack_1ee8 = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_00742564;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x423969;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x423970;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x53;
        ppfStack_1eec = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_00742574;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x42398c;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x423993;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x54;
        ppfStack_1ef0 = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_00742584;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x4239af;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x4239b6;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x55;
        ppfStack_1ef4 = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_00742594;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x4239d2;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x4239d9;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x56;
        ppfStack_1ef8 = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_007425a4;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x4239f5;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x4239fc;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x57;
        ppfStack_1efc = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_007425b4;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x423a18;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x423a1f;
        FUN_00417730();
        acStack_1880[0] = '^';
        acStack_1880[1] = '\0';
        acStack_1880[2] = '\0';
        acStack_1880[3] = '\0';
        puStack_1f00 = (undefined1 *)&piStack_2224;
        pcStack_2228 = &DAT_007425c4;
        apfStack_2234[2] = (function<void___cdecl(void)> *)0x423a41;
        uStack_1f04 = FUN_004054a0();
        local_8 = 0x78;
        pcStack_2228 = acStack_1880;
        apfStack_2234[2] = (function<void___cdecl(void)> *)0x423a5f;
        pcStack_2228 = (char *)game_timing_or_delay_helper();
        local_8 = 0xffffffff;
        apfStack_2234[2] = (function<void___cdecl(void)> *)0x423a6c;
        uStack_1884 = FUN_00622340();
        puStack_1f08 = (undefined1 *)&pcStack_2228;
        apfStack_2234[2] = (function<void___cdecl(void)> *)&DAT_007425d0;
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x423a91;
        FUN_004054a0();
        apfStack_2234[2] = (function<void___cdecl(void)> *)0x423a96;
        pfStack_2214 = (function<void___cdecl(void)> *)FUN_006ce090();
        ppfStack_1f0c = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_007425dc;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x423abb;
        uStack_1888 = pfStack_2214;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x1;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x423ac2;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x59;
        ppfStack_1f10 = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_007425e8;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x423ade;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x423ae5;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)DAT_007ca764;
        puVar6 = &DAT_007ca70c;
        ppfVar10 = apfStack_2234;
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *ppfVar10 = (function<void___cdecl(void)> *)*puVar6;
          puVar6 = puVar6 + 1;
          ppfVar10 = ppfVar10 + 1;
        }
        pfStack_2238 = (function<void___cdecl(void)> *)0x423b0c;
        FUN_0065e180();
        ExceptionList = local_10;
        return;
      case 0x277c:
        pfStack_2214 = (function<void___cdecl(void)> *)0x51;
        ppfStack_1f14 = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_007425f8;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x423b2d;
        ExceptionList = &local_10;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x423b34;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x52;
        ppfStack_1f18 = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_00742608;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x423b50;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x423b57;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x53;
        ppfStack_1f1c = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_00742618;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x423b73;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x423b7a;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x54;
        ppfStack_1f20 = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_00742628;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x423b96;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x423b9d;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x55;
        ppfStack_1f24 = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_00742638;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x423bb9;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x423bc0;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x56;
        ppfStack_1f28 = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_00742648;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x423bdc;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x423be3;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x57;
        ppfStack_1f2c = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_00742658;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x423bff;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x423c06;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)0x58;
        ppfStack_1f30 = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_00742668;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x423c22;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x423c29;
        FUN_00417730();
        acStack_188c[0] = '^';
        acStack_188c[1] = '\0';
        acStack_188c[2] = '\0';
        acStack_188c[3] = '\0';
        puStack_1f34 = (undefined1 *)&piStack_2224;
        pcStack_2228 = &DAT_00742674;
        apfStack_2234[2] = (function<void___cdecl(void)> *)0x423c4b;
        uStack_1f38 = FUN_004054a0();
        local_8 = 0x79;
        pcStack_2228 = acStack_188c;
        apfStack_2234[2] = (function<void___cdecl(void)> *)0x423c69;
        pcStack_2228 = (char *)game_timing_or_delay_helper();
        local_8 = 0xffffffff;
        apfStack_2234[2] = (function<void___cdecl(void)> *)0x423c76;
        uStack_1890 = FUN_00622340();
        puStack_1f3c = (undefined1 *)&pcStack_2228;
        apfStack_2234[2] = (function<void___cdecl(void)> *)&DAT_00742684;
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x423c9b;
        FUN_004054a0();
        apfStack_2234[2] = (function<void___cdecl(void)> *)0x423ca0;
        pfStack_2214 = (function<void___cdecl(void)> *)FUN_006ce090();
        ppfStack_1f40 = apfStack_2234 + 2;
        apfStack_2234[1] = (function<void___cdecl(void)> *)&DAT_00742694;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x423cc5;
        uStack_1894 = pfStack_2214;
        FUN_004054a0();
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x1;
        apfStack_2234[0] = (function<void___cdecl(void)> *)0x423ccc;
        FUN_00417730();
        pfStack_2214 = (function<void___cdecl(void)> *)DAT_007ca764;
        puVar6 = &DAT_007ca70c;
        ppfVar10 = apfStack_2234;
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *ppfVar10 = (function<void___cdecl(void)> *)*puVar6;
          puVar6 = puVar6 + 1;
          ppfVar10 = ppfVar10 + 1;
        }
        pfStack_2238 = (function<void___cdecl(void)> *)0x423cf2;
        FUN_0065e180();
        ExceptionList = local_10;
        return;
      }
    }
    local_146c = param_2;
    local_153c = *(undefined4 *)(param_2 + 0x9d0);
    local_1400 = 0;
    local_1be4 = 0x4c;
    pfStack_2214 = (function<void___cdecl(void)> *)0x41f106;
    ExceptionList = &local_10;
    game_timing_or_delay_helper();
    pfStack_2214 = (function<void___cdecl(void)> *)0x79;
    pfStack_2218 = (function<void___cdecl(void)> *)0xbe;
    pcStack_221c = (char *)0x6;
    local_2064 = (undefined1 *)apfStack_2234;
    pfStack_2238 = (function<void___cdecl(void)> *)0x741740;
    pfStack_223c = (function<void___cdecl(void)> *)0x41f125;
    local_2068 = FUN_004054a0();
    local_8 = 5;
    local_206c = auStack_224c;
    pcStack_2250 = &DAT_0074176c;
    puStack_2254 = (undefined *)0x41f147;
    local_2070 = FUN_004054a0();
    local_8 = CONCAT31(local_8._1_3_,6);
    pcStack_2250 = (char *)0x64;
    local_2074 = auStack_2268;
    FUN_004054a0(&DAT_00741780);
    local_8 = 0xffffffff;
    local_1be8 = FUN_00661cc0(0,0);
    local_1bec = 0x2335;
    pfStack_2214 = (function<void___cdecl(void)> *)&local_1bec;
    pfStack_2218 = (function<void___cdecl(void)> *)0x41f1aa;
    local_1400 = local_1be8;
    FUN_0040d330();
    pfStack_2214 = (function<void___cdecl(void)> *)0x41f1b1;
    FUN_0040d5a0();
    local_1bf0 = 0x2335;
    iVar2 = *(int *)(local_146c + 0x9d0);
    pfStack_2214 = (function<void___cdecl(void)> *)&local_1bf0;
    pfStack_2218 = (function<void___cdecl(void)> *)0x41f1db;
    FUN_0040d330();
    pfStack_2214 = (function<void___cdecl(void)> *)0x41f1e2;
    iVar4 = FUN_00405270();
    *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(iVar2 + 4);
    local_1bf4 = 0x2335;
    pfStack_2214 = (function<void___cdecl(void)> *)&local_1bf4;
    pfStack_2218 = (function<void___cdecl(void)> *)0x41f205;
    FUN_0040d330();
    pfStack_2214 = (function<void___cdecl(void)> *)0x41f20c;
    FUN_00405270();
    pfStack_2214 = (function<void___cdecl(void)> *)local_1400;
    pfStack_2218 = param_3;
    pcStack_221c = (char *)0x41f21d;
    FUN_006cdee0();
    pfStack_2214 = (function<void___cdecl(void)> *)0x41f23b;
    FUN_0040d840();
    *(undefined4 *)(local_1400 + 0xa40) = 0x23;
    *(undefined4 *)(local_1400 + 0xa44) = 0xfffffffd;
    *(undefined4 *)(local_1400 + 0xa48) = 0xffe6c89c;
    *(undefined4 *)(local_1400 + 0xa64) = 0;
    local_1bf8 = 0x50;
    pfStack_2214 = (function<void___cdecl(void)> *)0x41f296;
    game_timing_or_delay_helper();
    pfStack_2214 = (function<void___cdecl(void)> *)0x3e;
    pfStack_2218 = (function<void___cdecl(void)> *)0xa2;
    pcStack_221c = (char *)0x0;
    local_2078 = (undefined1 *)apfStack_2234;
    pfStack_2238 = (function<void___cdecl(void)> *)0x741788;
    pfStack_223c = (function<void___cdecl(void)> *)0x41f2b5;
    local_207c = FUN_004054a0();
    local_8 = 7;
    local_2080 = auStack_224c;
    pcStack_2250 = &DAT_007417b8;
    puStack_2254 = (undefined *)0x41f2d7;
    local_2084 = FUN_004054a0();
    local_8 = CONCAT31(local_8._1_3_,8);
    pcStack_2250 = (char *)0x32;
    local_2088 = auStack_2268;
    FUN_004054a0(&DAT_007417c8);
    local_8 = 0xffffffff;
    local_1bfc = FUN_00661cc0(0,0);
    *(undefined4 *)(local_1bfc + 0x9a0) = *(undefined4 *)(local_146c + 0x9a0);
    pfStack_2214 = param_3;
    pfStack_2218 = (function<void___cdecl(void)> *)0x41f345;
    local_1400 = local_1bfc;
    FUN_0041cfa0();
    pfStack_2214 = (function<void___cdecl(void)> *)0x41f35b;
    FUN_004272c0();
    pfStack_2214 = (function<void___cdecl(void)> *)0x0;
    pfStack_2218 = (function<void___cdecl(void)> *)0x41f373;
    FUN_00427200();
    pfStack_2214 = (function<void___cdecl(void)> *)0x41f37d;
    FUN_004053a0();
    pfStack_2214 = (function<void___cdecl(void)> *)0x41f390;
    iVar2 = FUN_00427200();
    *(undefined4 *)(iVar2 + 4) = 0x118;
    pfStack_2214 = (function<void___cdecl(void)> *)0x41f3aa;
    iVar2 = FUN_00427200();
    *(undefined4 *)(iVar2 + 8) = 0x96;
    pfStack_2214 = (function<void___cdecl(void)> *)0x41f3c4;
    iVar2 = FUN_00427200();
    *(undefined4 *)(iVar2 + 0x28) = 2;
    pfStack_2214 = (function<void___cdecl(void)> *)0x41f3de;
    iVar2 = FUN_00427200();
    *(undefined4 *)(iVar2 + 0xc) = 0xffe6c89c;
    pfStack_2214 = (function<void___cdecl(void)> *)0x41f3f5;
    local_1c08 = FUN_004054a0();
    local_8 = 9;
    pfStack_2214 = local_808;
    pfStack_2218 = (function<void___cdecl(void)> *)0x41f424;
    local_1c00 = local_1c08;
    pfStack_2214 = (function<void___cdecl(void)> *)FUN_0040a850();
    local_8._0_1_ = 10;
    pfStack_2218 = local_fa0;
    pcStack_221c = (char *)0x41f457;
    local_1c0c = pfStack_2214;
    local_1c04 = pfStack_2214;
    local_1c10 = FUN_00405cf0();
    pfStack_2214 = (function<void___cdecl(void)> *)0x1;
    pfStack_2218 = (function<void___cdecl(void)> *)0x41f47a;
    FUN_00427200();
    pfStack_2214 = (function<void___cdecl(void)> *)0x41f484;
    FUN_004053e0();
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_fa0);
    local_8 = CONCAT31(local_8._1_3_,9);
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_808);
    local_8 = 0xffffffff;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_7f0);
    pfStack_2214 = (function<void___cdecl(void)> *)0x41f4c4;
    iVar2 = FUN_00427200();
    *(undefined4 *)(iVar2 + 4) = 0x96;
    pfStack_2214 = (function<void___cdecl(void)> *)0x41f4de;
    iVar2 = FUN_00427200();
    *(undefined4 *)(iVar2 + 8) = 0xc5;
    pfStack_2214 = (function<void___cdecl(void)> *)0x41f4f8;
    iVar2 = FUN_00427200();
    *(undefined4 *)(iVar2 + 0x28) = 2;
    pfStack_2214 = (function<void___cdecl(void)> *)0x41f50f;
    local_1c1c = FUN_004054a0();
    local_8 = 0xb;
    pfStack_2214 = local_10c0;
    pfStack_2218 = (function<void___cdecl(void)> *)0x41f53e;
    local_1c14 = local_1c1c;
    pfStack_2214 = (function<void___cdecl(void)> *)FUN_0040a850();
    local_8._0_1_ = 0xc;
    pfStack_2218 = local_10d8;
    pcStack_221c = (char *)0x41f571;
    local_1c20 = pfStack_2214;
    local_1c18 = pfStack_2214;
    local_1c24 = FUN_00405cf0();
    pfStack_2214 = (function<void___cdecl(void)> *)0x2;
    pfStack_2218 = (function<void___cdecl(void)> *)0x41f594;
    FUN_00427200();
    pfStack_2214 = (function<void___cdecl(void)> *)0x41f59e;
    FUN_004053e0();
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_10d8);
    local_8 = CONCAT31(local_8._1_3_,0xb);
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_10c0);
    local_8 = 0xffffffff;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_10a8);
    pfStack_2214 = (function<void___cdecl(void)> *)0x41f5de;
    iVar2 = FUN_00427200();
    *(undefined4 *)(iVar2 + 4) = 0x118;
    pfStack_2214 = (function<void___cdecl(void)> *)0x41f5f8;
    iVar2 = FUN_00427200();
    *(undefined4 *)(iVar2 + 8) = 0xc5;
    pfStack_2214 = (function<void___cdecl(void)> *)0x41f612;
    iVar2 = FUN_00427200();
    *(undefined4 *)(iVar2 + 0x28) = 2;
    pfStack_2214 = (function<void___cdecl(void)> *)0x3;
    pfStack_2218 = (function<void___cdecl(void)> *)0x41f631;
    FUN_00427200();
    pfStack_2214 = (function<void___cdecl(void)> *)0x41f63b;
    FUN_004053a0();
    pfStack_2214 = (function<void___cdecl(void)> *)0x41f64e;
    iVar2 = FUN_00427200();
    *(undefined4 *)(iVar2 + 4) = 0x118;
    pfStack_2214 = (function<void___cdecl(void)> *)0x41f668;
    iVar2 = FUN_00427200();
    *(undefined4 *)(iVar2 + 8) = 0xe3;
    pfStack_2214 = (function<void___cdecl(void)> *)0x41f682;
    iVar2 = FUN_00427200();
    *(undefined4 *)(iVar2 + 0x28) = 2;
    pfStack_2214 = (function<void___cdecl(void)> *)0x4;
    pfStack_2218 = (function<void___cdecl(void)> *)0x41f6a1;
    FUN_00427200();
    pfStack_2214 = (function<void___cdecl(void)> *)0x41f6ab;
    FUN_004053a0();
    pfStack_2214 = (function<void___cdecl(void)> *)0x41f6be;
    iVar2 = FUN_00427200();
    *(undefined4 *)(iVar2 + 4) = 0x9d;
    pfStack_2214 = (function<void___cdecl(void)> *)0x41f6d8;
    iVar2 = FUN_00427200();
    *(undefined4 *)(iVar2 + 8) = 0x104;
    pfStack_2214 = (function<void___cdecl(void)> *)0x41f6f2;
    iVar2 = FUN_00427200();
    *(undefined4 *)(iVar2 + 0x28) = 1;
    pfStack_2214 = (function<void___cdecl(void)> *)0x41f708;
    iVar2 = FUN_006c8730();
    if (iVar2 == 0x10) {
      pfStack_2214 = (function<void___cdecl(void)> *)0x41f729;
      local_1404 = game_loop_helper_cc840();
      local_1c28 = 0x50;
      pfStack_2214 = (function<void___cdecl(void)> *)0x41f74a;
      game_timing_or_delay_helper();
      pfStack_2214 = (function<void___cdecl(void)> *)0x46;
      pfStack_2218 = (function<void___cdecl(void)> *)0x3c;
      pcStack_221c = (char *)0x22;
      local_208c = (undefined1 *)apfStack_2234;
      pfStack_2238 = (function<void___cdecl(void)> *)0x741808;
      pfStack_223c = (function<void___cdecl(void)> *)0x41f766;
      local_2090 = FUN_004054a0();
      local_8 = 0xd;
      local_2094 = auStack_224c;
      pcStack_2250 = &DAT_00741838;
      puStack_2254 = (undefined *)0x41f788;
      local_2098 = FUN_004054a0();
      local_8 = CONCAT31(local_8._1_3_,0xe);
      pcStack_2250 = (char *)0x2d;
      local_209c = auStack_2268;
      FUN_004054a0(&DAT_0074185c);
      local_8 = 0xffffffff;
      local_1c2c = FUN_00661cc0(0,0);
      pfStack_2214 = (function<void___cdecl(void)> *)0x41f7e4;
      local_1400 = local_1c2c;
      FUN_004053a0();
      *(undefined4 *)(local_1400 + 0xa40) = 4;
      *(undefined4 *)(local_1400 + 0xa44) = 3;
      *(undefined4 *)(local_1400 + 0xa48) = 0xffffffff;
      *(undefined4 *)(local_1400 + 0xa64) = 0;
      pfStack_2214 = (function<void___cdecl(void)> *)0x41f834;
      local_1c34 = FUN_004054a0();
      local_8 = 0xf;
      pfStack_2214 = (function<void___cdecl(void)> *)(local_1404 + 0x124);
      pfStack_2218 = local_1090;
      pcStack_221c = (char *)0x41f86d;
      local_1c30 = local_1c34;
      local_1c3c = FUN_00427c80();
      local_8._0_1_ = 0x10;
      pfStack_2214 = (function<void___cdecl(void)> *)0x41f89b;
      local_1c38 = local_1c3c;
      FUN_0040d380();
      pfStack_2214 = (function<void___cdecl(void)> *)local_1c3c;
      pfStack_2218 = (function<void___cdecl(void)> *)local_20a4;
      pcStack_221c = (char *)0x41f8b8;
      FUN_0040e2f0();
      pfStack_2214 = (function<void___cdecl(void)> *)0x41f8bf;
      local_1468 = FUN_0040d970();
      local_8 = CONCAT31(local_8._1_3_,0xf);
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1090);
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1078);
      if (local_1468 != '\0') {
        FUN_00426e80();
        local_8 = 0x11;
        CCmdUI::CCmdUI((CCmdUI *)&local_1c84);
        iVar2 = FUN_004271d0();
        if ((uint)(iVar2 * 0x12) < 0x10f) {
          iVar2 = FUN_004271d0();
          local_15e0 = (int *)(iVar2 * 0x12);
        }
        else {
          local_15e0 = (int *)0x10e;
        }
        pfStack_2214 = (function<void___cdecl(void)> *)0x1;
        pfStack_2218 = (function<void___cdecl(void)> *)0x0;
        pcStack_221c = (char *)0x0;
        pcStack_2220 = (char *)0x1;
        piStack_2224 = local_15e0;
        pcStack_2228 = (char *)0xeb;
        apfStack_2234[2] = *(function<void___cdecl(void)> **)(DAT_007ca1a4 + 4);
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x41f97e;
        local_1538 = D3DXCreateTexture();
        pfStack_2214 = (function<void___cdecl(void)> *)0x0;
        pfStack_2218 = local_1c84;
        pcStack_221c = (char *)0x41f9a1;
        local_1538 = (**(code **)(*(int *)local_1c84 + 0x44))();
        pcStack_221c = (char *)0x0;
        pcStack_2220 = (char *)0x0;
        piStack_2224 = &local_1c54;
        pcStack_2228 = (char *)0x0;
        apfStack_2234[2] = local_1c84;
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x41f9c8;
        local_1538 = (**(code **)(*(int *)local_1c84 + 0x4c))();
        for (local_14ac = 0; local_14ac < local_744; local_14ac = local_14ac + 1) {
          for (local_14a8 = 0; local_14a8 < local_748; local_14a8 = local_14a8 + 1) {
            local_14a4 = (undefined4 *)(local_14ac * local_1c54 + local_1c50 + local_14a8 * 4);
            local_1549 = (undefined1)*local_14a4;
            local_154a = (undefined1)((ushort)*(undefined2 *)local_14a4 >> 8);
            local_1548 = (undefined1)((uint)*local_14a4 >> 0x10);
            *local_14a4 = 0xff000000;
          }
        }
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = local_1c84;
        pfStack_2238 = (function<void___cdecl(void)> *)0x41fab4;
        local_1538 = (**(code **)(*(int *)local_1c84 + 0x50))();
        local_1c80 = 0;
        local_1c7c = 0;
        local_1c78 = 0xeb;
        iVar2 = FUN_004271d0();
        if ((uint)(iVar2 * 0x12) < 0x10f) {
          local_15e4 = FUN_004271d0();
          local_15e4 = local_15e4 * 0x12;
        }
        else {
          local_15e4 = 0x10e;
        }
        local_1c74 = local_15e4;
        local_1c70 = 0xeb;
        iVar2 = FUN_004271d0();
        if ((uint)(iVar2 * 0x12) < 0x10f) {
          local_15e8 = FUN_004271d0();
          local_15e8 = local_15e8 * 0x12;
        }
        else {
          local_15e8 = 0x10e;
        }
        local_1c6c = local_15e8;
        pfStack_2214 = (function<void___cdecl(void)> *)0x41fb90;
        FUN_00426e60();
        pfStack_2214 = (function<void___cdecl(void)> *)0x41fba1;
        local_1c44 = FUN_004054a0();
        local_8._0_1_ = 0x12;
        pfStack_2214 = (function<void___cdecl(void)> *)(local_1404 + 0x124);
        pfStack_2218 = local_1060;
        pcStack_221c = (char *)0x41fbd7;
        local_1c40 = local_1c44;
        pfStack_2214 = (function<void___cdecl(void)> *)FUN_00427c80();
        local_8._0_1_ = 0x13;
        pfStack_2218 = (function<void___cdecl(void)> *)0x41fc0c;
        local_1c4c = pfStack_2214;
        local_1c48 = pfStack_2214;
        FUN_004273d0();
        pfStack_2214 = (function<void___cdecl(void)> *)0x41fc13;
        FUN_00426de0();
        local_8._0_1_ = 0x12;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1060);
        local_8 = CONCAT31(local_8._1_3_,0x11);
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_a48);
        local_8 = 0xffffffff;
        FUN_00411b80();
      }
      local_15f8 = 0x50;
      pfStack_2214 = (function<void___cdecl(void)> *)0x41fc60;
      game_timing_or_delay_helper();
      pfStack_2214 = (function<void___cdecl(void)> *)0x58;
      pfStack_2218 = (function<void___cdecl(void)> *)0x3c;
      pcStack_221c = (char *)0x0;
      pcStack_2220 = &DAT_007418b8;
      piStack_2224 = (int *)0x41fc77;
      pfStack_2238 = (function<void___cdecl(void)> *)FUN_004054a0();
      local_8 = 0x14;
      local_20a8 = (undefined1 *)apfStack_2234;
      pfStack_2240 = (function<void___cdecl(void)> *)apfStack_2234;
      pfStack_223c = (function<void___cdecl(void)> *)(local_1404 + 0x124);
      puStack_2244 = (undefined *)0x41fcb5;
      local_1600 = pfStack_2238;
      local_15fc = pfStack_2238;
      local_20ac = FUN_00427c80();
      local_8._0_1_ = 0x15;
      pfStack_2238 = (function<void___cdecl(void)> *)&DAT_007418d8;
      pfStack_223c = (function<void___cdecl(void)> *)0x41fcd2;
      pcStack_2250 = (char *)FUN_004054a0();
      local_8._0_1_ = 0x16;
      local_20b0 = auStack_224c;
      puStack_2258 = auStack_224c;
      puStack_2254 = (undefined *)(local_1404 + 0x124);
      uStack_225c = 0x41fd0d;
      local_1608 = pcStack_2250;
      local_1604 = pcStack_2250;
      local_20b4 = FUN_00427c80();
      local_8._0_1_ = 0x17;
      pcStack_2250 = (char *)0x28;
      local_20b8 = auStack_2268;
      FUN_004054a0(&DAT_007418f8);
      local_8._0_1_ = 0x18;
      local_160c = FUN_00661cc0(0,0);
      local_8 = CONCAT31(local_8._1_3_,0x14);
      local_1400 = local_160c;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1048);
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1030);
      *(undefined1 *)(local_1400 + 0x51) = 0;
      local_1414 = 0;
      while (uVar5 = FUN_004271d0(), local_1414 < uVar5) {
        pfStack_2214 = (function<void___cdecl(void)> *)local_1414;
        pfStack_2218 = (function<void___cdecl(void)> *)0x41fdd4;
        pfStack_2214 = (function<void___cdecl(void)> *)FUN_004271b0();
        pfStack_2218 = (function<void___cdecl(void)> *)0x41fdda;
        cVar1 = FUN_00427e30();
        if (cVar1 == '\0') {
          pfStack_2214 = (function<void___cdecl(void)> *)0x420186;
          FUN_004271b0();
          pfStack_2214 = (function<void___cdecl(void)> *)local_1414;
          pfStack_2218 = (function<void___cdecl(void)> *)0x4201a2;
          iVar2 = FUN_004271b0();
          pfStack_2214 = *(function<void___cdecl(void)> **)(iVar2 + 0x4c);
          local_20ec = apfStack_2234 + 2;
          apfStack_2234[1] = (function<void___cdecl(void)> *)local_1414;
          apfStack_2234[0] = (function<void___cdecl(void)> *)0x4201c9;
          iVar2 = FUN_004271b0();
          apfStack_2234[1] = (function<void___cdecl(void)> *)(iVar2 + 0x34);
          apfStack_2234[0] = (function<void___cdecl(void)> *)0x4201d4;
          FUN_00405520();
          apfStack_2234[1] = (function<void___cdecl(void)> *)0x4201d9;
          pfStack_2218 = (function<void___cdecl(void)> *)FUN_004caab0();
          pcStack_221c = (char *)0x4201f4;
          local_1634 = pfStack_2218;
          local_1638 = FUN_005d9da0();
          pfStack_2214 = (function<void___cdecl(void)> *)0x420208;
          pfStack_2214 = (function<void___cdecl(void)> *)npk_get_relative_res_path();
          pfStack_2218 = (function<void___cdecl(void)> *)&DAT_0074193c;
          pcStack_221c = local_114;
          pcStack_2220 = (char *)0x42021a;
          FUN_00414e80();
        }
        else {
          local_20bc = (undefined1 *)&piStack_2224;
          local_1610 = (undefined1 *)&piStack_2224;
          local_20c0 = (undefined1 *)&pfStack_223c;
          pfStack_2240 = (function<void___cdecl(void)> *)local_1414;
          puStack_2244 = (undefined *)0x41fe1c;
          pfStack_2240 = (function<void___cdecl(void)> *)FUN_004271b0();
          puStack_2244 = (undefined *)0x41fe24;
          FUN_00405520();
          pfStack_2240 = (function<void___cdecl(void)> *)local_1610;
          puStack_2244 = (undefined *)0x41fe30;
          local_20c4 = FUN_004c7e10();
          pcStack_2228 = (char *)0x41fe41;
          local_1459 = FUN_00638d00();
          if (local_1459 == '\0') {
            local_20dc = (undefined1 *)&piStack_2224;
            local_1628 = (function<void___cdecl(void)> *)&piStack_2224;
            local_20e0 = (undefined1 *)&pfStack_223c;
            pfStack_2240 = (function<void___cdecl(void)> *)local_1414;
            puStack_2244 = (undefined *)0x420078;
            pfStack_2240 = (function<void___cdecl(void)> *)FUN_004271b0();
            puStack_2244 = (undefined *)0x420080;
            FUN_00405520();
            pfStack_2240 = local_1628;
            puStack_2244 = (undefined *)0x42008c;
            local_20e4 = FUN_004c7e10();
            pcStack_2228 = (char *)0x42009d;
            local_145c = FUN_00639000();
            if (local_145c != '\0') {
              pfStack_2214 = (function<void___cdecl(void)> *)0x4200ca;
              FUN_004271b0();
              pfStack_2214 = (function<void___cdecl(void)> *)local_1414;
              pfStack_2218 = (function<void___cdecl(void)> *)0x4200e6;
              FUN_004271b0();
              pfStack_2214 = (function<void___cdecl(void)> *)0x4200f0;
              pfStack_2214 = (function<void___cdecl(void)> *)npk_get_relative_res_path();
              local_20e8 = apfStack_2234 + 2;
              apfStack_2234[1] = (function<void___cdecl(void)> *)local_1414;
              apfStack_2234[0] = (function<void___cdecl(void)> *)0x420114;
              apfStack_2234[1] = (function<void___cdecl(void)> *)FUN_004271b0();
              apfStack_2234[0] = (function<void___cdecl(void)> *)0x42011c;
              FUN_00405520();
              apfStack_2234[1] = local_fe8;
              apfStack_2234[0] = (function<void___cdecl(void)> *)0x420128;
              local_1630 = FUN_004c7e10();
              pfStack_2218 = (function<void___cdecl(void)> *)0x420148;
              local_162c = local_1630;
              pfStack_2218 = (function<void___cdecl(void)> *)npk_get_relative_res_path();
              pcStack_221c = "%s %s %d";
              pcStack_2220 = local_114;
              piStack_2224 = (int *)0x42015a;
              FUN_00414e80();
              std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_fe8);
            }
          }
          else {
            local_20c8 = (undefined1 *)&piStack_2224;
            local_1614 = (function<void___cdecl(void)> *)&piStack_2224;
            local_20cc = (undefined1 *)&pfStack_223c;
            pfStack_2240 = (function<void___cdecl(void)> *)local_1414;
            puStack_2244 = (undefined *)0x41fe8a;
            pfStack_2240 = (function<void___cdecl(void)> *)FUN_004271b0();
            puStack_2244 = (undefined *)0x41fe92;
            FUN_00405520();
            pfStack_2240 = local_1614;
            puStack_2244 = (undefined *)0x41fe9e;
            local_20d0 = FUN_004c7e10();
            pcStack_2228 = (char *)0x41feaf;
            local_145b = FUN_00638f30();
            if (local_145b == '\0') {
              pfStack_2214 = (function<void___cdecl(void)> *)0x41ffa0;
              FUN_004271b0();
              pfStack_2214 = (function<void___cdecl(void)> *)local_1414;
              pfStack_2218 = (function<void___cdecl(void)> *)0x41ffbc;
              FUN_004271b0();
              pfStack_2214 = (function<void___cdecl(void)> *)0x41ffc6;
              pfStack_2214 = (function<void___cdecl(void)> *)npk_get_relative_res_path();
              local_20d8 = apfStack_2234 + 2;
              apfStack_2234[1] = (function<void___cdecl(void)> *)local_1414;
              apfStack_2234[0] = (function<void___cdecl(void)> *)0x41ffea;
              apfStack_2234[1] = (function<void___cdecl(void)> *)FUN_004271b0();
              apfStack_2234[0] = (function<void___cdecl(void)> *)0x41fff2;
              FUN_00405520();
              apfStack_2234[1] = local_1000;
              apfStack_2234[0] = (function<void___cdecl(void)> *)0x41fffe;
              local_1624 = FUN_004c7e10();
              pfStack_2218 = (function<void___cdecl(void)> *)0x42001e;
              local_1620 = local_1624;
              pfStack_2218 = (function<void___cdecl(void)> *)npk_get_relative_res_path();
              pcStack_221c = "%s %s %d%%";
              pcStack_2220 = local_114;
              piStack_2224 = (int *)0x420030;
              FUN_00414e80();
              std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1000);
            }
            else {
              pfStack_2214 = (function<void___cdecl(void)> *)0x41fedc;
              FUN_004271b0();
              pfStack_2214 = (function<void___cdecl(void)> *)local_1414;
              pfStack_2218 = (function<void___cdecl(void)> *)0x41ff00;
              FUN_004271b0();
              pfStack_2214 = (function<void___cdecl(void)> *)0x41ff0a;
              pfStack_2214 = (function<void___cdecl(void)> *)npk_get_relative_res_path();
              local_20d4 = apfStack_2234 + 2;
              apfStack_2234[1] = (function<void___cdecl(void)> *)local_1414;
              apfStack_2234[0] = (function<void___cdecl(void)> *)0x41ff2e;
              apfStack_2234[1] = (function<void___cdecl(void)> *)FUN_004271b0();
              apfStack_2234[0] = (function<void___cdecl(void)> *)0x41ff36;
              FUN_00405520();
              apfStack_2234[1] = local_1018;
              apfStack_2234[0] = (function<void___cdecl(void)> *)0x41ff42;
              local_161c = FUN_004c7e10();
              pfStack_2218 = (function<void___cdecl(void)> *)0x41ff62;
              local_1618 = local_161c;
              pfStack_2218 = (function<void___cdecl(void)> *)npk_get_relative_res_path();
              pcStack_221c = "%s %s %d%%";
              pcStack_2220 = local_114;
              piStack_2224 = (int *)0x41ff74;
              FUN_00414e80();
              std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1018);
            }
          }
        }
        local_163c = 0x4e;
        pfStack_2214 = (function<void___cdecl(void)> *)0x420238;
        game_timing_or_delay_helper();
        pfStack_2214 = (function<void___cdecl(void)> *)(local_1414 * 0x12 + 0x96);
        pfStack_2218 = (function<void___cdecl(void)> *)0xde;
        pcStack_221c = (char *)0x29;
        local_20f0 = (undefined1 *)apfStack_2234;
        pfStack_2238 = (function<void___cdecl(void)> *)0x741948;
        pfStack_223c = (function<void___cdecl(void)> *)0x420262;
        local_20f4 = FUN_004054a0();
        local_8 = 0x19;
        local_20f8 = auStack_224c;
        pcStack_2250 = local_114;
        puStack_2254 = (undefined *)0x420286;
        local_20fc = FUN_004054a0();
        local_8 = CONCAT31(local_8._1_3_,0x1a);
        pcStack_2250 = (char *)0x27;
        local_2100 = auStack_2268;
        FUN_004054a0(&DAT_00741978);
        local_8 = 0xffffffff;
        local_1640 = FUN_00661cc0(0,0);
        *(undefined1 *)(local_1640 + 0x51) = 0;
        pfStack_2214 = (function<void___cdecl(void)> *)0x4202e9;
        local_1400 = local_1640;
        FUN_0040d680();
        FUN_00414fc0();
        FUN_0040aa90();
        local_8 = 0x1b;
        pfStack_2214 = (function<void___cdecl(void)> *)0x420312;
        FUN_004053a0();
        local_7a0 = 0x29;
        local_79c = 0;
        local_798 = 0;
        local_783 = 3;
        pfStack_2214 = (function<void___cdecl(void)> *)0x42034c;
        FUN_00427660();
        *(undefined1 *)(local_1400 + 0x6e0) = 1;
        pfStack_2214 = (function<void___cdecl(void)> *)0x42036b;
        local_1644 = FUN_004054a0();
        pfStack_2214 = (function<void___cdecl(void)> *)0x420389;
        FUN_004053e0();
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_fd0);
        *(undefined4 *)(local_1400 + 0xa40) = 4;
        *(undefined4 *)(local_1400 + 0xa44) = 3;
        *(undefined4 *)(local_1400 + 0xa48) = 0xffffffff;
        *(undefined4 *)(local_1400 + 0xa64) = 0;
        pfStack_2214 = (function<void___cdecl(void)> *)0x4203eb;
        FUN_004053a0();
        *(undefined4 *)(local_1400 + 0x984) = 0x32dc;
        *(undefined4 *)(local_1400 + 0x9d0) = local_153c;
        *(uint *)(local_1400 + 0x9a0) = local_1414;
        local_8 = 0xffffffff;
        FUN_00407a80();
        local_1414 = local_1414 + 1;
      }
      uVar5 = FUN_004271d0();
      if (0xf < uVar5) {
        local_1648 = 0x50;
        pfStack_2214 = (function<void___cdecl(void)> *)0x42046c;
        local_15ec = game_timing_or_delay_helper();
        local_14a0 = (int *)game_loop_helper_018d0();
        local_164c = (int *)game_loop_helper_018b0();
        for (; local_14a0 != local_164c; local_14a0 = local_14a0 + 1) {
          local_1540 = local_14a0;
          pfStack_2214 = (function<void___cdecl(void)> *)(*local_14a0 + 0x1c);
          pfStack_2218 = (function<void___cdecl(void)> *)0x4204d5;
          cVar1 = FUN_00427c60();
          if (cVar1 != '\0') {
            *(undefined4 *)(*local_1540 + 0xb04) = 0;
            iVar2 = FUN_004271d0();
            *(int *)(*local_1540 + 0xb00) = iVar2 + -0xf;
            break;
          }
        }
        local_1650 = 0x50;
        pfStack_2214 = (function<void___cdecl(void)> *)0x420535;
        game_timing_or_delay_helper();
        pfStack_2214 = (function<void___cdecl(void)> *)0x58;
        pfStack_2218 = (function<void___cdecl(void)> *)0x11c;
        pcStack_221c = (char *)0x10;
        local_2104 = (undefined1 *)apfStack_2234;
        pfStack_2238 = (function<void___cdecl(void)> *)0x7419d0;
        pfStack_223c = (function<void___cdecl(void)> *)0x420554;
        local_2108 = FUN_004054a0();
        local_8 = 0x1c;
        local_210c = auStack_224c;
        pcStack_2250 = "npcSayUp2";
        puStack_2254 = (undefined *)0x420576;
        local_2110 = FUN_004054a0();
        local_8 = CONCAT31(local_8._1_3_,0x1d);
        pcStack_2250 = (char *)0x23;
        local_2114 = auStack_2268;
        FUN_004054a0(&DAT_00741a04);
        local_8 = 0xffffffff;
        local_1654 = FUN_00661cc0(0,1);
        *(undefined4 *)(local_1654 + 0x984) = 0x32c9;
        *(undefined1 *)(local_1654 + 0x51) = 0;
        local_1658 = 0x50;
        pfStack_2214 = (function<void___cdecl(void)> *)0x4205f1;
        local_1400 = local_1654;
        game_timing_or_delay_helper();
        pfStack_2214 = (function<void___cdecl(void)> *)0x67;
        pfStack_2218 = (function<void___cdecl(void)> *)0x11c;
        pcStack_221c = (char *)0x14;
        local_2118 = (undefined1 *)apfStack_2234;
        pfStack_2238 = (function<void___cdecl(void)> *)0x741a14;
        pfStack_223c = (function<void___cdecl(void)> *)0x420610;
        local_211c = FUN_004054a0();
        local_8 = 0x1e;
        local_2120 = auStack_224c;
        pcStack_2250 = "npcSay2";
        puStack_2254 = (undefined *)0x420632;
        local_2124 = FUN_004054a0();
        local_8 = CONCAT31(local_8._1_3_,0x1f);
        pcStack_2250 = (char *)0x23;
        local_2128 = auStack_2268;
        FUN_004054a0(&DAT_00741a44);
        local_8 = 0xffffffff;
        local_165c = FUN_00661cc0(0,0);
        *(undefined1 *)(local_165c + 0x51) = 0;
        local_1660 = 0x50;
        local_1400 = local_165c;
        uVar5 = FUN_004271d0();
        if (uVar5 < 0x10) {
          local_15f0 = FUN_004271d0();
        }
        else {
          local_15f0 = 0xf;
        }
        pfStack_2214 = (function<void___cdecl(void)> *)0x4206d6;
        game_timing_or_delay_helper();
        pfStack_2214 = (function<void___cdecl(void)> *)(local_15f0 * 0x12 + 0x49);
        pfStack_2218 = (function<void___cdecl(void)> *)0x11c;
        pcStack_221c = (char *)0x12;
        local_212c = (undefined1 *)apfStack_2234;
        pfStack_2238 = (function<void___cdecl(void)> *)0x741a54;
        pfStack_223c = (function<void___cdecl(void)> *)0x4206fe;
        local_2130 = FUN_004054a0();
        local_8 = 0x20;
        local_2134 = auStack_224c;
        pcStack_2250 = "npcSayDown2";
        puStack_2254 = (undefined *)0x420720;
        local_2138 = FUN_004054a0();
        local_8 = CONCAT31(local_8._1_3_,0x21);
        pcStack_2250 = (char *)0x23;
        local_213c = auStack_2268;
        FUN_004054a0(&DAT_00741a88);
        local_8 = 0xffffffff;
        local_1664 = FUN_00661cc0(0,1);
        *(undefined4 *)(local_1664 + 0x984) = 0x32ca;
        *(undefined1 *)(local_1664 + 0x51) = 0;
        local_1400 = local_1664;
      }
      local_1668 = 0x50;
      pfStack_2214 = (function<void___cdecl(void)> *)0x42079b;
      game_timing_or_delay_helper();
      pfStack_2214 = (function<void___cdecl(void)> *)0x48;
      pfStack_2218 = (function<void___cdecl(void)> *)0x10d;
      pcStack_221c = (char *)0x2b;
      local_2140 = (undefined1 *)apfStack_2234;
      pfStack_2238 = (function<void___cdecl(void)> *)0x741a98;
      pfStack_223c = (function<void___cdecl(void)> *)0x4207ba;
      local_2144 = FUN_004054a0();
      local_8 = 0x22;
      local_2148 = auStack_224c;
      pcStack_2250 = &DAT_00741ac8;
      puStack_2254 = (undefined *)0x4207dc;
      local_214c = FUN_004054a0();
      local_8 = CONCAT31(local_8._1_3_,0x23);
      pcStack_2250 = (char *)0x28;
      local_2150 = auStack_2268;
      FUN_004054a0(&DAT_00741ae8);
      local_8 = 0xffffffff;
      local_166c = FUN_00661cc0(0,2);
      pfStack_2214 = (function<void___cdecl(void)> *)0x420835;
      local_1400 = local_166c;
      iVar2 = FUN_0040d680();
      *(undefined4 *)(iVar2 + 0x24) = 0xffffff2f;
      pfStack_2214 = (function<void___cdecl(void)> *)0x42084f;
      iVar2 = FUN_0040d680();
      *(undefined4 *)(iVar2 + 0x28) = 0xfffffffe;
      pfStack_2214 = (function<void___cdecl(void)> *)0x420869;
      iVar2 = FUN_0040d680();
      *(undefined4 *)(iVar2 + 0x24) = 0xffffff2f;
      pfStack_2214 = (function<void___cdecl(void)> *)0x420883;
      iVar2 = FUN_0040d680();
      *(undefined4 *)(iVar2 + 0x28) = 0xfffffffe;
      pfStack_2214 = (function<void___cdecl(void)> *)0x42089d;
      iVar2 = FUN_0040d680();
      *(undefined4 *)(iVar2 + 0x24) = 0xffffff2f;
      pfStack_2214 = (function<void___cdecl(void)> *)0x4208b7;
      iVar2 = FUN_0040d680();
      *(undefined4 *)(iVar2 + 0x28) = 0xfffffffe;
      pfStack_2214 = (function<void___cdecl(void)> *)0x4208d4;
      FUN_004053a0();
      *(undefined4 *)(local_1400 + 0x984) = 13000;
      *(undefined4 *)(local_1400 + 0x9d0) = *(undefined4 *)(local_146c + 0x9d0);
      local_1670 = 0x50;
      pfStack_2214 = (function<void___cdecl(void)> *)0x420917;
      game_timing_or_delay_helper();
      pfStack_2214 = (function<void___cdecl(void)> *)0x5a;
      pfStack_2218 = (function<void___cdecl(void)> *)0x3c;
      pcStack_221c = (char *)0x22;
      local_2154 = (undefined1 *)apfStack_2234;
      pfStack_2238 = (function<void___cdecl(void)> *)0x741b08;
      pfStack_223c = (function<void___cdecl(void)> *)0x420933;
      local_2158 = FUN_004054a0();
      local_8 = 0x24;
      local_215c = auStack_224c;
      pcStack_2250 = &DAT_00741b38;
      puStack_2254 = (undefined *)0x420955;
      local_2160 = FUN_004054a0();
      local_8 = CONCAT31(local_8._1_3_,0x25);
      pcStack_2250 = (char *)0x2d;
      local_2164 = auStack_2268;
      FUN_004054a0(&DAT_00741b54);
      local_8 = 0xffffffff;
      local_1674 = FUN_00661cc0(0,0);
      pfStack_2214 = (function<void___cdecl(void)> *)0x4209b1;
      local_1400 = local_1674;
      FUN_004053a0();
      *(undefined4 *)(local_1400 + 0xa40) = 4;
      *(undefined4 *)(local_1400 + 0xa44) = 3;
      *(undefined4 *)(local_1400 + 0xa48) = 0xffffffff;
      *(undefined4 *)(local_1400 + 0xa64) = 0;
      pfStack_2214 = (function<void___cdecl(void)> *)0x420a01;
      FUN_004054a0();
      local_8 = 0x26;
      pfStack_2214 = (function<void___cdecl(void)> *)0x420a1d;
      FUN_0040d380();
      pfStack_2214 = local_678;
      pfStack_2218 = (function<void___cdecl(void)> *)local_216c;
      pcStack_221c = (char *)0x420a3a;
      FUN_0040e2f0();
      pfStack_2214 = (function<void___cdecl(void)> *)0x420a41;
      local_145d = FUN_0040d970();
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_678);
      if (local_145d != '\0') {
        FUN_00426e80();
        local_8 = 0x27;
        CCmdUI::CCmdUI((CCmdUI *)&local_1cac);
        pfStack_2214 = (function<void___cdecl(void)> *)0x1;
        pfStack_2218 = (function<void___cdecl(void)> *)0x0;
        pcStack_221c = (char *)0x0;
        pcStack_2220 = (char *)0x1;
        piStack_2224 = (int *)0x36;
        pcStack_2228 = (char *)0xe0;
        apfStack_2234[2] = *(function<void___cdecl(void)> **)(DAT_007ca1a4 + 4);
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x420aab;
        local_1520 = D3DXCreateTexture();
        pfStack_2214 = (function<void___cdecl(void)> *)0x0;
        pfStack_2218 = local_1cac;
        pcStack_221c = (char *)0x420ace;
        local_1520 = (**(code **)(*(int *)local_1cac + 0x44))();
        pcStack_221c = (char *)0x0;
        pcStack_2220 = (char *)0x0;
        piStack_2224 = &local_1c5c;
        pcStack_2228 = (char *)0x0;
        apfStack_2234[2] = local_1cac;
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x420af5;
        local_1520 = (**(code **)(*(int *)local_1cac + 0x4c))();
        for (local_149c = 0; local_149c < local_724; local_149c = local_149c + 1) {
          for (local_1510 = 0; local_1510 < local_728; local_1510 = local_1510 + 1) {
            local_150c = (undefined4 *)(local_149c * local_1c5c + local_1c58 + local_1510 * 4);
            local_1547 = (undefined1)*local_150c;
            local_1546 = (undefined1)((ushort)*(undefined2 *)local_150c >> 8);
            local_1545 = (undefined1)((uint)*local_150c >> 0x10);
            *local_150c = 0xff000000;
          }
        }
        apfStack_2234[1] = (function<void___cdecl(void)> *)0x0;
        apfStack_2234[0] = local_1cac;
        pfStack_2238 = (function<void___cdecl(void)> *)0x420be1;
        local_1520 = (**(code **)(*(int *)local_1cac + 0x50))();
        local_1ca8 = 0;
        local_1ca4 = 0;
        local_1ca0 = 0xe0;
        local_1c9c = 0x36;
        local_1c98 = 0xe0;
        local_1c94 = 0x36;
        pfStack_2214 = (function<void___cdecl(void)> *)0x420c35;
        FUN_00426e60();
        pfStack_2214 = (function<void___cdecl(void)> *)0x420c46;
        FUN_004054a0();
        local_8._0_1_ = 0x28;
        pfStack_2214 = local_690;
        pfStack_2218 = (function<void___cdecl(void)> *)0x420c66;
        FUN_004273d0();
        pfStack_2214 = (function<void___cdecl(void)> *)0x420c6d;
        FUN_00426de0();
        local_8 = CONCAT31(local_8._1_3_,0x27);
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_690);
        local_8 = 0xffffffff;
        FUN_00411b80();
      }
      local_1678 = 0x50;
      pfStack_2214 = (function<void___cdecl(void)> *)0x420cab;
      game_timing_or_delay_helper();
      pfStack_2214 = (function<void___cdecl(void)> *)0x6c;
      pfStack_2218 = (function<void___cdecl(void)> *)0x3c;
      pcStack_221c = (char *)0x0;
      local_2170 = (undefined1 *)apfStack_2234;
      pfStack_2238 = (function<void___cdecl(void)> *)&DAT_00741ba4;
      pfStack_223c = (function<void___cdecl(void)> *)0x420cc7;
      local_2174 = FUN_004054a0();
      local_8 = 0x29;
      local_2178 = auStack_224c;
      pcStack_2250 = &DAT_00741bbc;
      puStack_2254 = (undefined *)0x420ce9;
      local_217c = FUN_004054a0();
      local_8 = CONCAT31(local_8._1_3_,0x2a);
      pcStack_2250 = (char *)0x28;
      local_2180 = auStack_2268;
      FUN_004054a0(&DAT_00741bd4);
      local_8 = 0xffffffff;
      local_167c = FUN_00661cc0(0,0);
      *(undefined1 *)(local_167c + 0x51) = 0;
      local_1400 = local_167c;
      for (local_1440 = 0; local_1440 < 3; local_1440 = local_1440 + 1) {
        if (local_1440 == 0) {
          local_1524 = *(int *)(local_1404 + 0x144);
          local_1680 = 0x50;
          pfStack_2214 = (function<void___cdecl(void)> *)0x420d9b;
          game_timing_or_delay_helper();
          pfStack_2214 = (function<void___cdecl(void)> *)(local_1440 * 0x12 + 0x6c);
          pfStack_2218 = (function<void___cdecl(void)> *)0x3c;
          pcStack_221c = (char *)0x29;
          local_2184 = (undefined1 *)apfStack_2234;
          pfStack_2238 = (function<void___cdecl(void)> *)0x741be4;
          pfStack_223c = (function<void___cdecl(void)> *)0x420dc0;
          local_2188 = FUN_004054a0();
          local_8 = 0x2b;
          pfStack_2238 = (function<void___cdecl(void)> *)&DAT_00741c14;
          pfStack_223c = (function<void___cdecl(void)> *)0x420ddd;
          local_169c = FUN_004054a0();
          local_8._0_1_ = 0x2c;
          pfStack_2238 = *(function<void___cdecl(void)> **)(local_1404 + 0x144);
          pfStack_223c = local_f70;
          pfStack_2240 = (function<void___cdecl(void)> *)0x420e0c;
          local_1684 = local_169c;
          local_1690 = (function<void___cdecl(void)> *)FUN_0040a850();
          local_8._0_1_ = 0x2d;
          pfStack_2238 = (function<void___cdecl(void)> *)&DAT_00741c1c;
          pfStack_223c = (function<void___cdecl(void)> *)0x420e35;
          local_1688 = local_1690;
          pfStack_223c = (function<void___cdecl(void)> *)FUN_004054a0();
          local_8._0_1_ = 0x2e;
          pfStack_2238 = local_1690;
          pfStack_2240 = local_fb8;
          puStack_2244 = (undefined *)0x420e65;
          local_1694 = pfStack_223c;
          local_168c = pfStack_223c;
          puStack_2254 = (undefined *)FUN_00405cf0();
          local_8._0_1_ = 0x2f;
          local_218c = auStack_224c;
          puStack_2258 = auStack_224c;
          pcStack_2250 = (char *)local_169c;
          uStack_225c = 0x420e9d;
          local_16a0 = puStack_2254;
          local_1698 = puStack_2254;
          local_2190 = FUN_00405cf0();
          local_8._0_1_ = 0x30;
          pcStack_2250 = (char *)0x27;
          local_2194 = auStack_2268;
          FUN_004054a0(&DAT_00741c24);
          local_8._0_1_ = 0x34;
          local_16a4 = FUN_00661cc0(0,0);
          local_8._0_1_ = 0x33;
          local_1400 = local_16a4;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_fb8);
          local_8._0_1_ = 0x32;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_f88);
          local_8 = CONCAT31(local_8._1_3_,0x31);
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_f70);
          local_8 = 0xffffffff;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_f58);
        }
        else if (local_1440 == 1) {
          local_1524 = (int)((float)*(int *)(local_1404 + 0x144) * 2.2);
          local_16a8 = 0x50;
          pfStack_2214 = (function<void___cdecl(void)> *)0x420f70;
          game_timing_or_delay_helper();
          pfStack_2214 = (function<void___cdecl(void)> *)(local_1440 * 0x12 + 0x6c);
          pfStack_2218 = (function<void___cdecl(void)> *)0x3c;
          pcStack_221c = (char *)0x29;
          local_2198 = (undefined1 *)apfStack_2234;
          pfStack_2238 = (function<void___cdecl(void)> *)0x741c34;
          pfStack_223c = (function<void___cdecl(void)> *)0x420f95;
          local_219c = FUN_004054a0();
          local_8 = 0x35;
          pfStack_2238 = (function<void___cdecl(void)> *)&DAT_00741c64;
          pfStack_223c = (function<void___cdecl(void)> *)0x420fb2;
          local_16c4 = FUN_004054a0();
          local_8._0_1_ = 0x36;
          pfStack_2238 = (function<void___cdecl(void)> *)
                         (int)((float)*(int *)(local_1404 + 0x144) * 2.2);
          pfStack_223c = local_f10;
          pfStack_2240 = (function<void___cdecl(void)> *)0x420fef;
          local_16ac = local_16c4;
          local_16b8 = (function<void___cdecl(void)> *)FUN_0040a850();
          local_8._0_1_ = 0x37;
          pfStack_2238 = (function<void___cdecl(void)> *)&DAT_00741c6c;
          pfStack_223c = (function<void___cdecl(void)> *)0x421018;
          local_16b0 = local_16b8;
          pfStack_223c = (function<void___cdecl(void)> *)FUN_004054a0();
          local_8._0_1_ = 0x38;
          pfStack_2238 = local_16b8;
          pfStack_2240 = local_f40;
          puStack_2244 = (undefined *)0x421048;
          local_16bc = pfStack_223c;
          local_16b4 = pfStack_223c;
          puStack_2254 = (undefined *)FUN_00405cf0();
          local_8._0_1_ = 0x39;
          local_21a0 = auStack_224c;
          puStack_2258 = auStack_224c;
          pcStack_2250 = (char *)local_16c4;
          uStack_225c = 0x421080;
          local_16c8 = puStack_2254;
          local_16c0 = puStack_2254;
          local_21a4 = FUN_00405cf0();
          local_8._0_1_ = 0x3a;
          pcStack_2250 = (char *)0x27;
          local_21a8 = auStack_2268;
          FUN_004054a0(&DAT_00741c74);
          local_8._0_1_ = 0x3e;
          local_16cc = FUN_00661cc0(0,0);
          local_8._0_1_ = 0x3d;
          local_1400 = local_16cc;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_f40);
          local_8._0_1_ = 0x3c;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_f28);
          local_8 = CONCAT31(local_8._1_3_,0x3b);
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_f10);
          local_8 = 0xffffffff;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_c70);
        }
        else if (local_1440 == 2) {
          local_1524 = (int)((float)*(int *)(local_1404 + 0x144) * 6.6000004);
          local_16d0 = 0x50;
          pfStack_2214 = (function<void___cdecl(void)> *)0x421153;
          game_timing_or_delay_helper();
          pfStack_2214 = (function<void___cdecl(void)> *)(local_1440 * 0x12 + 0x6c);
          pfStack_2218 = (function<void___cdecl(void)> *)0x3c;
          pcStack_221c = (char *)0x29;
          local_21ac = (undefined1 *)apfStack_2234;
          pfStack_2238 = (function<void___cdecl(void)> *)0x741c84;
          pfStack_223c = (function<void___cdecl(void)> *)0x421178;
          local_21b0 = FUN_004054a0();
          local_8 = 0x3f;
          pfStack_2238 = (function<void___cdecl(void)> *)&DAT_00741cb4;
          pfStack_223c = (function<void___cdecl(void)> *)0x421195;
          local_16ec = FUN_004054a0();
          local_8._0_1_ = 0x40;
          pfStack_2238 = (function<void___cdecl(void)> *)
                         (int)((float)*(int *)(local_1404 + 0x144) * 6.6000004);
          pfStack_223c = local_ec8;
          pfStack_2240 = (function<void___cdecl(void)> *)0x4211d2;
          local_16d4 = local_16ec;
          local_16e0 = (function<void___cdecl(void)> *)FUN_0040a850();
          local_8._0_1_ = 0x41;
          pfStack_2238 = (function<void___cdecl(void)> *)&DAT_00741cbc;
          pfStack_223c = (function<void___cdecl(void)> *)0x4211fb;
          local_16d8 = local_16e0;
          pfStack_223c = (function<void___cdecl(void)> *)FUN_004054a0();
          local_8._0_1_ = 0x42;
          pfStack_2238 = local_16e0;
          pfStack_2240 = local_ef8;
          puStack_2244 = (undefined *)0x42122b;
          local_16e4 = pfStack_223c;
          local_16dc = pfStack_223c;
          puStack_2254 = (undefined *)FUN_00405cf0();
          local_8._0_1_ = 0x43;
          local_21b4 = auStack_224c;
          puStack_2258 = auStack_224c;
          pcStack_2250 = (char *)local_16ec;
          uStack_225c = 0x421263;
          local_16f0 = puStack_2254;
          local_16e8 = puStack_2254;
          local_21b8 = FUN_00405cf0();
          local_8._0_1_ = 0x44;
          pcStack_2250 = (char *)0x27;
          local_21bc = auStack_2268;
          FUN_004054a0(&DAT_00741cc8);
          local_8._0_1_ = 0x48;
          local_16f4 = FUN_00661cc0(0,0);
          local_8._0_1_ = 0x47;
          local_1400 = local_16f4;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_ef8);
          local_8._0_1_ = 0x46;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_ee0);
          local_8 = CONCAT31(local_8._1_3_,0x45);
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_ec8);
          local_8 = 0xffffffff;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_eb0);
        }
        *(undefined1 *)(local_1400 + 0x51) = 0;
        pfStack_2214 = (function<void___cdecl(void)> *)0x421306;
        FUN_0040d680();
        FUN_00414fc0();
        FUN_0040aa90();
        local_8 = 0x49;
        pfStack_2214 = (function<void___cdecl(void)> *)0x42132f;
        FUN_004053a0();
        local_8c0 = 0x29;
        local_8bc = 0;
        local_8b8 = 0;
        local_8a3 = 3;
        pfStack_2214 = (function<void___cdecl(void)> *)0x421369;
        FUN_00427660();
        *(undefined1 *)(local_1400 + 0x6e0) = 1;
        pfStack_2214 = (function<void___cdecl(void)> *)0x421391;
        FUN_0040d840();
        *(undefined4 *)(local_1400 + 0xa40) = 4;
        *(undefined4 *)(local_1400 + 0xa44) = 3;
        *(undefined4 *)(local_1400 + 0xa48) = 0xffffffff;
        *(undefined4 *)(local_1400 + 0xa64) = 0;
        pfStack_2214 = (function<void___cdecl(void)> *)0x4213e7;
        FUN_004053a0();
        *(undefined4 *)(local_1400 + 0x984) = 0x32e6;
        *(int *)(local_1400 + 0x9a0) = local_1524;
        *(undefined1 *)(local_1400 + 0x9a8) = 0;
        local_8 = 0xffffffff;
        FUN_00407a80();
      }
      local_16f8 = 0x50;
      pfStack_2214 = (function<void___cdecl(void)> *)0x421449;
      game_timing_or_delay_helper();
      pfStack_2214 = (function<void___cdecl(void)> *)0x5c;
      pfStack_2218 = (function<void___cdecl(void)> *)0x10d;
      pcStack_221c = (char *)0x2b;
      local_21c0 = (undefined1 *)apfStack_2234;
      pfStack_2238 = (function<void___cdecl(void)> *)0x741d18;
      pfStack_223c = (function<void___cdecl(void)> *)0x421468;
      local_21c4 = FUN_004054a0();
      local_8 = 0x4a;
      local_21c8 = auStack_224c;
      pcStack_2250 = &DAT_00741d48;
      puStack_2254 = (undefined *)0x42148a;
      local_21cc = FUN_004054a0();
      local_8 = CONCAT31(local_8._1_3_,0x4b);
      pcStack_2250 = (char *)0x28;
      FUN_004054a0(&DAT_00741d5c);
      local_8 = 0xffffffff;
      local_16fc = FUN_00661cc0(0,2);
      pfStack_2214 = (function<void___cdecl(void)> *)0x4214e3;
      local_1400 = local_16fc;
      iVar2 = FUN_0040d680();
      *(undefined4 *)(iVar2 + 0x24) = 0xffffff2f;
      pfStack_2214 = (function<void___cdecl(void)> *)0x4214fd;
      iVar2 = FUN_0040d680();
      *(undefined4 *)(iVar2 + 0x28) = 0xfffffffe;
      pfStack_2214 = (function<void___cdecl(void)> *)0x421517;
      iVar2 = FUN_0040d680();
      *(undefined4 *)(iVar2 + 0x24) = 0xffffff2f;
      pfStack_2214 = (function<void___cdecl(void)> *)0x421531;
      iVar2 = FUN_0040d680();
      *(undefined4 *)(iVar2 + 0x28) = 0xfffffffe;
      pfStack_2214 = (function<void___cdecl(void)> *)0x42154b;
      iVar2 = FUN_0040d680();
      *(undefined4 *)(iVar2 + 0x24) = 0xffffff2f;
      pfStack_2214 = (function<void___cdecl(void)> *)0x421565;
      iVar2 = FUN_0040d680();
      *(undefined4 *)(iVar2 + 0x28) = 0xfffffffe;
      pfStack_2214 = (function<void___cdecl(void)> *)0x421582;
      FUN_004053a0();
      *(undefined4 *)(local_1400 + 0x984) = 0x32d2;
      *(undefined4 *)(local_1400 + 0x9d0) = *(undefined4 *)(local_146c + 0x9d0);
    }
    local_1700 = 0x50;
    pfStack_2214 = (function<void___cdecl(void)> *)0x4215c5;
    game_timing_or_delay_helper();
    pfStack_2214 = (function<void___cdecl(void)> *)0x12f;
    pfStack_2218 = (function<void___cdecl(void)> *)0x11;
    pcStack_221c = (char *)0x1;
    pfStack_2238 = (function<void___cdecl(void)> *)0x741d7c;
    pfStack_223c = (function<void___cdecl(void)> *)0x4215e4;
    FUN_004054a0();
    local_8 = 0x4c;
    pcStack_2250 = &DAT_00741dac;
    puStack_2254 = (undefined *)0x421606;
    FUN_004054a0();
    local_8 = CONCAT31(local_8._1_3_,0x4d);
    pcStack_2250 = (char *)0x28;
    FUN_004054a0(&DAT_00741dbc);
    local_8 = 0xffffffff;
    local_1704 = FUN_00661cc0(0,2);
    *(undefined4 *)(local_1704 + 0x984) = 12000;
    pfStack_2214 = (function<void___cdecl(void)> *)0x421672;
    local_1400 = local_1704;
    FUN_004053a0();
    *(int *)(local_1400 + 0x9d0) = local_146c;
    local_1708 = 0x50;
    pfStack_2214 = (function<void___cdecl(void)> *)0x42169f;
    game_timing_or_delay_helper();
    pfStack_2214 = (function<void___cdecl(void)> *)0x12f;
    pfStack_2218 = (function<void___cdecl(void)> *)0x72;
    pcStack_221c = (char *)0x4;
    pfStack_2238 = (function<void___cdecl(void)> *)0x741ddc;
    pfStack_223c = (function<void___cdecl(void)> *)0x4216be;
    FUN_004054a0();
    local_8 = 0x4e;
    pcStack_2250 = &DAT_00741e0c;
    puStack_2254 = (undefined *)0x4216e0;
    FUN_004054a0();
    local_8 = CONCAT31(local_8._1_3_,0x4f);
    pcStack_2250 = (char *)0x28;
    local_202c = auStack_2268;
    FUN_004054a0(&DAT_00741e1c);
    local_8 = 0xffffffff;
    local_170c = FUN_00661cc0(0,2);
    *(undefined4 *)(local_170c + 0x984) = 0x2ee1;
    pfStack_2214 = (function<void___cdecl(void)> *)0x42174c;
    local_1400 = local_170c;
    FUN_004053a0();
    local_1710 = 0x50;
    pfStack_2214 = (function<void___cdecl(void)> *)0x421768;
    game_timing_or_delay_helper();
    pfStack_2214 = (function<void___cdecl(void)> *)0x12f;
    pfStack_2218 = (function<void___cdecl(void)> *)0xd3;
    pcStack_221c = (char *)0x7;
    local_2030 = (undefined1 *)apfStack_2234;
    pfStack_2238 = (function<void___cdecl(void)> *)0x741e3c;
    pfStack_223c = (function<void___cdecl(void)> *)0x42178a;
    local_2034 = FUN_004054a0();
    local_8 = 0x50;
    local_2038 = auStack_224c;
    pcStack_2250 = &DAT_00741e6c;
    puStack_2254 = (undefined *)0x4217ac;
    local_203c = FUN_004054a0();
    local_8 = CONCAT31(local_8._1_3_,0x51);
    pcStack_2250 = (char *)0x28;
    local_21d0 = auStack_2268;
    FUN_004054a0(&DAT_00741e7c);
    local_8 = 0xffffffff;
    local_1714 = FUN_00661cc0(0,2);
    *(undefined4 *)(local_1714 + 0x984) = 0x2ee2;
    pfStack_2214 = (function<void___cdecl(void)> *)0x421818;
    local_1400 = local_1714;
    FUN_004053a0();
    local_1718 = 0x50;
    local_171c = 0x50;
    pfStack_2214 = (function<void___cdecl(void)> *)local_21d4;
    pfStack_2218 = (function<void___cdecl(void)> *)&local_1718;
    pcStack_221c = (char *)0x42184a;
    game_timing_or_delay_helper();
    pfStack_2218 = (function<void___cdecl(void)> *)0x421851;
    puVar6 = (undefined4 *)FUN_00402170();
    pfStack_2214 = (function<void___cdecl(void)> *)*puVar6;
    pfStack_2218 = (function<void___cdecl(void)> *)local_1cd4;
    pcStack_221c = (char *)&local_171c;
    pcStack_2220 = (char *)0x42186c;
    game_timing_or_delay_helper();
    pcStack_221c = (char *)0x421873;
    puVar6 = (undefined4 *)FUN_004021b0();
    pfStack_2218 = (function<void___cdecl(void)> *)*puVar6;
    pcStack_221c = (char *)0x42187b;
    FUN_00405d30();
    pfStack_2214 = (function<void___cdecl(void)> *)DAT_007ca764;
    puVar6 = &DAT_007ca70c;
    ppfVar10 = apfStack_2234;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *ppfVar10 = (function<void___cdecl(void)> *)*puVar6;
      puVar6 = puVar6 + 1;
      ppfVar10 = ppfVar10 + 1;
    }
    pfStack_2238 = (function<void___cdecl(void)> *)0x4218a1;
    FUN_0065e180();
    ExceptionList = local_10;
    return;
  }
  if (0x32c9 < param_1) {
    local_1410 = param_1 + -0x32ca;
    switch(param_1) {
    case 0x32ca:
      uStack_1bbc = 0x50;
      pfStack_2214 = (function<void___cdecl(void)> *)0x41edd6;
      ExceptionList = &local_10;
      uStack_15f4 = game_timing_or_delay_helper();
      piStack_14b0 = (int *)game_loop_helper_018d0();
      piStack_1bc0 = (int *)game_loop_helper_018b0();
      while( true ) {
        if (piStack_14b0 == piStack_1bc0) {
          ExceptionList = local_10;
          return;
        }
        piStack_1434 = piStack_14b0;
        pfStack_2214 = (function<void___cdecl(void)> *)(*piStack_14b0 + 0x1c);
        pfStack_2218 = (function<void___cdecl(void)> *)0x41ee43;
        cVar1 = FUN_00427c60();
        if (cVar1 != '\0') break;
        piStack_14b0 = piStack_14b0 + 1;
      }
      if (*(int *)(*piStack_1434 + 0xb00) <= *(int *)(*piStack_1434 + 0xb04)) {
        ExceptionList = local_10;
        return;
      }
      if (*(int *)(*piStack_1434 + 0xb00) < 1) {
        ExceptionList = local_10;
        return;
      }
      *(int *)(*piStack_1434 + 0xb04) = *(int *)(*piStack_1434 + 0xb04) + 1;
      iStack_1bd0 = (*(int *)(*piStack_1434 + 0xb04) * 0xe0) / *(int *)(*piStack_1434 + 0xb00) +
                    0xa5;
      uStack_1488 = 0;
      break;
    default:
      return;
    case 0x32d2:
      uStack_1b14 = 0x50;
      pfStack_2214 = (function<void___cdecl(void)> *)0x41df13;
      ExceptionList = &local_10;
      uStack_157c = game_timing_or_delay_helper();
      piStack_14d8 = (int *)game_loop_helper_018d0();
      piStack_1b18 = (int *)game_loop_helper_018b0();
      for (; piStack_14d8 != piStack_1b18; piStack_14d8 = piStack_14d8 + 1) {
        piStack_1444 = piStack_14d8;
        pfStack_2214 = (function<void___cdecl(void)> *)(*piStack_14d8 + 0x1c);
        pfStack_2218 = (function<void___cdecl(void)> *)0x41df80;
        cVar1 = FUN_00427c60();
        if (cVar1 == '\0') {
          if (*(int *)(*piStack_1444 + 0x984) == 0x32e6) {
            if (*(char *)(*piStack_1444 + 0x51) == '\0') {
              *(undefined1 *)(*piStack_1444 + 0x51) = 1;
              uStack_1451 = 1;
            }
            else {
              *(undefined1 *)(*piStack_1444 + 0x51) = 0;
              uStack_1451 = 0;
            }
          }
        }
        else {
          bStack_1462 = *(char *)(*piStack_1444 + 0x51) != '\0';
          if (bStack_1462) {
            *(undefined1 *)(*piStack_1444 + 0x51) = 0;
          }
          else {
            *(undefined1 *)(*piStack_1444 + 0x51) = 1;
          }
          bStack_1462 = !bStack_1462;
        }
      }
      ExceptionList = local_10;
      return;
    case 0x32dc:
      iStack_1534 = param_2;
      uStack_15a0 = *(undefined4 *)(param_2 + 0x9d0);
      pfStack_2214 = (function<void___cdecl(void)> *)0x41e760;
      ExceptionList = &local_10;
      iVar2 = FUN_006c8730();
      if (iVar2 != 0x10) {
        ExceptionList = local_10;
        return;
      }
      pfStack_2214 = (function<void___cdecl(void)> *)0x41e781;
      iStack_1b84 = game_loop_helper_cc840();
      uStack_1b6c = 0x50;
      pfStack_2214 = (function<void___cdecl(void)> *)0x41e7a2;
      uStack_15d8 = game_timing_or_delay_helper();
      piStack_14c4 = (int *)game_loop_helper_018d0();
      piStack_1b70 = (int *)game_loop_helper_018b0();
      do {
        if (piStack_14c4 == piStack_1b70) {
LAB_0041e866:
          uStack_1b74 = 0x50;
          pfStack_2214 = (function<void___cdecl(void)> *)0x41e881;
          uStack_15c4 = game_timing_or_delay_helper();
          piStack_14bc = (int *)game_loop_helper_018d0();
          piStack_1b78 = (int *)game_loop_helper_018b0();
          for (; piStack_14bc != piStack_1b78; piStack_14bc = piStack_14bc + 1) {
            piStack_1448 = piStack_14bc;
            pfStack_2214 = (function<void___cdecl(void)> *)0x41e8e8;
            uStack_1b80 = FUN_004054a0();
            local_8 = 4;
            pfStack_2214 = (function<void___cdecl(void)> *)(iStack_1b84 + 0x124);
            pfStack_2218 = afStack_9b8;
            pcStack_221c = (char *)0x41e920;
            uStack_1b7c = uStack_1b80;
            uStack_1b88 = FUN_00427c80();
            pfStack_2214 = (function<void___cdecl(void)> *)(*piStack_1448 + 0x1c);
            pfStack_2218 = (function<void___cdecl(void)> *)0x41e941;
            cStack_1467 = destroy<>();
            std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_9b8);
            local_8 = 0xffffffff;
            std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_820);
            if (cStack_1467 == '\0') {
              pfStack_2214 = (function<void___cdecl(void)> *)(*piStack_1448 + 0x1c);
              pfStack_2218 = (function<void___cdecl(void)> *)0x41e999;
              cVar1 = FUN_00427c60();
              if (cVar1 == '\0') {
                pfStack_2214 = (function<void___cdecl(void)> *)(*piStack_1448 + 0x1c);
                pfStack_2218 = (function<void___cdecl(void)> *)0x41e9c7;
                cVar1 = FUN_00427c60();
                if (cVar1 == '\0') {
                  pfStack_2214 = (function<void___cdecl(void)> *)(*piStack_1448 + 0x1c);
                  pfStack_2218 = (function<void___cdecl(void)> *)0x41e9f5;
                  cVar1 = FUN_00427c60();
                  if (cVar1 != '\0') {
                    *(undefined1 *)(*piStack_1448 + 0x51) = 0;
                  }
                }
                else {
                  *(undefined1 *)(*piStack_1448 + 0x51) = 0;
                }
              }
              else {
                *(undefined1 *)(*piStack_1448 + 0x51) = 0;
              }
            }
            else {
              *(undefined1 *)(*piStack_1448 + 0x51) = 0;
            }
          }
          uStack_1b8c = 0x4e;
          pfStack_2214 = (function<void___cdecl(void)> *)0x41ea2b;
          uStack_15c8 = game_timing_or_delay_helper();
          piStack_14b8 = (int *)game_loop_helper_018d0();
          piVar3 = (int *)game_loop_helper_018b0();
          for (; piStack_14b8 != piVar3; piStack_14b8 = piStack_14b8 + 1) {
            *(undefined1 *)(*piStack_14b8 + 0x51) = 0;
          }
          ExceptionList = local_10;
          return;
        }
        piStack_14c0 = piStack_14c4;
        pfStack_2214 = (function<void___cdecl(void)> *)(*piStack_14c4 + 0x1c);
        pfStack_2218 = (function<void___cdecl(void)> *)0x41e80b;
        cVar1 = FUN_00427c60();
        if (cVar1 != '\0') {
          pfStack_2214 = (function<void___cdecl(void)> *)0x41e832;
          FUN_0040d840();
          CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(*piStack_14c0 + 0xa3c));
          *(undefined4 *)(*piStack_14c0 + 0x9a0) = *(undefined4 *)(iStack_1534 + 0x9a0);
          goto LAB_0041e866;
        }
        piStack_14c4 = piStack_14c4 + 1;
      } while( true );
    case 0x32e6:
      iStack_152c = param_2;
      uStack_1b1c = 0x50;
      pfStack_2214 = (function<void___cdecl(void)> *)0x41e03e;
      ExceptionList = &local_10;
      uStack_1580 = game_timing_or_delay_helper();
      piStack_14d4 = (int *)game_loop_helper_018d0();
      piStack_1b20 = (int *)game_loop_helper_018b0();
      while( true ) {
        if (piStack_14d4 == piStack_1b20) goto LAB_0041e1c1;
        piStack_1528 = piStack_14d4;
        pfStack_2214 = (function<void___cdecl(void)> *)(*piStack_14d4 + 0x1c);
        pfStack_2218 = (function<void___cdecl(void)> *)0x41e0ab;
        cVar1 = FUN_00427c60();
        if (cVar1 != '\0') break;
        piStack_14d4 = piStack_14d4 + 1;
      }
      pfStack_2214 = (function<void___cdecl(void)> *)0x41e0d6;
      FUN_0040d840();
      CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(*piStack_1528 + 0xa3c));
      uStack_1b24 = 0x50;
      pfStack_2214 = (function<void___cdecl(void)> *)0x41e105;
      uStack_1584 = game_timing_or_delay_helper();
      piStack_14d0 = (int *)game_loop_helper_018d0();
      piStack_1b28 = (int *)game_loop_helper_018b0();
      for (; piStack_14d0 != piStack_1b28; piStack_14d0 = piStack_14d0 + 1) {
        piStack_147c = piStack_14d0;
        pfStack_2214 = (function<void___cdecl(void)> *)(*piStack_14d0 + 0x1c);
        pfStack_2218 = (function<void___cdecl(void)> *)0x41e16e;
        cVar1 = FUN_00427c60();
        if (cVar1 == '\0') {
          if (*(int *)(*piStack_147c + 0x984) == 0x32e6) {
            *(undefined1 *)(*piStack_147c + 0x51) = 0;
            *(undefined1 *)(*piStack_147c + 0x9a8) = 0;
          }
        }
        else {
          *(undefined1 *)(*piStack_147c + 0x51) = 0;
        }
      }
LAB_0041e1c1:
      *(undefined1 *)(iStack_152c + 0x9a8) = 1;
      acStack_1b2c[0] = 'P';
      acStack_1b2c[1] = '\0';
      acStack_1b2c[2] = '\0';
      acStack_1b2c[3] = '\0';
      puStack_205c = (undefined1 *)&piStack_2224;
      pcStack_2228 = &DAT_0074164c;
      apfStack_2234[2] = (function<void___cdecl(void)> *)0x41e1ed;
      uStack_2060 = FUN_004054a0();
      local_8 = 2;
      pcStack_2228 = acStack_1b2c;
      apfStack_2234[2] = (function<void___cdecl(void)> *)0x41e20b;
      pcStack_2228 = (char *)game_timing_or_delay_helper();
      local_8 = 0xffffffff;
      apfStack_2234[2] = (function<void___cdecl(void)> *)0x41e218;
      iStack_1b30 = ui_find_widget_by_key();
      *(undefined4 *)(iStack_1b30 + 0x9a0) = *(undefined4 *)(iStack_152c + 0x9a0);
      pfStack_2214 = param_3;
      pfStack_2218 = (function<void___cdecl(void)> *)0x41e255;
      iStack_1588 = iStack_1b30;
      FUN_0041cfa0();
      ExceptionList = local_10;
      return;
    }
    do {
      uStack_1bc4 = 0x50;
      pfStack_2214 = (function<void___cdecl(void)> *)0x41ef09;
      game_timing_or_delay_helper();
      uVar5 = FUN_00401a90();
      if (uVar5 <= uStack_1488) {
LAB_0041ef96:
        uStack_1450 = 0;
        while( true ) {
          uStack_1bd4 = 0x4e;
          pfStack_2214 = (function<void___cdecl(void)> *)0x41efcc;
          game_timing_or_delay_helper();
          uVar5 = FUN_00401a90();
          if (uVar5 <= uStack_1450) break;
          uStack_1bd8 = 0x4e;
          pfStack_2214 = (function<void___cdecl(void)> *)&uStack_1bd8;
          pfStack_2218 = (function<void___cdecl(void)> *)0x41f001;
          game_timing_or_delay_helper();
          pfStack_2214 = (function<void___cdecl(void)> *)0x41f008;
          piVar3 = (int *)game_get_flag_object_01a70();
          piStack_15dc = (int *)(*piVar3 + 0x58);
          *piStack_15dc = *piStack_15dc + -0x12;
          if (((int)uStack_1450 < *(int *)(*piStack_1434 + 0xb04)) ||
             (*(int *)(*piStack_1434 + 0xb04) + 0xf <= (int)uStack_1450)) {
            uStack_1bdc = 0x4e;
            pfStack_2214 = (function<void___cdecl(void)> *)&uStack_1bdc;
            pfStack_2218 = (function<void___cdecl(void)> *)0x41f077;
            game_timing_or_delay_helper();
            pfStack_2214 = (function<void___cdecl(void)> *)0x41f07e;
            piVar3 = (int *)game_get_flag_object_01a70();
            *(undefined1 *)(*piVar3 + 0x51) = 0;
          }
          else {
            uStack_1be0 = 0x4e;
            pfStack_2214 = (function<void___cdecl(void)> *)&uStack_1be0;
            pfStack_2218 = (function<void___cdecl(void)> *)0x41f0a8;
            game_timing_or_delay_helper();
            pfStack_2214 = (function<void___cdecl(void)> *)0x41f0af;
            piVar3 = (int *)game_get_flag_object_01a70();
            *(undefined1 *)(*piVar3 + 0x51) = 1;
          }
          uStack_1450 = uStack_1450 + 1;
        }
        ExceptionList = local_10;
        return;
      }
      uStack_1bc8 = 0x50;
      pfStack_2214 = (function<void___cdecl(void)> *)uStack_1488;
      pfStack_2218 = (function<void___cdecl(void)> *)&uStack_1bc8;
      pcStack_221c = (char *)0x41ef3f;
      game_timing_or_delay_helper();
      pfStack_2218 = (function<void___cdecl(void)> *)0x41ef46;
      piVar3 = (int *)game_get_flag_object_01a70();
      pfStack_2214 = (function<void___cdecl(void)> *)(*piVar3 + 0x1c);
      pfStack_2218 = (function<void___cdecl(void)> *)0x41ef51;
      cVar1 = FUN_00427c60();
      if (cVar1 != '\0') {
        uStack_1bcc = 0x50;
        pfStack_2214 = (function<void___cdecl(void)> *)&uStack_1bcc;
        pfStack_2218 = (function<void___cdecl(void)> *)0x41ef7d;
        game_timing_or_delay_helper();
        pfStack_2214 = (function<void___cdecl(void)> *)0x41ef84;
        piVar3 = (int *)game_get_flag_object_01a70();
        *(int *)(*piVar3 + 0x58) = iStack_1bd0;
        goto LAB_0041ef96;
      }
      uStack_1488 = uStack_1488 + 1;
    } while( true );
  }
  if (param_1 != 0x32c9) {
    if (param_1 < 0x2ee3) {
      if (param_1 == 0x2ee2) {
        ExceptionList = &local_10;
        pcVar7 = (char *)game_get_modal_block_flag();
        if (*pcVar7 != '\0') {
          puVar8 = (undefined1 *)game_get_modal_block_flag();
          *puVar8 = 0;
          ExceptionList = local_10;
          return;
        }
        puVar8 = (undefined1 *)game_get_modal_block_flag();
        *puVar8 = 1;
        ExceptionList = local_10;
        return;
      }
      if (param_1 != 12000) {
        if (param_1 != 0x2ee1) {
          return;
        }
        local_1738 = 0x4c;
        pfStack_2214 = (function<void___cdecl(void)> *)0x421b67;
        ExceptionList = &local_10;
        game_timing_or_delay_helper();
        pfStack_2214 = (function<void___cdecl(void)> *)0x421b6d;
        ui_close_matching_widgets();
        local_173c = 0x50;
        pfStack_2214 = (function<void___cdecl(void)> *)0x421b8b;
        game_timing_or_delay_helper();
        pfStack_2214 = (function<void___cdecl(void)> *)0x421b91;
        ui_close_matching_widgets();
        local_1740 = 0x4e;
        pfStack_2214 = (function<void___cdecl(void)> *)0x421baf;
        game_timing_or_delay_helper();
        pfStack_2214 = (function<void___cdecl(void)> *)0x421bb5;
        ui_close_matching_widgets();
        local_1744 = 0x2335;
        pfStack_2214 = (function<void___cdecl(void)> *)0x421bd3;
        FUN_0040d330();
        FUN_0040d540();
        ExceptionList = local_10;
        return;
      }
      local_15c0 = param_2;
      local_1720 = *(int *)(param_2 + 0x9d0);
      local_148c = *(undefined4 *)(local_1720 + 0x9d0);
      local_1574 = &DAT_00741e9c;
      pfStack_2214 = (function<void___cdecl(void)> *)0x4218f4;
      ExceptionList = &local_10;
      local_1724 = FUN_006c8730();
      if (local_1724 == 0x10) {
        local_1728 = 0x50;
        pfStack_2214 = (function<void___cdecl(void)> *)0x421925;
        local_1578 = game_timing_or_delay_helper();
        local_1508 = (int *)game_loop_helper_018d0();
        local_172c = (int *)game_loop_helper_018b0();
        for (; local_1508 != local_172c; local_1508 = local_1508 + 1) {
          local_14e0 = local_1508;
          pfStack_2214 = (function<void___cdecl(void)> *)(*local_1508 + 0x1c);
          pfStack_2218 = (function<void___cdecl(void)> *)0x421992;
          cVar1 = FUN_00427c60();
          if (cVar1 == '\0') {
            pfStack_2214 = (function<void___cdecl(void)> *)(*local_14e0 + 0x1c);
            pfStack_2218 = (function<void___cdecl(void)> *)0x421a03;
            cVar1 = FUN_00427c60();
            if (cVar1 != '\0') {
              pfStack_2214 = (function<void___cdecl(void)> *)(*local_14e0 + 0xa4c);
              pfStack_2218 = (function<void___cdecl(void)> *)0x421a26;
              cVar1 = FUN_00427c60();
              if (cVar1 != '\0') {
                pfStack_2214 = (function<void___cdecl(void)> *)0x0;
                pfStack_2218 = (function<void___cdecl(void)> *)0x0;
                pcStack_221c = (char *)0x0;
                pcStack_2220 = (char *)0xa;
                local_1cdc = (undefined1 *)&pfStack_2238;
                pfStack_223c = (function<void___cdecl(void)> *)&DAT_00741f24;
                pfStack_2240 = (function<void___cdecl(void)> *)0x421a4f;
                FUN_004054a0();
                pfStack_223c = (function<void___cdecl(void)> *)0x421a54;
                FUN_006634f0();
                ExceptionList = local_10;
                return;
              }
            }
          }
          else {
            pfStack_2214 = (function<void___cdecl(void)> *)(*local_14e0 + 0xa4c);
            pfStack_2218 = (function<void___cdecl(void)> *)0x4219b5;
            cVar1 = FUN_00427c60();
            if (cVar1 != '\0') {
              pfStack_2214 = (function<void___cdecl(void)> *)0x0;
              pfStack_2218 = (function<void___cdecl(void)> *)0x0;
              pcStack_221c = (char *)0x0;
              pcStack_2220 = (char *)0xa;
              local_1cd8 = (undefined1 *)&pfStack_2238;
              pfStack_223c = (function<void___cdecl(void)> *)&DAT_00741ee0;
              pfStack_2240 = (function<void___cdecl(void)> *)0x4219de;
              FUN_004054a0();
              pfStack_223c = (function<void___cdecl(void)> *)0x4219e3;
              FUN_006634f0();
              ExceptionList = local_10;
              return;
            }
          }
        }
      }
      pfStack_2214 = (function<void___cdecl(void)> *)0x421a70;
      iVar2 = game_loop_helper_caba0();
      if (iVar2 == 0x71) {
        pfStack_2214 = (function<void___cdecl(void)> *)0x421a8d;
        local_1730 = game_loop_helper_cc840();
        npk_get_relative_res_path();
        pfStack_2214 = (function<void___cdecl(void)> *)local_1574;
        pfStack_2218 = local_314;
        pcStack_221c = (char *)0x421ab5;
        FUN_00414e80();
      }
      else {
        pfStack_2214 = (function<void___cdecl(void)> *)0x421ac9;
        iVar2 = game_loop_helper_caba0();
        if (iVar2 == 0x8e) {
          pfStack_2214 = (function<void___cdecl(void)> *)0x421ae8;
          local_1734 = game_loop_helper_cd6d0();
          npk_get_relative_res_path();
          pfStack_2214 = (function<void___cdecl(void)> *)local_1574;
          pfStack_2218 = local_314;
          pcStack_221c = (char *)0x421b0d;
          FUN_00414e80();
        }
      }
      pfStack_2214 = *(function<void___cdecl(void)> **)(local_15c0 + 0x9d0);
      pfStack_2218 = (function<void___cdecl(void)> *)0x1;
      pcStack_221c = (char *)0xa;
      pcStack_2220 = (char *)0x370;
      local_1ce0 = (undefined1 *)&pfStack_2238;
      pfStack_223c = local_314;
      pfStack_2240 = (function<void___cdecl(void)> *)0x421b3f;
      FUN_004054a0();
      pfStack_223c = (function<void___cdecl(void)> *)0x421b44;
      FUN_006634f0();
      ExceptionList = local_10;
      return;
    }
    if (param_1 != 13000) {
      return;
    }
    local_1b34 = param_2;
    local_158c = *(undefined4 *)(param_2 + 0x9d0);
    pfStack_2214 = (function<void___cdecl(void)> *)0x41e287;
    ExceptionList = &local_10;
    iVar2 = FUN_006c8730();
    if (iVar2 != 0x10) {
      ExceptionList = local_10;
      return;
    }
    pfStack_2214 = (function<void___cdecl(void)> *)0x41e2a8;
    local_1b48 = game_loop_helper_cc840();
    local_1b38 = 0x50;
    pfStack_2214 = (function<void___cdecl(void)> *)0x41e2c9;
    local_1590 = game_timing_or_delay_helper();
    local_14cc = (int *)game_loop_helper_018d0();
    local_1b3c = (int *)game_loop_helper_018b0();
    for (; local_14cc != local_1b3c; local_14cc = local_14cc + 1) {
      local_1418 = local_14cc;
      pfStack_2214 = (function<void___cdecl(void)> *)0x41e330;
      local_1b44 = FUN_004054a0();
      local_8 = 3;
      pfStack_2214 = (function<void___cdecl(void)> *)(local_1b48 + 0x124);
      pfStack_2218 = local_9e8;
      pcStack_221c = (char *)0x41e369;
      local_1b40 = local_1b44;
      local_1b4c = FUN_00427c80();
      pfStack_2214 = (function<void___cdecl(void)> *)(*local_1418 + 0x1c);
      pfStack_2218 = (function<void___cdecl(void)> *)0x41e38a;
      local_145a = destroy<>();
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_9e8);
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_9d0);
      if (local_145a == '\0') {
        pfStack_2214 = (function<void___cdecl(void)> *)(*local_1418 + 0x1c);
        pfStack_2218 = (function<void___cdecl(void)> *)0x41e40e;
        cVar1 = FUN_00427c60();
        if (cVar1 == '\0') {
          pfStack_2214 = (function<void___cdecl(void)> *)(*local_1418 + 0x1c);
          pfStack_2218 = (function<void___cdecl(void)> *)0x41e46b;
          cVar1 = FUN_00427c60();
          if (cVar1 == '\0') {
            pfStack_2214 = (function<void___cdecl(void)> *)(*local_1418 + 0x1c);
            pfStack_2218 = (function<void___cdecl(void)> *)0x41e4c5;
            cVar1 = FUN_00427c60();
            if (cVar1 != '\0') {
              if (*(char *)(*local_1418 + 0x51) == '\0') {
                *(undefined1 *)(*local_1418 + 0x51) = 1;
                local_1466 = 1;
              }
              else {
                *(undefined1 *)(*local_1418 + 0x51) = 0;
                local_1466 = 0;
              }
            }
          }
          else {
            local_1465 = *(char *)(*local_1418 + 0x51) != '\0';
            if (local_1465) {
              *(undefined1 *)(*local_1418 + 0x51) = 0;
            }
            else {
              *(undefined1 *)(*local_1418 + 0x51) = 1;
            }
            local_1465 = !local_1465;
          }
        }
        else {
          local_1464 = *(char *)(*local_1418 + 0x51) != '\0';
          if (local_1464) {
            *(undefined1 *)(*local_1418 + 0x51) = 0;
          }
          else {
            *(undefined1 *)(*local_1418 + 0x51) = 1;
          }
          local_1464 = !local_1464;
        }
      }
      else {
        local_1463 = *(char *)(*local_1418 + 0x51) != '\0';
        if (local_1463) {
          *(undefined1 *)(*local_1418 + 0x51) = 0;
        }
        else {
          *(undefined1 *)(*local_1418 + 0x51) = 1;
        }
        local_1463 = !local_1463;
      }
    }
    local_1b50 = 0x50;
    pfStack_2214 = (function<void___cdecl(void)> *)0x41e527;
    local_1594 = game_timing_or_delay_helper();
    local_1504 = (int *)game_loop_helper_018d0();
    local_1b54 = (int *)game_loop_helper_018b0();
    while( true ) {
      if (local_1504 == local_1b54) {
        ExceptionList = local_10;
        return;
      }
      local_1530 = local_1504;
      pfStack_2214 = (function<void___cdecl(void)> *)(*local_1504 + 0x1c);
      pfStack_2218 = (function<void___cdecl(void)> *)0x41e594;
      cVar1 = FUN_00427c60();
      if (cVar1 != '\0') break;
      local_1504 = local_1504 + 1;
    }
    local_1429 = '\x01';
    local_1b58 = 0x4e;
    pfStack_2214 = (function<void___cdecl(void)> *)0x41e5c4;
    local_1598 = game_timing_or_delay_helper();
    local_14c8 = (int *)game_loop_helper_018d0();
    local_1b5c = (int *)game_loop_helper_018b0();
    for (; local_14c8 != local_1b5c; local_14c8 = local_14c8 + 1) {
      local_159c = local_14c8;
      if (*(char *)(*local_14c8 + 0x51) == '\x01') {
        local_1429 = '\0';
        *(undefined1 *)(*local_14c8 + 0x51) = 0;
      }
    }
    if (local_1429 != '\x01') {
      ExceptionList = local_10;
      return;
    }
    local_1458 = 0;
    while( true ) {
      local_1b60 = 0x4e;
      pfStack_2214 = (function<void___cdecl(void)> *)0x41e683;
      game_timing_or_delay_helper();
      uVar5 = FUN_00401a90();
      if (uVar5 <= local_1458) break;
      if (((int)local_1458 < *(int *)(*local_1530 + 0xb04)) ||
         (*(int *)(*local_1530 + 0xb04) + 0xf <= (int)local_1458)) {
        local_1b64 = 0x4e;
        pfStack_2214 = (function<void___cdecl(void)> *)&local_1b64;
        pfStack_2218 = (function<void___cdecl(void)> *)0x41e6e7;
        game_timing_or_delay_helper();
        pfStack_2214 = (function<void___cdecl(void)> *)0x41e6ee;
        piVar3 = (int *)game_get_flag_object_01a70();
        *(undefined1 *)(*piVar3 + 0x51) = 0;
      }
      else {
        local_1b68 = 0x4e;
        pfStack_2214 = (function<void___cdecl(void)> *)&local_1b68;
        pfStack_2218 = (function<void___cdecl(void)> *)0x41e718;
        game_timing_or_delay_helper();
        pfStack_2214 = (function<void___cdecl(void)> *)0x41e71f;
        piVar3 = (int *)game_get_flag_object_01a70();
        *(undefined1 *)(*piVar3 + 0x51) = 1;
      }
      local_1458 = local_1458 + 1;
    }
    ExceptionList = local_10;
    return;
  }
  local_1b98 = 0x50;
  pfStack_2214 = (function<void___cdecl(void)> *)0x41eaac;
  ExceptionList = &local_10;
  local_15cc = game_timing_or_delay_helper();
  local_14b4 = (int *)game_loop_helper_018d0();
  local_1b9c = (int *)game_loop_helper_018b0();
  while( true ) {
    if (local_14b4 == local_1b9c) {
      ExceptionList = local_10;
      return;
    }
    local_1430 = local_14b4;
    pfStack_2214 = (function<void___cdecl(void)> *)(*local_14b4 + 0x1c);
    pfStack_2218 = (function<void___cdecl(void)> *)0x41eb19;
    cVar1 = FUN_00427c60();
    if (cVar1 != '\0') break;
    local_14b4 = local_14b4 + 1;
  }
  if (*(int *)(*local_1430 + 0xb04) < 1) {
    ExceptionList = local_10;
    return;
  }
  if (*(int *)(*local_1430 + 0xb00) < 1) {
    ExceptionList = local_10;
    return;
  }
  *(int *)(*local_1430 + 0xb04) = *(int *)(*local_1430 + 0xb04) + -1;
  local_15d0 = (*(int *)(*local_1430 + 0xb04) * 0xe0) / *(int *)(*local_1430 + 0xb00) + 0xa5;
  local_1484 = 0;
  do {
    local_1ba0 = 0x50;
    pfStack_2214 = (function<void___cdecl(void)> *)0x41ebfe;
    game_timing_or_delay_helper();
    uVar5 = FUN_00401a90();
    if (uVar5 <= local_1484) {
LAB_0041ec8b:
      local_144c = 0;
      while( true ) {
        local_1bac = 0x4e;
        pfStack_2214 = (function<void___cdecl(void)> *)0x41ecc1;
        game_timing_or_delay_helper();
        uVar5 = FUN_00401a90();
        if (uVar5 <= local_144c) break;
        local_1bb0 = 0x4e;
        pfStack_2214 = (function<void___cdecl(void)> *)&local_1bb0;
        pfStack_2218 = (function<void___cdecl(void)> *)0x41ecf6;
        game_timing_or_delay_helper();
        pfStack_2214 = (function<void___cdecl(void)> *)0x41ecfd;
        piVar3 = (int *)game_get_flag_object_01a70();
        local_15d4 = (int *)(*piVar3 + 0x58);
        *local_15d4 = *local_15d4 + 0x12;
        if (((int)local_144c < *(int *)(*local_1430 + 0xb04)) ||
           (*(int *)(*local_1430 + 0xb04) + 0xf <= (int)local_144c)) {
          local_1bb4 = 0x4e;
          pfStack_2214 = (function<void___cdecl(void)> *)&local_1bb4;
          pfStack_2218 = (function<void___cdecl(void)> *)0x41ed6c;
          game_timing_or_delay_helper();
          pfStack_2214 = (function<void___cdecl(void)> *)0x41ed73;
          piVar3 = (int *)game_get_flag_object_01a70();
          *(undefined1 *)(*piVar3 + 0x51) = 0;
        }
        else {
          local_1bb8 = 0x4e;
          pfStack_2214 = (function<void___cdecl(void)> *)&local_1bb8;
          pfStack_2218 = (function<void___cdecl(void)> *)0x41ed9d;
          game_timing_or_delay_helper();
          pfStack_2214 = (function<void___cdecl(void)> *)0x41eda4;
          piVar3 = (int *)game_get_flag_object_01a70();
          *(undefined1 *)(*piVar3 + 0x51) = 1;
        }
        local_144c = local_144c + 1;
      }
      ExceptionList = local_10;
      return;
    }
    local_1ba4 = 0x50;
    pfStack_2214 = (function<void___cdecl(void)> *)local_1484;
    pfStack_2218 = (function<void___cdecl(void)> *)&local_1ba4;
    pcStack_221c = (char *)0x41ec34;
    game_timing_or_delay_helper();
    pfStack_2218 = (function<void___cdecl(void)> *)0x41ec3b;
    piVar3 = (int *)game_get_flag_object_01a70();
    pfStack_2214 = (function<void___cdecl(void)> *)(*piVar3 + 0x1c);
    pfStack_2218 = (function<void___cdecl(void)> *)0x41ec46;
    cVar1 = FUN_00427c60();
    if (cVar1 != '\0') {
      local_1ba8 = 0x50;
      pfStack_2214 = (function<void___cdecl(void)> *)&local_1ba8;
      pfStack_2218 = (function<void___cdecl(void)> *)0x41ec72;
      game_timing_or_delay_helper();
      pfStack_2214 = (function<void___cdecl(void)> *)0x41ec79;
      piVar3 = (int *)game_get_flag_object_01a70();
      *(int *)(*piVar3 + 0x58) = local_15d0;
      goto LAB_0041ec8b;
    }
    local_1484 = local_1484 + 1;
  } while( true );
LAB_0041d5bd:
  pfStack_2214 = (function<void___cdecl(void)> *)0x2ee1;
  pfStack_2218 = (function<void___cdecl(void)> *)0x41d5c9;
  ExceptionList = &local_10;
  ui_command_dispatch();
  uStack_1a94 = 0x51;
  pfStack_2214 = (function<void___cdecl(void)> *)0x41d5e7;
  game_timing_or_delay_helper();
  pfStack_2214 = (function<void___cdecl(void)> *)0x41d5ed;
  ui_close_matching_widgets();
  uStack_1a98 = 0x52;
  pfStack_2214 = (function<void___cdecl(void)> *)0x41d60b;
  game_timing_or_delay_helper();
  pfStack_2214 = (function<void___cdecl(void)> *)0x41d611;
  ui_close_matching_widgets();
  uStack_1a9c = 0x53;
  pfStack_2214 = (function<void___cdecl(void)> *)0x41d62f;
  game_timing_or_delay_helper();
  pfStack_2214 = (function<void___cdecl(void)> *)0x41d635;
  ui_close_matching_widgets();
  uStack_1aa0 = 0x54;
  pfStack_2214 = (function<void___cdecl(void)> *)0x41d653;
  game_timing_or_delay_helper();
  pfStack_2214 = (function<void___cdecl(void)> *)0x41d659;
  ui_close_matching_widgets();
  uStack_1aa4 = 0x55;
  pfStack_2214 = (function<void___cdecl(void)> *)0x41d677;
  game_timing_or_delay_helper();
  pfStack_2214 = (function<void___cdecl(void)> *)0x41d67d;
  ui_close_matching_widgets();
  uStack_1aa8 = 0x56;
  pfStack_2214 = (function<void___cdecl(void)> *)0x41d69b;
  game_timing_or_delay_helper();
  pfStack_2214 = (function<void___cdecl(void)> *)0x41d6a1;
  ui_close_matching_widgets();
  uStack_1aac = 0x57;
  pfStack_2214 = (function<void___cdecl(void)> *)0x41d6bf;
  game_timing_or_delay_helper();
  pfStack_2214 = (function<void___cdecl(void)> *)0x41d6c5;
  ui_close_matching_widgets();
  uStack_1ab0 = 0x58;
  pfStack_2214 = (function<void___cdecl(void)> *)0x41d6e3;
  game_timing_or_delay_helper();
  pfStack_2214 = (function<void___cdecl(void)> *)0x41d6e9;
  ui_close_matching_widgets();
  uStack_1ab4 = 0x59;
  pfStack_2214 = (function<void___cdecl(void)> *)0x41d707;
  game_timing_or_delay_helper();
  pfStack_2214 = (function<void___cdecl(void)> *)0x41d70d;
  ui_close_matching_widgets();
  uStack_1ab8 = 0x5b;
  pfStack_2214 = (function<void___cdecl(void)> *)0x41d72b;
  game_timing_or_delay_helper();
  pfStack_2214 = (function<void___cdecl(void)> *)0x41d731;
  ui_close_matching_widgets();
  uStack_1abc = 0x5c;
  pfStack_2214 = (function<void___cdecl(void)> *)0x41d74f;
  game_timing_or_delay_helper();
  pfStack_2214 = (function<void___cdecl(void)> *)0x41d755;
  ui_close_matching_widgets();
  uStack_1ac0 = 0x5d;
  pfStack_2214 = (function<void___cdecl(void)> *)0x41d773;
  game_timing_or_delay_helper();
  pfStack_2214 = (function<void___cdecl(void)> *)0x41d779;
  ui_close_matching_widgets();
  uStack_1ac4 = 0x50;
  pfStack_2214 = (function<void___cdecl(void)> *)0x41d797;
  game_timing_or_delay_helper();
  pfStack_2214 = (function<void___cdecl(void)> *)0x41d79d;
  ui_close_matching_widgets();
  uStack_1ac8 = 0x4e;
  pfStack_2214 = (function<void___cdecl(void)> *)0x41d7bb;
  game_timing_or_delay_helper();
  pfStack_2214 = (function<void___cdecl(void)> *)0x41d7c1;
  ui_close_matching_widgets();
  uStack_1acc = 0x4c;
  pfStack_2214 = (function<void___cdecl(void)> *)0x41d7df;
  game_timing_or_delay_helper();
  pfStack_2214 = (function<void___cdecl(void)> *)0x41d7e5;
  ui_close_matching_widgets();
  uStack_1ad0 = 0x5e;
  pfStack_2214 = (function<void___cdecl(void)> *)0x41d803;
  game_timing_or_delay_helper();
  pfStack_2214 = (function<void___cdecl(void)> *)0x41d809;
  ui_close_matching_widgets();
  uStack_1ad4 = 9000;
  pfStack_2214 = (function<void___cdecl(void)> *)0x41d827;
  FUN_0040d330();
  FUN_0040d540();
  uStack_1ad8 = 0x2329;
  pfStack_2214 = (function<void___cdecl(void)> *)0x41d84a;
  FUN_0040d330();
  FUN_0040d540();
  uStack_1adc = 0x232a;
  pfStack_2214 = (function<void___cdecl(void)> *)0x41d86d;
  FUN_0040d330();
  FUN_0040d540();
  uStack_1ae0 = 0x232b;
  pfStack_2214 = (function<void___cdecl(void)> *)0x41d890;
  FUN_0040d330();
  FUN_0040d540();
  uStack_1ae4 = 0x232c;
  pfStack_2214 = (function<void___cdecl(void)> *)0x41d8b3;
  FUN_0040d330();
  FUN_0040d540();
  uStack_1ae8 = 0x232d;
  pfStack_2214 = (function<void___cdecl(void)> *)0x41d8d6;
  FUN_0040d330();
  FUN_0040d540();
  uStack_1aec = 0x232e;
  pfStack_2214 = (function<void___cdecl(void)> *)0x41d8f9;
  FUN_0040d330();
  FUN_0040d540();
  uStack_1af0 = 0x232f;
  pfStack_2214 = (function<void___cdecl(void)> *)0x41d91c;
  FUN_0040d330();
  FUN_0040d540();
  uStack_1af4 = 0x2330;
  pfStack_2214 = (function<void___cdecl(void)> *)0x41d93f;
  FUN_0040d330();
  FUN_0040d540();
  uStack_1af8 = 0x2332;
  pfStack_2214 = (function<void___cdecl(void)> *)0x41d962;
  FUN_0040d330();
  FUN_0040d540();
  uStack_1afc = 0x2333;
  pfStack_2214 = (function<void___cdecl(void)> *)0x41d985;
  FUN_0040d330();
  FUN_0040d540();
  uStack_1b00 = 0x2334;
  pfStack_2214 = (function<void___cdecl(void)> *)0x41d9a8;
  FUN_0040d330();
  FUN_0040d540();
  uStack_1b04 = 0x2335;
  pfStack_2214 = (function<void___cdecl(void)> *)0x41d9cb;
  FUN_0040d330();
  FUN_0040d540();
  puStack_1e18 = (undefined1 *)&piStack_2224;
  pcStack_2228 = "SERA_SHOP";
  apfStack_2234[2] = (function<void___cdecl(void)> *)0x41d9e8;
  FUN_004054a0();
  pcStack_2228 = (char *)0x41d9ed;
  FUN_004c35e0();
  if (DAT_007ca234 == 0) {
    ExceptionList = local_10;
    return;
  }
  FUN_00415450();
  uStack_14dc = 0;
  while (uVar5 = FUN_004274f0(), uStack_14dc < uVar5) {
    puStack_2040 = (undefined1 *)&pcStack_2228;
    apfStack_2234[2] = (function<void___cdecl(void)> *)uStack_14dc;
    apfStack_2234[1] = (function<void___cdecl(void)> *)0x41da67;
    apfStack_2234[2] = (function<void___cdecl(void)> *)FUN_004274d0();
    apfStack_2234[1] = (function<void___cdecl(void)> *)0x41da6f;
    FUN_00405520();
    apfStack_2234[2] = afStack_a30;
    apfStack_2234[1] = (function<void___cdecl(void)> *)0x41da81;
    uStack_2044 = FUN_004c20b0();
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_a30);
    uStack_14dc = uStack_14dc + 1;
  }
  uStack_1478 = 0;
  while (uVar5 = FUN_00426f70(), uStack_1478 < uVar5) {
    pfStack_2214 = (function<void___cdecl(void)> *)0x41dae5;
    FUN_00426f40();
    pfStack_2214 = (function<void___cdecl(void)> *)0x41daf3;
    iStack_1b08 = FUN_005aa430();
    pfStack_2214 = (function<void___cdecl(void)> *)0x41db11;
    FUN_00426f40();
    puStack_2048 = (undefined1 *)&pcStack_2228;
    apfStack_2234[2] = (function<void___cdecl(void)> *)(iStack_1b08 + 0x84);
    apfStack_2234[1] = (function<void___cdecl(void)> *)0x41db34;
    FUN_00405520();
    apfStack_2234[2] = afStack_a00;
    apfStack_2234[1] = (function<void___cdecl(void)> *)0x41db46;
    uStack_204c = FUN_004c20b0();
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(afStack_a00);
    uStack_1478 = uStack_1478 + 1;
  }
  uStack_1438 = 0;
  while (uVar5 = FUN_00426f70(), uStack_1438 < uVar5) {
    FUN_004153b0();
    local_8 = 0;
    pfStack_2214 = (function<void___cdecl(void)> *)0x41dbbf;
    iVar2 = FUN_00426f40();
    iStack_12c8 = *(int *)(iVar2 + 0x1c) + -100;
    pfStack_2214 = (function<void___cdecl(void)> *)0x41dbe3;
    iVar2 = FUN_00426f40();
    iStack_12c4 = *(int *)(iVar2 + 0x20) + -200;
    uStack_12c0 = 200;
    uStack_12bc = 200;
    FUN_0040b110();
    local_8 = CONCAT31(local_8._1_3_,1);
    uStack_6f8 = 1;
    uStack_71c = 100;
    pfStack_2214 = (function<void___cdecl(void)> *)uStack_1438;
    pfStack_2218 = (function<void___cdecl(void)> *)0x41dc43;
    FUN_00426f40();
    pfStack_2214 = (function<void___cdecl(void)> *)0x41dc4d;
    FUN_0040d680();
    puStack_2050 = (undefined1 *)&pcStack_2228;
    apfStack_2234[2] = (function<void___cdecl(void)> *)0x0;
    apfStack_2234[1] = (function<void___cdecl(void)> *)uStack_1438;
    apfStack_2234[0] = (function<void___cdecl(void)> *)0x41dc77;
    FUN_00426f40();
    apfStack_2234[1] = (function<void___cdecl(void)> *)0x41dc81;
    iVar2 = FUN_0040d680();
    apfStack_2234[2] = (function<void___cdecl(void)> *)(iVar2 + 8);
    apfStack_2234[1] = (function<void___cdecl(void)> *)0x41dc8c;
    FUN_00405520();
    apfStack_2234[2] = (function<void___cdecl(void)> *)0x41dc97;
    iStack_1b10 = FUN_004b8ca0();
    iStack_718 = 0xb9 - *(int *)(iStack_1b10 + 0x10);
    uStack_714 = 0xffe6c89c;
    pfStack_2214 = (function<void___cdecl(void)> *)0x41dcdf;
    iStack_1b0c = iStack_1b10;
    piVar3 = (int *)FUN_00426f40();
    if (*piVar3 == 0x16) {
      if (*(int *)(param_3 + 0xae4) == 8) {
        pfStack_2214 = (function<void___cdecl(void)> *)0x41dd04;
        FUN_004053a0();
      }
      else if (*(int *)(param_3 + 0xae4) == 0x18) {
        pfStack_2214 = (function<void___cdecl(void)> *)0x41dd26;
        FUN_004053a0();
      }
      else if (*(int *)(param_3 + 0xae4) == 0x28) {
        pfStack_2214 = (function<void___cdecl(void)> *)0x41dd48;
        FUN_004053a0();
      }
      else if (*(int *)(param_3 + 0xae4) == 0x38) {
        pfStack_2214 = (function<void___cdecl(void)> *)0x41dd6a;
        FUN_004053a0();
      }
      else if (*(int *)(param_3 + 0xae4) == 0x48) {
        pfStack_2214 = (function<void___cdecl(void)> *)0x41dd89;
        FUN_004053a0();
      }
      else if (*(int *)(param_3 + 0xae4) == 0x58) {
        pfStack_2214 = (function<void___cdecl(void)> *)0x41dda8;
        FUN_004053a0();
      }
      else if (*(int *)(param_3 + 0xae4) == 0x68) {
        pfStack_2214 = (function<void___cdecl(void)> *)0x41ddc7;
        FUN_004053a0();
      }
      else if (*(int *)(param_3 + 0xae4) == 0x78) {
        pfStack_2214 = (function<void___cdecl(void)> *)0x41dde6;
        FUN_004053a0();
      }
    }
    else {
      pfStack_2214 = (function<void___cdecl(void)> *)0x41de01;
      FUN_00426f40();
      pfStack_2214 = (function<void___cdecl(void)> *)0x41de0f;
      FUN_005aa430();
      pfStack_2214 = (function<void___cdecl(void)> *)0x41de20;
      FUN_0040d840();
    }
    pfStack_2214 = (function<void___cdecl(void)> *)0x41de33;
    FUN_0040d310();
    pfStack_2214 = (function<void___cdecl(void)> *)uStack_1438;
    pfStack_2218 = (function<void___cdecl(void)> *)0x41de52;
    FUN_00426f40();
    pfStack_2214 = (function<void___cdecl(void)> *)0x41de5e;
    FUN_004267c0();
    local_8 = local_8 & 0xffffff00;
    FUN_0040c940();
    local_8 = 0xffffffff;
    FUN_00415410();
    uStack_1438 = uStack_1438 + 1;
  }
  ExceptionList = local_10;
  return;
}


/* ==== 004a3110  d3d9_create_texture_004a3110  size=12327 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void d3d9_create_texture_004a3110(int param_1,int param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  function<void___cdecl(void)> *pfVar7;
  int **ppiVar8;
  undefined4 uVar9;
  undefined1 auStack_b9c [12];
  undefined4 uStack_b90;
  undefined1 *puStack_b8c;
  int iStack_b88;
  char *pcStack_b84;
  undefined1 auStack_b80 [4];
  undefined4 uStack_b7c;
  undefined1 *puStack_b78;
  char *pcStack_b74;
  int *piStack_b70;
  char *pcStack_b6c;
  int *piStack_b68;
  function<void___cdecl(void)> *pfStack_b64;
  int *piStack_b60;
  undefined4 *puStack_b5c;
  int *piStack_b58;
  char *pcStack_b54;
  char *pcStack_b50;
  function<void___cdecl(void)> *pfStack_b4c;
  function<void___cdecl(void)> *pfStack_b48;
  function<void___cdecl(void)> *pfStack_b44;
  uint uStack_b40;
  char local_b34 [24];
  undefined1 local_b1c [8];
  undefined1 local_b14 [4];
  undefined1 *local_b10;
  undefined4 local_b0c;
  undefined1 *local_b08;
  undefined1 local_b04 [4];
  undefined1 local_b00 [4];
  undefined4 local_afc;
  undefined1 local_af8 [4];
  undefined1 local_af4 [4];
  undefined1 local_af0 [4];
  undefined1 local_aec [4];
  undefined1 *local_ae8;
  undefined4 local_ae4;
  undefined1 *local_ae0;
  undefined4 local_adc;
  undefined1 *local_ad8;
  undefined1 *local_ad4;
  undefined4 local_ad0;
  undefined1 *local_acc;
  undefined4 local_ac8;
  undefined1 *local_ac4;
  undefined4 local_ac0;
  int **local_abc;
  undefined4 local_ab8;
  int **local_ab4;
  int **local_ab0;
  int **local_aac;
  function<void___cdecl(void)> **local_aa8;
  undefined1 local_aa4 [4];
  undefined1 local_aa0 [4];
  undefined1 local_a9c [4];
  undefined1 local_a98 [4];
  undefined1 local_a94 [4];
  undefined1 *local_a90;
  undefined1 local_a8c [4];
  undefined1 local_a88 [4];
  undefined1 local_a84 [4];
  undefined1 local_a80 [4];
  undefined1 local_a7c [4];
  undefined1 local_a78 [4];
  undefined4 local_a74;
  undefined1 *local_a70;
  undefined4 local_a6c;
  undefined1 *local_a68;
  undefined4 local_a64;
  undefined1 *local_a60;
  undefined4 local_a5c;
  undefined1 *local_a58;
  undefined4 local_a54;
  undefined1 *local_a50;
  undefined4 local_a4c;
  undefined1 *local_a48;
  undefined4 local_a44;
  undefined1 *local_a40;
  undefined4 local_a3c;
  undefined1 *local_a38;
  undefined4 local_a34;
  undefined1 *local_a30;
  undefined4 local_a2c;
  undefined1 *local_a28;
  undefined4 local_a24;
  undefined1 *local_a20;
  undefined4 local_a1c;
  undefined1 *local_a18;
  int **local_a14;
  int **local_a10;
  undefined4 local_a0c;
  undefined1 *local_a08;
  undefined1 local_a04 [12];
  int *local_9f8;
  undefined4 local_9f4;
  undefined4 local_9f0;
  undefined4 local_9ec;
  int local_9e8;
  undefined4 local_9e4;
  int local_9e0;
  int local_9d0;
  int local_9cc;
  undefined4 local_9c8;
  undefined4 local_9c4;
  undefined4 local_9c0;
  int *local_9bc;
  int *local_9b8;
  undefined4 local_9b4;
  undefined4 local_9b0;
  undefined4 local_9ac;
  undefined4 local_9a8;
  undefined4 local_9a4;
  undefined4 local_9a0;
  undefined4 local_99c;
  undefined4 local_998;
  undefined4 local_994;
  int *local_990;
  undefined4 local_98c;
  int local_988;
  undefined4 local_984;
  undefined4 local_980;
  int *local_97c;
  undefined4 local_978;
  undefined4 local_974;
  undefined4 local_970;
  int local_96c;
  undefined4 local_968;
  undefined4 local_964;
  undefined4 local_960;
  undefined4 local_95c;
  int local_958;
  undefined1 local_954 [12];
  undefined4 local_948;
  undefined4 local_944;
  undefined4 local_940;
  undefined4 local_93c;
  undefined4 local_938;
  undefined4 local_934;
  undefined4 local_930;
  undefined4 local_92c;
  undefined4 local_928;
  undefined4 local_924;
  undefined4 local_920;
  undefined4 local_91c;
  undefined4 local_918;
  undefined4 local_914;
  undefined4 local_910;
  int *local_90c;
  undefined4 local_908;
  int local_904;
  undefined4 local_900;
  undefined4 local_8fc;
  undefined4 local_8f8;
  undefined4 local_8f4;
  undefined4 local_8f0;
  int local_8ec;
  undefined4 local_8e8;
  undefined4 local_8e4;
  undefined4 local_8e0;
  int local_8dc;
  undefined4 local_8d8;
  undefined4 local_8d4;
  undefined4 local_8d0;
  undefined4 local_8cc;
  undefined4 local_8c8;
  undefined4 local_8c4;
  int local_8c0;
  undefined4 local_8bc;
  undefined4 local_8b8;
  undefined4 local_8b4;
  char *local_8b0;
  char *local_8ac;
  undefined4 local_8a8;
  undefined4 local_8a4;
  undefined4 local_8a0;
  undefined4 local_89c;
  undefined4 local_898;
  undefined4 local_894;
  undefined4 local_890;
  undefined4 local_88c;
  undefined4 local_888;
  undefined4 local_884;
  undefined4 local_880;
  undefined4 local_87c;
  int *local_878;
  undefined4 local_874;
  undefined4 local_870;
  undefined4 local_86c;
  undefined4 local_868;
  int *local_864;
  undefined4 local_860;
  undefined4 local_85c;
  undefined4 local_858;
  undefined4 local_854;
  undefined4 local_850;
  undefined4 local_84c;
  int local_848;
  undefined4 local_844;
  undefined4 local_840;
  undefined4 local_83c;
  undefined4 local_838;
  int local_834;
  undefined4 local_830;
  undefined4 local_82c;
  undefined4 local_828;
  undefined4 local_824;
  int local_820;
  undefined4 local_81c;
  undefined4 local_818;
  int *local_814;
  undefined4 local_810;
  int local_80c;
  undefined4 local_808;
  undefined4 local_804;
  undefined4 local_800;
  undefined4 local_7fc;
  int local_7f8;
  undefined4 local_7f4;
  undefined4 local_7f0;
  undefined4 local_7ec;
  undefined4 local_7e8;
  int local_7e4;
  undefined4 local_7e0;
  undefined4 local_7dc;
  int *local_7d8;
  undefined4 local_7d4;
  int local_7d0;
  undefined4 local_7cc;
  undefined4 local_7c8;
  int local_7c4;
  undefined4 local_7c0;
  int local_7bc;
  int local_7ac;
  int local_7a8;
  int local_7a4;
  undefined4 local_7a0;
  undefined4 local_79c;
  int *local_798;
  int *local_794;
  int local_790;
  undefined4 local_78c;
  int local_788;
  undefined4 local_784;
  int local_780;
  undefined4 local_77c;
  int local_778;
  int local_774;
  int *local_770;
  int local_76c;
  undefined4 local_768;
  int local_764;
  int *local_760;
  int local_75c;
  undefined4 local_758;
  int local_754;
  undefined4 local_750;
  undefined4 local_74c;
  int local_748;
  int *local_744;
  undefined4 local_740;
  undefined4 local_73c;
  undefined1 local_736;
  undefined1 local_735;
  undefined1 local_734 [4];
  int local_730;
  int local_72c;
  undefined1 local_725;
  int *local_724;
  int *local_720;
  int *local_71c;
  int *local_718;
  int *local_714;
  int *local_710;
  uint local_70c;
  uint local_708;
  undefined4 *local_704;
  int local_700;
  int *local_6fc;
  int *local_6f8;
  int local_6f4;
  undefined1 local_6f0 [12];
  int local_6e4;
  uint local_6e0;
  int *local_6dc;
  uint local_6d8;
  int local_6d4;
  uint local_6d0;
  uint local_6cc;
  char local_6c5;
  char local_6c4;
  undefined1 local_6c3;
  bool local_6c2;
  bool local_6c1;
  bool local_6c0;
  char local_6bf;
  char local_6be;
  char local_6bd;
  char local_6bc;
  char local_6bb;
  char local_6ba;
  char local_6b9;
  uint local_6b8;
  uint local_6b4;
  int local_6b0;
  int local_6ac;
  int local_6a8;
  int *local_6a4;
  int *local_6a0;
  char local_69a;
  char local_699;
  function<void___cdecl(void)> *local_698;
  int *local_694;
  int local_690;
  int *local_68c;
  int local_688;
  int local_684;
  int local_680;
  undefined4 local_67c;
  undefined4 local_668;
  undefined1 local_5ec [148];
  undefined4 local_558;
  undefined4 local_554;
  function<void___cdecl(void)> local_4bc [24];
  function<void___cdecl(void)> local_4a4 [24];
  function<void___cdecl(void)> local_48c [24];
  function<void___cdecl(void)> local_474 [24];
  function<void___cdecl(void)> local_45c [24];
  function<void___cdecl(void)> local_444 [24];
  undefined1 local_42c [32];
  undefined1 local_40c;
  undefined4 local_408;
  undefined4 local_404;
  undefined1 local_3ef;
  function<void___cdecl(void)> local_3cc [24];
  function<void___cdecl(void)> local_3b4 [24];
  function<void___cdecl(void)> local_39c [24];
  function<void___cdecl(void)> local_384 [24];
  function<void___cdecl(void)> local_36c [24];
  function<void___cdecl(void)> local_354 [24];
  function<void___cdecl(void)> local_33c [24];
  function<void___cdecl(void)> local_324 [24];
  function<void___cdecl(void)> local_30c [24];
  function<void___cdecl(void)> local_2f4 [24];
  function<void___cdecl(void)> local_2dc [24];
  function<void___cdecl(void)> local_2c4 [24];
  function<void___cdecl(void)> local_2ac [24];
  function<void___cdecl(void)> local_294 [24];
  function<void___cdecl(void)> local_27c [24];
  function<void___cdecl(void)> local_264 [24];
  function<void___cdecl(void)> local_24c [24];
  undefined1 local_234 [24];
  uint local_21c;
  uint local_218;
  char local_214 [256];
  char local_114 [256];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007132a8;
  local_10 = ExceptionList;
  uStack_b40 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  local_6b0 = param_1;
  local_14 = uStack_b40;
  if (0x2b2 < param_1) {
    if (param_1 == 0x332d) {
      local_730 = param_2;
      local_7d0 = *(int *)(param_2 + 0x9d0);
      local_754 = *(int *)(local_7d0 + 0x9d0);
      pfStack_b44 = *(function<void___cdecl(void)> **)(local_754 + 4);
      pfStack_b48 = (function<void___cdecl(void)> *)0x4a42ec;
      ExceptionList = &local_10;
      iVar2 = FUN_006c8730();
      if (iVar2 != 0x10) {
        ExceptionList = local_10;
        return;
      }
      pfStack_b44 = *(function<void___cdecl(void)> **)(local_754 + 4);
      pfStack_b48 = (function<void___cdecl(void)> *)0x4a430d;
      local_7e4 = game_loop_helper_cc840();
      local_7d4 = 0x348;
      pfStack_b44 = (function<void___cdecl(void)> *)&local_7d4;
      pfStack_b48 = (function<void___cdecl(void)> *)0x4a432e;
      local_758 = game_timing_or_delay_helper();
      pfStack_b44 = (function<void___cdecl(void)> *)0x4a433f;
      local_718 = (int *)game_loop_helper_018d0();
      pfStack_b44 = (function<void___cdecl(void)> *)0x4a4350;
      local_7d8 = (int *)game_loop_helper_018b0();
      while( true ) {
        if (local_718 == local_7d8) {
          ExceptionList = local_10;
          return;
        }
        local_6a4 = local_718;
        pfStack_b44 = (function<void___cdecl(void)> *)&DAT_0074c2f8;
        pfStack_b48 = (function<void___cdecl(void)> *)0x4a4395;
        pfStack_b44 = (function<void___cdecl(void)> *)FUN_004054a0();
        local_8 = 0xd;
        pfStack_b48 = (function<void___cdecl(void)> *)(local_7e4 + 0x124);
        pfStack_b4c = local_354;
        pcStack_b50 = (char *)0x4a43ce;
        local_7e0 = pfStack_b44;
        local_7dc = pfStack_b44;
        pfStack_b44 = (function<void___cdecl(void)> *)FUN_00427c80();
        pfStack_b48 = (function<void___cdecl(void)> *)(*local_6a4 + 0x1c);
        pfStack_b4c = (function<void___cdecl(void)> *)0x4a43ef;
        local_7e8 = pfStack_b44;
        local_6bc = destroy<>();
        pfStack_b44 = (function<void___cdecl(void)> *)0x4a4403;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_354);
        local_8 = 0xffffffff;
        pfStack_b44 = (function<void___cdecl(void)> *)0x4a4415;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_33c);
        if (local_6bc != '\0') break;
        local_718 = local_718 + 1;
      }
      if (*(int *)(*local_6a4 + 0xb04) < 1) {
        ExceptionList = local_10;
        return;
      }
      if (*(int *)(*local_6a4 + 0xb00) < 1) {
        ExceptionList = local_10;
        return;
      }
      *(int *)(*local_6a4 + 0xb04) = *(int *)(*local_6a4 + 0xb04) + -1;
      if (*(int *)(local_730 + 0x9a0) < 0x10) {
        local_75c = *(int *)(local_730 + 0x9a0);
      }
      else {
        local_75c = 0xf;
      }
      local_7f8 = local_75c * -0x12 + 0x163 +
                  (*(int *)(*local_6a4 + 0xb04) * 0xe0) / *(int *)(*local_6a4 + 0xb00);
      local_6d8 = 0;
      do {
        local_7ec = 0x348;
        pfStack_b44 = (function<void___cdecl(void)> *)&local_7ec;
        pfStack_b48 = (function<void___cdecl(void)> *)0x4a4509;
        game_timing_or_delay_helper();
        pfStack_b44 = (function<void___cdecl(void)> *)0x4a4510;
        uVar5 = FUN_00401a90();
        if (uVar5 <= local_6d8) {
LAB_004a4596:
          local_6b4 = 0;
          while( true ) {
            local_7fc = 0x33e;
            pfStack_b44 = (function<void___cdecl(void)> *)&local_7fc;
            pfStack_b48 = (function<void___cdecl(void)> *)0x4a45cc;
            game_timing_or_delay_helper();
            pfStack_b44 = (function<void___cdecl(void)> *)0x4a45d3;
            uVar5 = FUN_00401a90();
            if (uVar5 <= local_6b4) break;
            local_800 = 0x33e;
            pfStack_b44 = (function<void___cdecl(void)> *)local_6b4;
            pfStack_b48 = (function<void___cdecl(void)> *)&local_800;
            pfStack_b4c = (function<void___cdecl(void)> *)0x4a4601;
            game_timing_or_delay_helper();
            pfStack_b48 = (function<void___cdecl(void)> *)0x4a4608;
            piVar4 = (int *)game_get_flag_object_01a70();
            local_760 = (int *)(*piVar4 + 0x58);
            *local_760 = *local_760 + 0x12;
            if (((int)local_6b4 < *(int *)(*local_6a4 + 0xb04)) ||
               (*(int *)(*local_6a4 + 0xb04) + 0xf <= (int)local_6b4)) {
              local_804 = 0x33e;
              pfStack_b44 = (function<void___cdecl(void)> *)local_6b4;
              pfStack_b48 = (function<void___cdecl(void)> *)&local_804;
              pfStack_b4c = (function<void___cdecl(void)> *)0x4a4677;
              game_timing_or_delay_helper();
              pfStack_b48 = (function<void___cdecl(void)> *)0x4a467e;
              piVar4 = (int *)game_get_flag_object_01a70();
              *(undefined1 *)(*piVar4 + 0x51) = 0;
            }
            else {
              local_808 = 0x33e;
              pfStack_b44 = (function<void___cdecl(void)> *)local_6b4;
              pfStack_b48 = (function<void___cdecl(void)> *)&local_808;
              pfStack_b4c = (function<void___cdecl(void)> *)0x4a46a8;
              game_timing_or_delay_helper();
              pfStack_b48 = (function<void___cdecl(void)> *)0x4a46af;
              piVar4 = (int *)game_get_flag_object_01a70();
              *(undefined1 *)(*piVar4 + 0x51) = 1;
            }
            local_6b4 = local_6b4 + 1;
          }
          ExceptionList = local_10;
          return;
        }
        local_7f0 = 0x348;
        pfStack_b44 = (function<void___cdecl(void)> *)&DAT_0074c2e0;
        pfStack_b48 = (function<void___cdecl(void)> *)local_6d8;
        pfStack_b4c = (function<void___cdecl(void)> *)&local_7f0;
        pcStack_b50 = (char *)0x4a453f;
        game_timing_or_delay_helper();
        pfStack_b4c = (function<void___cdecl(void)> *)0x4a4546;
        piVar4 = (int *)game_get_flag_object_01a70();
        pfStack_b48 = (function<void___cdecl(void)> *)(*piVar4 + 0x1c);
        pfStack_b4c = (function<void___cdecl(void)> *)0x4a4551;
        cVar1 = FUN_00427c60();
        if (cVar1 != '\0') {
          local_7f4 = 0x348;
          pfStack_b44 = (function<void___cdecl(void)> *)local_6d8;
          pfStack_b48 = (function<void___cdecl(void)> *)&local_7f4;
          pfStack_b4c = (function<void___cdecl(void)> *)0x4a457d;
          game_timing_or_delay_helper();
          pfStack_b48 = (function<void___cdecl(void)> *)0x4a4584;
          piVar4 = (int *)game_get_flag_object_01a70();
          *(int *)(*piVar4 + 0x58) = local_7f8;
          goto LAB_004a4596;
        }
        local_6d8 = local_6d8 + 1;
      } while( true );
    }
    if (param_1 != 0x332e) {
      if (param_1 != 0x332f) {
        return;
      }
      local_6a8 = param_2;
      local_988 = *(int *)(param_2 + 0x9d0);
      local_748 = *(int *)(local_988 + 0x9d0);
      pfStack_b44 = *(function<void___cdecl(void)> **)(local_748 + 4);
      pfStack_b48 = (function<void___cdecl(void)> *)0x4a3b4e;
      ExceptionList = &local_10;
      iVar2 = FUN_006c8730();
      if (iVar2 != 0x10) {
        ExceptionList = local_10;
        return;
      }
      pfStack_b44 = *(function<void___cdecl(void)> **)(local_748 + 4);
      pfStack_b48 = (function<void___cdecl(void)> *)0x4a3b6f;
      local_6ac = game_loop_helper_cc840();
      local_98c = 0x348;
      pfStack_b44 = (function<void___cdecl(void)> *)&local_98c;
      pfStack_b48 = (function<void___cdecl(void)> *)0x4a3b90;
      local_74c = game_timing_or_delay_helper();
      pfStack_b44 = (function<void___cdecl(void)> *)0x4a3ba1;
      local_720 = (int *)game_loop_helper_018d0();
      pfStack_b44 = (function<void___cdecl(void)> *)0x4a3bb2;
      local_990 = (int *)game_loop_helper_018b0();
      for (; local_720 != local_990; local_720 = local_720 + 1) {
        local_694 = local_720;
        pfStack_b44 = (function<void___cdecl(void)> *)&DAT_0074c194;
        pfStack_b48 = (function<void___cdecl(void)> *)(*local_720 + 0x1c);
        pfStack_b4c = (function<void___cdecl(void)> *)0x4a3bfd;
        cVar1 = FUN_00427c60();
        if (cVar1 == '\0') {
          pfStack_b44 = (function<void___cdecl(void)> *)&DAT_0074c1e4;
          pfStack_b48 = (function<void___cdecl(void)> *)0x4a3e51;
          pfStack_b44 = (function<void___cdecl(void)> *)FUN_004054a0();
          local_8 = 6;
          pfStack_b48 = (function<void___cdecl(void)> *)(local_6ac + 0x124);
          pfStack_b4c = local_384;
          pcStack_b50 = (char *)0x4a3e8a;
          local_9ac = pfStack_b44;
          local_9a8 = pfStack_b44;
          pfStack_b44 = (function<void___cdecl(void)> *)FUN_00427c80();
          pfStack_b48 = (function<void___cdecl(void)> *)(*local_694 + 0x1c);
          pfStack_b4c = (function<void___cdecl(void)> *)0x4a3eab;
          local_9b0 = pfStack_b44;
          local_6bb = destroy<>();
          pfStack_b44 = (function<void___cdecl(void)> *)0x4a3ebf;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_384);
          local_8 = 0xffffffff;
          pfStack_b44 = (function<void___cdecl(void)> *)0x4a3ed1;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_36c);
          if (local_6bb == '\0') {
            pfStack_b44 = (function<void___cdecl(void)> *)&DAT_0074c1cc;
            pfStack_b48 = (function<void___cdecl(void)> *)(*local_694 + 0x1c);
            pfStack_b4c = (function<void___cdecl(void)> *)0x4a3f03;
            cVar1 = FUN_00427c60();
            if (cVar1 == '\0') {
              pfStack_b44 = (function<void___cdecl(void)> *)&DAT_0074c220;
              pfStack_b48 = (function<void___cdecl(void)> *)(*local_694 + 0x1c);
              pfStack_b4c = (function<void___cdecl(void)> *)0x4a3f31;
              cVar1 = FUN_00427c60();
              if (cVar1 == '\0') {
                pfStack_b44 = (function<void___cdecl(void)> *)&DAT_0074c208;
                pfStack_b48 = (function<void___cdecl(void)> *)(*local_694 + 0x1c);
                pfStack_b4c = (function<void___cdecl(void)> *)0x4a3f5f;
                cVar1 = FUN_00427c60();
                if (cVar1 != '\0') {
                  *(undefined1 *)(*local_694 + 0x51) = 0;
                }
              }
              else {
                *(undefined1 *)(*local_694 + 0x51) = 0;
              }
            }
            else {
              *(undefined1 *)(*local_694 + 0x51) = 0;
            }
          }
          else {
            *(undefined1 *)(*local_694 + 0x51) = 0;
          }
        }
        else {
          pfStack_b44 = (function<void___cdecl(void)> *)0x74c184;
          pfStack_b48 = *(function<void___cdecl(void)> **)(local_6a8 + 0x9a0);
          pfStack_b4c = (function<void___cdecl(void)> *)0x4a3c2e;
          pfStack_b48 = (function<void___cdecl(void)> *)FUN_004271b0();
          pfStack_b4c = (function<void___cdecl(void)> *)0x4a3c34;
          cVar1 = FUN_00427e30();
          if (cVar1 == '\0') {
            pfStack_b44 = *(function<void___cdecl(void)> **)(local_6a8 + 0x9a0);
            pfStack_b48 = (function<void___cdecl(void)> *)0x4a3d2e;
            iVar2 = FUN_004271b0();
            pfStack_b44 = *(function<void___cdecl(void)> **)(iVar2 + 0x50);
            pfStack_b48 = *(function<void___cdecl(void)> **)(local_6a8 + 0x9a0);
            pfStack_b4c = (function<void___cdecl(void)> *)0x4a3d50;
            iVar2 = FUN_004271b0();
            pfStack_b48 = *(function<void___cdecl(void)> **)(iVar2 + 0x4c);
            local_ab0 = &piStack_b60;
            pfStack_b64 = *(function<void___cdecl(void)> **)(local_6a8 + 0x9a0);
            piStack_b68 = (int *)0x4a3d7d;
            iVar2 = FUN_004271b0();
            pfStack_b64 = (function<void___cdecl(void)> *)(iVar2 + 0x34);
            piStack_b68 = (int *)0x4a3d88;
            FUN_00405520();
            pfStack_b64 = (function<void___cdecl(void)> *)0x4a3d8d;
            pfStack_b4c = (function<void___cdecl(void)> *)FUN_004caab0();
            pcStack_b50 = (char *)0x4a3da8;
            local_99c = pfStack_b4c;
            local_9a0 = FUN_005d9da0();
            pfStack_b48 = (function<void___cdecl(void)> *)0x4a3dbc;
            pfStack_b48 = (function<void___cdecl(void)> *)npk_get_relative_res_path();
            pfStack_b4c = (function<void___cdecl(void)> *)&DAT_0074c1b8;
            pcStack_b50 = local_214;
            pcStack_b54 = (char *)0x4a3dce;
            FUN_00414e80();
          }
          else {
            pfStack_b44 = *(function<void___cdecl(void)> **)(local_6a8 + 0x9a0);
            pfStack_b48 = (function<void___cdecl(void)> *)0x4a3c60;
            iVar2 = FUN_004271b0();
            pfStack_b44 = *(function<void___cdecl(void)> **)(iVar2 + 0x30);
            pfStack_b48 = *(function<void___cdecl(void)> **)(local_6a8 + 0x9a0);
            pfStack_b4c = (function<void___cdecl(void)> *)0x4a3c82;
            FUN_004271b0();
            pfStack_b48 = (function<void___cdecl(void)> *)0x4a3c8c;
            pfStack_b48 = (function<void___cdecl(void)> *)npk_get_relative_res_path();
            local_aac = &piStack_b60;
            pfStack_b64 = *(function<void___cdecl(void)> **)(local_6a8 + 0x9a0);
            piStack_b68 = (int *)0x4a3cb6;
            pfStack_b64 = (function<void___cdecl(void)> *)FUN_004271b0();
            piStack_b68 = (int *)0x4a3cbe;
            FUN_00405520();
            pfStack_b64 = local_264;
            piStack_b68 = (int *)0x4a3cca;
            local_998 = FUN_004c7e10();
            pfStack_b4c = (function<void___cdecl(void)> *)0x4a3cea;
            local_994 = local_998;
            pfStack_b4c = (function<void___cdecl(void)> *)npk_get_relative_res_path();
            pcStack_b50 = "%s%s%d";
            pcStack_b54 = local_214;
            piStack_b58 = (int *)0x4a3cfc;
            FUN_00414e80();
            pfStack_b44 = (function<void___cdecl(void)> *)0x4a3d0a;
            std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_264);
          }
          pfStack_b44 = (function<void___cdecl(void)> *)local_214;
          pfStack_b48 = (function<void___cdecl(void)> *)0x4a3de3;
          pfStack_b44 = (function<void___cdecl(void)> *)FUN_004054a0();
          pfStack_b48 = (function<void___cdecl(void)> *)0x4a3e03;
          local_9a4 = pfStack_b44;
          FUN_004053e0();
          pfStack_b44 = (function<void___cdecl(void)> *)0x4a3e0e;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_3b4);
          pfStack_b44 = (function<void___cdecl(void)> *)0x4a3e22;
          CDocObjectServer::ReleaseDocSite((CDocObjectServer *)(*local_694 + 0xa3c));
          *(undefined4 *)(*local_694 + 0x9a0) = *(undefined4 *)(local_6a8 + 0x9a0);
        }
      }
      local_9b4 = 0x33e;
      pfStack_b44 = (function<void___cdecl(void)> *)&local_9b4;
      pfStack_b48 = (function<void___cdecl(void)> *)0x4a3f95;
      local_750 = game_timing_or_delay_helper();
      pfStack_b44 = (function<void___cdecl(void)> *)0x4a3fa6;
      local_71c = (int *)game_loop_helper_018d0();
      pfStack_b44 = (function<void___cdecl(void)> *)0x4a3fb7;
      local_9b8 = (int *)game_loop_helper_018b0();
      for (; local_71c != local_9b8; local_71c = local_71c + 1) {
        local_9bc = local_71c;
        *(undefined1 *)(*local_71c + 0x51) = 0;
      }
      local_9c0 = 0x352;
      local_ab4 = &piStack_b58;
      puStack_b5c = (undefined4 *)&DAT_0074c240;
      piStack_b60 = (int *)0x4a4015;
      local_ab8 = FUN_004054a0();
      local_8 = 7;
      puStack_b5c = &local_9c0;
      piStack_b60 = (int *)0x4a4033;
      puStack_b5c = (undefined4 *)game_timing_or_delay_helper();
      local_8 = 0xffffffff;
      piStack_b60 = (int *)0x4a4040;
      FUN_0065dbd0();
      local_9c4 = 0x352;
      local_abc = &piStack_b58;
      puStack_b5c = (undefined4 *)&DAT_0074c238;
      piStack_b60 = (int *)0x4a4062;
      local_ac0 = FUN_004054a0();
      local_8 = 8;
      puStack_b5c = &local_9c4;
      piStack_b60 = (int *)0x4a4080;
      puStack_b5c = (undefined4 *)game_timing_or_delay_helper();
      local_8 = 0xffffffff;
      piStack_b60 = (int *)0x4a408d;
      FUN_0065dbd0();
      local_9c8 = 0x352;
      pfStack_b44 = (function<void___cdecl(void)> *)&local_9c8;
      pfStack_b48 = (function<void___cdecl(void)> *)0x4a40ab;
      pfStack_b44 = (function<void___cdecl(void)> *)game_timing_or_delay_helper();
      pfStack_b48 = (function<void___cdecl(void)> *)0xd5;
      pfStack_b4c = (function<void___cdecl(void)> *)0x75;
      pcStack_b50 = (char *)0x2;
      local_ac4 = (undefined1 *)&piStack_b68;
      pcStack_b6c = "sprite/interface/compoundavatar.img";
      piStack_b70 = (int *)0x4a40ca;
      local_ac8 = FUN_004054a0();
      local_8 = 9;
      local_acc = auStack_b80;
      pcStack_b84 = &DAT_0074c248;
      iStack_b88 = 0x4a40ec;
      local_ad0 = FUN_004054a0();
      local_8 = CONCAT31(local_8._1_3_,10);
      pcStack_b84 = (char *)0x46;
      local_ad4 = auStack_b9c;
      FUN_004054a0(&DAT_0074c284);
      local_8 = 0xffffffff;
      local_7bc = FUN_00661cc0(0,2);
      pfStack_b44 = (function<void___cdecl(void)> *)0x74c274;
      pfStack_b48 = (function<void___cdecl(void)> *)0x4a4148;
      local_6d4 = local_7bc;
      FUN_004053a0();
      *(undefined4 *)(local_6d4 + 0x984) = 0x2a8;
      local_7c0 = 0x352;
      pfStack_b44 = (function<void___cdecl(void)> *)&local_7c0;
      pfStack_b48 = (function<void___cdecl(void)> *)0x4a4173;
      pfStack_b44 = (function<void___cdecl(void)> *)game_timing_or_delay_helper();
      pfStack_b48 = (function<void___cdecl(void)> *)0x10f;
      pfStack_b4c = (function<void___cdecl(void)> *)0x76;
      pcStack_b50 = (char *)0x7;
      local_ad8 = (undefined1 *)&piStack_b68;
      pcStack_b6c = "sprite/interface/compoundavatar.img";
      piStack_b70 = (int *)0x4a4192;
      local_adc = FUN_004054a0();
      local_8 = 0xb;
      local_ae0 = auStack_b80;
      pcStack_b84 = &DAT_0074c294;
      iStack_b88 = 0x4a41b4;
      local_ae4 = FUN_004054a0();
      local_8 = CONCAT31(local_8._1_3_,0xc);
      pcStack_b84 = (char *)0x46;
      local_ae8 = auStack_b9c;
      FUN_004054a0(&DAT_0074c2d0);
      local_8 = 0xffffffff;
      local_7c4 = FUN_00661cc0(0,2);
      pfStack_b44 = (function<void___cdecl(void)> *)0x74c2c0;
      pfStack_b48 = (function<void___cdecl(void)> *)0x4a4210;
      local_6d4 = local_7c4;
      FUN_004053a0();
      *(undefined4 *)(local_6d4 + 0x984) = 0x2ad;
      local_7c8 = 0x352;
      local_7cc = 0x352;
      pfStack_b44 = (function<void___cdecl(void)> *)FUN_006574e0;
      pfStack_b48 = (function<void___cdecl(void)> *)local_aec;
      pfStack_b4c = (function<void___cdecl(void)> *)&local_7c8;
      pcStack_b50 = (char *)0x4a4251;
      game_timing_or_delay_helper();
      pfStack_b4c = (function<void___cdecl(void)> *)0x4a4258;
      puVar3 = (undefined4 *)FUN_00402170();
      pfStack_b48 = (function<void___cdecl(void)> *)*puVar3;
      pfStack_b4c = (function<void___cdecl(void)> *)local_af0;
      pcStack_b50 = (char *)&local_7cc;
      pcStack_b54 = (char *)0x4a4273;
      game_timing_or_delay_helper();
      pcStack_b50 = (char *)0x4a427a;
      puVar3 = (undefined4 *)FUN_004021b0();
      pfStack_b4c = (function<void___cdecl(void)> *)*puVar3;
      pcStack_b50 = (char *)0x4a4282;
      FUN_00405d30();
      pfStack_b44 = (function<void___cdecl(void)> *)DAT_007ca768;
      pfStack_b48 = (function<void___cdecl(void)> *)DAT_007ca764;
      puVar3 = &DAT_007ca70c;
      ppiVar8 = &piStack_b68;
      for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
        *ppiVar8 = (int *)*puVar3;
        puVar3 = puVar3 + 1;
        ppiVar8 = ppiVar8 + 1;
      }
      pcStack_b6c = (char *)0x4a42a8;
      FUN_0065e180();
      ExceptionList = local_10;
      return;
    }
    local_72c = param_2;
    local_80c = *(int *)(param_2 + 0x9d0);
    local_764 = *(int *)(local_80c + 0x9d0);
    pfStack_b44 = *(function<void___cdecl(void)> **)(local_764 + 4);
    pfStack_b48 = (function<void___cdecl(void)> *)0x4a4702;
    ExceptionList = &local_10;
    iVar2 = FUN_006c8730();
    if (iVar2 != 0x10) {
      ExceptionList = local_10;
      return;
    }
    pfStack_b44 = *(function<void___cdecl(void)> **)(local_764 + 4);
    pfStack_b48 = (function<void___cdecl(void)> *)0x4a4723;
    local_820 = game_loop_helper_cc840();
    local_810 = 0x348;
    pfStack_b44 = (function<void___cdecl(void)> *)&local_810;
    pfStack_b48 = (function<void___cdecl(void)> *)0x4a4744;
    local_768 = game_timing_or_delay_helper();
    pfStack_b44 = (function<void___cdecl(void)> *)0x4a4755;
    local_6f8 = (int *)game_loop_helper_018d0();
    pfStack_b44 = (function<void___cdecl(void)> *)0x4a4766;
    local_814 = (int *)game_loop_helper_018b0();
    while( true ) {
      if (local_6f8 == local_814) {
        ExceptionList = local_10;
        return;
      }
      local_6a0 = local_6f8;
      pfStack_b44 = (function<void___cdecl(void)> *)&DAT_0074c334;
      pfStack_b48 = (function<void___cdecl(void)> *)0x4a47ab;
      pfStack_b44 = (function<void___cdecl(void)> *)FUN_004054a0();
      local_8 = 0xe;
      pfStack_b48 = (function<void___cdecl(void)> *)(local_820 + 0x124);
      pfStack_b4c = local_324;
      pcStack_b50 = (char *)0x4a47e4;
      local_81c = pfStack_b44;
      local_818 = pfStack_b44;
      pfStack_b44 = (function<void___cdecl(void)> *)FUN_00427c80();
      pfStack_b48 = (function<void___cdecl(void)> *)(*local_6a0 + 0x1c);
      pfStack_b4c = (function<void___cdecl(void)> *)0x4a4805;
      local_824 = pfStack_b44;
      local_6bd = destroy<>();
      pfStack_b44 = (function<void___cdecl(void)> *)0x4a4819;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_324);
      local_8 = 0xffffffff;
      pfStack_b44 = (function<void___cdecl(void)> *)0x4a482b;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_30c);
      if (local_6bd != '\0') break;
      local_6f8 = local_6f8 + 1;
    }
    if (*(int *)(*local_6a0 + 0xb00) <= *(int *)(*local_6a0 + 0xb04)) {
      ExceptionList = local_10;
      return;
    }
    if (*(int *)(*local_6a0 + 0xb00) < 1) {
      ExceptionList = local_10;
      return;
    }
    *(int *)(*local_6a0 + 0xb04) = *(int *)(*local_6a0 + 0xb04) + 1;
    if (*(int *)(local_72c + 0x9a0) < 0x10) {
      local_76c = *(int *)(local_72c + 0x9a0);
    }
    else {
      local_76c = 0xf;
    }
    local_834 = local_76c * -0x12 + 0x163 +
                (*(int *)(*local_6a0 + 0xb04) * 0xe0) / *(int *)(*local_6a0 + 0xb00);
    local_6e0 = 0;
    do {
      local_828 = 0x348;
      pfStack_b44 = (function<void___cdecl(void)> *)&local_828;
      pfStack_b48 = (function<void___cdecl(void)> *)0x4a492c;
      game_timing_or_delay_helper();
      pfStack_b44 = (function<void___cdecl(void)> *)0x4a4933;
      uVar5 = FUN_00401a90();
      if (uVar5 <= local_6e0) {
LAB_004a49b9:
        local_6b8 = 0;
        while( true ) {
          local_838 = 0x33e;
          pfStack_b44 = (function<void___cdecl(void)> *)&local_838;
          pfStack_b48 = (function<void___cdecl(void)> *)0x4a49ef;
          game_timing_or_delay_helper();
          pfStack_b44 = (function<void___cdecl(void)> *)0x4a49f6;
          uVar5 = FUN_00401a90();
          if (uVar5 <= local_6b8) break;
          local_83c = 0x33e;
          pfStack_b44 = (function<void___cdecl(void)> *)local_6b8;
          pfStack_b48 = (function<void___cdecl(void)> *)&local_83c;
          pfStack_b4c = (function<void___cdecl(void)> *)0x4a4a24;
          game_timing_or_delay_helper();
          pfStack_b48 = (function<void___cdecl(void)> *)0x4a4a2b;
          piVar4 = (int *)game_get_flag_object_01a70();
          local_770 = (int *)(*piVar4 + 0x58);
          *local_770 = *local_770 + -0x12;
          if (((int)local_6b8 < *(int *)(*local_6a0 + 0xb04)) ||
             (*(int *)(*local_6a0 + 0xb04) + 0xf <= (int)local_6b8)) {
            local_840 = 0x33e;
            pfStack_b44 = (function<void___cdecl(void)> *)local_6b8;
            pfStack_b48 = (function<void___cdecl(void)> *)&local_840;
            pfStack_b4c = (function<void___cdecl(void)> *)0x4a4a9a;
            game_timing_or_delay_helper();
            pfStack_b48 = (function<void___cdecl(void)> *)0x4a4aa1;
            piVar4 = (int *)game_get_flag_object_01a70();
            *(undefined1 *)(*piVar4 + 0x51) = 0;
          }
          else {
            local_844 = 0x33e;
            pfStack_b44 = (function<void___cdecl(void)> *)local_6b8;
            pfStack_b48 = (function<void___cdecl(void)> *)&local_844;
            pfStack_b4c = (function<void___cdecl(void)> *)0x4a4acb;
            game_timing_or_delay_helper();
            pfStack_b48 = (function<void___cdecl(void)> *)0x4a4ad2;
            piVar4 = (int *)game_get_flag_object_01a70();
            *(undefined1 *)(*piVar4 + 0x51) = 1;
          }
          local_6b8 = local_6b8 + 1;
        }
        ExceptionList = local_10;
        return;
      }
      local_82c = 0x348;
      pfStack_b44 = (function<void___cdecl(void)> *)&DAT_0074c31c;
      pfStack_b48 = (function<void___cdecl(void)> *)local_6e0;
      pfStack_b4c = (function<void___cdecl(void)> *)&local_82c;
      pcStack_b50 = (char *)0x4a4962;
      game_timing_or_delay_helper();
      pfStack_b4c = (function<void___cdecl(void)> *)0x4a4969;
      piVar4 = (int *)game_get_flag_object_01a70();
      pfStack_b48 = (function<void___cdecl(void)> *)(*piVar4 + 0x1c);
      pfStack_b4c = (function<void___cdecl(void)> *)0x4a4974;
      cVar1 = FUN_00427c60();
      if (cVar1 != '\0') {
        local_830 = 0x348;
        pfStack_b44 = (function<void___cdecl(void)> *)local_6e0;
        pfStack_b48 = (function<void___cdecl(void)> *)&local_830;
        pfStack_b4c = (function<void___cdecl(void)> *)0x4a49a0;
        game_timing_or_delay_helper();
        pfStack_b48 = (function<void___cdecl(void)> *)0x4a49a7;
        piVar4 = (int *)game_get_flag_object_01a70();
        *(int *)(*piVar4 + 0x58) = local_834;
        goto LAB_004a49b9;
      }
      local_6e0 = local_6e0 + 1;
    } while( true );
  }
  if (param_1 == 0x2b2) {
    local_848 = param_2;
    local_700 = *(int *)(param_2 + 0x9d0);
    local_7a4 = *(int *)(local_700 + 0x9d0);
    pfStack_b44 = *(function<void___cdecl(void)> **)(local_7a4 + 4);
    pfStack_b48 = (function<void___cdecl(void)> *)0x4a4b25;
    ExceptionList = &local_10;
    iVar2 = FUN_006c8730();
    if (iVar2 != 0x10) {
      ExceptionList = local_10;
      return;
    }
    pfStack_b44 = *(function<void___cdecl(void)> **)(local_7a4 + 4);
    pfStack_b48 = (function<void___cdecl(void)> *)0x4a4b46;
    local_684 = game_loop_helper_cc840();
    local_69a = '\x01';
    local_84c = 0x348;
    pfStack_b44 = (function<void___cdecl(void)> *)local_734;
    pfStack_b48 = (function<void___cdecl(void)> *)&local_84c;
    pfStack_b4c = (function<void___cdecl(void)> *)0x4a4b75;
    game_timing_or_delay_helper();
    pfStack_b48 = (function<void___cdecl(void)> *)0x4a4b7c;
    FUN_004021b0();
    while( true ) {
      local_850 = 0x348;
      pfStack_b44 = (function<void___cdecl(void)> *)local_af4;
      pfStack_b48 = (function<void___cdecl(void)> *)&local_850;
      pfStack_b4c = (function<void___cdecl(void)> *)0x4a4b9f;
      game_timing_or_delay_helper();
      pfStack_b48 = (function<void___cdecl(void)> *)0x4a4ba6;
      pfStack_b44 = (function<void___cdecl(void)> *)FUN_00402170();
      pfStack_b48 = (function<void___cdecl(void)> *)0x4a4bb2;
      cVar1 = FUN_00426ed0();
      if (cVar1 == '\0') break;
      pfStack_b44 = (function<void___cdecl(void)> *)&DAT_0074c37c;
      pfStack_b48 = (function<void___cdecl(void)> *)0x4a4bcd;
      pfStack_b44 = (function<void___cdecl(void)> *)FUN_004054a0();
      local_8 = 0xf;
      pfStack_b48 = (function<void___cdecl(void)> *)(local_684 + 0x124);
      pfStack_b4c = local_2f4;
      pcStack_b50 = (char *)0x4a4c06;
      local_858 = pfStack_b44;
      local_854 = pfStack_b44;
      pfStack_b44 = (function<void___cdecl(void)> *)FUN_00427c80();
      pfStack_b48 = (function<void___cdecl(void)> *)0x4a4c21;
      local_85c = pfStack_b44;
      piVar4 = (int *)FUN_0044ddc0();
      pfStack_b48 = (function<void___cdecl(void)> *)(*piVar4 + 0x1c);
      pfStack_b4c = (function<void___cdecl(void)> *)0x4a4c2c;
      local_6be = destroy<>();
      pfStack_b44 = (function<void___cdecl(void)> *)0x4a4c40;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_2f4);
      local_8 = 0xffffffff;
      pfStack_b44 = (function<void___cdecl(void)> *)0x4a4c52;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_2dc);
      if (local_6be != '\0') {
        local_69a = '\0';
        break;
      }
      pfStack_b44 = (function<void___cdecl(void)> *)0x0;
      pfStack_b48 = (function<void___cdecl(void)> *)local_a8c;
      pfStack_b4c = (function<void___cdecl(void)> *)0x4a4c7c;
      FUN_00489b50();
    }
    if (local_69a == '\0') {
      local_860 = 0x348;
      pfStack_b44 = (function<void___cdecl(void)> *)&local_860;
      pfStack_b48 = (function<void___cdecl(void)> *)0x4a4cac;
      local_78c = game_timing_or_delay_helper();
      pfStack_b44 = (function<void___cdecl(void)> *)0x4a4cbd;
      local_714 = (int *)game_loop_helper_018d0();
      pfStack_b44 = (function<void___cdecl(void)> *)0x4a4cce;
      local_864 = (int *)game_loop_helper_018b0();
      for (; local_714 != local_864; local_714 = local_714 + 1) {
        local_68c = local_714;
        pfStack_b44 = (function<void___cdecl(void)> *)&DAT_0074c358;
        pfStack_b48 = (function<void___cdecl(void)> *)0x4a4d13;
        pfStack_b44 = (function<void___cdecl(void)> *)FUN_004054a0();
        local_8 = 0x10;
        pfStack_b48 = (function<void___cdecl(void)> *)(local_684 + 0x124);
        pfStack_b4c = local_2c4;
        pcStack_b50 = (char *)0x4a4d4c;
        local_86c = pfStack_b44;
        local_868 = pfStack_b44;
        pfStack_b44 = (function<void___cdecl(void)> *)FUN_00427c80();
        pfStack_b48 = (function<void___cdecl(void)> *)(*local_68c + 0x1c);
        pfStack_b4c = (function<void___cdecl(void)> *)0x4a4d6d;
        local_870 = pfStack_b44;
        local_6bf = destroy<>();
        pfStack_b44 = (function<void___cdecl(void)> *)0x4a4d81;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_2c4);
        local_8 = 0xffffffff;
        pfStack_b44 = (function<void___cdecl(void)> *)0x4a4d93;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_2ac);
        if (local_6bf == '\0') {
          pfStack_b44 = (function<void___cdecl(void)> *)&DAT_0074c3b8;
          pfStack_b48 = (function<void___cdecl(void)> *)(*local_68c + 0x1c);
          pfStack_b4c = (function<void___cdecl(void)> *)0x4a4f7d;
          cVar1 = FUN_00427c60();
          if (cVar1 == '\0') {
            pfStack_b44 = (function<void___cdecl(void)> *)&DAT_0074c3a0;
            pfStack_b48 = (function<void___cdecl(void)> *)(*local_68c + 0x1c);
            pfStack_b4c = (function<void___cdecl(void)> *)0x4a4fda;
            cVar1 = FUN_00427c60();
            if (cVar1 == '\0') {
              pfStack_b44 = (function<void___cdecl(void)> *)&DAT_0074c3f4;
              pfStack_b48 = (function<void___cdecl(void)> *)(*local_68c + 0x1c);
              pfStack_b4c = (function<void___cdecl(void)> *)0x4a5034;
              cVar1 = FUN_00427c60();
              if (cVar1 != '\0') {
                if (*(char *)(*local_68c + 0x51) == '\0') {
                  *(undefined1 *)(*local_68c + 0x51) = 1;
                  local_6c3 = 1;
                }
                else {
                  *(undefined1 *)(*local_68c + 0x51) = 0;
                  local_6c3 = 0;
                }
              }
            }
            else {
              local_6c2 = *(char *)(*local_68c + 0x51) != '\0';
              if (local_6c2) {
                *(undefined1 *)(*local_68c + 0x51) = 0;
              }
              else {
                *(undefined1 *)(*local_68c + 0x51) = 1;
              }
              local_6c2 = !local_6c2;
            }
          }
          else {
            local_6c1 = *(char *)(*local_68c + 0x51) != '\0';
            if (local_6c1) {
              *(undefined1 *)(*local_68c + 0x51) = 0;
            }
            else {
              *(undefined1 *)(*local_68c + 0x51) = 1;
            }
            local_6c1 = !local_6c1;
          }
        }
        else {
          local_6c0 = *(char *)(*local_68c + 0x51) != '\0';
          if (local_6c0) {
            *(undefined1 *)(*local_68c + 0x51) = 0;
          }
          else {
            *(undefined1 *)(*local_68c + 0x51) = 1;
          }
          local_6c0 = !local_6c0;
          local_699 = '\x01';
          local_874 = 0x33e;
          pfStack_b44 = (function<void___cdecl(void)> *)&local_874;
          pfStack_b48 = (function<void___cdecl(void)> *)0x4a4dfc;
          local_79c = game_timing_or_delay_helper();
          pfStack_b44 = (function<void___cdecl(void)> *)0x4a4e0d;
          local_710 = (int *)game_loop_helper_018d0();
          pfStack_b44 = (function<void___cdecl(void)> *)0x4a4e1e;
          local_878 = (int *)game_loop_helper_018b0();
          for (; local_710 != local_878; local_710 = local_710 + 1) {
            local_798 = local_710;
            if (*(char *)(*local_710 + 0x51) == '\x01') {
              local_699 = '\0';
              *(undefined1 *)(*local_710 + 0x51) = 0;
            }
          }
          if (local_699 == '\x01') {
            local_6cc = 0;
            while( true ) {
              local_87c = 0x33e;
              pfStack_b44 = (function<void___cdecl(void)> *)&local_87c;
              pfStack_b48 = (function<void___cdecl(void)> *)0x4a4ebb;
              game_timing_or_delay_helper();
              pfStack_b44 = (function<void___cdecl(void)> *)0x4a4ec2;
              uVar5 = FUN_00401a90();
              if (uVar5 <= local_6cc) break;
              if (((int)local_6cc < *(int *)(*local_68c + 0xb04)) ||
                 (*(int *)(*local_68c + 0xb04) + 0xf <= (int)local_6cc)) {
                local_880 = 0x33e;
                pfStack_b44 = (function<void___cdecl(void)> *)local_6cc;
                pfStack_b48 = (function<void___cdecl(void)> *)&local_880;
                pfStack_b4c = (function<void___cdecl(void)> *)0x4a4f1f;
                game_timing_or_delay_helper();
                pfStack_b48 = (function<void___cdecl(void)> *)0x4a4f26;
                piVar4 = (int *)game_get_flag_object_01a70();
                *(undefined1 *)(*piVar4 + 0x51) = 0;
              }
              else {
                local_884 = 0x33e;
                pfStack_b44 = (function<void___cdecl(void)> *)local_6cc;
                pfStack_b48 = (function<void___cdecl(void)> *)&local_884;
                pfStack_b4c = (function<void___cdecl(void)> *)0x4a4f50;
                game_timing_or_delay_helper();
                pfStack_b48 = (function<void___cdecl(void)> *)0x4a4f57;
                piVar4 = (int *)game_get_flag_object_01a70();
                *(undefined1 *)(*piVar4 + 0x51) = 1;
              }
              local_6cc = local_6cc + 1;
            }
          }
        }
      }
      ExceptionList = local_10;
      return;
    }
    pfStack_b44 = (function<void___cdecl(void)> *)&DAT_0074c3d0;
    pfStack_b48 = (function<void___cdecl(void)> *)0x4a5090;
    pfStack_b44 = (function<void___cdecl(void)> *)FUN_004054a0();
    local_8 = 0x11;
    pfStack_b48 = (function<void___cdecl(void)> *)(local_684 + 0x124);
    pfStack_b4c = local_294;
    pcStack_b50 = (char *)0x4a50c9;
    local_88c = pfStack_b44;
    local_888 = pfStack_b44;
    local_894 = FUN_00427c80();
    local_8._0_1_ = 0x12;
    pfStack_b44 = (function<void___cdecl(void)> *)local_b00;
    pfStack_b48 = (function<void___cdecl(void)> *)0x4a50f7;
    local_890 = local_894;
    pfStack_b44 = (function<void___cdecl(void)> *)FUN_0040d380();
    pfStack_b48 = (function<void___cdecl(void)> *)local_894;
    pfStack_b4c = (function<void___cdecl(void)> *)local_b04;
    pcStack_b50 = (char *)0x4a5114;
    FUN_0040e2f0();
    pfStack_b48 = (function<void___cdecl(void)> *)0x4a511b;
    local_6c4 = FUN_0040d970();
    local_8 = CONCAT31(local_8._1_3_,0x11);
    pfStack_b44 = (function<void___cdecl(void)> *)0x4a5130;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_294);
    local_8 = 0xffffffff;
    pfStack_b44 = (function<void___cdecl(void)> *)0x4a5142;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_3cc);
    if (local_6c4 != '\0') {
      pfStack_b44 = (function<void___cdecl(void)> *)0x4a515c;
      FUN_00426e80();
      local_8 = 0x13;
      pfStack_b44 = (function<void___cdecl(void)> *)0x4a516e;
      CCmdUI::CCmdUI((CCmdUI *)&local_9f8);
      pfStack_b44 = (function<void___cdecl(void)> *)0x4a517f;
      iVar2 = FUN_004271d0();
      if ((uint)(iVar2 * 0x12) < 0x10f) {
        pfStack_b44 = (function<void___cdecl(void)> *)0x4a51a6;
        iVar2 = FUN_004271d0();
        local_794 = (int *)(iVar2 * 0x12);
      }
      else {
        local_794 = (int *)0x10e;
      }
      pfStack_b44 = (function<void___cdecl(void)> *)&local_9f8;
      pfStack_b48 = (function<void___cdecl(void)> *)0x1;
      pfStack_b4c = (function<void___cdecl(void)> *)0x0;
      pcStack_b50 = (char *)0x0;
      pcStack_b54 = (char *)0x1;
      piStack_b58 = local_794;
      puStack_b5c = (undefined4 *)0xeb;
      piStack_b60 = *(int **)(DAT_007ca1a4 + 4);
      pfStack_b64 = (function<void___cdecl(void)> *)0x4a51da;
      local_73c = D3DXCreateTexture();
      pfStack_b44 = (function<void___cdecl(void)> *)local_234;
      pfStack_b48 = (function<void___cdecl(void)> *)0x0;
      pfStack_b4c = (function<void___cdecl(void)> *)local_9f8;
      pcStack_b50 = (char *)0x4a51fd;
      local_73c = (**(code **)(*local_9f8 + 0x44))();
      pcStack_b50 = (char *)0x0;
      pcStack_b54 = (char *)0x0;
      piStack_b58 = &local_9d0;
      puStack_b5c = (undefined4 *)0x0;
      piStack_b60 = local_9f8;
      pfStack_b64 = (function<void___cdecl(void)> *)0x4a5224;
      local_73c = (**(code **)(*local_9f8 + 0x4c))();
      for (local_70c = 0; local_70c < local_218; local_70c = local_70c + 1) {
        for (local_708 = 0; local_708 < local_21c; local_708 = local_708 + 1) {
          local_704 = (undefined4 *)(local_70c * local_9d0 + local_9cc + local_708 * 4);
          local_725 = (undefined1)*local_704;
          local_736 = (undefined1)((ushort)*(undefined2 *)local_704 >> 8);
          local_735 = (undefined1)((uint)*local_704 >> 0x10);
          *local_704 = 0xff000000;
        }
      }
      pfStack_b64 = (function<void___cdecl(void)> *)0x0;
      piStack_b68 = local_9f8;
      pcStack_b6c = (char *)0x4a5310;
      local_73c = (**(code **)(*local_9f8 + 0x50))();
      local_9f4 = 0;
      local_9f0 = 0;
      local_9ec = 0xe0;
      pfStack_b44 = (function<void___cdecl(void)> *)0x4a5345;
      iVar2 = FUN_004271d0();
      if ((uint)(iVar2 * 0x12) < 0x10f) {
        pfStack_b44 = (function<void___cdecl(void)> *)0x4a536d;
        local_790 = FUN_004271d0();
        local_790 = local_790 * 0x12;
      }
      else {
        local_790 = 0x10e;
      }
      local_9e8 = local_790;
      local_9e4 = 0xe0;
      pfStack_b44 = (function<void___cdecl(void)> *)0x4a539d;
      iVar2 = FUN_004271d0();
      if ((uint)(iVar2 * 0x12) < 0x10f) {
        pfStack_b44 = (function<void___cdecl(void)> *)0x4a53c5;
        local_788 = FUN_004271d0();
        local_788 = local_788 * 0x12;
      }
      else {
        local_788 = 0x10e;
      }
      local_9e0 = local_788;
      pfStack_b44 = (function<void___cdecl(void)> *)&local_9f8;
      pfStack_b48 = (function<void___cdecl(void)> *)0x4a53ec;
      FUN_00426e60();
      pfStack_b44 = (function<void___cdecl(void)> *)&DAT_0074c430;
      pfStack_b48 = (function<void___cdecl(void)> *)0x4a53fd;
      pfStack_b44 = (function<void___cdecl(void)> *)FUN_004054a0();
      local_8._0_1_ = 0x14;
      pfStack_b48 = (function<void___cdecl(void)> *)(local_684 + 0x124);
      pfStack_b4c = local_27c;
      pcStack_b50 = (char *)0x4a5433;
      local_89c = pfStack_b44;
      local_898 = pfStack_b44;
      pfStack_b48 = (function<void___cdecl(void)> *)FUN_00427c80();
      local_8._0_1_ = 0x15;
      pfStack_b44 = (function<void___cdecl(void)> *)local_a04;
      pfStack_b4c = (function<void___cdecl(void)> *)0x4a5468;
      local_8a4 = pfStack_b48;
      local_8a0 = pfStack_b48;
      FUN_004273d0();
      pfStack_b48 = (function<void___cdecl(void)> *)0x4a546f;
      FUN_00426de0();
      local_8._0_1_ = 0x14;
      pfStack_b44 = (function<void___cdecl(void)> *)0x4a547e;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_27c);
      local_8 = CONCAT31(local_8._1_3_,0x13);
      pfStack_b44 = (function<void___cdecl(void)> *)0x4a548d;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_24c);
      local_8 = 0xffffffff;
      pfStack_b44 = (function<void___cdecl(void)> *)0x4a54a0;
      FUN_00411b80();
    }
    local_8a8 = 0x348;
    pfStack_b44 = (function<void___cdecl(void)> *)0x4a54bc;
    uVar5 = FUN_004271d0();
    if (uVar5 < 0x10) {
      pfStack_b44 = (function<void___cdecl(void)> *)0x4a54de;
      local_7a8 = FUN_004271d0();
    }
    else {
      local_7a8 = 0xf;
    }
    local_8bc = 0x352;
    pfStack_b44 = (function<void___cdecl(void)> *)&local_8a8;
    pfStack_b48 = (function<void___cdecl(void)> *)0x4a54ff;
    pfStack_b44 = (function<void___cdecl(void)> *)game_timing_or_delay_helper();
    pfStack_b48 = (function<void___cdecl(void)> *)(local_7a8 * -0x12 + 0xf0);
    pfStack_b4c = (function<void___cdecl(void)> *)0x1b;
    pcStack_b50 = (char *)0x0;
    pcStack_b54 = &DAT_0074c40c;
    piStack_b58 = (int *)0x4a5523;
    pcStack_b6c = (char *)FUN_004054a0();
    local_8 = 0x16;
    local_b08 = (undefined1 *)&piStack_b68;
    pcStack_b74 = (char *)&piStack_b68;
    piStack_b70 = (int *)(local_684 + 0x124);
    puStack_b78 = (undefined1 *)0x4a5560;
    local_8b0 = pcStack_b6c;
    local_8ac = pcStack_b6c;
    local_b0c = FUN_00427c80();
    local_8._0_1_ = 0x17;
    pcStack_b6c = &DAT_0074c464;
    piStack_b70 = (int *)0x4a557d;
    pcStack_b84 = (char *)FUN_004054a0();
    local_8._0_1_ = 0x18;
    local_b10 = auStack_b80;
    puStack_b8c = auStack_b80;
    iStack_b88 = local_684 + 0x124;
    uStack_b90 = 0x4a55b8;
    local_8b8 = pcStack_b84;
    local_8b4 = pcStack_b84;
    local_afc = FUN_00427c80();
    local_8._0_1_ = 0x19;
    pcStack_b84 = (char *)0x64;
    local_a08 = auStack_b9c;
    local_a0c = FUN_004054a0(&DAT_0074c454);
    local_8._0_1_ = 0x1a;
    uVar9 = 0;
    uVar6 = game_timing_or_delay_helper(&local_8bc);
    local_8._0_1_ = 0x1b;
    local_8c0 = FUN_00661cc0(uVar6,uVar9);
    local_8 = CONCAT31(local_8._1_3_,0x16);
    pfStack_b44 = (function<void___cdecl(void)> *)0x4a5627;
    local_688 = local_8c0;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_4bc);
    local_8 = 0xffffffff;
    pfStack_b44 = (function<void___cdecl(void)> *)0x4a5639;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_4a4);
    local_698 = (function<void___cdecl(void)> *)0x0;
    while( true ) {
      pfStack_b44 = (function<void___cdecl(void)> *)0x4a5666;
      pfVar7 = (function<void___cdecl(void)> *)FUN_004271d0();
      if (pfVar7 <= local_698) break;
      pfStack_b44 = (function<void___cdecl(void)> *)0x74c490;
      pfStack_b48 = local_698;
      pfStack_b4c = (function<void___cdecl(void)> *)0x4a568f;
      pfStack_b48 = (function<void___cdecl(void)> *)FUN_004271b0();
      pfStack_b4c = (function<void___cdecl(void)> *)0x4a5695;
      cVar1 = FUN_00427e30();
      if (cVar1 == '\0') {
        pfStack_b44 = local_698;
        pfStack_b48 = (function<void___cdecl(void)> *)0x4a5777;
        iVar2 = FUN_004271b0();
        pfStack_b44 = *(function<void___cdecl(void)> **)(iVar2 + 0x50);
        pfStack_b48 = local_698;
        pfStack_b4c = (function<void___cdecl(void)> *)0x4a5793;
        iVar2 = FUN_004271b0();
        pfStack_b48 = *(function<void___cdecl(void)> **)(iVar2 + 0x4c);
        local_a14 = &piStack_b60;
        pfStack_b64 = local_698;
        piStack_b68 = (int *)0x4a57ba;
        iVar2 = FUN_004271b0();
        pfStack_b64 = (function<void___cdecl(void)> *)(iVar2 + 0x34);
        piStack_b68 = (int *)0x4a57c5;
        FUN_00405520();
        pfStack_b64 = (function<void___cdecl(void)> *)0x4a57ca;
        pfStack_b4c = (function<void___cdecl(void)> *)FUN_004caab0();
        pcStack_b50 = (char *)0x4a57e5;
        local_8cc = pfStack_b4c;
        local_8d0 = FUN_005d9da0();
        pfStack_b48 = (function<void___cdecl(void)> *)0x4a57f9;
        pfStack_b48 = (function<void___cdecl(void)> *)npk_get_relative_res_path();
        pfStack_b4c = (function<void___cdecl(void)> *)&DAT_0074c4d0;
        pcStack_b50 = local_114;
        pcStack_b54 = (char *)0x4a580b;
        FUN_00414e80();
      }
      else {
        pfStack_b44 = local_698;
        pfStack_b48 = (function<void___cdecl(void)> *)0x4a56bb;
        iVar2 = FUN_004271b0();
        pfStack_b44 = *(function<void___cdecl(void)> **)(iVar2 + 0x30);
        pfStack_b48 = local_698;
        pfStack_b4c = (function<void___cdecl(void)> *)0x4a56d7;
        FUN_004271b0();
        pfStack_b48 = (function<void___cdecl(void)> *)0x4a56e1;
        pfStack_b48 = (function<void___cdecl(void)> *)npk_get_relative_res_path();
        local_a10 = &piStack_b60;
        pfStack_b64 = local_698;
        piStack_b68 = (int *)0x4a5705;
        pfStack_b64 = (function<void___cdecl(void)> *)FUN_004271b0();
        piStack_b68 = (int *)0x4a570d;
        FUN_00405520();
        pfStack_b64 = local_48c;
        piStack_b68 = (int *)0x4a5719;
        local_8c8 = FUN_004c7e10();
        pfStack_b4c = (function<void___cdecl(void)> *)0x4a5739;
        local_8c4 = local_8c8;
        pfStack_b4c = (function<void___cdecl(void)> *)npk_get_relative_res_path();
        pcStack_b50 = "%s%s%d";
        pcStack_b54 = local_114;
        piStack_b58 = (int *)0x4a574b;
        FUN_00414e80();
        pfStack_b44 = (function<void___cdecl(void)> *)0x4a5759;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_48c);
      }
      local_8d4 = 0x33e;
      pfStack_b44 = (function<void___cdecl(void)> *)0x4a5829;
      uVar5 = FUN_004271d0();
      if (uVar5 < 0x10) {
        pfStack_b44 = (function<void___cdecl(void)> *)0x4a584b;
        local_778 = FUN_004271d0();
      }
      else {
        local_778 = 0xf;
      }
      local_8d8 = 0x352;
      pfStack_b44 = (function<void___cdecl(void)> *)&local_8d4;
      pfStack_b48 = (function<void___cdecl(void)> *)0x4a586c;
      pfStack_b44 = (function<void___cdecl(void)> *)game_timing_or_delay_helper();
      pfStack_b48 = (function<void___cdecl(void)> *)
                    (local_778 * -0x12 + 0xf0 + (int)local_698 * 0x12);
      pfStack_b4c = (function<void___cdecl(void)> *)0x1b;
      pcStack_b50 = (char *)0x29;
      local_a18 = (undefined1 *)&piStack_b68;
      pcStack_b6c = "sprite/interface/cashshop/cashshopbuywindow.img";
      piStack_b70 = (int *)0x4a589e;
      local_a1c = FUN_004054a0();
      local_8 = 0x1c;
      local_a20 = auStack_b80;
      pcStack_b84 = local_114;
      iStack_b88 = 0x4a58c2;
      local_a24 = FUN_004054a0();
      local_8._0_1_ = 0x1d;
      pcStack_b84 = (char *)0x27;
      local_a28 = auStack_b9c;
      local_a2c = FUN_004054a0(&DAT_0074c50c);
      local_8 = CONCAT31(local_8._1_3_,0x1e);
      uVar9 = 0;
      uVar6 = game_timing_or_delay_helper(&local_8d8);
      local_8 = 0xffffffff;
      local_8dc = FUN_00661cc0(uVar6,uVar9);
      pfStack_b44 = (function<void___cdecl(void)> *)0x0;
      pfStack_b48 = (function<void___cdecl(void)> *)0x4a5935;
      local_688 = local_8dc;
      FUN_0040d680();
      pfStack_b44 = (function<void___cdecl(void)> *)0x4a593c;
      FUN_00414fc0();
      pfStack_b44 = (function<void___cdecl(void)> *)0x4a5947;
      FUN_0040aa90();
      local_8 = 0x1f;
      pfStack_b44 = (function<void___cdecl(void)> *)0x74c4dc;
      pfStack_b48 = (function<void___cdecl(void)> *)0x4a595e;
      FUN_004053a0();
      local_40c = 0x29;
      local_408 = 0;
      local_404 = 0;
      local_3ef = 3;
      pfStack_b44 = (function<void___cdecl(void)> *)local_42c;
      pfStack_b48 = (function<void___cdecl(void)> *)0x4a5998;
      FUN_00427660();
      *(undefined1 *)(local_688 + 0x6e0) = 1;
      pfStack_b44 = (function<void___cdecl(void)> *)local_114;
      pfStack_b48 = (function<void___cdecl(void)> *)0x4a59b7;
      pfStack_b44 = (function<void___cdecl(void)> *)FUN_004054a0();
      pfStack_b48 = (function<void___cdecl(void)> *)0x4a59d5;
      local_8e0 = pfStack_b44;
      FUN_004053e0();
      pfStack_b44 = (function<void___cdecl(void)> *)0x4a59e0;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_474);
      *(undefined4 *)(local_688 + 0xa40) = 4;
      *(undefined4 *)(local_688 + 0xa44) = 3;
      *(undefined4 *)(local_688 + 0xa48) = 0xffffffff;
      *(undefined4 *)(local_688 + 0xa64) = 0;
      *(undefined4 *)(local_688 + 0x984) = 0x332f;
      *(int *)(local_688 + 0x9d0) = local_700;
      *(function<void___cdecl(void)> **)(local_688 + 0x9a0) = local_698;
      local_8 = 0xffffffff;
      pfStack_b44 = (function<void___cdecl(void)> *)0x4a5a67;
      FUN_00407a80();
      local_698 = local_698 + 1;
    }
    pfStack_b44 = (function<void___cdecl(void)> *)0x4a5a7e;
    uVar5 = FUN_004271d0();
    if (0xf < uVar5) {
      local_8e4 = 0x348;
      pfStack_b44 = (function<void___cdecl(void)> *)0x4a5aa2;
      uVar5 = FUN_004271d0();
      if (uVar5 < 0x10) {
        pfStack_b44 = (function<void___cdecl(void)> *)0x4a5ac4;
        local_7ac = FUN_004271d0();
      }
      else {
        local_7ac = 0xf;
      }
      local_8e8 = 0x352;
      pfStack_b44 = (function<void___cdecl(void)> *)&local_8e4;
      pfStack_b48 = (function<void___cdecl(void)> *)0x4a5ae5;
      pfStack_b44 = (function<void___cdecl(void)> *)game_timing_or_delay_helper();
      pfStack_b48 = (function<void___cdecl(void)> *)(local_7ac * -0x12 + 0xf0);
      pfStack_b4c = (function<void___cdecl(void)> *)0xfb;
      pcStack_b50 = (char *)0x10;
      local_a30 = (undefined1 *)&piStack_b68;
      pcStack_b6c = "sprite/interface/itemproductwindow.img";
      piStack_b70 = (int *)0x4a5b11;
      local_a34 = FUN_004054a0();
      local_8 = 0x20;
      local_a38 = auStack_b80;
      pcStack_b84 = &DAT_0074c51c;
      iStack_b88 = 0x4a5b33;
      local_a3c = FUN_004054a0();
      local_8._0_1_ = 0x21;
      pcStack_b84 = (char *)0x63;
      local_a40 = auStack_b9c;
      local_a44 = FUN_004054a0(&DAT_0074c584);
      local_8 = CONCAT31(local_8._1_3_,0x22);
      uVar9 = 1;
      uVar6 = game_timing_or_delay_helper(&local_8e8);
      local_8 = 0xffffffff;
      local_8ec = FUN_00661cc0(uVar6,uVar9);
      *(undefined4 *)(local_8ec + 0x984) = 0x332d;
      *(int *)(local_8ec + 0x9d0) = local_700;
      pfStack_b44 = (function<void___cdecl(void)> *)0x4a5bc6;
      local_688 = local_8ec;
      uVar6 = FUN_004271d0();
      *(undefined4 *)(local_688 + 0x9a0) = uVar6;
      local_8f0 = 0x348;
      pfStack_b44 = (function<void___cdecl(void)> *)0x4a5bed;
      uVar5 = FUN_004271d0();
      if (uVar5 < 0x10) {
        pfStack_b44 = (function<void___cdecl(void)> *)0x4a5c0f;
        local_780 = FUN_004271d0();
      }
      else {
        local_780 = 0xf;
      }
      local_8f4 = 0x352;
      pfStack_b44 = (function<void___cdecl(void)> *)&local_8f0;
      pfStack_b48 = (function<void___cdecl(void)> *)0x4a5c30;
      pfStack_b44 = (function<void___cdecl(void)> *)game_timing_or_delay_helper();
      pfStack_b48 = (function<void___cdecl(void)> *)(local_780 * -0x12 + 0xff);
      pfStack_b4c = (function<void___cdecl(void)> *)0xfb;
      pcStack_b50 = (char *)0x14;
      local_a48 = (undefined1 *)&piStack_b68;
      pcStack_b6c = "sprite/interface/itemproductwindow.img";
      piStack_b70 = (int *)0x4a5c5f;
      local_a4c = FUN_004054a0();
      local_8 = 0x23;
      local_a50 = auStack_b80;
      pcStack_b84 = &DAT_0074c5a4;
      iStack_b88 = 0x4a5c81;
      local_a54 = FUN_004054a0();
      local_8._0_1_ = 0x24;
      pcStack_b84 = (char *)0x63;
      local_a58 = auStack_b9c;
      local_a5c = FUN_004054a0(&DAT_0074c594);
      local_8 = CONCAT31(local_8._1_3_,0x25);
      uVar9 = 0;
      uVar6 = game_timing_or_delay_helper(&local_8f4);
      local_8 = 0xffffffff;
      local_8f8 = FUN_00661cc0(uVar6,uVar9);
      local_8fc = 0x348;
      local_900 = 0x352;
      pfStack_b44 = (function<void___cdecl(void)> *)&local_8fc;
      pfStack_b48 = (function<void___cdecl(void)> *)0x4a5d06;
      local_688 = local_8f8;
      pfStack_b44 = (function<void___cdecl(void)> *)game_timing_or_delay_helper();
      pfStack_b48 = (function<void___cdecl(void)> *)0xde;
      pfStack_b4c = (function<void___cdecl(void)> *)0xfb;
      pcStack_b50 = (char *)0x12;
      local_a60 = (undefined1 *)&piStack_b68;
      pcStack_b6c = "sprite/interface/itemproductwindow.img";
      piStack_b70 = (int *)0x4a5d28;
      local_a64 = FUN_004054a0();
      local_8 = 0x26;
      local_a68 = auStack_b80;
      pcStack_b84 = &DAT_0074c5bc;
      iStack_b88 = 0x4a5d4a;
      local_a6c = FUN_004054a0();
      local_8._0_1_ = 0x27;
      pcStack_b84 = (char *)0x63;
      local_a70 = auStack_b9c;
      local_a74 = FUN_004054a0(&DAT_0074c620);
      local_8 = CONCAT31(local_8._1_3_,0x28);
      uVar9 = 1;
      uVar6 = game_timing_or_delay_helper(&local_900);
      local_8 = 0xffffffff;
      local_904 = FUN_00661cc0(uVar6,uVar9);
      *(undefined4 *)(local_904 + 0x984) = 0x332e;
      *(int *)(local_904 + 0x9d0) = local_700;
      pfStack_b44 = (function<void___cdecl(void)> *)0x4a5ddd;
      local_688 = local_904;
      uVar6 = FUN_004271d0();
      *(undefined4 *)(local_688 + 0x9a0) = uVar6;
      local_908 = 0x348;
      pfStack_b44 = (function<void___cdecl(void)> *)&local_908;
      pfStack_b48 = (function<void___cdecl(void)> *)0x4a5e04;
      local_784 = game_timing_or_delay_helper();
      pfStack_b44 = (function<void___cdecl(void)> *)0x4a5e15;
      local_6fc = (int *)game_loop_helper_018d0();
      pfStack_b44 = (function<void___cdecl(void)> *)0x4a5e26;
      local_90c = (int *)game_loop_helper_018b0();
      for (; local_6fc != local_90c; local_6fc = local_6fc + 1) {
        local_6dc = local_6fc;
        pfStack_b44 = (function<void___cdecl(void)> *)&DAT_0074c5fc;
        pfStack_b48 = (function<void___cdecl(void)> *)0x4a5e6b;
        pfStack_b44 = (function<void___cdecl(void)> *)FUN_004054a0();
        local_8 = 0x29;
        pfStack_b48 = (function<void___cdecl(void)> *)(local_684 + 0x124);
        pfStack_b4c = local_45c;
        pcStack_b50 = (char *)0x4a5ea3;
        local_914 = pfStack_b44;
        local_910 = pfStack_b44;
        pfStack_b44 = (function<void___cdecl(void)> *)FUN_00427c80();
        pfStack_b48 = (function<void___cdecl(void)> *)(*local_6dc + 0x1c);
        pfStack_b4c = (function<void___cdecl(void)> *)0x4a5ec4;
        local_918 = pfStack_b44;
        local_6c5 = destroy<>();
        pfStack_b44 = (function<void___cdecl(void)> *)0x4a5ed8;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_45c);
        local_8 = 0xffffffff;
        pfStack_b44 = (function<void___cdecl(void)> *)0x4a5eea;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_444);
        if (local_6c5 != '\0') {
          *(undefined4 *)(*local_6dc + 0xb04) = 0;
          pfStack_b44 = (function<void___cdecl(void)> *)0x4a5f1c;
          iVar2 = FUN_004271d0();
          *(int *)(*local_6dc + 0xb00) = iVar2 + -0xf;
          local_6d0 = 0;
          while( true ) {
            local_91c = 0x33e;
            pfStack_b44 = (function<void___cdecl(void)> *)&local_91c;
            pfStack_b48 = (function<void___cdecl(void)> *)0x4a5f63;
            game_timing_or_delay_helper();
            pfStack_b44 = (function<void___cdecl(void)> *)0x4a5f6a;
            uVar5 = FUN_00401a90();
            if (uVar5 <= local_6d0) break;
            if (((int)local_6d0 < *(int *)(*local_6dc + 0xb04)) ||
               (*(int *)(*local_6dc + 0xb04) + 0xf <= (int)local_6d0)) {
              local_920 = 0x33e;
              pfStack_b44 = (function<void___cdecl(void)> *)local_6d0;
              pfStack_b48 = (function<void___cdecl(void)> *)&local_920;
              pfStack_b4c = (function<void___cdecl(void)> *)0x4a5fc7;
              game_timing_or_delay_helper();
              pfStack_b48 = (function<void___cdecl(void)> *)0x4a5fce;
              piVar4 = (int *)game_get_flag_object_01a70();
              *(undefined1 *)(*piVar4 + 0x51) = 0;
            }
            else {
              local_924 = 0x33e;
              pfStack_b44 = (function<void___cdecl(void)> *)local_6d0;
              pfStack_b48 = (function<void___cdecl(void)> *)&local_924;
              pfStack_b4c = (function<void___cdecl(void)> *)0x4a5ff8;
              game_timing_or_delay_helper();
              pfStack_b48 = (function<void___cdecl(void)> *)0x4a5fff;
              piVar4 = (int *)game_get_flag_object_01a70();
              *(undefined1 *)(*piVar4 + 0x51) = 1;
            }
            local_6d0 = local_6d0 + 1;
          }
          break;
        }
      }
    }
    local_928 = 0x33e;
    local_92c = 0x33e;
    pfStack_b44 = (function<void___cdecl(void)> *)FUN_006574e0;
    pfStack_b48 = (function<void___cdecl(void)> *)local_a78;
    pfStack_b4c = (function<void___cdecl(void)> *)&local_928;
    pcStack_b50 = (char *)0x4a6042;
    game_timing_or_delay_helper();
    pfStack_b4c = (function<void___cdecl(void)> *)0x4a6049;
    puVar3 = (undefined4 *)FUN_00402170();
    pfStack_b48 = (function<void___cdecl(void)> *)*puVar3;
    pfStack_b4c = (function<void___cdecl(void)> *)local_a7c;
    pcStack_b50 = (char *)&local_92c;
    pcStack_b54 = (char *)0x4a6064;
    game_timing_or_delay_helper();
    pcStack_b50 = (char *)0x4a606b;
    puVar3 = (undefined4 *)FUN_004021b0();
    pfStack_b4c = (function<void___cdecl(void)> *)*puVar3;
    pcStack_b50 = (char *)0x4a6073;
    FUN_00405d30();
    local_930 = 0x348;
    local_934 = 0x348;
    pfStack_b44 = (function<void___cdecl(void)> *)FUN_006574e0;
    pfStack_b48 = (function<void___cdecl(void)> *)local_a80;
    pfStack_b4c = (function<void___cdecl(void)> *)&local_930;
    pcStack_b50 = (char *)0x4a60a7;
    game_timing_or_delay_helper();
    pfStack_b4c = (function<void___cdecl(void)> *)0x4a60ae;
    puVar3 = (undefined4 *)FUN_00402170();
    pfStack_b48 = (function<void___cdecl(void)> *)*puVar3;
    pfStack_b4c = (function<void___cdecl(void)> *)local_a84;
    pcStack_b50 = (char *)&local_934;
    pcStack_b54 = (char *)0x4a60c9;
    game_timing_or_delay_helper();
    pcStack_b50 = (char *)0x4a60d0;
    puVar3 = (undefined4 *)FUN_004021b0();
    pfStack_b4c = (function<void___cdecl(void)> *)*puVar3;
    pcStack_b50 = (char *)0x4a60d8;
    FUN_00405d30();
    local_938 = 0x352;
    local_93c = 0x352;
    pfStack_b44 = (function<void___cdecl(void)> *)FUN_006574e0;
    pfStack_b48 = (function<void___cdecl(void)> *)local_a88;
    pfStack_b4c = (function<void___cdecl(void)> *)&local_938;
    pcStack_b50 = (char *)0x4a610c;
    game_timing_or_delay_helper();
    pfStack_b4c = (function<void___cdecl(void)> *)0x4a6113;
    puVar3 = (undefined4 *)FUN_00402170();
    pfStack_b48 = (function<void___cdecl(void)> *)*puVar3;
    pfStack_b4c = (function<void___cdecl(void)> *)local_b14;
    pcStack_b50 = (char *)&local_93c;
    pcStack_b54 = (char *)0x4a612e;
    game_timing_or_delay_helper();
    pcStack_b50 = (char *)0x4a6135;
    puVar3 = (undefined4 *)FUN_004021b0();
    pfStack_b4c = (function<void___cdecl(void)> *)*puVar3;
    pcStack_b50 = (char *)0x4a613d;
    FUN_00405d30();
    pfStack_b44 = (function<void___cdecl(void)> *)DAT_007ca768;
    pfStack_b48 = (function<void___cdecl(void)> *)DAT_007ca764;
    puVar3 = &DAT_007ca70c;
    ppiVar8 = &piStack_b68;
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *ppiVar8 = (int *)*puVar3;
      puVar3 = puVar3 + 1;
      ppiVar8 = ppiVar8 + 1;
    }
    pcStack_b6c = (char *)0x4a6164;
    FUN_0065e180();
    ExceptionList = local_10;
    return;
  }
  if (param_1 == 0x29e) {
    pfStack_b44 = (function<void___cdecl(void)> *)param_3;
    pfStack_b48 = (function<void___cdecl(void)> *)0x4a31cd;
    ExceptionList = &local_10;
    FUN_004a2750();
    ExceptionList = local_10;
    return;
  }
  if (param_1 == 0x2a3) {
    local_940 = 0x33e;
    pfStack_b44 = (function<void___cdecl(void)> *)&local_940;
    pfStack_b48 = (function<void___cdecl(void)> *)0x4a31f0;
    ExceptionList = &local_10;
    pfStack_b44 = (function<void___cdecl(void)> *)game_timing_or_delay_helper();
    pfStack_b48 = (function<void___cdecl(void)> *)0x4a31f6;
    ui_close_matching_widgets();
    local_944 = 0x348;
    pfStack_b44 = (function<void___cdecl(void)> *)&local_944;
    pfStack_b48 = (function<void___cdecl(void)> *)0x4a3214;
    pfStack_b44 = (function<void___cdecl(void)> *)game_timing_or_delay_helper();
    pfStack_b48 = (function<void___cdecl(void)> *)0x4a321a;
    ui_close_matching_widgets();
    pfStack_b44 = (function<void___cdecl(void)> *)0x4a3228;
    FUN_00489bc0();
    local_8 = 0;
    pfStack_b44 = (function<void___cdecl(void)> *)0x4a323a;
    FUN_004525a0();
    local_8 = CONCAT31(local_8._1_3_,1);
    local_6e4 = 0;
    local_948 = 0x20;
    pfStack_b44 = (function<void___cdecl(void)> *)&local_948;
    pfStack_b48 = (function<void___cdecl(void)> *)0x4a3263;
    local_77c = FUN_0040d330();
    pfStack_b44 = (function<void___cdecl(void)> *)0x4a3274;
    local_6f4 = game_loop_helper_018d0();
    pfStack_b44 = (function<void___cdecl(void)> *)0x4a3285;
    local_958 = game_loop_helper_018b0();
    for (; local_6f4 != local_958; local_6f4 = local_6f4 + 0x94) {
      local_774 = local_6f4;
      if (0 < *(int *)(local_6f4 + 4)) {
        pfStack_b44 = (function<void___cdecl(void)> *)0x1;
        pfStack_b48 = (function<void___cdecl(void)> *)local_6f4;
        pfStack_b4c = (function<void___cdecl(void)> *)param_3;
        pcStack_b50 = (char *)0x0;
        pcStack_b54 = (char *)0x4a32e1;
        local_6e4 = FUN_0067f8c0();
        if (local_6e4 != 0) {
          pfStack_b44 = (function<void___cdecl(void)> *)param_3;
          pfStack_b4c = (function<void___cdecl(void)> *)local_b1c;
          pcStack_b50 = (char *)0x4a330a;
          pfStack_b48 = (function<void___cdecl(void)> *)local_6e4;
          puVar3 = (undefined4 *)FUN_006c9280();
          local_558 = *puVar3;
          pfStack_b44 = (function<void___cdecl(void)> *)param_3;
          pfStack_b48 = (function<void___cdecl(void)> *)local_6e4;
          pfStack_b4c = (function<void___cdecl(void)> *)local_b34;
          pcStack_b50 = (char *)0x4a332c;
          iVar2 = FUN_006c9280();
          local_554 = *(undefined4 *)(iVar2 + 4);
          pfStack_b44 = (function<void___cdecl(void)> *)local_6e4;
          pfStack_b48 = (function<void___cdecl(void)> *)0x4a334a;
          FUN_00426c50();
          pfStack_b44 = (function<void___cdecl(void)> *)&local_558;
          pfStack_b48 = (function<void___cdecl(void)> *)0x4a335c;
          FUN_00489b80();
        }
      }
    }
    pfStack_b44 = (function<void___cdecl(void)> *)0x4a336d;
    cVar1 = game_frame_should_continue();
    if (cVar1 == '\0') {
      pfStack_b44 = (function<void___cdecl(void)> *)param_3;
      pfStack_b48 = (function<void___cdecl(void)> *)local_954;
      pfStack_b4c = (function<void___cdecl(void)> *)0x3f4;
      pcStack_b50 = (char *)0x0;
      pcStack_b54 = (char *)0x4a338b;
      FUN_006a47c0();
    }
    local_95c = 0x20;
    pfStack_b44 = (function<void___cdecl(void)> *)&local_95c;
    pfStack_b48 = (function<void___cdecl(void)> *)0x4a33a9;
    FUN_0040d330();
    pfStack_b44 = (function<void___cdecl(void)> *)0x4a33b0;
    FUN_0040d540();
    local_960 = 0x21;
    pfStack_b44 = (function<void___cdecl(void)> *)&local_960;
    pfStack_b48 = (function<void___cdecl(void)> *)0x4a33cc;
    FUN_0040d330();
    pfStack_b44 = (function<void___cdecl(void)> *)0x4a33d3;
    FUN_0040d540();
    local_964 = 0x352;
    pfStack_b44 = (function<void___cdecl(void)> *)&local_964;
    pfStack_b48 = (function<void___cdecl(void)> *)0x4a33ef;
    pfStack_b44 = (function<void___cdecl(void)> *)game_timing_or_delay_helper();
    pfStack_b48 = (function<void___cdecl(void)> *)0x4a33f5;
    ui_close_matching_widgets();
    local_8 = local_8 & 0xffffff00;
    pfStack_b44 = (function<void___cdecl(void)> *)0x4a3407;
    FUN_00456cf0();
    local_8 = 0xffffffff;
    pfStack_b44 = (function<void___cdecl(void)> *)0x4a3419;
    FUN_00489ba0();
    ExceptionList = local_10;
    return;
  }
  if (param_1 != 0x2ad) {
    return;
  }
  local_968 = 0x20;
  pfStack_b44 = (function<void___cdecl(void)> *)0x0;
  pfStack_b48 = (function<void___cdecl(void)> *)&local_968;
  pfStack_b4c = (function<void___cdecl(void)> *)0x4a3463;
  ExceptionList = &local_10;
  FUN_0040d330();
  pfStack_b48 = (function<void___cdecl(void)> *)0x4a346a;
  local_96c = FUN_00405270();
  pfStack_b44 = *(function<void___cdecl(void)> **)(local_96c + 4);
  pfStack_b48 = (function<void___cdecl(void)> *)0x4a3485;
  local_690 = game_loop_helper_cc840();
  pfStack_b44 = (function<void___cdecl(void)> *)0x4a3496;
  FUN_00489bc0();
  local_8 = 2;
  pfStack_b44 = (function<void___cdecl(void)> *)0x74c0e0;
  pfStack_b48 = (function<void___cdecl(void)> *)(local_690 + 0x124);
  pfStack_b4c = (function<void___cdecl(void)> *)0x4a34b3;
  cVar1 = FUN_00427c60();
  if (cVar1 == '\0') {
    pfStack_b44 = (function<void___cdecl(void)> *)0x74c0d0;
    pfStack_b48 = (function<void___cdecl(void)> *)(local_690 + 0x124);
    pfStack_b4c = (function<void___cdecl(void)> *)0x4a34fe;
    cVar1 = FUN_00427c60();
    if (cVar1 == '\0') {
      pfStack_b44 = (function<void___cdecl(void)> *)0x74c100;
      pfStack_b48 = (function<void___cdecl(void)> *)(local_690 + 0x124);
      pfStack_b4c = (function<void___cdecl(void)> *)0x4a3549;
      cVar1 = FUN_00427c60();
      if (cVar1 == '\0') {
        pfStack_b44 = (function<void___cdecl(void)> *)0x74c0f0;
        pfStack_b48 = (function<void___cdecl(void)> *)(local_690 + 0x124);
        pfStack_b4c = (function<void___cdecl(void)> *)0x4a3593;
        cVar1 = FUN_00427c60();
        if (cVar1 == '\0') {
          pfStack_b44 = (function<void___cdecl(void)> *)0x74c120;
          pfStack_b48 = (function<void___cdecl(void)> *)(local_690 + 0x124);
          pfStack_b4c = (function<void___cdecl(void)> *)0x4a35de;
          cVar1 = FUN_00427c60();
          if (cVar1 == '\0') {
            pfStack_b44 = (function<void___cdecl(void)> *)0x74c110;
            pfStack_b48 = (function<void___cdecl(void)> *)(local_690 + 0x124);
            pfStack_b4c = (function<void___cdecl(void)> *)0x4a3629;
            cVar1 = FUN_00427c60();
            if (cVar1 == '\0') {
              pfStack_b44 = (function<void___cdecl(void)> *)0x74c140;
              pfStack_b48 = (function<void___cdecl(void)> *)(local_690 + 0x124);
              pfStack_b4c = (function<void___cdecl(void)> *)0x4a3673;
              cVar1 = FUN_00427c60();
              if (cVar1 == '\0') {
                pfStack_b44 = (function<void___cdecl(void)> *)0x74c130;
                pfStack_b48 = (function<void___cdecl(void)> *)(local_690 + 0x124);
                pfStack_b4c = (function<void___cdecl(void)> *)0x4a36bd;
                cVar1 = FUN_00427c60();
                if (cVar1 != '\0') {
                  pfStack_b44 = *(function<void___cdecl(void)> **)(param_3 + 0xab8);
                  pfStack_b48 = (function<void___cdecl(void)> *)0x4a36dc;
                  iVar2 = FUN_005d7fb0();
                  pfStack_b44 = (function<void___cdecl(void)> *)(iVar2 + 0x8c);
                  pfStack_b48 = (function<void___cdecl(void)> *)0x4a36ed;
                  FUN_004a62d0();
                }
              }
              else {
                pfStack_b44 = *(function<void___cdecl(void)> **)(param_3 + 0xab8);
                pfStack_b48 = (function<void___cdecl(void)> *)0x4a3692;
                iVar2 = FUN_005d7fb0();
                pfStack_b44 = (function<void___cdecl(void)> *)(iVar2 + 0x80);
                pfStack_b48 = (function<void___cdecl(void)> *)0x4a36a3;
                FUN_004a62d0();
              }
            }
            else {
              pfStack_b44 = *(function<void___cdecl(void)> **)(param_3 + 0xab8);
              pfStack_b48 = (function<void___cdecl(void)> *)0x4a3648;
              iVar2 = FUN_005d7fb0();
              pfStack_b44 = (function<void___cdecl(void)> *)(iVar2 + 0x74);
              pfStack_b48 = (function<void___cdecl(void)> *)0x4a3657;
              FUN_004a62d0();
            }
          }
          else {
            pfStack_b44 = *(function<void___cdecl(void)> **)(param_3 + 0xab8);
            pfStack_b48 = (function<void___cdecl(void)> *)0x4a35fd;
            iVar2 = FUN_005d7fb0();
            pfStack_b44 = (function<void___cdecl(void)> *)(iVar2 + 0x68);
            pfStack_b48 = (function<void___cdecl(void)> *)0x4a360c;
            FUN_004a62d0();
          }
        }
        else {
          pfStack_b44 = *(function<void___cdecl(void)> **)(param_3 + 0xab8);
          pfStack_b48 = (function<void___cdecl(void)> *)0x4a35b2;
          iVar2 = FUN_005d7fb0();
          pfStack_b44 = (function<void___cdecl(void)> *)(iVar2 + 0x5c);
          pfStack_b48 = (function<void___cdecl(void)> *)0x4a35c1;
          FUN_004a62d0();
        }
      }
      else {
        pfStack_b44 = *(function<void___cdecl(void)> **)(param_3 + 0xab8);
        pfStack_b48 = (function<void___cdecl(void)> *)0x4a3568;
        iVar2 = FUN_005d7fb0();
        pfStack_b44 = (function<void___cdecl(void)> *)(iVar2 + 0x50);
        pfStack_b48 = (function<void___cdecl(void)> *)0x4a3577;
        FUN_004a62d0();
      }
    }
    else {
      pfStack_b44 = *(function<void___cdecl(void)> **)(param_3 + 0xab8);
      pfStack_b48 = (function<void___cdecl(void)> *)0x4a351d;
      iVar2 = FUN_005d7fb0();
      pfStack_b44 = (function<void___cdecl(void)> *)(iVar2 + 0x44);
      pfStack_b48 = (function<void___cdecl(void)> *)0x4a352c;
      FUN_004a62d0();
    }
  }
  else {
    pfStack_b44 = *(function<void___cdecl(void)> **)(param_3 + 0xab8);
    pfStack_b48 = (function<void___cdecl(void)> *)0x4a34d2;
    iVar2 = FUN_005d7fb0();
    pfStack_b44 = (function<void___cdecl(void)> *)(iVar2 + 0x38);
    pfStack_b48 = (function<void___cdecl(void)> *)0x4a34e1;
    FUN_004a62d0();
  }
  pfStack_b44 = (function<void___cdecl(void)> *)0x4a36f9;
  FUN_0040a880();
  local_8 = CONCAT31(local_8._1_3_,3);
  if ((*(int *)(local_690 + 0x3e4) == -1) && (*(int *)(local_690 + 0x3e0) == -1)) {
    pfStack_b44 = (function<void___cdecl(void)> *)&DAT_0073f7af;
    pfStack_b48 = (function<void___cdecl(void)> *)(local_690 + 1000);
    pfStack_b4c = (function<void___cdecl(void)> *)0x4a3732;
    cVar1 = FUN_00427e30();
    if (cVar1 != '\0') {
      pfStack_b44 = (function<void___cdecl(void)> *)0x4a374d;
      iVar2 = FUN_00401a90();
      if (iVar2 != 0) goto LAB_004a375d;
    }
    local_7a0 = 0;
  }
  else {
LAB_004a375d:
    local_7a0 = 1;
  }
  local_6b9 = (char)local_7a0;
  if ((char)local_7a0 == '\0') {
    pfStack_b44 = (function<void___cdecl(void)> *)local_6f0;
    pfStack_b48 = (function<void___cdecl(void)> *)0x4a37d2;
    FUN_004a6350();
    local_8._0_1_ = 4;
    pfStack_b44 = (function<void___cdecl(void)> *)local_af8;
    pfStack_b48 = (function<void___cdecl(void)> *)0x4a37e8;
    puVar3 = (undefined4 *)FUN_00402170();
    local_970 = *puVar3;
    pfStack_b44 = (function<void___cdecl(void)> *)local_a94;
    pfStack_b48 = (function<void___cdecl(void)> *)0x4a3802;
    puVar3 = (undefined4 *)FUN_00402170();
    pfStack_b44 = (function<void___cdecl(void)> *)*puVar3;
    pfStack_b48 = (function<void___cdecl(void)> *)local_a98;
    pfStack_b4c = (function<void___cdecl(void)> *)0x4a3817;
    puVar3 = (undefined4 *)FUN_004021b0();
    pfStack_b48 = (function<void___cdecl(void)> *)*puVar3;
    pfStack_b4c = (function<void___cdecl(void)> *)local_970;
    pcStack_b50 = local_a9c;
    pcStack_b54 = (char *)0x4a3833;
    FUN_004a63f0();
    pfStack_b44 = (function<void___cdecl(void)> *)local_aa0;
    pfStack_b48 = (function<void___cdecl(void)> *)0x4a3846;
    puVar3 = (undefined4 *)FUN_004021b0();
    pfStack_b44 = (function<void___cdecl(void)> *)*puVar3;
    pfStack_b48 = (function<void___cdecl(void)> *)local_aa4;
    pfStack_b4c = (function<void___cdecl(void)> *)0x4a3867;
    local_974 = pfStack_b44;
    FUN_004a6200();
    pfStack_b44 = (function<void___cdecl(void)> *)0x4a386d;
    pfStack_b44 = (function<void___cdecl(void)> *)FUN_00641460();
    pfStack_b48 = (function<void___cdecl(void)> *)0x4a3879;
    iVar2 = FUN_004a61d0();
    pfStack_b48 = (function<void___cdecl(void)> *)(iVar2 + -1);
    pfStack_b4c = (function<void___cdecl(void)> *)0x0;
    pcStack_b50 = (char *)0x4a388a;
    FUN_0040d2a0();
    pfStack_b48 = (function<void___cdecl(void)> *)0x4a3891;
    pfStack_b44 = (function<void___cdecl(void)> *)FUN_0040e400();
    pfStack_b48 = (function<void___cdecl(void)> *)0x4a389d;
    puVar3 = (undefined4 *)FUN_00427540();
    local_67c = *puVar3;
    local_8 = CONCAT31(local_8._1_3_,3);
    pfStack_b44 = (function<void___cdecl(void)> *)0x4a38b4;
    FUN_004018f0();
  }
  else {
    pfStack_b44 = (function<void___cdecl(void)> *)0x4a3783;
    pfStack_b44 = (function<void___cdecl(void)> *)FUN_00641460();
    pfStack_b48 = (function<void___cdecl(void)> *)0x4a378f;
    iVar2 = FUN_004a61d0();
    pfStack_b48 = (function<void___cdecl(void)> *)(iVar2 + -1);
    pfStack_b4c = (function<void___cdecl(void)> *)0x0;
    pcStack_b50 = (char *)0x4a37a0;
    FUN_0040d2a0();
    pfStack_b48 = (function<void___cdecl(void)> *)0x4a37a7;
    pfStack_b44 = (function<void___cdecl(void)> *)FUN_0040e400();
    pfStack_b48 = (function<void___cdecl(void)> *)0x4a37b3;
    puVar3 = (undefined4 *)FUN_00427540();
    local_67c = *puVar3;
  }
  local_978 = 0x348;
  pfStack_b44 = (function<void___cdecl(void)> *)&local_978;
  pfStack_b48 = (function<void___cdecl(void)> *)0x4a38d0;
  local_740 = game_timing_or_delay_helper();
  pfStack_b44 = (function<void___cdecl(void)> *)0x4a38e1;
  local_724 = (int *)game_loop_helper_018d0();
  pfStack_b44 = (function<void___cdecl(void)> *)0x4a38f2;
  local_97c = (int *)game_loop_helper_018b0();
  do {
    if (local_724 == local_97c) {
LAB_004a395b:
      pfStack_b44 = (function<void___cdecl(void)> *)&local_680;
      pfStack_b48 = (function<void___cdecl(void)> *)param_3;
      pfStack_b4c = local_39c;
      pcStack_b50 = (char *)0x4a3972;
      pfStack_b48 = (function<void___cdecl(void)> *)FUN_0067f440();
      pfStack_b44 = (function<void___cdecl(void)> *)&DAT_0073f7b9;
      pfStack_b4c = (function<void___cdecl(void)> *)0x4a398c;
      local_980 = pfStack_b48;
      local_6ba = FUN_00427e30();
      pfStack_b44 = (function<void___cdecl(void)> *)0x4a39a0;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_39c);
      if (local_6ba == '\0') {
        pfStack_b44 = (function<void___cdecl(void)> *)0x1;
        pfStack_b48 = (function<void___cdecl(void)> *)0x15;
        pfStack_b4c = (function<void___cdecl(void)> *)0x4a39f0;
        FUN_0040a9f0();
        local_8 = CONCAT31(local_8._1_3_,5);
        pfStack_b44 = (function<void___cdecl(void)> *)0x0;
        pfStack_b48 = (function<void___cdecl(void)> *)local_5ec;
        pfStack_b4c = (function<void___cdecl(void)> *)0x4a3a02;
        pfStack_b4c = (function<void___cdecl(void)> *)game_get_player_or_session_blob();
        pcStack_b50 = (char *)0x1;
        pcStack_b54 = (char *)0x4a3a0a;
        FUN_0067f8c0();
        local_984 = 0x20;
        pfStack_b44 = (function<void___cdecl(void)> *)&local_984;
        pfStack_b48 = (function<void___cdecl(void)> *)0x4a3a28;
        FUN_0040d330();
        pfStack_b44 = (function<void___cdecl(void)> *)0x4a3a2f;
        FUN_0040d540();
        pfStack_b44 = (function<void___cdecl(void)> *)0x0;
        pfStack_b48 = (function<void___cdecl(void)> *)0x0;
        pfStack_b4c = (function<void___cdecl(void)> *)0x0;
        local_aa8 = &pfStack_b64;
        piStack_b68 = (int *)&DAT_0074c174;
        pcStack_b6c = (char *)0x4a3a4b;
        FUN_004054a0();
        piStack_b68 = &local_680;
        pcStack_b6c = param_3;
        piStack_b70 = (int *)0x4a3a5b;
        FUN_004a1ef0();
        pfStack_b44 = (function<void___cdecl(void)> *)0x1;
        pfStack_b48 = (function<void___cdecl(void)> *)&local_680;
        pfStack_b4c = (function<void___cdecl(void)> *)param_3;
        pcStack_b50 = (char *)0x1;
        pcStack_b54 = (char *)0x4a3a72;
        FUN_0067f8c0();
        pfStack_b44 = (function<void___cdecl(void)> *)local_67c;
        pfStack_b48 = (function<void___cdecl(void)> *)0x4a3a87;
        iVar2 = game_loop_helper_cc840();
        if (*(int *)(iVar2 + 0xb8) == 2) {
          pfStack_b44 = (function<void___cdecl(void)> *)0x4a3a95;
          pfStack_b44 = (function<void___cdecl(void)> *)game_get_player_or_session_blob();
          pfStack_b48 = (function<void___cdecl(void)> *)local_67c;
          pfStack_b4c = (function<void___cdecl(void)> *)0xabe0;
          pcStack_b50 = (char *)0x4a3aa7;
          FUN_006a3c30();
        }
        local_8 = CONCAT31(local_8._1_3_,3);
        pfStack_b44 = (function<void___cdecl(void)> *)0x4a3ab9;
        FUN_004039a0();
      }
      else {
        pfStack_b44 = (function<void___cdecl(void)> *)0x0;
        pfStack_b48 = (function<void___cdecl(void)> *)0x0;
        pfStack_b4c = (function<void___cdecl(void)> *)0x0;
        pcStack_b50 = (char *)0x0;
        pcStack_b54 = (char *)0xa;
        local_a90 = (undefined1 *)&pcStack_b6c;
        puStack_b78 = (undefined1 *)&pcStack_b6c;
        piStack_b70 = &local_680;
        pcStack_b74 = param_3;
        uStack_b7c = 0x4a39d1;
        FUN_0067f440();
        piStack_b70 = (int *)0x4a39d9;
        FUN_006634f0();
      }
      pfStack_b44 = (function<void___cdecl(void)> *)0x0;
      pfStack_b48 = (function<void___cdecl(void)> *)0x2a3;
      pfStack_b4c = (function<void___cdecl(void)> *)0x4a3ac6;
      ui_command_dispatch();
      local_8 = CONCAT31(local_8._1_3_,2);
      pfStack_b44 = (function<void___cdecl(void)> *)0x4a3ad8;
      FUN_004039a0();
      local_8 = 0xffffffff;
      pfStack_b44 = (function<void___cdecl(void)> *)0x4a3aea;
      FUN_004018f0();
      ExceptionList = local_10;
      return;
    }
    local_744 = local_724;
    pfStack_b44 = (function<void___cdecl(void)> *)&DAT_0074c150;
    pfStack_b48 = (function<void___cdecl(void)> *)(*local_724 + 0x1c);
    pfStack_b4c = (function<void___cdecl(void)> *)0x4a3939;
    cVar1 = FUN_00427c60();
    if (cVar1 != '\0') {
      local_668 = *(undefined4 *)(*local_744 + 0x9a0);
      goto LAB_004a395b;
    }
    local_724 = local_724 + 1;
  } while( true );
}


/* ==== 004b53a0  d3d9_matrix_multiply  size=42 ==== */

undefined4 d3d9_matrix_multiply(undefined4 param_1,undefined4 param_2)

{
  undefined4 in_ECX;
  
  allocator<>();
  D3DXMatrixMultiply(param_1,in_ECX,param_2);
  return param_1;
}


/* ==== 004b6010  d3d9_create_font_indirect  size=258 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 d3d9_create_font_indirect(void)

{
  undefined4 uVar1;
  int iVar2;
  int in_ECX;
  undefined4 in_stack_0000001c;
  undefined4 in_stack_00000020;
  undefined4 local_50;
  char *local_4c;
  char *local_48;
  char local_41;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  char local_28 [32];
  uint local_8;
  
  local_8 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  local_50 = 0;
  local_40 = in_stack_0000001c;
  local_3c = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 1;
  local_2b = 4;
  local_2a = 0;
  local_29 = 0;
  local_28[0] = '\0';
  local_28[1] = '\0';
  local_28[2] = '\0';
  local_28[3] = '\0';
  local_28[4] = '\0';
  local_28[5] = '\0';
  local_28[6] = '\0';
  local_28[7] = '\0';
  local_28[8] = '\0';
  local_28[9] = '\0';
  local_28[10] = '\0';
  local_28[0xb] = '\0';
  local_28[0xc] = '\0';
  local_28[0xd] = '\0';
  local_28[0xe] = '\0';
  local_28[0xf] = '\0';
  local_28[0x10] = '\0';
  local_28[0x11] = '\0';
  local_28[0x12] = '\0';
  local_28[0x13] = '\0';
  local_28[0x14] = '\0';
  local_28[0x15] = '\0';
  local_28[0x16] = '\0';
  local_28[0x17] = '\0';
  local_28[0x18] = '\0';
  local_28[0x19] = '\0';
  local_28[0x1a] = '\0';
  local_28[0x1b] = '\0';
  local_28[0x1c] = '\0';
  local_28[0x1d] = '\0';
  local_28[0x1e] = '\0';
  local_28[0x1f] = 0;
  local_38 = in_stack_00000020;
  local_4c = (char *)npk_get_relative_res_path();
  local_48 = local_28;
  do {
    local_41 = *local_4c;
    *local_48 = local_41;
    local_4c = local_4c + 1;
    local_48 = local_48 + 1;
  } while (local_41 != '\0');
  iVar2 = D3DXCreateFontIndirectA(*(undefined4 *)(in_ECX + 4),&local_40,&local_50);
  uVar1 = local_50;
  if (-1 < iVar2) {
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>
              ((function<void___cdecl(void)> *)&stack0x00000004);
    return uVar1;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* ==== 004b6120  d3d9_create_device_bootstrap  size=519 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void d3d9_create_device_bootstrap(HWND param_1,byte param_2)

{
  int iVar1;
  HDC pHVar2;
  HFONT pHVar3;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_48;
  HWND local_44;
  uint local_40;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  int local_24;
  undefined4 local_20;
  int *local_1c;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  iVar1 = Direct3DCreate9();
  *local_1c = iVar1;
  if (*local_1c == 0) {
    MessageBoxA((HWND)0x0,&DAT_0074e180,(LPCSTR)0x0,0);
  }
  local_20 = (**(code **)(*(int *)*local_1c + 0x20))();
  _memset(&local_60,0,0x38);
  local_40 = (uint)param_2;
  local_48 = 1;
  local_58 = local_c;
  local_54 = 0;
  local_60 = 0x280;
  local_5c = 0x1e0;
  local_44 = param_1;
  local_30 = 0;
  local_2c = 0x80000000;
  iVar1 = (**(code **)(*(int *)*local_1c + 0x40))();
  if (-1 < iVar1) {
    (**(code **)(*(int *)local_1c[1] + 0xb4))();
    *(undefined1 *)(local_1c + 2) = 0;
    local_20 = D3DXCreateSprite();
    pHVar2 = GetDC(param_1);
    local_1c[6] = (int)pHVar2;
    pHVar2 = CreateCompatibleDC((HDC)local_1c[6]);
    local_1c[7] = (int)pHVar2;
    pHVar3 = CreateFontA(0xc,0,0,0,400,0,0,0,0x86,4,0,3,0,&DAT_0074e178);
    local_1c[8] = (int)pHVar3;
    pHVar3 = CreateFontA(0xe,0,0,0,400,0,0,0,0x86,4,0,3,0,&DAT_0074e1b8);
    local_1c[9] = (int)pHVar3;
    pHVar3 = CreateFontA(0x10,0,0,0,400,0,0,0,0x86,4,0,3,0,&DAT_0074e1b0);
    local_1c[10] = (int)pHVar3;
    local_28 = &stack0xffffff54;
    FUN_004054a0(&DAT_0074e1c0);
    local_24 = d3d9_create_font_indirect();
    local_1c[4] = local_24;
    FUN_004b6330();
  }
  return;
}


/* ==== 004b7450  d3d9_create_texture_004b7450  size=2753 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int d3d9_create_texture_004b7450(void)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  undefined1 *puVar4;
  undefined1 local_110 [4];
  undefined1 local_10c [4];
  int local_108;
  undefined1 local_104 [4];
  undefined1 local_100 [4];
  undefined1 local_fc [4];
  int *local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  int local_e0;
  undefined1 local_d0 [12];
  int local_c4;
  int local_c0;
  int local_bc;
  undefined4 local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined4 local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  function<void___cdecl(void)> local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00714170;
  local_10 = ExceptionList;
  local_14 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  npk_path_normalize_helper(local_14);
  puVar2 = (undefined4 *)FUN_0040e2f0(local_fc,&stack0x00000004);
  local_60 = *puVar2;
  uVar3 = FUN_0040d380(local_100);
  cVar1 = FUN_0040d2d0(uVar3);
  if (cVar1 == '\0') {
    FUN_00426e80();
    local_8._0_1_ = 1;
    CCmdUI::CCmdUI((CCmdUI *)&local_f8);
    FUN_004054a0("sprite/interface/popup.img");
    local_8 = CONCAT31(local_8._1_3_,2);
    local_34 = 0;
    if (in_stack_00000024 == 0) {
      FUN_004053a0("sprite/interface/popup.img");
      local_34 = 0;
    }
    else if (in_stack_00000024 == 1) {
      FUN_004053a0("sprite/interface/popup.img");
      local_34 = 0x3f;
    }
    else if (in_stack_00000024 == 2) {
      FUN_004053a0("sprite/interface/popup.img");
      local_34 = 0x5d;
    }
    else if (in_stack_00000024 == 3) {
      FUN_004053a0("sprite/interface/popup.img");
      local_34 = 0x86;
    }
    else if (in_stack_00000024 == 4) {
      FUN_004053a0("sprite/interface/minimap.img");
      local_34 = 0x1b;
    }
    else if (in_stack_00000024 == 5) {
      FUN_004053a0("sprite/interface/messageballoon.img");
      local_34 = 0;
    }
    else if (in_stack_00000024 == 6) {
      FUN_004053a0("sprite/interface/messageballoon.img");
      local_34 = 10;
    }
    else if (in_stack_00000024 == 7) {
      FUN_004053a0("sprite/interface/messageballoon.img");
      local_34 = 0x14;
    }
    else if (in_stack_00000024 == 8) {
      FUN_004053a0("sprite/interface/messageballoon.img");
      local_34 = 0x1e;
    }
    uVar3 = npk_get_relative_res_path();
    local_4c = FUN_005855f0(uVar3);
    local_38 = local_34 * 0x28 + *(int *)(local_4c + 0x40);
    local_48 = (local_34 + 1) * 0x28 + *(int *)(local_4c + 0x40);
    local_68 = (local_34 + 2) * 0x28 + *(int *)(local_4c + 0x40);
    local_50 = (local_34 + 3) * 0x28 + *(int *)(local_4c + 0x40);
    local_58 = (local_34 + 4) * 0x28 + *(int *)(local_4c + 0x40);
    local_78 = (local_34 + 5) * 0x28 + *(int *)(local_4c + 0x40);
    local_80 = (local_34 + 6) * 0x28 + *(int *)(local_4c + 0x40);
    local_a8 = (local_34 + 7) * 0x28 + *(int *)(local_4c + 0x40);
    local_ac = (local_34 + 8) * 0x28 + *(int *)(local_4c + 0x40);
    local_30 = *(int *)(local_38 + 8) + in_stack_0000001c * *(int *)(local_48 + 8) +
               *(int *)(local_68 + 8);
    local_b4 = *(int *)(local_38 + 0xc) + in_stack_00000020 * *(int *)(local_50 + 0xc) +
               *(int *)(local_80 + 0xc);
    local_b8 = D3DXCreateTexture(*(undefined4 *)(local_5c + 4),local_30,local_b4,1,0,0,1,&local_f8);
    local_b8 = (**(code **)(*local_f8 + 0x4c))(local_f8,0,local_10c,0,0);
    local_54 = local_108;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    for (local_90 = 0; local_90 < *(int *)(local_38 + 0xc); local_90 = local_90 + 1) {
      FUN_006e6bd0(local_54 + local_30 * local_90 * 4 + local_3c,
                   *(int *)(local_38 + 0x24) + *(int *)(local_38 + 8) * local_90 * 4,
                   *(int *)(local_38 + 8) << 2);
    }
    for (local_b0 = 0; local_b0 < in_stack_0000001c; local_b0 = local_b0 + 1) {
      local_44 = local_b0 * *(int *)(local_48 + 8) + *(int *)(local_38 + 8);
      local_40 = 0;
      local_3c = local_44 * 4;
      for (local_64 = 0; local_64 < *(int *)(local_48 + 0xc); local_64 = local_64 + 1) {
        FUN_006e6bd0(local_54 + local_30 * local_64 * 4 + local_3c,
                     *(int *)(local_48 + 0x24) + *(int *)(local_48 + 8) * local_64 * 4,
                     *(int *)(local_48 + 8) << 2);
      }
    }
    local_44 = in_stack_0000001c * *(int *)(local_48 + 8) + *(int *)(local_38 + 8);
    local_40 = 0;
    local_3c = local_44 * 4;
    for (local_6c = 0; local_6c < *(int *)(local_68 + 0xc); local_6c = local_6c + 1) {
      FUN_006e6bd0(local_54 + local_30 * local_6c * 4 + local_3c,
                   *(int *)(local_68 + 0x24) + *(int *)(local_68 + 8) * local_6c * 4,
                   *(int *)(local_68 + 8) << 2);
    }
    for (local_94 = 0; local_94 < in_stack_00000020; local_94 = local_94 + 1) {
      local_44 = 0;
      local_40 = local_94 * *(int *)(local_50 + 0xc) + *(int *)(local_38 + 0xc);
      local_3c = local_40 * local_30 * 4;
      for (local_70 = 0; local_70 < *(int *)(local_50 + 0xc); local_70 = local_70 + 1) {
        FUN_006e6bd0(local_54 + local_30 * local_70 * 4 + local_3c,
                     *(int *)(local_50 + 0x24) + *(int *)(local_50 + 8) * local_70 * 4,
                     *(int *)(local_50 + 8) << 2);
      }
    }
    for (local_98 = 0; local_98 < in_stack_0000001c; local_98 = local_98 + 1) {
      for (local_9c = 0; local_9c < in_stack_00000020; local_9c = local_9c + 1) {
        local_44 = local_98 * *(int *)(local_58 + 8) + *(int *)(local_38 + 8);
        local_40 = local_9c * *(int *)(local_58 + 0xc) + *(int *)(local_38 + 0xc);
        local_3c = (local_40 * local_30 + local_44) * 4;
        for (local_74 = 0; local_74 < *(int *)(local_58 + 0xc); local_74 = local_74 + 1) {
          FUN_006e6bd0(local_54 + local_30 * local_74 * 4 + local_3c,
                       *(int *)(local_58 + 0x24) + *(int *)(local_58 + 8) * local_74 * 4,
                       *(int *)(local_58 + 8) << 2);
        }
      }
    }
    for (local_a0 = 0; local_a0 < in_stack_00000020; local_a0 = local_a0 + 1) {
      local_44 = in_stack_0000001c * *(int *)(local_48 + 8) + *(int *)(local_38 + 8);
      local_40 = local_a0 * *(int *)(local_78 + 0xc) + *(int *)(local_38 + 0xc);
      local_3c = (local_40 * local_30 + local_44) * 4;
      for (local_7c = 0; local_7c < *(int *)(local_78 + 0xc); local_7c = local_7c + 1) {
        FUN_006e6bd0(local_54 + local_30 * local_7c * 4 + local_3c,
                     *(int *)(local_78 + 0x24) + *(int *)(local_78 + 8) * local_7c * 4,
                     *(int *)(local_78 + 8) << 2);
      }
    }
    local_44 = 0;
    local_40 = in_stack_00000020 * *(int *)(local_50 + 0xc) + *(int *)(local_38 + 0xc);
    local_3c = local_40 * local_30 * 4;
    for (local_84 = 0; local_84 < *(int *)(local_80 + 0xc); local_84 = local_84 + 1) {
      FUN_006e6bd0(local_54 + local_30 * local_84 * 4 + local_3c,
                   *(int *)(local_80 + 0x24) + *(int *)(local_80 + 8) * local_84 * 4,
                   *(int *)(local_80 + 8) << 2);
    }
    for (local_a4 = 0; local_a4 < in_stack_0000001c; local_a4 = local_a4 + 1) {
      local_44 = local_a4 * *(int *)(local_48 + 8) + *(int *)(local_38 + 8);
      local_40 = in_stack_00000020 * *(int *)(local_50 + 0xc) + *(int *)(local_38 + 0xc);
      local_3c = (local_40 * local_30 + local_44) * 4;
      for (local_88 = 0; local_88 < *(int *)(local_a8 + 0xc); local_88 = local_88 + 1) {
        FUN_006e6bd0(local_54 + local_30 * local_88 * 4 + local_3c,
                     *(int *)(local_a8 + 0x24) + *(int *)(local_a8 + 8) * local_88 * 4,
                     *(int *)(local_a8 + 8) << 2);
      }
    }
    local_44 = in_stack_0000001c * *(int *)(local_48 + 8) + *(int *)(local_38 + 8);
    local_40 = in_stack_00000020 * *(int *)(local_50 + 0xc) + *(int *)(local_38 + 0xc);
    local_3c = (local_40 * local_30 + local_44) * 4;
    for (local_8c = 0; local_8c < *(int *)(local_ac + 0xc); local_8c = local_8c + 1) {
      FUN_006e6bd0(local_54 + local_30 * local_8c * 4 + local_3c,
                   *(int *)(local_ac + 0x24) + *(int *)(local_ac + 8) * local_8c * 4,
                   *(int *)(local_ac + 8) << 2);
    }
    local_b8 = (**(code **)(*local_f8 + 0x50))(local_f8,0);
    local_f4 = 0;
    local_f0 = 0;
    local_ec = local_30;
    local_e8 = local_b4;
    local_e4 = local_30;
    local_e0 = local_b4;
    FUN_00426e60(&local_f8);
    puVar4 = local_d0;
    FUN_004bcf30(&stack0x00000004);
    FUN_00426de0(puVar4);
    FUN_005856e0(local_4c);
    puVar2 = (undefined4 *)FUN_0040e2f0(local_110,&stack0x00000004);
    local_60 = *puVar2;
    uVar3 = FUN_0040d380(local_104);
    cVar1 = FUN_0040d2d0(uVar3);
    if (cVar1 == '\0') {
      local_c4 = 0;
      local_8._0_1_ = 1;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_2c);
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_00411b80();
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                ((function<void___cdecl(void)> *)&stack0x00000004);
      local_bc = local_c4;
    }
    else {
      local_c0 = FUN_0044de10();
      local_c0 = local_c0 + 0x18;
      local_8._0_1_ = 1;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_2c);
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_00411b80();
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                ((function<void___cdecl(void)> *)&stack0x00000004);
      local_bc = local_c0;
    }
  }
  else {
    local_bc = FUN_0044de10();
    local_bc = local_bc + 0x18;
    local_8 = 0xffffffff;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>
              ((function<void___cdecl(void)> *)&stack0x00000004);
  }
  ExceptionList = local_10;
  return local_bc;
}


/* ==== 004b7f20  d3d9_create_texture_004b7f20  size=2381 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

CCmdUI * d3d9_create_texture_004b7f20(CCmdUI *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  undefined1 local_bc [4];
  int local_b8;
  int local_b4;
  undefined4 local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  function<void___cdecl(void)> local_2c [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_007141b5;
  local_10 = ExceptionList;
  uVar1 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  local_14 = uVar1;
  CCmdUI::CCmdUI(param_1);
  FUN_004054a0("sprite/interface/popup.img");
  local_8 = CONCAT31(local_8._1_3_,1);
  local_34 = 0;
  if (in_stack_00000028 == 0) {
    FUN_004053a0("sprite/interface/popup.img");
    local_34 = 0;
  }
  else if (in_stack_00000028 == 1) {
    FUN_004053a0("sprite/interface/popup.img");
    local_34 = 0x3f;
  }
  else if (in_stack_00000028 == 2) {
    FUN_004053a0("sprite/interface/popup.img");
    local_34 = 0x5d;
  }
  else if (in_stack_00000028 == 3) {
    FUN_004053a0("sprite/interface/popup.img");
    local_34 = 0x86;
  }
  else if (in_stack_00000028 == 4) {
    FUN_004053a0("sprite/interface/minimap.img");
    local_34 = 0x1b;
  }
  else if (in_stack_00000028 == 5) {
    FUN_004053a0("sprite/interface/messageballoon.img");
    local_34 = 0;
  }
  else if (in_stack_00000028 == 6) {
    FUN_004053a0("sprite/interface/messageballoon.img");
    local_34 = 10;
  }
  else if (in_stack_00000028 == 7) {
    FUN_004053a0("sprite/interface/messageballoon.img");
    local_34 = 0x14;
  }
  else if (in_stack_00000028 == 8) {
    FUN_004053a0("sprite/interface/messageballoon.img");
    local_34 = 0x1e;
  }
  uVar2 = npk_get_relative_res_path(uVar1);
  local_4c = FUN_005855f0(uVar2);
  local_38 = local_34 * 0x28 + *(int *)(local_4c + 0x40);
  local_48 = (local_34 + 1) * 0x28 + *(int *)(local_4c + 0x40);
  local_64 = (local_34 + 2) * 0x28 + *(int *)(local_4c + 0x40);
  local_50 = (local_34 + 3) * 0x28 + *(int *)(local_4c + 0x40);
  local_58 = (local_34 + 4) * 0x28 + *(int *)(local_4c + 0x40);
  local_74 = (local_34 + 5) * 0x28 + *(int *)(local_4c + 0x40);
  local_78 = (local_34 + 6) * 0x28 + *(int *)(local_4c + 0x40);
  local_a0 = (local_34 + 7) * 0x28 + *(int *)(local_4c + 0x40);
  local_a4 = (local_34 + 8) * 0x28 + *(int *)(local_4c + 0x40);
  local_30 = *(int *)(local_38 + 8) + in_stack_00000020 * *(int *)(local_48 + 8) +
             *(int *)(local_64 + 8);
  local_ac = *(int *)(local_38 + 0xc) + in_stack_00000024 * *(int *)(local_50 + 0xc) +
             *(int *)(local_78 + 0xc);
  local_b0 = D3DXCreateTexture(*(undefined4 *)(local_b4 + 4),local_30,local_ac,1,0,0,1,param_1);
  local_b0 = (**(code **)(**(int **)param_1 + 0x4c))(*(undefined4 *)param_1,0,local_bc,0,0);
  local_54 = local_b8;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  for (local_5c = 0; local_5c < *(int *)(local_38 + 0xc); local_5c = local_5c + 1) {
    FUN_006e6bd0(local_54 + local_30 * local_5c * 4 + local_3c,
                 *(int *)(local_38 + 0x24) + *(int *)(local_38 + 8) * local_5c * 4,
                 *(int *)(local_38 + 8) << 2);
  }
  for (local_a8 = 0; local_a8 < in_stack_00000020; local_a8 = local_a8 + 1) {
    local_44 = local_a8 * *(int *)(local_48 + 8) + *(int *)(local_38 + 8);
    local_40 = 0;
    local_3c = local_44 * 4;
    for (local_60 = 0; local_60 < *(int *)(local_48 + 0xc); local_60 = local_60 + 1) {
      FUN_006e6bd0(local_54 + local_30 * local_60 * 4 + local_3c,
                   *(int *)(local_48 + 0x24) + *(int *)(local_48 + 8) * local_60 * 4,
                   *(int *)(local_48 + 8) << 2);
    }
  }
  local_44 = in_stack_00000020 * *(int *)(local_48 + 8) + *(int *)(local_38 + 8);
  local_40 = 0;
  local_3c = local_44 * 4;
  for (local_68 = 0; local_68 < *(int *)(local_64 + 0xc); local_68 = local_68 + 1) {
    FUN_006e6bd0(local_54 + local_30 * local_68 * 4 + local_3c,
                 *(int *)(local_64 + 0x24) + *(int *)(local_64 + 8) * local_68 * 4,
                 *(int *)(local_64 + 8) << 2);
  }
  for (local_8c = 0; local_8c < in_stack_00000024; local_8c = local_8c + 1) {
    local_44 = 0;
    local_40 = local_8c * *(int *)(local_50 + 0xc) + *(int *)(local_38 + 0xc);
    local_3c = local_40 * local_30 * 4;
    for (local_6c = 0; local_6c < *(int *)(local_50 + 0xc); local_6c = local_6c + 1) {
      FUN_006e6bd0(local_54 + local_30 * local_6c * 4 + local_3c,
                   *(int *)(local_50 + 0x24) + *(int *)(local_50 + 8) * local_6c * 4,
                   *(int *)(local_50 + 8) << 2);
    }
  }
  for (local_90 = 0; local_90 < in_stack_00000020; local_90 = local_90 + 1) {
    for (local_94 = 0; local_94 < in_stack_00000024; local_94 = local_94 + 1) {
      local_44 = local_90 * *(int *)(local_58 + 8) + *(int *)(local_38 + 8);
      local_40 = local_94 * *(int *)(local_58 + 0xc) + *(int *)(local_38 + 0xc);
      local_3c = (local_40 * local_30 + local_44) * 4;
      for (local_70 = 0; local_70 < *(int *)(local_58 + 0xc); local_70 = local_70 + 1) {
        FUN_006e6bd0(local_54 + local_30 * local_70 * 4 + local_3c,
                     *(int *)(local_58 + 0x24) + *(int *)(local_58 + 8) * local_70 * 4,
                     *(int *)(local_58 + 8) << 2);
      }
    }
  }
  for (local_98 = 0; local_98 < in_stack_00000024; local_98 = local_98 + 1) {
    local_44 = in_stack_00000020 * *(int *)(local_48 + 8) + *(int *)(local_38 + 8);
    local_40 = local_98 * *(int *)(local_74 + 0xc) + *(int *)(local_38 + 0xc);
    local_3c = (local_40 * local_30 + local_44) * 4;
    for (local_88 = 0; local_88 < *(int *)(local_74 + 0xc); local_88 = local_88 + 1) {
      FUN_006e6bd0(local_54 + local_30 * local_88 * 4 + local_3c,
                   *(int *)(local_74 + 0x24) + *(int *)(local_74 + 8) * local_88 * 4,
                   *(int *)(local_74 + 8) << 2);
    }
  }
  local_44 = 0;
  local_40 = in_stack_00000024 * *(int *)(local_50 + 0xc) + *(int *)(local_38 + 0xc);
  local_3c = local_40 * local_30 * 4;
  for (local_7c = 0; local_7c < *(int *)(local_78 + 0xc); local_7c = local_7c + 1) {
    FUN_006e6bd0(local_54 + local_30 * local_7c * 4 + local_3c,
                 *(int *)(local_78 + 0x24) + *(int *)(local_78 + 8) * local_7c * 4,
                 *(int *)(local_78 + 8) << 2);
  }
  for (local_9c = 0; local_9c < in_stack_00000020; local_9c = local_9c + 1) {
    local_44 = local_9c * *(int *)(local_48 + 8) + *(int *)(local_38 + 8);
    local_40 = in_stack_00000024 * *(int *)(local_50 + 0xc) + *(int *)(local_38 + 0xc);
    local_3c = (local_40 * local_30 + local_44) * 4;
    for (local_80 = 0; local_80 < *(int *)(local_a0 + 0xc); local_80 = local_80 + 1) {
      FUN_006e6bd0(local_54 + local_30 * local_80 * 4 + local_3c,
                   *(int *)(local_a0 + 0x24) + *(int *)(local_a0 + 8) * local_80 * 4,
                   *(int *)(local_a0 + 8) << 2);
    }
  }
  local_44 = in_stack_00000020 * *(int *)(local_48 + 8) + *(int *)(local_38 + 8);
  local_40 = in_stack_00000024 * *(int *)(local_50 + 0xc) + *(int *)(local_38 + 0xc);
  local_3c = (local_40 * local_30 + local_44) * 4;
  for (local_84 = 0; local_84 < *(int *)(local_a4 + 0xc); local_84 = local_84 + 1) {
    FUN_006e6bd0(local_54 + local_30 * local_84 * 4 + local_3c,
                 *(int *)(local_a4 + 0x24) + *(int *)(local_a4 + 8) * local_84 * 4,
                 *(int *)(local_a4 + 8) << 2);
  }
  local_b0 = (**(code **)(**(int **)param_1 + 0x50))(*(undefined4 *)param_1,0);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(int *)(param_1 + 0xc) = local_30;
  *(int *)(param_1 + 0x10) = local_ac;
  *(int *)(param_1 + 0x14) = local_30;
  *(int *)(param_1 + 0x18) = local_ac;
  FUN_005856e0(local_4c);
  local_8 = local_8 & 0xffffff00;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_2c);
  local_8 = 0xffffffff;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)&stack0x00000008);
  ExceptionList = local_10;
  return param_1;
}


/* ==== 004b8870  d3d9_create_texture_004b8870  size=509 ==== */

int d3d9_create_texture_004b8870(void)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int in_stack_0000001c;
  int in_stack_00000020;
  undefined4 in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined1 *puVar4;
  int *local_74;
  undefined4 local_70;
  undefined4 local_6c;
  int local_68;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_4c [12];
  undefined1 local_40 [4];
  undefined4 local_3c;
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_007141f5;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  npk_path_normalize_helper(DAT_007c5940 ^ (uint)&stack0xfffffffc);
  puVar2 = (undefined4 *)FUN_0040e2f0(local_2c,&stack0x00000004);
  local_18 = *puVar2;
  uVar3 = FUN_0040d380(local_30);
  cVar1 = FUN_0040d2d0(uVar3);
  if (cVar1 == '\0') {
    FUN_00426e80();
    local_8._0_1_ = 1;
    CCmdUI::CCmdUI((CCmdUI *)&local_74);
    local_1c = D3DXCreateTexture(*(undefined4 *)(local_14 + 4),in_stack_0000001c,in_stack_00000020,1
                                 ,0,0,1,&local_74);
    local_1c = (**(code **)(*local_74 + 0x4c))(local_74,0,local_40,0,0);
    FUN_006e6bd0(local_3c,in_stack_0000002c,in_stack_0000001c * in_stack_00000020 * 4);
    local_1c = (**(code **)(*local_74 + 0x50))(local_74,0);
    local_70 = 0;
    local_6c = 0;
    local_68 = in_stack_0000001c;
    local_64 = in_stack_00000020;
    local_60 = in_stack_00000024;
    local_5c = in_stack_00000028;
    FUN_00426e60(&local_74);
    puVar4 = local_4c;
    FUN_004bcf30(&stack0x00000004);
    FUN_00426de0(puVar4);
    puVar2 = (undefined4 *)FUN_0040e2f0(local_34,&stack0x00000004);
    local_18 = *puVar2;
    uVar3 = FUN_0040d380(local_38);
    cVar1 = FUN_0040d2d0(uVar3);
    if (cVar1 == '\0') {
      local_28 = 0;
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_00411b80();
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                ((function<void___cdecl(void)> *)&stack0x00000004);
      local_20 = local_28;
    }
    else {
      local_24 = FUN_0044de10();
      local_24 = local_24 + 0x18;
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_00411b80();
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                ((function<void___cdecl(void)> *)&stack0x00000004);
      local_20 = local_24;
    }
  }
  else {
    local_20 = FUN_0044de10();
    local_20 = local_20 + 0x18;
    local_8 = 0xffffffff;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>
              ((function<void___cdecl(void)> *)&stack0x00000004);
  }
  ExceptionList = local_10;
  return local_20;
}


/* ==== 004b8a70  d3d9_create_texture_004b8a70  size=284 ==== */

int * d3d9_create_texture_004b8a70(void)

{
  undefined4 uVar1;
  undefined4 in_stack_0000001c;
  int *in_stack_00000020;
  int *in_stack_00000024;
  undefined4 in_stack_00000028;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined1 local_2c [4];
  undefined4 local_28;
  int *local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0071422d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar2 = in_stack_0000001c;
  piVar3 = in_stack_00000020;
  piVar4 = in_stack_00000024;
  uVar5 = in_stack_00000028;
  uVar1 = npk_get_relative_res_path(in_stack_0000001c,in_stack_00000020,in_stack_00000024,in_stack_00000028,
                       DAT_007c5940 ^ (uint)&stack0xfffffffc);
  local_18 = FUN_004b57f0(DAT_007ca22c,uVar1,uVar2,piVar3,piVar4,uVar5);
  if (local_18 == 0) {
    MessageBoxA((HWND)0x0,&DAT_0074e56c,(LPCSTR)0x0,0);
  }
  local_20 = D3DXCreateTexture(*(undefined4 *)(local_1c + 4),*in_stack_00000020,*in_stack_00000024,1
                               ,0,0,1,&local_14);
  local_20 = (**(code **)(*local_14 + 0x4c))(local_14,0,local_2c,0,0);
  FUN_006e6bd0(local_28,local_18,*in_stack_00000020 * *in_stack_00000024 * 4);
  FUN_006f1902(local_18);
  local_20 = (**(code **)(*local_14 + 0x50))(local_14,0);
  local_24 = local_14;
  local_8 = 0xffffffff;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)&stack0x00000004);
  ExceptionList = local_10;
  return local_24;
}


/* ==== 004b8b90  d3d9_create_texture_004b8b90  size=258 ==== */

int * d3d9_create_texture_004b8b90(void)

{
  uint uVar1;
  undefined4 uVar2;
  uint in_stack_0000001c;
  int *in_stack_00000020;
  int *in_stack_00000024;
  undefined4 in_stack_00000028;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined1 local_2c [4];
  undefined4 local_28;
  int *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0071422d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  uVar1 = in_stack_0000001c & 0xffffff;
  piVar3 = in_stack_00000020;
  piVar4 = in_stack_00000024;
  uVar5 = in_stack_00000028;
  uVar2 = npk_get_relative_res_path(uVar1,in_stack_00000020,in_stack_00000024,in_stack_00000028,
                       DAT_007c5940 ^ (uint)&stack0xfffffffc);
  local_1c = FUN_004b5c10(uVar2,uVar1,piVar3,piVar4,uVar5);
  local_20 = D3DXCreateTexture(*(undefined4 *)(local_18 + 4),*in_stack_00000020,*in_stack_00000024,1
                               ,0,0,1,&local_14);
  local_20 = (**(code **)(*local_14 + 0x4c))(local_14,0,local_2c,0,0);
  FUN_006e6bd0(local_28,local_1c,*in_stack_00000020 * *in_stack_00000024 * 4);
  FUN_006f1902(local_1c);
  local_20 = (**(code **)(*local_14 + 0x50))(local_14,0);
  local_24 = local_14;
  local_8 = 0xffffffff;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)&stack0x00000004);
  ExceptionList = local_10;
  return local_24;
}


/* ==== 004b90c0  d3d9_create_texture_004b90c0  size=468 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void d3d9_create_texture_004b90c0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int **ppiVar6;
  int *local_7c [3];
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_54;
  int local_50;
  undefined4 *local_4c;
  int local_48;
  undefined *local_44;
  undefined4 local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  char local_29;
  undefined1 local_28 [24];
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  if (*(int *)(*(int *)ThreadLocalStoragePointer + 4) < DAT_007ca9e0) {
    FUN_006e4c3b(&DAT_007ca9e0);
    if (DAT_007ca9e0 == -1) {
      FUN_00426e80();
      FUN_006e4fef(FUN_0072a9c0);
      FUN_006e4bea(&DAT_007ca9e0);
    }
  }
  local_29 = '\0';
  local_44 = &DAT_007ca9e4;
  local_30 = game_loop_helper_018d0();
  local_48 = game_loop_helper_018b0();
  do {
    if (local_30 == local_48) {
LAB_004b918c:
      if (local_29 == '\0') {
        CCmdUI::CCmdUI((CCmdUI *)local_7c);
        local_68 = param_3;
        local_70 = param_3;
        local_64 = param_4;
        local_6c = param_4;
        ppiVar6 = local_7c;
        uVar5 = 1;
        uVar4 = 0;
        uVar3 = 0;
        uVar2 = 1;
        iVar1 = FUN_004bcf00(param_3,param_4,1,0,0,1,ppiVar6);
        local_40 = D3DXCreateTexture(*(undefined4 *)(iVar1 + 4),param_3,param_4,uVar2,uVar3,uVar4,
                                     uVar5,ppiVar6);
        local_40 = (**(code **)(*local_7c[0] + 0x44))(local_7c[0],0,local_28);
        local_40 = (**(code **)(*local_7c[0] + 0x4c))(local_7c[0],0,&local_54,0,0);
        for (local_34 = 0; local_34 < local_c; local_34 = local_34 + 1) {
          for (local_38 = 0; local_38 < local_10; local_38 = local_38 + 1) {
            local_4c = (undefined4 *)(local_34 * local_54 + local_50 + local_38 * 4);
            *local_4c = 0xffffffff;
          }
        }
        local_40 = (**(code **)(*local_7c[0] + 0x50))(local_7c[0],0);
        FUN_00426e60(local_7c);
      }
      return;
    }
    local_3c = local_30;
    if ((*(int *)(local_30 + 0xc) == param_3) && (*(int *)(local_30 + 0x10) == param_4)) {
      FUN_004b9000(local_30,param_1,param_2);
      local_29 = '\x01';
      goto LAB_004b918c;
    }
    local_30 = local_30 + 0x28;
  } while( true );
}


/* ==== 004b9530  d3d9_matrix_transform_2d  size=2982 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void d3d9_matrix_transform_2d(void)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  uint in_stack_00000030;
  uint in_stack_00000034;
  uint in_stack_00000038;
  undefined4 in_stack_0000003c;
  undefined1 *in_stack_00000040;
  float in_stack_00000044;
  float in_stack_0000004c;
  char in_stack_00000050;
  int in_stack_00000054;
  int in_stack_00000058;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  char *pcVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  char *pcStack_42c;
  undefined1 *puStack_428;
  float fStack_424;
  undefined1 *puStack_420;
  int *piStack_41c;
  undefined1 *local_418;
  undefined4 *local_414;
  uint uStack_410;
  undefined1 *local_3fc;
  undefined1 local_3f8 [8];
  undefined1 local_3f0 [8];
  undefined1 local_3e8 [8];
  int local_3e0;
  int local_3dc;
  int local_3d8;
  int local_3d4;
  int local_3d0;
  int local_3cc;
  int local_3c8;
  int local_3c4;
  int local_3c0;
  undefined4 *local_3bc;
  int local_3b8;
  int local_3b4;
  int local_3b0;
  int local_3ac;
  int local_3a8;
  float local_3a4;
  float local_3a0;
  uint *local_39c;
  uint *local_398;
  undefined1 local_392;
  undefined1 local_391;
  undefined1 local_390;
  undefined1 local_38f;
  undefined1 local_38e;
  undefined1 local_38d;
  uint local_38c;
  uint local_388;
  undefined4 *local_384;
  undefined4 *local_380;
  uint local_37c;
  char *local_378;
  char *local_374;
  uint local_370;
  char local_36a;
  char local_369;
  int local_368;
  undefined4 *local_364;
  undefined1 local_360 [64];
  undefined1 local_320 [64];
  undefined1 local_2e0 [64];
  undefined1 local_2a0 [64];
  undefined1 local_260 [64];
  undefined1 local_220 [64];
  undefined1 local_1e0 [64];
  undefined1 local_1a0 [64];
  char local_160 [64];
  undefined1 local_120 [64];
  undefined1 local_e0 [64];
  char local_a0 [16];
  undefined4 local_90;
  undefined1 local_60 [12];
  undefined4 local_54 [6];
  char *local_3c;
  uint local_38;
  undefined4 local_34 [6];
  char *local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0071425d;
  local_10 = ExceptionList;
  uStack_410 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  local_414 = (undefined4 *)in_stack_0000001c;
  local_3fc = (undefined1 *)&pcStack_42c;
  local_14 = uStack_410;
  FUN_00405520(&stack0x00000004);
  local_3bc = (undefined4 *)FUN_004b8ca0();
  local_364 = local_3bc;
  if (local_3bc == (undefined4 *)0x0) {
    local_8 = 0xffffffff;
    local_414 = (undefined4 *)0x4b95b5;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>
              ((function<void___cdecl(void)> *)&stack0x00000004);
    ExceptionList = local_10;
    return;
  }
  local_414 = (undefined4 *)0x0;
  local_418 = (undefined1 *)0x4b95c8;
  FUN_004b5650();
  if (in_stack_00000050 == '\0') {
    if (local_364[7] == 0) {
      local_414 = local_54;
      local_418 = (undefined1 *)0x0;
      piStack_41c = (int *)*local_364;
      puStack_420 = (undefined1 *)0x4b9603;
      iVar2 = (**(code **)(*(int *)*local_364 + 0x44))();
      if (iVar2 < 0) {
        local_8 = 0xffffffff;
        local_414 = (undefined4 *)0x4b9616;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                  ((function<void___cdecl(void)> *)&stack0x00000004);
        ExceptionList = local_10;
        return;
      }
      local_414 = local_364 + 7;
      local_418 = (undefined1 *)0x1;
      piStack_41c = (int *)local_54[0];
      puStack_420 = (undefined1 *)0x0;
      fStack_424 = 1.4013e-45;
      puStack_428 = (undefined1 *)local_38;
      pcStack_42c = local_3c;
      local_3b8 = D3DXCreateTexture(*(undefined4 *)(DAT_007ca1a4 + 4));
      if (local_3b8 < 0) {
        local_364[7] = 0;
        local_8 = 0xffffffff;
        local_414 = (undefined4 *)0x4b9673;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                  ((function<void___cdecl(void)> *)&stack0x00000004);
        ExceptionList = local_10;
        return;
      }
      local_414 = (undefined4 *)0x10;
      local_418 = (undefined1 *)0x0;
      piStack_41c = &local_3c8;
      puStack_420 = (undefined1 *)0x0;
      fStack_424 = (float)*local_364;
      puStack_428 = (undefined1 *)0x4b969e;
      iVar2 = (**(code **)(*(int *)*local_364 + 0x4c))();
      if (iVar2 < 0) {
        puStack_428 = (undefined1 *)local_364[7];
        pcStack_42c = (char *)0x4b96bc;
        (**(code **)(*(int *)local_364[7] + 8))();
        local_364[7] = 0;
        local_8 = 0xffffffff;
        local_414 = (undefined4 *)0x4b96d8;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                  ((function<void___cdecl(void)> *)&stack0x00000004);
        ExceptionList = local_10;
        return;
      }
      puStack_428 = (undefined1 *)0x0;
      pcStack_42c = (char *)0x0;
      iVar2 = (**(code **)(*(int *)local_364[7] + 0x4c))(local_364[7],0,&local_3d0);
      if (iVar2 < 0) {
        (**(code **)(*(int *)*local_364 + 0x50))(*local_364,0);
        (**(code **)(*(int *)local_364[7] + 8))(local_364[7]);
        local_364[7] = 0;
        local_8 = 0xffffffff;
        local_414 = (undefined4 *)0x4b9759;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                  ((function<void___cdecl(void)> *)&stack0x00000004);
        ExceptionList = local_10;
        return;
      }
      for (local_370 = 0; local_370 < local_38; local_370 = local_370 + 1) {
        local_3b4 = local_370 * local_3c8 + local_3c4;
        local_3c0 = local_370 * local_3d0 + local_3cc;
        for (local_374 = (char *)0x0; local_374 < local_3c; local_374 = local_374 + 1) {
          local_39c = (uint *)(local_3c0 + (int)local_374 * 4);
          *local_39c = 0;
          local_384 = (undefined4 *)(local_3b4 + (int)local_374 * 4);
          local_369 = (char)((uint)*local_384 >> 0x18);
          local_38d = (undefined1)((uint)*local_384 >> 0x10);
          local_38e = (undefined1)((uint)*local_384 >> 8);
          local_38f = (undefined1)*local_384;
          if (local_369 != '\0') {
            *local_39c = (in_stack_00000030 & 0xff) << 0x10 | 0xff000000 |
                         (in_stack_00000034 & 0xff) << 8 | in_stack_00000038 & 0xff;
          }
        }
      }
      (**(code **)(*(int *)local_364[7] + 0x50))(local_364[7],0);
      (**(code **)(*(int *)*local_364 + 0x50))(*local_364,0);
    }
    local_414 = (undefined4 *)
                ((float)in_stack_00000024 * in_stack_00000044 + (float)in_stack_0000002c);
    local_418 = (undefined1 *)
                ((float)in_stack_00000020 * (float)in_stack_00000040 + (float)in_stack_00000028);
    piStack_41c = (int *)0x4b992e;
    FUN_004b5370();
    local_414 = (undefined4 *)((float)-in_stack_00000024 * in_stack_00000044);
    local_418 = (undefined1 *)((float)-in_stack_00000020 * (float)in_stack_00000040);
    piStack_41c = (int *)0x4b9961;
    FUN_004b5370();
    local_414 = (undefined4 *)in_stack_00000044;
    local_418 = in_stack_00000040;
    piStack_41c = (int *)0x4b9982;
    FUN_004b5370();
    local_414 = (undefined4 *)0x4b998d;
    allocator<>();
    local_414 = (undefined4 *)local_3e8;
    local_418 = (undefined1 *)in_stack_0000004c;
    piStack_41c = (int *)local_3f0;
    puStack_420 = local_3f8;
    fStack_424 = 0.0;
    puStack_428 = (undefined1 *)0x0;
    pcStack_42c = local_160;
    D3DXMatrixTransformation2D();
    (**(code **)(**(int **)(local_368 + 0xc) + 0x14))(*(undefined4 *)(local_368 + 0xc),local_160);
    FUN_004a6f40((float)(int)local_364[1],(float)(int)local_364[2],0);
    (**(code **)(**(int **)(local_368 + 0xc) + 0x24))
              (*(undefined4 *)(local_368 + 0xc),local_364[7],0,0,local_60,in_stack_0000003c);
    *(undefined1 *)(local_368 + 8) = 0;
  }
  else {
    if (local_364[9] == 0) {
      local_414 = local_34;
      local_418 = (undefined1 *)0x0;
      piStack_41c = (int *)*local_364;
      puStack_420 = (undefined1 *)0x4b9a86;
      iVar2 = (**(code **)(*(int *)*local_364 + 0x44))();
      if (iVar2 < 0) {
        local_8 = 0xffffffff;
        local_414 = (undefined4 *)0x4b9a99;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                  ((function<void___cdecl(void)> *)&stack0x00000004);
        ExceptionList = local_10;
        return;
      }
      local_414 = local_364 + 9;
      local_418 = (undefined1 *)0x1;
      piStack_41c = (int *)local_34[0];
      puStack_420 = (undefined1 *)0x0;
      fStack_424 = 1.4013e-45;
      puStack_428 = (undefined1 *)local_18;
      pcStack_42c = local_1c;
      local_3b0 = D3DXCreateTexture(*(undefined4 *)(DAT_007ca1a4 + 4));
      if (local_3b0 < 0) {
        local_364[9] = 0;
        local_8 = 0xffffffff;
        local_414 = (undefined4 *)0x4b9af6;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                  ((function<void___cdecl(void)> *)&stack0x00000004);
        ExceptionList = local_10;
        return;
      }
      local_414 = (undefined4 *)0x10;
      local_418 = (undefined1 *)0x0;
      piStack_41c = &local_3d8;
      puStack_420 = (undefined1 *)0x0;
      fStack_424 = (float)*local_364;
      puStack_428 = (undefined1 *)0x4b9b21;
      iVar2 = (**(code **)(*(int *)*local_364 + 0x4c))();
      if (iVar2 < 0) {
        puStack_428 = (undefined1 *)local_364[9];
        pcStack_42c = (char *)0x4b9b3f;
        (**(code **)(*(int *)local_364[9] + 8))();
        local_364[9] = 0;
        local_8 = 0xffffffff;
        local_414 = (undefined4 *)0x4b9b5b;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                  ((function<void___cdecl(void)> *)&stack0x00000004);
        ExceptionList = local_10;
        return;
      }
      puStack_428 = (undefined1 *)0x0;
      pcStack_42c = (char *)0x0;
      iVar2 = (**(code **)(*(int *)local_364[9] + 0x4c))(local_364[9],0,&local_3e0);
      if (iVar2 < 0) {
        (**(code **)(*(int *)*local_364 + 0x50))(*local_364,0);
        (**(code **)(*(int *)local_364[9] + 8))(local_364[9]);
        local_364[9] = 0;
        local_8 = 0xffffffff;
        local_414 = (undefined4 *)0x4b9bdc;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>
                  ((function<void___cdecl(void)> *)&stack0x00000004);
        ExceptionList = local_10;
        return;
      }
      for (local_37c = 0; local_37c < local_18; local_37c = local_37c + 1) {
        local_3a8 = local_37c * local_3d8 + local_3d4;
        local_3ac = local_37c * local_3e0 + local_3dc;
        for (local_378 = (char *)0x0; local_378 < local_1c; local_378 = local_378 + 1) {
          local_398 = (uint *)(local_3ac + (int)local_378 * 4);
          *local_398 = 0;
          local_380 = (undefined4 *)(local_3a8 + (int)local_378 * 4);
          local_36a = (char)((uint)*local_380 >> 0x18);
          local_390 = (undefined1)((uint)*local_380 >> 0x10);
          local_391 = (undefined1)((uint)*local_380 >> 8);
          local_392 = (undefined1)*local_380;
          if (local_36a != '\0') {
            *local_398 = (in_stack_00000030 & 0xff) << 0x10 | 0xff000000 |
                         (in_stack_00000034 & 0xff) << 8 | in_stack_00000038 & 0xff;
          }
        }
      }
      (**(code **)(*(int *)local_364[9] + 0x50))(local_364[9],0);
      (**(code **)(*(int *)*local_364 + 0x50))(*local_364,0);
    }
    local_414 = (undefined4 *)0x4b9d7f;
    allocator<>();
    local_414 = (undefined4 *)0x3f800000;
    local_418 = (undefined1 *)(in_stack_00000044 * 0.3);
    piStack_41c = (int *)in_stack_00000040;
    puStack_420 = local_220;
    fStack_424 = 6.944241e-39;
    D3DXMatrixScaling();
    fStack_424 = 6.944256e-39;
    allocator<>();
    fStack_424 = in_stack_0000004c;
    puStack_428 = local_1a0;
    pcStack_42c = (char *)0x4b9ddb;
    D3DXMatrixRotationZ();
    pcStack_42c = (char *)0x4b9de6;
    allocator<>();
    pcStack_42c = local_a0;
    FUN_004b53d0();
    local_90 = 0x3fa66666;
    pcStack_42c = "sprite/map/npc/npc_se.img";
    cVar1 = FUN_00427c60(&stack0x00000004);
    if (cVar1 != '\0') {
      local_90 = 0xbfa66666;
    }
    pcStack_42c = (char *)0x0;
    FUN_004b5370(0);
    local_3a4 = (float)(in_stack_00000028 + in_stack_00000020 + local_364[1]);
    local_3a0 = (float)(in_stack_0000002c + in_stack_00000024 + local_364[2]);
    pcStack_42c = (char *)0x4b9e8b;
    allocator<>();
    pcStack_42c = (char *)0x0;
    D3DXMatrixTranslation(local_120,local_3a4,local_3a0);
    allocator<>();
    if ((in_stack_00000054 == -1) && (in_stack_00000058 == -1)) {
      uVar4 = in_stack_00000024 + local_364[2] >> 0x1f;
      uVar5 = in_stack_00000020 + local_364[1] >> 0x1f;
      puVar3 = (uint *)FUN_004b5370((float)(int)((in_stack_00000020 + local_364[1] ^ uVar5) - uVar5)
                                    ,(float)(int)((in_stack_00000024 + local_364[2] ^ uVar4) - uVar4
                                                 ));
      local_38c = *puVar3;
      local_388 = puVar3[1];
    }
    else {
      puVar3 = (uint *)FUN_004b5370((float)in_stack_00000054,(float)in_stack_00000058);
      local_38c = *puVar3;
      local_388 = puVar3[1];
    }
    allocator<>();
    allocator<>();
    D3DXMatrixTranslation(local_1e0,local_38c ^ 0x80000000,local_388 ^ 0x80000000,0);
    D3DXMatrixTranslation(local_e0,local_38c,local_388,0);
    puVar13 = local_120;
    puVar12 = local_260;
    puVar11 = local_e0;
    puVar10 = local_360;
    pcVar9 = local_a0;
    puVar8 = local_320;
    puVar7 = local_220;
    puVar6 = local_2e0;
    d3d9_matrix_multiply(local_2a0,local_1a0);
    d3d9_matrix_multiply(puVar6,puVar7);
    d3d9_matrix_multiply(puVar8,pcVar9);
    d3d9_matrix_multiply(puVar10,puVar11);
    d3d9_matrix_multiply(puVar12,puVar13);
    (**(code **)(**(int **)(local_368 + 0xc) + 0x14))(*(undefined4 *)(local_368 + 0xc),local_260);
    (**(code **)(**(int **)(local_368 + 0xc) + 0x24))
              (*(undefined4 *)(local_368 + 0xc),local_364[9],0,0,0,in_stack_0000003c);
    *(undefined1 *)(local_368 + 8) = 0;
  }
  local_8 = 0xffffffff;
  local_414 = (undefined4 *)0x4ba0ba;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)&stack0x00000004);
  ExceptionList = local_10;
  return;
}


/* ==== 004ba0e0  d3d9_create_texture_004ba0e0  size=825 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void d3d9_create_texture_004ba0e0(void)

{
  int iVar1;
  undefined4 *in_ECX;
  int local_a4;
  int local_a0;
  undefined4 *local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  uint local_78;
  uint local_74;
  char local_6f;
  char local_6e;
  char local_6d;
  undefined4 *local_6c;
  undefined4 local_68 [6];
  uint local_50;
  uint local_4c;
  int local_48 [17];
  
  local_48[0x10] = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  if ((in_ECX[8] == 0) &&
     (local_6c = in_ECX, iVar1 = (**(code **)(*(int *)*in_ECX + 0x44))(*in_ECX,0,local_68),
     -1 < iVar1)) {
    local_94 = D3DXCreateTexture(*(undefined4 *)(DAT_007ca1a4 + 4),local_50,local_4c,1,0,local_68[0]
                                 ,1,local_6c + 8);
    if (local_94 < 0) {
      local_6c[8] = 0;
    }
    else {
      iVar1 = (**(code **)(*(int *)*local_6c + 0x4c))(*local_6c,0,&local_90,0,0x10);
      if (iVar1 < 0) {
        (**(code **)(*(int *)local_6c[8] + 8))(local_6c[8]);
        local_6c[8] = 0;
      }
      else {
        iVar1 = (**(code **)(*(int *)local_6c[8] + 0x4c))(local_6c[8],0,&local_a4,0,0);
        if (iVar1 < 0) {
          (**(code **)(*(int *)*local_6c + 0x50))(*local_6c,0);
          (**(code **)(*(int *)local_6c[8] + 8))(local_6c[8]);
          local_6c[8] = 0;
        }
        else {
          local_48[8] = 0xffffffff;
          local_48[9] = 1;
          local_48[10] = 0;
          local_48[0xb] = 0;
          local_48[0xc] = 0xffffffff;
          local_48[0xd] = 1;
          local_48[0xe] = 0xffffffff;
          local_48[0xf] = 1;
          local_48[0] = 0;
          local_48[1] = 0;
          local_48[2] = 0xffffffff;
          local_48[3] = 1;
          local_48[4] = 0xffffffff;
          local_48[5] = 0xffffffff;
          local_48[6] = 1;
          local_48[7] = 1;
          for (local_78 = 0; local_78 < local_4c; local_78 = local_78 + 1) {
            local_98 = local_78 * local_90 + local_8c;
            local_88 = local_78 * local_a4 + local_a0;
            for (local_74 = 0; local_74 < local_50; local_74 = local_74 + 1) {
              *(undefined4 *)(local_88 + local_74 * 4) = 0;
              local_6e = (char)((uint)*(undefined4 *)(local_98 + local_74 * 4) >> 0x18);
              if (local_6e != '\0') {
                local_6d = '\0';
                for (local_7c = 0; local_7c < 8; local_7c = local_7c + 1) {
                  local_84 = local_74 + local_48[local_7c + 8];
                  local_80 = local_78 + local_48[local_7c];
                  if ((((local_84 < 0) || ((int)local_50 <= local_84)) || (local_80 < 0)) ||
                     ((int)local_4c <= local_80)) {
                    local_6d = '\x01';
                    break;
                  }
                  local_9c = (undefined4 *)(local_80 * local_90 + local_8c + local_84 * 4);
                  local_6f = (char)((uint)*local_9c >> 0x18);
                  if (local_6f == '\0') {
                    local_6d = '\x01';
                    break;
                  }
                }
                if (local_6d != '\0') {
                  *(undefined4 *)(local_88 + local_74 * 4) = 0xffffffff;
                }
              }
            }
          }
          (**(code **)(*(int *)local_6c[8] + 0x50))(local_6c[8],0);
          (**(code **)(*(int *)*local_6c + 0x50))(*local_6c,0);
        }
      }
    }
  }
  return;
}


/* ==== 004ba420  d3d9_matrix_transform_2d_004ba420  size=533 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void d3d9_matrix_transform_2d_004ba420(void)

{
  undefined4 in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  undefined4 in_stack_00000030;
  float in_stack_00000034;
  float in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined1 *puStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined1 *puStack_9c;
  float *pfStack_98;
  float local_94;
  float *local_90;
  uint uStack_8c;
  undefined1 local_88 [8];
  undefined1 *local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined1 local_60 [64];
  undefined1 local_20 [12];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0071429d;
  local_10 = ExceptionList;
  uStack_8c = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  local_90 = (float *)in_stack_0000001c;
  local_80 = (undefined1 *)&puStack_a8;
  local_14 = uStack_8c;
  FUN_00405520(&stack0x00000004);
  local_6c = FUN_004b8ca0();
  local_68 = local_6c;
  if (local_6c == 0) {
    local_8 = 0xffffffff;
    local_90 = (float *)0x4ba48d;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>
              ((function<void___cdecl(void)> *)&stack0x00000004);
  }
  else {
    local_90 = (float *)0x4ba49b;
    d3d9_create_texture_004ba0e0();
    local_90 = (float *)0x0;
    local_94 = 6.946726e-39;
    FUN_004b5650();
    local_90 = (float *)(in_stack_00000038 * 1.0);
    local_94 = in_stack_00000034 * 1.0;
    pfStack_98 = (float *)0x4ba4d6;
    FUN_004b5370();
    local_90 = (float *)0x0;
    local_94 = 0.0;
    pfStack_98 = (float *)0x4ba4f0;
    FUN_004b5370();
    local_90 = (float *)0x0;
    local_94 = 0.0;
    pfStack_98 = (float *)0x4ba50a;
    FUN_004b5370();
    local_74 = (float)in_stack_00000020 * in_stack_00000034 + (float)in_stack_00000028;
    local_70 = (float)in_stack_00000024 * in_stack_00000038 + (float)in_stack_0000002c;
    local_7c = (float)-in_stack_00000020 * in_stack_00000034;
    local_78 = (float)-in_stack_00000024 * in_stack_00000038;
    local_90 = (float *)0x4ba568;
    allocator<>();
    local_90 = &local_74;
    local_94 = (float)in_stack_00000040;
    pfStack_98 = &local_7c;
    puStack_9c = local_88;
    local_a0 = 0;
    uStack_a4 = 0;
    puStack_a8 = local_60;
    D3DXMatrixTransformation2D();
    (**(code **)(**(int **)(local_64 + 0xc) + 0x14))(*(undefined4 *)(local_64 + 0xc),local_60);
    FUN_004a6f40((float)*(int *)(local_68 + 4),(float)*(int *)(local_68 + 8),0);
    (**(code **)(**(int **)(local_64 + 0xc) + 0x24))
              (*(undefined4 *)(local_64 + 0xc),*(undefined4 *)(local_68 + 0x20),0,0,local_20,
               in_stack_00000030);
    *(undefined1 *)(local_64 + 8) = 0;
    local_8 = 0xffffffff;
    local_90 = (float *)0x4ba619;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>
              ((function<void___cdecl(void)> *)&stack0x00000004);
  }
  ExceptionList = local_10;
  return;
}


/* ==== 004ba6a0  d3d9_matrix_transform_2d_004ba6a0  size=1695 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void d3d9_matrix_transform_2d_004ba6a0(char param_1,char param_2)

{
  uint uVar1;
  undefined4 in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000030;
  int in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined1 *in_stack_0000003c;
  float in_stack_00000040;
  undefined4 in_stack_00000044;
  undefined4 in_stack_00000048;
  int in_stack_0000004c;
  int in_stack_00000050;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puStack_374;
  float fStack_370;
  undefined4 local_36c;
  undefined1 *puStack_368;
  undefined1 *local_364;
  undefined1 *local_360;
  undefined1 *local_35c;
  uint uStack_358;
  undefined1 local_354 [8];
  undefined1 local_34c [8];
  undefined1 local_344 [8];
  undefined1 local_33c [8];
  undefined1 local_334 [8];
  undefined1 local_32c [8];
  undefined1 *local_324;
  undefined1 *local_320;
  undefined4 local_31c;
  undefined4 *local_318;
  uint local_314;
  uint local_310;
  int local_30c;
  int local_308;
  int local_304;
  undefined4 *local_300;
  undefined1 local_2fc [64];
  undefined1 local_2bc [64];
  undefined1 local_27c [64];
  undefined1 local_23c [64];
  undefined1 local_1fc [64];
  undefined1 local_1bc [64];
  undefined1 local_17c [64];
  undefined1 local_13c [64];
  undefined1 local_fc [64];
  undefined1 local_bc [64];
  undefined1 local_7c [64];
  undefined1 local_3c [12];
  undefined1 local_30 [12];
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_007142dd;
  local_10 = ExceptionList;
  uStack_358 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  local_35c = (undefined1 *)in_stack_00000024;
  local_324 = (undefined1 *)&puStack_374;
  local_14 = uStack_358;
  FUN_00405520(&stack0x0000000c);
  local_318 = (undefined4 *)FUN_004b8ca0();
  local_300 = local_318;
  if (local_318 == (undefined4 *)0x0) {
    local_8 = 0xffffffff;
    local_35c = (undefined1 *)0x4ba725;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>
              ((function<void___cdecl(void)> *)&stack0x0000000c);
  }
  else {
    local_35c = (undefined1 *)in_stack_00000048;
    local_360 = (undefined1 *)0x4ba73a;
    FUN_004b5650();
    local_308 = in_stack_0000004c;
    local_30c = in_stack_00000050;
    if (in_stack_0000004c == -1) {
      local_308 = local_300[3];
    }
    if (in_stack_00000050 == -1) {
      local_30c = local_300[4];
    }
    local_24 = 0;
    local_20 = 0;
    local_1c = local_308;
    local_18 = local_30c;
    if (param_1 == '\0') {
      local_35c = (undefined1 *)in_stack_00000040;
      local_360 = in_stack_0000003c;
      local_364 = (undefined1 *)0x4bab7f;
      FUN_004b5370();
      local_35c = (undefined1 *)
                  ((float)(in_stack_0000002c + in_stack_00000034) -
                  ((in_stack_00000040 - 1.0) * (float)(int)local_300[4]) / 2.0);
      local_360 = (undefined1 *)
                  ((float)(in_stack_00000028 + in_stack_00000030) -
                  (((float)in_stack_0000003c - 1.0) * (float)(int)local_300[3]) / 2.0);
      local_364 = (undefined1 *)0x4babfa;
      FUN_004b5370();
      local_35c = (undefined1 *)(((float)(int)local_300[4] * in_stack_00000040) / 2.0);
      local_360 = (undefined1 *)(((float)(int)local_300[3] * (float)in_stack_0000003c) / 2.0);
      local_364 = (undefined1 *)0x4bac41;
      FUN_004b5370();
      local_35c = (undefined1 *)0x4bac4c;
      allocator<>();
      local_35c = local_344;
      local_360 = (undefined1 *)in_stack_00000044;
      local_364 = local_34c;
      puStack_368 = local_354;
      local_36c = 0;
      fStack_370 = 0.0;
      puStack_374 = local_1fc;
      D3DXMatrixTransformation2D();
      (**(code **)(**(int **)(local_304 + 0xc) + 0x14))(*(undefined4 *)(local_304 + 0xc),local_1fc);
      FUN_004a6f40((float)(int)local_300[1],(float)(int)local_300[2],0);
      (**(code **)(**(int **)(local_304 + 0xc) + 0x24))
                (*(undefined4 *)(local_304 + 0xc),*local_300,&local_24,0,local_3c,in_stack_00000038)
      ;
    }
    else if (param_2 == '\0') {
      local_35c = (undefined1 *)
                  ((float)in_stack_0000002c * in_stack_00000040 + (float)in_stack_00000034);
      local_360 = (undefined1 *)
                  ((float)in_stack_00000028 * (float)in_stack_0000003c + (float)in_stack_00000030);
      local_364 = (undefined1 *)0x4baa3c;
      FUN_004b5370();
      local_35c = (undefined1 *)((float)-in_stack_0000002c * in_stack_00000040);
      local_360 = (undefined1 *)((float)-in_stack_00000028 * (float)in_stack_0000003c);
      local_364 = (undefined1 *)0x4baa6f;
      FUN_004b5370();
      local_35c = (undefined1 *)in_stack_00000040;
      local_360 = in_stack_0000003c;
      local_364 = (undefined1 *)0x4baa90;
      FUN_004b5370();
      local_35c = (undefined1 *)0x4baa9b;
      allocator<>();
      local_35c = local_32c;
      local_360 = (undefined1 *)in_stack_00000044;
      local_364 = local_334;
      puStack_368 = local_33c;
      local_36c = 0;
      fStack_370 = 0.0;
      puStack_374 = local_1bc;
      D3DXMatrixTransformation2D();
      (**(code **)(**(int **)(local_304 + 0xc) + 0x14))(*(undefined4 *)(local_304 + 0xc),local_1bc);
      FUN_004a6f40((float)(int)local_300[1],(float)(int)local_300[2],0);
      (**(code **)(**(int **)(local_304 + 0xc) + 0x24))
                (*(undefined4 *)(local_304 + 0xc),*local_300,&local_24,0,local_30,in_stack_00000038)
      ;
    }
    else {
      uVar1 = in_stack_0000002c + local_300[2] >> 0x1f;
      local_35c = (undefined1 *)(float)(int)((in_stack_0000002c + local_300[2] ^ uVar1) - uVar1);
      uVar1 = in_stack_00000028 + local_300[1] >> 0x1f;
      local_360 = (undefined1 *)(float)(int)((in_stack_00000028 + local_300[1] ^ uVar1) - uVar1);
      local_364 = (undefined1 *)0x4ba7f7;
      FUN_004b5370();
      local_35c = (undefined1 *)(float)(in_stack_00000034 + in_stack_0000002c + local_300[2]);
      local_360 = (undefined1 *)(float)(in_stack_00000030 + in_stack_00000028 + local_300[1]);
      local_364 = (undefined1 *)0x4ba834;
      FUN_004b5370();
      local_35c = (undefined1 *)0x4ba83c;
      allocator<>();
      local_35c = (undefined1 *)0x0;
      local_360 = (undefined1 *)local_31c;
      local_364 = local_320;
      puStack_368 = local_7c;
      local_36c = 0x4ba86b;
      D3DXMatrixTranslation();
      local_36c = 0x4ba876;
      allocator<>();
      local_36c = 0x3f800000;
      fStack_370 = in_stack_00000040;
      puStack_374 = in_stack_0000003c;
      D3DXMatrixScaling(local_fc);
      allocator<>();
      D3DXMatrixRotationZ(local_13c,in_stack_00000044);
      allocator<>();
      allocator<>();
      D3DXMatrixTranslation(local_17c,local_314 ^ 0x80000000,local_310 ^ 0x80000000,0);
      D3DXMatrixTranslation(local_bc,local_314,local_310,0);
      puVar7 = local_7c;
      puVar6 = local_23c;
      puVar5 = local_bc;
      puVar4 = local_27c;
      puVar3 = local_fc;
      puVar2 = local_2bc;
      d3d9_matrix_multiply(local_2fc,local_13c);
      d3d9_matrix_multiply(puVar2,puVar3);
      d3d9_matrix_multiply(puVar4,puVar5);
      d3d9_matrix_multiply(puVar6,puVar7);
      (**(code **)(**(int **)(local_304 + 0xc) + 0x14))(*(undefined4 *)(local_304 + 0xc),local_23c);
      (**(code **)(**(int **)(local_304 + 0xc) + 0x24))
                (*(undefined4 *)(local_304 + 0xc),*local_300,&local_24,0,0,in_stack_00000038);
    }
    *(undefined1 *)(local_304 + 8) = 0;
    local_8 = 0xffffffff;
    local_35c = (undefined1 *)0x4bad23;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>
              ((function<void___cdecl(void)> *)&stack0x0000000c);
  }
  ExceptionList = local_10;
  return;
}


/* ==== 004e4ee0  d3d9_create_texture_004e4ee0  size=475 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void d3d9_create_texture_004e4ee0(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int **ppiVar6;
  int *local_7c [3];
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_54;
  int local_50;
  undefined4 *local_4c;
  int local_48;
  undefined *local_44;
  undefined4 local_40;
  int local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  char local_29;
  undefined1 local_28 [24];
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  if ((*(int *)(*(int *)ThreadLocalStoragePointer + 4) < DAT_007cab64) &&
     (FUN_006e4c3b(&DAT_007cab64), DAT_007cab64 == -1)) {
    FUN_00426e80();
    FUN_006e4fef(FUN_0072aa50);
    FUN_006e4bea(&DAT_007cab64);
  }
  local_29 = '\0';
  local_44 = &DAT_007cab44;
  local_30 = game_loop_helper_018d0();
  local_48 = game_loop_helper_018b0();
  while( true ) {
    if (local_30 == local_48) {
      if (local_29 == '\0') {
        CCmdUI::CCmdUI((CCmdUI *)local_7c);
        local_68 = param_3;
        local_70 = param_3;
        local_64 = param_4;
        local_6c = param_4;
        ppiVar6 = local_7c;
        uVar5 = 1;
        uVar4 = 0;
        uVar3 = 0;
        uVar2 = 1;
        iVar1 = FUN_004bcf00(param_3,param_4,1,0,0,1,ppiVar6);
        local_40 = D3DXCreateTexture(*(undefined4 *)(iVar1 + 4),param_3,param_4,uVar2,uVar3,uVar4,
                                     uVar5,ppiVar6);
        local_40 = (**(code **)(*local_7c[0] + 0x44))(local_7c[0],0,local_28);
        local_40 = (**(code **)(*local_7c[0] + 0x4c))(local_7c[0],0,&local_54,0,0);
        for (local_34 = 0; local_34 < local_c; local_34 = local_34 + 1) {
          for (local_38 = 0; local_38 < local_10; local_38 = local_38 + 1) {
            local_4c = (undefined4 *)(local_34 * local_54 + local_50 + local_38 * 4);
            *local_4c = 0xffff0000;
          }
        }
        local_40 = (**(code **)(*local_7c[0] + 0x50))(local_7c[0],0);
        FUN_00426e60(local_7c);
      }
      return;
    }
    local_3c = local_30;
    if ((*(int *)(local_30 + 0xc) == param_3) && (*(int *)(local_30 + 0x10) == param_4)) break;
    local_30 = local_30 + 0x28;
  }
  FUN_004e4e10(local_30,param_1,param_2,param_5);
  return;
}


/* ==== 005106c0  d3d9_texture_from_memory  size=317 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

CCmdUI * d3d9_texture_from_memory(CCmdUI *param_1,undefined4 param_2,char *param_3)

{
  size_t _Size;
  void *_Dst;
  int iVar1;
  int *local_30;
  FILE *local_2c;
  undefined1 local_28 [24];
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  CCmdUI::CCmdUI(param_1);
  local_2c = _fopen(param_3,"rb");
  if (local_2c != (FILE *)0x0) {
    FUN_006e9723(local_2c,0,2);
    _Size = FUN_006e92b5(local_2c);
    FUN_006e9723(local_2c,0,0);
    _Dst = (void *)FUN_006f191d(_Size);
    _memset(_Dst,0,_Size);
    _fread(_Dst,1,_Size,local_2c);
    FUN_006e940a(local_2c);
    local_30 = (int *)0x0;
    iVar1 = D3DXCreateTextureFromFileInMemory(param_2,_Dst,_Size,&local_30);
    if ((-1 < iVar1) && (local_30 != (int *)0x0)) {
      *(int **)param_1 = local_30;
      (**(code **)(*local_30 + 0x44))(local_30,0,local_28);
      *(undefined4 *)(param_1 + 0xc) = local_10;
      *(undefined4 *)(param_1 + 0x10) = local_c;
      *(undefined4 *)(param_1 + 0x14) = local_10;
      *(undefined4 *)(param_1 + 0x18) = local_c;
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
    }
  }
  return param_1;
}

/* ==== 0066d9b0  d3d9_create_texture_0066d9b0  size=14767 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void d3d9_create_texture_0066d9b0(void)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  int **ppiVar6;
  int *apiStack_da4 [6];
  int local_8cc;
  int local_8c8;
  int local_8c4;
  int local_8c0;
  int *local_8bc;
  undefined4 local_8b8;
  undefined4 local_8b4;
  undefined4 local_8b0;
  undefined4 local_8ac;
  undefined4 local_8a8;
  undefined4 local_8a4;
  int *local_894;
  undefined4 local_890;
  undefined4 local_88c;
  undefined4 local_888;
  undefined4 local_884;
  undefined4 local_880;
  undefined4 local_87c;
  int local_86c;
  undefined4 local_868;
  int local_864;
  undefined4 local_860;
  int local_85c;
  undefined4 local_858;
  int local_854;
  undefined4 local_850;
  int local_84c;
  undefined4 local_848;
  int local_844;
  undefined4 local_840;
  int local_83c;
  undefined4 local_838;
  int local_834;
  undefined4 local_830;
  int local_82c;
  undefined4 local_828;
  int local_824;
  undefined4 local_820;
  int local_81c;
  int local_818;
  undefined4 local_814;
  undefined4 local_810;
  undefined4 local_80c;
  int local_808;
  undefined4 local_804;
  int local_800;
  undefined4 local_7fc;
  int local_7f8;
  undefined4 local_7f4;
  int local_7f0;
  undefined4 local_7ec;
  int local_7e8;
  undefined4 local_7e4;
  int local_7e0;
  undefined4 local_7dc;
  int local_7d8;
  undefined4 local_7d4;
  undefined4 local_7d0;
  undefined4 local_7cc;
  undefined4 local_7c8;
  undefined4 local_7c4;
  undefined4 local_7c0;
  undefined4 local_7bc;
  undefined4 local_7b8;
  undefined4 local_7b4;
  undefined4 local_7b0;
  undefined4 local_7ac;
  undefined4 local_7a8;
  undefined4 local_7a4;
  undefined4 local_7a0;
  undefined4 local_79c;
  undefined4 local_798;
  undefined4 local_794;
  undefined4 local_790;
  undefined4 local_78c;
  undefined4 local_788;
  undefined4 local_784;
  undefined4 local_780;
  undefined4 local_77c;
  undefined4 local_778;
  undefined4 local_774;
  int local_770;
  undefined4 local_76c;
  int local_768;
  undefined4 local_764;
  int local_760;
  undefined4 local_75c;
  int local_758;
  undefined4 local_754;
  int local_750;
  undefined4 local_74c;
  int local_748;
  undefined4 local_744;
  int local_740;
  undefined4 local_73c;
  int local_738;
  undefined4 local_734;
  int local_730;
  undefined4 local_72c;
  int local_728;
  undefined4 local_724;
  int local_720;
  undefined4 local_71c;
  int local_718;
  undefined4 local_714;
  int local_710;
  undefined4 local_70c;
  int local_708;
  undefined4 local_704;
  int local_700;
  undefined4 local_6fc;
  int local_6f8;
  undefined4 local_6f4;
  int local_6f0;
  undefined4 local_6ec;
  int local_6e8;
  undefined4 local_6e4;
  int local_6e0;
  undefined4 local_6dc;
  int local_6d8;
  undefined4 local_6d4;
  int local_6d0;
  undefined4 local_6cc;
  int local_6c8;
  undefined4 local_6c4;
  int local_6c0;
  undefined4 local_6bc;
  int local_6b8;
  undefined4 local_6b4;
  int local_6b0;
  undefined4 local_6ac;
  int local_6a8;
  undefined4 local_6a4;
  int local_6a0;
  undefined4 local_69c;
  int local_698;
  undefined4 local_694;
  undefined4 local_690;
  undefined4 local_68c;
  undefined1 local_686;
  undefined1 local_685;
  undefined1 local_684;
  undefined1 local_683;
  undefined1 local_682;
  undefined1 local_681;
  uint local_680;
  uint local_67c;
  undefined4 *local_678;
  uint local_674;
  undefined4 *local_670;
  uint local_66c;
  uint local_668;
  int local_664;
  int local_660;
  char local_65a;
  char local_659;
  int local_658;
  undefined1 local_634;
  undefined4 local_630;
  undefined4 local_62c;
  undefined1 local_617;
  undefined1 local_5d4;
  undefined4 local_5d0;
  undefined4 local_5cc;
  undefined1 local_5b7;
  uint local_57c;
  uint local_578;
  uint local_55c;
  uint local_558;
  function<void___cdecl(void)> local_554 [24];
  function<void___cdecl(void)> local_53c [24];
  function<void___cdecl(void)> local_524 [24];
  function<void___cdecl(void)> local_50c [24];
  function<void___cdecl(void)> local_4f4 [24];
  function<void___cdecl(void)> local_4dc [24];
  function<void___cdecl(void)> local_4c4 [24];
  function<void___cdecl(void)> local_4ac [24];
  function<void___cdecl(void)> local_494 [24];
  function<void___cdecl(void)> local_47c [24];
  function<void___cdecl(void)> local_464 [24];
  function<void___cdecl(void)> local_44c [24];
  function<void___cdecl(void)> local_434 [24];
  function<void___cdecl(void)> local_41c [24];
  function<void___cdecl(void)> local_404 [24];
  function<void___cdecl(void)> local_3ec [24];
  function<void___cdecl(void)> local_3d4 [24];
  function<void___cdecl(void)> local_3bc [24];
  function<void___cdecl(void)> local_3a4 [24];
  function<void___cdecl(void)> local_38c [24];
  function<void___cdecl(void)> local_374 [24];
  function<void___cdecl(void)> local_35c [24];
  function<void___cdecl(void)> local_344 [24];
  function<void___cdecl(void)> local_32c [24];
  function<void___cdecl(void)> local_314 [24];
  function<void___cdecl(void)> local_2fc [24];
  function<void___cdecl(void)> local_2e4 [24];
  function<void___cdecl(void)> local_2cc [24];
  function<void___cdecl(void)> local_2b4 [24];
  function<void___cdecl(void)> local_29c [24];
  function<void___cdecl(void)> local_284 [24];
  function<void___cdecl(void)> local_26c [24];
  function<void___cdecl(void)> local_254 [24];
  function<void___cdecl(void)> local_23c [24];
  function<void___cdecl(void)> local_224 [24];
  function<void___cdecl(void)> local_20c [24];
  undefined1 local_1f4 [360];
  undefined1 local_8c [120];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00727fbc;
  local_10 = ExceptionList;
  local_14 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_7c8 = 0x78;
  game_timing_or_delay_helper();
  FUN_004054a0();
  local_8 = 0;
  FUN_004054a0();
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_004054a0(&DAT_00771368);
  local_8 = 0xffffffff;
  local_7cc = FUN_00661cc0(0,0);
  local_7d0 = 0x78;
  local_658 = local_7cc;
  game_timing_or_delay_helper();
  FUN_004054a0();
  local_8 = 2;
  FUN_004054a0();
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_004054a0(&DAT_007713cc);
  local_8 = 0xffffffff;
  local_710 = FUN_00661cc0(0,0);
  local_658 = local_710;
  FUN_004053a0();
  *(undefined4 *)(local_658 + 0xa40) = 3;
  *(undefined4 *)(local_658 + 0xa44) = 3;
  *(undefined4 *)(local_658 + 0xa48) = 0xffffffff;
  *(undefined4 *)(local_658 + 0xa64) = 0;
  local_7d4 = 0x78;
  game_timing_or_delay_helper();
  FUN_004054a0();
  local_8 = 4;
  FUN_004054a0();
  local_8 = CONCAT31(local_8._1_3_,5);
  FUN_004054a0(&DAT_00771410);
  local_8 = 0xffffffff;
  local_7d8 = FUN_00661cc0(0,0);
  local_658 = local_7d8;
  FUN_004053a0();
  *(undefined4 *)(local_658 + 0xa40) = 3;
  *(undefined4 *)(local_658 + 0xa44) = 3;
  *(undefined4 *)(local_658 + 0xa48) = 0xffffffff;
  *(undefined4 *)(local_658 + 0xa64) = 0;
  FUN_004054a0();
  local_8 = 6;
  FUN_0040d380();
  FUN_0040e2f0();
  local_659 = FUN_0040d970();
  local_8 = 0xffffffff;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_404);
  if (local_659 != '\0') {
    FUN_00426e80();
    local_8 = 7;
    CCmdUI::CCmdUI((CCmdUI *)&local_894);
    apiStack_da4[5] = (int *)0x1;
    apiStack_da4[4] = (int *)0x10e;
    apiStack_da4[3] = (int *)0x7c;
    apiStack_da4[2] = *(int **)(DAT_007ca1a4 + 4);
    apiStack_da4[1] = (int *)0x66dd26;
    local_68c = D3DXCreateTexture();
    local_68c = (**(code **)(*local_894 + 0x44))();
    apiStack_da4[5] = (int *)0x0;
    apiStack_da4[4] = &local_8cc;
    apiStack_da4[3] = (int *)0x0;
    apiStack_da4[2] = local_894;
    apiStack_da4[1] = (int *)0x66dd70;
    local_68c = (**(code **)(*local_894 + 0x4c))();
    for (local_668 = 0; local_668 < local_558; local_668 = local_668 + 1) {
      for (local_66c = 0; local_66c < local_55c; local_66c = local_66c + 1) {
        local_670 = (undefined4 *)(local_668 * local_8cc + local_8c8 + local_66c * 4);
        local_681 = (undefined1)*local_670;
        local_682 = (undefined1)((ushort)*(undefined2 *)local_670 >> 8);
        local_683 = (undefined1)((uint)*local_670 >> 0x10);
        *local_670 = 0xff000000;
      }
    }
    apiStack_da4[1] = (int *)0x0;
    apiStack_da4[0] = local_894;
    local_68c = (**(code **)(*local_894 + 0x50))();
    local_890 = 0;
    local_88c = 0;
    local_888 = 0x7c;
    local_884 = 0x10e;
    local_880 = 0x7c;
    local_87c = 0x10e;
    FUN_00426e60();
    FUN_004054a0();
    local_8._0_1_ = 8;
    FUN_004273d0();
    FUN_00426de0();
    local_8 = CONCAT31(local_8._1_3_,7);
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_41c);
    local_8 = 0xffffffff;
    FUN_00411b80();
  }
  local_7dc = 0x78;
  game_timing_or_delay_helper();
  FUN_004054a0();
  local_8 = 9;
  FUN_004054a0();
  local_8 = CONCAT31(local_8._1_3_,10);
  FUN_004054a0(&DAT_0077142c);
  local_8 = 0xffffffff;
  local_7e0 = FUN_00661cc0(0,0);
  *(undefined1 *)(local_7e0 + 0x51) = 0;
  local_658 = local_7e0;
  FUN_004054a0();
  local_8 = 0xb;
  FUN_004054a0();
  local_8._0_1_ = 0xc;
  FUN_004054a0();
  local_8._0_1_ = 0xd;
  FUN_004054a0();
  local_8._0_1_ = 0xe;
  FUN_004054a0();
  local_8._0_1_ = 0xf;
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
  local_8 = CONCAT31(local_8._1_3_,0x18);
  FUN_004054a0();
  local_8 = 0x19;
  for (local_660 = 0; local_660 < 0xf; local_660 = local_660 + 1) {
    local_7e4 = 0x78;
    game_timing_or_delay_helper();
    FUN_004054a0();
    local_8._0_1_ = 0x1a;
    FUN_00405520();
    local_8._0_1_ = 0x1b;
    FUN_004054a0(&DAT_007714f0);
    local_8._0_1_ = 0x19;
    local_7e8 = FUN_00661cc0(0,0);
    *(undefined1 *)(local_7e8 + 0x51) = 0;
    local_658 = local_7e8;
    FUN_0040d680();
    FUN_00414fc0();
    FUN_0040aa90();
    local_8._0_1_ = 0x1c;
    FUN_004053a0();
    local_5d4 = 0x10;
    local_5d0 = 0;
    local_5cc = 0;
    local_5b7 = 3;
    FUN_00427660();
    *(undefined1 *)(local_658 + 0x6e0) = 1;
    FUN_0040d840();
    *(undefined4 *)(local_658 + 0xa40) = 3;
    *(undefined4 *)(local_658 + 0xa44) = 3;
    *(undefined4 *)(local_658 + 0xa48) = 0xffffffff;
    *(undefined4 *)(local_658 + 0xa64) = 0;
    FUN_004053a0();
    *(undefined4 *)(local_658 + 0x984) = 0x35f2;
    local_8 = CONCAT31(local_8._1_3_,0x19);
    FUN_00407a80();
  }
  local_7ec = 0x78;
  game_timing_or_delay_helper();
  FUN_004054a0();
  local_8._0_1_ = 0x1d;
  FUN_004054a0();
  local_8._0_1_ = 0x1e;
  FUN_004054a0(&DAT_007715ec);
  local_8._0_1_ = 0x19;
  local_7f0 = FUN_00661cc0(0,2);
  local_658 = local_7f0;
  FUN_004053a0();
  *(undefined4 *)(local_658 + 0x984) = 0x35e8;
  FUN_004054a0();
  local_8._0_1_ = 0x1f;
  FUN_0040d380();
  FUN_0040e2f0();
  local_65a = FUN_0040d970();
  local_8._0_1_ = 0x19;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_434);
  if (local_65a != '\0') {
    FUN_00426e80();
    local_8._0_1_ = 0x20;
    CCmdUI::CCmdUI((CCmdUI *)&local_8bc);
    apiStack_da4[5] = (int *)0x1;
    apiStack_da4[4] = (int *)0x5a;
    apiStack_da4[3] = (int *)0x7c;
    apiStack_da4[2] = *(int **)(DAT_007ca1a4 + 4);
    apiStack_da4[1] = (int *)0x66e455;
    local_690 = D3DXCreateTexture();
    local_690 = (**(code **)(*local_8bc + 0x44))();
    apiStack_da4[5] = (int *)0x0;
    apiStack_da4[4] = &local_8c4;
    apiStack_da4[3] = (int *)0x0;
    apiStack_da4[2] = local_8bc;
    apiStack_da4[1] = (int *)0x66e49f;
    local_690 = (**(code **)(*local_8bc + 0x4c))();
    for (local_680 = 0; local_680 < local_578; local_680 = local_680 + 1) {
      for (local_674 = 0; local_674 < local_57c; local_674 = local_674 + 1) {
        local_678 = (undefined4 *)(local_680 * local_8c4 + local_8c0 + local_674 * 4);
        local_684 = (undefined1)*local_678;
        local_685 = (undefined1)((ushort)*(undefined2 *)local_678 >> 8);
        local_686 = (undefined1)((uint)*local_678 >> 0x10);
        *local_678 = 0xff000000;
      }
    }
    apiStack_da4[1] = (int *)0x0;
    apiStack_da4[0] = local_8bc;
    local_690 = (**(code **)(*local_8bc + 0x50))();
    local_8b8 = 0;
    local_8b4 = 0;
    local_8b0 = 0x7c;
    local_8ac = 0x5a;
    local_8a8 = 0x7c;
    local_8a4 = 0x5a;
    FUN_00426e60();
    FUN_004054a0();
    local_8._0_1_ = 0x21;
    FUN_004273d0();
    FUN_00426de0();
    local_8._0_1_ = 0x20;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_44c);
    local_8._0_1_ = 0x19;
    FUN_00411b80();
  }
  local_7f4 = 0x78;
  game_timing_or_delay_helper();
  FUN_004054a0();
  local_8._0_1_ = 0x22;
  FUN_004054a0();
  local_8._0_1_ = 0x23;
  FUN_004054a0(&DAT_00771614);
  local_8._0_1_ = 0x19;
  local_7f8 = FUN_00661cc0(0,0);
  *(undefined1 *)(local_7f8 + 0x51) = 0;
  local_658 = local_7f8;
  FUN_004054a0();
  local_8._0_1_ = 0x24;
  FUN_004054a0();
  local_8._0_1_ = 0x25;
  FUN_004054a0();
  local_8._0_1_ = 0x26;
  FUN_004054a0();
  local_8._0_1_ = 0x27;
  FUN_004054a0();
  local_8._0_1_ = 0x28;
  for (local_664 = 0; local_664 < 5; local_664 = local_664 + 1) {
    local_7fc = 0x78;
    game_timing_or_delay_helper();
    FUN_004054a0();
    local_8._0_1_ = 0x29;
    FUN_00405520();
    local_8._0_1_ = 0x2a;
    FUN_004054a0(&DAT_007716c4);
    local_8._0_1_ = 0x28;
    local_800 = FUN_00661cc0(0,0);
    *(undefined1 *)(local_800 + 0x51) = 0;
    local_658 = local_800;
    FUN_0040d680();
    FUN_00414fc0();
    FUN_0040aa90();
    local_8._0_1_ = 0x2b;
    FUN_004053a0();
    local_634 = 0x10;
    local_630 = 0;
    local_62c = 0;
    local_617 = 3;
    FUN_00427660();
    *(undefined1 *)(local_658 + 0x6e0) = 1;
    FUN_0040d840();
    *(undefined4 *)(local_658 + 0xa40) = 3;
    *(undefined4 *)(local_658 + 0xa44) = 3;
    *(undefined4 *)(local_658 + 0xa48) = 0xffffffff;
    *(undefined4 *)(local_658 + 0xa64) = 0;
    FUN_004053a0();
    *(undefined4 *)(local_658 + 0x984) = 0x3624;
    local_8._0_1_ = 0x28;
    FUN_00407a80();
  }
  local_804 = 0x78;
  game_timing_or_delay_helper();
  FUN_004054a0();
  local_8._0_1_ = 0x2c;
  FUN_004054a0();
  local_8._0_1_ = 0x2d;
  FUN_004054a0(&DAT_00771710);
  local_8._0_1_ = 0x28;
  local_808 = FUN_00661cc0(0,2);
  local_658 = local_808;
  FUN_004053a0();
  *(undefined4 *)(local_658 + 0x984) = 0x361a;
  local_80c = 0x78;
  game_timing_or_delay_helper();
  FUN_004054a0();
  local_8._0_1_ = 0x2e;
  FUN_004054a0();
  local_8._0_1_ = 0x2f;
  FUN_004054a0(&DAT_00771784);
  local_8._0_1_ = 0x28;
  local_810 = FUN_00661cc0(0,0);
  local_814 = 0x78;
  local_658 = local_810;
  game_timing_or_delay_helper();
  FUN_004054a0();
  local_8._0_1_ = 0x30;
  FUN_004054a0();
  local_8._0_1_ = 0x31;
  FUN_004054a0(&DAT_00771808);
  local_8._0_1_ = 0x28;
  local_818 = FUN_00661cc0(0,0);
  *(undefined4 *)(local_818 + 0x9a0) = 0xf;
  local_820 = 0x78;
  local_658 = local_818;
  game_timing_or_delay_helper();
  FUN_004054a0();
  local_8._0_1_ = 0x32;
  FUN_004054a0();
  local_8._0_1_ = 0x33;
  FUN_004054a0(&DAT_0077186c);
  local_8._0_1_ = 0x28;
  local_824 = FUN_00661cc0(0,0);
  local_658 = local_824;
  FUN_004054a0();
  local_8._0_1_ = 0x34;
  FUN_0044e400();
  local_8._0_1_ = 0x28;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_464);
  FUN_004054a0();
  local_8._0_1_ = 0x35;
  FUN_0044e400();
  local_8._0_1_ = 0x28;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_47c);
  *(undefined4 *)(local_658 + 0x9a0) = 3;
  local_828 = 0x78;
  game_timing_or_delay_helper();
  FUN_004054a0();
  local_8._0_1_ = 0x36;
  FUN_004054a0();
  local_8._0_1_ = 0x37;
  FUN_004054a0(&DAT_0077188c);
  local_8._0_1_ = 0x28;
  local_82c = FUN_00661cc0(0,0);
  local_658 = local_82c;
  FUN_004054a0();
  local_8._0_1_ = 0x38;
  FUN_0044e400();
  local_8._0_1_ = 0x28;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_494);
  FUN_004054a0();
  local_8._0_1_ = 0x39;
  FUN_0044e400();
  local_8._0_1_ = 0x28;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_4ac);
  *(undefined4 *)(local_658 + 0x9a0) = 1;
  local_830 = 0x78;
  game_timing_or_delay_helper();
  FUN_004054a0();
  local_8._0_1_ = 0x3a;
  FUN_004054a0();
  local_8._0_1_ = 0x3b;
  FUN_004054a0(&DAT_007718a8);
  local_8._0_1_ = 0x28;
  local_834 = FUN_00661cc0(0,0);
  local_658 = local_834;
  FUN_004054a0();
  local_8._0_1_ = 0x3c;
  FUN_0044e400();
  local_8._0_1_ = 0x28;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_2b4);
  *(undefined4 *)(local_658 + 0x9a0) = 10;
  local_838 = 0x78;
  game_timing_or_delay_helper();
  FUN_004054a0();
  local_8._0_1_ = 0x3d;
  FUN_004054a0();
  local_8._0_1_ = 0x3e;
  FUN_004054a0(&DAT_007718f4);
  local_8._0_1_ = 0x28;
  local_83c = FUN_00661cc0(0,0);
  local_658 = local_83c;
  FUN_004054a0();
  local_8._0_1_ = 0x3f;
  FUN_0044e400();
  local_8._0_1_ = 0x28;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_4dc);
  *(undefined4 *)(local_658 + 0x9a0) = 4;
  local_840 = 0x78;
  game_timing_or_delay_helper();
  FUN_004054a0();
  local_8._0_1_ = 0x40;
  FUN_004054a0();
  local_8._0_1_ = 0x41;
  FUN_004054a0(&DAT_00771940);
  local_8._0_1_ = 0x28;
  local_844 = FUN_00661cc0(0,0);
  local_658 = local_844;
  FUN_004054a0();
  local_8._0_1_ = 0x42;
  FUN_0044e400();
  local_8._0_1_ = 0x28;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_4f4);
  FUN_004054a0();
  local_8._0_1_ = 0x43;
  FUN_0044e400();
  local_8._0_1_ = 0x28;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_50c);
  *(undefined4 *)(local_658 + 0x9a0) = 0xb;
  local_848 = 0x78;
  game_timing_or_delay_helper();
  FUN_004054a0();
  local_8._0_1_ = 0x44;
  FUN_004054a0();
  local_8._0_1_ = 0x45;
  FUN_004054a0(&DAT_00771980);
  local_8._0_1_ = 0x28;
  local_84c = FUN_00661cc0(0,0);
  local_658 = local_84c;
  iVar1 = game_get_player_or_session_blob();
  if (*(int *)(iVar1 + 0xab8) == 3) {
    FUN_004054a0();
    local_8._0_1_ = 0x46;
    FUN_0044e400();
    local_8._0_1_ = 0x28;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_524);
  }
  *(undefined4 *)(local_658 + 0x9a0) = 0xc;
  local_850 = 0x78;
  game_timing_or_delay_helper();
  FUN_004054a0();
  local_8._0_1_ = 0x47;
  FUN_004054a0();
  local_8._0_1_ = 0x48;
  FUN_004054a0(&DAT_007719c8);
  local_8._0_1_ = 0x28;
  local_854 = FUN_00661cc0(0,0);
  local_658 = local_854;
  FUN_004054a0();
  local_8._0_1_ = 0x49;
  FUN_0044e400();
  local_8._0_1_ = 0x28;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_53c);
  *(undefined4 *)(local_658 + 0x9a0) = 0xd;
  local_858 = 0x78;
  game_timing_or_delay_helper();
  FUN_004054a0();
  local_8._0_1_ = 0x4a;
  FUN_004054a0();
  local_8._0_1_ = 0x4b;
  FUN_004054a0(&DAT_00771a14);
  local_8._0_1_ = 0x28;
  local_85c = FUN_00661cc0(0,0);
  local_658 = local_85c;
  FUN_004054a0();
  local_8._0_1_ = 0x4c;
  FUN_0044e400();
  local_8._0_1_ = 0x28;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_554);
  *(undefined4 *)(local_658 + 0x9a0) = 2;
  local_860 = 0x78;
  game_timing_or_delay_helper();
  FUN_004054a0();
  local_8._0_1_ = 0x4d;
  FUN_004054a0();
  local_8._0_1_ = 0x4e;
  FUN_004054a0(&DAT_00771a68);
  local_8._0_1_ = 0x28;
  local_864 = FUN_00661cc0(0,0);
  local_658 = local_864;
  FUN_004054a0();
  local_8._0_1_ = 0x4f;
  FUN_0044e400();
  local_8._0_1_ = 0x28;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_20c);
  *(undefined4 *)(local_658 + 0x9a0) = 9;
  local_868 = 0x78;
  game_timing_or_delay_helper();
  FUN_004054a0();
  local_8._0_1_ = 0x50;
  FUN_004054a0();
  local_8._0_1_ = 0x51;
  FUN_004054a0(&DAT_00771abc);
  local_8._0_1_ = 0x28;
  local_86c = FUN_00661cc0(0,0);
  local_658 = local_86c;
  FUN_004054a0();
  local_8._0_1_ = 0x52;
  FUN_0044e400();
  local_8._0_1_ = 0x28;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_224);
  iVar1 = game_get_player_or_session_blob();
  if (*(int *)(iVar1 + 0xab8) == 0) {
    FUN_004054a0();
    local_8._0_1_ = 0x53;
    FUN_0044e400();
    local_8._0_1_ = 0x28;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_23c);
  }
  *(undefined4 *)(local_658 + 0x9a0) = 7;
  local_694 = 0x78;
  game_timing_or_delay_helper();
  FUN_004054a0();
  local_8._0_1_ = 0x54;
  FUN_004054a0();
  local_8._0_1_ = 0x55;
  FUN_004054a0(&DAT_00771b9c);
  local_8._0_1_ = 0x28;
  local_698 = FUN_00661cc0(0,0);
  local_658 = local_698;
  FUN_004054a0();
  local_8._0_1_ = 0x56;
  FUN_0044e400();
  local_8._0_1_ = 0x28;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_254);
  *(undefined4 *)(local_658 + 0x9a0) = 8;
  local_69c = 0x78;
  game_timing_or_delay_helper();
  FUN_004054a0();
  local_8._0_1_ = 0x57;
  FUN_004054a0();
  local_8._0_1_ = 0x58;
  FUN_004054a0(&DAT_00771bf0);
  local_8._0_1_ = 0x28;
  local_6a0 = FUN_00661cc0(0,0);
  local_658 = local_6a0;
  FUN_004054a0();
  local_8._0_1_ = 0x59;
  FUN_0044e400();
  local_8._0_1_ = 0x28;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_3ec);
  FUN_004054a0();
  local_8._0_1_ = 0x5a;
  FUN_0044e400();
  local_8._0_1_ = 0x28;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_26c);
  *(undefined4 *)(local_658 + 0x9a0) = 5;
  local_6a4 = 0x78;
  game_timing_or_delay_helper();
  FUN_004054a0();
  local_8._0_1_ = 0x5b;
  FUN_004054a0();
  local_8._0_1_ = 0x5c;
  FUN_004054a0(&DAT_00771c34);
  local_8._0_1_ = 0x28;
  local_6a8 = FUN_00661cc0(0,0);
  local_658 = local_6a8;
  iVar1 = game_get_player_or_session_blob();
  if (*(int *)(iVar1 + 0xab8) == 1) {
    FUN_004054a0();
    local_8._0_1_ = 0x5d;
    FUN_0044e400();
    local_8._0_1_ = 0x28;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_284);
  }
  *(undefined4 *)(local_658 + 0x9a0) = 6;
  local_6ac = 0x78;
  game_timing_or_delay_helper();
  FUN_004054a0();
  local_8._0_1_ = 0x5e;
  FUN_004054a0();
  local_8._0_1_ = 0x5f;
  FUN_004054a0(&DAT_00771c5c);
  local_8._0_1_ = 0x28;
  local_6b0 = FUN_00661cc0(0,0);
  local_658 = local_6b0;
  FUN_004054a0();
  local_8._0_1_ = 0x60;
  FUN_0044e400();
  local_8._0_1_ = 0x28;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_29c);
  iVar1 = game_get_player_or_session_blob();
  if (*(int *)(iVar1 + 0xab8) == 2) {
    FUN_004054a0();
    local_8._0_1_ = 0x61;
    FUN_0044e400();
    local_8._0_1_ = 0x28;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_2cc);
  }
  *(undefined4 *)(local_658 + 0x9a0) = 0x11;
  local_6b4 = 0x78;
  game_timing_or_delay_helper();
  FUN_004054a0();
  local_8._0_1_ = 0x62;
  FUN_004054a0();
  local_8._0_1_ = 99;
  FUN_004054a0(&DAT_00771c78);
  local_8._0_1_ = 0x28;
  local_6b8 = FUN_00661cc0(0,0);
  local_658 = local_6b8;
  FUN_004054a0();
  local_8._0_1_ = 100;
  FUN_0044e400();
  local_8._0_1_ = 0x28;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_2e4);
  *(undefined4 *)(local_658 + 0x9a0) = 0x12;
  local_6bc = 0x78;
  game_timing_or_delay_helper();
  FUN_004054a0();
  local_8._0_1_ = 0x65;
  FUN_004054a0();
  local_8._0_1_ = 0x66;
  FUN_004054a0(&DAT_00771cf0);
  local_8._0_1_ = 0x28;
  local_6c0 = FUN_00661cc0(0,0);
  *(undefined4 *)(local_6c0 + 0x9a0) = 0x13;
  local_6c4 = 0x78;
  local_658 = local_6c0;
  game_timing_or_delay_helper();
  FUN_004054a0();
  local_8._0_1_ = 0x67;
  FUN_004054a0();
  local_8._0_1_ = 0x68;
  FUN_004054a0(&DAT_00771d78);
  local_8._0_1_ = 0x28;
  local_6c8 = FUN_00661cc0(0,0);
  *(undefined4 *)(local_6c8 + 0x9a0) = 0x19;
  local_6cc = 0x78;
  local_658 = local_6c8;
  game_timing_or_delay_helper();
  FUN_004054a0();
  local_8._0_1_ = 0x69;
  FUN_004054a0();
  local_8._0_1_ = 0x6a;
  FUN_004054a0(&DAT_00771dd0);
  local_8._0_1_ = 0x28;
  local_6d0 = FUN_00661cc0(0,0);
  *(undefined4 *)(local_6d0 + 0x9a0) = 0x18;
  local_6d4 = 0x78;
  local_658 = local_6d0;
  game_timing_or_delay_helper();
  FUN_004054a0();
  local_8._0_1_ = 0x6b;
  FUN_004054a0();
  local_8._0_1_ = 0x6c;
  FUN_004054a0(&DAT_00771d8c);
  local_8._0_1_ = 0x28;
  local_6d8 = FUN_00661cc0(0,0);
  local_658 = local_6d8;
  FUN_004054a0();
  local_8._0_1_ = 0x6d;
  FUN_0044e400();
  local_8._0_1_ = 0x28;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_2fc);
  *(undefined4 *)(local_658 + 0x9a0) = 0x1b;
  local_6dc = 0x78;
  game_timing_or_delay_helper();
  FUN_004054a0();
  local_8._0_1_ = 0x6e;
  FUN_004054a0();
  local_8._0_1_ = 0x6f;
  FUN_004054a0(&DAT_00771dd8);
  local_8._0_1_ = 0x28;
  local_6e0 = FUN_00661cc0(0,0);
  *(undefined4 *)(local_6e0 + 0x9a0) = 0x17;
  local_6e4 = 0x78;
  local_658 = local_6e0;
  game_timing_or_delay_helper();
  FUN_004054a0();
  local_8._0_1_ = 0x70;
  FUN_004054a0();
  local_8._0_1_ = 0x71;
  FUN_004054a0(&DAT_00771e58);
  local_8._0_1_ = 0x28;
  local_6e8 = FUN_00661cc0(0,0);
  *(undefined4 *)(local_6e8 + 0x9a0) = 0x1a;
  local_6ec = 0x78;
  local_658 = local_6e8;
  game_timing_or_delay_helper();
  FUN_004054a0();
  local_8._0_1_ = 0x72;
  FUN_004054a0();
  local_8._0_1_ = 0x73;
  FUN_004054a0(&DAT_00771ed4);
  local_8._0_1_ = 0x28;
  local_6f0 = FUN_00661cc0(0,0);
  *(undefined4 *)(local_6f0 + 0x9a0) = 0x1e;
  local_6f4 = 0x78;
  local_658 = local_6f0;
  game_timing_or_delay_helper();
  FUN_004054a0();
  local_8._0_1_ = 0x74;
  FUN_004054a0();
  local_8._0_1_ = 0x75;
  FUN_004054a0(&DAT_00771f28);
  local_8._0_1_ = 0x28;
  local_6f8 = FUN_00661cc0(0,0);
  *(undefined4 *)(local_6f8 + 0x9a0) = 0x1d;
  local_6fc = 0x78;
  local_658 = local_6f8;
  game_timing_or_delay_helper();
  FUN_004054a0();
  local_8._0_1_ = 0x76;
  FUN_004054a0();
  local_8._0_1_ = 0x77;
  FUN_004054a0(&DAT_00771ee4);
  local_8._0_1_ = 0x28;
  local_700 = FUN_00661cc0(0,0);
  local_658 = local_700;
  FUN_004054a0();
  local_8._0_1_ = 0x78;
  FUN_0044e400();
  local_8._0_1_ = 0x28;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_314);
  *(undefined4 *)(local_658 + 0x9a0) = 0x24;
  local_704 = 0x78;
  game_timing_or_delay_helper();
  FUN_004054a0();
  local_8._0_1_ = 0x79;
  FUN_004054a0();
  local_8._0_1_ = 0x7a;
  FUN_004054a0(&DAT_00771f30);
  local_8._0_1_ = 0x28;
  local_708 = FUN_00661cc0(0,0);
  *(undefined4 *)(local_708 + 0x9a0) = 0x28;
  local_70c = 0x78;
  local_658 = local_708;
  game_timing_or_delay_helper();
  FUN_004054a0();
  local_8._0_1_ = 0x7b;
  FUN_004054a0();
  local_8._0_1_ = 0x7c;
  FUN_004054a0(&DAT_00771fb8);
  local_8._0_1_ = 0x28;
  local_81c = FUN_00661cc0(0,0);
  *(undefined4 *)(local_81c + 0x9a0) = 0x27;
  local_714 = 0x78;
  local_658 = local_81c;
  game_timing_or_delay_helper();
  FUN_004054a0();
  local_8._0_1_ = 0x7d;
  FUN_004054a0();
  local_8._0_1_ = 0x7e;
  FUN_004054a0(&DAT_00772044);
  local_8._0_1_ = 0x28;
  local_718 = FUN_00661cc0(0,0);
  *(undefined4 *)(local_718 + 0x9a0) = 0x2a;
  local_71c = 0x78;
  local_658 = local_718;
  game_timing_or_delay_helper();
  FUN_004054a0();
  local_8._0_1_ = 0x7f;
  FUN_004054a0();
  local_8._0_1_ = 0x80;
  FUN_004054a0(&DAT_007720a4);
  local_8._0_1_ = 0x28;
  local_720 = FUN_00661cc0(0,0);
  *(undefined4 *)(local_720 + 0x9a0) = 0x29;
  local_724 = 0x78;
  local_658 = local_720;
  game_timing_or_delay_helper();
  FUN_004054a0();
  local_8._0_1_ = 0x81;
  FUN_004054a0();
  local_8._0_1_ = 0x82;
  FUN_004054a0(&DAT_0077205c);
  local_8._0_1_ = 0x28;
  local_728 = FUN_00661cc0(0,0);
  local_658 = local_728;
  FUN_004054a0();
  local_8._0_1_ = 0x83;
  FUN_0044e400();
  local_8._0_1_ = 0x28;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_32c);
  *(undefined4 *)(local_658 + 0x9a0) = 0x14;
  local_72c = 0x78;
  game_timing_or_delay_helper();
  FUN_004054a0();
  local_8._0_1_ = 0x84;
  FUN_004054a0();
  local_8._0_1_ = 0x85;
  FUN_004054a0(&DAT_007720ac);
  local_8._0_1_ = 0x28;
  local_730 = FUN_00661cc0(0,0);
  local_658 = local_730;
  FUN_004054a0();
  local_8._0_1_ = 0x86;
  FUN_0044e400();
  local_8._0_1_ = 0x28;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_344);
  *(undefined4 *)(local_658 + 0x9a0) = 0x15;
  local_734 = 0x78;
  game_timing_or_delay_helper();
  FUN_004054a0();
  local_8._0_1_ = 0x87;
  FUN_004054a0();
  local_8._0_1_ = 0x88;
  FUN_004054a0(&DAT_00772100);
  local_8._0_1_ = 0x28;
  local_738 = FUN_00661cc0(0,0);
  local_658 = local_738;
  FUN_004054a0();
  local_8._0_1_ = 0x89;
  FUN_0044e400();
  local_8._0_1_ = 0x28;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_35c);
  *(undefined4 *)(local_658 + 0x9a0) = 0x26;
  local_73c = 0x78;
  game_timing_or_delay_helper();
  FUN_004054a0();
  local_8._0_1_ = 0x8a;
  FUN_004054a0();
  local_8._0_1_ = 0x8b;
  FUN_004054a0(&DAT_00772154);
  local_8._0_1_ = 0x28;
  local_740 = FUN_00661cc0(0,0);
  local_658 = local_740;
  FUN_004054a0();
  local_8._0_1_ = 0x8c;
  FUN_0044e400();
  local_8._0_1_ = 0x28;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_374);
  *(undefined4 *)(local_658 + 0x9a0) = 0x2c;
  local_744 = 0x78;
  game_timing_or_delay_helper();
  FUN_004054a0();
  local_8._0_1_ = 0x8d;
  FUN_004054a0();
  local_8._0_1_ = 0x8e;
  FUN_004054a0(&DAT_007721a4);
  local_8._0_1_ = 0x28;
  local_748 = FUN_00661cc0(0,0);
  local_658 = local_748;
  iVar1 = game_get_player_or_session_blob();
  if (*(int *)(iVar1 + 0xab8) == 4) {
    FUN_004054a0();
    local_8._0_1_ = 0x8f;
    FUN_0044e400();
    local_8._0_1_ = 0x28;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_38c);
  }
  *(undefined4 *)(local_658 + 0x9a0) = 0x2d;
  local_74c = 0x78;
  game_timing_or_delay_helper();
  FUN_004054a0();
  local_8._0_1_ = 0x90;
  FUN_004054a0();
  local_8._0_1_ = 0x91;
  FUN_004054a0(&DAT_007721f4);
  local_8._0_1_ = 0x28;
  local_750 = FUN_00661cc0(0,0);
  local_658 = local_750;
  FUN_004054a0();
  local_8._0_1_ = 0x92;
  FUN_0044e400();
  local_8._0_1_ = 0x28;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_4c4);
  *(undefined4 *)(local_658 + 0x9a0) = 2;
  local_754 = 0x78;
  game_timing_or_delay_helper();
  FUN_004054a0();
  local_8._0_1_ = 0x93;
  FUN_004054a0();
  local_8._0_1_ = 0x94;
  FUN_004054a0(&DAT_00772248);
  local_8._0_1_ = 0x28;
  local_758 = FUN_00661cc0(0,0);
  local_658 = local_758;
  FUN_004054a0();
  local_8._0_1_ = 0x95;
  FUN_0044e400();
  local_8._0_1_ = 0x28;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_3a4);
  *(undefined4 *)(local_658 + 0x9a0) = 2;
  local_75c = 0x78;
  game_timing_or_delay_helper();
  FUN_004054a0();
  local_8._0_1_ = 0x96;
  FUN_004054a0();
  local_8._0_1_ = 0x97;
  FUN_004054a0(&DAT_0077229c);
  local_8._0_1_ = 0x28;
  local_760 = FUN_00661cc0(0,0);
  local_658 = local_760;
  FUN_004054a0();
  local_8._0_1_ = 0x98;
  FUN_0044e400();
  local_8._0_1_ = 0x28;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_3bc);
  *(undefined4 *)(local_658 + 0x9a0) = 2;
  local_764 = 0x78;
  game_timing_or_delay_helper();
  FUN_004054a0();
  local_8._0_1_ = 0x99;
  FUN_004054a0();
  local_8._0_1_ = 0x9a;
  FUN_004054a0(&DAT_007722f0);
  local_8._0_1_ = 0x28;
  local_768 = FUN_00661cc0(0,0);
  local_658 = local_768;
  FUN_004054a0();
  local_8._0_1_ = 0x9b;
  FUN_0044e400();
  local_8._0_1_ = 0x28;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_3d4);
  *(undefined4 *)(local_658 + 0x9a0) = 2;
  local_76c = 0x78;
  game_timing_or_delay_helper();
  FUN_004054a0();
  local_8._0_1_ = 0x9c;
  FUN_004054a0();
  local_8._0_1_ = 0x9d;
  FUN_004054a0(&DAT_00772344);
  local_8._0_1_ = 0x28;
  local_770 = FUN_00661cc0(0,0);
  *(undefined4 *)(local_770 + 0x984) = 0x550;
  local_774 = 0x78;
  local_658 = local_770;
  game_timing_or_delay_helper();
  FUN_004054a0();
  local_8._0_1_ = 0x9e;
  FUN_004054a0();
  local_8._0_1_ = 0x9f;
  FUN_004054a0(&DAT_007723c0);
  local_8._0_1_ = 0x28;
  local_778 = FUN_00661cc0(0,0);
  local_77c = 0x78;
  local_658 = local_778;
  game_timing_or_delay_helper();
  FUN_004054a0();
  local_8._0_1_ = 0xa0;
  FUN_004054a0();
  local_8._0_1_ = 0xa1;
  FUN_004054a0(&DAT_00772444);
  local_8._0_1_ = 0x28;
  local_780 = FUN_00661cc0(0,0);
  local_784 = 0x78;
  local_658 = local_780;
  game_timing_or_delay_helper();
  FUN_004054a0();
  local_8._0_1_ = 0xa2;
  FUN_004054a0();
  local_8._0_1_ = 0xa3;
  FUN_004054a0(&DAT_007724ac);
  local_8._0_1_ = 0x28;
  local_788 = FUN_00661cc0(0,0);
  local_78c = 0x78;
  local_658 = local_788;
  game_timing_or_delay_helper();
  FUN_004054a0();
  local_8._0_1_ = 0xa4;
  FUN_004054a0();
  local_8._0_1_ = 0xa5;
  FUN_004054a0(&DAT_00772464);
  local_8._0_1_ = 0x28;
  local_790 = FUN_00661cc0(0,0);
  local_794 = 0x78;
  local_658 = local_790;
  game_timing_or_delay_helper();
  FUN_004054a0();
  local_8._0_1_ = 0xa6;
  FUN_004054a0();
  local_8._0_1_ = 0xa7;
  FUN_004054a0(&DAT_007724e0);
  local_8._0_1_ = 0x28;
  local_798 = FUN_00661cc0(0,0);
  local_79c = 0x78;
  local_658 = local_798;
  game_timing_or_delay_helper();
  FUN_004054a0();
  local_8._0_1_ = 0xa8;
  FUN_004054a0();
  local_8._0_1_ = 0xa9;
  FUN_004054a0(&DAT_00772568);
  local_8._0_1_ = 0x28;
  local_7a0 = FUN_00661cc0(0,0);
  local_7a4 = 0x78;
  local_658 = local_7a0;
  game_timing_or_delay_helper();
  FUN_004054a0();
  local_8._0_1_ = 0xaa;
  FUN_004054a0();
  local_8._0_1_ = 0xab;
  FUN_004054a0(&DAT_007725c8);
  local_8._0_1_ = 0x28;
  local_7a8 = FUN_00661cc0(0,0);
  local_7ac = 0x78;
  local_658 = local_7a8;
  game_timing_or_delay_helper();
  FUN_004054a0();
  local_8._0_1_ = 0xac;
  FUN_004054a0();
  local_8._0_1_ = 0xad;
  FUN_004054a0(&DAT_00772584);
  local_8 = CONCAT31(local_8._1_3_,0x28);
  local_7b0 = FUN_00661cc0(0,0);
  local_658 = local_7b0;
  game_get_player_or_session_blob();
  FUN_00479db0();
  local_67c = 0;
  while( true ) {
    local_7b4 = 0x78;
    game_timing_or_delay_helper();
    uVar2 = FUN_00401a90();
    if (uVar2 <= local_67c) break;
    local_7b8 = 0x78;
    game_timing_or_delay_helper();
    piVar3 = (int *)game_get_flag_object_01a70();
    *(undefined1 *)(*piVar3 + 0x51) = 0;
    local_67c = local_67c + 1;
  }
  local_7bc = 0x78;
  puVar4 = (undefined1 *)FUN_005187c0();
  *puVar4 = 0;
  local_7c0 = 0x78;
  local_7c4 = 0x78;
  game_timing_or_delay_helper();
  FUN_00402170();
  apiStack_da4[5] = (int *)0x6712d6;
  game_timing_or_delay_helper();
  FUN_004021b0();
  FUN_00405d30();
  puVar5 = &DAT_007ca70c;
  ppiVar6 = apiStack_da4;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *ppiVar6 = (int *)*puVar5;
    puVar5 = puVar5 + 1;
    ppiVar6 = ppiVar6 + 1;
  }
  FUN_0065e180();
  local_8 = CONCAT31(local_8._1_3_,0x19);
  apiStack_da4[5] = (int *)0x671327;
  _eh_vector_destructor_iterator_
            (local_8c,0x18,5,std::function<void___cdecl(void)>::~function<void___cdecl(void)>);
  local_8 = 0xffffffff;
  apiStack_da4[5] = (int *)0x671343;
  _eh_vector_destructor_iterator_
            (local_1f4,0x18,0xf,std::function<void___cdecl(void)>::~function<void___cdecl(void)>);
  ExceptionList = local_10;
  return;
}


/* ==== 006814b0  game_load_string_resource_helper  size=550 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void game_load_string_resource_helper(void)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int in_stack_0000001c;
  uint in_stack_00000020;
  uint in_stack_00000024;
  uint in_stack_00000028;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  undefined4 in_stack_00000034;
  undefined4 in_stack_00000038;
  undefined4 *in_stack_00000040;
  undefined1 *puVar4;
  CCmdUI local_b4 [40];
  undefined1 local_8c [4];
  undefined1 local_88 [4];
  undefined1 local_84 [12];
  int *local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  int local_50;
  int local_4c;
  undefined4 local_48;
  uint *local_44;
  uint local_40;
  uint local_3c;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_34 [24];
  uint local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00728965;
  local_10 = ExceptionList;
  uVar2 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  local_14 = uVar2;
  uVar3 = FUN_0040d380(local_88);
  FUN_0040e2f0(local_8c,&stack0x00000004);
  cVar1 = FUN_0040d970(uVar3);
  if (cVar1 != '\0') {
    FUN_00426e80(uVar2);
    local_8._0_1_ = 1;
    CCmdUI::CCmdUI((CCmdUI *)&local_78);
    CCmdUI::CCmdUI(local_b4);
    local_48 = D3DXCreateTexture(*in_stack_00000040,in_stack_0000002c,in_stack_00000030,1,0,0,1,
                                 &local_78);
    local_48 = (**(code **)(*local_78 + 0x44))(local_78,0,local_34);
    local_48 = (**(code **)(*local_78 + 0x4c))(local_78,0,&local_50,0,0);
    for (local_3c = 0; local_3c < local_18; local_3c = local_3c + 1) {
      for (local_40 = 0; local_40 < local_1c; local_40 = local_40 + 1) {
        local_44 = (uint *)(local_3c * local_50 + local_4c + local_40 * 4);
        local_35 = (undefined1)*local_44;
        local_36 = (undefined1)((ushort)(short)*local_44 >> 8);
        local_37 = (undefined1)(*local_44 >> 0x10);
        *local_44 = in_stack_0000001c << 0x18 | (in_stack_00000020 & 0xff) << 0x10 |
                    (in_stack_00000024 & 0xff) << 8 | in_stack_00000028 & 0xff;
      }
    }
    local_48 = (**(code **)(*local_78 + 0x50))(local_78,0);
    local_74 = in_stack_00000034;
    local_70 = in_stack_00000038;
    local_6c = in_stack_0000002c;
    local_68 = in_stack_00000030;
    local_64 = in_stack_0000002c;
    local_60 = in_stack_00000030;
    FUN_00426e60(&local_78);
    puVar4 = local_84;
    FUN_004bcf30(&stack0x00000004);
    FUN_00426de0(puVar4);
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_00411b80();
  }
  local_8 = 0xffffffff;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>
            ((function<void___cdecl(void)> *)&stack0x00000004);
  ExceptionList = local_10;
  return;
}


/* ==== 006af740  d3d9_create_texture_006af740  size=2046 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * d3d9_create_texture_006af740(undefined4 *param_1)

{
  int iVar1;
  LPCSTR lpchText;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  char *pcStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined1 *puStack_1f0;
  int iStack_1ec;
  undefined4 uStack_1e8;
  LPVOID pvStack_1e4;
  LPVOID pvStack_1e0;
  tagRECT *lprc;
  UINT format;
  undefined1 local_1c0 [40];
  undefined1 *local_198;
  LONG local_194;
  HGDIOBJ local_190;
  LONG local_18c;
  undefined1 local_188 [4];
  undefined4 local_184;
  undefined4 *local_180;
  BOOL local_17c;
  HBITMAP local_178;
  int local_174;
  int local_170;
  char *local_16c;
  undefined4 local_168;
  HBITMAP local_164;
  undefined4 local_160;
  int local_15c;
  HBITMAP local_158;
  int local_154;
  undefined4 local_150;
  uint local_14c;
  char *local_148;
  uint local_144;
  char local_13d;
  uint local_13c;
  undefined4 local_138;
  uint local_134;
  int local_130;
  int local_12c;
  void *local_128;
  int local_124;
  LPVOID local_120;
  uint local_11c;
  tagRECT local_118;
  undefined1 local_108 [256];
  uint local_8;
  
  local_8 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  local_160 = FUN_005e4170();
  local_124 = 0xfc;
  local_154 = 0x1e0;
  local_138 = 0xff000000;
  local_130 = 0;
  _memset(local_108,0,0x100);
  local_118.left = 6;
  local_118.top = 0x2e;
  local_118.right = local_124 + -6;
  local_118.bottom = local_154 + -6;
  SelectObject(*(HDC *)(DAT_007ca1a4 + 0x1c),*(HGDIOBJ *)(DAT_007ca1a4 + 0x20));
  local_158 = CreateCompatibleBitmap(*(HDC *)(DAT_007ca1a4 + 0x18),local_124,local_154);
  local_164 = CreateCompatibleBitmap(*(HDC *)(DAT_007ca1a4 + 0x18),1,1);
  local_13c = local_124 * local_154 * 4;
  local_128 = (void *)FUN_006f191d();
  for (local_14c = 0; local_14c < local_13c >> 2; local_14c = local_14c + 1) {
    *(int *)((int)local_128 + local_14c * 4) = local_130;
  }
  local_18c = SetBitmapBits(local_158,local_13c,local_128);
  local_190 = SelectObject(*(HDC *)(DAT_007ca1a4 + 0x1c),local_158);
  SetBkMode(*(HDC *)(DAT_007ca1a4 + 0x1c),1);
  local_168 = 0xffffff;
  SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xffffff);
  local_148 = (char *)npk_get_relative_res_path();
  local_16c = local_148 + 1;
  do {
    local_13d = *local_148;
    local_148 = local_148 + 1;
  } while (local_13d != '\0');
  iVar1 = (int)local_148 - (int)local_16c;
  format = 0x810;
  lprc = &local_118;
  local_170 = iVar1;
  lpchText = (LPCSTR)npk_get_relative_res_path();
  pvStack_1e0 = (LPVOID)0x6af9a7;
  local_174 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),lpchText,iVar1,lprc,format);
  local_118.top = local_118.top + local_174 + 7;
  local_178 = SelectObject(*(HDC *)(DAT_007ca1a4 + 0x1c),local_164);
  local_194 = GetBitmapBits(local_178,local_13c,local_128);
  for (local_134 = 0; local_134 < local_13c >> 2; local_134 = local_134 + 1) {
    if (*(int *)((int)local_128 + local_134 * 4) != 0) {
      *(uint *)((int)local_128 + local_134 * 4) =
           (*(uint *)((int)local_128 + local_134 * 4) & 0xff0000) >> 0x10 |
           (*(uint *)((int)local_128 + local_134 * 4) & 0xff) << 0x10 |
           *(uint *)((int)local_128 + local_134 * 4) & 0xff00ff00;
    }
  }
  for (local_11c = 0; local_11c < local_13c >> 2; local_11c = local_11c + 1) {
    local_120 = local_128;
    if ((*(uint *)((int)local_128 + local_11c * 4) & 0xffffff) != 0) {
      if (*(int *)((int)local_128 + (local_11c - local_124) * 4 + -4) == local_130) {
        *(undefined4 *)((int)local_128 + (local_11c - local_124) * 4 + -4) = local_138;
      }
      if (*(int *)((int)local_128 + (local_11c - local_124) * 4 + 4) == local_130) {
        *(undefined4 *)((int)local_128 + (local_11c - local_124) * 4 + 4) = local_138;
      }
      if (*(int *)((int)local_128 + (local_11c - local_124) * 4) == local_130) {
        *(undefined4 *)((int)local_128 + (local_11c - local_124) * 4) = local_138;
      }
      if (*(int *)((int)local_128 + local_11c * 4 + -4) == local_130) {
        *(undefined4 *)((int)local_128 + local_11c * 4 + -4) = local_138;
      }
      if (*(int *)((int)local_128 + local_11c * 4 + 4) == local_130) {
        *(undefined4 *)((int)local_128 + local_11c * 4 + 4) = local_138;
      }
      if (*(int *)((int)local_128 + (local_11c + local_124) * 4 + -4) == local_130) {
        *(undefined4 *)((int)local_128 + (local_11c + local_124) * 4 + -4) = local_138;
      }
      if (*(int *)((int)local_128 + (local_11c + local_124) * 4) == local_130) {
        *(undefined4 *)((int)local_128 + (local_11c + local_124) * 4) = local_138;
      }
      if (*(int *)((int)local_128 + (local_11c + local_124) * 4 + 4) == local_130) {
        *(undefined4 *)((int)local_128 + (local_11c + local_124) * 4 + 4) = local_138;
      }
    }
  }
  for (local_144 = 0; local_144 < local_13c >> 2; local_144 = local_144 + 1) {
    if (*(int *)((int)local_128 + local_144 * 4) != 0) {
      *(uint *)((int)local_128 + local_144 * 4) =
           *(uint *)((int)local_128 + local_144 * 4) | 0xff000000;
    }
  }
  local_17c = DeleteObject(local_158);
  local_17c = DeleteObject(local_164);
  pvStack_1e0 = (LPVOID)local_118.top;
  pvStack_1e4 = (LPVOID)local_124;
  uStack_1e8 = *(undefined4 *)(DAT_007ca1a4 + 4);
  iStack_1ec = 0x6afd76;
  local_150 = D3DXCreateTexture();
  pvStack_1e0 = (LPVOID)0x6afda9;
  local_150 = (**(code **)(**(int **)(local_12c + 0xe8) + 0x4c))();
  pvStack_1e0 = (LPVOID)(local_124 * local_118.top * 4);
  pvStack_1e4 = local_128;
  uStack_1e8 = local_184;
  iStack_1ec = 0x6afdd3;
  FUN_006e6bd0();
  pvStack_1e0 = local_128;
  pvStack_1e4 = (LPVOID)0x6afde2;
  FUN_006f1902();
  pvStack_1e0 = (LPVOID)0x0;
  pvStack_1e4 = *(LPVOID *)(local_12c + 0xe8);
  uStack_1e8 = 0x6afe07;
  local_150 = (**(code **)(**(int **)(local_12c + 0xe8) + 0x50))();
  uStack_1e8 = 3;
  iStack_1ec = local_118.top / 0xd;
  puStack_1f0 = (undefined1 *)0x14;
  local_198 = (undefined1 *)&uStack_208;
  FUN_004054a0("ceshiceshi");
  local_180 = (undefined4 *)d3d9_create_texture_004b7f20(local_1c0);
  puVar2 = local_180;
  puVar3 = (undefined4 *)(local_12c + 0xc0);
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  uStack_1e8 = 0;
  iStack_1ec = 0;
  puStack_1f0 = local_188;
  uStack_1f4 = 0;
  uStack_1f8 = *(undefined4 *)(local_12c + 0xc0);
  pcStack_1fc = (char *)0x6afe93;
  local_150 = (**(code **)(**(int **)(local_12c + 0xc0) + 0x4c))();
  pcStack_1fc = "sprite/interface/dungeoninfo/dungeoninfo.img";
  uStack_200 = 0x6afea9;
  local_15c = FUN_005855f0();
  pcStack_1fc = (char *)0x8dc0;
  uStack_200 = *(undefined4 *)(*(int *)(local_15c + 0x40) + 0x24);
  uStack_204 = local_184;
  uStack_208 = 0x6afed6;
  FUN_006e6bd0();
  pcStack_1fc = (char *)local_15c;
  uStack_200 = 0x6afeeb;
  FUN_005856e0();
  pcStack_1fc = (char *)0x0;
  uStack_200 = *(undefined4 *)(local_12c + 0xc0);
  uStack_204 = 0x6aff0d;
  (**(code **)(**(int **)(local_12c + 0xc0) + 0x50))();
  puVar2 = (undefined4 *)(local_12c + 0xc0);
  puVar3 = param_1;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return param_1;
}


/* ==== 006aff40  d3d9_create_texture_006aff40  size=6168 ==== */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * d3d9_create_texture_006aff40(undefined4 *param_1,int param_2,char param_3)

{
  char cVar1;
  int iVar2;
  LPCSTR pCVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 *puVar9;
  undefined4 uStack_344;
  int iStack_340;
  undefined4 uStack_33c;
  char *pcStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined1 *puStack_32c;
  int iStack_328;
  int iStack_324;
  LPVOID pvStack_320;
  LPVOID pvStack_31c;
  tagRECT *ptVar10;
  UINT UVar11;
  undefined1 local_2f8 [40];
  HGDIOBJ local_2d0;
  LONG local_2cc;
  undefined1 *local_2c8;
  LONG local_2c4;
  undefined4 local_2c0;
  char *local_2a4;
  int local_2a0;
  char *local_29c;
  int local_298;
  undefined1 local_294 [4];
  int local_290;
  char *local_28c;
  undefined4 *local_288;
  BOOL local_284;
  HBITMAP local_280;
  int local_27c;
  char *local_278;
  int local_274;
  char *local_270;
  int local_26c;
  int local_268;
  int local_264;
  char *local_260;
  int local_25c;
  int local_258;
  char *local_254;
  int local_250;
  int local_24c;
  char *local_248;
  int local_244;
  char *local_240;
  int local_23c;
  char *local_238;
  int local_234;
  char *local_230;
  int local_22c;
  char *local_228;
  int local_224;
  int local_220;
  HBITMAP local_21c;
  int local_218;
  int local_214;
  int local_210;
  HBITMAP local_20c;
  int local_208;
  int local_204;
  int local_200;
  int local_1fc;
  uint local_1f8;
  uint local_1f4;
  int local_1f0;
  float local_1ec;
  undefined4 local_1e8;
  uint local_1e4;
  char *local_1e0;
  char *local_1dc;
  char *local_1d8;
  char *local_1d4;
  char *local_1d0;
  char *local_1cc;
  char *local_1c8;
  char *local_1c4;
  char *local_1c0;
  char *local_1bc;
  char *local_1b8;
  char *local_1b4;
  uint local_1b0;
  uint local_1ac;
  char local_1a8;
  char local_1a7;
  char local_1a6;
  char local_1a5;
  char local_1a4;
  char local_1a3;
  char local_1a2;
  char local_1a1;
  char local_1a0;
  char local_19f;
  char local_19e;
  char local_19d;
  undefined4 local_19c;
  uint local_198;
  int local_194;
  uint local_190;
  void *local_18c;
  COLORREF local_188;
  int local_184;
  LPVOID local_180;
  int local_17c;
  uint local_178;
  int local_174;
  int local_170;
  tagRECT local_16c;
  function<void___cdecl(void)> local_15c [24];
  function<void___cdecl(void)> local_144 [24];
  function<void___cdecl(void)> local_12c [24];
  char local_114 [256];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0072a4f6;
  local_10 = ExceptionList;
  local_14 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_170 = FUN_005d9da0();
  local_184 = 0xf0;
  local_200 = 0x1e0;
  local_220 = 0;
  local_19c = 0xff000000;
  local_194 = 0;
  local_16c.left = 6;
  local_16c.top = 6;
  local_16c.right = 0xea;
  local_16c.bottom = 0x1da;
  SelectObject(*(HDC *)(DAT_007ca1a4 + 0x1c),*(HGDIOBJ *)(DAT_007ca1a4 + 0x20));
  local_20c = CreateCompatibleBitmap(*(HDC *)(DAT_007ca1a4 + 0x18),local_184,local_200);
  local_21c = CreateCompatibleBitmap(*(HDC *)(DAT_007ca1a4 + 0x18),1,1);
  local_1ac = local_184 * local_200 * 4;
  local_18c = (void *)FUN_006f191d();
  for (local_1f8 = 0; local_1f8 < local_1ac >> 2; local_1f8 = local_1f8 + 1) {
    *(int *)((int)local_18c + local_1f8 * 4) = local_194;
  }
  local_2cc = SetBitmapBits(local_20c,local_1ac,local_18c);
  local_2d0 = SelectObject(*(HDC *)(DAT_007ca1a4 + 0x1c),local_20c);
  SetBkMode(*(HDC *)(DAT_007ca1a4 + 0x1c),1);
  local_188 = 0xffffff;
  SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xffffff);
  local_1d0 = (char *)npk_get_relative_res_path();
  local_260 = local_1d0 + 1;
  do {
    local_1a8 = *local_1d0;
    local_1d0 = local_1d0 + 1;
  } while (local_1a8 != '\0');
  iVar2 = (int)local_1d0 - (int)local_260;
  ptVar10 = &local_16c;
  UVar11 = 0x810;
  local_298 = iVar2;
  pCVar3 = (LPCSTR)npk_get_relative_res_path();
  pvStack_31c = (LPVOID)0x6b01b1;
  local_174 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),pCVar3,iVar2,ptVar10,UVar11);
  local_16c.top = local_16c.top + 1 + local_174;
  SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),local_188);
  local_1d4 = (char *)npk_get_relative_res_path();
  local_29c = local_1d4 + 1;
  do {
    local_19d = *local_1d4;
    local_1d4 = local_1d4 + 1;
  } while (local_19d != '\0');
  iVar2 = (int)local_1d4 - (int)local_29c;
  ptVar10 = &local_16c;
  UVar11 = 0x810;
  local_2a0 = iVar2;
  pCVar3 = (LPCSTR)npk_get_relative_res_path();
  pvStack_31c = (LPVOID)0x6b0268;
  local_174 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),pCVar3,iVar2,ptVar10,UVar11);
  local_220 = local_16c.top + 1 + local_174;
  local_16c.top = local_220;
  if (*(int *)(local_170 + 0x60) != 0) {
    local_16c.top = local_220 + 0xd;
    iVar2 = game_get_player_or_session_blob();
    if (*(int *)(iVar2 + 0x1fc) < *(int *)(local_170 + 0x60)) {
      game_get_player_or_session_blob();
      cVar1 = FUN_0067b420();
      if (cVar1 == '\0') {
        SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xff0000);
        FUN_00414e80();
      }
      else {
        iVar2 = game_get_player_or_session_blob();
        if (*(int *)(iVar2 + 0x1fc) + 5 < *(int *)(local_170 + 0x60)) {
          SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xff0000);
        }
        else {
          SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xff00);
        }
        game_get_player_or_session_blob();
        FUN_0067b4a0();
        FUN_00414e80();
      }
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xffffff);
      FUN_00414e80();
    }
    local_1d8 = local_114;
    local_2a4 = local_114 + 1;
    do {
      local_19e = *local_1d8;
      local_1d8 = local_1d8 + 1;
    } while (local_19e != '\0');
    local_224 = (int)local_1d8 - (int)local_2a4;
    pvStack_31c = (LPVOID)0x6b0438;
    local_174 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),local_114,local_224,&local_16c,0x810);
  }
  if ((*(int *)(local_170 + 0xc4) != 0) || (*(int *)(local_170 + 0xb4) != 0)) {
    local_16c.top = local_16c.top + 1 + local_174;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),local_188);
    if ((param_2 == 0) && (*(int *)(local_17c + 0x30) == 0x14)) {
      local_2c0 = 0;
    }
    if (*(int *)(local_170 + 0xc4) == 0) {
      local_114[0] = -0x35;
      local_114[1] = -0x4e;
      local_114[2] = -0x49;
      local_114[3] = -0x5e;
      local_114[4] = 0;
    }
    else {
      FUN_00414e80();
    }
    local_1dc = local_114;
    local_228 = local_114 + 1;
    do {
      local_19f = *local_1dc;
      local_1dc = local_1dc + 1;
    } while (local_19f != '\0');
    local_22c = (int)local_1dc - (int)local_228;
    pvStack_31c = (LPVOID)0x6b057c;
    local_174 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),local_114,local_22c,&local_16c,0x810);
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),local_188);
    FUN_00414e80();
    local_1e0 = local_114;
    local_230 = local_114 + 1;
    do {
      local_1a0 = *local_1e0;
      local_1e0 = local_1e0 + 1;
    } while (local_1a0 != '\0');
    local_234 = (int)local_1e0 - (int)local_230;
    pvStack_31c = (LPVOID)0x6b063a;
    local_174 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),local_114,local_234,&local_16c,0x812);
  }
  if (*(int *)(local_170 + 0xd4) != 0) {
    local_16c.top = local_16c.top + 1 + local_174;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),local_188);
    FUN_00414e80();
    local_1b4 = local_114;
    local_238 = local_114 + 1;
    do {
      local_1a1 = *local_1b4;
      local_1b4 = local_1b4 + 1;
    } while (local_1a1 != '\0');
    local_23c = (int)local_1b4 - (int)local_238;
    pvStack_31c = (LPVOID)0x6b072b;
    local_174 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),local_114,local_23c,&local_16c,0x810);
  }
  iVar2 = FUN_0044de50();
  if (iVar2 != 0) {
    local_16c.top = local_16c.top + 1 + local_174;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),local_188);
    FUN_0044de30();
    FUN_0044de30();
    game_loop_helper_cd6d0();
    npk_get_relative_res_path();
    FUN_00414e80();
    local_1b8 = local_114;
    local_240 = local_114 + 1;
    do {
      local_1a2 = *local_1b8;
      local_1b8 = local_1b8 + 1;
    } while (local_1a2 != '\0');
    local_244 = (int)local_1b8 - (int)local_240;
    pvStack_31c = (LPVOID)0x6b0840;
    local_174 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),local_114,local_244,&local_16c,0x810);
  }
  cVar1 = FUN_00427e30();
  if (cVar1 != '\0') {
    local_16c.top = local_16c.top + 1 + local_174;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),local_188);
    npk_get_relative_res_path();
    FUN_00414e80();
    local_1bc = local_114;
    local_248 = local_114 + 1;
    do {
      local_1a3 = *local_1bc;
      local_1bc = local_1bc + 1;
    } while (local_1a3 != '\0');
    local_24c = (int)local_1bc - (int)local_248;
    pvStack_31c = (LPVOID)0x6b0932;
    local_174 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),local_114,local_24c,&local_16c,0x810);
  }
  cVar1 = game_frame_should_continue();
  if (cVar1 == '\0') {
    local_16c.top = local_16c.top + 0xd;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),local_188);
    pvStack_31c = (LPVOID)0x6b099a;
    local_174 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&DAT_00777590,10,&local_16c,0x810);
    local_210 = local_170 + 0x68;
    local_1f0 = game_loop_helper_018d0();
    local_250 = game_loop_helper_018b0();
    for (; local_1f0 != local_250; local_1f0 = local_1f0 + 8) {
      local_214 = local_1f0;
      local_16c.top = local_16c.top + 1 + local_174;
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),local_188);
      FUN_005d9da0();
      npk_get_relative_res_path();
      FUN_00414e80();
      local_1c0 = local_114;
      local_254 = local_114 + 1;
      do {
        local_1a4 = *local_1c0;
        local_1c0 = local_1c0 + 1;
      } while (local_1a4 != '\0');
      local_258 = (int)local_1c0 - (int)local_254;
      pvStack_31c = (LPVOID)0x6b0adf;
      local_174 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),local_114,local_258,&local_16c,0x810);
    }
  }
  cVar1 = game_frame_should_continue();
  if (cVar1 == '\0') {
    local_16c.top = local_16c.top + 0xd;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),local_188);
    local_204 = 0;
    local_1f4 = 0;
    while (uVar4 = FUN_004274f0(), local_1f4 < uVar4) {
      FUN_004274d0();
      FUN_00405520();
      local_8 = 0;
      FUN_0040d650();
      local_8._0_1_ = 1;
      local_190 = 0;
      while (uVar4 = FUN_0044de50(), local_190 < uVar4) {
        local_1ec = 0.0;
        piVar5 = (int *)FUN_0044de30();
        if (*piVar5 < 0) {
          iVar2 = FUN_0044de30();
          FUN_0048ada0();
          uVar4 = FUN_00401a90();
          if (uVar4 < *(uint *)(iVar2 + 4)) {
            local_25c = *(int *)(local_17c + 0x34) + 1;
            iVar2 = FUN_0044de30();
            FUN_0044de30();
            FUN_0048ada0();
            FUN_00401a90();
            FUN_0048ada0();
            piVar5 = (int *)FUN_0048b030();
            local_1ec = (float)*piVar5 * *(float *)(iVar2 + 8);
          }
          else {
            iVar2 = FUN_0044de30();
            FUN_0044de30();
            FUN_0048ada0();
            piVar5 = (int *)FUN_0048b030();
            local_1ec = (float)*piVar5 * *(float *)(iVar2 + 8);
          }
        }
        else {
          iVar2 = FUN_0044de30();
          FUN_0044de30();
          piVar5 = (int *)game_get_flag_object_01a70();
          local_1ec = (float)*piVar5 * *(float *)(iVar2 + 8);
        }
        FUN_0040d490();
        local_190 = local_190 + 1;
      }
      FUN_004cacc0();
      local_8._0_1_ = 2;
      iVar2 = FUN_00401a90();
      local_204 = iVar2 + local_204;
      FUN_004cae00();
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),local_188);
      local_16c.top = local_16c.top + 1 + local_174;
      local_1c4 = (char *)npk_get_relative_res_path();
      local_28c = local_1c4 + 1;
      do {
        local_1a5 = *local_1c4;
        local_1c4 = local_1c4 + 1;
      } while (local_1a5 != '\0');
      iVar2 = (int)local_1c4 - (int)local_28c;
      ptVar10 = &local_16c;
      UVar11 = 0x810;
      local_264 = iVar2;
      pCVar3 = (LPCSTR)npk_get_relative_res_path();
      pvStack_31c = (LPVOID)0x6b0ed2;
      local_174 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),pCVar3,iVar2,ptVar10,UVar11);
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_144);
      local_8._0_1_ = 1;
      FUN_00401ac0();
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_00401ac0();
      local_8 = 0xffffffff;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_15c);
      local_1f4 = local_1f4 + 1;
    }
  }
  cVar1 = game_frame_should_continue();
  if (cVar1 == '\0') {
    local_16c.top = local_16c.top + 0xd;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),local_188);
    local_218 = local_170 + 0x48;
    local_1fc = game_loop_helper_018d0();
    local_268 = game_loop_helper_018b0();
    for (; local_1fc != local_268; local_1fc = local_1fc + 0x18) {
      local_26c = local_1fc;
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),local_188);
      npk_get_relative_res_path();
      FUN_004cb530();
      local_16c.top = local_16c.top + 1 + local_174;
      local_1c8 = (char *)npk_get_relative_res_path();
      local_270 = local_1c8 + 1;
      do {
        local_1a6 = *local_1c8;
        local_1c8 = local_1c8 + 1;
      } while (local_1a6 != '\0');
      iVar2 = (int)local_1c8 - (int)local_270;
      ptVar10 = &local_16c;
      UVar11 = 0x810;
      local_274 = iVar2;
      pCVar3 = (LPCSTR)npk_get_relative_res_path();
      pvStack_31c = (LPVOID)0x6b107e;
      local_174 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),pCVar3,iVar2,ptVar10,UVar11);
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_12c);
    }
  }
  if (param_3 != '\0') {
    local_16c.top = local_16c.top + local_174 + 0xe;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),local_188);
    pcVar6 = (char *)&DAT_007775b0;
    pcVar8 = local_114;
    for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar6;
      pcVar6 = pcVar6 + 4;
      pcVar8 = pcVar8 + 4;
    }
    *pcVar8 = *pcVar6;
    local_1cc = local_114;
    local_278 = local_114 + 1;
    do {
      local_1a7 = *local_1cc;
      local_1cc = local_1cc + 1;
    } while (local_1a7 != '\0');
    local_27c = (int)local_1cc - (int)local_278;
    pvStack_31c = (LPVOID)0x6b1164;
    local_174 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),local_114,local_27c,&local_16c,0x810);
  }
  local_16c.top = local_16c.top + 1 + local_174;
  local_280 = SelectObject(*(HDC *)(DAT_007ca1a4 + 0x1c),local_21c);
  local_2c4 = GetBitmapBits(local_280,local_1ac,local_18c);
  for (local_198 = 0; local_198 < local_1ac >> 2; local_198 = local_198 + 1) {
    if (*(int *)((int)local_18c + local_198 * 4) != 0) {
      *(uint *)((int)local_18c + local_198 * 4) =
           (*(uint *)((int)local_18c + local_198 * 4) & 0xff0000) >> 0x10 |
           (*(uint *)((int)local_18c + local_198 * 4) & 0xff) << 0x10 |
           *(uint *)((int)local_18c + local_198 * 4) & 0xff00ff00;
    }
  }
  for (local_178 = 0; local_178 < local_1ac >> 2; local_178 = local_178 + 1) {
    local_180 = local_18c;
    if ((*(uint *)((int)local_18c + local_178 * 4) & 0xffffff) != 0) {
      if (*(int *)((int)local_18c + (local_178 - local_184) * 4 + -4) == local_194) {
        *(undefined4 *)((int)local_18c + (local_178 - local_184) * 4 + -4) = local_19c;
      }
      if (*(int *)((int)local_18c + (local_178 - local_184) * 4 + 4) == local_194) {
        *(undefined4 *)((int)local_18c + (local_178 - local_184) * 4 + 4) = local_19c;
      }
      if (*(int *)((int)local_18c + (local_178 - local_184) * 4) == local_194) {
        *(undefined4 *)((int)local_18c + (local_178 - local_184) * 4) = local_19c;
      }
      if (*(int *)((int)local_18c + local_178 * 4 + -4) == local_194) {
        *(undefined4 *)((int)local_18c + local_178 * 4 + -4) = local_19c;
      }
      if (*(int *)((int)local_18c + local_178 * 4 + 4) == local_194) {
        *(undefined4 *)((int)local_18c + local_178 * 4 + 4) = local_19c;
      }
      if (*(int *)((int)local_18c + (local_178 + local_184) * 4 + -4) == local_194) {
        *(undefined4 *)((int)local_18c + (local_178 + local_184) * 4 + -4) = local_19c;
      }
      if (*(int *)((int)local_18c + (local_178 + local_184) * 4) == local_194) {
        *(undefined4 *)((int)local_18c + (local_178 + local_184) * 4) = local_19c;
      }
      if (*(int *)((int)local_18c + (local_178 + local_184) * 4 + 4) == local_194) {
        *(undefined4 *)((int)local_18c + (local_178 + local_184) * 4 + 4) = local_19c;
      }
    }
  }
  for (local_1b0 = 0; local_1b0 < local_1ac >> 2; local_1b0 = local_1b0 + 1) {
    if (*(int *)((int)local_18c + local_1b0 * 4) != 0) {
      *(uint *)((int)local_18c + local_1b0 * 4) =
           *(uint *)((int)local_18c + local_1b0 * 4) | 0xff000000;
    }
  }
  local_284 = DeleteObject(local_20c);
  local_284 = DeleteObject(local_21c);
  pvStack_31c = (LPVOID)local_16c.top;
  pvStack_320 = (LPVOID)local_184;
  iStack_324 = *(undefined4 *)(DAT_007ca1a4 + 4);
  iStack_328 = 0x6b1524;
  local_1e8 = D3DXCreateTexture();
  pvStack_31c = (LPVOID)0x6b1557;
  local_1e8 = (**(code **)(**(int **)(local_17c + 0xe8) + 0x4c))();
  pvStack_31c = (LPVOID)(local_184 * local_16c.top * 4);
  pvStack_320 = local_18c;
  iStack_324 = local_290;
  iStack_328 = 0x6b1581;
  FUN_006e6bd0();
  pvStack_31c = local_18c;
  pvStack_320 = (LPVOID)0x6b1590;
  FUN_006f1902();
  pvStack_31c = (LPVOID)0x0;
  pvStack_320 = *(LPVOID *)(local_17c + 0xe8);
  iStack_324 = 0x6b15b5;
  local_1e8 = (**(code **)(**(int **)(local_17c + 0xe8) + 0x50))();
  iStack_324 = 3;
  iStack_328 = local_16c.top / 0xd;
  puStack_32c = (undefined1 *)0x13;
  local_2c8 = (undefined1 *)&uStack_344;
  FUN_004054a0("ceshiceshi");
  local_288 = (undefined4 *)d3d9_create_texture_004b7f20(local_2f8);
  puVar7 = local_288;
  puVar9 = (undefined4 *)(local_17c + 0xc0);
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  iStack_324 = 0;
  iStack_328 = 0;
  puStack_32c = local_294;
  uStack_330 = 0;
  uStack_334 = *(undefined4 *)(local_17c + 0xc0);
  pcStack_338 = (char *)0x6b1641;
  local_1e8 = (**(code **)(**(int **)(local_17c + 0xc0) + 0x4c))();
  pcStack_338 = "sprite/interface/popup.img";
  uStack_33c = 0x6b1657;
  local_208 = FUN_005855f0();
  for (local_1e4 = 0; local_1e4 < 0x13; local_1e4 = local_1e4 + 1) {
    pcStack_338 = *(char **)(*(int *)(local_208 + 0x40) + 0x1690);
    uStack_33c = *(undefined4 *)(*(int *)(local_208 + 0x40) + 0x16a4);
    iStack_340 = local_290 + (local_220 + 6) * *(int *)(local_17c + 0xcc) * 4 + 0x18 +
                 local_1e4 * 0x30;
    uStack_344 = 0x6b16e3;
    FUN_006e6bd0();
  }
  pcStack_338 = (char *)local_208;
  uStack_33c = 0x6b16fa;
  FUN_005856e0();
  pcStack_338 = (char *)0x0;
  uStack_33c = *(undefined4 *)(local_17c + 0xc0);
  iStack_340 = 0x6b171c;
  (**(code **)(**(int **)(local_17c + 0xc0) + 0x50))();
  puVar7 = (undefined4 *)(local_17c + 0xc0);
  puVar9 = param_1;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar9 = puVar9 + 1;
  }
  ExceptionList = local_10;
  return param_1;
}


/* ==== 006b1770  d3d9_create_texture_006b1770  size=11234 ==== */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * d3d9_create_texture_006b1770(undefined4 *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  LPCSTR pCVar3;
  function<void___cdecl(void)> *pfVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  bool bVar9;
  undefined4 uStack_15a8;
  function<void___cdecl(void)> *pfStack_15a4;
  undefined4 uStack_15a0;
  char *pcStack_159c;
  undefined4 uStack_1598;
  undefined4 uStack_1594;
  function<void___cdecl(void)> *pfStack_1590;
  function<void___cdecl(void)> *pfStack_158c;
  function<void___cdecl(void)> *pfStack_1588;
  function<void___cdecl(void)> *pfStack_1584;
  function<void___cdecl(void)> *pfStack_1580;
  tagRECT *ptVar10;
  UINT UVar11;
  undefined1 local_155c [40];
  undefined1 *local_1534;
  undefined1 *local_1530;
  undefined1 *local_152c;
  undefined4 local_1528;
  undefined1 *local_1524;
  char *local_1520;
  undefined1 *local_151c;
  HGDIOBJ local_1518;
  LONG local_1514;
  undefined4 local_1510;
  undefined4 local_150c;
  undefined4 local_1508;
  undefined1 *local_1504;
  LONG local_1500;
  undefined1 *local_14fc;
  undefined1 *local_14f8;
  undefined1 *local_14f4;
  char *local_14f0;
  int local_14ec;
  char *local_14e8;
  int local_14e4;
  int local_14e0;
  int local_14dc;
  undefined4 local_14d8;
  undefined4 local_14d4;
  int local_14d0;
  int local_14cc;
  undefined4 local_14c8;
  undefined4 local_14c4;
  undefined4 local_14c0;
  undefined4 local_14bc;
  int local_14b8;
  int local_14b4;
  int local_14b0;
  undefined4 local_14ac;
  int local_14a8;
  int local_14a4;
  undefined4 local_14a0;
  undefined4 local_149c;
  int local_1498;
  int local_1494;
  int local_1490;
  uint local_148c;
  undefined1 local_1488 [4];
  function<void___cdecl(void)> *local_1484;
  undefined4 local_1480;
  undefined4 *local_147c;
  BOOL local_1478;
  HBITMAP local_1474;
  int local_1470;
  int local_146c;
  int local_1468;
  int local_1464;
  int local_1460;
  int local_145c;
  int local_1458;
  int local_1454;
  int local_1450;
  char *local_144c;
  int local_1448;
  int local_1444;
  int local_1440;
  int local_143c;
  int local_1438;
  int local_1434;
  undefined4 local_1430;
  undefined4 local_142c;
  int local_1428;
  int local_1424;
  undefined4 local_1420;
  undefined4 local_141c;
  undefined4 local_1418;
  undefined4 local_1414;
  undefined4 local_1410;
  undefined4 local_140c;
  undefined4 local_1408;
  undefined4 local_1404;
  undefined4 local_1400;
  undefined4 local_13fc;
  undefined4 local_13f8;
  undefined4 local_13f4;
  undefined4 local_13f0;
  undefined4 local_13ec;
  undefined4 local_13e8;
  undefined4 local_13e4;
  undefined4 local_13e0;
  undefined4 local_13dc;
  undefined4 local_13d8;
  undefined4 local_13d4;
  undefined4 local_13d0;
  undefined4 local_13cc;
  undefined4 local_13c8;
  undefined4 local_13c4;
  undefined4 local_13c0;
  undefined4 local_13bc;
  undefined4 local_13b8;
  undefined4 local_13b4;
  undefined4 local_13b0;
  undefined4 local_13ac;
  int local_13a8;
  int local_13a4;
  int local_13a0;
  int local_139c;
  int local_1398;
  int local_1394;
  int local_1390;
  int local_138c;
  int local_1388;
  int local_1384;
  int local_1380;
  int local_137c;
  int local_1378;
  HBITMAP local_1374;
  undefined4 local_1370;
  int local_136c;
  uint local_1368;
  int local_1364;
  HBITMAP local_1360;
  char *local_135c;
  int local_1358;
  undefined4 local_1354;
  uint local_1350;
  byte *local_134c;
  byte *local_1348;
  char *local_1344;
  uint local_1340;
  char *local_133c;
  char *local_1338;
  char *local_1334;
  char *local_1330;
  char *local_132c;
  char *local_1328;
  char *local_1324;
  char *local_1320;
  char *local_131c;
  char *local_1318;
  char *local_1314;
  char *local_1310;
  char *local_130c;
  char *local_1308;
  char *local_1304;
  char *local_1300;
  char *local_12fc;
  char *local_12f8;
  char *local_12f4;
  char *local_12f0;
  char *local_12ec;
  char *local_12e8;
  char *local_12e4;
  uint local_12e0;
  undefined *local_12dc;
  char local_12d5;
  uint local_12d4;
  char local_12ce;
  char local_12cd;
  char local_12cc;
  char local_12cb;
  char local_12ca;
  char local_12c9;
  char local_12c8;
  char local_12c7;
  char local_12c6;
  char local_12c5;
  char local_12c4;
  char local_12c3;
  char local_12c2;
  char local_12c1;
  byte local_12c0;
  byte local_12bf;
  char local_12be;
  char local_12bd;
  char local_12bc;
  char local_12bb;
  char local_12ba;
  char local_12b9;
  char local_12b8;
  char local_12b7;
  char local_12b6;
  char local_12b5;
  char local_12b4;
  char local_12b3;
  char local_12b2;
  char local_12b1;
  uint local_12b0;
  undefined4 local_12ac;
  int local_12a8;
  char local_12a1;
  function<void___cdecl(void)> *local_12a0;
  function<void___cdecl(void)> *local_129c;
  int local_1298;
  function<void___cdecl(void)> *local_1294;
  function<void___cdecl(void)> *local_1290;
  uint local_128c;
  uint local_1288;
  int local_1284;
  int local_1280;
  tagRECT local_127c;
  function<void___cdecl(void)> local_126c [24];
  function<void___cdecl(void)> local_1254 [24];
  function<void___cdecl(void)> local_123c [24];
  function<void___cdecl(void)> local_1224 [24];
  function<void___cdecl(void)> local_120c [24];
  function<void___cdecl(void)> local_11f4 [24];
  function<void___cdecl(void)> local_11dc [24];
  function<void___cdecl(void)> local_11c4 [24];
  function<void___cdecl(void)> local_11ac [24];
  function<void___cdecl(void)> local_1194 [24];
  function<void___cdecl(void)> local_117c [24];
  function<void___cdecl(void)> local_1164 [24];
  function<void___cdecl(void)> local_114c [24];
  function<void___cdecl(void)> local_1134 [24];
  function<void___cdecl(void)> local_111c [24];
  function<void___cdecl(void)> local_1104 [24];
  function<void___cdecl(void)> local_10ec [24];
  function<void___cdecl(void)> local_10d4 [24];
  function<void___cdecl(void)> local_10bc [24];
  function<void___cdecl(void)> local_10a4 [24];
  function<void___cdecl(void)> local_108c [24];
  function<void___cdecl(void)> local_1074 [24];
  function<void___cdecl(void)> local_105c [24];
  function<void___cdecl(void)> local_1044 [24];
  function<void___cdecl(void)> local_102c [24];
  undefined4 local_1014;
  undefined4 local_1010;
  undefined1 local_100c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0072a5e0;
  local_10 = ExceptionList;
  local_14 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1294 = (function<void___cdecl(void)> *)0xcc;
  local_1358 = 0x1e0;
  local_1378 = 0;
  local_1280 = game_loop_helper_cd6d0();
  local_12ac = 0xff000000;
  local_12a8 = 0;
  local_1528 = 0xff00f0;
  local_1508 = 0xffb100;
  local_150c = 0xff00f0;
  local_1510 = 0xffffff;
  local_127c.left = 6;
  local_127c.top = 6;
  local_127c.right = (LONG)(local_1294 + -6);
  local_127c.bottom = local_1358;
  SelectObject(*(HDC *)(DAT_007ca1a4 + 0x1c),*(HGDIOBJ *)(DAT_007ca1a4 + 0x20));
  local_1360 = CreateCompatibleBitmap(*(HDC *)(DAT_007ca1a4 + 0x18),(int)local_1294,local_1358);
  local_1374 = CreateCompatibleBitmap(*(HDC *)(DAT_007ca1a4 + 0x18),1,1);
  local_12d4 = (int)local_1294 * local_1358 * 4;
  local_129c = (function<void___cdecl(void)> *)FUN_006f191d();
  for (local_1340 = 0; local_1340 < local_12d4 >> 2; local_1340 = local_1340 + 1) {
    *(int *)(local_129c + local_1340 * 4) = local_12a8;
  }
  local_1514 = SetBitmapBits(local_1360,local_12d4,local_129c);
  local_1518 = SelectObject(*(HDC *)(DAT_007ca1a4 + 0x1c),local_1360);
  SetBkMode(*(HDC *)(DAT_007ca1a4 + 0x1c),1);
  local_12dc = (undefined *)0xffffff;
  if (*(int *)(local_1280 + 0x94) == 1) {
    local_12dc = &DAT_0068d5ed;
  }
  else if (*(int *)(local_1280 + 0x94) == 2) {
    local_12dc = (undefined *)0xb36bff;
  }
  else if (*(int *)(local_1280 + 0x94) == 3) {
    local_12dc = (undefined *)0xff00f0;
  }
  else if (*(int *)(local_1280 + 0x94) == 4) {
    local_12dc = (undefined *)0xffb100;
  }
  SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),(COLORREF)local_12dc);
  local_12e4 = (char *)npk_get_relative_res_path();
  local_14f0 = local_12e4 + 1;
  do {
    local_12b1 = *local_12e4;
    local_12e4 = local_12e4 + 1;
  } while (local_12b1 != '\0');
  iVar2 = (int)local_12e4 - (int)local_14f0;
  ptVar10 = &local_127c;
  UVar11 = 0x810;
  local_14ec = iVar2;
  pCVar3 = (LPCSTR)npk_get_relative_res_path();
  pfStack_1580 = (function<void___cdecl(void)> *)0x6b1a67;
  local_1284 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),pCVar3,iVar2,ptVar10,UVar11);
  cVar1 = FUN_00427e30();
  if (cVar1 != '\0') {
    local_127c.top = local_127c.top + 1 + local_1284;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),(COLORREF)local_12dc);
    local_12e8 = (char *)npk_get_relative_res_path();
    local_14e8 = local_12e8 + 1;
    do {
      local_12b2 = *local_12e8;
      local_12e8 = local_12e8 + 1;
    } while (local_12b2 != '\0');
    iVar2 = (int)local_12e8 - (int)local_14e8;
    ptVar10 = &local_127c;
    UVar11 = 0x810;
    local_14e4 = iVar2;
    pCVar3 = (LPCSTR)npk_get_relative_res_path();
    pfStack_1580 = (function<void___cdecl(void)> *)0x6b1b41;
    local_1284 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),pCVar3,iVar2,ptVar10,UVar11);
  }
  local_1378 = local_127c.top + 1 + local_1284;
  local_127c.top = local_1378 + 1 + local_1284;
  if (*(int *)(local_1280 + 0x98) != 0) {
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xffffff);
    FUN_00414e80();
    local_12ec = (char *)&local_1014;
    local_14e0 = (int)&local_1014 + 1;
    do {
      local_12b3 = *local_12ec;
      local_12ec = local_12ec + 1;
    } while (local_12b3 != '\0');
    local_14dc = (int)local_12ec - local_14e0;
    pfStack_1580 = (function<void___cdecl(void)> *)0x6b1c4f;
    local_1284 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1014,local_14dc,&local_127c,
                           0x10);
  }
  if (*(int *)(local_1280 + 0x104) != 0) {
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xffffff);
    if (*(int *)(local_1298 + 0x2c) == 0) {
      local_14d4 = FUN_004c7c70();
      npk_get_relative_res_path();
      FUN_00414e80();
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_117c);
    }
    else {
      local_14d8 = FUN_004c7c70();
      npk_get_relative_res_path();
      FUN_00414e80();
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1194);
    }
    local_12f0 = (char *)&local_1014;
    local_14d0 = (int)&local_1014 + 1;
    do {
      local_12b4 = *local_12f0;
      local_12f0 = local_12f0 + 1;
    } while (local_12b4 != '\0');
    local_14cc = (int)local_12f0 - local_14d0;
    pfStack_1580 = (function<void___cdecl(void)> *)0x6b1d9e;
    local_1284 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1014,local_14cc,&local_127c,
                           0x12);
  }
  local_127c.top = local_127c.top + 1 + local_1284;
  SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xffffff);
  local_151c = (undefined1 *)&pfStack_1580;
  pfStack_1584 = (function<void___cdecl(void)> *)(local_1280 + 0xe8);
  pfStack_1588 = (function<void___cdecl(void)> *)0x6b1ded;
  FUN_00405520();
  pfStack_1584 = local_1164;
  pfStack_1588 = (function<void___cdecl(void)> *)0x6b1df9;
  local_14c8 = FUN_004c9f00();
  local_14c4 = local_14c8;
  local_135c = (char *)npk_get_relative_res_path();
  local_1520 = (char *)&local_1014;
  local_1344 = local_1520;
  do {
    local_12a1 = *local_135c;
    *local_1344 = local_12a1;
    local_135c = local_135c + 1;
    local_1344 = local_1344 + 1;
  } while (local_12a1 != '\0');
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1164);
  local_1524 = (undefined1 *)&pfStack_1584;
  pfStack_1588 = (function<void___cdecl(void)> *)(local_1280 + 0xe8);
  pfStack_158c = (function<void___cdecl(void)> *)0x6b1ea8;
  FUN_00405520();
  pfStack_1588 = local_114c;
  pfStack_158c = (function<void___cdecl(void)> *)0x6b1eb4;
  local_14c0 = FUN_004c9f00();
  local_14bc = local_14c0;
  local_12b6 = FUN_00427c60();
  local_12b5 = local_12b6;
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_114c);
  if (local_12b6 == '\0') {
    local_1534 = (undefined1 *)&pfStack_1584;
    pfStack_1588 = (function<void___cdecl(void)> *)(local_1280 + 0xe8);
    pfStack_158c = (function<void___cdecl(void)> *)0x6b1f9e;
    FUN_00405520();
    pfStack_1588 = local_1134;
    pfStack_158c = (function<void___cdecl(void)> *)0x6b1faa;
    local_14ac = FUN_004c9f00();
    local_1480 = local_14ac;
    local_12b9 = FUN_00427c60();
    local_12b8 = local_12b9;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1134);
    if (local_12b9 == '\0') {
      local_152c = (undefined1 *)&pfStack_1584;
      pfStack_1588 = (function<void___cdecl(void)> *)(local_1280 + 0xe8);
      pfStack_158c = (function<void___cdecl(void)> *)0x6b2095;
      FUN_00405520();
      pfStack_1588 = local_111c;
      pfStack_158c = (function<void___cdecl(void)> *)0x6b20a1;
      local_14a0 = FUN_004c9f00();
      local_149c = local_14a0;
      local_12bc = FUN_00427c60();
      local_12bb = local_12bc;
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_111c);
      if (local_12bc != '\0') {
        cVar1 = FUN_00427c60();
        if (cVar1 == '\0') {
          local_12fc = (char *)&local_1014;
          local_1498 = (int)&local_1014 + 1;
          do {
            local_12bd = *local_12fc;
            local_12fc = local_12fc + 1;
          } while (local_12bd != '\0');
          local_1494 = (int)local_12fc - local_1498;
          pfStack_1580 = (function<void___cdecl(void)> *)0x6b21ae;
          local_1284 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1014,local_1494,
                                 &local_127c,0x10);
          FUN_00414e80();
          local_1300 = (char *)&local_1014;
          local_1490 = (int)&local_1014 + 1;
          do {
            local_12be = *local_1300;
            local_1300 = local_1300 + 1;
          } while (local_12be != '\0');
          local_145c = (int)local_1300 - local_1490;
          pfStack_1580 = (function<void___cdecl(void)> *)0x6b224f;
          local_1284 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1014,local_145c,
                                 &local_127c,0x12);
        }
        else {
          pfStack_1580 = (function<void___cdecl(void)> *)0x6b2132;
          local_1284 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&DAT_00777688,6,&local_127c,0x10);
        }
      }
    }
    else {
      local_12f8 = (char *)&local_1014;
      local_14a8 = (int)&local_1014 + 1;
      do {
        local_12ba = *local_12f8;
        local_12f8 = local_12f8 + 1;
      } while (local_12ba != '\0');
      local_14a4 = (int)local_12f8 - local_14a8;
      pfStack_1580 = (function<void___cdecl(void)> *)0x6b2068;
      local_1284 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1014,local_14a4,
                             &local_127c,0x10);
    }
  }
  else {
    local_12f4 = (char *)&local_1014;
    local_14b8 = (int)&local_1014 + 1;
    do {
      local_12b7 = *local_12f4;
      local_12f4 = local_12f4 + 1;
    } while (local_12b7 != '\0');
    local_14b4 = (int)local_12f4 - local_14b8;
    pfStack_1580 = (function<void___cdecl(void)> *)0x6b1f72;
    local_1284 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1014,local_14b4,&local_127c,
                           0x10);
  }
  local_127c.top = local_127c.top + 1 + local_1284;
  cVar1 = FUN_00427c60();
  if (cVar1 == '\0') {
    cVar1 = FUN_00427c60();
    if (cVar1 == '\0') {
      cVar1 = FUN_00427c60();
      if (cVar1 != '\0') {
        local_1014 = local_1014 & 0xffffff00;
      }
    }
    else {
      local_1014 = 0xa8b7dece;
      local_1010 = 0xfdb3bec9;
      local_100c = 0;
    }
  }
  else {
    local_1014 = 0xa8b7dece;
    local_1010 = 0xd7d2bbbd;
    local_100c = 0;
  }
  local_134c = &DAT_007407ea;
  local_1348 = (byte *)&local_1014;
  do {
    local_12bf = *local_1348;
    bVar9 = local_12bf < *local_134c;
    if (local_12bf != *local_134c) {
LAB_006b238f:
      local_1368 = -(uint)bVar9 | 1;
      goto LAB_006b239a;
    }
    if (local_12bf == 0) break;
    local_12c0 = local_1348[1];
    bVar9 = local_12c0 < local_134c[1];
    if (local_12c0 != local_134c[1]) goto LAB_006b238f;
    local_1348 = local_1348 + 2;
    local_134c = local_134c + 2;
  } while (local_12c0 != 0);
  local_1368 = 0;
LAB_006b239a:
  local_148c = local_1368;
  if (local_1368 == 0) {
    local_127c.top = local_127c.top - (local_1284 + 1);
  }
  else {
    local_1304 = (char *)&local_1014;
    local_137c = (int)&local_1014 + 1;
    do {
      local_12c1 = *local_1304;
      local_1304 = local_1304 + 1;
    } while (local_12c1 != '\0');
    local_1380 = (int)local_1304 - local_137c;
    pfStack_1580 = (function<void___cdecl(void)> *)0x6b2421;
    local_1284 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1014,local_1380,&local_127c,
                           0x12);
  }
  local_127c.top = local_127c.top + 1 + local_1284;
  SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xffffff);
  FUN_00414e80();
  local_1308 = (char *)&local_1014;
  local_1384 = (int)&local_1014 + 1;
  do {
    local_12c2 = *local_1308;
    local_1308 = local_1308 + 1;
  } while (local_12c2 != '\0');
  local_1388 = (int)local_1308 - local_1384;
  pfStack_1580 = (function<void___cdecl(void)> *)0x6b24fd;
  local_1284 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1014,local_1388,&local_127c,
                         0x12);
  if (1 < *(int *)(local_1280 + 0xa8)) {
    local_127c.top = local_127c.top + 1 + local_1284;
    iVar2 = game_get_player_or_session_blob();
    if (*(int *)(iVar2 + 0x1fc) < *(int *)(local_1280 + 0xa8)) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xff0000);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xffffff);
    }
    FUN_00414e80();
    local_130c = (char *)&local_1014;
    local_138c = (int)&local_1014 + 1;
    do {
      local_12c3 = *local_130c;
      local_130c = local_130c + 1;
    } while (local_12c3 != '\0');
    local_1390 = (int)local_130c - local_138c;
    pfStack_1580 = (function<void___cdecl(void)> *)0x6b2604;
    local_1284 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1014,local_1390,&local_127c,
                           0x10);
  }
  iVar2 = FUN_00401a90();
  if ((((iVar2 != 0) || (0 < *(int *)(local_1280 + 0x1f0))) || (0 < *(int *)(local_1280 + 0x144)))
     || ((0 < *(int *)(local_1280 + 0x17c) || (iVar2 = FUN_0048ae70(), iVar2 != 0)))) {
    local_127c.top = local_127c.top + 1 + local_1284;
    FUN_00414e80();
    local_1310 = (char *)&local_1014;
    local_1394 = (int)&local_1014 + 1;
    do {
      local_12c4 = *local_1310;
      local_1310 = local_1310 + 1;
    } while (local_12c4 != '\0');
    local_1398 = (int)local_1310 - local_1394;
    pfStack_1580 = (function<void___cdecl(void)> *)0x6b2706;
    local_1284 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1014,local_1398,&local_127c,
                           0x10);
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    local_127c.top = local_127c.top + 1 + local_1284;
  }
  if (0 < *(int *)(local_1280 + 0x144)) {
    local_127c.top = local_127c.top + 1 + local_1284;
    cVar1 = FUN_00427c60();
    if (cVar1 == '\0') {
      cVar1 = FUN_00427c60();
      if (cVar1 == '\0') {
        cVar1 = FUN_00427c60();
        if (cVar1 != '\0') {
          FUN_00414e80();
        }
      }
      else {
        FUN_00414e80();
      }
    }
    else {
      FUN_00414e80();
    }
    local_1314 = (char *)&local_1014;
    local_139c = (int)&local_1014 + 1;
    do {
      local_12c5 = *local_1314;
      local_1314 = local_1314 + 1;
    } while (local_12c5 != '\0');
    local_13a0 = (int)local_1314 - local_139c;
    pfStack_1580 = (function<void___cdecl(void)> *)0x6b289d;
    local_1284 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1014,local_13a0,&local_127c,
                           0x10);
  }
  if (0 < *(int *)(local_1280 + 0x17c)) {
    local_127c.top = local_127c.top + 1 + local_1284;
    cVar1 = FUN_00427c60();
    if (cVar1 == '\0') {
      cVar1 = FUN_00427c60();
      if (cVar1 == '\0') {
        cVar1 = FUN_00427c60();
        if (cVar1 != '\0') {
          FUN_00414e80();
        }
      }
      else {
        FUN_00414e80();
      }
    }
    else {
      FUN_00414e80();
    }
    local_1318 = (char *)&local_1014;
    local_13a4 = (int)&local_1014 + 1;
    do {
      local_12c6 = *local_1318;
      local_1318 = local_1318 + 1;
    } while (local_12c6 != '\0');
    local_13a8 = (int)local_1318 - local_13a4;
    pfStack_1580 = (function<void___cdecl(void)> *)0x6b2a0a;
    local_1284 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1014,local_13a8,&local_127c,
                           0x10);
  }
  iVar2 = FUN_0048ae70();
  if (iVar2 != 0) {
    local_127c.top = local_127c.top + 1 + local_1284;
    local_13b0 = FUN_0040a850();
    local_8 = 0;
    local_13ac = local_13b0;
    local_13b8 = FUN_005ee490();
    local_8._0_1_ = 1;
    local_13b4 = local_13b8;
    FUN_005822e0();
    local_8._0_1_ = 3;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1104);
    local_8 = CONCAT31(local_8._1_3_,4);
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_10ec);
    local_12a0 = (function<void___cdecl(void)> *)0x0;
    while (pfVar4 = (function<void___cdecl(void)> *)FUN_0048ae70(), local_12a0 < pfVar4) {
      if (0 < (int)local_12a0) {
        FUN_005ebf40();
      }
      FUN_00489f00();
      cVar1 = FUN_00427c60();
      if (cVar1 == '\0') {
        FUN_00489f00();
        cVar1 = FUN_00427c60();
        if (cVar1 == '\0') {
          FUN_00489f00();
          cVar1 = FUN_00427c60();
          if (cVar1 != '\0') {
            FUN_00489f00();
            local_1408 = FUN_0040a850();
            local_8._0_1_ = 0xe;
            local_14f8 = (undefined1 *)&pfStack_1588;
            pfStack_158c = local_12a0;
            pfStack_1590 = (function<void___cdecl(void)> *)0x6b2f14;
            local_1404 = local_1408;
            iVar2 = FUN_00489f00();
            pfStack_158c = (function<void___cdecl(void)> *)(iVar2 + 0x1c);
            pfStack_1590 = (function<void___cdecl(void)> *)0x6b2f1f;
            FUN_00405520();
            pfStack_158c = local_1074;
            pfStack_1590 = (function<void___cdecl(void)> *)0x6b2f2b;
            local_1410 = FUN_004c7e10();
            local_8._0_1_ = 0xf;
            local_140c = local_1410;
            local_1418 = FUN_005822e0();
            local_8._0_1_ = 0x10;
            local_1414 = local_1418;
            local_1420 = FUN_00405cf0();
            local_8._0_1_ = 0x11;
            local_141c = local_1420;
            FUN_0051a160();
            local_8._0_1_ = 0x10;
            std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_11c4);
            local_8._0_1_ = 0xf;
            std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_11dc);
            local_8._0_1_ = 0xe;
            std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1074);
            local_8 = CONCAT31(local_8._1_3_,4);
            std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_108c);
          }
        }
        else {
          FUN_00489f00();
          local_13e8 = FUN_0040a850();
          local_8._0_1_ = 10;
          local_14f4 = (undefined1 *)&pfStack_1588;
          pfStack_158c = local_12a0;
          pfStack_1590 = (function<void___cdecl(void)> *)0x6b2d97;
          local_13e4 = local_13e8;
          iVar2 = FUN_00489f00();
          pfStack_158c = (function<void___cdecl(void)> *)(iVar2 + 0x1c);
          pfStack_1590 = (function<void___cdecl(void)> *)0x6b2da2;
          FUN_00405520();
          pfStack_158c = local_120c;
          pfStack_1590 = (function<void___cdecl(void)> *)0x6b2dae;
          local_13f0 = FUN_004c7e10();
          local_8._0_1_ = 0xb;
          local_13ec = local_13f0;
          local_13f8 = FUN_005822e0();
          local_8._0_1_ = 0xc;
          local_13f4 = local_13f8;
          local_1400 = FUN_00405cf0();
          local_8._0_1_ = 0xd;
          local_13fc = local_1400;
          FUN_0051a160();
          local_8._0_1_ = 0xc;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_123c);
          local_8._0_1_ = 0xb;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1224);
          local_8._0_1_ = 10;
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_120c);
          local_8 = CONCAT31(local_8._1_3_,4);
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_11f4);
        }
      }
      else {
        FUN_00489f00();
        local_13c0 = FUN_0040a850();
        local_8._0_1_ = 5;
        local_1530 = (undefined1 *)&pfStack_158c;
        pfStack_1590 = local_12a0;
        uStack_1594 = 0x6b2bdf;
        local_13bc = local_13c0;
        iVar2 = FUN_00489f00();
        pfStack_1590 = (function<void___cdecl(void)> *)(iVar2 + 0x1c);
        uStack_1594 = 0x6b2bea;
        FUN_00405520();
        pfStack_1590 = local_126c;
        uStack_1594 = 0x6b2bf6;
        local_13c8 = FUN_004c7e10();
        local_8._0_1_ = 6;
        pfStack_1580 = (function<void___cdecl(void)> *)0x6b2c22;
        local_13c4 = local_13c8;
        local_13d0 = FUN_005822e0();
        local_8._0_1_ = 7;
        local_13cc = local_13d0;
        local_13d8 = FUN_00405cf0();
        local_8._0_1_ = 8;
        local_13d4 = local_13d8;
        local_13e0 = FUN_005822e0();
        local_8._0_1_ = 9;
        local_13dc = local_13e0;
        FUN_0051a160();
        local_8._0_1_ = 8;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_10d4);
        local_8._0_1_ = 7;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_10bc);
        local_8._0_1_ = 6;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_10a4);
        local_8._0_1_ = 5;
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_126c);
        local_8 = CONCAT31(local_8._1_3_,4);
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1254);
      }
      local_12a0 = local_12a0 + 1;
    }
    FUN_005ebf40();
    npk_get_relative_res_path();
    FUN_00414e80();
    local_131c = (char *)&local_1014;
    local_1424 = (int)&local_1014 + 1;
    do {
      local_12c7 = *local_131c;
      local_131c = local_131c + 1;
    } while (local_12c7 != '\0');
    local_1428 = (int)local_131c - local_1424;
    pfStack_1580 = (function<void___cdecl(void)> *)0x6b3092;
    local_1284 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1014,local_1428,&local_127c,
                           0x10);
    local_8 = 0xffffffff;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_102c);
  }
  if (*(int *)(local_1280 + 0x1f0) != 0) {
    local_127c.top = local_127c.top + 1 + local_1284;
    local_14fc = (undefined1 *)&pfStack_1584;
    pfStack_1588 = (function<void___cdecl(void)> *)(local_1280 + 0x1d8);
    pfStack_158c = (function<void___cdecl(void)> *)0x6b30fd;
    FUN_00405520();
    pfStack_1588 = local_11ac;
    pfStack_158c = (function<void___cdecl(void)> *)0x6b3109;
    local_1430 = FUN_004c7e10();
    local_142c = local_1430;
    npk_get_relative_res_path();
    FUN_00414e80();
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_11ac);
    local_1320 = (char *)&local_1014;
    local_1434 = (int)&local_1014 + 1;
    do {
      local_12c8 = *local_1320;
      local_1320 = local_1320 + 1;
    } while (local_12c8 != '\0');
    local_1438 = (int)local_1320 - local_1434;
    pfStack_1580 = (function<void___cdecl(void)> *)0x6b31bb;
    local_1284 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1014,local_1438,&local_127c,
                           0x10);
  }
  iVar2 = FUN_00401a90();
  if (iVar2 != 0) {
    local_127c.top = local_127c.top + 1 + local_1284;
    cVar1 = FUN_00427c60();
    if (cVar1 == '\0') {
      cVar1 = FUN_00427c60();
      if (cVar1 == '\0') {
        cVar1 = FUN_00427c60();
        if (cVar1 != '\0') {
          piVar5 = (int *)game_get_flag_object_01a70();
          if (*piVar5 < 100) {
            game_get_flag_object_01a70();
            FUN_00414e80();
          }
          else {
            FUN_00414e80();
          }
        }
      }
      else {
        piVar5 = (int *)game_get_flag_object_01a70();
        if (*piVar5 < 100) {
          game_get_flag_object_01a70();
          FUN_00414e80();
        }
        else {
          FUN_00414e80();
        }
      }
    }
    else {
      piVar5 = (int *)game_get_flag_object_01a70();
      if (*piVar5 < 100) {
        game_get_flag_object_01a70();
        FUN_00414e80();
      }
      else {
        FUN_00414e80();
      }
    }
    local_1324 = (char *)&local_1014;
    local_143c = (int)&local_1014 + 1;
    do {
      local_12c9 = *local_1324;
      local_1324 = local_1324 + 1;
    } while (local_12c9 != '\0');
    local_1440 = (int)local_1324 - local_143c;
    pfStack_1580 = (function<void___cdecl(void)> *)0x6b33d3;
    local_1284 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1014,local_1440,&local_127c,
                           0x10);
  }
  cVar1 = FUN_00427c60();
  if ((cVar1 != '\0') && (uVar6 = FUN_00401a90(), 6 < uVar6)) {
    local_127c.top = local_127c.top + 1 + local_1284;
    local_1288 = 1;
    while ((uVar6 = FUN_00401a90(), local_1288 < uVar6 &&
           (iVar2 = FUN_00401a90(), local_1288 != iVar2 - 4U))) {
      local_127c.top = local_127c.top + 1 + local_1284;
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xd85050);
      piVar5 = (int *)game_get_flag_object_01a70();
      if (*piVar5 == 0) {
        piVar5 = (int *)game_get_flag_object_01a70();
        if (*piVar5 <= *(int *)(param_2 + 0xac8)) {
          SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xffffff);
        }
        pfStack_1580 = (function<void___cdecl(void)> *)0x6b352e;
        local_1284 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&DAT_007778d8,4,&local_127c,0x10);
        game_get_flag_object_01a70();
        FUN_00414e80();
        local_1328 = (char *)&local_1014;
        local_1444 = (int)&local_1014 + 1;
        do {
          local_12ca = *local_1328;
          local_1328 = local_1328 + 1;
        } while (local_12ca != '\0');
        local_1448 = (int)local_1328 - local_1444;
        pfStack_1580 = (function<void___cdecl(void)> *)0x6b35e1;
        local_1284 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1014,local_1448,
                               &local_127c,0x12);
      }
      else {
        game_get_flag_object_01a70();
        iVar2 = FUN_006c79e0();
        if (iVar2 == 0) {
          local_136c = 0;
        }
        else {
          game_get_flag_object_01a70();
          iVar2 = FUN_006c79e0();
          local_136c = *(int *)(iVar2 + 8);
        }
        piVar5 = (int *)game_get_flag_object_01a70();
        if (local_136c < *piVar5) {
          SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xd85050);
        }
        else {
          game_get_flag_object_01a70();
          iVar2 = game_loop_helper_cd6d0();
          if (*(int *)(iVar2 + 0x94) == 0) {
            SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xffffff);
          }
          else {
            game_get_flag_object_01a70();
            iVar2 = game_loop_helper_cd6d0();
            if (*(int *)(iVar2 + 0x94) == 1) {
              SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
            }
            else {
              game_get_flag_object_01a70();
              iVar2 = game_loop_helper_cd6d0();
              if (*(int *)(iVar2 + 0x94) == 2) {
                SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xb36bff);
              }
              else {
                game_get_flag_object_01a70();
                iVar2 = game_loop_helper_cd6d0();
                if (*(int *)(iVar2 + 0x94) == 3) {
                  SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xff00f0);
                }
                else {
                  game_get_flag_object_01a70();
                  iVar2 = game_loop_helper_cd6d0();
                  if (*(int *)(iVar2 + 0x94) == 4) {
                    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xffb100);
                  }
                }
              }
            }
          }
        }
        game_get_flag_object_01a70();
        game_loop_helper_cd6d0();
        local_132c = (char *)npk_get_relative_res_path();
        local_144c = local_132c + 1;
        do {
          local_12d5 = *local_132c;
          local_132c = local_132c + 1;
        } while (local_12d5 != '\0');
        iVar2 = (int)local_132c - (int)local_144c;
        ptVar10 = &local_127c;
        UVar11 = 0x10;
        local_1450 = iVar2;
        game_get_flag_object_01a70();
        game_loop_helper_cd6d0();
        pCVar3 = (LPCSTR)npk_get_relative_res_path();
        pfStack_1580 = (function<void___cdecl(void)> *)0x6b38bd;
        local_1284 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),pCVar3,iVar2,ptVar10,UVar11);
        game_get_flag_object_01a70();
        iVar2 = FUN_006c79e0();
        if (iVar2 == 0) {
          local_1370 = 0;
        }
        else {
          game_get_flag_object_01a70();
          iVar2 = FUN_006c79e0();
          local_1370 = *(undefined4 *)(iVar2 + 8);
        }
        game_get_flag_object_01a70();
        FUN_00414e80();
        local_1330 = (char *)&local_1014;
        local_1454 = (int)&local_1014 + 1;
        do {
          local_12cb = *local_1330;
          local_1330 = local_1330 + 1;
        } while (local_12cb != '\0');
        local_1458 = (int)local_1330 - local_1454;
        pfStack_1580 = (function<void___cdecl(void)> *)0x6b39d5;
        local_1284 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1014,local_1458,
                               &local_127c,0x12);
      }
      local_1288 = local_1288 + 2;
    }
  }
  cVar1 = FUN_00427e30();
  if (cVar1 != '\0') {
    FUN_004cb530();
    local_8 = 0x12;
    npk_get_relative_res_path();
    FUN_00414e80();
    FUN_004054a0();
    cVar1 = FUN_0048ce70();
    if (cVar1 != '\0') {
      local_127c.top = local_127c.top + local_1284 * 2 + 2;
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
      npk_get_relative_res_path();
      FUN_00414e80();
      local_1334 = (char *)&local_1014;
      local_14b0 = (int)&local_1014 + 1;
      do {
        local_12cc = *local_1334;
        local_1334 = local_1334 + 1;
      } while (local_12cc != '\0');
      local_1460 = (int)local_1334 - local_14b0;
      pfStack_1580 = (function<void___cdecl(void)> *)0x6b3b41;
      local_1284 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1014,local_1460,
                             &local_127c,0x10);
    }
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1044);
    local_8 = 0xffffffff;
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_105c);
  }
  cVar1 = FUN_00427e30();
  if (cVar1 != '\0') {
    local_127c.top = local_127c.top + local_1284 * 2 + 2;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    npk_get_relative_res_path();
    FUN_00414e80();
    local_1338 = (char *)&local_1014;
    local_1464 = (int)&local_1014 + 1;
    do {
      local_12cd = *local_1338;
      local_1338 = local_1338 + 1;
    } while (local_12cd != '\0');
    local_1468 = (int)local_1338 - local_1464;
    pfStack_1580 = (function<void___cdecl(void)> *)0x6b3c57;
    local_1284 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1014,local_1468,&local_127c,
                           0x10);
  }
  cVar1 = FUN_00427e30();
  if (cVar1 != '\0') {
    local_127c.top = local_127c.top + local_1284 * 2 + 2;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
    npk_get_relative_res_path();
    FUN_00414e80();
    local_133c = (char *)&local_1014;
    local_146c = (int)&local_1014 + 1;
    do {
      local_12ce = *local_133c;
      local_133c = local_133c + 1;
    } while (local_12ce != '\0');
    local_1470 = (int)local_133c - local_146c;
    pfStack_1580 = (function<void___cdecl(void)> *)0x6b3d4f;
    local_1284 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1014,local_1470,&local_127c,
                           0x10);
  }
  local_127c.top = local_127c.top + local_1284 + 7;
  local_1474 = SelectObject(*(HDC *)(DAT_007ca1a4 + 0x1c),local_1374);
  local_1500 = GetBitmapBits(local_1474,local_12d4,local_129c);
  for (local_12b0 = 0; local_12b0 < local_12d4 >> 2; local_12b0 = local_12b0 + 1) {
    if (*(int *)(local_129c + local_12b0 * 4) != 0) {
      *(uint *)(local_129c + local_12b0 * 4) =
           (*(uint *)(local_129c + local_12b0 * 4) & 0xff0000) >> 0x10 |
           (*(uint *)(local_129c + local_12b0 * 4) & 0xff) << 0x10 |
           *(uint *)(local_129c + local_12b0 * 4) & 0xff00ff00;
    }
  }
  for (local_128c = 0; local_128c < local_12d4 >> 2; local_128c = local_128c + 1) {
    local_1290 = local_129c;
    if ((*(uint *)(local_129c + local_128c * 4) & 0xffffff) != 0) {
      if (*(int *)(local_129c + (local_128c - (int)local_1294) * 4 + -4) == local_12a8) {
        *(undefined4 *)(local_129c + (local_128c - (int)local_1294) * 4 + -4) = local_12ac;
      }
      if (*(int *)(local_129c + (local_128c - (int)local_1294) * 4 + 4) == local_12a8) {
        *(undefined4 *)(local_129c + (local_128c - (int)local_1294) * 4 + 4) = local_12ac;
      }
      if (*(int *)(local_129c + (local_128c - (int)local_1294) * 4) == local_12a8) {
        *(undefined4 *)(local_129c + (local_128c - (int)local_1294) * 4) = local_12ac;
      }
      if (*(int *)(local_129c + local_128c * 4 + -4) == local_12a8) {
        *(undefined4 *)(local_129c + local_128c * 4 + -4) = local_12ac;
      }
      if (*(int *)(local_129c + local_128c * 4 + 4) == local_12a8) {
        *(undefined4 *)(local_129c + local_128c * 4 + 4) = local_12ac;
      }
      if (*(int *)(local_129c + (int)(local_1294 + local_128c) * 4 + -4) == local_12a8) {
        *(undefined4 *)(local_129c + (int)(local_1294 + local_128c) * 4 + -4) = local_12ac;
      }
      if (*(int *)(local_129c + (int)(local_1294 + local_128c) * 4) == local_12a8) {
        *(undefined4 *)(local_129c + (int)(local_1294 + local_128c) * 4) = local_12ac;
      }
      if (*(int *)(local_129c + (int)(local_1294 + local_128c) * 4 + 4) == local_12a8) {
        *(undefined4 *)(local_129c + (int)(local_1294 + local_128c) * 4 + 4) = local_12ac;
      }
    }
  }
  for (local_12e0 = 0; local_12e0 < local_12d4 >> 2; local_12e0 = local_12e0 + 1) {
    if (*(int *)(local_129c + local_12e0 * 4) != 0) {
      *(uint *)(local_129c + local_12e0 * 4) = *(uint *)(local_129c + local_12e0 * 4) | 0xff000000;
    }
  }
  local_1478 = DeleteObject(local_1360);
  local_1478 = DeleteObject(local_1374);
  pfStack_1580 = (function<void___cdecl(void)> *)local_127c.top;
  pfStack_1584 = local_1294;
  pfStack_1588 = *(function<void___cdecl(void)> **)(DAT_007ca1a4 + 4);
  pfStack_158c = (function<void___cdecl(void)> *)0x6b411e;
  local_1354 = D3DXCreateTexture();
  pfStack_1580 = (function<void___cdecl(void)> *)0x6b4151;
  local_1354 = (**(code **)(**(int **)(local_1298 + 0xe8) + 0x4c))();
  pfStack_1580 = (function<void___cdecl(void)> *)((int)local_1294 * local_127c.top * 4);
  pfStack_1584 = local_129c;
  pfStack_1588 = local_1484;
  pfStack_158c = (function<void___cdecl(void)> *)0x6b417b;
  FUN_006e6bd0();
  pfStack_1580 = local_129c;
  pfStack_1584 = (function<void___cdecl(void)> *)0x6b418a;
  FUN_006f1902();
  pfStack_1580 = (function<void___cdecl(void)> *)0x0;
  pfStack_1584 = *(function<void___cdecl(void)> **)(local_1298 + 0xe8);
  pfStack_1588 = (function<void___cdecl(void)> *)0x6b41af;
  local_1354 = (**(code **)(**(int **)(local_1298 + 0xe8) + 0x50))();
  pfStack_1588 = (function<void___cdecl(void)> *)0x3;
  pfStack_158c = (function<void___cdecl(void)> *)(local_127c.top / 0xd);
  pfStack_1590 = (function<void___cdecl(void)> *)0x10;
  local_1504 = (undefined1 *)&uStack_15a8;
  FUN_004054a0("ceshiceshi");
  local_147c = (undefined4 *)d3d9_create_texture_004b7f20(local_155c);
  puVar7 = local_147c;
  puVar8 = (undefined4 *)(local_1298 + 0xc0);
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  pfStack_1588 = (function<void___cdecl(void)> *)0x0;
  pfStack_158c = (function<void___cdecl(void)> *)0x0;
  pfStack_1590 = (function<void___cdecl(void)> *)local_1488;
  uStack_1594 = 0;
  uStack_1598 = *(undefined4 *)(local_1298 + 0xc0);
  pcStack_159c = (char *)0x6b423b;
  local_1354 = (**(code **)(**(int **)(local_1298 + 0xc0) + 0x4c))();
  pcStack_159c = "sprite/interface/popup.img";
  uStack_15a0 = 0x6b4251;
  local_1364 = FUN_005855f0();
  for (local_1350 = 0; local_1350 < 0x10; local_1350 = local_1350 + 1) {
    pcStack_159c = *(char **)(*(int *)(local_1364 + 0x40) + 0x1690);
    uStack_15a0 = *(undefined4 *)(*(int *)(local_1364 + 0x40) + 0x16a4);
    pfStack_15a4 = local_1484 +
                   local_1350 * 0x30 + (local_1378 + 6) * *(int *)(local_1298 + 0xcc) * 4 + 0x18;
    uStack_15a8 = 0x6b42dd;
    FUN_006e6bd0();
  }
  pcStack_159c = (char *)local_1364;
  uStack_15a0 = 0x6b42f4;
  FUN_005856e0();
  pcStack_159c = (char *)0x0;
  uStack_15a0 = *(undefined4 *)(local_1298 + 0xc0);
  pfStack_15a4 = (function<void___cdecl(void)> *)0x6b4316;
  (**(code **)(**(int **)(local_1298 + 0xc0) + 0x50))();
  puVar7 = (undefined4 *)(local_1298 + 0xc0);
  puVar8 = param_1;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  ExceptionList = local_10;
  return param_1;
}


/* ==== 006b4360  d3d9_create_texture_006b4360  size=29508 ==== */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * d3d9_create_texture_006b4360(undefined4 *param_1)

{
  char cVar1;
  LPCSTR lpchText;
  float *pfVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  bool bVar6;
  float10 fVar7;
  undefined4 uStack_1bf0;
  function<void___cdecl(void)> *pfStack_1bec;
  undefined4 uStack_1be8;
  char *pcStack_1be4;
  undefined4 uStack_1be0;
  undefined4 uStack_1bdc;
  undefined1 *puStack_1bd8;
  int iStack_1bd4;
  function<void___cdecl(void)> *pfStack_1bd0;
  function<void___cdecl(void)> *pfStack_1bcc;
  function<void___cdecl(void)> *pfStack_1bc8;
  tagRECT *lprc;
  UINT format;
  undefined1 local_1ba8 [40];
  undefined1 *local_1b80;
  undefined1 *local_1b7c;
  undefined1 *local_1b78;
  undefined1 *local_1b74;
  char *local_1b70;
  undefined1 *local_1b6c;
  char *local_1b68;
  undefined4 local_1b64;
  char *local_1b60;
  char *local_1b5c;
  undefined1 *local_1b58;
  char *local_1b54;
  HGDIOBJ local_1b50;
  LONG local_1b4c;
  undefined4 local_1b48;
  undefined4 local_1b44;
  undefined1 *local_1b40;
  LONG local_1b3c;
  undefined1 *local_1b38;
  undefined1 *local_1b34;
  undefined1 *local_1b30;
  undefined4 local_1b2c;
  int local_1b28;
  int local_1b24;
  undefined4 local_1b20;
  undefined4 local_1b1c;
  int local_1b18;
  int local_1b14;
  undefined4 local_1b10;
  undefined4 local_1b0c;
  int local_1b08;
  int local_1b04;
  int local_1b00;
  char *local_1afc;
  int local_1af8;
  undefined1 local_1af4 [4];
  function<void___cdecl(void)> *local_1af0;
  int local_1aec;
  undefined4 *local_1ae8;
  BOOL local_1ae4;
  HBITMAP local_1ae0;
  int local_1adc;
  int local_1ad8;
  int local_1ad4;
  int local_1ad0;
  int local_1acc;
  int local_1ac8;
  int local_1ac4;
  int local_1ac0;
  int local_1abc;
  int local_1ab8;
  int local_1ab4;
  int local_1ab0;
  int local_1aac;
  int local_1aa8;
  int local_1aa4;
  int local_1aa0;
  int local_1a9c;
  int local_1a98;
  int local_1a94;
  int local_1a90;
  int local_1a8c;
  int local_1a88;
  int local_1a84;
  int local_1a80;
  int local_1a7c;
  int local_1a78;
  int local_1a74;
  int local_1a70;
  int local_1a6c;
  int local_1a68;
  int local_1a64;
  int local_1a60;
  int local_1a5c;
  int local_1a58;
  undefined4 local_1a54;
  undefined4 local_1a50;
  int local_1a4c;
  int local_1a48;
  undefined4 local_1a44;
  undefined4 local_1a40;
  int local_1a3c;
  int local_1a38;
  undefined4 local_1a34;
  undefined4 local_1a30;
  int local_1a2c;
  int local_1a28;
  int local_1a24;
  int local_1a20;
  int local_1a1c;
  int local_1a18;
  int local_1a14;
  int local_1a10;
  int local_1a0c;
  int local_1a08;
  int local_1a04;
  int local_1a00;
  int local_19fc;
  int local_19f8;
  int local_19f4;
  int local_19f0;
  int local_19ec;
  int local_19e8;
  int local_19e4;
  int local_19e0;
  int local_19dc;
  int local_19d8;
  int local_19d4;
  int local_19d0;
  int local_19cc;
  int local_19c8;
  int local_19c4;
  int local_19c0;
  int local_19bc;
  int local_19b8;
  int local_19b4;
  int local_19b0;
  int local_19ac;
  int local_19a8;
  int local_19a4;
  int local_19a0;
  int local_199c;
  int local_1998;
  int local_1994;
  int local_1990;
  int local_198c;
  int local_1988;
  int local_1984;
  int local_1980;
  int local_197c;
  int local_1978;
  int local_1974;
  int local_1970;
  int local_196c;
  int local_1968;
  int local_1964;
  int local_1960;
  int local_195c;
  int local_1958;
  int local_1954;
  int local_1950;
  int local_194c;
  int local_1948;
  int local_1944;
  int local_1940;
  int local_193c;
  int local_1938;
  int local_1934;
  int local_1930;
  int local_192c;
  int local_1928;
  int local_1924;
  int local_1920;
  int local_191c;
  int local_1918;
  int local_1914;
  int local_1910;
  int local_190c;
  int local_1908;
  int local_1904;
  int local_1900;
  int local_18fc;
  int local_18f8;
  int local_18f4;
  int local_18f0;
  int local_18ec;
  int local_18e8;
  int local_18e4;
  int local_18e0;
  int local_18dc;
  int local_18d8;
  int local_18d4;
  int local_18d0;
  int local_18cc;
  int local_18c8;
  int local_18c4;
  int local_18c0;
  int local_18bc;
  int local_18b8;
  int local_18b4;
  int local_18b0;
  int local_18ac;
  int local_18a8;
  int local_18a4;
  undefined4 local_18a0;
  int local_189c;
  int local_1898;
  int local_1894;
  int local_1890;
  undefined4 local_188c;
  int local_1888;
  int local_1884;
  int local_1880;
  int local_187c;
  undefined4 local_1878;
  undefined4 local_1874;
  int local_1870;
  int local_186c;
  undefined4 local_1868;
  undefined4 local_1864;
  undefined4 local_1860;
  int local_185c;
  int local_1858;
  int local_1854;
  int local_1850;
  uint local_184c;
  int local_1848;
  int local_1844;
  int local_1840;
  int local_183c;
  float local_1838;
  float local_1834;
  float local_1830;
  float local_182c;
  int local_1828;
  int local_1824;
  float local_1820;
  float local_181c;
  float local_1818;
  float local_1814;
  undefined4 local_1810;
  int local_180c;
  int local_1808;
  undefined4 local_1804;
  undefined4 local_1800;
  int local_17fc;
  int local_17f8;
  undefined4 local_17f4;
  undefined4 local_17f0;
  int local_17ec;
  int local_17e8;
  undefined *local_17e4;
  undefined *local_17e0;
  undefined *local_17dc;
  undefined *local_17d8;
  undefined *local_17d4;
  undefined *local_17d0;
  undefined *local_17cc;
  undefined *local_17c8;
  undefined *local_17c4;
  undefined *local_17c0;
  undefined *local_17bc;
  undefined *local_17b8;
  undefined *local_17b4;
  undefined *local_17b0;
  uint local_17ac;
  int local_17a8;
  HBITMAP local_17a4;
  int local_17a0;
  undefined *local_179c;
  undefined *local_1798;
  undefined *local_1794;
  undefined *local_1790;
  undefined *local_178c;
  undefined *local_1788;
  undefined *local_1784;
  undefined *local_1780;
  undefined *local_177c;
  undefined *local_1778;
  undefined *local_1774;
  undefined *local_1770;
  undefined *local_176c;
  undefined *local_1768;
  undefined *local_1764;
  undefined *local_1760;
  undefined *local_175c;
  undefined *local_1758;
  int local_1754;
  char *local_1750;
  char *local_174c;
  char *local_1748;
  int local_1744;
  HBITMAP local_1740;
  int local_173c;
  undefined4 local_1738;
  undefined4 local_1734;
  float local_1730;
  float local_172c;
  float local_1728;
  float local_1724;
  char *local_1720;
  char *local_171c;
  uint local_1718;
  undefined4 local_1714;
  uint local_1710;
  int local_170c;
  byte *local_1708;
  byte *local_1704;
  char *local_1700;
  char *local_16fc;
  char *local_16f8;
  char *local_16f4;
  char *local_16f0;
  char *local_16ec;
  char *local_16e8;
  char *local_16e4;
  char *local_16e0;
  char *local_16dc;
  undefined4 local_16d8;
  char *local_16d4;
  char *local_16d0;
  char *local_16cc;
  char *local_16c8;
  char *local_16c4;
  char *local_16c0;
  char *local_16bc;
  char *local_16b8;
  char *local_16b4;
  char *local_16b0;
  char *local_16ac;
  char *local_16a8;
  char *local_16a4;
  char *local_16a0;
  char *local_169c;
  char *local_1698;
  char *local_1694;
  char *local_1690;
  char *local_168c;
  char *local_1688;
  char *local_1684;
  char *local_1680;
  char *local_167c;
  char *local_1678;
  char *local_1674;
  char *local_1670;
  char *local_166c;
  char *local_1668;
  char *local_1664;
  char *local_1660;
  char *local_165c;
  char *local_1658;
  char *local_1654;
  char *local_1650;
  char *local_164c;
  char *local_1648;
  char *local_1644;
  char *local_1640;
  char *local_163c;
  char *local_1638;
  char *local_1634;
  char *local_1630;
  char *local_162c;
  char *local_1628;
  char *local_1624;
  char *local_1620;
  char *local_161c;
  char *local_1618;
  char *local_1614;
  char *local_1610;
  char *local_160c;
  char *local_1608;
  char *local_1604;
  char *local_1600;
  char *local_15fc;
  char *local_15f8;
  char *local_15f4;
  char *local_15f0;
  char *local_15ec;
  char *local_15e8;
  char *local_15e4;
  char *local_15e0;
  char *local_15dc;
  char *local_15d8;
  char *local_15d4;
  char *local_15d0;
  char *local_15cc;
  char *local_15c8;
  char *local_15c4;
  char *local_15c0;
  char *local_15bc;
  char *local_15b8;
  char *local_15b4;
  char *local_15b0;
  char *local_15ac;
  char *local_15a8;
  char *local_15a4;
  char *local_15a0;
  char *local_159c;
  char *local_1598;
  char *local_1594;
  uint local_1590;
  undefined *local_158c;
  char local_1587;
  char local_1586;
  char local_1585;
  char local_1584;
  char local_1583;
  char local_1582;
  char local_1581;
  char local_1580;
  char local_157f;
  char local_157e;
  char local_157d;
  char local_157c;
  char local_157b;
  char local_157a;
  char local_1579;
  uint local_1578;
  byte local_1571;
  byte local_1570;
  char local_156f;
  char local_156e;
  char local_156d;
  char local_156c;
  char local_156b;
  char local_156a;
  char local_1569;
  char local_1568;
  char local_1567;
  char local_1566;
  char local_1565;
  char local_1564;
  char local_1563;
  char local_1562;
  char local_1561;
  char local_1560;
  char local_155f;
  char local_155e;
  char local_155d;
  char local_155c;
  char local_155b;
  char local_155a;
  char local_1559;
  char local_1558;
  char local_1557;
  char local_1556;
  char local_1555;
  char local_1554;
  char local_1553;
  char local_1552;
  char local_1551;
  char local_1550;
  char local_154f;
  char local_154e;
  char local_154d;
  char local_154c;
  char local_154b;
  char local_154a;
  char local_1549;
  char local_1548;
  char local_1547;
  char local_1546;
  char local_1545;
  char local_1544;
  char local_1543;
  char local_1542;
  char local_1541;
  char local_1540;
  char local_153f;
  char local_153e;
  char local_153d;
  char local_153c;
  char local_153b;
  char local_153a;
  char local_1539;
  char local_1538;
  char local_1537;
  char local_1536;
  char local_1535;
  char local_1534;
  char local_1533;
  char local_1532;
  char local_1531;
  char local_1530;
  char local_152f;
  char local_152e;
  char local_152d;
  char local_152c;
  char local_152b;
  char local_152a;
  char local_1529;
  undefined4 local_1528;
  uint local_1524;
  float local_1520;
  int local_151c;
  char local_1515;
  char local_1514;
  char local_1513;
  char local_1512;
  char local_1511;
  function<void___cdecl(void)> *local_1510;
  function<void___cdecl(void)> *local_150c;
  function<void___cdecl(void)> *local_1508;
  COLORREF local_1504;
  uint local_1500;
  int local_14fc;
  int local_14f8;
  int local_14f4;
  tagRECT local_14f0;
  function<void___cdecl(void)> local_14e0 [24];
  function<void___cdecl(void)> local_14c8 [24];
  function<void___cdecl(void)> local_14b0 [24];
  function<void___cdecl(void)> local_1498 [24];
  function<void___cdecl(void)> local_1480 [24];
  function<void___cdecl(void)> local_1468 [24];
  function<void___cdecl(void)> local_1450 [24];
  function<void___cdecl(void)> local_1438 [24];
  function<void___cdecl(void)> local_1420 [24];
  undefined1 local_1408;
  undefined1 local_1308;
  undefined1 local_1208;
  undefined1 local_1108;
  undefined4 local_1008;
  uint local_1004;
  uint local_1000;
  undefined2 local_ffc;
  undefined1 local_ffa;
  uint local_8;
  
  local_8 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  local_150c = (function<void___cdecl(void)> *)0xcc;
  local_1754 = 0x1e0;
  local_17a8 = 0;
  local_14f4 = game_loop_helper_cc840();
  local_1528 = 0xff000000;
  local_151c = 0;
  local_1b64 = 0xff00f0;
  local_1b44 = 0xffb100;
  local_1b48 = 0xff00f0;
  local_1504 = 0xffffff;
  local_14f0.left = 6;
  local_14f0.top = 6;
  local_14f0.right = (LONG)(local_150c + -6);
  local_14f0.bottom = local_1754;
  SelectObject(*(HDC *)(DAT_007ca1a4 + 0x1c),*(HGDIOBJ *)(DAT_007ca1a4 + 0x20));
  local_1740 = CreateCompatibleBitmap(*(HDC *)(DAT_007ca1a4 + 0x18),(int)local_150c,local_1754);
  local_17a4 = CreateCompatibleBitmap(*(HDC *)(DAT_007ca1a4 + 0x18),1,1);
  local_1578 = (int)local_150c * local_1754 * 4;
  local_1510 = (function<void___cdecl(void)> *)FUN_006f191d();
  for (local_1718 = 0; local_1718 < local_1578 >> 2; local_1718 = local_1718 + 1) {
    *(int *)(local_1510 + local_1718 * 4) = local_151c;
  }
  local_1b4c = SetBitmapBits(local_1740,local_1578,local_1510);
  local_1b50 = SelectObject(*(HDC *)(DAT_007ca1a4 + 0x1c),local_1740);
  SetBkMode(*(HDC *)(DAT_007ca1a4 + 0x1c),1);
  local_158c = (undefined *)0xffffff;
  if (*(int *)(local_14f4 + 0xb8) == 1) {
    local_158c = &DAT_0068d5ed;
  }
  else if (*(int *)(local_14f4 + 0xb8) == 2) {
    local_158c = (undefined *)0xb36bff;
  }
  else if (*(int *)(local_14f4 + 0xb8) == 3) {
    local_158c = (undefined *)0xff00f0;
  }
  else if (*(int *)(local_14f4 + 0xb8) == 4) {
    local_158c = (undefined *)0xffb100;
  }
  SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),(COLORREF)local_158c);
  if (*(int *)(local_14fc + 0x38) < 1) {
    local_1748 = (char *)npk_get_relative_res_path();
    local_1b54 = (char *)&local_1008;
    local_16f0 = local_1b54;
    do {
      local_1511 = *local_1748;
      *local_16f0 = local_1511;
      local_1748 = local_1748 + 1;
      local_16f0 = local_16f0 + 1;
    } while (local_1511 != '\0');
  }
  else {
    npk_get_relative_res_path();
    FUN_00414e80();
  }
  local_166c = (char *)&local_1008;
  local_1990 = (int)&local_1008 + 1;
  do {
    local_1565 = *local_166c;
    local_166c = local_166c + 1;
  } while (local_1565 != '\0');
  local_1af8 = (int)local_166c - local_1990;
  pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b46e1;
  local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1af8,&local_14f0,
                         0x810);
  local_14f0.top = local_14f0.top + 1 + local_14f8;
  SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),(COLORREF)local_158c);
  local_16b8 = (char *)npk_get_relative_res_path();
  local_1afc = local_16b8 + 1;
  do {
    local_1566 = *local_16b8;
    local_16b8 = local_16b8 + 1;
  } while (local_1566 != '\0');
  iVar3 = (int)local_16b8 - (int)local_1afc;
  lprc = &local_14f0;
  format = 0x810;
  local_1b00 = iVar3;
  lpchText = (LPCSTR)npk_get_relative_res_path();
  pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b4799;
  local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),lpchText,iVar3,lprc,format);
  local_17a8 = local_14f0.top + 1 + local_14f8;
  local_14f0.top = local_17a8 + 1 + local_14f8;
  SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xffffff);
  if (*(int *)(local_14f4 + 0xbc) != 0) {
    FUN_00414e80();
    local_16bc = (char *)&local_1008;
    local_1b04 = (int)&local_1008 + 1;
    do {
      local_1567 = *local_16bc;
      local_16bc = local_16bc + 1;
    } while (local_1567 != '\0');
    local_1b08 = (int)local_16bc - local_1b04;
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b48a8;
    local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1b08,&local_14f0,
                           0x10);
  }
  if (*(int *)(local_14f4 + 0x14c) != 0) {
    if (*(int *)(local_14fc + 0x2c) == 0) {
      local_1b10 = FUN_004c7c70();
      npk_get_relative_res_path();
      FUN_00414e80();
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1438);
    }
    else {
      local_1b0c = FUN_004c7c70();
      npk_get_relative_res_path();
      FUN_00414e80();
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1420);
    }
    local_16c0 = (char *)&local_1008;
    local_1b14 = (int)&local_1008 + 1;
    do {
      local_1568 = *local_16c0;
      local_16c0 = local_16c0 + 1;
    } while (local_1568 != '\0');
    local_1b18 = (int)local_16c0 - local_1b14;
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b49e1;
    local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1b18,&local_14f0,
                           0x12);
  }
  local_14f0.top = local_14f0.top + 1 + local_14f8;
  SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xffffff);
  cVar1 = FUN_00427c60();
  if (cVar1 == '\0') {
    cVar1 = FUN_00427c60();
    if ((((cVar1 != '\0') || (cVar1 = FUN_00427c60(), cVar1 != '\0')) ||
        (cVar1 = FUN_00427c60(), cVar1 != '\0')) ||
       ((cVar1 = FUN_00427c60(), cVar1 != '\0' || (cVar1 = FUN_00427c60(), cVar1 != '\0')))) {
      local_1b2c = FUN_004ca750();
      local_1750 = (char *)npk_get_relative_res_path();
      local_1b60 = (char *)&local_1008;
      local_16f8 = local_1b60;
      do {
        local_1513 = *local_1750;
        *local_16f8 = local_1513;
        local_1750 = local_1750 + 1;
        local_16f8 = local_16f8 + 1;
      } while (local_1513 != '\0');
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1468);
      local_16c8 = (char *)&local_1008;
      local_17e8 = (int)&local_1008 + 1;
      do {
        local_156a = *local_16c8;
        local_16c8 = local_16c8 + 1;
      } while (local_156a != '\0');
      local_17ec = (int)local_16c8 - local_17e8;
      pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b4d37;
      local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_17ec,
                             &local_14f0,0x10);
    }
  }
  else {
    local_1b58 = (undefined1 *)&pfStack_1bcc;
    pfStack_1bd0 = (function<void___cdecl(void)> *)0x0;
    iStack_1bd4 = 0x6b4a63;
    pfStack_1bd0 = (function<void___cdecl(void)> *)FUN_004274d0();
    iStack_1bd4 = 0x6b4a6b;
    FUN_00405520();
    pfStack_1bd0 = local_1450;
    iStack_1bd4 = 0x6b4a77;
    local_1b20 = FUN_004c9790();
    local_1b1c = local_1b20;
    local_174c = (char *)npk_get_relative_res_path();
    local_1b5c = (char *)&local_1008;
    local_16f4 = local_1b5c;
    do {
      local_1512 = *local_174c;
      *local_16f4 = local_1512;
      local_174c = local_174c + 1;
      local_16f4 = local_16f4 + 1;
    } while (local_1512 != '\0');
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1450);
    local_16c4 = (char *)&local_1008;
    local_1b24 = (int)&local_1008 + 1;
    do {
      local_1569 = *local_16c4;
      local_16c4 = local_16c4 + 1;
    } while (local_1569 != '\0');
    local_1b28 = (int)local_16c4 - local_1b24;
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b4b76;
    local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1b28,&local_14f0,
                           0x10);
  }
  local_1b80 = (undefined1 *)&pfStack_1bc8;
  pfStack_1bcc = (function<void___cdecl(void)> *)(local_14f4 + 0x124);
  pfStack_1bd0 = (function<void___cdecl(void)> *)0x6b4d5a;
  FUN_00405520();
  pfStack_1bcc = local_1480;
  pfStack_1bd0 = (function<void___cdecl(void)> *)0x6b4d66;
  local_17f4 = FUN_004ca080();
  local_17f0 = local_17f4;
  local_171c = (char *)npk_get_relative_res_path();
  local_1b68 = (char *)&local_1008;
  local_16fc = local_1b68;
  do {
    local_1514 = *local_171c;
    *local_16fc = local_1514;
    local_171c = local_171c + 1;
    local_16fc = local_16fc + 1;
  } while (local_1514 != '\0');
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1480);
  local_16cc = (char *)&local_1008;
  local_17f8 = (int)&local_1008 + 1;
  do {
    local_156b = *local_16cc;
    local_16cc = local_16cc + 1;
  } while (local_156b != '\0');
  local_17fc = (int)local_16cc - local_17f8;
  pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b4e64;
  local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_17fc,&local_14f0,
                         0x12);
  cVar1 = FUN_00427c60();
  if (cVar1 != '\0') {
    local_14f0.top = local_14f0.top + 1 + local_14f8;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),local_1504);
    local_1b6c = (undefined1 *)&pfStack_1bcc;
    pfStack_1bd0 = (function<void___cdecl(void)> *)0x0;
    iStack_1bd4 = 0x6b4ee8;
    pfStack_1bd0 = (function<void___cdecl(void)> *)FUN_004274d0();
    iStack_1bd4 = 0x6b4ef0;
    FUN_00405520();
    pfStack_1bd0 = local_1498;
    iStack_1bd4 = 0x6b4efc;
    local_1804 = FUN_004ca810();
    local_1800 = local_1804;
    local_1720 = (char *)npk_get_relative_res_path();
    local_1b70 = (char *)&local_1008;
    local_1700 = local_1b70;
    do {
      local_1515 = *local_1720;
      *local_1700 = local_1515;
      local_1720 = local_1720 + 1;
      local_1700 = local_1700 + 1;
    } while (local_1515 != '\0');
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1498);
    local_16d0 = (char *)&local_1008;
    local_1808 = (int)&local_1008 + 1;
    do {
      local_156c = *local_16d0;
      local_16d0 = local_16d0 + 1;
    } while (local_156c != '\0');
    local_180c = (int)local_16d0 - local_1808;
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b4ffa;
    local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_180c,&local_14f0,
                           0x10);
  }
  FUN_004274d0();
  cVar1 = FUN_00427e30();
  if ((cVar1 != '\0') && (cVar1 = FUN_00427c60(), cVar1 != '\0')) {
    local_1b74 = (undefined1 *)&pfStack_1bc8;
    pfStack_1bcc = (function<void___cdecl(void)> *)0x0;
    pfStack_1bd0 = (function<void___cdecl(void)> *)0x6b506e;
    pfStack_1bcc = (function<void___cdecl(void)> *)FUN_004274d0();
    pfStack_1bd0 = (function<void___cdecl(void)> *)0x6b5076;
    FUN_00405520();
    pfStack_1bcc = (function<void___cdecl(void)> *)0x6b507b;
    local_1810 = FUN_004caab0();
    local_16d8 = FUN_005dfdf0();
    iVar3 = FUN_00518260();
    if (iVar3 == 0) {
      MessageBoxA((HWND)0x0,&DAT_00777960,(LPCSTR)0x0,0);
    }
    pfVar2 = (float *)FUN_004017f0();
    local_1724 = *pfVar2 + 0.001;
    iVar3 = FUN_004017f0();
    local_1728 = *(float *)(iVar3 + 4) + 0.001;
    local_1520 = 0.008;
    fVar7 = (float10)FUN_004a1b00();
    local_1814 = (float)fVar7;
    if (local_1520 < local_1814) {
LAB_006b51ae:
      local_14f0.top = local_14f0.top + 1 + local_14f8;
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),local_1504);
      fVar7 = (float10)FUN_004a1b00();
      local_181c = (float)fVar7;
      if (local_1520 <= local_181c) {
        FUN_00414e80();
      }
      else {
        local_1408 = 0;
      }
      fVar7 = (float10)FUN_004a1b00();
      local_1820 = (float)fVar7;
      if (local_1520 <= local_1820) {
        FUN_00414e80();
      }
      else {
        local_1308 = 0;
      }
      FUN_00414e80();
      local_16d4 = (char *)&local_1008;
      local_1824 = (int)&local_1008 + 1;
      do {
        local_156d = *local_16d4;
        local_16d4 = local_16d4 + 1;
      } while (local_156d != '\0');
      local_1828 = (int)local_16d4 - local_1824;
      pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b534d;
      local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1828,
                             &local_14f0,0x10);
    }
    else {
      fVar7 = (float10)FUN_004a1b00();
      local_1818 = (float)fVar7;
      if (local_1520 < local_1818) goto LAB_006b51ae;
    }
    iVar3 = FUN_004017f0();
    local_172c = *(float *)(iVar3 + 8) + 0.001;
    iVar3 = FUN_004017f0();
    local_1730 = *(float *)(iVar3 + 0xc) + 0.001;
    fVar7 = (float10)FUN_004a1b00();
    local_182c = (float)fVar7;
    if (local_182c <= local_1520) {
      fVar7 = (float10)FUN_004a1b00();
      local_1830 = (float)fVar7;
      if (local_1830 <= local_1520) goto LAB_006b55d3;
    }
    local_14f0.top = local_14f0.top + 1 + local_14f8;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),local_1504);
    fVar7 = (float10)FUN_004a1b00();
    local_1834 = (float)fVar7;
    if (local_1520 <= local_1834) {
      FUN_00414e80();
    }
    else {
      local_1208 = 0;
    }
    fVar7 = (float10)FUN_004a1b00();
    local_1838 = (float)fVar7;
    if (local_1520 <= local_1838) {
      FUN_00414e80();
    }
    else {
      local_1108 = 0;
    }
    FUN_00414e80();
    local_16dc = (char *)&local_1008;
    local_183c = (int)&local_1008 + 1;
    do {
      local_156e = *local_16dc;
      local_16dc = local_16dc + 1;
    } while (local_156e != '\0');
    local_1840 = (int)local_16dc - local_183c;
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b55cd;
    local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1840,&local_14f0,
                           0x10);
  }
LAB_006b55d3:
  if ((*(int *)(local_14f4 + 0x148) != 0) || (cVar1 = FUN_00427e30(), cVar1 != '\0')) {
    local_14f0.top = local_14f0.top + 1 + local_14f8;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),local_1504);
    if (*(int *)(local_14f4 + 0x148) != 0) {
      FUN_00414e80();
      local_16e0 = (char *)&local_1008;
      local_1844 = (int)&local_1008 + 1;
      do {
        local_156f = *local_16e0;
        local_16e0 = local_16e0 + 1;
      } while (local_156f != '\0');
      local_1848 = (int)local_16e0 - local_1844;
      pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b56e4;
      local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1848,
                             &local_14f0,0x10);
    }
    cVar1 = FUN_00427c60();
    if ((cVar1 == '\0') || (*(int *)(local_14fc + 0x40) != 0)) {
      cVar1 = FUN_00427c60();
      if ((cVar1 == '\0') || (*(int *)(local_14fc + 0x40) != 1)) {
        cVar1 = FUN_00427c60();
        if (cVar1 == '\0') {
          cVar1 = FUN_00427c60();
          if (cVar1 != '\0') {
            local_1008 = local_1008 & 0xffffff00;
          }
        }
        else {
          local_1008 = 0xa8b7dece;
          local_1004 = 0xd7d2bbbd;
          local_1000 = local_1000 & 0xffffff00;
        }
      }
      else {
        local_1008 = 0xa8b7dece;
        local_1004 = 0xd7d2bbbd;
        local_1000 = local_1000 & 0xffffff00;
      }
    }
    else if (*(int *)(local_14fc + 0x54) == 0) {
      local_1008 = 0xb0d7e2b7;
      local_1004 = local_1004 & 0xffffff00;
    }
    else {
      _memset(&local_1008,0,0x1000);
      FUN_00414e80();
    }
    local_1708 = &DAT_00740802;
    local_1704 = (byte *)&local_1008;
    do {
      local_1570 = *local_1704;
      bVar6 = local_1570 < *local_1708;
      if (local_1570 != *local_1708) {
LAB_006b58ac:
        local_17ac = -(uint)bVar6 | 1;
        goto LAB_006b58b7;
      }
      if (local_1570 == 0) break;
      local_1571 = local_1704[1];
      bVar6 = local_1571 < local_1708[1];
      if (local_1571 != local_1708[1]) goto LAB_006b58ac;
      local_1704 = local_1704 + 2;
      local_1708 = local_1708 + 2;
    } while (local_1571 != 0);
    local_17ac = 0;
LAB_006b58b7:
    local_184c = local_17ac;
    if (local_17ac != 0) {
      local_16e4 = (char *)&local_1008;
      local_1850 = (int)&local_1008 + 1;
      do {
        local_157a = *local_16e4;
        local_16e4 = local_16e4 + 1;
      } while (local_157a != '\0');
      local_1854 = (int)local_16e4 - local_1850;
      pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b593e;
      local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1854,
                             &local_14f0,0x12);
    }
  }
  local_14f0.top = local_14f0.top + 1 + local_14f8;
  iVar3 = game_get_player_or_session_blob();
  if (*(int *)(iVar3 + 0x1fc) < *(int *)(local_14f4 + 0xcc)) {
    game_get_player_or_session_blob();
    cVar1 = FUN_0067b4e0();
    if (cVar1 == '\0') {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xff0000);
    }
    else {
      iVar3 = game_get_player_or_session_blob();
      if (*(int *)(iVar3 + 0x1fc) + 5 < *(int *)(local_14f4 + 0xcc)) {
        SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xff0000);
      }
      else {
        SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xff00);
      }
    }
  }
  else {
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xffffff);
  }
  if (1 < *(int *)(local_14f4 + 0xcc)) {
    iVar3 = game_get_player_or_session_blob();
    if (*(int *)(iVar3 + 0x1fc) < *(int *)(local_14f4 + 0xcc)) {
      game_get_player_or_session_blob();
      cVar1 = FUN_0067b4e0();
      if (cVar1 == '\0') {
        FUN_00414e80();
      }
      else {
        game_get_player_or_session_blob();
        FUN_0067b560();
        FUN_00414e80();
      }
    }
    else {
      FUN_00414e80();
    }
    local_16e8 = (char *)&local_1008;
    local_1858 = (int)&local_1008 + 1;
    do {
      local_157b = *local_16e8;
      local_16e8 = local_16e8 + 1;
    } while (local_157b != '\0');
    local_185c = (int)local_16e8 - local_1858;
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b5b43;
    local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_185c,&local_14f0,
                           0x10);
  }
  if (*(int *)(local_14fc + 0x3c) < 100) {
    if (*(int *)(local_14fc + 0x3c) < 0x4b) {
      if (*(int *)(local_14fc + 0x3c) < 0x32) {
        if (*(int *)(local_14fc + 0x3c) < 0x19) {
          if (-1 < *(int *)(local_14fc + 0x3c)) {
            SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xe6c89c);
            pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b5cb7;
            local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&DAT_00777aa0,6,&local_14f0,0x12);
          }
        }
        else {
          SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xe6c89c);
          pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b5c6e;
          local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&DAT_00777ae4,4,&local_14f0,0x12);
        }
      }
      else {
        SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
        pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b5c22;
        local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&DAT_00777adc,4,&local_14f0,0x12);
      }
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xffff00);
      pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b5bd6;
      local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&DAT_00777ad4,4,&local_14f0,0x12);
    }
  }
  else {
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xffff00);
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b5b8a;
    local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&DAT_00777acc,6,&local_14f0,0x12);
  }
  cVar1 = game_frame_should_continue();
  if (cVar1 == '\0') {
    FUN_004274d0();
    cVar1 = FUN_00427e30();
    if (cVar1 != '\0') {
      local_14f0.top = local_14f0.top + 1 + local_14f8;
      game_get_player_or_session_blob();
      game_loop_helper_cc840();
      cVar1 = FUN_004527a0();
      if (cVar1 == '\0') {
        SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xff0000);
      }
      else {
        SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),local_1504);
      }
      local_1b78 = (undefined1 *)&pfStack_1bcc;
      pfStack_1bd0 = (function<void___cdecl(void)> *)0x0;
      iStack_1bd4 = 0x6b5d9a;
      pfStack_1bd0 = (function<void___cdecl(void)> *)FUN_004274d0();
      iStack_1bd4 = 0x6b5da2;
      FUN_00405520();
      pfStack_1bd0 = (function<void___cdecl(void)> *)0x6b5da7;
      local_1860 = FUN_004caab0();
      local_1868 = FUN_005aa150();
      local_1864 = local_1868;
      npk_get_relative_res_path();
      FUN_00414e80();
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_14b0);
      local_16ec = (char *)&local_1008;
      local_186c = (int)&local_1008 + 1;
      do {
        local_157c = *local_16ec;
        local_16ec = local_16ec + 1;
      } while (local_157c != '\0');
      local_1870 = (int)local_16ec - local_186c;
      pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b5e78;
      local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1870,
                             &local_14f0,0x10);
    }
  }
  local_14f0.top = local_14f0.top + 1 + local_14f8;
  SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
  if (*(int *)(local_14f4 + 0x170) != 0) {
    local_14f0.top = local_14f0.top + 1 + local_14f8;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xffffff);
    iVar3 = FUN_006c8730();
    if (iVar3 == 1) {
      game_get_player_or_session_blob();
      iVar3 = FUN_006ca800();
      if (iVar3 == 0) {
        SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xff0000);
      }
    }
    local_1b7c = (undefined1 *)&pfStack_1bcc;
    pfStack_1bd0 = (function<void___cdecl(void)> *)0x0;
    iStack_1bd4 = 0x6b5f60;
    pfStack_1bd0 = (function<void___cdecl(void)> *)FUN_004274d0();
    iStack_1bd4 = 0x6b5f68;
    FUN_00405520();
    pfStack_1bd0 = (function<void___cdecl(void)> *)0x6b5f6d;
    local_1874 = FUN_004caab0();
    local_1878 = FUN_005d9da0();
    npk_get_relative_res_path();
    FUN_00414e80();
    local_1594 = (char *)&local_1008;
    local_187c = (int)&local_1008 + 1;
    do {
      local_157d = *local_1594;
      local_1594 = local_1594 + 1;
    } while (local_157d != '\0');
    local_1880 = (int)local_1594 - local_187c;
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b6023;
    local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1880,&local_14f0,
                           0x10);
    local_14f0.top = local_14f0.top + 1 + local_14f8;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
  }
  if (*(int *)(local_14f4 + 0x1c8) != 0) {
    local_14f0.top = local_14f0.top + 1 + local_14f8;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),local_1504);
    FUN_00414e80();
    local_1598 = (char *)&local_1008;
    local_1884 = (int)&local_1008 + 1;
    do {
      local_157e = *local_1598;
      local_1598 = local_1598 + 1;
    } while (local_157e != '\0');
    local_1888 = (int)local_1598 - local_1884;
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b6127;
    local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1888,&local_14f0,
                           0x10);
    if (0 < *(int *)(local_14fc + 0x38)) {
      local_188c = FUN_005dc370();
      local_14f0.top = local_14f0.top + 1 + local_14f8;
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
      FUN_006abf60();
      FUN_00414e80();
      local_159c = (char *)&local_1008;
      local_1890 = (int)&local_1008 + 1;
      do {
        local_157f = *local_159c;
        local_159c = local_159c + 1;
      } while (local_157f != '\0');
      local_1894 = (int)local_159c - local_1890;
      pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b6233;
      local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1894,
                             &local_14f0,0x10);
    }
  }
  if (*(int *)(local_14f4 + 0x1cc) != 0) {
    local_14f0.top = local_14f0.top + 1 + local_14f8;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),local_1504);
    FUN_00414e80();
    local_15a0 = (char *)&local_1008;
    local_1898 = (int)&local_1008 + 1;
    do {
      local_1580 = *local_15a0;
      local_15a0 = local_15a0 + 1;
    } while (local_1580 != '\0');
    local_189c = (int)local_15a0 - local_1898;
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b630b;
    local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_189c,&local_14f0,
                           0x10);
    if (0 < *(int *)(local_14fc + 0x38)) {
      local_14f0.top = local_14f0.top + 1 + local_14f8;
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
      local_18a0 = FUN_005dc370();
      FUN_006abf60();
      FUN_00414e80();
      local_15a4 = (char *)&local_1008;
      local_18a4 = (int)&local_1008 + 1;
      do {
        local_1581 = *local_15a4;
        local_15a4 = local_15a4 + 1;
      } while (local_1581 != '\0');
      local_18a8 = (int)local_15a4 - local_18a4;
      pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b6417;
      local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_18a8,
                             &local_14f0,0x10);
    }
  }
  if (*(int *)(local_14f4 + 0x1d0) != 0) {
    local_14f0.top = local_14f0.top + 1 + local_14f8;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),local_1504);
    FUN_00414e80();
    local_15a8 = (char *)&local_1008;
    local_18ac = (int)&local_1008 + 1;
    do {
      local_1582 = *local_15a8;
      local_15a8 = local_15a8 + 1;
    } while (local_1582 != '\0');
    local_18b0 = (int)local_15a8 - local_18ac;
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b64ef;
    local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_18b0,&local_14f0,
                           0x10);
    if ((0 < *(int *)(local_14fc + 0x38)) &&
       ((((cVar1 = FUN_00427c60(), cVar1 != '\0' || (cVar1 = FUN_00427c60(), cVar1 != '\0')) ||
         (cVar1 = FUN_00427c60(), cVar1 != '\0')) ||
        ((cVar1 = FUN_00427c60(), cVar1 != '\0' || (cVar1 = FUN_00427c60(), cVar1 != '\0')))))) {
      local_14f0.top = local_14f0.top + 1 + local_14f8;
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
      local_1734 = FUN_005dc370();
      iVar3 = FUN_006abff0();
      if (0 < iVar3) {
        FUN_006abff0();
        FUN_00414e80();
        local_15ac = (char *)&local_1008;
        local_18b4 = (int)&local_1008 + 1;
        do {
          local_1583 = *local_15ac;
          local_15ac = local_15ac + 1;
        } while (local_1583 != '\0');
        local_18b8 = (int)local_15ac - local_18b4;
        pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b66e1;
        local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_18b8,
                               &local_14f0,0x10);
        local_14f0.top = local_14f0.top + 1 + local_14f8;
      }
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
      FUN_006ac080();
      FUN_00414e80();
      local_15b0 = (char *)&local_1008;
      local_18bc = (int)&local_1008 + 1;
      do {
        local_1584 = *local_15b0;
        local_15b0 = local_15b0 + 1;
      } while (local_1584 != '\0');
      local_18c0 = (int)local_15b0 - local_18bc;
      pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b67ce;
      local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_18c0,
                             &local_14f0,0x10);
    }
  }
  if (*(int *)(local_14f4 + 0x1d4) != 0) {
    local_14f0.top = local_14f0.top + 1 + local_14f8;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),local_1504);
    FUN_00414e80();
    local_15b4 = (char *)&local_1008;
    local_18c4 = (int)&local_1008 + 1;
    do {
      local_1585 = *local_15b4;
      local_15b4 = local_15b4 + 1;
    } while (local_1585 != '\0');
    local_18c8 = (int)local_15b4 - local_18c4;
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b68a6;
    local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_18c8,&local_14f0,
                           0x10);
    if ((0 < *(int *)(local_14fc + 0x38)) &&
       (((cVar1 = FUN_00427c60(), cVar1 != '\0' || (cVar1 = FUN_00427c60(), cVar1 != '\0')) ||
        (cVar1 = FUN_00427c60(), cVar1 != '\0')))) {
      local_14f0.top = local_14f0.top + 1 + local_14f8;
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
      local_1738 = FUN_005dc370();
      iVar3 = FUN_006ac0f0();
      if (0 < iVar3) {
        FUN_006ac0f0();
        FUN_00414e80();
        local_15b8 = (char *)&local_1008;
        local_18cc = (int)&local_1008 + 1;
        do {
          local_1586 = *local_15b8;
          local_15b8 = local_15b8 + 1;
        } while (local_1586 != '\0');
        local_18d0 = (int)local_15b8 - local_18cc;
        pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b6a52;
        local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_18d0,
                               &local_14f0,0x10);
        local_14f0.top = local_14f0.top + 1 + local_14f8;
      }
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
      FUN_006ac180();
      FUN_00414e80();
      local_15bc = (char *)&local_1008;
      local_18d4 = (int)&local_1008 + 1;
      do {
        local_1587 = *local_15bc;
        local_15bc = local_15bc + 1;
      } while (local_1587 != '\0');
      local_18d8 = (int)local_15bc - local_18d4;
      pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b6b3d;
      local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_18d8,
                             &local_14f0,0x10);
    }
  }
  if (*(int *)(local_14f4 + 0x1b8) != 0) {
    local_14f0.top = local_14f0.top + 1 + local_14f8;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),local_1504);
    FUN_00414e80();
    local_15c0 = (char *)&local_1008;
    local_18dc = (int)&local_1008 + 1;
    do {
      local_1529 = *local_15c0;
      local_15c0 = local_15c0 + 1;
    } while (local_1529 != '\0');
    local_18e0 = (int)local_15c0 - local_18dc;
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b6c16;
    local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_18e0,&local_14f0,
                           0x10);
  }
  if (*(int *)(local_14f4 + 0x1c0) != 0) {
    local_14f0.top = local_14f0.top + 1 + local_14f8;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),local_1504);
    FUN_00414e80();
    local_15c4 = (char *)&local_1008;
    local_18e4 = (int)&local_1008 + 1;
    do {
      local_152a = *local_15c4;
      local_15c4 = local_15c4 + 1;
    } while (local_152a != '\0');
    local_18e8 = (int)local_15c4 - local_18e4;
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b6cee;
    local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_18e8,&local_14f0,
                           0x10);
  }
  if (*(int *)(local_14f4 + 0x1bc) != 0) {
    local_14f0.top = local_14f0.top + 1 + local_14f8;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),local_1504);
    FUN_00414e80();
    local_15c8 = (char *)&local_1008;
    local_18ec = (int)&local_1008 + 1;
    do {
      local_152b = *local_15c8;
      local_15c8 = local_15c8 + 1;
    } while (local_152b != '\0');
    local_18f0 = (int)local_15c8 - local_18ec;
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b6dc6;
    local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_18f0,&local_14f0,
                           0x10);
  }
  if (*(int *)(local_14f4 + 0x1c4) != 0) {
    local_14f0.top = local_14f0.top + 1 + local_14f8;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),local_1504);
    FUN_00414e80();
    local_15cc = (char *)&local_1008;
    local_18f4 = (int)&local_1008 + 1;
    do {
      local_152c = *local_15cc;
      local_15cc = local_15cc + 1;
    } while (local_152c != '\0');
    local_18f8 = (int)local_15cc - local_18f4;
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b6e9f;
    local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_18f8,&local_14f0,
                           0x10);
  }
  local_14f0.top = local_14f0.top + 1 + local_14f8;
  if (*(int *)(local_14f4 + 0x1a8) != 0) {
    local_14f0.top = local_14f0.top + 1 + local_14f8;
    if (*(int *)(local_14f4 + 0x1a8) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    if (*(int *)(local_14f4 + 0x1a8) < 1) {
      local_17b0 = &DAT_00777bf8;
    }
    else {
      local_17b0 = &DAT_00777bf4;
    }
    FUN_00414e80();
    local_15d0 = (char *)&local_1008;
    local_18fc = (int)&local_1008 + 1;
    do {
      local_152d = *local_15d0;
      local_15d0 = local_15d0 + 1;
    } while (local_152d != '\0');
    local_1900 = (int)local_15d0 - local_18fc;
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b6fdf;
    local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1900,&local_14f0,
                           0x10);
  }
  if (*(int *)(local_14f4 + 0x1b0) != 0) {
    local_14f0.top = local_14f0.top + 1 + local_14f8;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    if (*(int *)(local_14f4 + 0x1b0) < 1) {
      local_17b4 = &DAT_00777c7c;
    }
    else {
      local_17b4 = &DAT_00777c78;
    }
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b7082;
    FUN_00414e80();
    local_15d4 = (char *)&local_1008;
    local_1904 = (int)&local_1008 + 1;
    do {
      local_152e = *local_15d4;
      local_15d4 = local_15d4 + 1;
    } while (local_152e != '\0');
    local_1908 = (int)local_15d4 - local_1904;
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b70f7;
    local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1908,&local_14f0,
                           0x10);
  }
  if (*(int *)(local_14f4 + 0x1ac) != 0) {
    local_14f0.top = local_14f0.top + 1 + local_14f8;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    if (*(int *)(local_14f4 + 0x1ac) < 1) {
      local_17b8 = &DAT_00777c50;
    }
    else {
      local_17b8 = &DAT_00777c4c;
    }
    FUN_00414e80();
    local_15d8 = (char *)&local_1008;
    local_190c = (int)&local_1008 + 1;
    do {
      local_152f = *local_15d8;
      local_15d8 = local_15d8 + 1;
    } while (local_152f != '\0');
    local_1910 = (int)local_15d8 - local_190c;
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b71fa;
    local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1910,&local_14f0,
                           0x10);
  }
  if (*(int *)(local_14f4 + 0x1b4) != 0) {
    local_14f0.top = local_14f0.top + 1 + local_14f8;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    if (*(int *)(local_14f4 + 0x1b4) < 1) {
      local_17bc = &DAT_00777cbc;
    }
    else {
      local_17bc = &DAT_00777c64;
    }
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b729d;
    FUN_00414e80();
    local_15dc = (char *)&local_1008;
    local_1914 = (int)&local_1008 + 1;
    do {
      local_1530 = *local_15dc;
      local_15dc = local_15dc + 1;
    } while (local_1530 != '\0');
    local_1918 = (int)local_15dc - local_1914;
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b7311;
    local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1918,&local_14f0,
                           0x10);
  }
  if (*(int *)(local_14f4 + 0x1d8) != 0) {
    local_14f0.top = local_14f0.top + 1 + local_14f8;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    if (*(int *)(local_14f4 + 0x1d8) < 1) {
      local_17c0 = &DAT_00777cd8;
    }
    else {
      local_17c0 = &DAT_00777cd4;
    }
    FUN_004a1b00();
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b73b8;
    FUN_00414e80();
    local_15e0 = (char *)&local_1008;
    local_191c = (int)&local_1008 + 1;
    do {
      local_1531 = *local_15e0;
      local_15e0 = local_15e0 + 1;
    } while (local_1531 != '\0');
    local_1920 = (int)local_15e0 - local_191c;
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b742d;
    local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1920,&local_14f0,
                           0x10);
  }
  if (*(int *)(local_14f4 + 0x1e0) != 0) {
    local_14f0.top = local_14f0.top + 1 + local_14f8;
    if (*(int *)(local_14f4 + 0x1e0) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    if (*(int *)(local_14f4 + 0x1e0) < 1) {
      local_17c4 = &DAT_00777ca8;
    }
    else {
      local_17c4 = &DAT_00777ca4;
    }
    FUN_004a1b00();
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b74fc;
    FUN_00414e80();
    local_15e4 = (char *)&local_1008;
    local_1924 = (int)&local_1008 + 1;
    do {
      local_1532 = *local_15e4;
      local_15e4 = local_15e4 + 1;
    } while (local_1532 != '\0');
    local_1928 = (int)local_15e4 - local_1924;
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b7571;
    local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1928,&local_14f0,
                           0x10);
  }
  if (*(int *)(local_14f4 + 0x1dc) != 0) {
    local_14f0.top = local_14f0.top + 1 + local_14f8;
    if (*(int *)(local_14f4 + 0x1dc) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    if (*(int *)(local_14f4 + 0x1dc) < 1) {
      local_17c8 = &DAT_00777cfc;
    }
    else {
      local_17c8 = &DAT_00777cf8;
    }
    FUN_004a1b00();
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b7641;
    FUN_00414e80();
    local_15e8 = (char *)&local_1008;
    local_192c = (int)&local_1008 + 1;
    do {
      local_1533 = *local_15e8;
      local_15e8 = local_15e8 + 1;
    } while (local_1533 != '\0');
    local_1930 = (int)local_15e8 - local_192c;
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b76b5;
    local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1930,&local_14f0,
                           0x10);
  }
  if (*(int *)(local_14f4 + 0x1e4) != 0) {
    local_14f0.top = local_14f0.top + 1 + local_14f8;
    if (*(int *)(local_14f4 + 0x1e4) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    if (*(int *)(local_14f4 + 0x1e4) < 1) {
      local_17cc = &DAT_00777cdc;
    }
    else {
      local_17cc = &DAT_00777d10;
    }
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b777f;
    FUN_00414e80();
    local_15ec = (char *)&local_1008;
    local_1934 = (int)&local_1008 + 1;
    do {
      local_1534 = *local_15ec;
      local_15ec = local_15ec + 1;
    } while (local_1534 != '\0');
    local_1938 = (int)local_15ec - local_1934;
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b77f4;
    local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1938,&local_14f0,
                           0x10);
  }
  if (*(int *)(local_14f4 + 0x1f0) != 0) {
    local_14f0.top = local_14f0.top + 1 + local_14f8;
    if (*(int *)(local_14f4 + 0x1f0) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    if (*(int *)(local_14f4 + 0x1f0) < 1) {
      local_17d0 = &DAT_00777cf4;
    }
    else {
      local_17d0 = &DAT_00777cf0;
    }
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b78b6;
    FUN_00414e80();
    local_15f0 = (char *)&local_1008;
    local_193c = (int)&local_1008 + 1;
    do {
      local_1535 = *local_15f0;
      local_15f0 = local_15f0 + 1;
    } while (local_1535 != '\0');
    local_1940 = (int)local_15f0 - local_193c;
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b792b;
    local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1940,&local_14f0,
                           0x10);
  }
  if (*(int *)(local_14f4 + 500) != 0) {
    local_14f0.top = local_14f0.top + 1 + local_14f8;
    if (*(int *)(local_14f4 + 500) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    if (*(int *)(local_14f4 + 500) < 1) {
      local_17d4 = &DAT_00777d48;
    }
    else {
      local_17d4 = &DAT_00777d44;
    }
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b79ee;
    FUN_00414e80();
    local_15f4 = (char *)&local_1008;
    local_1944 = (int)&local_1008 + 1;
    do {
      local_1536 = *local_15f4;
      local_15f4 = local_15f4 + 1;
    } while (local_1536 != '\0');
    local_1948 = (int)local_15f4 - local_1944;
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b7a62;
    local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1948,&local_14f0,
                           0x10);
  }
  if (*(int *)(local_14f4 + 0x1ec) != 0) {
    local_14f0.top = local_14f0.top + 1 + local_14f8;
    if (*(int *)(local_14f4 + 0x1ec) < 0) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    if (*(int *)(local_14f4 + 0x1ec) < 0) {
      local_17d8 = &DAT_00777d14;
    }
    else {
      local_17d8 = &DAT_00777d18;
    }
    FUN_004a1b00();
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b7b29;
    FUN_00414e80();
    local_15f8 = (char *)&local_1008;
    local_194c = (int)&local_1008 + 1;
    do {
      local_1537 = *local_15f8;
      local_15f8 = local_15f8 + 1;
    } while (local_1537 != '\0');
    local_1950 = (int)local_15f8 - local_194c;
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b7b9e;
    local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1950,&local_14f0,
                           0x10);
  }
  if (*(float *)(local_14f4 + 0x1e8) != 0.0) {
    local_14f0.top = local_14f0.top + 1 + local_14f8;
    if (*(float *)(local_14f4 + 0x1e8) <= 0.0) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    if (*(float *)(local_14f4 + 0x1e8) <= 0.0) {
      local_17dc = &DAT_00777d88;
    }
    else {
      local_17dc = &DAT_00777d2c;
    }
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b7c84;
    FUN_00414e80();
    local_15fc = (char *)&local_1008;
    local_1954 = (int)&local_1008 + 1;
    do {
      local_1538 = *local_15fc;
      local_15fc = local_15fc + 1;
    } while (local_1538 != '\0');
    local_1958 = (int)local_15fc - local_1954;
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b7cf9;
    local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1958,&local_14f0,
                           0x10);
  }
  if (*(int *)(local_14f4 + 0x1f8) != 0) {
    local_14f0.top = local_14f0.top + 1 + local_14f8;
    if (*(int *)(local_14f4 + 0x1f8) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    if (*(int *)(local_14f4 + 0x1f8) < 1) {
      local_17e0 = &DAT_00777da8;
    }
    else {
      local_17e0 = &DAT_00777da4;
    }
    FUN_00414e80();
    local_1600 = (char *)&local_1008;
    local_195c = (int)&local_1008 + 1;
    do {
      local_1539 = *local_1600;
      local_1600 = local_1600 + 1;
    } while (local_1539 != '\0');
    local_1960 = (int)local_1600 - local_195c;
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b7e24;
    local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1960,&local_14f0,
                           0x10);
  }
  if (*(int *)(local_14f4 + 0x1fc) != 0) {
    local_14f0.top = local_14f0.top + 1 + local_14f8;
    if (*(int *)(local_14f4 + 0x1fc) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    if (*(int *)(local_14f4 + 0x1fc) < 1) {
      local_17e4 = &DAT_00777d74;
    }
    else {
      local_17e4 = &DAT_00777d70;
    }
    FUN_00414e80();
    local_1604 = (char *)&local_1008;
    local_1964 = (int)&local_1008 + 1;
    do {
      local_153a = *local_1604;
      local_1604 = local_1604 + 1;
    } while (local_153a != '\0');
    local_1968 = (int)local_1604 - local_1964;
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b7f4f;
    local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1968,&local_14f0,
                           0x10);
  }
  if (*(int *)(local_14f4 + 0x200) != 0) {
    local_14f0.top = local_14f0.top + 1 + local_14f8;
    if (*(int *)(local_14f4 + 0x200) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    FUN_00414e80();
    local_1608 = (char *)&local_1008;
    local_196c = (int)&local_1008 + 1;
    do {
      local_153b = *local_1608;
      local_1608 = local_1608 + 1;
    } while (local_153b != '\0');
    local_1970 = (int)local_1608 - local_196c;
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b804e;
    local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1970,&local_14f0,
                           0x10);
  }
  if (*(int *)(local_14f4 + 0x204) != 0) {
    local_14f0.top = local_14f0.top + 1 + local_14f8;
    if (*(int *)(local_14f4 + 0x204) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    if (*(int *)(local_14f4 + 0x204) < 1) {
      local_1758 = &DAT_00777de0;
    }
    else {
      local_1758 = &DAT_00777ddc;
    }
    FUN_00414e80();
    local_160c = (char *)&local_1008;
    local_1974 = (int)&local_1008 + 1;
    do {
      local_153c = *local_160c;
      local_160c = local_160c + 1;
    } while (local_153c != '\0');
    local_1978 = (int)local_160c - local_1974;
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b8178;
    local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1978,&local_14f0,
                           0x10);
  }
  if (*(int *)(local_14f4 + 0x208) != 0) {
    local_14f0.top = local_14f0.top + 1 + local_14f8;
    if (*(int *)(local_14f4 + 0x208) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    if (*(int *)(local_14f4 + 0x208) < 1) {
      local_175c = &DAT_00777db0;
    }
    else {
      local_175c = &DAT_00777dac;
    }
    FUN_00414e80();
    local_1610 = (char *)&local_1008;
    local_197c = (int)&local_1008 + 1;
    do {
      local_153d = *local_1610;
      local_1610 = local_1610 + 1;
    } while (local_153d != '\0');
    local_1980 = (int)local_1610 - local_197c;
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b82a2;
    local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1980,&local_14f0,
                           0x10);
  }
  if (*(int *)(local_14f4 + 0x20c) != 0) {
    local_14f0.top = local_14f0.top + 1 + local_14f8;
    if (*(int *)(local_14f4 + 0x20c) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    if (*(int *)(local_14f4 + 0x20c) < 1) {
      local_1760 = &DAT_00777e1c;
    }
    else {
      local_1760 = &DAT_00777dc8;
    }
    FUN_00414e80();
    local_1614 = (char *)&local_1008;
    local_1984 = (int)&local_1008 + 1;
    do {
      local_153e = *local_1614;
      local_1614 = local_1614 + 1;
    } while (local_153e != '\0');
    local_1988 = (int)local_1614 - local_1984;
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b83cc;
    local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1988,&local_14f0,
                           0x10);
  }
  if (*(int *)(local_14f4 + 0x210) != 0) {
    local_14f0.top = local_14f0.top + 1 + local_14f8;
    if (*(int *)(local_14f4 + 0x210) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    if (*(int *)(local_14f4 + 0x210) < 1) {
      local_1764 = &DAT_00777e34;
    }
    else {
      local_1764 = &DAT_00777e30;
    }
    FUN_00414e80();
    local_1618 = (char *)&local_1008;
    local_198c = (int)&local_1008 + 1;
    do {
      local_153f = *local_1618;
      local_1618 = local_1618 + 1;
    } while (local_153f != '\0');
    local_1a88 = (int)local_1618 - local_198c;
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b84f6;
    local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1a88,&local_14f0,
                           0x10);
  }
  if (*(int *)(local_14f4 + 0x214) != 0) {
    local_14f0.top = local_14f0.top + 1 + local_14f8;
    if (*(int *)(local_14f4 + 0x214) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    if (*(int *)(local_14f4 + 0x214) < 1) {
      local_1768 = &DAT_00777e08;
    }
    else {
      local_1768 = &DAT_00777e04;
    }
    FUN_00414e80();
    local_161c = (char *)&local_1008;
    local_1994 = (int)&local_1008 + 1;
    do {
      local_1540 = *local_161c;
      local_161c = local_161c + 1;
    } while (local_1540 != '\0');
    local_1998 = (int)local_161c - local_1994;
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b8620;
    local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1998,&local_14f0,
                           0x10);
  }
  if (*(int *)(local_14f4 + 0x218) != 0) {
    local_14f0.top = local_14f0.top + 1 + local_14f8;
    if (*(int *)(local_14f4 + 0x218) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    if (*(int *)(local_14f4 + 0x218) < 1) {
      local_176c = &DAT_00777e58;
    }
    else {
      local_176c = &DAT_00777e54;
    }
    FUN_00414e80();
    local_1620 = (char *)&local_1008;
    local_199c = (int)&local_1008 + 1;
    do {
      local_1541 = *local_1620;
      local_1620 = local_1620 + 1;
    } while (local_1541 != '\0');
    local_19a0 = (int)local_1620 - local_199c;
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b874a;
    local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_19a0,&local_14f0,
                           0x10);
  }
  if (*(int *)(local_14f4 + 0x21c) != 0) {
    local_14f0.top = local_14f0.top + 1 + local_14f8;
    if (*(int *)(local_14f4 + 0x21c) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    if (*(int *)(local_14f4 + 0x21c) < 1) {
      local_1770 = &DAT_00777e38;
    }
    else {
      local_1770 = &DAT_00777e6c;
    }
    FUN_00414e80();
    local_1624 = (char *)&local_1008;
    local_19a4 = (int)&local_1008 + 1;
    do {
      local_1542 = *local_1624;
      local_1624 = local_1624 + 1;
    } while (local_1542 != '\0');
    local_19a8 = (int)local_1624 - local_19a4;
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b8874;
    local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_19a8,&local_14f0,
                           0x10);
  }
  if (*(int *)(local_14f4 + 0x220) != 0) {
    local_14f0.top = local_14f0.top + 1 + local_14f8;
    if (*(int *)(local_14f4 + 0x220) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    if (*(int *)(local_14f4 + 0x220) < 1) {
      local_1774 = &DAT_00777e50;
    }
    else {
      local_1774 = &DAT_00777e4c;
    }
    FUN_00414e80();
    local_1628 = (char *)&local_1008;
    local_19ac = (int)&local_1008 + 1;
    do {
      local_1543 = *local_1628;
      local_1628 = local_1628 + 1;
    } while (local_1543 != '\0');
    local_19b0 = (int)local_1628 - local_19ac;
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b899e;
    local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_19b0,&local_14f0,
                           0x10);
  }
  if (*(int *)(local_14f4 + 0x224) != 0) {
    local_14f0.top = local_14f0.top + 1 + local_14f8;
    if (*(int *)(local_14f4 + 0x224) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    if (*(int *)(local_14f4 + 0x224) < 1) {
      local_1778 = &DAT_00777ea0;
    }
    else {
      local_1778 = &DAT_00777e9c;
    }
    FUN_00414e80();
    local_162c = (char *)&local_1008;
    local_19b4 = (int)&local_1008 + 1;
    do {
      local_1544 = *local_162c;
      local_162c = local_162c + 1;
    } while (local_1544 != '\0');
    local_19b8 = (int)local_162c - local_19b4;
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b8ac8;
    local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_19b8,&local_14f0,
                           0x10);
  }
  if (*(int *)(local_14f4 + 0x228) != 0) {
    local_14f0.top = local_14f0.top + 1 + local_14f8;
    if (*(int *)(local_14f4 + 0x228) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    if (*(int *)(local_14f4 + 0x228) < 1) {
      local_177c = &DAT_00777e74;
    }
    else {
      local_177c = &DAT_00777e70;
    }
    FUN_00414e80();
    local_1630 = (char *)&local_1008;
    local_19bc = (int)&local_1008 + 1;
    do {
      local_1545 = *local_1630;
      local_1630 = local_1630 + 1;
    } while (local_1545 != '\0');
    local_19c0 = (int)local_1630 - local_19bc;
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b8bf2;
    local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_19c0,&local_14f0,
                           0x10);
  }
  if (*(int *)(local_14f4 + 0x22c) != 0) {
    local_14f0.top = local_14f0.top + 1 + local_14f8;
    if (*(int *)(local_14f4 + 0x22c) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    if (*(int *)(local_14f4 + 0x22c) < 1) {
      local_1780 = &DAT_00777ee0;
    }
    else {
      local_1780 = &DAT_00777e88;
    }
    FUN_00414e80();
    local_1634 = (char *)&local_1008;
    local_19c4 = (int)&local_1008 + 1;
    do {
      local_1546 = *local_1634;
      local_1634 = local_1634 + 1;
    } while (local_1546 != '\0');
    local_19c8 = (int)local_1634 - local_19c4;
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b8d1c;
    local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_19c8,&local_14f0,
                           0x10);
  }
  if (*(int *)(local_14f4 + 0x234) != 0) {
    local_14f0.top = local_14f0.top + 1 + local_14f8;
    if (*(int *)(local_14f4 + 0x234) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    if (*(int *)(local_14f4 + 0x234) < 1) {
      local_1784 = &DAT_00777ef8;
    }
    else {
      local_1784 = &DAT_00777ef4;
    }
    FUN_00414e80();
    local_1638 = (char *)&local_1008;
    local_19cc = (int)&local_1008 + 1;
    do {
      local_1547 = *local_1638;
      local_1638 = local_1638 + 1;
    } while (local_1547 != '\0');
    local_19d0 = (int)local_1638 - local_19cc;
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b8e46;
    local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_19d0,&local_14f0,
                           0x10);
  }
  if (*(int *)(local_14f4 + 0x238) != 0) {
    local_14f0.top = local_14f0.top + 1 + local_14f8;
    if (*(int *)(local_14f4 + 0x238) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    if (*(int *)(local_14f4 + 0x238) < 1) {
      local_1788 = &DAT_00777ecc;
    }
    else {
      local_1788 = &DAT_00777ec8;
    }
    FUN_00414e80();
    local_163c = (char *)&local_1008;
    local_19d4 = (int)&local_1008 + 1;
    do {
      local_1548 = *local_163c;
      local_163c = local_163c + 1;
    } while (local_1548 != '\0');
    local_19d8 = (int)local_163c - local_19d4;
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b8f70;
    local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_19d8,&local_14f0,
                           0x10);
  }
  if (*(int *)(local_14f4 + 0x23c) != 0) {
    local_14f0.top = local_14f0.top + 1 + local_14f8;
    if (*(int *)(local_14f4 + 0x23c) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    if (*(int *)(local_14f4 + 0x23c) < 1) {
      local_178c = &DAT_00777f1c;
    }
    else {
      local_178c = &DAT_00777f18;
    }
    FUN_00414e80();
    local_1640 = (char *)&local_1008;
    local_19dc = (int)&local_1008 + 1;
    do {
      local_1549 = *local_1640;
      local_1640 = local_1640 + 1;
    } while (local_1549 != '\0');
    local_19e0 = (int)local_1640 - local_19dc;
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b909a;
    local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_19e0,&local_14f0,
                           0x10);
  }
  if (*(int *)(local_14f4 + 0x240) != 0) {
    local_14f0.top = local_14f0.top + 1 + local_14f8;
    if (*(int *)(local_14f4 + 0x240) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    if (*(int *)(local_14f4 + 0x240) < 1) {
      local_1790 = &DAT_00777efc;
    }
    else {
      local_1790 = &DAT_00777f30;
    }
    FUN_00414e80();
    local_1644 = (char *)&local_1008;
    local_19e4 = (int)&local_1008 + 1;
    do {
      local_154a = *local_1644;
      local_1644 = local_1644 + 1;
    } while (local_154a != '\0');
    local_19e8 = (int)local_1644 - local_19e4;
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b91c4;
    local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_19e8,&local_14f0,
                           0x10);
  }
  if (*(int *)(local_14f4 + 0x244) != 0) {
    local_14f0.top = local_14f0.top + 1 + local_14f8;
    if (*(int *)(local_14f4 + 0x244) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    if (*(int *)(local_14f4 + 0x244) < 1) {
      local_1794 = &DAT_00777f14;
    }
    else {
      local_1794 = &DAT_00777f10;
    }
    FUN_00414e80();
    local_1648 = (char *)&local_1008;
    local_19ec = (int)&local_1008 + 1;
    do {
      local_154b = *local_1648;
      local_1648 = local_1648 + 1;
    } while (local_154b != '\0');
    local_19f0 = (int)local_1648 - local_19ec;
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b92ee;
    local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_19f0,&local_14f0,
                           0x10);
  }
  if (*(int *)(local_14f4 + 0x24c) != 0) {
    local_14f0.top = local_14f0.top + 1 + local_14f8;
    if (*(int *)(local_14f4 + 0x24c) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    if (*(int *)(local_14f4 + 0x24c) < 1) {
      local_1798 = &DAT_00777f74;
    }
    else {
      local_1798 = &DAT_00777f70;
    }
    FUN_00414e80();
    local_164c = (char *)&local_1008;
    local_19f4 = (int)&local_1008 + 1;
    do {
      local_154c = *local_164c;
      local_164c = local_164c + 1;
    } while (local_154c != '\0');
    local_19f8 = (int)local_164c - local_19f4;
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b9418;
    local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_19f8,&local_14f0,
                           0x10);
  }
  if (*(int *)(local_14f4 + 0x248) != 0) {
    local_14f0.top = local_14f0.top + 1 + local_14f8;
    if (*(int *)(local_14f4 + 0x248) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    if (*(int *)(local_14f4 + 0x248) < 1) {
      local_179c = &DAT_00777f38;
    }
    else {
      local_179c = &DAT_00777f34;
    }
    FUN_00414e80();
    local_1650 = (char *)&local_1008;
    local_19fc = (int)&local_1008 + 1;
    do {
      local_154d = *local_1650;
      local_1650 = local_1650 + 1;
    } while (local_154d != '\0');
    local_1a00 = (int)local_1650 - local_19fc;
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b9542;
    local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1a00,&local_14f0,
                           0x10);
  }
  cVar1 = FUN_00427e30();
  if (cVar1 != '\0') {
    local_14f0.top = local_14f0.top + 1 + local_14f8;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    cVar1 = FUN_00427c60();
    if (cVar1 == '\0') {
      cVar1 = FUN_00427c60();
      if (cVar1 == '\0') {
        cVar1 = FUN_00427c60();
        if (cVar1 == '\0') {
          cVar1 = FUN_00427c60();
          if (cVar1 == '\0') {
            pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b96e0;
            local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&DAT_00778030,10,&local_14f0,0x10);
          }
          else {
            pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b96b8;
            local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&DAT_00777fbc,10,&local_14f0,0x10);
          }
        }
        else {
          pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b966f;
          local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&DAT_00777fa0,10,&local_14f0,0x10);
        }
      }
      else {
        pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b9625;
        local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&DAT_00777ff4,10,&local_14f0,0x10);
      }
    }
    else {
      pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b95d9;
      local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&DAT_00777fd8,10,&local_14f0,0x10);
    }
  }
  if (*(int *)(local_14f4 + 0x250) != 0) {
    local_14f0.top = local_14f0.top + 1 + local_14f8;
    if (*(int *)(local_14f4 + 0x250) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    FUN_00414e80();
    local_1654 = (char *)&local_1008;
    local_1a04 = (int)&local_1008 + 1;
    do {
      local_154e = *local_1654;
      local_1654 = local_1654 + 1;
    } while (local_154e != '\0');
    local_1a08 = (int)local_1654 - local_1a04;
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b97f3;
    local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1a08,&local_14f0,
                           0x10);
  }
  if (*(int *)(local_14f4 + 0x254) != 0) {
    local_14f0.top = local_14f0.top + 1 + local_14f8;
    if (*(int *)(local_14f4 + 0x254) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    FUN_00414e80();
    local_1658 = (char *)&local_1008;
    local_1a0c = (int)&local_1008 + 1;
    do {
      local_154f = *local_1658;
      local_1658 = local_1658 + 1;
    } while (local_154f != '\0');
    local_1a10 = (int)local_1658 - local_1a0c;
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b98f0;
    local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1a10,&local_14f0,
                           0x10);
  }
  if (*(int *)(local_14f4 + 600) != 0) {
    local_14f0.top = local_14f0.top + 1 + local_14f8;
    if (*(int *)(local_14f4 + 600) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    FUN_00414e80();
    local_165c = (char *)&local_1008;
    local_1a14 = (int)&local_1008 + 1;
    do {
      local_1550 = *local_165c;
      local_165c = local_165c + 1;
    } while (local_1550 != '\0');
    local_1a18 = (int)local_165c - local_1a14;
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b99ee;
    local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1a18,&local_14f0,
                           0x10);
  }
  if (*(int *)(local_14f4 + 0x260) != 0) {
    local_14f0.top = local_14f0.top + 1 + local_14f8;
    if (*(int *)(local_14f4 + 0x260) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    FUN_00414e80();
    local_1660 = (char *)&local_1008;
    local_1a1c = (int)&local_1008 + 1;
    do {
      local_1551 = *local_1660;
      local_1660 = local_1660 + 1;
    } while (local_1551 != '\0');
    local_1a20 = (int)local_1660 - local_1a1c;
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b9aed;
    local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1a20,&local_14f0,
                           0x10);
  }
  if (*(int *)(local_14f4 + 0x264) != 0) {
    local_14f0.top = local_14f0.top + 1 + local_14f8;
    if (*(int *)(local_14f4 + 0x264) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    FUN_00414e80();
    local_1664 = (char *)&local_1008;
    local_1a24 = (int)&local_1008 + 1;
    do {
      local_1552 = *local_1664;
      local_1664 = local_1664 + 1;
    } while (local_1552 != '\0');
    local_1a28 = (int)local_1664 - local_1a24;
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b9bea;
    local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1a28,&local_14f0,
                           0x10);
  }
  local_17a0 = local_14f4 + 0x2b8;
  local_170c = game_loop_helper_018d0();
  local_1a2c = game_loop_helper_018b0();
  for (; local_170c != local_1a2c; local_170c = local_170c + 0x20) {
    local_173c = local_170c;
    local_14f0.top = local_14f0.top + 1 + local_14f8;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    local_1b30 = (undefined1 *)&pfStack_1bd0;
    iStack_1bd4 = local_173c;
    puStack_1bd8 = (undefined1 *)0x6b9ca9;
    FUN_00405520();
    iStack_1bd4 = 0x6b9cae;
    local_1a30 = FUN_004caab0();
    local_1a34 = FUN_005d9da0();
    npk_get_relative_res_path();
    FUN_00414e80();
    local_1668 = (char *)&local_1008;
    local_1a38 = (int)&local_1008 + 1;
    do {
      local_1553 = *local_1668;
      local_1668 = local_1668 + 1;
    } while (local_1553 != '\0');
    local_1a3c = (int)local_1668 - local_1a38;
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b9d64;
    local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1a3c,&local_14f0,
                           0x10);
  }
  cVar1 = FUN_00427e30();
  if (cVar1 != '\0') {
    cVar1 = FUN_00427c60();
    if (cVar1 == '\0') {
      cVar1 = FUN_00427c60();
      if (cVar1 != '\0') {
        local_14f0.top = local_14f0.top + 1 + local_14f8;
        SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
        local_1b38 = (undefined1 *)&pfStack_1bc8;
        pfStack_1bcc = (function<void___cdecl(void)> *)(local_14f4 + 0x268);
        pfStack_1bd0 = (function<void___cdecl(void)> *)0x6b9f51;
        FUN_00405520();
        pfStack_1bcc = local_14e0;
        pfStack_1bd0 = (function<void___cdecl(void)> *)0x6b9f5d;
        local_1a54 = FUN_004c7e10();
        local_1a50 = local_1a54;
        npk_get_relative_res_path();
        pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b9fa9;
        FUN_00414e80();
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_14e0);
        local_1670 = (char *)&local_1008;
        local_1a58 = (int)&local_1008 + 1;
        do {
          local_1555 = *local_1670;
          local_1670 = local_1670 + 1;
        } while (local_1555 != '\0');
        local_1a5c = (int)local_1670 - local_1a58;
        pfStack_1bc8 = (function<void___cdecl(void)> *)0x6ba02a;
        local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1a5c,
                               &local_14f0,0x10);
      }
    }
    else {
      local_14f0.top = local_14f0.top + 1 + local_14f8;
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
      local_1b34 = (undefined1 *)&pfStack_1bc8;
      pfStack_1bcc = (function<void___cdecl(void)> *)(local_14f4 + 0x268);
      pfStack_1bd0 = (function<void___cdecl(void)> *)0x6b9e01;
      FUN_00405520();
      pfStack_1bcc = local_14c8;
      pfStack_1bd0 = (function<void___cdecl(void)> *)0x6b9e0d;
      local_1a44 = FUN_004c7e10();
      local_1a40 = local_1a44;
      npk_get_relative_res_path();
      pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b9e59;
      FUN_00414e80();
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_14c8);
      local_16b4 = (char *)&local_1008;
      local_1a48 = (int)&local_1008 + 1;
      do {
        local_1554 = *local_16b4;
        local_16b4 = local_16b4 + 1;
      } while (local_1554 != '\0');
      local_1a4c = (int)local_16b4 - local_1a48;
      pfStack_1bc8 = (function<void___cdecl(void)> *)0x6b9ed9;
      local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1a4c,
                             &local_14f0,0x10);
    }
  }
  cVar1 = FUN_00427c60();
  if ((((cVar1 != '\0') || (cVar1 = FUN_00427c60(), cVar1 != '\0')) ||
      (cVar1 = FUN_00427c60(), cVar1 != '\0')) ||
     ((cVar1 = FUN_00427c60(), cVar1 != '\0' || (cVar1 = FUN_00427c60(), cVar1 != '\0')))) {
    game_get_player_or_session_blob();
    iVar3 = FUN_006ca800();
    if (iVar3 != 0) {
      game_loop_helper_e9240();
      iVar3 = game_loop_helper_cc840();
      if (*(int *)(iVar3 + 0x140) == 0) {
        local_14f0.top = local_14f0.top + local_14f8 * 2 + 2;
        SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),local_1504);
        local_1008 = 0xbcbcb25b;
        local_1004 = 0xcdabbed7;
        local_1000 = CONCAT13(local_1000._3_1_,0x5da8);
        local_1674 = (char *)&local_1008;
        local_1a60 = (int)&local_1008 + 1;
        do {
          local_1556 = *local_1674;
          local_1674 = local_1674 + 1;
        } while (local_1556 != '\0');
        local_1a64 = (int)local_1674 - local_1a60;
        pfStack_1bc8 = (function<void___cdecl(void)> *)0x6ba1fd;
        local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1a64,
                               &local_14f0,0x10);
        local_14f0.top = local_14f0.top + 1 + local_14f8;
        game_get_player_or_session_blob();
        FUN_0047bcc0();
        FUN_00414e80();
        local_1678 = (char *)&local_1008;
        local_1a68 = (int)&local_1008 + 1;
        do {
          local_1557 = *local_1678;
          local_1678 = local_1678 + 1;
        } while (local_1557 != '\0');
        local_1a6c = (int)local_1678 - local_1a68;
        pfStack_1bc8 = (function<void___cdecl(void)> *)0x6ba2b3;
        local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1a6c,
                               &local_14f0,0x10);
        local_14f0.top = local_14f0.top + 1 + local_14f8;
        game_get_player_or_session_blob();
        FUN_0047bcc0();
        game_get_player_or_session_blob();
        FUN_0047bcc0();
        game_loop_helper_e9240();
        game_loop_helper_cc840();
        FUN_00414e80();
        local_167c = (char *)&local_1008;
        local_1a70 = (int)&local_1008 + 1;
        do {
          local_1558 = *local_167c;
          local_167c = local_167c + 1;
        } while (local_1558 != '\0');
        local_1a74 = (int)local_167c - local_1a70;
        pfStack_1bc8 = (function<void___cdecl(void)> *)0x6ba3a9;
        local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1a74,
                               &local_14f0,0x10);
        goto LAB_006baca0;
      }
    }
    game_get_player_or_session_blob();
    iVar3 = FUN_006ca800();
    if (iVar3 != 0) {
      game_loop_helper_e9240();
      iVar3 = game_loop_helper_cc840();
      if (*(int *)(iVar3 + 0x140) == 2) {
        local_14f0.top = local_14f0.top + local_14f8 * 2 + 2;
        SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),local_1504);
        local_1008 = 0xbce1c75b;
        local_1004 = 0xcdabbed7;
        local_1000 = CONCAT13(local_1000._3_1_,0x5da8);
        local_1680 = (char *)&local_1008;
        local_1a78 = (int)&local_1008 + 1;
        do {
          local_1559 = *local_1680;
          local_1680 = local_1680 + 1;
        } while (local_1559 != '\0');
        local_1a7c = (int)local_1680 - local_1a78;
        pfStack_1bc8 = (function<void___cdecl(void)> *)0x6ba4d6;
        local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1a7c,
                               &local_14f0,0x10);
        local_14f0.top = local_14f0.top + 1 + local_14f8;
        game_get_player_or_session_blob();
        FUN_0047bcc0();
        game_get_player_or_session_blob();
        FUN_0047bcc0();
        game_loop_helper_e9240();
        game_loop_helper_cc840();
        FUN_00414e80();
        local_1684 = (char *)&local_1008;
        local_1a80 = (int)&local_1008 + 1;
        do {
          local_155a = *local_1684;
          local_1684 = local_1684 + 1;
        } while (local_155a != '\0');
        local_1a84 = (int)local_1684 - local_1a80;
        pfStack_1bc8 = (function<void___cdecl(void)> *)0x6ba5cc;
        local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1a84,
                               &local_14f0,0x10);
        local_14f0.top = local_14f0.top + 1 + local_14f8;
        game_get_player_or_session_blob();
        FUN_0047bcc0();
        FUN_00414e80();
        local_1688 = (char *)&local_1008;
        local_1aec = (int)&local_1008 + 1;
        do {
          local_155b = *local_1688;
          local_1688 = local_1688 + 1;
        } while (local_155b != '\0');
        local_1a8c = (int)local_1688 - local_1aec;
        pfStack_1bc8 = (function<void___cdecl(void)> *)0x6ba682;
        local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1a8c,
                               &local_14f0,0x10);
        goto LAB_006baca0;
      }
    }
    game_get_player_or_session_blob();
    iVar3 = FUN_006ca800();
    if (iVar3 != 0) {
      game_loop_helper_e9240();
      iVar3 = game_loop_helper_cc840();
      if (*(int *)(iVar3 + 0x140) == 3) {
        local_14f0.top = local_14f0.top + local_14f8 * 2 + 2;
        SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),local_1504);
        local_1008 = 0xb1f1bf5b;
        local_1004 = 0xbcd8d6a9;
        local_1000 = 0xbea8d7d7;
        local_ffc = 0x5dab;
        local_ffa = 0;
        local_168c = (char *)&local_1008;
        local_1a90 = (int)&local_1008 + 1;
        do {
          local_155c = *local_168c;
          local_168c = local_168c + 1;
        } while (local_155c != '\0');
        local_1a94 = (int)local_168c - local_1a90;
        pfStack_1bc8 = (function<void___cdecl(void)> *)0x6ba7b7;
        local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1a94,
                               &local_14f0,0x10);
        local_14f0.top = local_14f0.top + 1 + local_14f8;
        game_get_player_or_session_blob();
        FUN_0047bcc0();
        game_loop_helper_e9240();
        game_loop_helper_cc840();
        FUN_00414e80();
        local_1690 = (char *)&local_1008;
        local_1a98 = (int)&local_1008 + 1;
        do {
          local_155d = *local_1690;
          local_1690 = local_1690 + 1;
        } while (local_155d != '\0');
        local_1a9c = (int)local_1690 - local_1a98;
        pfStack_1bc8 = (function<void___cdecl(void)> *)0x6ba893;
        local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1a9c,
                               &local_14f0,0x10);
        local_14f0.top = local_14f0.top + 1 + local_14f8;
        game_get_player_or_session_blob();
        FUN_0047bcc0();
        game_get_player_or_session_blob();
        FUN_0047bcc0();
        game_loop_helper_e9240();
        game_loop_helper_cc840();
        FUN_00414e80();
        local_1694 = (char *)&local_1008;
        local_1aa0 = (int)&local_1008 + 1;
        do {
          local_155e = *local_1694;
          local_1694 = local_1694 + 1;
        } while (local_155e != '\0');
        local_1aa4 = (int)local_1694 - local_1aa0;
        pfStack_1bc8 = (function<void___cdecl(void)> *)0x6ba983;
        local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1aa4,
                               &local_14f0,0x10);
        goto LAB_006baca0;
      }
    }
    game_get_player_or_session_blob();
    iVar3 = FUN_006ca800();
    if (iVar3 != 0) {
      game_loop_helper_e9240();
      iVar3 = game_loop_helper_cc840();
      if (*(int *)(iVar3 + 0x140) == 4) {
        local_14f0.top = local_14f0.top + local_14f8 * 2 + 2;
        SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),local_1504);
        local_1008 = 0xb6a8b25b;
        local_1004 = 0xbce5b0af;
        local_1000 = 0xbea8d7d7;
        local_ffc = 0x5dab;
        local_ffa = 0;
        local_1698 = (char *)&local_1008;
        local_1aa8 = (int)&local_1008 + 1;
        do {
          local_155f = *local_1698;
          local_1698 = local_1698 + 1;
        } while (local_155f != '\0');
        local_1aac = (int)local_1698 - local_1aa8;
        pfStack_1bc8 = (function<void___cdecl(void)> *)0x6baaba;
        local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1aac,
                               &local_14f0,0x10);
        local_14f0.top = local_14f0.top + 1 + local_14f8;
        game_get_player_or_session_blob();
        FUN_0047bcc0();
        game_get_player_or_session_blob();
        FUN_0047bcc0();
        game_loop_helper_e9240();
        game_loop_helper_cc840();
        FUN_00414e80();
        local_169c = (char *)&local_1008;
        local_1ab0 = (int)&local_1008 + 1;
        do {
          local_1560 = *local_169c;
          local_169c = local_169c + 1;
        } while (local_1560 != '\0');
        local_1ab4 = (int)local_169c - local_1ab0;
        pfStack_1bc8 = (function<void___cdecl(void)> *)0x6babaa;
        local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1ab4,
                               &local_14f0,0x10);
        local_14f0.top = local_14f0.top + 1 + local_14f8;
        game_get_player_or_session_blob();
        FUN_0047bcc0();
        game_get_player_or_session_blob();
        FUN_0047bcc0();
        game_loop_helper_e9240();
        game_loop_helper_cc840();
        FUN_00414e80();
        local_16a0 = (char *)&local_1008;
        local_1ab8 = (int)&local_1008 + 1;
        do {
          local_1561 = *local_16a0;
          local_16a0 = local_16a0 + 1;
        } while (local_1561 != '\0');
        local_1abc = (int)local_16a0 - local_1ab8;
        pfStack_1bc8 = (function<void___cdecl(void)> *)0x6bac9a;
        local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1abc,
                               &local_14f0,0x10);
      }
    }
  }
LAB_006baca0:
  cVar1 = FUN_00427e30();
  if (cVar1 != '\0') {
    local_14f0.top = local_14f0.top + local_14f8 + 0xe;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    npk_get_relative_res_path();
    FUN_00414e80();
    local_16a4 = (char *)&local_1008;
    local_1ac0 = (int)&local_1008 + 1;
    do {
      local_1562 = *local_16a4;
      local_16a4 = local_16a4 + 1;
    } while (local_1562 != '\0');
    local_1ac4 = (int)local_16a4 - local_1ac0;
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6bad8b;
    local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1ac4,&local_14f0,
                           0x10);
  }
  cVar1 = FUN_00427e30();
  if ((cVar1 == '\0') || (cVar1 = FUN_00427e30(), cVar1 == '\0')) {
    cVar1 = FUN_00427e30();
    if ((cVar1 != '\0') && (cVar1 = FUN_00427e30(), cVar1 != '\0')) {
      local_14f0.top = local_14f0.top + local_14f8 + 0xe;
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
      npk_get_relative_res_path();
      FUN_00414e80();
      local_16ac = (char *)&local_1008;
      local_1ad0 = (int)&local_1008 + 1;
      do {
        local_1564 = *local_16ac;
        local_16ac = local_16ac + 1;
      } while (local_1564 != '\0');
      local_1ad4 = (int)local_16ac - local_1ad0;
      pfStack_1bc8 = (function<void___cdecl(void)> *)0x6bafb6;
      local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1ad4,
                             &local_14f0,0x10);
    }
  }
  else {
    local_14f0.top = local_14f0.top + local_14f8 + 0xe;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    npk_get_relative_res_path();
    FUN_00414e80();
    local_16a8 = (char *)&local_1008;
    local_1ac8 = (int)&local_1008 + 1;
    do {
      local_1563 = *local_16a8;
      local_16a8 = local_16a8 + 1;
    } while (local_1563 != '\0');
    local_1acc = (int)local_16a8 - local_1ac8;
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6bae9e;
    local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1acc,&local_14f0,
                           0x10);
  }
  cVar1 = FUN_00427e30();
  if (cVar1 != '\0') {
    local_14f0.top = local_14f0.top + local_14f8 + 0xe;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
    npk_get_relative_res_path();
    FUN_00414e80();
    local_16b0 = (char *)&local_1008;
    local_1ad8 = (int)&local_1008 + 1;
    do {
      local_1579 = *local_16b0;
      local_16b0 = local_16b0 + 1;
    } while (local_1579 != '\0');
    local_1adc = (int)local_16b0 - local_1ad8;
    pfStack_1bc8 = (function<void___cdecl(void)> *)0x6bb0ae;
    local_14f8 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1adc,&local_14f0,
                           0x10);
  }
  local_14f0.top = local_14f0.top + local_14f8 + 7;
  local_1ae0 = SelectObject(*(HDC *)(DAT_007ca1a4 + 0x1c),local_17a4);
  local_1b3c = GetBitmapBits(local_1ae0,local_1578,local_1510);
  for (local_1524 = 0; local_1524 < local_1578 >> 2; local_1524 = local_1524 + 1) {
    if (*(int *)(local_1510 + local_1524 * 4) != 0) {
      *(uint *)(local_1510 + local_1524 * 4) =
           (*(uint *)(local_1510 + local_1524 * 4) & 0xff0000) >> 0x10 |
           (*(uint *)(local_1510 + local_1524 * 4) & 0xff) << 0x10 |
           *(uint *)(local_1510 + local_1524 * 4) & 0xff00ff00;
    }
  }
  for (local_1500 = 0; local_1500 < local_1578 >> 2; local_1500 = local_1500 + 1) {
    local_1508 = local_1510;
    if ((*(uint *)(local_1510 + local_1500 * 4) & 0xffffff) != 0) {
      if (*(int *)(local_1510 + (local_1500 - (int)local_150c) * 4 + -4) == local_151c) {
        *(undefined4 *)(local_1510 + (local_1500 - (int)local_150c) * 4 + -4) = local_1528;
      }
      if (*(int *)(local_1510 + (local_1500 - (int)local_150c) * 4 + 4) == local_151c) {
        *(undefined4 *)(local_1510 + (local_1500 - (int)local_150c) * 4 + 4) = local_1528;
      }
      if (*(int *)(local_1510 + (local_1500 - (int)local_150c) * 4) == local_151c) {
        *(undefined4 *)(local_1510 + (local_1500 - (int)local_150c) * 4) = local_1528;
      }
      if (*(int *)(local_1510 + local_1500 * 4 + -4) == local_151c) {
        *(undefined4 *)(local_1510 + local_1500 * 4 + -4) = local_1528;
      }
      if (*(int *)(local_1510 + local_1500 * 4 + 4) == local_151c) {
        *(undefined4 *)(local_1510 + local_1500 * 4 + 4) = local_1528;
      }
      if (*(int *)(local_1510 + (int)(local_150c + local_1500) * 4 + -4) == local_151c) {
        *(undefined4 *)(local_1510 + (int)(local_150c + local_1500) * 4 + -4) = local_1528;
      }
      if (*(int *)(local_1510 + (int)(local_150c + local_1500) * 4) == local_151c) {
        *(undefined4 *)(local_1510 + (int)(local_150c + local_1500) * 4) = local_1528;
      }
      if (*(int *)(local_1510 + (int)(local_150c + local_1500) * 4 + 4) == local_151c) {
        *(undefined4 *)(local_1510 + (int)(local_150c + local_1500) * 4 + 4) = local_1528;
      }
    }
  }
  for (local_1590 = 0; local_1590 < local_1578 >> 2; local_1590 = local_1590 + 1) {
    if (*(int *)(local_1510 + local_1590 * 4) != 0) {
      *(uint *)(local_1510 + local_1590 * 4) = *(uint *)(local_1510 + local_1590 * 4) | 0xff000000;
    }
  }
  local_1ae4 = DeleteObject(local_1740);
  local_1ae4 = DeleteObject(local_17a4);
  pfStack_1bc8 = (function<void___cdecl(void)> *)local_14f0.top;
  pfStack_1bcc = local_150c;
  pfStack_1bd0 = *(function<void___cdecl(void)> **)(DAT_007ca1a4 + 4);
  iStack_1bd4 = 0x6bb47b;
  local_1714 = D3DXCreateTexture();
  pfStack_1bc8 = (function<void___cdecl(void)> *)0x6bb4ae;
  local_1714 = (**(code **)(**(int **)(local_14fc + 0xe8) + 0x4c))();
  pfStack_1bc8 = (function<void___cdecl(void)> *)((int)local_150c * local_14f0.top * 4);
  pfStack_1bcc = local_1510;
  pfStack_1bd0 = local_1af0;
  iStack_1bd4 = 0x6bb4d8;
  FUN_006e6bd0();
  pfStack_1bc8 = local_1510;
  pfStack_1bcc = (function<void___cdecl(void)> *)0x6bb4e7;
  FUN_006f1902();
  pfStack_1bc8 = (function<void___cdecl(void)> *)0x0;
  pfStack_1bcc = *(function<void___cdecl(void)> **)(local_14fc + 0xe8);
  pfStack_1bd0 = (function<void___cdecl(void)> *)0x6bb50c;
  local_1714 = (**(code **)(**(int **)(local_14fc + 0xe8) + 0x50))();
  pfStack_1bd0 = (function<void___cdecl(void)> *)0x3;
  iStack_1bd4 = local_14f0.top / 0xd;
  puStack_1bd8 = (undefined1 *)0x10;
  local_1b40 = (undefined1 *)&uStack_1bf0;
  FUN_004054a0("ceshiceshi");
  local_1ae8 = (undefined4 *)d3d9_create_texture_004b7f20(local_1ba8);
  puVar4 = local_1ae8;
  puVar5 = (undefined4 *)(local_14fc + 0xc0);
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  pfStack_1bd0 = (function<void___cdecl(void)> *)0x0;
  iStack_1bd4 = 0;
  puStack_1bd8 = local_1af4;
  uStack_1bdc = 0;
  uStack_1be0 = *(undefined4 *)(local_14fc + 0xc0);
  pcStack_1be4 = (char *)0x6bb598;
  local_1714 = (**(code **)(**(int **)(local_14fc + 0xc0) + 0x4c))();
  pcStack_1be4 = "sprite/interface/popup.img";
  uStack_1be8 = 0x6bb5ae;
  local_1744 = FUN_005855f0();
  for (local_1710 = 0; local_1710 < 0x10; local_1710 = local_1710 + 1) {
    pcStack_1be4 = *(char **)(*(int *)(local_1744 + 0x40) + 0x1690);
    uStack_1be8 = *(undefined4 *)(*(int *)(local_1744 + 0x40) + 0x16a4);
    pfStack_1bec = local_1af0 +
                   local_1710 * 0x30 + (local_17a8 + 6) * *(int *)(local_14fc + 0xcc) * 4 + 0x18;
    uStack_1bf0 = 0x6bb63a;
    FUN_006e6bd0();
  }
  pcStack_1be4 = (char *)local_1744;
  uStack_1be8 = 0x6bb651;
  FUN_005856e0();
  pcStack_1be4 = (char *)0x0;
  uStack_1be8 = *(undefined4 *)(local_14fc + 0xc0);
  pfStack_1bec = (function<void___cdecl(void)> *)0x6bb673;
  (**(code **)(**(int **)(local_14fc + 0xc0) + 0x50))();
  puVar4 = (undefined4 *)(local_14fc + 0xc0);
  puVar5 = param_1;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  return param_1;
}


/* ==== 006bb6b0  d3d9_create_texture_006bb6b0  size=8381 ==== */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * d3d9_create_texture_006bb6b0(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  LPCSTR pCVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  bool bVar7;
  undefined4 uStack_1350;
  int iStack_134c;
  undefined4 uStack_1348;
  char *pcStack_1344;
  undefined4 uStack_1340;
  undefined4 uStack_133c;
  undefined1 *puStack_1338;
  function<void___cdecl(void)> *pfStack_1334;
  int iStack_1330;
  function<void___cdecl(void)> *pfStack_132c;
  function<void___cdecl(void)> *pfStack_1328;
  tagRECT *ptVar8;
  UINT UVar9;
  undefined1 local_1308 [40];
  undefined1 *local_12e0;
  undefined1 *local_12dc;
  undefined1 *local_12d8;
  char *local_12d4;
  undefined1 *local_12d0;
  HGDIOBJ local_12cc;
  LONG local_12c8;
  undefined4 local_12c4;
  undefined4 local_12c0;
  undefined1 *local_12bc;
  LONG local_12b8;
  undefined1 *local_12b4;
  undefined1 *local_12b0;
  undefined4 local_12ac;
  undefined1 *local_12a8;
  undefined1 *local_12a4;
  undefined1 *local_12a0;
  undefined1 *local_129c;
  undefined4 local_1298;
  undefined4 local_1294;
  undefined1 *local_1290;
  undefined4 local_128c;
  undefined1 *local_1288;
  undefined1 *local_1284;
  undefined1 *local_1280;
  int local_127c;
  undefined4 local_1278;
  int local_1274;
  int local_1270;
  int local_126c;
  char *local_1268;
  int local_1264;
  undefined1 local_1260 [4];
  int local_125c;
  int local_1258;
  undefined4 *local_1254;
  BOOL local_1250;
  HBITMAP local_124c;
  int local_1248;
  int local_1244;
  char *local_1240;
  int local_123c;
  int local_1238;
  int local_1234;
  undefined4 local_1230;
  undefined4 local_122c;
  int local_1228;
  int local_1224;
  undefined4 local_1220;
  undefined4 local_121c;
  undefined1 *local_1218;
  int local_1214;
  int local_1210;
  undefined4 local_120c;
  undefined4 local_1208;
  undefined4 local_1204;
  undefined4 local_1200;
  undefined1 *local_11fc;
  undefined1 *local_11f8;
  int local_11f4;
  int local_11f0;
  int local_11ec;
  int local_11e8;
  undefined4 local_11e4;
  undefined4 local_11e0;
  int local_11dc;
  int local_11d8;
  int local_11d4;
  undefined4 local_11d0;
  undefined4 local_11cc;
  int local_11c8;
  int local_11c4;
  int local_11c0;
  undefined4 local_11bc;
  undefined4 local_11b8;
  undefined4 local_11b4;
  int local_11b0;
  int local_11ac;
  int local_11a8;
  int local_11a4;
  uint local_11a0;
  int local_119c;
  int local_1198;
  undefined4 local_1194;
  undefined4 local_1190;
  int local_118c;
  HBITMAP local_1188;
  int local_1184;
  int local_1180;
  int local_117c;
  uint local_1178;
  int local_1174;
  int local_1170;
  HBITMAP local_116c;
  int local_1168;
  int local_1164;
  char *local_1160;
  undefined4 local_115c;
  uint local_1158;
  int local_1154;
  int local_1150;
  byte *local_114c;
  byte *local_1148;
  char *local_1144;
  uint local_1140;
  char *local_113c;
  char *local_1138;
  char *local_1134;
  char *local_1130;
  char *local_112c;
  char *local_1128;
  char *local_1124;
  char *local_1120;
  char *local_111c;
  COLORREF local_1118;
  char *local_1114;
  char *local_1110;
  char *local_110c;
  char *local_1108;
  char *local_1104;
  undefined *local_1100;
  char *local_10fc;
  char *local_10f8;
  uint local_10f4;
  char local_10f0;
  char local_10ef;
  char local_10ee;
  char local_10ed;
  char local_10ec;
  char local_10eb;
  char local_10ea;
  char local_10e9;
  uint local_10e8;
  char local_10e1;
  char local_10e0;
  char local_10df;
  byte local_10de;
  byte local_10dd;
  char local_10dc;
  char local_10db;
  char local_10da;
  char local_10d9;
  char local_10d8;
  char local_10d7;
  char local_10d6;
  char local_10d5;
  undefined4 local_10d4;
  uint local_10d0;
  int local_10cc;
  char local_10c5;
  function<void___cdecl(void)> *local_10c4;
  function<void___cdecl(void)> *local_10c0;
  function<void___cdecl(void)> *local_10bc;
  uint local_10b8;
  int local_10b4;
  int local_10b0;
  int local_10ac;
  tagRECT local_10a8;
  function<void___cdecl(void)> local_1098 [24];
  function<void___cdecl(void)> local_1080 [24];
  function<void___cdecl(void)> local_1068 [24];
  function<void___cdecl(void)> local_1050 [24];
  function<void___cdecl(void)> local_1038 [24];
  function<void___cdecl(void)> local_1020 [24];
  undefined4 local_1008;
  uint local_1004;
  undefined1 local_1000;
  uint local_8;
  
  local_8 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  local_10c0 = (function<void___cdecl(void)> *)0xcc;
  local_1174 = 0x1e0;
  local_1184 = 0;
  local_10ac = game_loop_helper_cc840();
  local_10d4 = 0xff000000;
  local_10cc = 0;
  local_1294 = 0xff00f0;
  local_12c0 = 0xffb100;
  local_12c4 = 0xff00f0;
  local_1118 = 0xffffff;
  local_10a8.left = 6;
  local_10a8.top = 6;
  local_10a8.right = (LONG)(local_10c0 + -6);
  local_10a8.bottom = local_1174;
  SelectObject(*(HDC *)(DAT_007ca1a4 + 0x1c),*(HGDIOBJ *)(DAT_007ca1a4 + 0x20));
  local_116c = CreateCompatibleBitmap(*(HDC *)(DAT_007ca1a4 + 0x18),(int)local_10c0,local_1174);
  local_1188 = CreateCompatibleBitmap(*(HDC *)(DAT_007ca1a4 + 0x18),1,1);
  local_10e8 = (int)local_10c0 * local_1174 * 4;
  local_10c4 = (function<void___cdecl(void)> *)FUN_006f191d();
  for (local_1140 = 0; local_1140 < local_10e8 >> 2; local_1140 = local_1140 + 1) {
    *(int *)(local_10c4 + local_1140 * 4) = local_10cc;
  }
  local_12c8 = SetBitmapBits(local_116c,local_10e8,local_10c4);
  local_12cc = SelectObject(*(HDC *)(DAT_007ca1a4 + 0x1c),local_116c);
  SetBkMode(*(HDC *)(DAT_007ca1a4 + 0x1c),1);
  if (*(int *)(local_10ac + 0xb8) == 2) {
    local_1100 = (undefined *)0xb36bff;
  }
  else {
    local_1100 = (undefined *)0xffb100;
  }
  SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),(COLORREF)local_1100);
  local_1120 = (char *)npk_get_relative_res_path();
  local_1240 = local_1120 + 1;
  do {
    local_10d8 = *local_1120;
    local_1120 = local_1120 + 1;
  } while (local_10d8 != '\0');
  iVar2 = (int)local_1120 - (int)local_1240;
  ptVar8 = &local_10a8;
  UVar9 = 0x810;
  local_1264 = iVar2;
  pCVar3 = (LPCSTR)npk_get_relative_res_path();
  pfStack_1328 = (function<void___cdecl(void)> *)0x6bb947;
  local_10b0 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),pCVar3,iVar2,ptVar8,UVar9);
  local_10a8.top = local_10a8.top + 1 + local_10b0;
  SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),(COLORREF)local_1100);
  local_1124 = (char *)npk_get_relative_res_path();
  local_1268 = local_1124 + 1;
  do {
    local_10d9 = *local_1124;
    local_1124 = local_1124 + 1;
  } while (local_10d9 != '\0');
  iVar2 = (int)local_1124 - (int)local_1268;
  ptVar8 = &local_10a8;
  UVar9 = 0x810;
  local_126c = iVar2;
  pCVar3 = (LPCSTR)npk_get_relative_res_path();
  pfStack_1328 = (function<void___cdecl(void)> *)0x6bb9fe;
  local_10b0 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),pCVar3,iVar2,ptVar8,UVar9);
  local_1184 = local_10a8.top + 1 + local_10b0;
  local_10a8.top = local_1184;
  if (*(int *)(local_10ac + 0xbc) != 0) {
    local_10a8.top = local_1184 + 1 + local_10b0;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xffffff);
    FUN_00414e80();
    local_1128 = (char *)&local_1008;
    local_1270 = (int)&local_1008 + 1;
    do {
      local_10da = *local_1128;
      local_1128 = local_1128 + 1;
    } while (local_10da != '\0');
    local_1274 = (int)local_1128 - local_1270;
    pfStack_1328 = (function<void___cdecl(void)> *)0x6bbb0a;
    local_10b0 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1274,&local_10a8,
                           0x10);
  }
  if (*(int *)(local_10ac + 0x14c) != 0) {
    local_10a8.top = local_10a8.top + 1 + local_10b0;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xffffff);
    local_1278 = FUN_004c7c70();
    npk_get_relative_res_path();
    FUN_00414e80();
    std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1050);
    local_112c = (char *)&local_1008;
    local_127c = (int)&local_1008 + 1;
    do {
      local_10db = *local_112c;
      local_112c = local_112c + 1;
    } while (local_10db != '\0');
    local_118c = (int)local_112c - local_127c;
    pfStack_1328 = (function<void___cdecl(void)> *)0x6bbc15;
    local_10b0 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_118c,&local_10a8,
                           0x12);
  }
  local_10a8.top = local_10a8.top + 1 + local_10b0;
  SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xffffff);
  local_12d0 = (undefined1 *)&pfStack_1328;
  pfStack_132c = (function<void___cdecl(void)> *)(local_10ac + 0x124);
  iStack_1330 = 0x6bbc64;
  FUN_00405520();
  pfStack_132c = local_1068;
  iStack_1330 = 0x6bbc70;
  local_1194 = FUN_004ca080();
  local_1190 = local_1194;
  local_1160 = (char *)npk_get_relative_res_path();
  local_12d4 = (char *)&local_1008;
  local_1144 = local_12d4;
  do {
    local_10c5 = *local_1160;
    *local_1144 = local_10c5;
    local_1160 = local_1160 + 1;
    local_1144 = local_1144 + 1;
  } while (local_10c5 != '\0');
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1068);
  local_1130 = (char *)&local_1008;
  local_1198 = (int)&local_1008 + 1;
  do {
    local_10d7 = *local_1130;
    local_1130 = local_1130 + 1;
  } while (local_10d7 != '\0');
  local_119c = (int)local_1130 - local_1198;
  pfStack_1328 = (function<void___cdecl(void)> *)0x6bbd6e;
  local_10b0 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_119c,&local_10a8,
                         0x12);
  local_10a8.top = local_10a8.top + 1 + local_10b0;
  SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),local_1118);
  cVar1 = FUN_00427c60();
  if ((cVar1 == '\0') || (*(int *)(local_10b4 + 0x40) != 0)) {
    cVar1 = FUN_00427c60();
    if ((cVar1 == '\0') || (*(int *)(local_10b4 + 0x40) != 1)) {
      cVar1 = FUN_00427c60();
      if (cVar1 == '\0') {
        cVar1 = FUN_00427c60();
        if (cVar1 == '\0') {
          cVar1 = FUN_00427c60();
          if (cVar1 != '\0') {
            local_1008 = local_1008 & 0xffffff00;
          }
        }
        else {
          local_1008 = 0xa8b7dece;
          local_1004 = 0xfdb3bec9;
          local_1000 = 0;
        }
      }
      else {
        local_1008 = 0xa8b7dece;
        local_1004 = 0xd7d2bbbd;
        local_1000 = 0;
      }
    }
    else {
      local_1008 = 0xa8b7dece;
      local_1004 = 0xd7d2bbbd;
      local_1000 = 0;
    }
  }
  else {
    local_1008 = 0xb0d7e2b7;
    local_1004 = local_1004 & 0xffffff00;
  }
  local_114c = &DAT_0074081d;
  local_1148 = (byte *)&local_1008;
  do {
    local_10dd = *local_1148;
    bVar7 = local_10dd < *local_114c;
    if (local_10dd != *local_114c) {
LAB_006bbf6b:
      local_1178 = -(uint)bVar7 | 1;
      goto LAB_006bbf76;
    }
    if (local_10dd == 0) break;
    local_10de = local_1148[1];
    bVar7 = local_10de < local_114c[1];
    if (local_10de != local_114c[1]) goto LAB_006bbf6b;
    local_1148 = local_1148 + 2;
    local_114c = local_114c + 2;
  } while (local_10de != 0);
  local_1178 = 0;
LAB_006bbf76:
  local_11a0 = local_1178;
  if (local_1178 != 0) {
    local_1134 = (char *)&local_1008;
    local_11a4 = (int)&local_1008 + 1;
    do {
      local_10df = *local_1134;
      local_1134 = local_1134 + 1;
    } while (local_10df != '\0');
    local_11a8 = (int)local_1134 - local_11a4;
    pfStack_1328 = (function<void___cdecl(void)> *)0x6bbffd;
    local_10b0 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_11a8,&local_10a8,
                           0x12);
  }
  local_10a8.top = local_10a8.top + 1 + local_10b0;
  if (1 < *(int *)(local_10ac + 0xcc)) {
    iVar2 = game_get_player_or_session_blob();
    if (*(int *)(iVar2 + 0x1fc) < *(int *)(local_10ac + 0xcc)) {
      game_get_player_or_session_blob();
      cVar1 = FUN_0067b4e0();
      if (cVar1 == '\0') {
        SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xff0000);
        FUN_00414e80();
      }
      else {
        iVar2 = game_get_player_or_session_blob();
        if (*(int *)(iVar2 + 0x1fc) + 5 < *(int *)(local_10ac + 0xcc)) {
          SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xff0000);
        }
        else {
          SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xff00);
        }
        game_get_player_or_session_blob();
        FUN_0067b560();
        FUN_00414e80();
      }
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xffffff);
      FUN_00414e80();
    }
    local_1138 = (char *)&local_1008;
    local_11ac = (int)&local_1008 + 1;
    do {
      local_10e0 = *local_1138;
      local_1138 = local_1138 + 1;
    } while (local_10e0 != '\0');
    local_11b0 = (int)local_1138 - local_11ac;
    pfStack_1328 = (function<void___cdecl(void)> *)0x6bc1c8;
    local_10b0 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_11b0,&local_10a8,
                           0x10);
  }
  if (*(int *)(local_10b4 + 0x3c) < 100) {
    if (*(int *)(local_10b4 + 0x3c) < 0x4b) {
      if (*(int *)(local_10b4 + 0x3c) < 0x32) {
        if (*(int *)(local_10b4 + 0x3c) < 0x19) {
          if (-1 < *(int *)(local_10b4 + 0x3c)) {
            SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xe6c89b);
            pfStack_1328 = (function<void___cdecl(void)> *)0x6bc332;
            local_10b0 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&DAT_007782e8,6,&local_10a8,0x12);
          }
        }
        else {
          SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xe6c89b);
          pfStack_1328 = (function<void___cdecl(void)> *)0x6bc2eb;
          local_10b0 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&DAT_007782e0,4,&local_10a8,0x12);
        }
      }
      else {
        SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
        pfStack_1328 = (function<void___cdecl(void)> *)0x6bc2a1;
        local_10b0 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&DAT_00778274,4,&local_10a8,0x12);
      }
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xfff200);
      pfStack_1328 = (function<void___cdecl(void)> *)0x6bc257;
      local_10b0 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&DAT_0077826c,4,&local_10a8,0x12);
    }
  }
  else {
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xfff200);
    pfStack_1328 = (function<void___cdecl(void)> *)0x6bc20d;
    local_10b0 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&DAT_00778264,6,&local_10a8,0x12);
  }
  cVar1 = game_frame_should_continue();
  if (cVar1 == '\0') {
    FUN_004274d0();
    cVar1 = FUN_00427e30();
    if (cVar1 != '\0') {
      local_10a8.top = local_10a8.top + 1 + local_10b0;
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),local_1118);
      local_12d8 = (undefined1 *)&pfStack_132c;
      iStack_1330 = 0;
      pfStack_1334 = (function<void___cdecl(void)> *)0x6bc3ce;
      iStack_1330 = FUN_004274d0();
      pfStack_1334 = (function<void___cdecl(void)> *)0x6bc3d6;
      FUN_00405520();
      iStack_1330 = 0x6bc3db;
      local_11b4 = FUN_004caab0();
      local_11bc = FUN_005aa150();
      local_11b8 = local_11bc;
      npk_get_relative_res_path();
      FUN_00414e80();
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1080);
      local_113c = (char *)&local_1008;
      local_11c0 = (int)&local_1008 + 1;
      do {
        local_10e1 = *local_113c;
        local_113c = local_113c + 1;
      } while (local_10e1 != '\0');
      local_11c4 = (int)local_113c - local_11c0;
      pfStack_1328 = (function<void___cdecl(void)> *)0x6bc4ad;
      local_10b0 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_11c4,
                             &local_10a8,0x10);
    }
  }
  iVar2 = FUN_00519150();
  if (iVar2 != 0) {
    local_10a8.top = local_10a8.top + 1 + local_10b0;
    local_117c = local_10ac + 0x2b8;
    local_1150 = game_loop_helper_018d0();
    local_11c8 = game_loop_helper_018b0();
    for (; local_1150 != local_11c8; local_1150 = local_1150 + 0x20) {
      local_1164 = local_1150;
      local_10a8.top = local_10a8.top + 1 + local_10b0;
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
      local_12dc = (undefined1 *)&iStack_1330;
      pfStack_1334 = (function<void___cdecl(void)> *)local_1164;
      puStack_1338 = (undefined1 *)0x6bc59b;
      FUN_00405520();
      pfStack_1334 = (function<void___cdecl(void)> *)0x6bc5a0;
      local_11cc = FUN_004caab0();
      local_11d0 = FUN_005d9da0();
      npk_get_relative_res_path();
      FUN_00414e80();
      local_10f8 = (char *)&local_1008;
      local_11d4 = (int)&local_1008 + 1;
      do {
        local_10e9 = *local_10f8;
        local_10f8 = local_10f8 + 1;
      } while (local_10e9 != '\0');
      local_11d8 = (int)local_10f8 - local_11d4;
      pfStack_1328 = (function<void___cdecl(void)> *)0x6bc656;
      local_10b0 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_11d8,
                             &local_10a8,0x10);
    }
    local_1180 = local_10ac + 0x3d4;
    local_1154 = game_loop_helper_018d0();
    local_11dc = game_loop_helper_018b0();
    for (; local_1154 != local_11dc; local_1154 = local_1154 + 0x20) {
      local_1168 = local_1154;
      local_10a8.top = local_10a8.top + 1 + local_10b0;
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
      local_1280 = (undefined1 *)&iStack_1330;
      pfStack_1334 = (function<void___cdecl(void)> *)local_1168;
      puStack_1338 = (undefined1 *)0x6bc71a;
      FUN_00405520();
      pfStack_1334 = (function<void___cdecl(void)> *)0x6bc71f;
      local_11e0 = FUN_004caab0();
      local_11e4 = FUN_005d9da0();
      npk_get_relative_res_path();
      FUN_00414e80();
      local_10fc = (char *)&local_1008;
      local_11e8 = (int)&local_1008 + 1;
      do {
        local_10ea = *local_10fc;
        local_10fc = local_10fc + 1;
      } while (local_10ea != '\0');
      local_11ec = (int)local_10fc - local_11e8;
      pfStack_1328 = (function<void___cdecl(void)> *)0x6bc7d5;
      local_10b0 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_11ec,
                             &local_10a8,0x10);
    }
  }
  local_10a8.top = local_10a8.top + local_10b0 * 4 + 4;
  local_1100 = &DAT_0068d5ed;
  SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
  FUN_00414e80();
  local_1104 = (char *)&local_1008;
  local_11f0 = (int)&local_1008 + 1;
  do {
    local_10ec = *local_1104;
    local_1104 = local_1104 + 1;
  } while (local_10ec != '\0');
  local_11f4 = (int)local_1104 - local_11f0;
  pfStack_1328 = (function<void___cdecl(void)> *)0x6bc8e3;
  local_10b0 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_11f4,&local_10a8,
                         0x10);
  local_10a8.top = local_10a8.top + 1 + local_10b0;
  uVar4 = FUN_004271d0();
  if (*(uint *)(local_10b4 + 0x44) < uVar4) {
    local_10a8.top = local_10a8.top + 1 + local_10b0;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),local_1118);
    FUN_004271b0();
    cVar1 = FUN_00427e30();
    if (cVar1 == '\0') {
      FUN_004271b0();
      FUN_004271b0();
      local_12b4 = (undefined1 *)&iStack_1330;
      pfStack_1334 = *(function<void___cdecl(void)> **)(local_10b4 + 0x44);
      puStack_1338 = (undefined1 *)0x6bceaa;
      iVar2 = FUN_004271b0();
      pfStack_1334 = (function<void___cdecl(void)> *)(iVar2 + 0x34);
      puStack_1338 = (undefined1 *)0x6bceb5;
      FUN_00405520();
      pfStack_1334 = (function<void___cdecl(void)> *)0x6bceba;
      local_122c = FUN_004caab0();
      local_1230 = FUN_005d9da0();
      npk_get_relative_res_path();
      FUN_00414e80();
      local_1110 = (char *)&local_1008;
      local_1234 = (int)&local_1008 + 1;
      do {
        local_10d5 = *local_1110;
        local_1110 = local_1110 + 1;
      } while (local_10d5 != '\0');
      local_1238 = (int)local_1110 - local_1234;
      pfStack_1328 = (function<void___cdecl(void)> *)0x6bcf6f;
      local_10b0 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1238,
                             &local_10a8,0x10);
      local_10a8.top = local_10a8.top + 1 + local_10b0;
    }
    else {
      local_1284 = (undefined1 *)&pfStack_1328;
      local_11f8 = (undefined1 *)&pfStack_1328;
      local_1288 = (undefined1 *)&uStack_1340;
      pcStack_1344 = *(char **)(local_10b4 + 0x44);
      uStack_1348 = 0x6bc9b8;
      pcStack_1344 = (char *)FUN_004271b0();
      uStack_1348 = 0x6bc9c0;
      FUN_00405520();
      pcStack_1344 = local_11f8;
      uStack_1348 = 0x6bc9cc;
      local_128c = FUN_004c7e10();
      pfStack_132c = (function<void___cdecl(void)> *)0x6bc9dd;
      local_10ed = FUN_00638d00();
      if (local_10ed == '\0') {
        local_12a4 = (undefined1 *)&pfStack_1328;
        local_1218 = (undefined1 *)&pfStack_1328;
        local_12a8 = (undefined1 *)&uStack_1340;
        pcStack_1344 = *(char **)(local_10b4 + 0x44);
        uStack_1348 = 0x6bccb9;
        pcStack_1344 = (char *)FUN_004271b0();
        uStack_1348 = 0x6bccc1;
        FUN_00405520();
        pcStack_1344 = local_1218;
        uStack_1348 = 0x6bcccd;
        local_12ac = FUN_004c7e10();
        pfStack_132c = (function<void___cdecl(void)> *)0x6bccde;
        local_10ef = FUN_00639000();
        if (local_10ef != '\0') {
          FUN_004271b0();
          FUN_004271b0();
          npk_get_relative_res_path();
          local_12b0 = (undefined1 *)&iStack_1330;
          pfStack_1334 = *(function<void___cdecl(void)> **)(local_10b4 + 0x44);
          puStack_1338 = (undefined1 *)0x6bcd5e;
          pfStack_1334 = (function<void___cdecl(void)> *)FUN_004271b0();
          puStack_1338 = (undefined1 *)0x6bcd66;
          FUN_00405520();
          pfStack_1334 = local_1038;
          puStack_1338 = (undefined1 *)0x6bcd72;
          local_1220 = FUN_004c7e10();
          local_121c = local_1220;
          npk_get_relative_res_path();
          pfStack_1328 = (function<void___cdecl(void)> *)0x6bcda4;
          FUN_00414e80();
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1038);
          local_110c = (char *)&local_1008;
          local_1224 = (int)&local_1008 + 1;
          do {
            local_10f0 = *local_110c;
            local_110c = local_110c + 1;
          } while (local_10f0 != '\0');
          local_1228 = (int)local_110c - local_1224;
          pfStack_1328 = (function<void___cdecl(void)> *)0x6bce25;
          local_10b0 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1228,
                                 &local_10a8,0x10);
          local_10a8.top = local_10a8.top + 1 + local_10b0;
        }
      }
      else {
        local_1290 = (undefined1 *)&pfStack_1328;
        local_11fc = (undefined1 *)&pfStack_1328;
        local_12e0 = (undefined1 *)&uStack_1340;
        pcStack_1344 = *(char **)(local_10b4 + 0x44);
        uStack_1348 = 0x6bca29;
        pcStack_1344 = (char *)FUN_004271b0();
        uStack_1348 = 0x6bca31;
        FUN_00405520();
        pcStack_1344 = local_11fc;
        uStack_1348 = 0x6bca3d;
        local_1298 = FUN_004c7e10();
        pfStack_132c = (function<void___cdecl(void)> *)0x6bca4e;
        local_10ee = FUN_00638f30();
        if (local_10ee == '\0') {
          FUN_004271b0();
          FUN_004271b0();
          npk_get_relative_res_path();
          local_12a0 = (undefined1 *)&iStack_1330;
          pfStack_1334 = *(function<void___cdecl(void)> **)(local_10b4 + 0x44);
          puStack_1338 = (undefined1 *)0x6bcb9b;
          pfStack_1334 = (function<void___cdecl(void)> *)FUN_004271b0();
          puStack_1338 = (undefined1 *)0x6bcba3;
          FUN_00405520();
          pfStack_1334 = local_1020;
          puStack_1338 = (undefined1 *)0x6bcbaf;
          local_120c = FUN_004c7e10();
          local_1208 = local_120c;
          npk_get_relative_res_path();
          pfStack_1328 = (function<void___cdecl(void)> *)0x6bcbe1;
          FUN_00414e80();
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1020);
        }
        else {
          FUN_004271b0();
          FUN_004271b0();
          npk_get_relative_res_path();
          local_129c = (undefined1 *)&iStack_1330;
          pfStack_1334 = *(function<void___cdecl(void)> **)(local_10b4 + 0x44);
          puStack_1338 = (undefined1 *)0x6bcad6;
          pfStack_1334 = (function<void___cdecl(void)> *)FUN_004271b0();
          puStack_1338 = (undefined1 *)0x6bcade;
          FUN_00405520();
          pfStack_1334 = local_1098;
          puStack_1338 = (undefined1 *)0x6bcaea;
          local_1204 = FUN_004c7e10();
          local_1200 = local_1204;
          npk_get_relative_res_path();
          pfStack_1328 = (function<void___cdecl(void)> *)0x6bcb1c;
          FUN_00414e80();
          std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1098);
        }
        local_1108 = (char *)&local_1008;
        local_1210 = (int)&local_1008 + 1;
        do {
          local_10eb = *local_1108;
          local_1108 = local_1108 + 1;
        } while (local_10eb != '\0');
        local_1214 = (int)local_1108 - local_1210;
        pfStack_1328 = (function<void___cdecl(void)> *)0x6bcc61;
        local_10b0 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1214,
                               &local_10a8,0x10);
        local_10a8.top = local_10a8.top + 1 + local_10b0;
      }
    }
  }
  else {
    local_10a8.top = local_10a8.top + 1 + local_10b0;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),local_1118);
    FUN_00414e80();
    local_1114 = (char *)&local_1008;
    local_123c = (int)&local_1008 + 1;
    do {
      local_10d6 = *local_1114;
      local_1114 = local_1114 + 1;
    } while (local_10d6 != '\0');
    local_1258 = (int)local_1114 - local_123c;
    pfStack_1328 = (function<void___cdecl(void)> *)0x6bd047;
    local_10b0 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1258,&local_10a8,
                           0x10);
    local_10a8.top = local_10a8.top + 1 + local_10b0;
  }
  local_10a8.top = local_10a8.top + 1 + local_10b0;
  SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),local_1118);
  if (*(int *)(local_10b4 + 0x48) == 0) {
    FUN_00414e80();
  }
  else {
    FUN_006a52a0();
    game_missing_asset_fallback_2();
    FUN_004a1d50();
    FUN_004a1be0();
    FUN_00414e80();
  }
  local_111c = (char *)&local_1008;
  local_1244 = (int)&local_1008 + 1;
  do {
    local_10dc = *local_111c;
    local_111c = local_111c + 1;
  } while (local_10dc != '\0');
  local_1248 = (int)local_111c - local_1244;
  pfStack_1328 = (function<void___cdecl(void)> *)0x6bd175;
  local_10b0 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1248,&local_10a8,
                         0x10);
  local_10a8.top = local_10a8.top + local_10b0 + 7;
  local_124c = SelectObject(*(HDC *)(DAT_007ca1a4 + 0x1c),local_1188);
  local_12b8 = GetBitmapBits(local_124c,local_10e8,local_10c4);
  for (local_10d0 = 0; local_10d0 < local_10e8 >> 2; local_10d0 = local_10d0 + 1) {
    if (*(int *)(local_10c4 + local_10d0 * 4) != 0) {
      *(uint *)(local_10c4 + local_10d0 * 4) =
           (*(uint *)(local_10c4 + local_10d0 * 4) & 0xff0000) >> 0x10 |
           (*(uint *)(local_10c4 + local_10d0 * 4) & 0xff) << 0x10 |
           *(uint *)(local_10c4 + local_10d0 * 4) & 0xff00ff00;
    }
  }
  for (local_10b8 = 0; local_10b8 < local_10e8 >> 2; local_10b8 = local_10b8 + 1) {
    local_10bc = local_10c4;
    if ((*(uint *)(local_10c4 + local_10b8 * 4) & 0xffffff) != 0) {
      if (*(int *)(local_10c4 + (local_10b8 - (int)local_10c0) * 4 + -4) == local_10cc) {
        *(undefined4 *)(local_10c4 + (local_10b8 - (int)local_10c0) * 4 + -4) = local_10d4;
      }
      if (*(int *)(local_10c4 + (local_10b8 - (int)local_10c0) * 4 + 4) == local_10cc) {
        *(undefined4 *)(local_10c4 + (local_10b8 - (int)local_10c0) * 4 + 4) = local_10d4;
      }
      if (*(int *)(local_10c4 + (local_10b8 - (int)local_10c0) * 4) == local_10cc) {
        *(undefined4 *)(local_10c4 + (local_10b8 - (int)local_10c0) * 4) = local_10d4;
      }
      if (*(int *)(local_10c4 + local_10b8 * 4 + -4) == local_10cc) {
        *(undefined4 *)(local_10c4 + local_10b8 * 4 + -4) = local_10d4;
      }
      if (*(int *)(local_10c4 + local_10b8 * 4 + 4) == local_10cc) {
        *(undefined4 *)(local_10c4 + local_10b8 * 4 + 4) = local_10d4;
      }
      if (*(int *)(local_10c4 + (int)(local_10c0 + local_10b8) * 4 + -4) == local_10cc) {
        *(undefined4 *)(local_10c4 + (int)(local_10c0 + local_10b8) * 4 + -4) = local_10d4;
      }
      if (*(int *)(local_10c4 + (int)(local_10c0 + local_10b8) * 4) == local_10cc) {
        *(undefined4 *)(local_10c4 + (int)(local_10c0 + local_10b8) * 4) = local_10d4;
      }
      if (*(int *)(local_10c4 + (int)(local_10c0 + local_10b8) * 4 + 4) == local_10cc) {
        *(undefined4 *)(local_10c4 + (int)(local_10c0 + local_10b8) * 4 + 4) = local_10d4;
      }
    }
  }
  for (local_10f4 = 0; local_10f4 < local_10e8 >> 2; local_10f4 = local_10f4 + 1) {
    if (*(int *)(local_10c4 + local_10f4 * 4) != 0) {
      *(uint *)(local_10c4 + local_10f4 * 4) = *(uint *)(local_10c4 + local_10f4 * 4) | 0xff000000;
    }
  }
  local_1250 = DeleteObject(local_116c);
  local_1250 = DeleteObject(local_1188);
  pfStack_1328 = (function<void___cdecl(void)> *)local_10a8.top;
  pfStack_132c = local_10c0;
  iStack_1330 = *(int *)(DAT_007ca1a4 + 4);
  pfStack_1334 = (function<void___cdecl(void)> *)0x6bd544;
  local_115c = D3DXCreateTexture();
  pfStack_1328 = (function<void___cdecl(void)> *)0x6bd577;
  local_115c = (**(code **)(**(int **)(local_10b4 + 0xe8) + 0x4c))();
  pfStack_1328 = (function<void___cdecl(void)> *)((int)local_10c0 * local_10a8.top * 4);
  pfStack_132c = local_10c4;
  iStack_1330 = local_125c;
  pfStack_1334 = (function<void___cdecl(void)> *)0x6bd5a1;
  FUN_006e6bd0();
  pfStack_1328 = local_10c4;
  pfStack_132c = (function<void___cdecl(void)> *)0x6bd5b0;
  FUN_006f1902();
  pfStack_1328 = (function<void___cdecl(void)> *)0x0;
  pfStack_132c = *(function<void___cdecl(void)> **)(local_10b4 + 0xe8);
  iStack_1330 = 0x6bd5d5;
  local_115c = (**(code **)(**(int **)(local_10b4 + 0xe8) + 0x50))();
  iStack_1330 = 3;
  pfStack_1334 = (function<void___cdecl(void)> *)(local_10a8.top / 0xd);
  puStack_1338 = (undefined1 *)0x10;
  local_12bc = (undefined1 *)&uStack_1350;
  FUN_004054a0("ceshiceshi");
  local_1254 = (undefined4 *)d3d9_create_texture_004b7f20(local_1308);
  puVar5 = local_1254;
  puVar6 = (undefined4 *)(local_10b4 + 0xc0);
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  iStack_1330 = 0;
  pfStack_1334 = (function<void___cdecl(void)> *)0x0;
  puStack_1338 = local_1260;
  uStack_133c = 0;
  uStack_1340 = *(undefined4 *)(local_10b4 + 0xc0);
  pcStack_1344 = (char *)0x6bd661;
  local_115c = (**(code **)(**(int **)(local_10b4 + 0xc0) + 0x4c))();
  pcStack_1344 = "sprite/interface/popup.img";
  uStack_1348 = 0x6bd677;
  local_1170 = FUN_005855f0();
  for (local_1158 = 0; local_1158 < 0x10; local_1158 = local_1158 + 1) {
    pcStack_1344 = *(char **)(*(int *)(local_1170 + 0x40) + 0x1690);
    uStack_1348 = *(undefined4 *)(*(int *)(local_1170 + 0x40) + 0x16a4);
    iStack_134c = local_125c + (local_1184 + 6) * *(int *)(local_10b4 + 0xcc) * 4 + 0x18 +
                  local_1158 * 0x30;
    uStack_1350 = 0x6bd703;
    FUN_006e6bd0();
  }
  pcStack_1344 = (char *)local_1170;
  uStack_1348 = 0x6bd71a;
  FUN_005856e0();
  pcStack_1344 = (char *)0x0;
  uStack_1348 = *(undefined4 *)(local_10b4 + 0xc0);
  iStack_134c = 0x6bd73c;
  (**(code **)(**(int **)(local_10b4 + 0xc0) + 0x50))();
  puVar5 = (undefined4 *)(local_10b4 + 0xc0);
  puVar6 = param_1;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  return param_1;
}


/* ==== 006bd790  d3d9_create_texture_006bd790  size=22126 ==== */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * d3d9_create_texture_006bd790(undefined4 *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  LPCSTR pCVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uStack_14ec;
  int iStack_14e8;
  undefined4 uStack_14e4;
  char *pcStack_14e0;
  undefined4 uStack_14dc;
  undefined4 uStack_14d8;
  undefined1 *puStack_14d4;
  int iStack_14d0;
  int iStack_14cc;
  function<void___cdecl(void)> *pfStack_14c8;
  LPVOID pvStack_14c4;
  tagRECT *ptVar8;
  UINT UVar9;
  undefined1 local_14a4 [40];
  HGDIOBJ local_147c;
  LONG local_1478;
  undefined4 local_1474;
  undefined4 local_1470;
  undefined4 local_146c;
  undefined1 *local_1468;
  LONG local_1464;
  undefined1 *local_1460;
  undefined1 *local_145c;
  undefined1 *local_1458;
  int local_1454;
  int local_1450;
  int local_144c;
  int local_1448;
  undefined1 local_1444 [4];
  int local_1440;
  undefined4 *local_143c;
  BOOL local_1438;
  HBITMAP local_1434;
  int local_1430;
  undefined1 *local_142c;
  int local_1428;
  undefined1 *local_1424;
  int local_1420;
  undefined1 *local_141c;
  int local_1418;
  undefined1 *local_1414;
  int local_1410;
  undefined1 *local_140c;
  undefined4 local_1408;
  undefined4 local_1404;
  int local_1400;
  undefined1 *local_13fc;
  undefined4 local_13f8;
  undefined4 local_13f4;
  int local_13f0;
  undefined1 *local_13ec;
  undefined4 local_13e8;
  undefined4 local_13e4;
  int local_13e0;
  int local_13dc;
  undefined1 *local_13d8;
  int local_13d4;
  undefined1 *local_13d0;
  int local_13cc;
  undefined1 *local_13c8;
  int local_13c4;
  undefined1 *local_13c0;
  int local_13bc;
  undefined1 *local_13b8;
  int local_13b4;
  undefined1 *local_13b0;
  int local_13ac;
  undefined1 *local_13a8;
  int local_13a4;
  undefined1 *local_13a0;
  int local_139c;
  undefined1 *local_1398;
  int local_1394;
  undefined1 *local_1390;
  int local_138c;
  undefined1 *local_1388;
  int local_1384;
  undefined1 *local_1380;
  int local_137c;
  undefined1 *local_1378;
  int local_1374;
  undefined1 *local_1370;
  int local_136c;
  undefined1 *local_1368;
  int local_1364;
  undefined1 *local_1360;
  int local_135c;
  undefined1 *local_1358;
  int local_1354;
  undefined1 *local_1350;
  int local_134c;
  undefined1 *local_1348;
  char *local_1344;
  undefined1 *local_1340;
  int local_133c;
  undefined1 *local_1338;
  int local_1334;
  undefined1 *local_1330;
  int local_132c;
  undefined1 *local_1328;
  int local_1324;
  undefined1 *local_1320;
  int local_131c;
  undefined1 *local_1318;
  int local_1314;
  undefined1 *local_1310;
  int local_130c;
  undefined1 *local_1308;
  int local_1304;
  undefined1 *local_1300;
  int local_12fc;
  undefined1 *local_12f8;
  int local_12f4;
  undefined1 *local_12f0;
  int local_12ec;
  undefined1 *local_12e8;
  int local_12e4;
  undefined1 *local_12e0;
  int local_12dc;
  undefined1 *local_12d8;
  int local_12d4;
  undefined1 *local_12d0;
  int local_12cc;
  undefined1 *local_12c8;
  int local_12c4;
  undefined1 *local_12c0;
  int local_12bc;
  undefined1 *local_12b8;
  int local_12b4;
  undefined1 *local_12b0;
  int local_12ac;
  undefined1 *local_12a8;
  int local_12a4;
  undefined1 *local_12a0;
  int local_129c;
  undefined1 *local_1298;
  int local_1294;
  undefined1 *local_1290;
  int local_128c;
  undefined1 *local_1288;
  int local_1284;
  undefined1 *local_1280;
  int local_127c;
  undefined1 *local_1278;
  int local_1274;
  undefined1 *local_1270;
  int local_126c;
  char *local_1268;
  int local_1264;
  int local_1260;
  int local_125c;
  int local_1258;
  int local_1254;
  char *local_1250;
  int local_124c;
  char *local_1248;
  int local_1244;
  int local_1240;
  int local_123c;
  int local_1238;
  int local_1234;
  int local_1230;
  int local_122c;
  int local_1228;
  int local_1224;
  int local_1220;
  HBITMAP local_121c;
  int local_1218;
  undefined *local_1214;
  undefined *local_1210;
  undefined *local_120c;
  undefined *local_1208;
  undefined *local_1204;
  undefined *local_1200;
  undefined *local_11fc;
  undefined *local_11f8;
  int local_11f4;
  int local_11f0;
  undefined1 local_11e9;
  int local_11e8;
  int local_11e4;
  HBITMAP local_11e0;
  int local_11dc;
  int local_11d8;
  uint local_11d4;
  int local_11d0;
  int local_11cc;
  undefined4 local_11c8;
  uint local_11c4;
  int local_11c0;
  int local_11bc;
  int local_11b8;
  int local_11b4;
  int local_11b0;
  char *local_11ac;
  char *local_11a8;
  char *local_11a4;
  char *local_11a0;
  char *local_119c;
  char *local_1198;
  char *local_1194;
  char *local_1190;
  char *local_118c;
  char *local_1188;
  char *local_1184;
  char *local_1180;
  char *local_117c;
  char *local_1178;
  char *local_1174;
  char *local_1170;
  char *local_116c;
  char *local_1168;
  char *local_1164;
  char *local_1160;
  char *local_115c;
  char *local_1158;
  char *local_1154;
  char *local_1150;
  char *local_114c;
  char *local_1148;
  char *local_1144;
  char *local_1140;
  char *local_113c;
  char *local_1138;
  char *local_1134;
  char *local_1130;
  char *local_112c;
  char *local_1128;
  char *local_1124;
  char *local_1120;
  char *local_111c;
  char *local_1118;
  char *local_1114;
  char *local_1110;
  char *local_110c;
  char *local_1108;
  char *local_1104;
  char *local_1100;
  char *local_10fc;
  char *local_10f8;
  char *local_10f4;
  char *local_10f0;
  char *local_10ec;
  char *local_10e8;
  char *local_10e4;
  char *local_10e0;
  char *local_10dc;
  char *local_10d8;
  char *local_10d4;
  char *local_10d0;
  char *local_10cc;
  uint local_10c8;
  uint local_10c4;
  char local_10bf;
  char local_10be;
  char local_10bd;
  uint local_10bc;
  uint local_10b8;
  char local_10b2;
  char local_10b1;
  char local_10b0;
  char local_10af;
  char local_10ae;
  char local_10ad;
  char local_10ac;
  char local_10ab;
  char local_10aa;
  char local_10a9;
  char local_10a8;
  char local_10a7;
  char local_10a6;
  char local_10a5;
  char local_10a4;
  char local_10a3;
  char local_10a2;
  char local_10a1;
  char local_10a0;
  char local_109f;
  char local_109e;
  char local_109d;
  char local_109c;
  char local_109b;
  char local_109a;
  char local_1099;
  char local_1098;
  char local_1097;
  char local_1096;
  char local_1095;
  char local_1094;
  char local_1093;
  char local_1092;
  char local_1091;
  char local_1090;
  char local_108f;
  char local_108e;
  char local_108d;
  char local_108c;
  char local_108b;
  char local_108a;
  char local_1089;
  char local_1088;
  char local_1087;
  char local_1086;
  char local_1085;
  char local_1084;
  char local_1083;
  char local_1082;
  char local_1081;
  char local_1080;
  char local_107f;
  char local_107e;
  char local_107d;
  undefined4 local_107c;
  uint local_1078;
  COLORREF local_1074;
  int local_1070;
  void *local_106c;
  int local_1068;
  LPVOID local_1064;
  uint local_1060;
  int local_105c;
  int local_1054;
  int local_1050;
  char local_1049;
  tagRECT local_1048;
  function<void___cdecl(void)> local_1038 [24];
  function<void___cdecl(void)> local_1020 [24];
  char local_1008;
  undefined1 auStack_1007 [4095];
  uint local_8;
  
  local_8 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  local_1068 = 0xcc;
  local_11d8 = 0x1e0;
  local_11e4 = 0;
  local_1050 = game_loop_helper_cc840();
  local_107c = 0xff000000;
  local_1070 = 0;
  local_146c = 0xff00f0;
  local_1470 = 0xffb100;
  local_1474 = 0xff00f0;
  local_1074 = 0xffffff;
  local_1048.left = 6;
  local_1048.top = 6;
  local_1048.right = local_1068 + -6;
  local_1048.bottom = local_11d8;
  SelectObject(*(HDC *)(DAT_007ca1a4 + 0x1c),*(HGDIOBJ *)(DAT_007ca1a4 + 0x20));
  local_11e0 = CreateCompatibleBitmap(*(HDC *)(DAT_007ca1a4 + 0x18),local_1068,local_11d8);
  local_121c = CreateCompatibleBitmap(*(HDC *)(DAT_007ca1a4 + 0x18),1,1);
  local_10bc = local_1068 * local_11d8 * 4;
  local_106c = (void *)FUN_006f191d();
  for (local_11d4 = 0; local_11d4 < local_10bc >> 2; local_11d4 = local_11d4 + 1) {
    *(int *)((int)local_106c + local_11d4 * 4) = local_1070;
  }
  local_1478 = SetBitmapBits(local_11e0,local_10bc,local_106c);
  local_147c = SelectObject(*(HDC *)(DAT_007ca1a4 + 0x1c),local_11e0);
  SetBkMode(*(HDC *)(DAT_007ca1a4 + 0x1c),1);
  local_1049 = '\0';
  iVar2 = FUN_004277a0();
  if (iVar2 == -1) {
    cVar1 = FUN_00658b40();
    if (cVar1 != '\0') {
      local_1049 = '\x01';
    }
  }
  else {
    cVar1 = FUN_00659150();
    if (cVar1 != '\0') {
      local_1049 = '\x01';
    }
  }
  if (*(int *)(local_1050 + 0x3e4) == -1) {
    if ((*(int *)(local_1050 + 0x3e0) != -1) ||
       ((cVar1 = FUN_00427e30(), cVar1 != '\0' && (iVar2 = FUN_00401a90(), iVar2 != 0)))) {
      if (*(int *)(local_1050 + 0x3e0) != -1) {
        local_1050 = game_loop_helper_cc840();
      }
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xe6c89c);
      local_11a4 = (char *)npk_get_relative_res_path();
      local_1344 = local_11a4 + 1;
      do {
        local_10a6 = *local_11a4;
        local_11a4 = local_11a4 + 1;
      } while (local_10a6 != '\0');
      iVar2 = (int)local_11a4 - (int)local_1344;
      ptVar8 = &local_1048;
      UVar9 = 0x10;
      local_1448 = iVar2;
      pCVar3 = (LPCSTR)npk_get_relative_res_path();
      pvStack_14c4 = (LPVOID)0x6be012;
      local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),pCVar3,iVar2,ptVar8,UVar9);
      local_11e4 = local_1048.top + 1 + local_1054;
      local_1048.top = local_11e4 + 1 + local_1054;
      if (local_1049 == '\0') {
        SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xc8c8c8);
        iVar2 = FUN_004277a0();
        if (iVar2 == -1) {
          iVar2 = game_loop_helper_cc840();
          if (*(int *)(iVar2 + 0x3e0) == -1) {
            local_122c = param_2 + 0xb58;
            local_11b4 = game_loop_helper_018d0();
            local_1240 = game_loop_helper_018b0();
            for (; local_11b4 != local_1240; local_11b4 = local_11b4 + 0x94) {
              local_1244 = local_11b4;
              if (*(int *)(local_11b4 + 4) == *(int *)(local_105c + 0x30)) {
                SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xff00);
                break;
              }
            }
          }
          else {
            local_1228 = param_2 + 0xb58;
            local_11b0 = game_loop_helper_018d0();
            local_1238 = game_loop_helper_018b0();
            for (; local_11b0 != local_1238; local_11b0 = local_11b0 + 0x94) {
              local_123c = local_11b0;
              iVar2 = game_loop_helper_cc840();
              if (*(int *)(local_123c + 4) == *(int *)(iVar2 + 0x3e0)) {
                SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xff00);
                break;
              }
            }
          }
        }
        else {
          iVar2 = game_loop_helper_cc840();
          if (*(int *)(iVar2 + 0x3e0) == -1) {
            local_1224 = param_2 + 0xb78;
            local_11d0 = game_loop_helper_018d0();
            local_1230 = game_loop_helper_018b0();
            for (; local_11d0 != local_1230; local_11d0 = local_11d0 + 0x94) {
              local_1234 = local_11d0;
              if (*(int *)(local_11d0 + 4) == *(int *)(local_105c + 0x30)) {
                SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xff00);
                break;
              }
            }
          }
          else {
            local_1220 = param_2 + 0xb78;
            local_11cc = game_loop_helper_018d0();
            local_144c = game_loop_helper_018b0();
            for (; local_11cc != local_144c; local_11cc = local_11cc + 0x94) {
              local_1450 = local_11cc;
              iVar2 = game_loop_helper_cc840();
              if (*(int *)(local_1450 + 4) == *(int *)(iVar2 + 0x3e0)) {
                SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xff00);
                break;
              }
            }
          }
        }
      }
      else {
        SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xff00);
      }
      local_11a8 = (char *)npk_get_relative_res_path();
      local_1248 = local_11a8 + 1;
      do {
        local_10a7 = *local_11a8;
        local_11a8 = local_11a8 + 1;
      } while (local_10a7 != '\0');
      iVar2 = (int)local_11a8 - (int)local_1248;
      ptVar8 = &local_1048;
      UVar9 = 0x10;
      local_124c = iVar2;
      pCVar3 = (LPCSTR)npk_get_relative_res_path();
      pvStack_14c4 = (LPVOID)0x6be3d3;
      local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),pCVar3,iVar2,ptVar8,UVar9);
      if (local_1049 == '\0') {
        local_10b8 = 0;
        while (uVar4 = FUN_00401a90(), local_10b8 < uVar4) {
          local_1048.top = local_1048.top + 1 + local_1054;
          SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xc8c8c8);
          iVar2 = FUN_004277a0();
          if (iVar2 == -1) {
            local_11f4 = param_2 + 0xb58;
            local_11bc = game_loop_helper_018d0();
            local_1260 = game_loop_helper_018b0();
            for (; local_11bc != local_1260; local_11bc = local_11bc + 0x94) {
              local_1264 = local_11bc;
              piVar5 = (int *)game_get_flag_object_01a70();
              if (*(int *)(local_1264 + 4) == *piVar5) {
                SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xff00);
                break;
              }
            }
          }
          else {
            local_11f0 = param_2 + 0xb78;
            local_11b8 = game_loop_helper_018d0();
            local_1258 = game_loop_helper_018b0();
            for (; local_11b8 != local_1258; local_11b8 = local_11b8 + 0x94) {
              local_125c = local_11b8;
              piVar5 = (int *)game_get_flag_object_01a70();
              if (*(int *)(local_125c + 4) == *piVar5) {
                SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xff00);
                break;
              }
            }
          }
          game_get_flag_object_01a70();
          game_loop_helper_cc840();
          local_10cc = (char *)npk_get_relative_res_path();
          local_1268 = local_10cc + 1;
          do {
            local_10a9 = *local_10cc;
            local_10cc = local_10cc + 1;
          } while (local_10a9 != '\0');
          iVar2 = (int)local_10cc - (int)local_1268;
          ptVar8 = &local_1048;
          UVar9 = 0x10;
          local_126c = iVar2;
          game_get_flag_object_01a70();
          game_loop_helper_cc840();
          pCVar3 = (LPCSTR)npk_get_relative_res_path();
          pvStack_14c4 = (LPVOID)0x6be7a5;
          local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),pCVar3,iVar2,ptVar8,UVar9);
          local_10b8 = local_10b8 + 1;
        }
      }
      else {
        local_10c8 = 0;
        while (uVar4 = FUN_00401a90(), local_10c8 < uVar4) {
          local_1048.top = local_1048.top + 1 + local_1054;
          SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xff00);
          game_get_flag_object_01a70();
          game_loop_helper_cc840();
          local_11ac = (char *)npk_get_relative_res_path();
          local_1250 = local_11ac + 1;
          do {
            local_10a8 = *local_11ac;
            local_11ac = local_11ac + 1;
          } while (local_10a8 != '\0');
          iVar2 = (int)local_11ac - (int)local_1250;
          ptVar8 = &local_1048;
          UVar9 = 0x10;
          local_1254 = iVar2;
          game_get_flag_object_01a70();
          game_loop_helper_cc840();
          pCVar3 = (LPCSTR)npk_get_relative_res_path();
          pvStack_14c4 = (LPVOID)0x6be50f;
          local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),pCVar3,iVar2,ptVar8,UVar9);
          local_10c8 = local_10c8 + 1;
        }
      }
    }
  }
  else {
    local_1050 = game_loop_helper_cc840();
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xe6c89c);
    pvStack_14c4 = (LPVOID)0x6bda32;
    local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&DAT_00778364,0xd,&local_1048,0x10);
    local_11e4 = local_1048.top + 1 + local_1054;
    local_1048.top = local_11e4 + 1 + local_1054;
    local_11e9 = 0;
    if ((local_1049 == '\0') && (cVar1 = FUN_006c2e00(), cVar1 == '\0')) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xc8c8c8);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xff00);
    }
    pvStack_14c4 = (LPVOID)0x6bdaee;
    local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&DAT_00778374,0xc,&local_1048,0x10);
    local_1048.top = local_1048.top + 1 + local_1054;
    if ((local_1049 == '\0') && (cVar1 = FUN_006c2e00(), cVar1 == '\0')) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xc8c8c8);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xff00);
    }
    pvStack_14c4 = (LPVOID)0x6bdb81;
    local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&DAT_00778384,0xc,&local_1048,0x10);
    local_1048.top = local_1048.top + 1 + local_1054;
    if ((local_1049 == '\0') && (cVar1 = FUN_006c2e00(), cVar1 == '\0')) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xc8c8c8);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xff00);
    }
    pvStack_14c4 = (LPVOID)0x6bdc14;
    local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&DAT_00778394,0xc,&local_1048,0x10);
    local_1048.top = local_1048.top + 1 + local_1054;
    if ((local_1049 == '\0') && (cVar1 = FUN_006c2e00(), cVar1 == '\0')) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xc8c8c8);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xff00);
    }
    pvStack_14c4 = (LPVOID)0x6bdca6;
    local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&DAT_00778400,0xc,&local_1048,0x10);
    local_1048.top = local_1048.top + 1 + local_1054;
    if ((local_1049 == '\0') && (cVar1 = FUN_006c2e00(), cVar1 == '\0')) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xc8c8c8);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xff00);
    }
    pvStack_14c4 = (LPVOID)0x6bdd39;
    local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&DAT_00778410,0xc,&local_1048,0x10);
    local_1048.top = local_1048.top + 1 + local_1054;
    if ((local_1049 == '\0') && (cVar1 = FUN_006c2e00(), cVar1 == '\0')) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xc8c8c8);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xff00);
    }
    pvStack_14c4 = (LPVOID)0x6bddcc;
    local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&DAT_00778420,0xc,&local_1048,0x10);
    local_1048.top = local_1048.top + 1 + local_1054;
    if ((local_1049 == '\0') && (cVar1 = FUN_006c2e00(), cVar1 == '\0')) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xc8c8c8);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xff00);
    }
    pvStack_14c4 = (LPVOID)0x6bde5e;
    local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&DAT_00778430,0xc,&local_1048,0x10);
    local_1048.top = local_1048.top + 1 + local_1054;
    if ((local_1049 == '\0') && (cVar1 = FUN_006c2e00(), cVar1 == '\0')) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xc8c8c8);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xff00);
    }
    pvStack_14c4 = (LPVOID)0x6bdef1;
    local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&DAT_007783e4,10,&local_1048,0x10);
  }
  local_1048.top = local_1048.top + 1 + local_1054;
  SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
  if (*(int *)(local_1050 + 0x2e4) != 0) {
    local_1048.top = local_1048.top + 1 + local_1054;
    if (local_1049 == '\0') {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),local_1074);
    }
    FUN_00414e80();
    local_10d0 = &local_1008;
    local_1270 = auStack_1007;
    do {
      local_10aa = *local_10d0;
      local_10d0 = local_10d0 + 1;
    } while (local_10aa != '\0');
    local_1274 = (int)local_10d0 - (int)local_1270;
    pvStack_14c4 = (LPVOID)0x6be8d2;
    local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&local_1008,local_1274,&local_1048,0x10);
  }
  if (*(int *)(local_1050 + 0x2e8) != 0) {
    local_1048.top = local_1048.top + 1 + local_1054;
    if (local_1049 == '\0') {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),local_1074);
    }
    FUN_00414e80();
    local_10d4 = &local_1008;
    local_1278 = auStack_1007;
    do {
      local_10ab = *local_10d4;
      local_10d4 = local_10d4 + 1;
    } while (local_10ab != '\0');
    local_127c = (int)local_10d4 - (int)local_1278;
    pvStack_14c4 = (LPVOID)0x6be9cd;
    local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&local_1008,local_127c,&local_1048,0x10);
  }
  if (*(int *)(local_1050 + 0x2ec) != 0) {
    local_1048.top = local_1048.top + 1 + local_1054;
    if (local_1049 == '\0') {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),local_1074);
    }
    FUN_00414e80();
    local_10d8 = &local_1008;
    local_1280 = auStack_1007;
    do {
      local_10ac = *local_10d8;
      local_10d8 = local_10d8 + 1;
    } while (local_10ac != '\0');
    local_1284 = (int)local_10d8 - (int)local_1280;
    pvStack_14c4 = (LPVOID)0x6beaca;
    local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&local_1008,local_1284,&local_1048,0x10);
  }
  if (*(int *)(local_1050 + 0x2f0) != 0) {
    local_1048.top = local_1048.top + 1 + local_1054;
    if (local_1049 == '\0') {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),local_1074);
    }
    FUN_00414e80();
    local_10dc = &local_1008;
    local_1288 = auStack_1007;
    do {
      local_1092 = *local_10dc;
      local_10dc = local_10dc + 1;
    } while (local_1092 != '\0');
    local_128c = (int)local_10dc - (int)local_1288;
    pvStack_14c4 = (LPVOID)0x6bebc6;
    local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&local_1008,local_128c,&local_1048,0x10);
  }
  if (*(int *)(local_1050 + 0x2d4) != 0) {
    local_1048.top = local_1048.top + 1 + local_1054;
    if (local_1049 == '\0') {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),local_1074);
    }
    FUN_00414e80();
    local_10e0 = &local_1008;
    local_1290 = auStack_1007;
    do {
      local_10ad = *local_10e0;
      local_10e0 = local_10e0 + 1;
    } while (local_10ad != '\0');
    local_1294 = (int)local_10e0 - (int)local_1290;
    pvStack_14c4 = (LPVOID)0x6becc1;
    local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&local_1008,local_1294,&local_1048,0x10);
  }
  if (*(int *)(local_1050 + 0x2dc) != 0) {
    local_1048.top = local_1048.top + 1 + local_1054;
    if (local_1049 == '\0') {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),local_1074);
    }
    FUN_00414e80();
    local_10e4 = &local_1008;
    local_1298 = auStack_1007;
    do {
      local_10ae = *local_10e4;
      local_10e4 = local_10e4 + 1;
    } while (local_10ae != '\0');
    local_129c = (int)local_10e4 - (int)local_1298;
    pvStack_14c4 = (LPVOID)0x6bedbe;
    local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&local_1008,local_129c,&local_1048,0x10);
  }
  if (*(int *)(local_1050 + 0x2d8) != 0) {
    local_1048.top = local_1048.top + 1 + local_1054;
    if (local_1049 == '\0') {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),local_1074);
    }
    FUN_00414e80();
    local_10e8 = &local_1008;
    local_12a0 = auStack_1007;
    do {
      local_10b0 = *local_10e8;
      local_10e8 = local_10e8 + 1;
    } while (local_10b0 != '\0');
    local_12a4 = (int)local_10e8 - (int)local_12a0;
    pvStack_14c4 = (LPVOID)0x6beeba;
    local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&local_1008,local_12a4,&local_1048,0x10);
  }
  if (*(int *)(local_1050 + 0x2e0) != 0) {
    local_1048.top = local_1048.top + 1 + local_1054;
    if (local_1049 == '\0') {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),local_1074);
    }
    FUN_00414e80();
    local_10ec = &local_1008;
    local_12a8 = auStack_1007;
    do {
      local_10b1 = *local_10ec;
      local_10ec = local_10ec + 1;
    } while (local_10b1 != '\0');
    local_12ac = (int)local_10ec - (int)local_12a8;
    pvStack_14c4 = (LPVOID)0x6befb5;
    local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&local_1008,local_12ac,&local_1048,0x10);
  }
  local_1048.top = local_1048.top + 1 + local_1054;
  if (*(int *)(local_1050 + 0x2c4) != 0) {
    local_1048.top = local_1048.top + 1 + local_1054;
    if (local_1049 == '\0') {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
    }
    else if (*(int *)(local_1050 + 0x2c4) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    FUN_00414e80();
    local_10f0 = &local_1008;
    local_12b0 = auStack_1007;
    do {
      local_10b2 = *local_10f0;
      local_10f0 = local_10f0 + 1;
    } while (local_10b2 != '\0');
    local_12b4 = (int)local_10f0 - (int)local_12b0;
    pvStack_14c4 = (LPVOID)0x6bf0ec;
    local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&local_1008,local_12b4,&local_1048,0x10);
  }
  if (*(int *)(local_1050 + 0x2cc) != 0) {
    local_1048.top = local_1048.top + 1 + local_1054;
    if (local_1049 == '\0') {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    FUN_00414e80();
    local_10f4 = &local_1008;
    local_12b8 = auStack_1007;
    do {
      local_10bd = *local_10f4;
      local_10f4 = local_10f4 + 1;
    } while (local_10bd != '\0');
    local_12bc = (int)local_10f4 - (int)local_12b8;
    pvStack_14c4 = (LPVOID)0x6bf1fc;
    local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&local_1008,local_12bc,&local_1048,0x10);
  }
  if (*(int *)(local_1050 + 0x2c8) != 0) {
    local_1048.top = local_1048.top + 1 + local_1054;
    if (local_1049 == '\0') {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
    }
    else if (*(int *)(local_1050 + 0x2c8) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    FUN_00414e80();
    local_10f8 = &local_1008;
    local_12c0 = auStack_1007;
    do {
      local_10be = *local_10f8;
      local_10f8 = local_10f8 + 1;
    } while (local_10be != '\0');
    local_12c4 = (int)local_10f8 - (int)local_12c0;
    pvStack_14c4 = (LPVOID)0x6bf31d;
    local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&local_1008,local_12c4,&local_1048,0x10);
  }
  if (*(int *)(local_1050 + 0x2d0) != 0) {
    local_1048.top = local_1048.top + 1 + local_1054;
    if (local_1049 == '\0') {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    FUN_00414e80();
    local_10fc = &local_1008;
    local_12c8 = auStack_1007;
    do {
      local_107d = *local_10fc;
      local_10fc = local_10fc + 1;
    } while (local_107d != '\0');
    local_12cc = (int)local_10fc - (int)local_12c8;
    pvStack_14c4 = (LPVOID)0x6bf42c;
    local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&local_1008,local_12cc,&local_1048,0x10);
  }
  if (*(int *)(local_1050 + 0x2f4) != 0) {
    local_1048.top = local_1048.top + 1 + local_1054;
    if (local_1049 == '\0') {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
    }
    else if (*(int *)(local_1050 + 0x2f4) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    if (*(int *)(local_1050 + 0x2f4) < 1) {
      local_11f8 = &DAT_007784b4;
    }
    else {
      local_11f8 = &DAT_007784b0;
    }
    pvStack_14c4 = (LPVOID)0x6bf519;
    FUN_00414e80();
    local_1100 = &local_1008;
    local_12d0 = auStack_1007;
    do {
      local_107e = *local_1100;
      local_1100 = local_1100 + 1;
    } while (local_107e != '\0');
    local_12d4 = (int)local_1100 - (int)local_12d0;
    pvStack_14c4 = (LPVOID)0x6bf58e;
    local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&local_1008,local_12d4,&local_1048,0x10);
  }
  if (*(int *)(local_1050 + 0x2fc) != 0) {
    local_1048.top = local_1048.top + 1 + local_1054;
    if (local_1049 == '\0') {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
    }
    else if (*(int *)(local_1050 + 0x2fc) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    if (*(int *)(local_1050 + 0x2fc) < 1) {
      local_11fc = &DAT_00778534;
    }
    else {
      local_11fc = &DAT_007784c8;
    }
    pvStack_14c4 = (LPVOID)0x6bf67b;
    FUN_00414e80();
    local_1104 = &local_1008;
    local_12d8 = auStack_1007;
    do {
      local_107f = *local_1104;
      local_1104 = local_1104 + 1;
    } while (local_107f != '\0');
    local_12dc = (int)local_1104 - (int)local_12d8;
    pvStack_14c4 = (LPVOID)0x6bf6ef;
    local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&local_1008,local_12dc,&local_1048,0x10);
  }
  if (*(int *)(local_1050 + 0x2f8) != 0) {
    local_1048.top = local_1048.top + 1 + local_1054;
    if (local_1049 == '\0') {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
    }
    else if (*(int *)(local_1050 + 0x2f8) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    if (*(int *)(local_1050 + 0x2f8) < 1) {
      local_1200 = &DAT_0077854c;
    }
    else {
      local_1200 = &DAT_00778548;
    }
    pvStack_14c4 = (LPVOID)0x6bf7dc;
    FUN_00414e80();
    local_1108 = &local_1008;
    local_12e0 = auStack_1007;
    do {
      local_1080 = *local_1108;
      local_1108 = local_1108 + 1;
    } while (local_1080 != '\0');
    local_12e4 = (int)local_1108 - (int)local_12e0;
    pvStack_14c4 = (LPVOID)0x6bf851;
    local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&local_1008,local_12e4,&local_1048,0x10);
  }
  if (*(int *)(local_1050 + 0x300) != 0) {
    local_1048.top = local_1048.top + 1 + local_1054;
    if (local_1049 == '\0') {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
    }
    else if (*(int *)(local_1050 + 0x300) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    if (*(int *)(local_1050 + 0x300) < 1) {
      local_1204 = &DAT_00778520;
    }
    else {
      local_1204 = &DAT_0077851c;
    }
    pvStack_14c4 = (LPVOID)0x6bf93e;
    FUN_00414e80();
    local_110c = &local_1008;
    local_12e8 = auStack_1007;
    do {
      local_1081 = *local_110c;
      local_110c = local_110c + 1;
    } while (local_1081 != '\0');
    local_12ec = (int)local_110c - (int)local_12e8;
    pvStack_14c4 = (LPVOID)0x6bf9b3;
    local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&local_1008,local_12ec,&local_1048,0x10);
  }
  if (*(int *)(local_1050 + 0x30c) != 0) {
    local_1048.top = local_1048.top + 1 + local_1054;
    if (local_1049 == '\0') {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
    }
    else if (*(int *)(local_1050 + 0x30c) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    if (*(int *)(local_1050 + 0x30c) < 1) {
      local_1208 = &DAT_00778574;
    }
    else {
      local_1208 = &DAT_00778570;
    }
    pvStack_14c4 = (LPVOID)0x6bfa98;
    FUN_00414e80();
    local_1110 = &local_1008;
    local_12f0 = auStack_1007;
    do {
      local_1082 = *local_1110;
      local_1110 = local_1110 + 1;
    } while (local_1082 != '\0');
    local_12f4 = (int)local_1110 - (int)local_12f0;
    pvStack_14c4 = (LPVOID)0x6bfb0c;
    local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&local_1008,local_12f4,&local_1048,0x10);
  }
  if (*(int *)(local_1050 + 0x310) != 0) {
    local_1048.top = local_1048.top + 1 + local_1054;
    if (local_1049 == '\0') {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
    }
    else if (*(int *)(local_1050 + 0x310) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    if (*(int *)(local_1050 + 0x310) < 1) {
      local_120c = &DAT_00778550;
    }
    else {
      local_120c = &DAT_0077858c;
    }
    pvStack_14c4 = (LPVOID)0x6bfbf1;
    FUN_00414e80();
    local_1114 = &local_1008;
    local_12f8 = auStack_1007;
    do {
      local_1083 = *local_1114;
      local_1114 = local_1114 + 1;
    } while (local_1083 != '\0');
    local_12fc = (int)local_1114 - (int)local_12f8;
    pvStack_14c4 = (LPVOID)0x6bfc66;
    local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&local_1008,local_12fc,&local_1048,0x10);
  }
  if (*(int *)(local_1050 + 0x308) != 0) {
    local_1048.top = local_1048.top + 1 + local_1054;
    if (local_1049 == '\0') {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
    }
    else if (*(int *)(local_1050 + 0x308) < 0) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    if (*(int *)(local_1050 + 0x308) < 0) {
      local_1210 = &DAT_00778568;
    }
    else {
      local_1210 = &DAT_0077856c;
    }
    FUN_004a1b00();
    pvStack_14c4 = (LPVOID)0x6bfd50;
    FUN_00414e80();
    local_1118 = &local_1008;
    local_1300 = auStack_1007;
    do {
      local_1084 = *local_1118;
      local_1118 = local_1118 + 1;
    } while (local_1084 != '\0');
    local_1304 = (int)local_1118 - (int)local_1300;
    pvStack_14c4 = (LPVOID)0x6bfdc5;
    local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&local_1008,local_1304,&local_1048,0x10);
  }
  if (*(float *)(local_1050 + 0x304) != 0.0) {
    local_1048.top = local_1048.top + 1 + local_1054;
    if (local_1049 == '\0') {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
    }
    else if (*(float *)(local_1050 + 0x304) <= 0.0) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    if (*(float *)(local_1050 + 0x304) <= 0.0) {
      local_1214 = &DAT_007785e4;
    }
    else {
      local_1214 = &DAT_007785e0;
    }
    pvStack_14c4 = (LPVOID)0x6bfece;
    FUN_00414e80();
    local_111c = &local_1008;
    local_1308 = auStack_1007;
    do {
      local_1085 = *local_111c;
      local_111c = local_111c + 1;
    } while (local_1085 != '\0');
    local_130c = (int)local_111c - (int)local_1308;
    pvStack_14c4 = (LPVOID)0x6bff42;
    local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&local_1008,local_130c,&local_1048,0x10);
  }
  if (*(int *)(local_1050 + 0x314) != 0) {
    local_1048.top = local_1048.top + 1 + local_1054;
    if (local_1049 == '\0') {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
    }
    else if (*(int *)(local_1050 + 0x314) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    FUN_00414e80();
    local_1120 = &local_1008;
    local_1310 = auStack_1007;
    do {
      local_1086 = *local_1120;
      local_1120 = local_1120 + 1;
    } while (local_1086 != '\0');
    local_1314 = (int)local_1120 - (int)local_1310;
    pvStack_14c4 = (LPVOID)0x6c0063;
    local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&local_1008,local_1314,&local_1048,0x10);
  }
  if (*(int *)(local_1050 + 0x318) != 0) {
    local_1048.top = local_1048.top + 1 + local_1054;
    if (local_1049 == '\0') {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
    }
    else if (*(int *)(local_1050 + 0x318) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    FUN_00414e80();
    local_1124 = &local_1008;
    local_1318 = auStack_1007;
    do {
      local_1087 = *local_1124;
      local_1124 = local_1124 + 1;
    } while (local_1087 != '\0');
    local_131c = (int)local_1124 - (int)local_1318;
    pvStack_14c4 = (LPVOID)0x6c0184;
    local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&local_1008,local_131c,&local_1048,0x10);
  }
  if (*(int *)(local_1050 + 0x31c) != 0) {
    local_1048.top = local_1048.top + 1 + local_1054;
    if (local_1049 == '\0') {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
    }
    else if (*(int *)(local_1050 + 0x31c) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    FUN_00414e80();
    local_1128 = &local_1008;
    local_1320 = auStack_1007;
    do {
      local_1088 = *local_1128;
      local_1128 = local_1128 + 1;
    } while (local_1088 != '\0');
    local_1324 = (int)local_1128 - (int)local_1320;
    pvStack_14c4 = (LPVOID)0x6c02a4;
    local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&local_1008,local_1324,&local_1048,0x10);
  }
  if (*(int *)(local_1050 + 800) != 0) {
    local_1048.top = local_1048.top + 1 + local_1054;
    if (local_1049 == '\0') {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
    }
    else if (*(int *)(local_1050 + 800) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    FUN_00414e80();
    local_112c = &local_1008;
    local_1328 = auStack_1007;
    do {
      local_1089 = *local_112c;
      local_112c = local_112c + 1;
    } while (local_1089 != '\0');
    local_132c = (int)local_112c - (int)local_1328;
    pvStack_14c4 = (LPVOID)0x6c03c5;
    local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&local_1008,local_132c,&local_1048,0x10);
  }
  if (*(int *)(local_1050 + 0x324) != 0) {
    local_1048.top = local_1048.top + 1 + local_1054;
    if (local_1049 == '\0') {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
    }
    else if (*(int *)(local_1050 + 0x324) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    FUN_00414e80();
    local_1130 = &local_1008;
    local_1330 = auStack_1007;
    do {
      local_108a = *local_1130;
      local_1130 = local_1130 + 1;
    } while (local_108a != '\0');
    local_1334 = (int)local_1130 - (int)local_1330;
    pvStack_14c4 = (LPVOID)0x6c04e6;
    local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&local_1008,local_1334,&local_1048,0x10);
  }
  if (*(int *)(local_1050 + 0x328) != 0) {
    local_1048.top = local_1048.top + 1 + local_1054;
    if (local_1049 == '\0') {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
    }
    else if (*(int *)(local_1050 + 0x328) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    FUN_00414e80();
    local_1134 = &local_1008;
    local_1338 = auStack_1007;
    do {
      local_108b = *local_1134;
      local_1134 = local_1134 + 1;
    } while (local_108b != '\0');
    local_133c = (int)local_1134 - (int)local_1338;
    pvStack_14c4 = (LPVOID)0x6c0606;
    local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&local_1008,local_133c,&local_1048,0x10);
  }
  if (*(int *)(local_1050 + 0x32c) != 0) {
    local_1048.top = local_1048.top + 1 + local_1054;
    if (local_1049 == '\0') {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
    }
    else if (*(int *)(local_1050 + 0x32c) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    FUN_00414e80();
    local_1138 = &local_1008;
    local_1340 = auStack_1007;
    do {
      local_108c = *local_1138;
      local_1138 = local_1138 + 1;
    } while (local_108c != '\0');
    local_13e0 = (int)local_1138 - (int)local_1340;
    pvStack_14c4 = (LPVOID)0x6c0727;
    local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&local_1008,local_13e0,&local_1048,0x10);
  }
  if (*(int *)(local_1050 + 0x330) != 0) {
    local_1048.top = local_1048.top + 1 + local_1054;
    if (local_1049 == '\0') {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
    }
    else if (*(int *)(local_1050 + 0x330) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    FUN_00414e80();
    local_113c = &local_1008;
    local_1348 = auStack_1007;
    do {
      local_108d = *local_113c;
      local_113c = local_113c + 1;
    } while (local_108d != '\0');
    local_134c = (int)local_113c - (int)local_1348;
    pvStack_14c4 = (LPVOID)0x6c0848;
    local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&local_1008,local_134c,&local_1048,0x10);
  }
  if (*(int *)(local_1050 + 0x334) != 0) {
    local_1048.top = local_1048.top + 1 + local_1054;
    if (local_1049 == '\0') {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
    }
    else if (*(int *)(local_1050 + 0x334) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    FUN_00414e80();
    local_1140 = &local_1008;
    local_1350 = auStack_1007;
    do {
      local_108e = *local_1140;
      local_1140 = local_1140 + 1;
    } while (local_108e != '\0');
    local_1354 = (int)local_1140 - (int)local_1350;
    pvStack_14c4 = (LPVOID)0x6c0968;
    local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&local_1008,local_1354,&local_1048,0x10);
  }
  if (*(int *)(local_1050 + 0x338) != 0) {
    local_1048.top = local_1048.top + 1 + local_1054;
    if (local_1049 == '\0') {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
    }
    else if (*(int *)(local_1050 + 0x338) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    FUN_00414e80();
    local_1144 = &local_1008;
    local_1358 = auStack_1007;
    do {
      local_108f = *local_1144;
      local_1144 = local_1144 + 1;
    } while (local_108f != '\0');
    local_135c = (int)local_1144 - (int)local_1358;
    pvStack_14c4 = (LPVOID)0x6c0a89;
    local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&local_1008,local_135c,&local_1048,0x10);
  }
  if (*(int *)(local_1050 + 0x33c) != 0) {
    local_1048.top = local_1048.top + 1 + local_1054;
    if (local_1049 == '\0') {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
    }
    else if (*(int *)(local_1050 + 0x33c) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    FUN_00414e80();
    local_1148 = &local_1008;
    local_1360 = auStack_1007;
    do {
      local_1090 = *local_1148;
      local_1148 = local_1148 + 1;
    } while (local_1090 != '\0');
    local_1364 = (int)local_1148 - (int)local_1360;
    pvStack_14c4 = (LPVOID)0x6c0baa;
    local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&local_1008,local_1364,&local_1048,0x10);
  }
  if (*(int *)(local_1050 + 0x340) != 0) {
    local_1048.top = local_1048.top + 1 + local_1054;
    if (local_1049 == '\0') {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
    }
    else if (*(int *)(local_1050 + 0x340) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    FUN_00414e80();
    local_114c = &local_1008;
    local_1368 = auStack_1007;
    do {
      local_1091 = *local_114c;
      local_114c = local_114c + 1;
    } while (local_1091 != '\0');
    local_136c = (int)local_114c - (int)local_1368;
    pvStack_14c4 = (LPVOID)0x6c0cca;
    local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&local_1008,local_136c,&local_1048,0x10);
  }
  if (*(int *)(local_1050 + 0x344) != 0) {
    local_1048.top = local_1048.top + 1 + local_1054;
    if (local_1049 == '\0') {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
    }
    else if (*(int *)(local_1050 + 0x344) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    FUN_00414e80();
    local_1150 = &local_1008;
    local_1370 = auStack_1007;
    do {
      local_10af = *local_1150;
      local_1150 = local_1150 + 1;
    } while (local_10af != '\0');
    local_1374 = (int)local_1150 - (int)local_1370;
    pvStack_14c4 = (LPVOID)0x6c0deb;
    local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&local_1008,local_1374,&local_1048,0x10);
  }
  if (*(int *)(local_1050 + 0x348) != 0) {
    local_1048.top = local_1048.top + 1 + local_1054;
    if (local_1049 == '\0') {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
    }
    else if (*(int *)(local_1050 + 0x348) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    FUN_00414e80();
    local_1154 = &local_1008;
    local_1378 = auStack_1007;
    do {
      local_1093 = *local_1154;
      local_1154 = local_1154 + 1;
    } while (local_1093 != '\0');
    local_137c = (int)local_1154 - (int)local_1378;
    pvStack_14c4 = (LPVOID)0x6c0f0c;
    local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&local_1008,local_137c,&local_1048,0x10);
  }
  if (*(int *)(local_1050 + 0x350) != 0) {
    local_1048.top = local_1048.top + 1 + local_1054;
    if (local_1049 == '\0') {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
    }
    else if (*(int *)(local_1050 + 0x350) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    FUN_00414e80();
    local_1158 = &local_1008;
    local_1380 = auStack_1007;
    do {
      local_1094 = *local_1158;
      local_1158 = local_1158 + 1;
    } while (local_1094 != '\0');
    local_1384 = (int)local_1158 - (int)local_1380;
    pvStack_14c4 = (LPVOID)0x6c102c;
    local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&local_1008,local_1384,&local_1048,0x10);
  }
  if (*(int *)(local_1050 + 0x354) != 0) {
    local_1048.top = local_1048.top + 1 + local_1054;
    if (local_1049 == '\0') {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
    }
    else if (*(int *)(local_1050 + 0x354) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    FUN_00414e80();
    local_11a0 = &local_1008;
    local_1388 = auStack_1007;
    do {
      local_1095 = *local_11a0;
      local_11a0 = local_11a0 + 1;
    } while (local_1095 != '\0');
    local_138c = (int)local_11a0 - (int)local_1388;
    pvStack_14c4 = (LPVOID)0x6c114d;
    local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&local_1008,local_138c,&local_1048,0x10);
  }
  if (*(int *)(local_1050 + 0x358) != 0) {
    local_1048.top = local_1048.top + 1 + local_1054;
    if (local_1049 == '\0') {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
    }
    else if (*(int *)(local_1050 + 0x358) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    FUN_00414e80();
    local_115c = &local_1008;
    local_1390 = auStack_1007;
    do {
      local_1096 = *local_115c;
      local_115c = local_115c + 1;
    } while (local_1096 != '\0');
    local_1394 = (int)local_115c - (int)local_1390;
    pvStack_14c4 = (LPVOID)0x6c126e;
    local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&local_1008,local_1394,&local_1048,0x10);
  }
  if (*(int *)(local_1050 + 0x35c) != 0) {
    local_1048.top = local_1048.top + 1 + local_1054;
    if (local_1049 == '\0') {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
    }
    else if (*(int *)(local_1050 + 0x35c) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    FUN_00414e80();
    local_1160 = &local_1008;
    local_1398 = auStack_1007;
    do {
      local_1097 = *local_1160;
      local_1160 = local_1160 + 1;
    } while (local_1097 != '\0');
    local_139c = (int)local_1160 - (int)local_1398;
    pvStack_14c4 = (LPVOID)0x6c138e;
    local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&local_1008,local_139c,&local_1048,0x10);
  }
  if (*(int *)(local_1050 + 0x360) != 0) {
    local_1048.top = local_1048.top + 1 + local_1054;
    if (local_1049 == '\0') {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
    }
    else if (*(int *)(local_1050 + 0x360) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    FUN_00414e80();
    local_1164 = &local_1008;
    local_13a0 = auStack_1007;
    do {
      local_1098 = *local_1164;
      local_1164 = local_1164 + 1;
    } while (local_1098 != '\0');
    local_13a4 = (int)local_1164 - (int)local_13a0;
    pvStack_14c4 = (LPVOID)0x6c14af;
    local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&local_1008,local_13a4,&local_1048,0x10);
  }
  if (*(int *)(local_1050 + 0x368) != 0) {
    local_1048.top = local_1048.top + 1 + local_1054;
    if (local_1049 == '\0') {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
    }
    else if (*(int *)(local_1050 + 0x368) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    FUN_00414e80();
    local_1168 = &local_1008;
    local_13a8 = auStack_1007;
    do {
      local_1099 = *local_1168;
      local_1168 = local_1168 + 1;
    } while (local_1099 != '\0');
    local_13ac = (int)local_1168 - (int)local_13a8;
    pvStack_14c4 = (LPVOID)0x6c15d0;
    local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&local_1008,local_13ac,&local_1048,0x10);
  }
  if (*(int *)(local_1050 + 0x364) != 0) {
    local_1048.top = local_1048.top + 1 + local_1054;
    if (local_1049 == '\0') {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
    }
    else if (*(int *)(local_1050 + 0x364) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    FUN_00414e80();
    local_116c = &local_1008;
    local_13b0 = auStack_1007;
    do {
      local_109a = *local_116c;
      local_116c = local_116c + 1;
    } while (local_109a != '\0');
    local_13b4 = (int)local_116c - (int)local_13b0;
    pvStack_14c4 = (LPVOID)0x6c16f0;
    local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&local_1008,local_13b4,&local_1048,0x10);
  }
  cVar1 = FUN_00427e30();
  if (cVar1 != '\0') {
    local_1048.top = local_1048.top + 1 + local_1054;
    if (local_1049 == '\0') {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    cVar1 = FUN_00427c60();
    if (cVar1 == '\0') {
      cVar1 = FUN_00427c60();
      if (cVar1 == '\0') {
        cVar1 = FUN_00427c60();
        if (cVar1 == '\0') {
          cVar1 = FUN_00427c60();
          if (cVar1 == '\0') {
            pvStack_14c4 = (LPVOID)0x6c18af;
            local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&DAT_007787dc,10,&local_1048,0x10);
          }
          else {
            pvStack_14c4 = (LPVOID)0x6c1888;
            local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&DAT_007787d0,10,&local_1048,0x10);
          }
        }
        else {
          pvStack_14c4 = (LPVOID)0x6c1841;
          local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&DAT_00778740,10,&local_1048,0x10);
        }
      }
      else {
        pvStack_14c4 = (LPVOID)0x6c17f5;
        local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&DAT_00778724,10,&local_1048,0x10);
      }
    }
    else {
      pvStack_14c4 = (LPVOID)0x6c17a9;
      local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&DAT_0077877c,10,&local_1048,0x10);
    }
  }
  if (*(int *)(local_1050 + 0x36c) != 0) {
    local_1048.top = local_1048.top + 1 + local_1054;
    if (local_1049 == '\0') {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
    }
    else if (*(int *)(local_1050 + 0x36c) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    FUN_00414e80();
    local_1170 = &local_1008;
    local_13b8 = auStack_1007;
    do {
      local_109b = *local_1170;
      local_1170 = local_1170 + 1;
    } while (local_109b != '\0');
    local_13bc = (int)local_1170 - (int)local_13b8;
    pvStack_14c4 = (LPVOID)0x6c19e4;
    local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&local_1008,local_13bc,&local_1048,0x10);
  }
  if (*(int *)(local_1050 + 0x370) != 0) {
    local_1048.top = local_1048.top + 1 + local_1054;
    if (local_1049 == '\0') {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
    }
    else if (*(int *)(local_1050 + 0x370) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    FUN_00414e80();
    local_1174 = &local_1008;
    local_13c0 = auStack_1007;
    do {
      local_109c = *local_1174;
      local_1174 = local_1174 + 1;
    } while (local_109c != '\0');
    local_13c4 = (int)local_1174 - (int)local_13c0;
    pvStack_14c4 = (LPVOID)0x6c1b05;
    local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&local_1008,local_13c4,&local_1048,0x10);
  }
  if (*(int *)(local_1050 + 0x374) != 0) {
    local_1048.top = local_1048.top + 1 + local_1054;
    if (local_1049 == '\0') {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
    }
    else if (*(int *)(local_1050 + 0x374) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    FUN_00414e80();
    local_1178 = &local_1008;
    local_13c8 = auStack_1007;
    do {
      local_109d = *local_1178;
      local_1178 = local_1178 + 1;
    } while (local_109d != '\0');
    local_13cc = (int)local_1178 - (int)local_13c8;
    pvStack_14c4 = (LPVOID)0x6c1c26;
    local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&local_1008,local_13cc,&local_1048,0x10);
  }
  if (*(int *)(local_1050 + 0x37c) != 0) {
    local_1048.top = local_1048.top + 1 + local_1054;
    if (local_1049 == '\0') {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
    }
    else if (*(int *)(local_1050 + 0x37c) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    FUN_00414e80();
    local_117c = &local_1008;
    local_13d0 = auStack_1007;
    do {
      local_109e = *local_117c;
      local_117c = local_117c + 1;
    } while (local_109e != '\0');
    local_13d4 = (int)local_117c - (int)local_13d0;
    pvStack_14c4 = (LPVOID)0x6c1d46;
    local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&local_1008,local_13d4,&local_1048,0x10);
  }
  if (*(int *)(local_1050 + 0x380) != 0) {
    local_1048.top = local_1048.top + 1 + local_1054;
    if (local_1049 == '\0') {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
    }
    else if (*(int *)(local_1050 + 0x380) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    FUN_00414e80();
    local_1180 = &local_1008;
    local_13d8 = auStack_1007;
    do {
      local_109f = *local_1180;
      local_1180 = local_1180 + 1;
    } while (local_109f != '\0');
    local_13dc = (int)local_1180 - (int)local_13d8;
    pvStack_14c4 = (LPVOID)0x6c1e67;
    local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&local_1008,local_13dc,&local_1048,0x10);
  }
  local_1218 = local_1050 + 0x3d4;
  local_11c0 = game_loop_helper_018d0();
  local_1454 = game_loop_helper_018b0();
  for (; local_11c0 != local_1454; local_11c0 = local_11c0 + 0x20) {
    local_11dc = local_11c0;
    local_1048.top = local_1048.top + 1 + local_1054;
    if (local_1049 == '\0') {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    local_1458 = (undefined1 *)&iStack_14cc;
    iStack_14d0 = local_11dc;
    puStack_14d4 = (undefined1 *)0x6c1f49;
    FUN_00405520();
    iStack_14d0 = 0x6c1f4e;
    local_13e4 = FUN_004caab0();
    local_13e8 = FUN_005d9da0();
    npk_get_relative_res_path();
    FUN_00414e80();
    local_1184 = &local_1008;
    local_13ec = auStack_1007;
    do {
      local_10a0 = *local_1184;
      local_1184 = local_1184 + 1;
    } while (local_10a0 != '\0');
    local_13f0 = (int)local_1184 - (int)local_13ec;
    pvStack_14c4 = (LPVOID)0x6c2004;
    local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&local_1008,local_13f0,&local_1048,0x10);
  }
  cVar1 = FUN_00427e30();
  if (cVar1 != '\0') {
    cVar1 = FUN_00427c60();
    if (cVar1 == '\0') {
      cVar1 = FUN_00427c60();
      if (cVar1 != '\0') {
        local_1048.top = local_1048.top + 1 + local_1054;
        if (local_1049 == '\0') {
          SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
        }
        else {
          SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
        }
        local_1460 = (undefined1 *)&pvStack_14c4;
        pfStack_14c8 = (function<void___cdecl(void)> *)(local_1050 + 900);
        iStack_14cc = 0x6c2236;
        FUN_00405520();
        pfStack_14c8 = local_1038;
        iStack_14cc = 0x6c2242;
        local_1408 = FUN_004c7e10();
        local_1404 = local_1408;
        npk_get_relative_res_path();
        pvStack_14c4 = (LPVOID)0x6c228e;
        FUN_00414e80();
        std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1038);
        local_118c = &local_1008;
        local_140c = auStack_1007;
        do {
          local_10a2 = *local_118c;
          local_118c = local_118c + 1;
        } while (local_10a2 != '\0');
        local_1410 = (int)local_118c - (int)local_140c;
        pvStack_14c4 = (LPVOID)0x6c230e;
        local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&local_1008,local_1410,&local_1048,0x10
                              );
      }
    }
    else {
      local_1048.top = local_1048.top + 1 + local_1054;
      if (local_1049 == '\0') {
        SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
      }
      else {
        SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
      }
      local_145c = (undefined1 *)&pvStack_14c4;
      pfStack_14c8 = (function<void___cdecl(void)> *)(local_1050 + 900);
      iStack_14cc = 0x6c20c3;
      FUN_00405520();
      pfStack_14c8 = local_1020;
      iStack_14cc = 0x6c20cf;
      local_13f8 = FUN_004c7e10();
      local_13f4 = local_13f8;
      npk_get_relative_res_path();
      pvStack_14c4 = (LPVOID)0x6c211b;
      FUN_00414e80();
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1020);
      local_1188 = &local_1008;
      local_13fc = auStack_1007;
      do {
        local_10a1 = *local_1188;
        local_1188 = local_1188 + 1;
      } while (local_10a1 != '\0');
      local_1400 = (int)local_1188 - (int)local_13fc;
      pvStack_14c4 = (LPVOID)0x6c219c;
      local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&local_1008,local_1400,&local_1048,0x10);
    }
  }
  cVar1 = FUN_00427e30();
  if ((cVar1 == '\0') || (cVar1 = FUN_00427e30(), cVar1 == '\0')) {
    cVar1 = FUN_00427e30();
    if ((cVar1 != '\0') && (cVar1 = FUN_00427e30(), cVar1 != '\0')) {
      local_1048.top = local_1048.top + local_1054 + 0xe;
      if (local_1049 == '\0') {
        SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
      }
      else {
        SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
      }
      npk_get_relative_res_path();
      FUN_00414e80();
      local_1194 = &local_1008;
      local_141c = auStack_1007;
      do {
        local_10a4 = *local_1194;
        local_1194 = local_1194 + 1;
      } while (local_10a4 != '\0');
      local_1420 = (int)local_1194 - (int)local_141c;
      pvStack_14c4 = (LPVOID)0x6c2581;
      local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&local_1008,local_1420,&local_1048,0x10);
    }
  }
  else {
    local_1048.top = local_1048.top + local_1054 + 0xe;
    if (local_1049 == '\0') {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    npk_get_relative_res_path();
    FUN_00414e80();
    local_1190 = &local_1008;
    local_1414 = auStack_1007;
    do {
      local_10a3 = *local_1190;
      local_1190 = local_1190 + 1;
    } while (local_10a3 != '\0');
    local_1418 = (int)local_1190 - (int)local_1414;
    pvStack_14c4 = (LPVOID)0x6c2445;
    local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&local_1008,local_1418,&local_1048,0x10);
  }
  cVar1 = FUN_00427e30();
  if ((cVar1 == '\0') || (cVar1 = FUN_00427e30(), cVar1 == '\0')) {
    cVar1 = FUN_00427e30();
    if ((cVar1 != '\0') && (cVar1 = FUN_00427e30(), cVar1 != '\0')) {
      local_1048.top = local_1048.top + local_1054 + 0xe;
      if (local_1049 == '\0') {
        SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
      }
      else {
        SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
      }
      npk_get_relative_res_path();
      FUN_00414e80();
      local_119c = &local_1008;
      local_142c = auStack_1007;
      do {
        local_10bf = *local_119c;
        local_119c = local_119c + 1;
      } while (local_10bf != '\0');
      local_1430 = (int)local_119c - (int)local_142c;
      pvStack_14c4 = (LPVOID)0x6c2806;
      local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&local_1008,local_1430,&local_1048,0x10);
    }
  }
  else {
    local_1048.top = local_1048.top + local_1054 + 0xe;
    if (local_1049 == '\0') {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    npk_get_relative_res_path();
    FUN_00414e80();
    local_1198 = &local_1008;
    local_1424 = auStack_1007;
    do {
      local_10a5 = *local_1198;
      local_1198 = local_1198 + 1;
    } while (local_10a5 != '\0');
    local_1428 = (int)local_1198 - (int)local_1424;
    pvStack_14c4 = (LPVOID)0x6c26c1;
    local_1054 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&local_1008,local_1428,&local_1048,0x10);
  }
  local_1048.top = local_1048.top + local_1054 + 7;
  local_1434 = SelectObject(*(HDC *)(DAT_007ca1a4 + 0x1c),local_121c);
  local_1464 = GetBitmapBits(local_1434,local_10bc,local_106c);
  for (local_1078 = 0; local_1078 < local_10bc >> 2; local_1078 = local_1078 + 1) {
    if (*(int *)((int)local_106c + local_1078 * 4) != 0) {
      *(uint *)((int)local_106c + local_1078 * 4) =
           (*(uint *)((int)local_106c + local_1078 * 4) & 0xff0000) >> 0x10 |
           (*(uint *)((int)local_106c + local_1078 * 4) & 0xff) << 0x10 |
           *(uint *)((int)local_106c + local_1078 * 4) & 0xff00ff00;
    }
  }
  for (local_1060 = 0; local_1060 < local_10bc >> 2; local_1060 = local_1060 + 1) {
    local_1064 = local_106c;
    if ((*(uint *)((int)local_106c + local_1060 * 4) & 0xffffff) != 0) {
      if (*(int *)((int)local_106c + (local_1060 - local_1068) * 4 + -4) == local_1070) {
        *(undefined4 *)((int)local_106c + (local_1060 - local_1068) * 4 + -4) = local_107c;
      }
      if (*(int *)((int)local_106c + (local_1060 - local_1068) * 4 + 4) == local_1070) {
        *(undefined4 *)((int)local_106c + (local_1060 - local_1068) * 4 + 4) = local_107c;
      }
      if (*(int *)((int)local_106c + (local_1060 - local_1068) * 4) == local_1070) {
        *(undefined4 *)((int)local_106c + (local_1060 - local_1068) * 4) = local_107c;
      }
      if (*(int *)((int)local_106c + local_1060 * 4 + -4) == local_1070) {
        *(undefined4 *)((int)local_106c + local_1060 * 4 + -4) = local_107c;
      }
      if (*(int *)((int)local_106c + local_1060 * 4 + 4) == local_1070) {
        *(undefined4 *)((int)local_106c + local_1060 * 4 + 4) = local_107c;
      }
      if (*(int *)((int)local_106c + (local_1060 + local_1068) * 4 + -4) == local_1070) {
        *(undefined4 *)((int)local_106c + (local_1060 + local_1068) * 4 + -4) = local_107c;
      }
      if (*(int *)((int)local_106c + (local_1060 + local_1068) * 4) == local_1070) {
        *(undefined4 *)((int)local_106c + (local_1060 + local_1068) * 4) = local_107c;
      }
      if (*(int *)((int)local_106c + (local_1060 + local_1068) * 4 + 4) == local_1070) {
        *(undefined4 *)((int)local_106c + (local_1060 + local_1068) * 4 + 4) = local_107c;
      }
    }
  }
  for (local_10c4 = 0; local_10c4 < local_10bc >> 2; local_10c4 = local_10c4 + 1) {
    if (*(int *)((int)local_106c + local_10c4 * 4) != 0) {
      *(uint *)((int)local_106c + local_10c4 * 4) =
           *(uint *)((int)local_106c + local_10c4 * 4) | 0xff000000;
    }
  }
  local_1438 = DeleteObject(local_11e0);
  local_1438 = DeleteObject(local_121c);
  pvStack_14c4 = (LPVOID)local_1048.top;
  pfStack_14c8 = (function<void___cdecl(void)> *)local_1068;
  iStack_14cc = *(int *)(DAT_007ca1a4 + 4);
  iStack_14d0 = 0x6c2bd5;
  local_11c8 = D3DXCreateTexture();
  pvStack_14c4 = (LPVOID)0x6c2c08;
  local_11c8 = (**(code **)(**(int **)(local_105c + 0xe8) + 0x4c))();
  pvStack_14c4 = (LPVOID)(local_1068 * local_1048.top * 4);
  pfStack_14c8 = local_106c;
  iStack_14cc = local_1440;
  iStack_14d0 = 0x6c2c32;
  FUN_006e6bd0();
  pvStack_14c4 = local_106c;
  pfStack_14c8 = (function<void___cdecl(void)> *)0x6c2c41;
  FUN_006f1902();
  pvStack_14c4 = (LPVOID)0x0;
  pfStack_14c8 = *(function<void___cdecl(void)> **)(local_105c + 0xe8);
  iStack_14cc = 0x6c2c66;
  local_11c8 = (**(code **)(**(int **)(local_105c + 0xe8) + 0x50))();
  iStack_14cc = 3;
  iStack_14d0 = local_1048.top / 0xd;
  puStack_14d4 = (undefined1 *)0x10;
  local_1468 = (undefined1 *)&uStack_14ec;
  FUN_004054a0("ceshiceshi");
  local_143c = (undefined4 *)d3d9_create_texture_004b7f20(local_14a4);
  puVar6 = local_143c;
  puVar7 = (undefined4 *)(local_105c + 0xc0);
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  iStack_14cc = 0;
  iStack_14d0 = 0;
  puStack_14d4 = local_1444;
  uStack_14d8 = 0;
  uStack_14dc = *(undefined4 *)(local_105c + 0xc0);
  pcStack_14e0 = (char *)0x6c2cf2;
  local_11c8 = (**(code **)(**(int **)(local_105c + 0xc0) + 0x4c))();
  pcStack_14e0 = "sprite/interface/popup.img";
  uStack_14e4 = 0x6c2d08;
  local_11e8 = FUN_005855f0();
  for (local_11c4 = 0; local_11c4 < 0x10; local_11c4 = local_11c4 + 1) {
    pcStack_14e0 = *(char **)(*(int *)(local_11e8 + 0x40) + 0x1690);
    uStack_14e4 = *(undefined4 *)(*(int *)(local_11e8 + 0x40) + 0x16a4);
    iStack_14e8 = local_1440 + (local_11e4 + 6) * *(int *)(local_105c + 0xcc) * 4 + 0x18 +
                  local_11c4 * 0x30;
    uStack_14ec = 0x6c2d94;
    FUN_006e6bd0();
  }
  pcStack_14e0 = (char *)local_11e8;
  uStack_14e4 = 0x6c2dab;
  FUN_005856e0();
  pcStack_14e0 = (char *)0x0;
  uStack_14e4 = *(undefined4 *)(local_105c + 0xc0);
  iStack_14e8 = 0x6c2dcd;
  (**(code **)(**(int **)(local_105c + 0xc0) + 0x50))();
  puVar6 = (undefined4 *)(local_105c + 0xc0);
  puVar7 = param_1;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  return param_1;
}


/* ==== 006c2e70  d3d9_create_texture_006c2e70  size=11945 ==== */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * d3d9_create_texture_006c2e70(undefined4 *param_1)

{
  char cVar1;
  LPCSTR pCVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  bool bVar8;
  undefined4 uStack_1378;
  int iStack_1374;
  undefined4 uStack_1370;
  char *pcStack_136c;
  undefined4 uStack_1368;
  undefined4 uStack_1364;
  undefined1 *puStack_1360;
  int iStack_135c;
  int iStack_1358;
  LPVOID pvStack_1354;
  LPVOID pvStack_1350;
  tagRECT *ptVar9;
  UINT UVar10;
  undefined1 local_1330 [40];
  undefined4 local_1308;
  HGDIOBJ local_1304;
  LONG local_1300;
  undefined4 local_12fc;
  undefined4 local_12f8;
  undefined1 *local_12f4;
  LONG local_12f0;
  int local_12ec;
  int local_12e8;
  int local_12e4;
  undefined1 local_12e0 [4];
  int local_12dc;
  int local_12d8;
  undefined4 *local_12d4;
  BOOL local_12d0;
  HBITMAP local_12cc;
  int local_12c8;
  int local_12c4;
  int local_12c0;
  int local_12bc;
  int local_12b8;
  int local_12b4;
  int local_12b0;
  int local_12ac;
  int local_12a8;
  int local_12a4;
  int local_12a0;
  int local_129c;
  int local_1298;
  int local_1294;
  int local_1290;
  int local_128c;
  int local_1288;
  int local_1284;
  int local_1280;
  int local_127c;
  int local_1278;
  int local_1274;
  int local_1270;
  int local_126c;
  int local_1268;
  int local_1264;
  int local_1260;
  int local_125c;
  int local_1258;
  int local_1254;
  int local_1250;
  int local_124c;
  int local_1248;
  int local_1244;
  int local_1240;
  int local_123c;
  int local_1238;
  int local_1234;
  int local_1230;
  int local_122c;
  int local_1228;
  int local_1224;
  int local_1220;
  int local_121c;
  int local_1218;
  int local_1214;
  int local_1210;
  int local_120c;
  int local_1208;
  int local_1204;
  int local_1200;
  int local_11fc;
  int local_11f8;
  int local_11f4;
  int local_11f0;
  int local_11ec;
  int local_11e8;
  int local_11e4;
  int local_11e0;
  int local_11dc;
  uint local_11d8;
  int local_11d4;
  int local_11d0;
  int local_11cc;
  int local_11c8;
  int local_11c4;
  int local_11c0;
  int local_11bc;
  int local_11b8;
  undefined4 local_11b4;
  undefined4 local_11b0;
  int local_11ac;
  int local_11a8;
  int local_11a4;
  char *local_11a0;
  int local_119c;
  char *local_1198;
  int local_1194;
  char *local_1190;
  undefined *local_118c;
  undefined *local_1188;
  undefined *local_1184;
  uint local_1180;
  int local_117c;
  HBITMAP local_1178;
  undefined *local_1174;
  int local_1170;
  int local_116c;
  HBITMAP local_1168;
  byte *local_1164;
  byte *local_1160;
  COLORREF local_115c;
  uint local_1158;
  undefined4 local_1154;
  uint local_1150;
  char *local_114c;
  char *local_1148;
  char *local_1144;
  char *local_1140;
  char *local_113c;
  char *local_1138;
  char *local_1134;
  char *local_1130;
  char *local_112c;
  char *local_1128;
  char *local_1124;
  char *local_1120;
  char *local_111c;
  char *local_1118;
  char *local_1114;
  char *local_1110;
  char *local_110c;
  char *local_1108;
  char *local_1104;
  char *local_1100;
  char *local_10fc;
  char *local_10f8;
  char *local_10f4;
  char *local_10f0;
  char *local_10ec;
  char *local_10e8;
  char *local_10e4;
  char *local_10e0;
  char *local_10dc;
  char *local_10d8;
  char *local_10d4;
  char *local_10d0;
  char *local_10cc;
  char *local_10c8;
  char *local_10c4;
  char *local_10c0;
  char *local_10bc;
  char *local_10b8;
  char *local_10b4;
  char *local_10b0;
  uint local_10ac;
  char local_10a8;
  char local_10a7;
  char local_10a6;
  char local_10a5;
  uint local_10a4;
  char local_109e;
  char local_109d;
  char local_109c;
  char local_109b;
  char local_109a;
  char local_1099;
  char local_1098;
  char local_1097;
  char local_1096;
  char local_1095;
  char local_1094;
  char local_1093;
  char local_1092;
  char local_1091;
  char local_1090;
  char local_108f;
  char local_108e;
  char local_108d;
  char local_108c;
  char local_108b;
  char local_108a;
  char local_1089;
  char local_1088;
  char local_1087;
  char local_1086;
  char local_1085;
  char local_1084;
  char local_1083;
  char local_1082;
  char local_1081;
  char local_1080;
  byte local_107f;
  byte local_107e;
  char local_107d;
  char local_107c;
  char local_107b;
  char local_107a;
  char local_1079;
  undefined4 local_1078;
  uint local_1074;
  int local_1070;
  COLORREF local_106c;
  void *local_1068;
  int local_1064;
  LPVOID local_1060;
  uint local_105c;
  int local_1058;
  int local_1054;
  int local_1050;
  int local_104c;
  tagRECT local_1048;
  function<void___cdecl(void)> local_1038 [24];
  function<void___cdecl(void)> local_1020 [24];
  undefined4 local_1008;
  uint local_1004;
  undefined1 local_1000;
  uint local_8;
  
  local_8 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  local_1064 = 0xcc;
  local_1170 = 0x1e0;
  local_117c = 0;
  local_1050 = game_loop_helper_cc840();
  local_1078 = 0xff000000;
  local_1070 = 0;
  local_12f8 = 0xff00f0;
  local_1308 = 0xffb100;
  local_12fc = 0xff00f0;
  local_106c = 0xffffff;
  local_1048.left = 6;
  local_1048.top = 6;
  local_1048.right = local_1064 + -6;
  local_1048.bottom = local_1170;
  SelectObject(*(HDC *)(DAT_007ca1a4 + 0x1c),*(HGDIOBJ *)(DAT_007ca1a4 + 0x20));
  local_1168 = CreateCompatibleBitmap(*(HDC *)(DAT_007ca1a4 + 0x18),local_1064,local_1170);
  local_1178 = CreateCompatibleBitmap(*(HDC *)(DAT_007ca1a4 + 0x18),1,1);
  local_10a4 = local_1064 * local_1170 * 4;
  local_1068 = (void *)FUN_006f191d();
  for (local_1158 = 0; local_1158 < local_10a4 >> 2; local_1158 = local_1158 + 1) {
    *(int *)((int)local_1068 + local_1158 * 4) = local_1070;
  }
  local_1300 = SetBitmapBits(local_1168,local_10a4,local_1068);
  local_1304 = SelectObject(*(HDC *)(DAT_007ca1a4 + 0x1c),local_1168);
  SetBkMode(*(HDC *)(DAT_007ca1a4 + 0x1c),1);
  local_115c = 0xffb100;
  SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xffb100);
  local_1054 = FUN_005dee80();
  local_104c = 0;
  local_1144 = (char *)(local_1058 + 0x58);
  local_1238 = local_1058 + 0x59;
  do {
    local_108e = *local_1144;
    local_1144 = local_1144 + 1;
  } while (local_108e != '\0');
  local_12e4 = (int)local_1144 - local_1238;
  if (local_12e4 == 0) {
    local_10b0 = (char *)npk_get_relative_res_path();
    local_1198 = local_10b0 + 1;
    do {
      local_10a7 = *local_10b0;
      local_10b0 = local_10b0 + 1;
    } while (local_10a7 != '\0');
    iVar5 = (int)local_10b0 - (int)local_1198;
    ptVar9 = &local_1048;
    UVar10 = 0x810;
    local_119c = iVar5;
    pCVar2 = (LPCSTR)npk_get_relative_res_path();
    pvStack_1350 = (LPVOID)0x6c3278;
    local_104c = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),pCVar2,iVar5,ptVar9,UVar10);
  }
  else {
    local_1148 = (char *)(local_1058 + 0x58);
    local_12e8 = local_1058 + 0x59;
    do {
      local_10a5 = *local_1148;
      local_1148 = local_1148 + 1;
    } while (local_10a5 != '\0');
    local_12ec = (int)local_1148 - local_12e8;
    pvStack_1350 = (LPVOID)0x6c3169;
    local_104c = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)(local_1058 + 0x58),local_12ec,
                           &local_1048,0x810);
    local_114c = (char *)npk_get_relative_res_path();
    local_1190 = local_114c + 1;
    do {
      local_10a6 = *local_114c;
      local_114c = local_114c + 1;
    } while (local_10a6 != '\0');
    iVar5 = (int)local_114c - (int)local_1190;
    ptVar9 = &local_1048;
    UVar10 = 0x812;
    local_1194 = iVar5;
    pCVar2 = (LPCSTR)npk_get_relative_res_path();
    pvStack_1350 = (LPVOID)0x6c31ee;
    local_104c = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),pCVar2,iVar5,ptVar9,UVar10);
  }
  local_1048.top = local_1048.top + 1 + local_104c;
  SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),local_115c);
  local_10b4 = (char *)npk_get_relative_res_path();
  local_11a0 = local_10b4 + 1;
  do {
    local_10a8 = *local_10b4;
    local_10b4 = local_10b4 + 1;
  } while (local_10a8 != '\0');
  iVar5 = (int)local_10b4 - (int)local_11a0;
  ptVar9 = &local_1048;
  UVar10 = 0x810;
  local_11a4 = iVar5;
  pCVar2 = (LPCSTR)npk_get_relative_res_path();
  pvStack_1350 = (LPVOID)0x6c332f;
  local_104c = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),pCVar2,iVar5,ptVar9,UVar10);
  local_117c = local_1048.top + 1 + local_104c;
  local_1048.top = local_117c;
  if (*(int *)(local_1050 + 0xbc) != 0) {
    local_1048.top = local_117c + 0xd;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xffffff);
    FUN_00414e80();
    local_10b8 = (char *)&local_1008;
    local_11a8 = (int)&local_1008 + 1;
    do {
      local_1079 = *local_10b8;
      local_10b8 = local_10b8 + 1;
    } while (local_1079 != '\0');
    local_11ac = (int)local_10b8 - local_11a8;
    pvStack_1350 = (LPVOID)0x6c3436;
    local_104c = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_11ac,&local_1048,
                           0x10);
  }
  if (*(int *)(local_1050 + 0x14c) != 0) {
    local_1048.top = local_1048.top + 1 + local_104c;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xffffff);
    if (*(int *)(local_1058 + 0x2c) == 0) {
      local_11b4 = FUN_004c7c70();
      npk_get_relative_res_path();
      FUN_00414e80();
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1020);
    }
    else {
      local_11b0 = FUN_004c7c70();
      npk_get_relative_res_path();
      FUN_00414e80();
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1038);
    }
    local_10bc = (char *)&local_1008;
    local_11b8 = (int)&local_1008 + 1;
    do {
      local_107a = *local_10bc;
      local_10bc = local_10bc + 1;
    } while (local_107a != '\0');
    local_11bc = (int)local_10bc - local_11b8;
    pvStack_1350 = (LPVOID)0x6c359b;
    local_104c = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_11bc,&local_1048,
                           0x12);
  }
  local_1048.top = local_1048.top + 1 + local_104c;
  SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),local_106c);
  FUN_00414e80();
  local_10c0 = (char *)&local_1008;
  local_11c0 = (int)&local_1008 + 1;
  do {
    local_107b = *local_10c0;
    local_10c0 = local_10c0 + 1;
  } while (local_107b != '\0');
  local_11c4 = (int)local_10c0 - local_11c0;
  pvStack_1350 = (LPVOID)0x6c365d;
  local_104c = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_11c4,&local_1048,
                         0x10);
  local_1048.top = local_1048.top + 1 + local_104c;
  SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),local_106c);
  game_loop_helper_e9240();
  FUN_00427540();
  __alldiv();
  FUN_00414e80();
  local_10c4 = (char *)&local_1008;
  local_11c8 = (int)&local_1008 + 1;
  do {
    local_107c = *local_10c4;
    local_10c4 = local_10c4 + 1;
  } while (local_107c != '\0');
  local_11cc = (int)local_10c4 - local_11c8;
  pvStack_1350 = (LPVOID)0x6c3752;
  local_104c = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_11cc,&local_1048,
                         0x10);
  local_1048.top = local_1048.top + 1 + local_104c;
  SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),local_106c);
  FUN_00414e80();
  local_10c8 = (char *)&local_1008;
  local_11d0 = (int)&local_1008 + 1;
  do {
    local_107d = *local_10c8;
    local_10c8 = local_10c8 + 1;
  } while (local_107d != '\0');
  local_11d4 = (int)local_10c8 - local_11d0;
  pvStack_1350 = (LPVOID)0x6c3814;
  local_104c = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_11d4,&local_1048,
                         0x10);
  cVar1 = FUN_00427c60();
  if ((cVar1 == '\0') || (*(int *)(local_1058 + 0x40) != 0)) {
    cVar1 = FUN_00427c60();
    if ((cVar1 == '\0') || (*(int *)(local_1058 + 0x40) != 1)) {
      cVar1 = FUN_00427c60();
      if (cVar1 == '\0') {
        cVar1 = FUN_00427c60();
        if (cVar1 == '\0') {
          cVar1 = FUN_00427c60();
          if (cVar1 != '\0') {
            local_1008 = local_1008 & 0xffffff00;
          }
        }
        else {
          local_1008 = 0xa8b7dece;
          local_1004 = 0xfdb3bec9;
          local_1000 = 0;
        }
      }
      else {
        local_1008 = 0xa8b7dece;
        local_1004 = 0xd7d2bbbd;
        local_1000 = 0;
      }
    }
    else {
      local_1008 = 0xa8b7dece;
      local_1004 = 0xd7d2bbbd;
      local_1000 = 0;
    }
  }
  else {
    local_1008 = 0xb0d7e2b7;
    local_1004 = local_1004 & 0xffffff00;
  }
  local_1164 = &DAT_00740837;
  local_1160 = (byte *)&local_1008;
  do {
    local_107e = *local_1160;
    bVar8 = local_107e < *local_1164;
    if (local_107e != *local_1164) {
LAB_006c39e3:
      local_1180 = -(uint)bVar8 | 1;
      goto LAB_006c39ee;
    }
    if (local_107e == 0) break;
    local_107f = local_1160[1];
    bVar8 = local_107f < local_1164[1];
    if (local_107f != local_1164[1]) goto LAB_006c39e3;
    local_1160 = local_1160 + 2;
    local_1164 = local_1164 + 2;
  } while (local_107f != 0);
  local_1180 = 0;
LAB_006c39ee:
  local_11d8 = local_1180;
  if (local_1180 != 0) {
    local_10cc = (char *)&local_1008;
    local_11dc = (int)&local_1008 + 1;
    do {
      local_1080 = *local_10cc;
      local_10cc = local_10cc + 1;
    } while (local_1080 != '\0');
    local_11e0 = (int)local_10cc - local_11dc;
    pvStack_1350 = (LPVOID)0x6c3a75;
    local_104c = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_11e0,&local_1048,
                           0x12);
  }
  if ((*(int *)(local_1050 + 0x150) < 1) &&
     (local_1048.top = local_1048.top + 1 + local_104c, 1 < *(int *)(local_1050 + 0xcc))) {
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),local_106c);
    FUN_00414e80();
    local_10d0 = (char *)&local_1008;
    local_11e4 = (int)&local_1008 + 1;
    do {
      local_1081 = *local_10d0;
      local_10d0 = local_10d0 + 1;
    } while (local_1081 != '\0');
    local_11e8 = (int)local_10d0 - local_11e4;
    pvStack_1350 = (LPVOID)0x6c3b62;
    local_104c = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_11e8,&local_1048,
                           0x10);
  }
  local_1048.top = local_1048.top + 1 + local_104c;
  iVar5 = FUN_004274f0();
  if (iVar5 != 0) {
    local_1048.top = local_1048.top + 1 + local_104c;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
    cVar1 = FUN_00427c60();
    if (cVar1 == '\0') {
      local_1184 = &DAT_00778958;
    }
    else {
      local_1184 = &DAT_007789a4;
    }
    FUN_004274d0();
    npk_get_relative_res_path();
    FUN_00414e80();
    local_10d4 = (char *)&local_1008;
    local_11ec = (int)&local_1008 + 1;
    do {
      local_1082 = *local_10d4;
      local_10d4 = local_10d4 + 1;
    } while (local_1082 != '\0');
    local_11f0 = (int)local_10d4 - local_11ec;
    pvStack_1350 = (LPVOID)0x6c3c97;
    local_104c = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_11f0,&local_1048,
                           0x10);
    local_1048.top = local_1048.top + 1 + local_104c;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),local_106c);
    if (*(int *)(local_1054 + 0x34) != 0) {
      FUN_00414e80();
      local_10d8 = (char *)&local_1008;
      local_11f4 = (int)&local_1008 + 1;
      do {
        local_1083 = *local_10d8;
        local_10d8 = local_10d8 + 1;
      } while (local_1083 != '\0');
      local_11f8 = (int)local_10d8 - local_11f4;
      pvStack_1350 = (LPVOID)0x6c3d6a;
      local_104c = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_11f8,
                             &local_1048,0x10);
    }
    FUN_00414e80();
    local_10dc = (char *)&local_1008;
    local_11fc = (int)&local_1008 + 1;
    do {
      local_1084 = *local_10dc;
      local_10dc = local_10dc + 1;
    } while (local_1084 != '\0');
    local_1200 = (int)local_10dc - local_11fc;
    pvStack_1350 = (LPVOID)0x6c3e08;
    local_104c = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1200,&local_1048,
                           0x12);
    iVar5 = FUN_00401a90();
    if (((iVar5 != 0) && (piVar3 = (int *)game_get_flag_object_01a70(), *piVar3 != 1000)) &&
       (piVar3 = (int *)game_get_flag_object_01a70(), *piVar3 != 0)) {
      local_1048.top = local_1048.top + 1 + local_104c;
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),local_106c);
      game_get_flag_object_01a70();
      FUN_00414e80();
      local_10e0 = (char *)&local_1008;
      local_1204 = (int)&local_1008 + 1;
      do {
        local_1085 = *local_10e0;
        local_10e0 = local_10e0 + 1;
      } while (local_1085 != '\0');
      local_1208 = (int)local_10e0 - local_1204;
      pvStack_1350 = (LPVOID)0x6c3f1f;
      local_104c = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1208,
                             &local_1048,0x10);
    }
    local_1048.top = local_1048.top + 1 + local_104c;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
    FUN_004274d0();
    npk_get_relative_res_path();
    FUN_00414e80();
    local_10e4 = (char *)&local_1008;
    local_120c = (int)&local_1008 + 1;
    do {
      local_1086 = *local_10e4;
      local_10e4 = local_10e4 + 1;
    } while (local_1086 != '\0');
    local_1210 = (int)local_10e4 - local_120c;
    pvStack_1350 = (LPVOID)0x6c3fed;
    local_104c = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1210,&local_1048,
                           0x10);
  }
  uVar4 = FUN_004274f0();
  if (2 < uVar4) {
    local_1048.top = local_1048.top + 0xe + local_104c;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
    cVar1 = FUN_00427c60();
    if (cVar1 == '\0') {
      local_1188 = &DAT_007789ac;
    }
    else {
      local_1188 = &DAT_007789f8;
    }
    FUN_004274d0();
    npk_get_relative_res_path();
    FUN_00414e80();
    local_10e8 = (char *)&local_1008;
    local_1214 = (int)&local_1008 + 1;
    do {
      local_1087 = *local_10e8;
      local_10e8 = local_10e8 + 1;
    } while (local_1087 != '\0');
    local_1218 = (int)local_10e8 - local_1214;
    pvStack_1350 = (LPVOID)0x6c411c;
    local_104c = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1218,&local_1048,
                           0x10);
    local_1048.top = local_1048.top + 1 + local_104c;
    if (*(int *)(local_1058 + 0x34) < *(int *)(local_1054 + 0x30)) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xff0000);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xffffff);
    }
    FUN_00414e80();
    local_10ec = (char *)&local_1008;
    local_121c = (int)&local_1008 + 1;
    do {
      local_1088 = *local_10ec;
      local_10ec = local_10ec + 1;
    } while (local_1088 != '\0');
    local_1220 = (int)local_10ec - local_121c;
    pvStack_1350 = (LPVOID)0x6c4209;
    local_104c = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1220,&local_1048,
                           0x10);
    local_1048.top = local_1048.top + 1 + local_104c;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),local_106c);
    if (*(int *)(local_1054 + 0x38) != 0) {
      FUN_00414e80();
      local_10f0 = (char *)&local_1008;
      local_1224 = (int)&local_1008 + 1;
      do {
        local_1089 = *local_10f0;
        local_10f0 = local_10f0 + 1;
      } while (local_1089 != '\0');
      local_1228 = (int)local_10f0 - local_1224;
      pvStack_1350 = (LPVOID)0x6c42dc;
      local_104c = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1228,
                             &local_1048,0x10);
    }
    FUN_00414e80();
    local_10f4 = (char *)&local_1008;
    local_122c = (int)&local_1008 + 1;
    do {
      local_108a = *local_10f4;
      local_10f4 = local_10f4 + 1;
    } while (local_108a != '\0');
    local_1230 = (int)local_10f4 - local_122c;
    pvStack_1350 = (LPVOID)0x6c437a;
    local_104c = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1230,&local_1048,
                           0x12);
    uVar4 = FUN_00401a90();
    if (((2 < uVar4) && (piVar3 = (int *)game_get_flag_object_01a70(), *piVar3 != 1000)) &&
       (piVar3 = (int *)game_get_flag_object_01a70(), *piVar3 != 0)) {
      local_1048.top = local_1048.top + 1 + local_104c;
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),local_106c);
      game_get_flag_object_01a70();
      FUN_00414e80();
      local_10f8 = (char *)&local_1008;
      local_1234 = (int)&local_1008 + 1;
      do {
        local_108b = *local_10f8;
        local_10f8 = local_10f8 + 1;
      } while (local_108b != '\0');
      local_12a0 = (int)local_10f8 - local_1234;
      pvStack_1350 = (LPVOID)0x6c4492;
      local_104c = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_12a0,
                             &local_1048,0x10);
    }
    local_1048.top = local_1048.top + 1 + local_104c;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
    FUN_004274d0();
    npk_get_relative_res_path();
    FUN_00414e80();
    local_10fc = (char *)&local_1008;
    local_123c = (int)&local_1008 + 1;
    do {
      local_108c = *local_10fc;
      local_10fc = local_10fc + 1;
    } while (local_108c != '\0');
    local_1240 = (int)local_10fc - local_123c;
    pvStack_1350 = (LPVOID)0x6c4560;
    local_104c = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1240,&local_1048,
                           0x10);
  }
  if (*(int *)(local_1050 + 0x1b8) != 0) {
    local_1048.top = local_1048.top + local_104c + 0xe;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),local_106c);
    FUN_00414e80();
    local_1100 = (char *)&local_1008;
    local_1244 = (int)&local_1008 + 1;
    do {
      local_108d = *local_1100;
      local_1100 = local_1100 + 1;
    } while (local_108d != '\0');
    local_1248 = (int)local_1100 - local_1244;
    pvStack_1350 = (LPVOID)0x6c4647;
    local_104c = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1248,&local_1048,
                           0x10);
  }
  if (*(int *)(local_1050 + 0x1c0) != 0) {
    local_1048.top = local_1048.top + local_104c + 0xe;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),local_106c);
    FUN_00414e80();
    local_1104 = (char *)&local_1008;
    local_124c = (int)&local_1008 + 1;
    do {
      local_109e = *local_1104;
      local_1104 = local_1104 + 1;
    } while (local_109e != '\0');
    local_1250 = (int)local_1104 - local_124c;
    pvStack_1350 = (LPVOID)0x6c472e;
    local_104c = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1250,&local_1048,
                           0x10);
  }
  if (*(int *)(local_1050 + 0x1a8) != 0) {
    local_1048.top = local_1048.top + local_104c + 0xe;
    if (*(int *)(local_1050 + 0x1a8) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    if (*(int *)(local_1050 + 0x1a8) < 1) {
      local_118c = &DAT_00778a10;
    }
    else {
      local_118c = &DAT_00778a0c;
    }
    FUN_00414e80();
    local_1108 = (char *)&local_1008;
    local_1254 = (int)&local_1008 + 1;
    do {
      local_108f = *local_1108;
      local_1108 = local_1108 + 1;
    } while (local_108f != '\0');
    local_1258 = (int)local_1108 - local_1254;
    pvStack_1350 = (LPVOID)0x6c4868;
    local_104c = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1258,&local_1048,
                           0x10);
  }
  if (*(int *)(local_1050 + 0x1ac) != 0) {
    local_1048.top = local_1048.top + local_104c + 0xe;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    if (*(int *)(local_1050 + 0x1ac) < 1) {
      local_1174 = &DAT_00778a8c;
    }
    else {
      local_1174 = &DAT_00778a88;
    }
    FUN_00414e80();
    local_113c = (char *)&local_1008;
    local_125c = (int)&local_1008 + 1;
    do {
      local_1090 = *local_113c;
      local_113c = local_113c + 1;
    } while (local_1090 != '\0');
    local_1260 = (int)local_113c - local_125c;
    pvStack_1350 = (LPVOID)0x6c497a;
    local_104c = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1260,&local_1048,
                           0x10);
  }
  if ((*(int *)(local_1050 + 0x178) != 0) || (*(int *)(local_1050 + 0x17c) != 0)) {
    local_1048.top = local_1048.top + 0xd;
  }
  if (*(int *)(local_1050 + 0x178) != 0) {
    local_1048.top = local_1048.top + 1 + local_104c;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    FUN_00414e80();
    local_110c = (char *)&local_1008;
    local_1264 = (int)&local_1008 + 1;
    do {
      local_1091 = *local_110c;
      local_110c = local_110c + 1;
    } while (local_1091 != '\0');
    local_1268 = (int)local_110c - local_1264;
    pvStack_1350 = (LPVOID)0x6c4a7d;
    local_104c = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1268,&local_1048,
                           0x10);
  }
  if (*(int *)(local_1050 + 0x17c) != 0) {
    local_1048.top = local_1048.top + 1 + local_104c;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    FUN_00414e80();
    local_1110 = (char *)&local_1008;
    local_126c = (int)&local_1008 + 1;
    do {
      local_1092 = *local_1110;
      local_1110 = local_1110 + 1;
    } while (local_1092 != '\0');
    local_1270 = (int)local_1110 - local_126c;
    pvStack_1350 = (LPVOID)0x6c4b53;
    local_104c = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1270,&local_1048,
                           0x10);
  }
  if (((((((*(int *)(local_1050 + 0x254) != 0) || (*(int *)(local_1050 + 0x1d8) != 0)) ||
         (*(int *)(local_1050 + 0x1e0) != 0)) ||
        ((*(int *)(local_1050 + 0x1dc) != 0 || (*(int *)(local_1050 + 0x208) != 0)))) ||
       ((*(int *)(local_1050 + 0x250) != 0 ||
        ((*(int *)(local_1050 + 0x1f0) != 0 || (*(int *)(local_1050 + 500) != 0)))))) ||
      (*(int *)(local_1050 + 0x1ec) != 0)) || (*(int *)(local_1050 + 0x1e4) != 0)) {
    local_1048.top = local_1048.top + 1 + local_104c;
  }
  if (*(int *)(local_1050 + 0x254) != 0) {
    local_1048.top = local_1048.top + 1 + local_104c;
    if (*(int *)(local_1050 + 0x254) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    FUN_00414e80();
    local_1114 = (char *)&local_1008;
    local_1274 = (int)&local_1008 + 1;
    do {
      local_1093 = *local_1114;
      local_1114 = local_1114 + 1;
    } while (local_1093 != '\0');
    local_1278 = (int)local_1114 - local_1274;
    pvStack_1350 = (LPVOID)0x6c4d00;
    local_104c = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1278,&local_1048,
                           0x10);
  }
  if (*(int *)(local_1050 + 0x1d8) != 0) {
    local_1048.top = local_1048.top + 1 + local_104c;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    FUN_00414e80();
    local_1118 = (char *)&local_1008;
    local_127c = (int)&local_1008 + 1;
    do {
      local_1094 = *local_1118;
      local_1118 = local_1118 + 1;
    } while (local_1094 != '\0');
    local_1280 = (int)local_1118 - local_127c;
    pvStack_1350 = (LPVOID)0x6c4dea;
    local_104c = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1280,&local_1048,
                           0x10);
  }
  if (*(int *)(local_1050 + 0x1e0) != 0) {
    local_1048.top = local_1048.top + 1 + local_104c;
    if (*(int *)(local_1050 + 0x1e0) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    FUN_00414e80();
    local_111c = (char *)&local_1008;
    local_1284 = (int)&local_1008 + 1;
    do {
      local_1095 = *local_111c;
      local_111c = local_111c + 1;
    } while (local_1095 != '\0');
    local_1288 = (int)local_111c - local_1284;
    pvStack_1350 = (LPVOID)0x6c4efc;
    local_104c = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1288,&local_1048,
                           0x10);
  }
  if (*(int *)(local_1050 + 0x1dc) != 0) {
    local_1048.top = local_1048.top + 1 + local_104c;
    if (*(int *)(local_1050 + 0x1dc) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    FUN_00414e80();
    local_1120 = (char *)&local_1008;
    local_128c = (int)&local_1008 + 1;
    do {
      local_1096 = *local_1120;
      local_1120 = local_1120 + 1;
    } while (local_1096 != '\0');
    local_1290 = (int)local_1120 - local_128c;
    pvStack_1350 = (LPVOID)0x6c500e;
    local_104c = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1290,&local_1048,
                           0x10);
  }
  if (*(int *)(local_1050 + 0x208) != 0) {
    local_1048.top = local_1048.top + 1 + local_104c;
    if (*(int *)(local_1050 + 0x208) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    FUN_00414e80();
    local_1124 = (char *)&local_1008;
    local_1294 = (int)&local_1008 + 1;
    do {
      local_1097 = *local_1124;
      local_1124 = local_1124 + 1;
    } while (local_1097 != '\0');
    local_1298 = (int)local_1124 - local_1294;
    pvStack_1350 = (LPVOID)0x6c510c;
    local_104c = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1298,&local_1048,
                           0x10);
  }
  if (*(int *)(local_1050 + 0x250) != 0) {
    local_1048.top = local_1048.top + 1 + local_104c;
    if (*(int *)(local_1050 + 0x250) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    FUN_00414e80();
    local_1128 = (char *)&local_1008;
    local_129c = (int)&local_1008 + 1;
    do {
      local_1098 = *local_1128;
      local_1128 = local_1128 + 1;
    } while (local_1098 != '\0');
    local_12d8 = (int)local_1128 - local_129c;
    pvStack_1350 = (LPVOID)0x6c5220;
    local_104c = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_12d8,&local_1048,
                           0x10);
  }
  if (*(int *)(local_1050 + 0x1f0) != 0) {
    local_1048.top = local_1048.top + 1 + local_104c;
    if (*(int *)(local_1050 + 0x1f0) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    FUN_00414e80();
    local_112c = (char *)&local_1008;
    local_12a4 = (int)&local_1008 + 1;
    do {
      local_1099 = *local_112c;
      local_112c = local_112c + 1;
    } while (local_1099 != '\0');
    local_12a8 = (int)local_112c - local_12a4;
    pvStack_1350 = (LPVOID)0x6c531f;
    local_104c = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_12a8,&local_1048,
                           0x10);
  }
  if (*(int *)(local_1050 + 500) != 0) {
    local_1048.top = local_1048.top + 1 + local_104c;
    if (*(int *)(local_1050 + 500) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    FUN_00414e80();
    local_1130 = (char *)&local_1008;
    local_12ac = (int)&local_1008 + 1;
    do {
      local_109a = *local_1130;
      local_1130 = local_1130 + 1;
    } while (local_109a != '\0');
    local_12b0 = (int)local_1130 - local_12ac;
    pvStack_1350 = (LPVOID)0x6c541c;
    local_104c = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_12b0,&local_1048,
                           0x10);
  }
  if (*(int *)(local_1050 + 0x1ec) != 0) {
    local_1048.top = local_1048.top + 1 + local_104c;
    if (*(int *)(local_1050 + 0x1ec) < 0) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    FUN_00414e80();
    local_1134 = (char *)&local_1008;
    local_12b4 = (int)&local_1008 + 1;
    do {
      local_109b = *local_1134;
      local_1134 = local_1134 + 1;
    } while (local_109b != '\0');
    local_12b8 = (int)local_1134 - local_12b4;
    pvStack_1350 = (LPVOID)0x6c551c;
    local_104c = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_12b8,&local_1048,
                           0x10);
  }
  if (*(int *)(local_1050 + 0x1e4) != 0) {
    local_1048.top = local_1048.top + 1 + local_104c;
    if (*(int *)(local_1050 + 0x1e4) < 1) {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xaf8fac);
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    }
    FUN_00414e80();
    local_1138 = (char *)&local_1008;
    local_12bc = (int)&local_1008 + 1;
    do {
      local_109c = *local_1138;
      local_1138 = local_1138 + 1;
    } while (local_109c != '\0');
    local_12c0 = (int)local_1138 - local_12bc;
    pvStack_1350 = (LPVOID)0x6c5630;
    local_104c = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_12c0,&local_1048,
                           0x10);
  }
  cVar1 = FUN_00427e30();
  if (cVar1 != '\0') {
    local_1048.top = local_1048.top + 0xe + local_104c;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    npk_get_relative_res_path();
    FUN_00414e80();
    local_1140 = (char *)&local_1008;
    local_12c4 = (int)&local_1008 + 1;
    do {
      local_109d = *local_1140;
      local_1140 = local_1140 + 1;
    } while (local_109d != '\0');
    local_12c8 = (int)local_1140 - local_12c4;
    pvStack_1350 = (LPVOID)0x6c5721;
    local_104c = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_12c8,&local_1048,
                           0x10);
  }
  local_1048.top = local_1048.top + local_104c + 7;
  local_12cc = SelectObject(*(HDC *)(DAT_007ca1a4 + 0x1c),local_1178);
  local_12f0 = GetBitmapBits(local_12cc,local_10a4,local_1068);
  for (local_1074 = 0; local_1074 < local_10a4 >> 2; local_1074 = local_1074 + 1) {
    if (*(int *)((int)local_1068 + local_1074 * 4) != 0) {
      *(uint *)((int)local_1068 + local_1074 * 4) =
           (*(uint *)((int)local_1068 + local_1074 * 4) & 0xff0000) >> 0x10 |
           (*(uint *)((int)local_1068 + local_1074 * 4) & 0xff) << 0x10 |
           *(uint *)((int)local_1068 + local_1074 * 4) & 0xff00ff00;
    }
  }
  for (local_105c = 0; local_105c < local_10a4 >> 2; local_105c = local_105c + 1) {
    local_1060 = local_1068;
    if ((*(uint *)((int)local_1068 + local_105c * 4) & 0xffffff) != 0) {
      if (*(int *)((int)local_1068 + (local_105c - local_1064) * 4 + -4) == local_1070) {
        *(undefined4 *)((int)local_1068 + (local_105c - local_1064) * 4 + -4) = local_1078;
      }
      if (*(int *)((int)local_1068 + (local_105c - local_1064) * 4 + 4) == local_1070) {
        *(undefined4 *)((int)local_1068 + (local_105c - local_1064) * 4 + 4) = local_1078;
      }
      if (*(int *)((int)local_1068 + (local_105c - local_1064) * 4) == local_1070) {
        *(undefined4 *)((int)local_1068 + (local_105c - local_1064) * 4) = local_1078;
      }
      if (*(int *)((int)local_1068 + local_105c * 4 + -4) == local_1070) {
        *(undefined4 *)((int)local_1068 + local_105c * 4 + -4) = local_1078;
      }
      if (*(int *)((int)local_1068 + local_105c * 4 + 4) == local_1070) {
        *(undefined4 *)((int)local_1068 + local_105c * 4 + 4) = local_1078;
      }
      if (*(int *)((int)local_1068 + (local_105c + local_1064) * 4 + -4) == local_1070) {
        *(undefined4 *)((int)local_1068 + (local_105c + local_1064) * 4 + -4) = local_1078;
      }
      if (*(int *)((int)local_1068 + (local_105c + local_1064) * 4) == local_1070) {
        *(undefined4 *)((int)local_1068 + (local_105c + local_1064) * 4) = local_1078;
      }
      if (*(int *)((int)local_1068 + (local_105c + local_1064) * 4 + 4) == local_1070) {
        *(undefined4 *)((int)local_1068 + (local_105c + local_1064) * 4 + 4) = local_1078;
      }
    }
  }
  for (local_10ac = 0; local_10ac < local_10a4 >> 2; local_10ac = local_10ac + 1) {
    if (*(int *)((int)local_1068 + local_10ac * 4) != 0) {
      *(uint *)((int)local_1068 + local_10ac * 4) =
           *(uint *)((int)local_1068 + local_10ac * 4) | 0xff000000;
    }
  }
  local_12d0 = DeleteObject(local_1168);
  local_12d0 = DeleteObject(local_1178);
  pvStack_1350 = (LPVOID)local_1048.top;
  pvStack_1354 = (LPVOID)local_1064;
  iStack_1358 = *(undefined4 *)(DAT_007ca1a4 + 4);
  iStack_135c = 0x6c5af0;
  local_1154 = D3DXCreateTexture();
  pvStack_1350 = (LPVOID)0x6c5b23;
  local_1154 = (**(code **)(**(int **)(local_1058 + 0xe8) + 0x4c))();
  pvStack_1350 = (LPVOID)(local_1064 * local_1048.top * 4);
  pvStack_1354 = local_1068;
  iStack_1358 = local_12dc;
  iStack_135c = 0x6c5b4d;
  FUN_006e6bd0();
  pvStack_1350 = local_1068;
  pvStack_1354 = (LPVOID)0x6c5b5c;
  FUN_006f1902();
  pvStack_1350 = (LPVOID)0x0;
  pvStack_1354 = *(LPVOID *)(local_1058 + 0xe8);
  iStack_1358 = 0x6c5b81;
  local_1154 = (**(code **)(**(int **)(local_1058 + 0xe8) + 0x50))();
  iStack_1358 = 3;
  iStack_135c = local_1048.top / 0xd;
  puStack_1360 = (undefined1 *)0x10;
  local_12f4 = (undefined1 *)&uStack_1378;
  FUN_004054a0("ceshiceshi");
  local_12d4 = (undefined4 *)d3d9_create_texture_004b7f20(local_1330);
  puVar6 = local_12d4;
  puVar7 = (undefined4 *)(local_1058 + 0xc0);
  for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  iStack_1358 = 0;
  iStack_135c = 0;
  puStack_1360 = local_12e0;
  uStack_1364 = 0;
  uStack_1368 = *(undefined4 *)(local_1058 + 0xc0);
  pcStack_136c = (char *)0x6c5c0d;
  local_1154 = (**(code **)(**(int **)(local_1058 + 0xc0) + 0x4c))();
  pcStack_136c = "sprite/interface/popup.img";
  uStack_1370 = 0x6c5c23;
  local_116c = FUN_005855f0();
  for (local_1150 = 0; local_1150 < 0x10; local_1150 = local_1150 + 1) {
    pcStack_136c = *(char **)(*(int *)(local_116c + 0x40) + 0x1690);
    uStack_1370 = *(undefined4 *)(*(int *)(local_116c + 0x40) + 0x16a4);
    iStack_1374 = local_12dc + (local_117c + 6) * *(int *)(local_1058 + 0xcc) * 4 + 0x18 +
                  local_1150 * 0x30;
    uStack_1378 = 0x6c5caf;
    FUN_006e6bd0();
  }
  pcStack_136c = (char *)local_116c;
  uStack_1370 = 0x6c5cc6;
  FUN_005856e0();
  pcStack_136c = (char *)0x0;
  uStack_1370 = *(undefined4 *)(local_1058 + 0xc0);
  iStack_1374 = 0x6c5ce8;
  (**(code **)(**(int **)(local_1058 + 0xc0) + 0x50))();
  puVar6 = (undefined4 *)(local_1058 + 0xc0);
  puVar7 = param_1;
  for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  return param_1;
}


/* ==== 006c5d20  d3d9_create_texture_006c5d20  size=7166 ==== */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * d3d9_create_texture_006c5d20(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  LPCSTR pCVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  bool bVar6;
  undefined4 uStack_1260;
  int iStack_125c;
  undefined4 uStack_1258;
  char *pcStack_1254;
  undefined4 uStack_1250;
  undefined4 uStack_124c;
  undefined1 *puStack_1248;
  int iStack_1244;
  int iStack_1240;
  function<void___cdecl(void)> *pfStack_123c;
  LPVOID pvStack_1238;
  tagRECT *ptVar7;
  UINT UVar8;
  undefined1 local_1218 [40];
  undefined4 local_11f0;
  undefined1 *local_11ec;
  HGDIOBJ local_11e8;
  LONG local_11e4;
  undefined4 local_11e0;
  undefined4 local_11dc;
  undefined1 *local_11d8;
  LONG local_11d4;
  int local_11d0;
  int local_11cc;
  char *local_11c8;
  int local_11c4;
  undefined1 local_11c0 [4];
  int local_11bc;
  int local_11b8;
  undefined4 *local_11b4;
  BOOL local_11b0;
  HBITMAP local_11ac;
  int local_11a8;
  int local_11a4;
  int local_11a0;
  int local_119c;
  int local_1198;
  int local_1194;
  int local_1190;
  int local_118c;
  int local_1188;
  int local_1184;
  char *local_1180;
  int local_117c;
  int local_1178;
  int local_1174;
  int local_1170;
  int local_116c;
  int local_1168;
  int local_1164;
  int local_1160;
  int local_115c;
  int local_1158;
  int local_1154;
  int local_1150;
  int local_114c;
  uint local_1148;
  int local_1144;
  int local_1140;
  undefined4 local_113c;
  undefined4 local_1138;
  int local_1134;
  int local_1130;
  undefined4 local_112c;
  undefined4 local_1128;
  int local_1124;
  HBITMAP local_1120;
  uint local_111c;
  int local_1118;
  int local_1114;
  int local_1110;
  HBITMAP local_110c;
  undefined4 local_1108;
  uint local_1104;
  byte *local_1100;
  byte *local_10fc;
  uint local_10f8;
  char *local_10f4;
  char *local_10f0;
  char *local_10ec;
  char *local_10e8;
  char *local_10e4;
  char *local_10e0;
  char *local_10dc;
  char *local_10d8;
  char *local_10d4;
  char *local_10d0;
  char *local_10cc;
  char *local_10c8;
  char *local_10c4;
  char *local_10c0;
  char *local_10bc;
  char *local_10b8;
  char *local_10b4;
  undefined *local_10b0;
  uint local_10ac;
  char local_10a5;
  byte local_10a4;
  char local_10a3;
  char local_10a2;
  char local_10a1;
  uint local_10a0;
  char local_109a;
  char local_1099;
  char local_1098;
  char local_1097;
  char local_1096;
  char local_1095;
  char local_1094;
  char local_1093;
  char local_1092;
  byte local_1091;
  char local_1090;
  char local_108f;
  char local_108e;
  char local_108d;
  uint local_108c;
  undefined4 local_1088;
  COLORREF local_1084;
  int local_1080;
  void *local_107c;
  int local_1078;
  LPVOID local_1074;
  uint local_1070;
  int local_106c;
  int local_1068;
  int local_1064;
  tagRECT local_1060;
  function<void___cdecl(void)> local_1050 [24];
  function<void___cdecl(void)> local_1038 [24];
  function<void___cdecl(void)> local_1020 [24];
  undefined4 local_1008;
  uint local_1004;
  undefined1 local_1000;
  uint local_8;
  
  local_8 = DAT_007c5940 ^ (uint)&stack0xfffffffc;
  local_1078 = 0xcc;
  local_1114 = 0x1e0;
  local_1118 = 0;
  local_1064 = game_loop_helper_cc840();
  local_1088 = 0xff000000;
  local_1080 = 0;
  local_11f0 = 0xff00f0;
  local_11e0 = 0xffb100;
  local_11dc = 0xff00f0;
  local_1084 = 0xffffff;
  local_1060.left = 6;
  local_1060.top = 6;
  local_1060.right = local_1078 + -6;
  local_1060.bottom = local_1114;
  SelectObject(*(HDC *)(DAT_007ca1a4 + 0x1c),*(HGDIOBJ *)(DAT_007ca1a4 + 0x20));
  local_110c = CreateCompatibleBitmap(*(HDC *)(DAT_007ca1a4 + 0x18),local_1078,local_1114);
  local_1120 = CreateCompatibleBitmap(*(HDC *)(DAT_007ca1a4 + 0x18),1,1);
  local_10a0 = local_1078 * local_1114 * 4;
  local_107c = (void *)FUN_006f191d();
  for (local_10f8 = 0; local_10f8 < local_10a0 >> 2; local_10f8 = local_10f8 + 1) {
    *(int *)((int)local_107c + local_10f8 * 4) = local_1080;
  }
  local_11e4 = SetBitmapBits(local_110c,local_10a0,local_107c);
  local_11e8 = SelectObject(*(HDC *)(DAT_007ca1a4 + 0x1c),local_110c);
  SetBkMode(*(HDC *)(DAT_007ca1a4 + 0x1c),1);
  local_10b0 = (undefined *)0xffffff;
  if (*(int *)(local_1064 + 0xb8) == 1) {
    local_10b0 = &DAT_0068d5ed;
  }
  else if (*(int *)(local_1064 + 0xb8) == 2) {
    local_10b0 = (undefined *)0xb36bff;
  }
  else if (*(int *)(local_1064 + 0xb8) == 3) {
    local_10b0 = (undefined *)0xff00f0;
  }
  else if (*(int *)(local_1064 + 0xb8) == 4) {
    local_10b0 = (undefined *)0xffb100;
  }
  SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),(COLORREF)local_10b0);
  local_10dc = (char *)npk_get_relative_res_path();
  local_1180 = local_10dc + 1;
  do {
    local_1093 = *local_10dc;
    local_10dc = local_10dc + 1;
  } while (local_1093 != '\0');
  iVar2 = (int)local_10dc - (int)local_1180;
  ptVar7 = &local_1060;
  UVar8 = 0x810;
  local_11c4 = iVar2;
  pCVar3 = (LPCSTR)npk_get_relative_res_path();
  pvStack_1238 = (LPVOID)0x6c6005;
  local_1068 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),pCVar3,iVar2,ptVar7,UVar8);
  local_1060.top = local_1060.top + 1 + local_1068;
  SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),(COLORREF)local_10b0);
  local_10e8 = (char *)npk_get_relative_res_path();
  local_11c8 = local_10e8 + 1;
  do {
    local_108d = *local_10e8;
    local_10e8 = local_10e8 + 1;
  } while (local_108d != '\0');
  iVar2 = (int)local_10e8 - (int)local_11c8;
  ptVar7 = &local_1060;
  UVar8 = 0x810;
  local_11cc = iVar2;
  pCVar3 = (LPCSTR)npk_get_relative_res_path();
  pvStack_1238 = (LPVOID)0x6c60bc;
  local_1068 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),pCVar3,iVar2,ptVar7,UVar8);
  local_1118 = local_1060.top + 1 + local_1068;
  local_1060.top = local_1118;
  if (*(int *)(local_1064 + 0xbc) != 0) {
    local_1060.top = local_1118 + 0xd;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xffffff);
    FUN_00414e80();
    local_10ec = (char *)&local_1008;
    local_11d0 = (int)&local_1008 + 1;
    do {
      local_108e = *local_10ec;
      local_10ec = local_10ec + 1;
    } while (local_108e != '\0');
    local_1124 = (int)local_10ec - local_11d0;
    pvStack_1238 = (LPVOID)0x6c61c3;
    local_1068 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1124,&local_1060,
                           0x10);
  }
  if (*(int *)(local_1064 + 0x14c) != 0) {
    local_1060.top = local_1060.top + 1 + local_1068;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xffffff);
    if (*(int *)(local_106c + 0x2c) == 0) {
      local_112c = FUN_004c7c70();
      npk_get_relative_res_path();
      FUN_00414e80();
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1020);
    }
    else {
      local_1128 = FUN_004c7c70();
      npk_get_relative_res_path();
      FUN_00414e80();
      std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1038);
    }
    local_10f0 = (char *)&local_1008;
    local_1130 = (int)&local_1008 + 1;
    do {
      local_108f = *local_10f0;
      local_10f0 = local_10f0 + 1;
    } while (local_108f != '\0');
    local_1134 = (int)local_10f0 - local_1130;
    pvStack_1238 = (LPVOID)0x6c6328;
    local_1068 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1134,&local_1060,
                           0x12);
  }
  local_1060.top = local_1060.top + 1 + local_1068;
  SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xffffff);
  local_11ec = (undefined1 *)&pvStack_1238;
  pfStack_123c = (function<void___cdecl(void)> *)(local_1064 + 0x124);
  iStack_1240 = 0x6c6377;
  FUN_00405520();
  pfStack_123c = local_1050;
  iStack_1240 = 0x6c6383;
  local_113c = FUN_004ca080();
  local_1138 = local_113c;
  npk_get_relative_res_path();
  FUN_00414e80();
  std::function<void___cdecl(void)>::~function<void___cdecl(void)>(local_1050);
  local_10f4 = (char *)&local_1008;
  local_1140 = (int)&local_1008 + 1;
  do {
    local_1090 = *local_10f4;
    local_10f4 = local_10f4 + 1;
  } while (local_1090 != '\0');
  local_1144 = (int)local_10f4 - local_1140;
  pvStack_1238 = (LPVOID)0x6c6436;
  local_1068 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1144,&local_1060,
                         0x12);
  local_1060.top = local_1060.top + 1 + local_1068;
  SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xffffff);
  cVar1 = FUN_00427c60();
  if ((cVar1 == '\0') || (*(int *)(local_106c + 0x40) != 0)) {
    cVar1 = FUN_00427c60();
    if ((cVar1 == '\0') || (*(int *)(local_106c + 0x40) != 1)) {
      cVar1 = FUN_00427c60();
      if (cVar1 == '\0') {
        cVar1 = FUN_00427c60();
        if (cVar1 == '\0') {
          cVar1 = FUN_00427c60();
          if (cVar1 != '\0') {
            local_1008 = local_1008 & 0xffffff00;
          }
        }
        else {
          local_1008 = 0xa8b7dece;
          local_1004 = 0xfdb3bec9;
          local_1000 = 0;
        }
      }
      else {
        local_1008 = 0xa8b7dece;
        local_1004 = 0xd7d2bbbd;
        local_1000 = 0;
      }
    }
    else {
      local_1008 = 0xa8b7dece;
      local_1004 = 0xd7d2bbbd;
      local_1000 = 0;
    }
  }
  else {
    local_1008 = 0xb0d7e2b7;
    local_1004 = local_1004 & 0xffffff00;
  }
  local_1100 = &DAT_00740843;
  local_10fc = (byte *)&local_1008;
  do {
    local_1091 = *local_10fc;
    bVar6 = local_1091 < *local_1100;
    if (local_1091 != *local_1100) {
LAB_006c6631:
      local_111c = -(uint)bVar6 | 1;
      goto LAB_006c663c;
    }
    if (local_1091 == 0) break;
    local_10a4 = local_10fc[1];
    bVar6 = local_10a4 < local_1100[1];
    if (local_10a4 != local_1100[1]) goto LAB_006c6631;
    local_10fc = local_10fc + 2;
    local_1100 = local_1100 + 2;
  } while (local_10a4 != 0);
  local_111c = 0;
LAB_006c663c:
  local_1148 = local_111c;
  if (local_111c != 0) {
    local_10b4 = (char *)&local_1008;
    local_114c = (int)&local_1008 + 1;
    do {
      local_10a3 = *local_10b4;
      local_10b4 = local_10b4 + 1;
    } while (local_10a3 != '\0');
    local_1150 = (int)local_10b4 - local_114c;
    pvStack_1238 = (LPVOID)0x6c66c3;
    local_1068 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1150,&local_1060,
                           0x12);
  }
  local_1060.top = local_1060.top + local_1068 * 2 + 2;
  if (*(int *)(local_106c + 0x3c) < 100) {
    if (*(int *)(local_106c + 0x3c) < 0x4b) {
      if (*(int *)(local_106c + 0x3c) < 0x32) {
        if (*(int *)(local_106c + 0x3c) < 0x19) {
          if (-1 < *(int *)(local_106c + 0x3c)) {
            SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xe6c89b);
            pvStack_1238 = (LPVOID)0x6c6863;
            local_1068 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&DAT_00778bec,6,&local_1060,0x12);
          }
        }
        else {
          SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xe6c89b);
          pvStack_1238 = (LPVOID)0x6c681a;
          local_1068 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&DAT_00778be4,4,&local_1060,0x12);
        }
      }
      else {
        SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
        pvStack_1238 = (LPVOID)0x6c67ce;
        local_1068 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&DAT_00778c30,4,&local_1060,0x12);
      }
    }
    else {
      SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xfff200);
      pvStack_1238 = (LPVOID)0x6c6782;
      local_1068 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&DAT_00778c28,4,&local_1060,0x12);
    }
  }
  else {
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0xfff200);
    pvStack_1238 = (LPVOID)0x6c6736;
    local_1068 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),&DAT_00778c20,6,&local_1060,0x12);
  }
  if (1 < *(int *)(local_1064 + 0x180)) {
    local_1060.top = local_1060.top + 1 + local_1068;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),local_1084);
    FUN_00414e80();
    local_10b8 = (char *)&local_1008;
    local_1154 = (int)&local_1008 + 1;
    do {
      local_10a2 = *local_10b8;
      local_10b8 = local_10b8 + 1;
    } while (local_10a2 != '\0');
    local_1158 = (int)local_10b8 - local_1154;
    pvStack_1238 = (LPVOID)0x6c693b;
    local_1068 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1158,&local_1060,
                           0x10);
  }
  if ((((*(float *)(local_1064 + 0x18c) != 0.0) || (*(int *)(local_1064 + 0x184) != 0)) ||
      (*(int *)(local_1064 + 0x188) != 0)) ||
     (((*(float *)(local_1064 + 0x19c) != 0.0 || (*(float *)(local_1064 + 0x1a0) != 0.0)) ||
      ((*(float *)(local_1064 + 400) != 0.0 || (*(float *)(local_1064 + 0x194) != 0.0)))))) {
    local_1060.top = local_1060.top + 1 + local_1068;
  }
  if (*(float *)(local_1064 + 0x18c) != 0.0) {
    local_1060.top = local_1060.top + 1 + local_1068;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),local_1084);
    FUN_00414e80();
    local_10bc = (char *)&local_1008;
    local_115c = (int)&local_1008 + 1;
    do {
      local_10a1 = *local_10bc;
      local_10bc = local_10bc + 1;
    } while (local_10a1 != '\0');
    local_1160 = (int)local_10bc - local_115c;
    pvStack_1238 = (LPVOID)0x6c6ae6;
    local_1068 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1160,&local_1060,
                           0x10);
  }
  if (*(int *)(local_1064 + 0x184) != 0) {
    local_1060.top = local_1060.top + 1 + local_1068;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),local_1084);
    FUN_00414e80();
    local_10c0 = (char *)&local_1008;
    local_1164 = (int)&local_1008 + 1;
    do {
      local_1097 = *local_10c0;
      local_10c0 = local_10c0 + 1;
    } while (local_1097 != '\0');
    local_1168 = (int)local_10c0 - local_1164;
    pvStack_1238 = (LPVOID)0x6c6bbf;
    local_1068 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1168,&local_1060,
                           0x10);
  }
  if (*(int *)(local_1064 + 0x188) != 0) {
    local_1060.top = local_1060.top + 1 + local_1068;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),local_1084);
    FUN_00414e80();
    local_10c4 = (char *)&local_1008;
    local_116c = (int)&local_1008 + 1;
    do {
      local_1096 = *local_10c4;
      local_10c4 = local_10c4 + 1;
    } while (local_1096 != '\0');
    local_1170 = (int)local_10c4 - local_116c;
    pvStack_1238 = (LPVOID)0x6c6c97;
    local_1068 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1170,&local_1060,
                           0x10);
  }
  if (*(float *)(local_1064 + 0x19c) != 0.0) {
    local_1060.top = local_1060.top + 1 + local_1068;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),local_1084);
    FUN_00414e80();
    local_10c8 = (char *)&local_1008;
    local_1174 = (int)&local_1008 + 1;
    do {
      local_1095 = *local_10c8;
      local_10c8 = local_10c8 + 1;
    } while (local_1095 != '\0');
    local_1178 = (int)local_10c8 - local_1174;
    pvStack_1238 = (LPVOID)0x6c6d85;
    local_1068 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1178,&local_1060,
                           0x10);
  }
  if (*(float *)(local_1064 + 0x1a0) != 0.0) {
    local_1060.top = local_1060.top + 1 + local_1068;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),local_1084);
    FUN_00414e80();
    local_10cc = (char *)&local_1008;
    local_117c = (int)&local_1008 + 1;
    do {
      local_1094 = *local_10cc;
      local_10cc = local_10cc + 1;
    } while (local_1094 != '\0');
    local_11b8 = (int)local_10cc - local_117c;
    pvStack_1238 = (LPVOID)0x6c6e71;
    local_1068 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_11b8,&local_1060,
                           0x10);
  }
  if (*(float *)(local_1064 + 400) != 0.0) {
    local_1060.top = local_1060.top + 1 + local_1068;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),local_1084);
    FUN_00414e80();
    local_10d0 = (char *)&local_1008;
    local_1184 = (int)&local_1008 + 1;
    do {
      local_1099 = *local_10d0;
      local_10d0 = local_10d0 + 1;
    } while (local_1099 != '\0');
    local_1188 = (int)local_10d0 - local_1184;
    pvStack_1238 = (LPVOID)0x6c6f5f;
    local_1068 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1188,&local_1060,
                           0x10);
  }
  if (*(float *)(local_1064 + 0x194) != 0.0) {
    local_1060.top = local_1060.top + 1 + local_1068;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),local_1084);
    FUN_00414e80();
    local_10d4 = (char *)&local_1008;
    local_118c = (int)&local_1008 + 1;
    do {
      local_1092 = *local_10d4;
      local_10d4 = local_10d4 + 1;
    } while (local_1092 != '\0');
    local_1190 = (int)local_10d4 - local_118c;
    pvStack_1238 = (LPVOID)0x6c704d;
    local_1068 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1190,&local_1060,
                           0x10);
  }
  cVar1 = FUN_00427e30();
  if (cVar1 != '\0') {
    local_1060.top = local_1060.top + 0xe + local_1068;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    npk_get_relative_res_path();
    FUN_00414e80();
    local_10d8 = (char *)&local_1008;
    local_1194 = (int)&local_1008 + 1;
    do {
      local_109a = *local_10d8;
      local_10d8 = local_10d8 + 1;
    } while (local_109a != '\0');
    local_1198 = (int)local_10d8 - local_1194;
    pvStack_1238 = (LPVOID)0x6c713e;
    local_1068 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_1198,&local_1060,
                           0x10);
  }
  cVar1 = FUN_00427e30();
  if (cVar1 != '\0') {
    local_1060.top = local_1060.top + 0xe + local_1068;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x68d5ed);
    npk_get_relative_res_path();
    FUN_00414e80();
    local_10e4 = (char *)&local_1008;
    local_119c = (int)&local_1008 + 1;
    do {
      local_1098 = *local_10e4;
      local_10e4 = local_10e4 + 1;
    } while (local_1098 != '\0');
    local_11a0 = (int)local_10e4 - local_119c;
    pvStack_1238 = (LPVOID)0x6c7230;
    local_1068 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_11a0,&local_1060,
                           0x10);
  }
  cVar1 = FUN_00427e30();
  if (cVar1 != '\0') {
    local_1060.top = local_1060.top + 0xe + local_1068;
    SetTextColor(*(HDC *)(DAT_007ca1a4 + 0x1c),0x969696);
    npk_get_relative_res_path();
    FUN_00414e80();
    local_10e0 = (char *)&local_1008;
    local_11a4 = (int)&local_1008 + 1;
    do {
      local_10a5 = *local_10e0;
      local_10e0 = local_10e0 + 1;
    } while (local_10a5 != '\0');
    local_11a8 = (int)local_10e0 - local_11a4;
    pvStack_1238 = (LPVOID)0x6c7326;
    local_1068 = DrawTextA(*(HDC *)(DAT_007ca1a4 + 0x1c),(LPCSTR)&local_1008,local_11a8,&local_1060,
                           0x10);
  }
  local_1060.top = local_1060.top + local_1068 + 7;
  local_11ac = SelectObject(*(HDC *)(DAT_007ca1a4 + 0x1c),local_1120);
  local_11d4 = GetBitmapBits(local_11ac,local_10a0,local_107c);
  for (local_108c = 0; local_108c < local_10a0 >> 2; local_108c = local_108c + 1) {
    if (*(int *)((int)local_107c + local_108c * 4) != 0) {
      *(uint *)((int)local_107c + local_108c * 4) =
           (*(uint *)((int)local_107c + local_108c * 4) & 0xff0000) >> 0x10 |
           (*(uint *)((int)local_107c + local_108c * 4) & 0xff) << 0x10 |
           *(uint *)((int)local_107c + local_108c * 4) & 0xff00ff00;
    }
  }
  for (local_1070 = 0; local_1070 < local_10a0 >> 2; local_1070 = local_1070 + 1) {
    local_1074 = local_107c;
    if ((*(uint *)((int)local_107c + local_1070 * 4) & 0xffffff) != 0) {
      if (*(int *)((int)local_107c + (local_1070 - local_1078) * 4 + -4) == local_1080) {
        *(undefined4 *)((int)local_107c + (local_1070 - local_1078) * 4 + -4) = local_1088;
      }
      if (*(int *)((int)local_107c + (local_1070 - local_1078) * 4 + 4) == local_1080) {
        *(undefined4 *)((int)local_107c + (local_1070 - local_1078) * 4 + 4) = local_1088;
      }
      if (*(int *)((int)local_107c + (local_1070 - local_1078) * 4) == local_1080) {
        *(undefined4 *)((int)local_107c + (local_1070 - local_1078) * 4) = local_1088;
      }
      if (*(int *)((int)local_107c + local_1070 * 4 + -4) == local_1080) {
        *(undefined4 *)((int)local_107c + local_1070 * 4 + -4) = local_1088;
      }
      if (*(int *)((int)local_107c + local_1070 * 4 + 4) == local_1080) {
        *(undefined4 *)((int)local_107c + local_1070 * 4 + 4) = local_1088;
      }
      if (*(int *)((int)local_107c + (local_1070 + local_1078) * 4 + -4) == local_1080) {
        *(undefined4 *)((int)local_107c + (local_1070 + local_1078) * 4 + -4) = local_1088;
      }
      if (*(int *)((int)local_107c + (local_1070 + local_1078) * 4) == local_1080) {
        *(undefined4 *)((int)local_107c + (local_1070 + local_1078) * 4) = local_1088;
      }
      if (*(int *)((int)local_107c + (local_1070 + local_1078) * 4 + 4) == local_1080) {
        *(undefined4 *)((int)local_107c + (local_1070 + local_1078) * 4 + 4) = local_1088;
      }
    }
  }
  for (local_10ac = 0; local_10ac < local_10a0 >> 2; local_10ac = local_10ac + 1) {
    if (*(int *)((int)local_107c + local_10ac * 4) != 0) {
      *(uint *)((int)local_107c + local_10ac * 4) =
           *(uint *)((int)local_107c + local_10ac * 4) | 0xff000000;
    }
  }
  local_11b0 = DeleteObject(local_110c);
  local_11b0 = DeleteObject(local_1120);
  pvStack_1238 = (LPVOID)local_1060.top;
  pfStack_123c = (function<void___cdecl(void)> *)local_1078;
  iStack_1240 = *(undefined4 *)(DAT_007ca1a4 + 4);
  iStack_1244 = 0x6c76f5;
  local_1108 = D3DXCreateTexture();
  pvStack_1238 = (LPVOID)0x6c7728;
  local_1108 = (**(code **)(**(int **)(local_106c + 0xe8) + 0x4c))();
  pvStack_1238 = (LPVOID)(local_1078 * local_1060.top * 4);
  pfStack_123c = local_107c;
  iStack_1240 = local_11bc;
  iStack_1244 = 0x6c7752;
  FUN_006e6bd0();
  pvStack_1238 = local_107c;
  pfStack_123c = (function<void___cdecl(void)> *)0x6c7761;
  FUN_006f1902();
  pvStack_1238 = (LPVOID)0x0;
  pfStack_123c = *(function<void___cdecl(void)> **)(local_106c + 0xe8);
  iStack_1240 = 0x6c7786;
  local_1108 = (**(code **)(**(int **)(local_106c + 0xe8) + 0x50))();
  iStack_1240 = 3;
  iStack_1244 = local_1060.top / 0xd;
  puStack_1248 = (undefined1 *)0x10;
  local_11d8 = (undefined1 *)&uStack_1260;
  FUN_004054a0("ceshiceshi");
  local_11b4 = (undefined4 *)d3d9_create_texture_004b7f20(local_1218);
  puVar4 = local_11b4;
  puVar5 = (undefined4 *)(local_106c + 0xc0);
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  iStack_1240 = 0;
  iStack_1244 = 0;
  puStack_1248 = local_11c0;
  uStack_124c = 0;
  uStack_1250 = *(undefined4 *)(local_106c + 0xc0);
  pcStack_1254 = (char *)0x6c7812;
  local_1108 = (**(code **)(**(int **)(local_106c + 0xc0) + 0x4c))();
  pcStack_1254 = "sprite/interface/popup.img";
  uStack_1258 = 0x6c7828;
  local_1110 = FUN_005855f0();
  for (local_1104 = 0; local_1104 < 0x10; local_1104 = local_1104 + 1) {
    pcStack_1254 = *(char **)(*(int *)(local_1110 + 0x40) + 0x1690);
    uStack_1258 = *(undefined4 *)(*(int *)(local_1110 + 0x40) + 0x16a4);
    iStack_125c = local_11bc + (local_1118 + 6) * *(int *)(local_106c + 0xcc) * 4 + 0x18 +
                  local_1104 * 0x30;
    uStack_1260 = 0x6c78b4;
    FUN_006e6bd0();
  }
  pcStack_1254 = (char *)local_1110;
  uStack_1258 = 0x6c78cb;
  FUN_005856e0();
  pcStack_1254 = (char *)0x0;
  uStack_1258 = *(undefined4 *)(local_106c + 0xc0);
  iStack_125c = 0x6c78ed;
  (**(code **)(**(int **)(local_106c + 0xc0) + 0x50))();
  puVar4 = (undefined4 *)(local_106c + 0xc0);
  puVar5 = param_1;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  return param_1;
}


