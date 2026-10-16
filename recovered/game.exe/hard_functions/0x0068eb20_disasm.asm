; Annotated disassembly of FUN_0068eb20 @ 0x0068eb20
  0068eb20  PUSH EBP
  0068eb21  MOV EBP,ESP
  0068eb23  PUSH -0x1
  0068eb25  PUSH 0x729a67
  0068eb2a  MOV EAX,FS:[0x0]
  0068eb30  PUSH EAX
  0068eb31  MOV EAX,0x2b68
  0068eb36  CALL 0x006e5710    ; call __alloca_probe
  0068eb3b  MOV EAX,[0x007c5940]
  0068eb40  XOR EAX,EBP
  0068eb42  MOV dword ptr [EBP + -0x10],EAX
  0068eb45  PUSH ESI
  0068eb46  PUSH EDI
  0068eb47  PUSH EAX
  0068eb48  LEA EAX,[EBP + -0xc]
  0068eb4b  MOV FS:[0x0],EAX
  0068eb51  MOV EAX,dword ptr [EBP + 0x8]
  0068eb54  MOV dword ptr [EBP + 0xffffe628],EAX
  0068eb5a  CMP dword ptr [EBP + 0xffffe628],0x528
  0068eb64  JG 0x0068ec7f
  0068eb6a  CMP dword ptr [EBP + 0xffffe628],0x528
  0068eb74  JZ 0x0069837a
  0068eb7a  CMP dword ptr [EBP + 0xffffe628],0x19a
  0068eb84  JG 0x0068ebc6
  0068eb86  CMP dword ptr [EBP + 0xffffe628],0x19a
  0068eb90  JZ 0x00696e0d
  0068eb96  MOV ECX,dword ptr [EBP + 0xffffe628]
  0068eb9c  SUB ECX,0xa
  0068eb9f  MOV dword ptr [EBP + 0xffffe628],ECX
  0068eba5  CMP dword ptr [EBP + 0xffffe628],0x64
  0068ebac  JA 0x0069e6d6
  0068ebb2  MOV EDX,dword ptr [EBP + 0xffffe628]
  0068ebb8  MOVZX EAX,byte ptr [EDX + 0x69e8c8]
  0068ebbf  JMP dword ptr [EAX*0x4 + 0x69e8a0]
LAB_0068ebc6:
  0068ebc6  CMP dword ptr [EBP + 0xffffe628],0x363
  0068ebd0  JG 0x0068ec18
  0068ebd2  CMP dword ptr [EBP + 0xffffe628],0x363
  0068ebdc  JZ 0x00691593
  0068ebe2  MOV ECX,dword ptr [EBP + 0xffffe628]
  0068ebe8  SUB ECX,0x1a4
  0068ebee  MOV dword ptr [EBP + 0xffffe628],ECX
  0068ebf4  CMP dword ptr [EBP + 0xffffe628],0xde
  0068ebfe  JA 0x0069e6d6
  0068ec04  MOV EDX,dword ptr [EBP + 0xffffe628]
  0068ec0a  MOVZX EAX,byte ptr [EDX + 0x69e964]
  0068ec11  JMP dword ptr [EAX*0x4 + 0x69e930]
LAB_0068ec18:
  0068ec18  CMP dword ptr [EBP + 0xffffe628],0x38e
  0068ec22  JG 0x0068ec49
  0068ec24  CMP dword ptr [EBP + 0xffffe628],0x38e
  0068ec2e  JZ 0x00697a42
  0068ec34  CMP dword ptr [EBP + 0xffffe628],0x36d
  0068ec3e  JZ 0x006919a9
  0068ec44  JMP 0x0069e6d6
LAB_0068ec49:
  0068ec49  MOV ECX,dword ptr [EBP + 0xffffe628]
  0068ec4f  SUB ECX,0x398
  0068ec55  MOV dword ptr [EBP + 0xffffe628],ECX
  0068ec5b  CMP dword ptr [EBP + 0xffffe628],0xf0
  0068ec65  JA 0x0069e6d6
  0068ec6b  MOV EDX,dword ptr [EBP + 0xffffe628]
  0068ec71  MOVZX EAX,byte ptr [EDX + 0x69ea70]
  0068ec78  JMP dword ptr [EAX*0x4 + 0x69ea44]
LAB_0068ec7f:
  0068ec7f  CMP dword ptr [EBP + 0xffffe628],0x636
  0068ec89  JG 0x0068ecd1
  0068ec8b  CMP dword ptr [EBP + 0xffffe628],0x636
  0068ec95  JZ 0x0069378e
  0068ec9b  MOV ECX,dword ptr [EBP + 0xffffe628]
  0068eca1  SUB ECX,0x532
  0068eca7  MOV dword ptr [EBP + 0xffffe628],ECX
  0068ecad  CMP dword ptr [EBP + 0xffffe628],0xfa
  0068ecb7  JA 0x0069e6d6
  0068ecbd  MOV EDX,dword ptr [EBP + 0xffffe628]
  0068ecc3  MOVZX EAX,byte ptr [EDX + 0x69ebc8]
  0068ecca  JMP dword ptr [EAX*0x4 + 0x69eb64]
LAB_0068ecd1:
  0068ecd1  CMP dword ptr [EBP + 0xffffe628],0xe10
  0068ecdb  JG 0x0068edd9
  0068ece1  CMP dword ptr [EBP + 0xffffe628],0xe10
  0068eceb  JZ 0x00693aa2
  0068ecf1  CMP dword ptr [EBP + 0xffffe628],0xbb8
  0068ecfb  JG 0x0068ed73
  0068ecfd  CMP dword ptr [EBP + 0xffffe628],0xbb8
  0068ed07  JZ 0x00692037
  0068ed0d  CMP dword ptr [EBP + 0xffffe628],0xafa
  0068ed17  JG 0x0068ed4e
  0068ed19  CMP dword ptr [EBP + 0xffffe628],0xafa
  0068ed23  JZ 0x0069096c
  0068ed29  CMP dword ptr [EBP + 0xffffe628],0x637
  0068ed33  JZ 0x006937ae
  0068ed39  CMP dword ptr [EBP + 0xffffe628],0xaf0
  0068ed43  JZ 0x0069055f
  0068ed49  JMP 0x0069e6d6
LAB_0068ed4e:
  0068ed4e  CMP dword ptr [EBP + 0xffffe628],0xb04
  0068ed58  JZ 0x00690d79
  0068ed5e  CMP dword ptr [EBP + 0xffffe628],0xb0e
  0068ed68  JZ 0x00691186
  0068ed6e  JMP 0x0069e6d6
LAB_0068ed73:
  0068ed73  CMP dword ptr [EBP + 0xffffe628],0xce4
  0068ed7d  JG 0x0068edb4
  0068ed7f  CMP dword ptr [EBP + 0xffffe628],0xce4
  0068ed89  JZ 0x006926ae
  0068ed8f  CMP dword ptr [EBP + 0xffffe628],0xc1c
  0068ed99  JZ 0x00691f1a
  0068ed9f  CMP dword ptr [EBP + 0xffffe628],0xc80
  0068eda9  JZ 0x00691dfd
  0068edaf  JMP 0x0069e6d6
LAB_0068edb4:
  0068edb4  CMP dword ptr [EBP + 0xffffe628],0xd48
  0068edbe  JZ 0x00692491
  0068edc4  CMP dword ptr [EBP + 0xffffe628],0xdac
  0068edce  JZ 0x00692255
  0068edd4  JMP 0x0069e6d6
LAB_0068edd9:
  0068edd9  CMP dword ptr [EBP + 0xffffe628],0x361a
  0068ede3  JG 0x0068ee5b
  0068ede5  CMP dword ptr [EBP + 0xffffe628],0x361a
  0068edef  JZ 0x0068ff7b
  0068edf5  CMP dword ptr [EBP + 0xffffe628],0xf0a
  0068edff  JG 0x0068ee36
  0068ee01  CMP dword ptr [EBP + 0xffffe628],0xf0a
  0068ee0b  JZ 0x00691dca
  0068ee11  CMP dword ptr [EBP + 0xffffe628],0xe74
  0068ee1b  JZ 0x006938dd
  0068ee21  CMP dword ptr [EBP + 0xffffe628],0xed8
  0068ee2b  JZ 0x006937c9
  0068ee31  JMP 0x0069e6d6
LAB_0068ee36:
  0068ee36  CMP dword ptr [EBP + 0xffffe628],0x35e8
  0068ee40  JZ 0x0068f30c
  0068ee46  CMP dword ptr [EBP + 0xffffe628],0x35f2
  0068ee50  JZ 0x0068f5db
  0068ee56  JMP 0x0069e6d6
LAB_0068ee5b:
  0068ee5b  CMP dword ptr [EBP + 0xffffe628],0x184b6
  0068ee65  JG 0x0068ee98
  0068ee67  CMP dword ptr [EBP + 0xffffe628],0x184b6
  0068ee71  JZ 0x0068f094
  0068ee77  CMP dword ptr [EBP + 0xffffe628],0x3624
  0068ee81  JZ 0x00690182
  0068ee87  CMP dword ptr [EBP + 0xffffe628],0x184ac
  0068ee91  JZ 0x0068eebd
  0068ee93  JMP 0x0069e6d6
LAB_0068ee98:
  0068ee98  CMP dword ptr [EBP + 0xffffe628],0x184c0
  0068eea2  JZ 0x0068f270
  0068eea8  CMP dword ptr [EBP + 0xffffe628],0x1869e
  0068eeb2  JZ 0x00690407
  0068eeb8  JMP 0x0069e6d6
LAB_0068eebd:
  0068eebd  CMP dword ptr [EBP + 0xc],0x0
  0068eec1  JZ 0x0068f08f
  0068eec7  MOV ECX,dword ptr [EBP + 0xc]
  0068eeca  MOV EDX,dword ptr [ECX + 0x9a0]
  0068eed0  MOV dword ptr [EBP + 0xffffe470],EDX
  0068eed6  LEA EAX,[EBP + 0xffffe470]
  0068eedc  PUSH EAX
  0068eedd  CALL 0x00454ee0    ; call FUN_00454ee0
  0068eee2  MOV ECX,EAX
  0068eee4  CALL 0x00489bf0    ; call FUN_00489bf0
  0068eee9  MOV ECX,dword ptr [EAX]
  0068eeeb  MOVZX EDX,byte ptr [ECX + 0xe05]
  0068eef2  TEST EDX,EDX
  0068eef4  JNZ 0x0068f068
  0068eefa  CALL 0x00454ea0    ; call FUN_00454ea0
  0068eeff  MOVZX EAX,byte ptr [EAX + 0xe05]
  0068ef06  TEST EAX,EAX
  0068ef08  JNZ 0x0068f03f
  0068ef0e  CALL 0x00454ea0    ; call FUN_00454ea0
  0068ef13  CMP dword ptr [EAX + 0xadc],0x2
  0068ef1a  JNZ 0x0068f016
  0068ef20  CALL 0x00454ea0    ; call FUN_00454ea0
  0068ef25  CMP dword ptr [EAX + 0xae0],0x4
  0068ef2c  JNZ 0x0068f016
  0068ef32  CALL 0x00454ea0    ; call FUN_00454ea0
  0068ef37  MOV ESI,EAX
  0068ef39  LEA ECX,[EBP + 0xffffe470]
  0068ef3f  PUSH ECX
  0068ef40  CALL 0x00454ee0    ; call FUN_00454ee0
  0068ef45  MOV ECX,EAX
  0068ef47  CALL 0x00489bf0    ; call FUN_00489bf0
  0068ef4c  MOV EDX,dword ptr [EAX]
  0068ef4e  MOV EAX,dword ptr [ESI + 0xadc]
  0068ef54  CMP EAX,dword ptr [EDX + 0xadc]
  0068ef5a  JZ 0x0068ef86
  0068ef5c  CALL 0x00454ea0    ; call FUN_00454ea0
  0068ef61  MOV ESI,EAX
  0068ef63  LEA ECX,[EBP + 0xffffe470]
  0068ef69  PUSH ECX
  0068ef6a  CALL 0x00454ee0    ; call FUN_00454ee0
  0068ef6f  MOV ECX,EAX
  0068ef71  CALL 0x00489bf0    ; call FUN_00489bf0
  0068ef76  MOV EDX,dword ptr [EAX]
  0068ef78  MOV EAX,dword ptr [ESI + 0xae0]
  0068ef7e  CMP EAX,dword ptr [EDX + 0xae0]
  0068ef84  JNZ 0x0068efed
LAB_0068ef86:
  0068ef86  CALL 0x00454ea0    ; call FUN_00454ea0
  0068ef8b  PUSH EAX
  0068ef8c  MOV ECX,dword ptr [EBP + 0xffffe470]
  0068ef92  PUSH ECX
  0068ef93  PUSH 0x184ac
  0068ef98  CALL 0x006a3c30    ; call FUN_006a3c30
  0068ef9d  ADD ESP,0xc
  0068efa0  PUSH 0x0
  0068efa2  PUSH 0x0
  0068efa4  PUSH 0x0
  0068efa6  PUSH 0x0
  0068efa8  PUSH 0xa
  0068efaa  SUB ESP,0x18
  0068efad  MOV ECX,ESP
  0068efaf  MOV dword ptr [EBP + 0xffffd9a8],ESP
  0068efb5  PUSH 0x77440c
  0068efba  CALL 0x004054a0    ; call FUN_004054a0
  0068efbf  CALL 0x006634f0    ; call FUN_006634f0
  0068efc4  ADD ESP,0x2c
  0068efc7  MOV dword ptr [EBP + 0xffffdbfc],0x1644
  0068efd1  LEA EDX,[EBP + 0xffffdbfc]
  0068efd7  PUSH EDX
  0068efd8  MOV ECX,0x7ca6e8
  0068efdd  CALL 0x004051c0    ; call FUN_004051c0
  0068efe2  PUSH EAX
  0068efe3  CALL 0x0065e0b0    ; call FUN_0065e0b0
  0068efe8  ADD ESP,0x4
  0068efeb  JMP 0x0068f014
LAB_0068efed:
  0068efed  PUSH 0x0
  0068efef  PUSH 0x0
  0068eff1  PUSH 0x0
  0068eff3  PUSH 0x0
  0068eff5  PUSH 0xa
  0068eff7  SUB ESP,0x18
  0068effa  MOV ECX,ESP
  0068effc  MOV dword ptr [EBP + 0xffffd6fc],ESP
  0068f002  PUSH 0x7743ec
  0068f007  CALL 0x004054a0    ; call FUN_004054a0
  0068f00c  CALL 0x006634f0    ; call FUN_006634f0
  0068f011  ADD ESP,0x2c
LAB_0068f014:
  0068f014  JMP 0x0068f03d
LAB_0068f016:
  0068f016  PUSH 0x0
  0068f018  PUSH 0x0
  0068f01a  PUSH 0x0
  0068f01c  PUSH 0x0
  0068f01e  PUSH 0xa
  0068f020  SUB ESP,0x18
  0068f023  MOV ECX,ESP
  0068f025  MOV dword ptr [EBP + 0xffffd6f8],ESP
  0068f02b  PUSH 0x7743bc
  0068f030  CALL 0x004054a0    ; call FUN_004054a0
  0068f035  CALL 0x006634f0    ; call FUN_006634f0
  0068f03a  ADD ESP,0x2c
LAB_0068f03d:
  0068f03d  JMP 0x0068f066
LAB_0068f03f:
  0068f03f  PUSH 0x0
  0068f041  PUSH 0x0
  0068f043  PUSH 0x0
  0068f045  PUSH 0x0
  0068f047  PUSH 0xa
  0068f049  SUB ESP,0x18
  0068f04c  MOV ECX,ESP
  0068f04e  MOV dword ptr [EBP + 0xffffd6f4],ESP
  0068f054  PUSH 0x77439c
  0068f059  CALL 0x004054a0    ; call FUN_004054a0
  0068f05e  CALL 0x006634f0    ; call FUN_006634f0
  0068f063  ADD ESP,0x2c
LAB_0068f066:
  0068f066  JMP 0x0068f08f
LAB_0068f068:
  0068f068  PUSH 0x0
  0068f06a  PUSH 0x0
  0068f06c  PUSH 0x0
  0068f06e  PUSH 0x0
  0068f070  PUSH 0xa
  0068f072  SUB ESP,0x18
  0068f075  MOV ECX,ESP
  0068f077  MOV dword ptr [EBP + 0xffffd6f0],ESP
  0068f07d  PUSH 0x77448c
  0068f082  CALL 0x004054a0    ; call FUN_004054a0
  0068f087  CALL 0x006634f0    ; call FUN_006634f0
  0068f08c  ADD ESP,0x2c
LAB_0068f08f:
  0068f08f  JMP 0x0069e6d6
LAB_0068f094:
  0068f094  MOV EAX,dword ptr [EBP + 0xc]
  0068f097  MOV ECX,dword ptr [EAX + 0x9a0]
  0068f09d  MOV dword ptr [EBP + 0xffffe474],ECX
  0068f0a3  LEA EDX,[EBP + 0xffffe474]
  0068f0a9  PUSH EDX
  0068f0aa  CALL 0x00454ee0    ; call FUN_00454ee0
  0068f0af  MOV ECX,EAX
  0068f0b1  CALL 0x00489bf0    ; call FUN_00489bf0
  0068f0b6  MOV EAX,dword ptr [EAX]
  0068f0b8  MOVZX ECX,byte ptr [EAX + 0xe05]
  0068f0bf  TEST ECX,ECX
  0068f0c1  JNZ 0x0068f1f7
  0068f0c7  CALL 0x00454ea0    ; call FUN_00454ea0
  0068f0cc  MOVZX EDX,byte ptr [EAX + 0xe05]
  0068f0d3  TEST EDX,EDX
  0068f0d5  JNZ 0x0068f1ce
  0068f0db  CALL 0x00454ea0    ; call FUN_00454ea0
  0068f0e0  CMP dword ptr [EAX + 0xadc],0x2
  0068f0e7  JNZ 0x0068f1a5
  0068f0ed  CALL 0x00454ea0    ; call FUN_00454ea0
  0068f0f2  CMP dword ptr [EAX + 0xae0],0x4
  0068f0f9  JNZ 0x0068f1a5
  0068f0ff  CALL 0x00454ea0    ; call FUN_00454ea0
  0068f104  MOV ESI,EAX
  0068f106  LEA EAX,[EBP + 0xffffe474]
  0068f10c  PUSH EAX
  0068f10d  CALL 0x00454ee0    ; call FUN_00454ee0
  0068f112  MOV ECX,EAX
  0068f114  CALL 0x00489bf0    ; call FUN_00489bf0
  0068f119  MOV ECX,dword ptr [EAX]
  0068f11b  MOV EDX,dword ptr [ESI + 0xadc]
  0068f121  CMP EDX,dword ptr [ECX + 0xadc]
  0068f127  JZ 0x0068f153
  0068f129  CALL 0x00454ea0    ; call FUN_00454ea0
  0068f12e  MOV ESI,EAX
  0068f130  LEA EAX,[EBP + 0xffffe474]
  0068f136  PUSH EAX
  0068f137  CALL 0x00454ee0    ; call FUN_00454ee0
  0068f13c  MOV ECX,EAX
  0068f13e  CALL 0x00489bf0    ; call FUN_00489bf0
  0068f143  MOV ECX,dword ptr [EAX]
  0068f145  MOV EDX,dword ptr [ESI + 0xae0]
  0068f14b  CMP EDX,dword ptr [ECX + 0xae0]
  0068f151  JNZ 0x0068f17c
LAB_0068f153:
  0068f153  CALL 0x00454ea0    ; call FUN_00454ea0
  0068f158  PUSH EAX
  0068f159  MOV EAX,dword ptr [EBP + 0xffffe474]
  0068f15f  PUSH EAX
  0068f160  PUSH 0x184b6
  0068f165  CALL 0x006a3c30    ; call FUN_006a3c30
  0068f16a  ADD ESP,0xc
  0068f16d  PUSH 0x184b6
  0068f172  CALL 0x004f2720    ; call FUN_004f2720
  0068f177  ADD ESP,0x4
  0068f17a  JMP 0x0068f1a3
LAB_0068f17c:
  0068f17c  PUSH 0x0
  0068f17e  PUSH 0x0
  0068f180  PUSH 0x0
  0068f182  PUSH 0x0
  0068f184  PUSH 0xa
  0068f186  SUB ESP,0x18
  0068f189  MOV ECX,ESP
  0068f18b  MOV dword ptr [EBP + 0xffffd6ec],ESP
  0068f191  PUSH 0x77446c
  0068f196  CALL 0x004054a0    ; call FUN_004054a0
  0068f19b  CALL 0x006634f0    ; call FUN_006634f0
  0068f1a0  ADD ESP,0x2c
LAB_0068f1a3:
  0068f1a3  JMP 0x0068f1cc
LAB_0068f1a5:
  0068f1a5  PUSH 0x0
  0068f1a7  PUSH 0x0
  0068f1a9  PUSH 0x0
  0068f1ab  PUSH 0x0
  0068f1ad  PUSH 0xa
  0068f1af  SUB ESP,0x18
  0068f1b2  MOV ECX,ESP
  0068f1b4  MOV dword ptr [EBP + 0xffffd6e8],ESP
  0068f1ba  PUSH 0x77443c
  0068f1bf  CALL 0x004054a0    ; call FUN_004054a0
  0068f1c4  CALL 0x006634f0    ; call FUN_006634f0
  0068f1c9  ADD ESP,0x2c
LAB_0068f1cc:
  0068f1cc  JMP 0x0068f1f5
LAB_0068f1ce:
  0068f1ce  PUSH 0x0
  0068f1d0  PUSH 0x0
  0068f1d2  PUSH 0x0
  0068f1d4  PUSH 0x0
  0068f1d6  PUSH 0xa
  0068f1d8  SUB ESP,0x18
  0068f1db  MOV ECX,ESP
  0068f1dd  MOV dword ptr [EBP + 0xffffd6e4],ESP
  0068f1e3  PUSH 0x77441c
  0068f1e8  CALL 0x004054a0    ; call FUN_004054a0
  0068f1ed  CALL 0x006634f0    ; call FUN_006634f0
  0068f1f2  ADD ESP,0x2c
LAB_0068f1f5:
  0068f1f5  JMP 0x0068f21e
LAB_0068f1f7:
  0068f1f7  PUSH 0x0
  0068f1f9  PUSH 0x0
  0068f1fb  PUSH 0x0
  0068f1fd  PUSH 0x0
  0068f1ff  PUSH 0xa
  0068f201  SUB ESP,0x18
  0068f204  MOV ECX,ESP
  0068f206  MOV dword ptr [EBP + 0xffffd6e0],ESP
  0068f20c  PUSH 0x7744dc
  0068f211  CALL 0x004054a0    ; call FUN_004054a0
  0068f216  CALL 0x006634f0    ; call FUN_006634f0
  0068f21b  ADD ESP,0x2c
LAB_0068f21e:
  0068f21e  MOV dword ptr [EBP + 0xffffdbf8],0x38
  0068f228  MOV dword ptr [EBP + 0xffffdbf4],0x38
  0068f232  MOV ECX,dword ptr [EBP + 0xc]
  0068f235  PUSH ECX
  0068f236  LEA EDX,[EBP + 0xffffdbf8]
  0068f23c  PUSH EDX
  0068f23d  MOV ECX,0x7ca6e8
  0068f242  CALL 0x004051c0    ; call FUN_004051c0
  0068f247  PUSH EAX
  0068f248  CALL 0x0065de20    ; call FUN_0065de20
  0068f24d  ADD ESP,0x8
  0068f250  PUSH EAX
  0068f251  LEA EAX,[EBP + 0xffffdbf4]
  0068f257  PUSH EAX
  0068f258  MOV ECX,0x7ca6e8
  0068f25d  CALL 0x004051c0    ; call FUN_004051c0
  0068f262  PUSH EAX
  0068f263  CALL 0x0065dee0    ; call FUN_0065dee0
  0068f268  ADD ESP,0x8
  0068f26b  JMP 0x0069e6d6
LAB_0068f270:
  0068f270  MOV ECX,dword ptr [EBP + 0xc]
  0068f273  MOV EDX,dword ptr [ECX + 0x9a0]
  0068f279  MOV dword ptr [EBP + 0xffffdbf0],EDX
  0068f27f  MOV EAX,dword ptr [EBP + 0xffffdbf0]
  0068f285  PUSH EAX
  0068f286  PUSH 0x184c0
  0068f28b  CALL 0x006a3f10    ; call FUN_006a3f10
  0068f290  ADD ESP,0x8
  0068f293  PUSH 0x0
  0068f295  PUSH 0x0
  0068f297  PUSH 0x0
  0068f299  PUSH 0x0
  0068f29b  PUSH 0xa
  0068f29d  SUB ESP,0x18
  0068f2a0  MOV ECX,ESP
  0068f2a2  MOV dword ptr [EBP + 0xffffd6dc],ESP
  0068f2a8  PUSH 0x7744c4
  0068f2ad  CALL 0x004054a0    ; call FUN_004054a0
  0068f2b2  CALL 0x006634f0    ; call FUN_006634f0
  0068f2b7  ADD ESP,0x2c
  0068f2ba  MOV dword ptr [EBP + 0xffffdbec],0x38
  0068f2c4  MOV dword ptr [EBP + 0xffffdbe8],0x38
  0068f2ce  MOV ECX,dword ptr [EBP + 0xc]
  0068f2d1  PUSH ECX
  0068f2d2  LEA EDX,[EBP + 0xffffdbec]
  0068f2d8  PUSH EDX
  0068f2d9  MOV ECX,0x7ca6e8
  0068f2de  CALL 0x004051c0    ; call FUN_004051c0
  0068f2e3  PUSH EAX
  0068f2e4  CALL 0x0065de20    ; call FUN_0065de20
  0068f2e9  ADD ESP,0x8
  0068f2ec  PUSH EAX
  0068f2ed  LEA EAX,[EBP + 0xffffdbe8]
  0068f2f3  PUSH EAX
  0068f2f4  MOV ECX,0x7ca6e8
  0068f2f9  CALL 0x004051c0    ; call FUN_004051c0
  0068f2fe  PUSH EAX
  0068f2ff  CALL 0x0065dee0    ; call FUN_0065dee0
  0068f304  ADD ESP,0x8
  0068f307  JMP 0x0069e6d6
LAB_0068f30c:
  0068f30c  PUSH 0x7744b8
  0068f311  LEA ECX,[EBP + 0xfffff830]
  0068f317  CALL 0x004054a0    ; call FUN_004054a0
  0068f31c  MOV dword ptr [EBP + -0x4],0x0
  0068f323  PUSH 0x7744ac
  0068f328  LEA ECX,[EBP + 0xfffff848]
  0068f32e  CALL 0x004054a0    ; call FUN_004054a0
  0068f333  MOV byte ptr [EBP + -0x4],0x1
  0068f337  PUSH 0x774520
  0068f33c  LEA ECX,[EBP + 0xfffff860]
  0068f342  CALL 0x004054a0    ; call FUN_004054a0
  0068f347  MOV byte ptr [EBP + -0x4],0x2
  0068f34b  PUSH 0x774514
  0068f350  LEA ECX,[EBP + 0xfffff878]
  0068f356  CALL 0x004054a0    ; call FUN_004054a0
  0068f35b  MOV byte ptr [EBP + -0x4],0x3
  0068f35f  PUSH 0x774508
  0068f364  LEA ECX,[EBP + 0xfffff890]
  0068f36a  CALL 0x004054a0    ; call FUN_004054a0
  0068f36f  MOV byte ptr [EBP + -0x4],0x4
  0068f373  PUSH 0x7744fc
  0068f378  LEA ECX,[EBP + 0xfffff8a8]
  0068f37e  CALL 0x004054a0    ; call FUN_004054a0
  0068f383  MOV byte ptr [EBP + -0x4],0x5
  0068f387  PUSH 0x774550
  0068f38c  LEA ECX,[EBP + 0xfffff8c0]
  0068f392  CALL 0x004054a0    ; call FUN_004054a0
  0068f397  MOV byte ptr [EBP + -0x4],0x6
  0068f39b  PUSH 0x774544
  0068f3a0  LEA ECX,[EBP + 0xfffff8d8]
  0068f3a6  CALL 0x004054a0    ; call FUN_004054a0
  0068f3ab  MOV byte ptr [EBP + -0x4],0x7
  0068f3af  PUSH 0x774538
  0068f3b4  LEA ECX,[EBP + 0xfffff8f0]
  0068f3ba  CALL 0x004054a0    ; call FUN_004054a0
  0068f3bf  MOV byte ptr [EBP + -0x4],0x8
  0068f3c3  PUSH 0x77452c
  0068f3c8  LEA ECX,[EBP + 0xfffff908]
  0068f3ce  CALL 0x004054a0    ; call FUN_004054a0
  0068f3d3  MOV byte ptr [EBP + -0x4],0x9
  0068f3d7  PUSH 0x774588
  0068f3dc  LEA ECX,[EBP + 0xfffff920]
  0068f3e2  CALL 0x004054a0    ; call FUN_004054a0
  0068f3e7  MOV byte ptr [EBP + -0x4],0xa
  0068f3eb  PUSH 0x77457c
  0068f3f0  LEA ECX,[EBP + 0xfffff938]
  0068f3f6  CALL 0x004054a0    ; call FUN_004054a0
  0068f3fb  MOV byte ptr [EBP + -0x4],0xb
  0068f3ff  PUSH 0x774570
  0068f404  LEA ECX,[EBP + 0xfffff950]
  0068f40a  CALL 0x004054a0    ; call FUN_004054a0
  0068f40f  MOV byte ptr [EBP + -0x4],0xc
  0068f413  PUSH 0x774560
  0068f418  LEA ECX,[EBP + 0xfffff968]
  0068f41e  CALL 0x004054a0    ; call FUN_004054a0
  0068f423  MOV byte ptr [EBP + -0x4],0xd
  0068f427  PUSH 0x7745c0
  0068f42c  LEA ECX,[EBP + 0xfffff980]
  0068f432  CALL 0x004054a0    ; call FUN_004054a0
  0068f437  MOV dword ptr [EBP + -0x4],0xe
  0068f43e  MOV dword ptr [EBP + 0xffffdbe4],0x78
  0068f448  LEA ECX,[EBP + 0xffffdbe4]
  0068f44e  PUSH ECX
  0068f44f  MOV ECX,0x7ca6e8
  0068f454  CALL 0x004051c0    ; call FUN_004051c0
  0068f459  MOV dword ptr [EBP + 0xffffe224],EAX
  0068f45f  MOV ECX,dword ptr [EBP + 0xffffe224]
  0068f465  CALL 0x004018d0    ; call FUN_004018d0
  0068f46a  MOV dword ptr [EBP + 0xffffe478],EAX
  0068f470  MOV ECX,dword ptr [EBP + 0xffffe224]
  0068f476  CALL 0x004018b0    ; call FUN_004018b0
  0068f47b  MOV dword ptr [EBP + 0xffffdbe0],EAX
  0068f481  JMP 0x0068f492
LAB_0068f483:
  0068f483  MOV EDX,dword ptr [EBP + 0xffffe478]
  0068f489  ADD EDX,0x4
  0068f48c  MOV dword ptr [EBP + 0xffffe478],EDX
LAB_0068f492:
  0068f492  MOV EAX,dword ptr [EBP + 0xffffe478]
  0068f498  CMP EAX,dword ptr [EBP + 0xffffdbe0]
  0068f49e  JZ 0x0068f59c
  0068f4a4  MOV ECX,dword ptr [EBP + 0xffffe478]
  0068f4aa  MOV dword ptr [EBP + 0xffffe58c],ECX
  0068f4b0  PUSH 0x7745ac
  0068f4b5  MOV EDX,dword ptr [EBP + 0xffffe58c]
  0068f4bb  MOV EAX,dword ptr [EDX]
  0068f4bd  ADD EAX,0x1c
  0068f4c0  PUSH EAX
  0068f4c1  CALL 0x00427c60    ; call FUN_00427c60
  0068f4c6  ADD ESP,0x8
  0068f4c9  MOVZX ECX,AL
  0068f4cc  TEST ECX,ECX
  0068f4ce  JZ 0x0068f50d
  0068f4d0  MOV EDX,dword ptr [EBP + 0xffffe58c]
  0068f4d6  MOV EAX,dword ptr [EDX]
  0068f4d8  MOVZX ECX,byte ptr [EAX + 0x51]
  0068f4dc  TEST ECX,ECX
  0068f4de  JNZ 0x0068f4f5
  0068f4e0  MOV EDX,dword ptr [EBP + 0xffffe58c]
  0068f4e6  MOV EAX,dword ptr [EDX]
  0068f4e8  MOV byte ptr [EAX + 0x51],0x1
  0068f4ec  MOV byte ptr [EBP + 0xffffe56a],0x1
  0068f4f3  JMP 0x0068f508
LAB_0068f4f5:
  0068f4f5  MOV ECX,dword ptr [EBP + 0xffffe58c]
  0068f4fb  MOV EDX,dword ptr [ECX]
  0068f4fd  MOV byte ptr [EDX + 0x51],0x0
  0068f501  MOV byte ptr [EBP + 0xffffe56a],0x0
LAB_0068f508:
  0068f508  JMP 0x0068f597
LAB_0068f50d:
  0068f50d  MOV dword ptr [EBP + 0xffffe47c],0x0
  0068f517  JMP 0x0068f528
LAB_0068f519:
  0068f519  MOV EAX,dword ptr [EBP + 0xffffe47c]
  0068f51f  ADD EAX,0x1
  0068f522  MOV dword ptr [EBP + 0xffffe47c],EAX
LAB_0068f528:
  0068f528  CMP dword ptr [EBP + 0xffffe47c],0xf
  0068f52f  JGE 0x0068f597
  0068f531  IMUL ECX,dword ptr [EBP + 0xffffe47c],0x18
  0068f538  LEA EDX,[EBP + ECX*0x1 + 0xfffff830]
  0068f53f  PUSH EDX
  0068f540  MOV EAX,dword ptr [EBP + 0xffffe58c]
  0068f546  MOV ECX,dword ptr [EAX]
  0068f548  ADD ECX,0x1c
  0068f54b  PUSH ECX
  0068f54c  CALL 0x0040e2d0    ; call destroy<>
  0068f551  ADD ESP,0x8
  0068f554  MOVZX EDX,AL
  0068f557  TEST EDX,EDX
  0068f559  JZ 0x0068f595
  0068f55b  MOV EAX,dword ptr [EBP + 0xffffe58c]
  0068f561  MOV ECX,dword ptr [EAX]
  0068f563  MOVZX EDX,byte ptr [ECX + 0x51]
  0068f567  TEST EDX,EDX
  0068f569  JNZ 0x0068f580
  0068f56b  MOV EAX,dword ptr [EBP + 0xffffe58c]
  0068f571  MOV ECX,dword ptr [EAX]
  0068f573  MOV byte ptr [ECX + 0x51],0x1
  0068f577  MOV byte ptr [EBP + 0xffffe56d],0x1
  0068f57e  JMP 0x0068f593
LAB_0068f580:
  0068f580  MOV EDX,dword ptr [EBP + 0xffffe58c]
  0068f586  MOV EAX,dword ptr [EDX]
  0068f588  MOV byte ptr [EAX + 0x51],0x0
  0068f58c  MOV byte ptr [EBP + 0xffffe56d],0x0
LAB_0068f593:
  0068f593  JMP 0x0068f597
LAB_0068f595:
  0068f595  JMP 0x0068f519
LAB_0068f597:
  0068f597  JMP 0x0068f483
LAB_0068f59c:
  0068f59c  MOV dword ptr [EBP + -0x4],0xffffffff
  0068f5a3  PUSH 0x4053c0
  0068f5a8  PUSH 0xf
  0068f5aa  PUSH 0x18
  0068f5ac  LEA ECX,[EBP + 0xfffff830]
  0068f5b2  PUSH ECX
  0068f5b3  CALL 0x006e4c9f    ; call `eh_vector_destructor_iterator'
  0068f5b8  NOP
  0068f5b9  JMP 0x0069e6d6
LAB_0068f5db:
  0068f5db  PUSH 0x7745a0
  0068f5e0  LEA ECX,[EBP + 0xfffff998]
  0068f5e6  CALL 0x004054a0    ; call FUN_004054a0
  0068f5eb  MOV dword ptr [EBP + -0x4],0xf
  0068f5f2  PUSH 0x774594
  0068f5f7  LEA ECX,[EBP + 0xfffff9b0]
  0068f5fd  CALL 0x004054a0    ; call FUN_004054a0
  0068f602  MOV byte ptr [EBP + -0x4],0x10
  0068f606  PUSH 0x7745ec
  0068f60b  LEA ECX,[EBP + 0xfffff9c8]
  0068f611  CALL 0x004054a0    ; call FUN_004054a0
  0068f616  MOV byte ptr [EBP + -0x4],0x11
  0068f61a  PUSH 0x7745e0
  0068f61f  LEA ECX,[EBP + 0xfffff9e0]
  0068f625  CALL 0x004054a0    ; call FUN_004054a0
  0068f62a  MOV byte ptr [EBP + -0x4],0x12
  0068f62e  PUSH 0x7745d4
  0068f633  LEA ECX,[EBP + 0xfffff9f8]
  0068f639  CALL 0x004054a0    ; call FUN_004054a0
  0068f63e  MOV byte ptr [EBP + -0x4],0x13
  0068f642  PUSH 0x7745c8
  0068f647  LEA ECX,[EBP + 0xfffffa10]
  0068f64d  CALL 0x004054a0    ; call FUN_004054a0
  0068f652  MOV byte ptr [EBP + -0x4],0x14
  0068f656  PUSH 0x77461c
  0068f65b  LEA ECX,[EBP + 0xfffffa28]
  0068f661  CALL 0x004054a0    ; call FUN_004054a0
  0068f666  MOV byte ptr [EBP + -0x4],0x15
  0068f66a  PUSH 0x774610
  0068f66f  LEA ECX,[EBP + 0xfffffa40]
  0068f675  CALL 0x004054a0    ; call FUN_004054a0
  0068f67a  MOV byte ptr [EBP + -0x4],0x16
  0068f67e  PUSH 0x774604
  0068f683  LEA ECX,[EBP + 0xfffffa58]
  0068f689  CALL 0x004054a0    ; call FUN_004054a0
  0068f68e  MOV byte ptr [EBP + -0x4],0x17
  0068f692  PUSH 0x7745f8
  0068f697  LEA ECX,[EBP + 0xfffffa70]
  0068f69d  CALL 0x004054a0    ; call FUN_004054a0
  0068f6a2  MOV byte ptr [EBP + -0x4],0x18
  0068f6a6  PUSH 0x774654
  0068f6ab  LEA ECX,[EBP + 0xfffffa88]
  0068f6b1  CALL 0x004054a0    ; call FUN_004054a0
  0068f6b6  MOV byte ptr [EBP + -0x4],0x19
  0068f6ba  PUSH 0x774648
  0068f6bf  LEA ECX,[EBP + 0xfffffaa0]
  0068f6c5  CALL 0x004054a0    ; call FUN_004054a0
  0068f6ca  MOV byte ptr [EBP + -0x4],0x1a
  0068f6ce  PUSH 0x77463c
  0068f6d3  LEA ECX,[EBP + 0xfffffab8]
  0068f6d9  CALL 0x004054a0    ; call FUN_004054a0
  0068f6de  MOV byte ptr [EBP + -0x4],0x1b
  0068f6e2  PUSH 0x77462c
  0068f6e7  LEA ECX,[EBP + 0xfffffad0]
  0068f6ed  CALL 0x004054a0    ; call FUN_004054a0
  0068f6f2  MOV byte ptr [EBP + -0x4],0x1c
  0068f6f6  PUSH 0x7746b8
  0068f6fb  LEA ECX,[EBP + 0xfffffae8]
  0068f701  CALL 0x004054a0    ; call FUN_004054a0
  0068f706  MOV dword ptr [EBP + -0x4],0x1d
  0068f70d  MOV EAX,dword ptr [EBP + 0xc]
  0068f710  MOV dword ptr [EBP + 0xffffe2c4],EAX
  0068f716  MOV dword ptr [EBP + 0xffffdbdc],0x78
  0068f720  LEA ECX,[EBP + 0xffffdbdc]
  0068f726  PUSH ECX
  0068f727  MOV ECX,0x7ca6e8
  0068f72c  CALL 0x004051c0    ; call FUN_004051c0
  0068f731  MOV dword ptr [EBP + 0xffffe290],EAX
  0068f737  MOV ECX,dword ptr [EBP + 0xffffe290]
  0068f73d  CALL 0x004018d0    ; call FUN_004018d0
  0068f742  MOV dword ptr [EBP + 0xffffe480],EAX
  0068f748  MOV ECX,dword ptr [EBP + 0xffffe290]
  0068f74e  CALL 0x004018b0    ; call FUN_004018b0
  0068f753  MOV dword ptr [EBP + 0xffffdbd8],EAX
  0068f759  JMP 0x0068f76a
LAB_0068f75b:
  0068f75b  MOV EDX,dword ptr [EBP + 0xffffe480]
  0068f761  ADD EDX,0x4
  0068f764  MOV dword ptr [EBP + 0xffffe480],EDX
LAB_0068f76a:
  0068f76a  MOV EAX,dword ptr [EBP + 0xffffe480]
  0068f770  CMP EAX,dword ptr [EBP + 0xffffdbd8]
  0068f776  JZ 0x0068f8ea
  0068f77c  MOV ECX,dword ptr [EBP + 0xffffe480]
  0068f782  MOV dword ptr [EBP + 0xffffe3cc],ECX
  0068f788  PUSH 0x7746a0
  0068f78d  MOV EDX,dword ptr [EBP + 0xffffe3cc]
  0068f793  MOV EAX,dword ptr [EDX]
  0068f795  ADD EAX,0x1c
  0068f798  PUSH EAX
  0068f799  CALL 0x00427c60    ; call FUN_00427c60
  0068f79e  ADD ESP,0x8
  0068f7a1  MOVZX ECX,AL
  0068f7a4  TEST ECX,ECX
  0068f7a6  JZ 0x0068f8e5
  0068f7ac  MOV EDX,dword ptr [EBP + 0xffffe2c4]
  0068f7b2  ADD EDX,0xa4c
  0068f7b8  PUSH EDX
  0068f7b9  MOV EAX,dword ptr [EBP + 0xffffe3cc]
  0068f7bf  MOV ECX,dword ptr [EAX]
  0068f7c1  ADD ECX,0xa4c
  0068f7c7  CALL 0x0040d840    ; call FUN_0040d840
  0068f7cc  MOV ECX,dword ptr [EBP + 0xffffe3cc]
  0068f7d2  MOV ECX,dword ptr [ECX]
  0068f7d4  ADD ECX,0xa3c
  0068f7da  CALL 0x0040b190    ; call ReleaseDocSite
  0068f7df  NOP
  0068f7e0  MOV dword ptr [EBP + 0xffffdbd4],0x78
  0068f7ea  LEA EDX,[EBP + 0xffffdbd4]
  0068f7f0  PUSH EDX
  0068f7f1  MOV ECX,0x7ca6e8
  0068f7f6  CALL 0x004051c0    ; call FUN_004051c0
  0068f7fb  MOV dword ptr [EBP + 0xffffe294],EAX
  0068f801  MOV ECX,dword ptr [EBP + 0xffffe294]
  0068f807  CALL 0x004018d0    ; call FUN_004018d0
  0068f80c  MOV dword ptr [EBP + 0xffffe484],EAX
  0068f812  MOV ECX,dword ptr [EBP + 0xffffe294]
  0068f818  CALL 0x004018b0    ; call FUN_004018b0
  0068f81d  MOV dword ptr [EBP + 0xffffdbd0],EAX
  0068f823  JMP 0x0068f834
LAB_0068f825:
  0068f825  MOV EAX,dword ptr [EBP + 0xffffe484]
  0068f82b  ADD EAX,0x4
  0068f82e  MOV dword ptr [EBP + 0xffffe484],EAX
LAB_0068f834:
  0068f834  MOV ECX,dword ptr [EBP + 0xffffe484]
  0068f83a  CMP ECX,dword ptr [EBP + 0xffffdbd0]
  0068f840  JZ 0x0068f8e3
  0068f846  MOV EDX,dword ptr [EBP + 0xffffe484]
  0068f84c  MOV dword ptr [EBP + 0xffffe48c],EDX
  0068f852  PUSH 0x77468c
  0068f857  MOV EAX,dword ptr [EBP + 0xffffe48c]
  0068f85d  MOV ECX,dword ptr [EAX]
  0068f85f  ADD ECX,0x1c
  0068f862  PUSH ECX
  0068f863  CALL 0x00427c60    ; call FUN_00427c60
  0068f868  ADD ESP,0x8
  0068f86b  MOVZX EDX,AL
  0068f86e  TEST EDX,EDX
  0068f870  JZ 0x0068f880
  0068f872  MOV EAX,dword ptr [EBP + 0xffffe48c]
  0068f878  MOV ECX,dword ptr [EAX]
  0068f87a  MOV byte ptr [ECX + 0x51],0x0
  0068f87e  JMP 0x0068f8de
LAB_0068f880:
  0068f880  MOV dword ptr [EBP + 0xffffe488],0x0
  0068f88a  JMP 0x0068f89b
LAB_0068f88c:
  0068f88c  MOV EDX,dword ptr [EBP + 0xffffe488]
  0068f892  ADD EDX,0x1
  0068f895  MOV dword ptr [EBP + 0xffffe488],EDX
LAB_0068f89b:
  0068f89b  CMP dword ptr [EBP + 0xffffe488],0xf
  0068f8a2  JGE 0x0068f8de
  0068f8a4  IMUL EAX,dword ptr [EBP + 0xffffe488],0x18
  0068f8ab  LEA ECX,[EBP + EAX*0x1 + 0xfffff998]
  0068f8b2  PUSH ECX
  0068f8b3  MOV EDX,dword ptr [EBP + 0xffffe48c]
  0068f8b9  MOV EAX,dword ptr [EDX]
  0068f8bb  ADD EAX,0x1c
  0068f8be  PUSH EAX
  0068f8bf  CALL 0x0040e2d0    ; call destroy<>
  0068f8c4  ADD ESP,0x8
  0068f8c7  MOVZX ECX,AL
  0068f8ca  TEST ECX,ECX
  0068f8cc  JZ 0x0068f8dc
  0068f8ce  MOV EDX,dword ptr [EBP + 0xffffe48c]
  0068f8d4  MOV EAX,dword ptr [EDX]
  0068f8d6  MOV byte ptr [EAX + 0x51],0x0
  0068f8da  JMP 0x0068f8de
LAB_0068f8dc:
  0068f8dc  JMP 0x0068f88c
LAB_0068f8de:
  0068f8de  JMP 0x0068f825
LAB_0068f8e3:
  0068f8e3  JMP 0x0068f8ea
LAB_0068f8e5:
  0068f8e5  JMP 0x0068f75b
LAB_0068f8ea:
  0068f8ea  MOV dword ptr [EBP + 0xffffdbcc],0x78
  0068f8f4  LEA ECX,[EBP + 0xffffdbcc]
  0068f8fa  PUSH ECX
  0068f8fb  MOV ECX,0x7ca6e8
  0068f900  CALL 0x004051c0    ; call FUN_004051c0
  0068f905  MOV dword ptr [EBP + 0xffffe2ac],EAX
  0068f90b  MOV ECX,dword ptr [EBP + 0xffffe2ac]
  0068f911  CALL 0x004018d0    ; call FUN_004018d0
  0068f916  MOV dword ptr [EBP + 0xffffe490],EAX
  0068f91c  MOV ECX,dword ptr [EBP + 0xffffe2ac]
  0068f922  CALL 0x004018b0    ; call FUN_004018b0
  0068f927  MOV dword ptr [EBP + 0xffffdbc8],EAX
  0068f92d  JMP 0x0068f93e
LAB_0068f92f:
  0068f92f  MOV EDX,dword ptr [EBP + 0xffffe490]
  0068f935  ADD EDX,0x4
  0068f938  MOV dword ptr [EBP + 0xffffe490],EDX
LAB_0068f93e:
  0068f93e  MOV EAX,dword ptr [EBP + 0xffffe490]
  0068f944  CMP EAX,dword ptr [EBP + 0xffffdbc8]
  0068f94a  JZ 0x0068ff3c
  0068f950  MOV ECX,dword ptr [EBP + 0xffffe490]
  0068f956  MOV dword ptr [EBP + 0xffffe618],ECX
  0068f95c  MOV EDX,dword ptr [EBP + 0xffffe618]
  0068f962  MOV ECX,dword ptr [EDX]
  0068f964  ADD ECX,0x9c4
  0068f96a  CALL 0x0040d500    ; call FUN_0040d500
  0068f96f  MOVZX EAX,AL
  0068f972  TEST EAX,EAX
  0068f974  JNZ 0x0068ff37
  0068f97a  LEA ECX,[EBP + 0xffffd6d8]
  0068f980  PUSH ECX
  0068f981  MOV EDX,dword ptr [EBP + 0xffffe618]
  0068f987  MOV ECX,dword ptr [EDX]
  0068f989  ADD ECX,0x9c4
  0068f98f  CALL 0x00402170    ; call FUN_00402170
  0068f994  PUSH EAX
  0068f995  MOV EAX,dword ptr [EBP + 0xffffe2c4]
  0068f99b  ADD EAX,0xa4c
  0068f9a0  PUSH EAX
  0068f9a1  LEA ECX,[EBP + 0xffffd6d4]
  0068f9a7  PUSH ECX
  0068f9a8  MOV EDX,dword ptr [EBP + 0xffffe618]
  0068f9ae  MOV ECX,dword ptr [EDX]
  0068f9b0  ADD ECX,0x9c4
  0068f9b6  CALL 0x00402170    ; call FUN_00402170
  0068f9bb  MOV EAX,dword ptr [EAX]
  0068f9bd  PUSH EAX
  0068f9be  LEA ECX,[EBP + 0xffffd6d0]
  0068f9c4  PUSH ECX
  0068f9c5  MOV EDX,dword ptr [EBP + 0xffffe618]
  0068f9cb  MOV ECX,dword ptr [EDX]
  0068f9cd  ADD ECX,0x9c4
  0068f9d3  CALL 0x004021b0    ; call FUN_004021b0
  0068f9d8  MOV EAX,dword ptr [EAX]
  0068f9da  PUSH EAX
  0068f9db  LEA ECX,[EBP + 0xffffd6cc]
  0068f9e1  PUSH ECX
  0068f9e2  CALL 0x0048ce10    ; call FUN_0048ce10
  0068f9e7  ADD ESP,0x10
  0068f9ea  MOV ECX,EAX
  0068f9ec  CALL 0x00426ed0    ; call FUN_00426ed0
  0068f9f1  MOVZX EDX,AL
  0068f9f4  TEST EDX,EDX
  0068f9f6  JZ 0x0068fed1
  0068f9fc  MOV EAX,dword ptr [EBP + 0xffffe618]
  0068fa02  MOV ECX,dword ptr [EAX]
  0068fa04  ADD ECX,0x82c
  0068fa0a  CALL 0x0040e1c0    ; call FUN_0040e1c0
  0068fa0f  MOVZX ECX,AL
  0068fa12  TEST ECX,ECX
  0068fa14  JNZ 0x0068fa67
  0068fa16  PUSH 0x1
  0068fa18  PUSH 0x0
  0068fa1a  LEA EDX,[EBP + 0xffffd4d4]
  0068fa20  PUSH EDX
  0068fa21  MOV EAX,dword ptr [EBP + 0xffffe618]
  0068fa27  MOV ECX,dword ptr [EAX]
  0068fa29  ADD ECX,0x82c
  0068fa2f  CALL 0x004019a0    ; call FUN_004019a0
  0068fa34  MOV ECX,EAX
  0068fa36  CALL 0x00401790    ; call FUN_00401790
  0068fa3b  NOP
  0068fa3c  PUSH 0x1
  0068fa3e  PUSH 0x1
  0068fa40  LEA ECX,[EBP + 0xffffd4cc]
  0068fa46  PUSH ECX
  0068fa47  MOV EDX,dword ptr [EBP + 0xffffe618]
  0068fa4d  MOV ECX,dword ptr [EDX]
  0068fa4f  ADD ECX,0x82c
  0068fa55  CALL 0x004019a0    ; call FUN_004019a0
  0068fa5a  MOV ECX,EAX
  0068fa5c  CALL 0x00401790    ; call FUN_00401790
  0068fa61  NOP
  0068fa62  JMP 0x0068fecf
LAB_0068fa67:
  0068fa67  PUSH 0x1
  0068fa69  PUSH 0x2
  0068fa6b  MOV EAX,dword ptr [EBP + 0xffffe618]
  0068fa71  MOV ECX,dword ptr [EAX]
  0068fa73  ADD ECX,0x82c
  0068fa79  CALL 0x0040d3c0    ; call FUN_0040d3c0
  0068fa7e  PUSH 0x2
  0068fa80  MOV ECX,dword ptr [EBP + 0xffffe618]
  0068fa86  MOV ECX,dword ptr [ECX]
  0068fa88  ADD ECX,0x83c
  0068fa8e  CALL 0x0040d4e0    ; call FUN_0040d4e0
  0068fa93  PUSH 0x2
  0068fa95  PUSH 0x0
  0068fa97  MOV EDX,dword ptr [EBP + 0xffffe618]
  0068fa9d  MOV ECX,dword ptr [EDX]
  0068fa9f  ADD ECX,0x83c
  0068faa5  CALL 0x0040d4b0    ; call FUN_0040d4b0
  0068faaa  ADD EAX,0x34
  0068faad  MOV ECX,EAX
  0068faaf  CALL 0x0040d730    ; call FUN_0040d730
  0068fab4  PUSH 0x774660    ; "sprite/interface/minimap_minimap_town.img"
  0068fab9  PUSH 0x0
  0068fabb  PUSH 0x0
  0068fabd  MOV EAX,dword ptr [EBP + 0xffffe618]
  0068fac3  MOV ECX,dword ptr [EAX]
  0068fac5  ADD ECX,0x83c
  0068facb  CALL 0x0040d4b0    ; call FUN_0040d4b0
  0068fad0  ADD EAX,0x34
  0068fad3  MOV ECX,EAX
  0068fad5  CALL 0x0040d680    ; call FUN_0040d680
  0068fada  ADD EAX,0x8
  0068fadd  MOV ECX,EAX
  0068fadf  CALL 0x004053a0    ; call FUN_004053a0
  0068fae4  PUSH 0x0
  0068fae6  PUSH 0x0
  0068fae8  MOV ECX,dword ptr [EBP + 0xffffe618]
  0068faee  MOV ECX,dword ptr [ECX]
  0068faf0  ADD ECX,0x83c
  0068faf6  CALL 0x0040d4b0    ; call FUN_0040d4b0
  0068fafb  ADD EAX,0x34
  0068fafe  MOV ECX,EAX
  0068fb00  CALL 0x0040d680    ; call FUN_0040d680
  0068fb05  MOV byte ptr [EAX + 0x20],0xd
  0068fb09  PUSH 0x0
  0068fb0b  PUSH 0x0
  0068fb0d  MOV EDX,dword ptr [EBP + 0xffffe618]
  0068fb13  MOV ECX,dword ptr [EDX]
  0068fb15  ADD ECX,0x83c
  0068fb1b  CALL 0x0040d4b0    ; call FUN_0040d4b0
  0068fb20  ADD EAX,0x34
  0068fb23  MOV ECX,EAX
  0068fb25  CALL 0x0040d680    ; call FUN_0040d680
  0068fb2a  MOV dword ptr [EAX + 0x24],0xfffffffc
  0068fb31  PUSH 0x0
  0068fb33  PUSH 0x0
  0068fb35  MOV EAX,dword ptr [EBP + 0xffffe618]
  0068fb3b  MOV ECX,dword ptr [EAX]
  0068fb3d  ADD ECX,0x83c
  0068fb43  CALL 0x0040d4b0    ; call FUN_0040d4b0
  0068fb48  ADD EAX,0x34
  0068fb4b  MOV ECX,EAX
  0068fb4d  CALL 0x0040d680    ; call FUN_0040d680
  0068fb52  MOV dword ptr [EAX + 0x28],0xfffffff0
  0068fb59  PUSH 0x0
  0068fb5b  PUSH 0x0
  0068fb5d  MOV ECX,dword ptr [EBP + 0xffffe618]
  0068fb63  MOV ECX,dword ptr [ECX]
  0068fb65  ADD ECX,0x83c
  0068fb6b  CALL 0x0040d4b0    ; call FUN_0040d4b0
  0068fb70  ADD EAX,0x34
  0068fb73  MOV ECX,EAX
  0068fb75  CALL 0x0040d680    ; call FUN_0040d680
  0068fb7a  MOV dword ptr [EAX + 0x44],0xfa
  0068fb81  PUSH 0x0
  0068fb83  PUSH 0x0
  0068fb85  MOV EDX,dword ptr [EBP + 0xffffe618]
  0068fb8b  MOV ECX,dword ptr [EDX]
  0068fb8d  ADD ECX,0x83c
  0068fb93  CALL 0x0040d4b0    ; call FUN_0040d4b0
  0068fb98  ADD EAX,0x34
  0068fb9b  MOV ECX,EAX
  0068fb9d  CALL 0x0040d680    ; call FUN_0040d680
  0068fba2  MOV byte ptr [EAX + 0x3d],0x3
  0068fba6  PUSH 0x774730    ; "sprite/interface/minimap_minimap_town.img"
  0068fbab  PUSH 0x1
  0068fbad  PUSH 0x0
  0068fbaf  MOV EAX,dword ptr [EBP + 0xffffe618]
  0068fbb5  MOV ECX,dword ptr [EAX]
  0068fbb7  ADD ECX,0x83c
  0068fbbd  CALL 0x0040d4b0    ; call FUN_0040d4b0
  0068fbc2  ADD EAX,0x34
  0068fbc5  MOV ECX,EAX
  0068fbc7  CALL 0x0040d680    ; call FUN_0040d680
  0068fbcc  ADD EAX,0x8
  0068fbcf  MOV ECX,EAX
  0068fbd1  CALL 0x004053a0    ; call FUN_004053a0
  0068fbd6  PUSH 0x1
  0068fbd8  PUSH 0x0
  0068fbda  MOV ECX,dword ptr [EBP + 0xffffe618]
  0068fbe0  MOV ECX,dword ptr [ECX]
  0068fbe2  ADD ECX,0x83c
  0068fbe8  CALL 0x0040d4b0    ; call FUN_0040d4b0
  0068fbed  ADD EAX,0x34
  0068fbf0  MOV ECX,EAX
  0068fbf2  CALL 0x0040d680    ; call FUN_0040d680
  0068fbf7  MOV byte ptr [EAX + 0x20],0xf
  0068fbfb  PUSH 0x1
  0068fbfd  PUSH 0x0
  0068fbff  MOV EDX,dword ptr [EBP + 0xffffe618]
  0068fc05  MOV ECX,dword ptr [EDX]
  0068fc07  ADD ECX,0x83c
  0068fc0d  CALL 0x0040d4b0    ; call FUN_0040d4b0
  0068fc12  ADD EAX,0x34
  0068fc15  MOV ECX,EAX
  0068fc17  CALL 0x0040d680    ; call FUN_0040d680
  0068fc1c  MOV dword ptr [EAX + 0x24],0xfffffffc
  0068fc23  PUSH 0x1
  0068fc25  PUSH 0x0
  0068fc27  MOV EAX,dword ptr [EBP + 0xffffe618]
  0068fc2d  MOV ECX,dword ptr [EAX]
  0068fc2f  ADD ECX,0x83c
  0068fc35  CALL 0x0040d4b0    ; call FUN_0040d4b0
  0068fc3a  ADD EAX,0x34
  0068fc3d  MOV ECX,EAX
  0068fc3f  CALL 0x0040d680    ; call FUN_0040d680
  0068fc44  MOV dword ptr [EAX + 0x28],0xfffffff0
  0068fc4b  PUSH 0x1
  0068fc4d  PUSH 0x0
  0068fc4f  MOV ECX,dword ptr [EBP + 0xffffe618]
  0068fc55  MOV ECX,dword ptr [ECX]
  0068fc57  ADD ECX,0x83c
  0068fc5d  CALL 0x0040d4b0    ; call FUN_0040d4b0
  0068fc62  ADD EAX,0x34
  0068fc65  MOV ECX,EAX
  0068fc67  CALL 0x0040d680    ; call FUN_0040d680
  0068fc6c  MOV dword ptr [EAX + 0x44],0xfa
  0068fc73  PUSH 0x1
  0068fc75  PUSH 0x0
  0068fc77  MOV EDX,dword ptr [EBP + 0xffffe618]
  0068fc7d  MOV ECX,dword ptr [EDX]
  0068fc7f  ADD ECX,0x83c
  0068fc85  CALL 0x0040d4b0    ; call FUN_0040d4b0
  0068fc8a  ADD EAX,0x34
  0068fc8d  MOV ECX,EAX
  0068fc8f  CALL 0x0040d680    ; call FUN_0040d680
  0068fc94  MOV byte ptr [EAX + 0x3d],0x3
  0068fc98  PUSH 0x0
  0068fc9a  MOV EAX,dword ptr [EBP + 0xffffe618]
  0068fca0  MOV ECX,dword ptr [EAX]
  0068fca2  ADD ECX,0x83c
  0068fca8  CALL 0x0040d4b0    ; call FUN_0040d4b0
  0068fcad  MOV dword ptr [EAX + 0x8c],0x2
  0068fcb7  PUSH 0x0
  0068fcb9  MOV ECX,dword ptr [EBP + 0xffffe618]
  0068fcbf  MOV ECX,dword ptr [ECX]
  0068fcc1  ADD ECX,0x83c
  0068fcc7  CALL 0x0040d4b0    ; call FUN_0040d4b0
  0068fccc  MOV dword ptr [EAX + 0x84],0x1
  0068fcd6  PUSH 0x2
  0068fcd8  PUSH 0x1
  0068fcda  MOV EDX,dword ptr [EBP + 0xffffe618]
  0068fce0  MOV ECX,dword ptr [EDX]
  0068fce2  ADD ECX,0x83c
  0068fce8  CALL 0x0040d4b0    ; call FUN_0040d4b0
  0068fced  ADD EAX,0x34
  0068fcf0  MOV ECX,EAX
  0068fcf2  CALL 0x0040d730    ; call FUN_0040d730
  0068fcf7  PUSH 0x774704    ; "sprite/interface/minimap_minimap_town.img"
  0068fcfc  PUSH 0x0
  0068fcfe  PUSH 0x1
  0068fd00  MOV EAX,dword ptr [EBP + 0xffffe618]
  0068fd06  MOV ECX,dword ptr [EAX]
  0068fd08  ADD ECX,0x83c
  0068fd0e  CALL 0x0040d4b0    ; call FUN_0040d4b0
  0068fd13  ADD EAX,0x34
  0068fd16  MOV ECX,EAX
  0068fd18  CALL 0x0040d680    ; call FUN_0040d680
  0068fd1d  ADD EAX,0x8
  0068fd20  MOV ECX,EAX
  0068fd22  CALL 0x004053a0    ; call FUN_004053a0
  0068fd27  PUSH 0x0
  0068fd29  PUSH 0x1
  0068fd2b  MOV ECX,dword ptr [EBP + 0xffffe618]
  0068fd31  MOV ECX,dword ptr [ECX]
  0068fd33  ADD ECX,0x83c
  0068fd39  CALL 0x0040d4b0    ; call FUN_0040d4b0
  0068fd3e  ADD EAX,0x34
  0068fd41  MOV ECX,EAX
  0068fd43  CALL 0x0040d680    ; call FUN_0040d680
  0068fd48  MOV byte ptr [EAX + 0x20],0xc
  0068fd4c  PUSH 0x0
  0068fd4e  PUSH 0x1
  0068fd50  MOV EDX,dword ptr [EBP + 0xffffe618]
  0068fd56  MOV ECX,dword ptr [EDX]
  0068fd58  ADD ECX,0x83c
  0068fd5e  CALL 0x0040d4b0    ; call FUN_0040d4b0
  0068fd63  ADD EAX,0x34
  0068fd66  MOV ECX,EAX
  0068fd68  CALL 0x0040d680    ; call FUN_0040d680
  0068fd6d  MOV dword ptr [EAX + 0x24],0xfffffffc
  0068fd74  PUSH 0x0
  0068fd76  PUSH 0x1
  0068fd78  MOV EAX,dword ptr [EBP + 0xffffe618]
  0068fd7e  MOV ECX,dword ptr [EAX]
  0068fd80  ADD ECX,0x83c
  0068fd86  CALL 0x0040d4b0    ; call FUN_0040d4b0
  0068fd8b  ADD EAX,0x34
  0068fd8e  MOV ECX,EAX
  0068fd90  CALL 0x0040d680    ; call FUN_0040d680
  0068fd95  MOV dword ptr [EAX + 0x28],0xfffffff0
  0068fd9c  PUSH 0x0
  0068fd9e  PUSH 0x1
  0068fda0  MOV ECX,dword ptr [EBP + 0xffffe618]
  0068fda6  MOV ECX,dword ptr [ECX]
  0068fda8  ADD ECX,0x83c
  0068fdae  CALL 0x0040d4b0    ; call FUN_0040d4b0
  0068fdb3  ADD EAX,0x34
  0068fdb6  MOV ECX,EAX
  0068fdb8  CALL 0x0040d680    ; call FUN_0040d680
  0068fdbd  MOV dword ptr [EAX + 0x44],0xfa
  0068fdc4  PUSH 0x7746d8    ; "sprite/interface/minimap_minimap_town.img"
  0068fdc9  PUSH 0x1
  0068fdcb  PUSH 0x1
  0068fdcd  MOV EDX,dword ptr [EBP + 0xffffe618]
  0068fdd3  MOV ECX,dword ptr [EDX]
  0068fdd5  ADD ECX,0x83c
  0068fddb  CALL 0x0040d4b0    ; call FUN_0040d4b0
  0068fde0  ADD EAX,0x34
  0068fde3  MOV ECX,EAX
  0068fde5  CALL 0x0040d680    ; call FUN_0040d680
  0068fdea  ADD EAX,0x8
  0068fded  MOV ECX,EAX
  0068fdef  CALL 0x004053a0    ; call FUN_004053a0
  0068fdf4  PUSH 0x1
  0068fdf6  PUSH 0x1
  0068fdf8  MOV EAX,dword ptr [EBP + 0xffffe618]
  0068fdfe  MOV ECX,dword ptr [EAX]
  0068fe00  ADD ECX,0x83c
  0068fe06  CALL 0x0040d4b0    ; call FUN_0040d4b0
  0068fe0b  ADD EAX,0x34
  0068fe0e  MOV ECX,EAX
  0068fe10  CALL 0x0040d680    ; call FUN_0040d680
  0068fe15  MOV byte ptr [EAX + 0x20],0xe
  0068fe19  PUSH 0x1
  0068fe1b  PUSH 0x1
  0068fe1d  MOV ECX,dword ptr [EBP + 0xffffe618]
  0068fe23  MOV ECX,dword ptr [ECX]
  0068fe25  ADD ECX,0x83c
  0068fe2b  CALL 0x0040d4b0    ; call FUN_0040d4b0
  0068fe30  ADD EAX,0x34
  0068fe33  MOV ECX,EAX
  0068fe35  CALL 0x0040d680    ; call FUN_0040d680
  0068fe3a  MOV dword ptr [EAX + 0x24],0xfffffffc
  0068fe41  PUSH 0x1
  0068fe43  PUSH 0x1
  0068fe45  MOV EDX,dword ptr [EBP + 0xffffe618]
  0068fe4b  MOV ECX,dword ptr [EDX]
  0068fe4d  ADD ECX,0x83c
  0068fe53  CALL 0x0040d4b0    ; call FUN_0040d4b0
  0068fe58  ADD EAX,0x34
  0068fe5b  MOV ECX,EAX
  0068fe5d  CALL 0x0040d680    ; call FUN_0040d680
  0068fe62  MOV dword ptr [EAX + 0x28],0xfffffff0
  0068fe69  PUSH 0x1
  0068fe6b  PUSH 0x1
  0068fe6d  MOV EAX,dword ptr [EBP + 0xffffe618]
  0068fe73  MOV ECX,dword ptr [EAX]
  0068fe75  ADD ECX,0x83c
  0068fe7b  CALL 0x0040d4b0    ; call FUN_0040d4b0
  0068fe80  ADD EAX,0x34
  0068fe83  MOV ECX,EAX
  0068fe85  CALL 0x0040d680    ; call FUN_0040d680
  0068fe8a  MOV dword ptr [EAX + 0x44],0xfa
  0068fe91  PUSH 0x1
  0068fe93  MOV ECX,dword ptr [EBP + 0xffffe618]
  0068fe99  MOV ECX,dword ptr [ECX]
  0068fe9b  ADD ECX,0x83c
  0068fea1  CALL 0x0040d4b0    ; call FUN_0040d4b0
  0068fea6  MOV dword ptr [EAX + 0x8c],0x2
  0068feb0  PUSH 0x1
  0068feb2  MOV EDX,dword ptr [EBP + 0xffffe618]
  0068feb8  MOV ECX,dword ptr [EDX]
  0068feba  ADD ECX,0x83c
  0068fec0  CALL 0x0040d4b0    ; call FUN_0040d4b0
  0068fec5  MOV dword ptr [EAX + 0x84],0x1
LAB_0068fecf:
  0068fecf  JMP 0x0068ff37
LAB_0068fed1:
  0068fed1  MOV EAX,dword ptr [EBP + 0xffffe618]
  0068fed7  MOV ECX,dword ptr [EAX]
  0068fed9  ADD ECX,0x82c
  0068fedf  CALL 0x0040e1c0    ; call FUN_0040e1c0
  0068fee4  MOVZX ECX,AL
  0068fee7  TEST ECX,ECX
  0068fee9  JNZ 0x0068ff37
  0068feeb  PUSH 0x0
  0068feed  PUSH 0x0
  0068feef  LEA EDX,[EBP + 0xffffd4c4]
  0068fef5  PUSH EDX
  0068fef6  MOV EAX,dword ptr [EBP + 0xffffe618]
  0068fefc  MOV ECX,dword ptr [EAX]
  0068fefe  ADD ECX,0x82c
  0068ff04  CALL 0x004019a0    ; call FUN_004019a0
  0068ff09  MOV ECX,EAX
  0068ff0b  CALL 0x00401790    ; call FUN_00401790
  0068ff10  NOP
  0068ff11  PUSH 0x0
  0068ff13  PUSH 0x1
  0068ff15  LEA ECX,[EBP + 0xffffd4bc]
  0068ff1b  PUSH ECX
  0068ff1c  MOV EDX,dword ptr [EBP + 0xffffe618]
  0068ff22  MOV ECX,dword ptr [EDX]
  0068ff24  ADD ECX,0x82c
  0068ff2a  CALL 0x004019a0    ; call FUN_004019a0
  0068ff2f  MOV ECX,EAX
  0068ff31  CALL 0x00401790    ; call FUN_00401790
  0068ff36  NOP
LAB_0068ff37:
  0068ff37  JMP 0x0068f92f
LAB_0068ff3c:
  0068ff3c  MOV dword ptr [EBP + -0x4],0xffffffff
  0068ff43  PUSH 0x4053c0
  0068ff48  PUSH 0xf
  0068ff4a  PUSH 0x18
  0068ff4c  LEA EAX,[EBP + 0xfffff998]
  0068ff52  PUSH EAX
  0068ff53  CALL 0x006e4c9f    ; call `eh_vector_destructor_iterator'
  0068ff58  NOP
  0068ff59  JMP 0x0069e6d6
LAB_0068ff7b:
  0068ff7b  PUSH 0x7746c0
  0068ff80  LEA ECX,[EBP + 0xfffffd58]
  0068ff86  CALL 0x004054a0    ; call FUN_004054a0
  0068ff8b  MOV dword ptr [EBP + -0x4],0x1e
  0068ff92  PUSH 0x774790
  0068ff97  LEA ECX,[EBP + 0xfffffd70]
  0068ff9d  CALL 0x004054a0    ; call FUN_004054a0
  0068ffa2  MOV byte ptr [EBP + -0x4],0x1f
  0068ffa6  PUSH 0x77477c
  0068ffab  LEA ECX,[EBP + 0xfffffd88]
  0068ffb1  CALL 0x004054a0    ; call FUN_004054a0
  0068ffb6  MOV byte ptr [EBP + -0x4],0x20
  0068ffba  PUSH 0x77476c
  0068ffbf  LEA ECX,[EBP + 0xfffffda0]
  0068ffc5  CALL 0x004054a0    ; call FUN_004054a0
  0068ffca  MOV byte ptr [EBP + -0x4],0x21
  0068ffce  PUSH 0x77475c
  0068ffd3  LEA ECX,[EBP + 0xfffffdb8]
  0068ffd9  CALL 0x004054a0    ; call FUN_004054a0
  0068ffde  MOV dword ptr [EBP + -0x4],0x22
  0068ffe5  MOV dword ptr [EBP + 0xffffdbc4],0x78
  0068ffef  LEA EDX,[EBP + 0xffffdbc4]
  0068fff5  PUSH EDX
  0068fff6  MOV ECX,0x7ca6e8
  0068fffb  CALL 0x004051c0    ; call FUN_004051c0
  00690000  MOV dword ptr [EBP + 0xffffe2c0],EAX
  00690006  MOV ECX,dword ptr [EBP + 0xffffe2c0]
  0069000c  CALL 0x004018d0    ; call FUN_004018d0
  00690011  MOV dword ptr [EBP + 0xffffe494],EAX
  00690017  MOV ECX,dword ptr [EBP + 0xffffe2c0]
  0069001d  CALL 0x004018b0    ; call FUN_004018b0
  00690022  MOV dword ptr [EBP + 0xffffdbc0],EAX
  00690028  JMP 0x00690039
LAB_0069002a:
  0069002a  MOV EAX,dword ptr [EBP + 0xffffe494]
  00690030  ADD EAX,0x4
  00690033  MOV dword ptr [EBP + 0xffffe494],EAX
LAB_00690039:
  00690039  MOV ECX,dword ptr [EBP + 0xffffe494]
  0069003f  CMP ECX,dword ptr [EBP + 0xffffdbc0]
  00690045  JZ 0x00690143
  0069004b  MOV EDX,dword ptr [EBP + 0xffffe494]
  00690051  MOV dword ptr [EBP + 0xffffe588],EDX
  00690057  PUSH 0x7747dc
  0069005c  MOV EAX,dword ptr [EBP + 0xffffe588]
  00690062  MOV ECX,dword ptr [EAX]
  00690064  ADD ECX,0x1c
  00690067  PUSH ECX
  00690068  CALL 0x00427c60    ; call FUN_00427c60
  0069006d  ADD ESP,0x8
  00690070  MOVZX EDX,AL
  00690073  TEST EDX,EDX
  00690075  JZ 0x006900b4
  00690077  MOV EAX,dword ptr [EBP + 0xffffe588]
  0069007d  MOV ECX,dword ptr [EAX]
  0069007f  MOVZX EDX,byte ptr [ECX + 0x51]
  00690083  TEST EDX,EDX
  00690085  JNZ 0x0069009c
  00690087  MOV EAX,dword ptr [EBP + 0xffffe588]
  0069008d  MOV ECX,dword ptr [EAX]
  0069008f  MOV byte ptr [ECX + 0x51],0x1
  00690093  MOV byte ptr [EBP + 0xffffe56c],0x1
  0069009a  JMP 0x006900af
LAB_0069009c:
  0069009c  MOV EDX,dword ptr [EBP + 0xffffe588]
  006900a2  MOV EAX,dword ptr [EDX]
  006900a4  MOV byte ptr [EAX + 0x51],0x0
  006900a8  MOV byte ptr [EBP + 0xffffe56c],0x0
LAB_006900af:
  006900af  JMP 0x0069013e
LAB_006900b4:
  006900b4  MOV dword ptr [EBP + 0xffffe498],0x0
  006900be  JMP 0x006900cf
LAB_006900c0:
  006900c0  MOV ECX,dword ptr [EBP + 0xffffe498]
  006900c6  ADD ECX,0x1
  006900c9  MOV dword ptr [EBP + 0xffffe498],ECX
LAB_006900cf:
  006900cf  CMP dword ptr [EBP + 0xffffe498],0xf
  006900d6  JGE 0x0069013e
  006900d8  IMUL EDX,dword ptr [EBP + 0xffffe498],0x18
  006900df  LEA EAX,[EBP + EDX*0x1 + 0xfffffd58]
  006900e6  PUSH EAX
  006900e7  MOV ECX,dword ptr [EBP + 0xffffe588]
  006900ed  MOV EDX,dword ptr [ECX]
  006900ef  ADD EDX,0x1c
  006900f2  PUSH EDX
  006900f3  CALL 0x0040e2d0    ; call destroy<>
  006900f8  ADD ESP,0x8
  006900fb  MOVZX EAX,AL
  006900fe  TEST EAX,EAX
  00690100  JZ 0x0069013c
  00690102  MOV ECX,dword ptr [EBP + 0xffffe588]
  00690108  MOV EDX,dword ptr [ECX]
  0069010a  MOVZX EAX,byte ptr [EDX + 0x51]
  0069010e  TEST EAX,EAX
  00690110  JNZ 0x00690127
  00690112  MOV ECX,dword ptr [EBP + 0xffffe588]
  00690118  MOV EDX,dword ptr [ECX]
  0069011a  MOV byte ptr [EDX + 0x51],0x1
  0069011e  MOV byte ptr [EBP + 0xffffe56b],0x1
  00690125  JMP 0x0069013a
LAB_00690127:
  00690127  MOV EAX,dword ptr [EBP + 0xffffe588]
  0069012d  MOV ECX,dword ptr [EAX]
  0069012f  MOV byte ptr [ECX + 0x51],0x0
  00690133  MOV byte ptr [EBP + 0xffffe56b],0x0
LAB_0069013a:
  0069013a  JMP 0x0069013e
LAB_0069013c:
  0069013c  JMP 0x006900c0
LAB_0069013e:
  0069013e  JMP 0x0069002a
LAB_00690143:
  00690143  MOV dword ptr [EBP + -0x4],0xffffffff
  0069014a  PUSH 0x4053c0
  0069014f  PUSH 0x5
  00690151  PUSH 0x18
  00690153  LEA EDX,[EBP + 0xfffffd58]
  00690159  PUSH EDX
  0069015a  CALL 0x006e4c9f    ; call `eh_vector_destructor_iterator'
  0069015f  NOP
  00690160  JMP 0x0069e6d6
LAB_00690182:
  00690182  PUSH 0x7747c4
  00690187  LEA ECX,[EBP + 0xfffffce0]
  0069018d  CALL 0x004054a0    ; call FUN_004054a0
  00690192  MOV dword ptr [EBP + -0x4],0x23
  00690199  PUSH 0x7747b4
  0069019e  LEA ECX,[EBP + 0xfffffcf8]
  006901a4  CALL 0x004054a0    ; call FUN_004054a0
  006901a9  MOV byte ptr [EBP + -0x4],0x24
  006901ad  PUSH 0x7747a0
  006901b2  LEA ECX,[EBP + 0xfffffd10]
  006901b8  CALL 0x004054a0    ; call FUN_004054a0
  006901bd  MOV byte ptr [EBP + -0x4],0x25
  006901c1  PUSH 0x774828
  006901c6  LEA ECX,[EBP + 0xfffffd28]
  006901cc  CALL 0x004054a0    ; call FUN_004054a0
  006901d1  MOV byte ptr [EBP + -0x4],0x26
  006901d5  PUSH 0x774818
  006901da  LEA ECX,[EBP + 0xfffffd40]
  006901e0  CALL 0x004054a0    ; call FUN_004054a0
  006901e5  MOV dword ptr [EBP + -0x4],0x27
  006901ec  MOV ECX,dword ptr [EBP + 0xc]
  006901ef  MOV dword ptr [EBP + 0xffffdbb4],ECX
  006901f5  MOV dword ptr [EBP + 0xffffdbbc],0x78
  006901ff  LEA EDX,[EBP + 0xffffdbbc]
  00690205  PUSH EDX
  00690206  MOV ECX,0x7ca6e8
  0069020b  CALL 0x004051c0    ; call FUN_004051c0
  00690210  MOV dword ptr [EBP + 0xffffe2bc],EAX
  00690216  MOV ECX,dword ptr [EBP + 0xffffe2bc]
  0069021c  CALL 0x004018d0    ; call FUN_004018d0
  00690221  MOV dword ptr [EBP + 0xffffe49c],EAX
  00690227  MOV ECX,dword ptr [EBP + 0xffffe2bc]
  0069022d  CALL 0x004018b0    ; call FUN_004018b0
  00690232  MOV dword ptr [EBP + 0xffffdbb8],EAX
  00690238  JMP 0x00690249
LAB_0069023a:
  0069023a  MOV EAX,dword ptr [EBP + 0xffffe49c]
  00690240  ADD EAX,0x4
  00690243  MOV dword ptr [EBP + 0xffffe49c],EAX
LAB_00690249:
  00690249  MOV ECX,dword ptr [EBP + 0xffffe49c]
  0069024f  CMP ECX,dword ptr [EBP + 0xffffdbb8]
  00690255  JZ 0x006903c8
  0069025b  MOV EDX,dword ptr [EBP + 0xffffe49c]
  00690261  MOV dword ptr [EBP + 0xffffe3b8],EDX
  00690267  PUSH 0x774804
  0069026c  MOV EAX,dword ptr [EBP + 0xffffe3b8]
  00690272  MOV ECX,dword ptr [EAX]
  00690274  ADD ECX,0x1c
  00690277  PUSH ECX
  00690278  CALL 0x00427c60    ; call FUN_00427c60
  0069027d  ADD ESP,0x8
  00690280  MOVZX EDX,AL
  00690283  TEST EDX,EDX
  00690285  JZ 0x006903c3
  0069028b  MOV EAX,dword ptr [EBP + 0xffffdbb4]
  00690291  ADD EAX,0xa4c
  00690296  PUSH EAX
  00690297  MOV ECX,dword ptr [EBP + 0xffffe3b8]
  0069029d  MOV ECX,dword ptr [ECX]
  0069029f  ADD ECX,0xa4c
  006902a5  CALL 0x0040d840    ; call FUN_0040d840
  006902aa  MOV EDX,dword ptr [EBP + 0xffffe3b8]
  006902b0  MOV ECX,dword ptr [EDX]
  006902b2  ADD ECX,0xa3c
  006902b8  CALL 0x0040b190    ; call ReleaseDocSite
  006902bd  NOP
  006902be  MOV dword ptr [EBP + 0xffffdbb0],0x78
  006902c8  LEA EAX,[EBP + 0xffffdbb0]
  006902ce  PUSH EAX
  006902cf  MOV ECX,0x7ca6e8
  006902d4  CALL 0x004051c0    ; call FUN_004051c0
  006902d9  MOV dword ptr [EBP + 0xffffe2b8],EAX
  006902df  MOV ECX,dword ptr [EBP + 0xffffe2b8]
  006902e5  CALL 0x004018d0    ; call FUN_004018d0
  006902ea  MOV dword ptr [EBP + 0xffffe4a4],EAX
  006902f0  MOV ECX,dword ptr [EBP + 0xffffe2b8]
  006902f6  CALL 0x004018b0    ; call FUN_004018b0
  006902fb  MOV dword ptr [EBP + 0xffffdbac],EAX
  00690301  JMP 0x00690312
LAB_00690303:
  00690303  MOV ECX,dword ptr [EBP + 0xffffe4a4]
  00690309  ADD ECX,0x4
  0069030c  MOV dword ptr [EBP + 0xffffe4a4],ECX
LAB_00690312:
  00690312  MOV EDX,dword ptr [EBP + 0xffffe4a4]
  00690318  CMP EDX,dword ptr [EBP + 0xffffdbac]
  0069031e  JZ 0x006903c1
  00690324  MOV EAX,dword ptr [EBP + 0xffffe4a4]
  0069032a  MOV dword ptr [EBP + 0xffffe4ac],EAX
  00690330  PUSH 0x7747f0
  00690335  MOV ECX,dword ptr [EBP + 0xffffe4ac]
  0069033b  MOV EDX,dword ptr [ECX]
  0069033d  ADD EDX,0x1c
  00690340  PUSH EDX
  00690341  CALL 0x00427c60    ; call FUN_00427c60
  00690346  ADD ESP,0x8
  00690349  MOVZX EAX,AL
  0069034c  TEST EAX,EAX
  0069034e  JZ 0x0069035e
  00690350  MOV ECX,dword ptr [EBP + 0xffffe4ac]
  00690356  MOV EDX,dword ptr [ECX]
  00690358  MOV byte ptr [EDX + 0x51],0x0
  0069035c  JMP 0x006903bc
LAB_0069035e:
  0069035e  MOV dword ptr [EBP + 0xffffe4a8],0x0
  00690368  JMP 0x00690379
LAB_0069036a:
  0069036a  MOV EAX,dword ptr [EBP + 0xffffe4a8]
  00690370  ADD EAX,0x1
  00690373  MOV dword ptr [EBP + 0xffffe4a8],EAX
LAB_00690379:
  00690379  CMP dword ptr [EBP + 0xffffe4a8],0xf
  00690380  JGE 0x006903bc
  00690382  IMUL ECX,dword ptr [EBP + 0xffffe4a8],0x18
  00690389  LEA EDX,[EBP + ECX*0x1 + 0xfffffce0]
  00690390  PUSH EDX
  00690391  MOV EAX,dword ptr [EBP + 0xffffe4ac]
  00690397  MOV ECX,dword ptr [EAX]
  00690399  ADD ECX,0x1c
  0069039c  PUSH ECX
  0069039d  CALL 0x0040e2d0    ; call destroy<>
  006903a2  ADD ESP,0x8
  006903a5  MOVZX EDX,AL
  006903a8  TEST EDX,EDX
  006903aa  JZ 0x006903ba
  006903ac  MOV EAX,dword ptr [EBP + 0xffffe4ac]
  006903b2  MOV ECX,dword ptr [EAX]
  006903b4  MOV byte ptr [ECX + 0x51],0x0
  006903b8  JMP 0x006903bc
LAB_006903ba:
  006903ba  JMP 0x0069036a
LAB_006903bc:
  006903bc  JMP 0x00690303
LAB_006903c1:
  006903c1  JMP 0x006903c8
LAB_006903c3:
  006903c3  JMP 0x0069023a
LAB_006903c8:
  006903c8  MOV dword ptr [EBP + -0x4],0xffffffff
  006903cf  PUSH 0x4053c0
  006903d4  PUSH 0x5
  006903d6  PUSH 0x18
  006903d8  LEA EDX,[EBP + 0xfffffce0]
  006903de  PUSH EDX
  006903df  CALL 0x006e4c9f    ; call `eh_vector_destructor_iterator'
  006903e4  NOP
  006903e5  JMP 0x0069e6d6
LAB_00690407:
  00690407  MOV ECX,dword ptr [EBP + 0xc]
  0069040a  MOV dword ptr [ECX + 0x984],0x1869e
  00690414  MOV EDX,0x1869e
  00690419  TEST EDX,EDX
  0069041b  JZ 0x0069055a
  00690421  SUB ESP,0x18
  00690424  MOV ECX,ESP
  00690426  MOV dword ptr [EBP + 0xffffd6c8],ESP
  0069042c  PUSH 0x740702
  00690431  CALL 0x004054a0    ; call FUN_004054a0
  00690436  CALL 0x004c3330    ; call FUN_004c3330
  0069043b  ADD ESP,0x18
  0069043e  CALL 0x00653550    ; call FUN_00653550
  00690443  CALL 0x00653470    ; call FUN_00653470
  00690448  NOP
  00690449  MOV EAX,[0x007ca640]
  0069044e  MOV dword ptr [EBP + 0xffffe2b4],EAX
  00690454  CMP dword ptr [EBP + 0xffffe2b4],0x0
  0069045b  JZ 0x00690472
  0069045d  PUSH 0x1
  0069045f  MOV ECX,dword ptr [EBP + 0xffffe2b4]
  00690465  CALL 0x0069ed00    ; call FUN_0069ed00
  0069046a  MOV dword ptr [EBP + 0xffffdba8],EAX
  00690470  JMP 0x0069047c
LAB_00690472:
  00690472  MOV dword ptr [EBP + 0xffffdba8],0x0
LAB_0069047c:
  0069047c  MOV dword ptr [0x007ca640],0x0
  00690486  MOV ECX,dword ptr [0x007ca1a4]
  0069048c  MOV dword ptr [EBP + 0xffffe28c],ECX
  00690492  CMP dword ptr [EBP + 0xffffe28c],0x0
  00690499  JZ 0x006904b0
  0069049b  PUSH 0x1
  0069049d  MOV ECX,dword ptr [EBP + 0xffffe28c]
  006904a3  CALL 0x0068ddb0    ; call `scalar_deleting_destructor'
  006904a8  MOV dword ptr [EBP + 0xffffdba4],EAX
  006904ae  JMP 0x006904ba
LAB_006904b0:
  006904b0  MOV dword ptr [EBP + 0xffffdba4],0x0
LAB_006904ba:
  006904ba  MOV dword ptr [0x007ca1a4],0x0
  006904c4  MOV EDX,dword ptr [0x007ca230]
  006904ca  MOV dword ptr [EBP + 0xffffe288],EDX
  006904d0  CMP dword ptr [EBP + 0xffffe288],0x0
  006904d7  JZ 0x006904ee
  006904d9  PUSH 0x1
  006904db  MOV ECX,dword ptr [EBP + 0xffffe288]
  006904e1  CALL 0x0069ed40    ; call FUN_0069ed40
  006904e6  MOV dword ptr [EBP + 0xffffdba0],EAX
  006904ec  JMP 0x006904f8
LAB_006904ee:
  006904ee  MOV dword ptr [EBP + 0xffffdba0],0x0
LAB_006904f8:
  006904f8  MOV dword ptr [0x007ca230],0x0
  00690502  MOV EAX,[0x007ca238]
  00690507  MOV dword ptr [EBP + 0xffffe284],EAX
  0069050d  CMP dword ptr [EBP + 0xffffe284],0x0
  00690514  JZ 0x0069052b
  00690516  PUSH 0x1
  00690518  MOV ECX,dword ptr [EBP + 0xffffe284]
  0069051e  CALL 0x0069ed70    ; call FUN_0069ed70
  00690523  MOV dword ptr [EBP + 0xffffdb9c],EAX
  00690529  JMP 0x00690535
LAB_0069052b:
  0069052b  MOV dword ptr [EBP + 0xffffdb9c],0x0
LAB_00690535:
  00690535  MOV dword ptr [0x007ca238],0x0
  0069053f  CALL 0x004d1b80    ; call FUN_004d1b80
  00690544  MOV ECX,dword ptr [0x007ca22c]
  0069054a  PUSH ECX
  0069054b  CALL dword ptr [0x0072b1fc]    ; call DestroyWindow
  00690551  PUSH 0x0
  00690553  CALL dword ptr [0x0072b1f4]    ; call PostQuitMessage
  00690559  NOP
LAB_0069055a:
  0069055a  JMP 0x0069e6d6
LAB_0069055f:
  0069055f  MOV EDX,dword ptr [EBP + 0xc]
  00690562  MOV dword ptr [EBP + 0xffffe584],EDX
  00690568  MOV EAX,dword ptr [EBP + 0xffffe584]
  0069056e  CMP dword ptr [EAX + 0x5c],0x0
  00690572  JZ 0x00690967
  00690578  MOV ECX,dword ptr [EBP + 0xffffe584]
  0069057e  CMP dword ptr [ECX + 0x60],0x0
  00690582  JZ 0x00690967
  00690588  MOV byte ptr [EBP + 0xffffe607],0x0
  0069058f  MOV dword ptr [EBP + 0xffffdb98],0xe
  00690599  SUB ESP,0x18
  0069059c  MOV ECX,ESP
  0069059e  MOV dword ptr [EBP + 0xffffd6c4],ESP
  006905a4  PUSH 0x774848
  006905a9  CALL 0x004054a0    ; call FUN_004054a0
  006905ae  MOV dword ptr [EBP + 0xffffd6c0],EAX
  006905b4  MOV dword ptr [EBP + -0x4],0x28
  006905bb  LEA EDX,[EBP + 0xffffdb98]
  006905c1  PUSH EDX
  006905c2  MOV ECX,0x7ca6e8
  006905c7  CALL 0x004051c0    ; call FUN_004051c0
  006905cc  PUSH EAX
  006905cd  MOV dword ptr [EBP + -0x4],0xffffffff
  006905d4  CALL 0x006ce000    ; call FUN_006ce000
  006905d9  ADD ESP,0x1c
  006905dc  MOV dword ptr [EBP + 0xffffdb94],EAX
  006905e2  CMP dword ptr [EBP + 0xffffdb94],0x0
  006905e9  JZ 0x00690656
  006905eb  MOV dword ptr [EBP + 0xffffdb90],0xe
  006905f5  SUB ESP,0x18
  006905f8  MOV ECX,ESP
  006905fa  MOV dword ptr [EBP + 0xffffd6bc],ESP
  00690600  PUSH 0x774840
  00690605  CALL 0x004054a0    ; call FUN_004054a0
  0069060a  MOV dword ptr [EBP + 0xffffd6b8],EAX
  00690610  MOV dword ptr [EBP + -0x4],0x29
  00690617  LEA EAX,[EBP + 0xffffdb90]
  0069061d  PUSH EAX
  0069061e  MOV ECX,0x7ca6e8
  00690623  CALL 0x004051c0    ; call FUN_004051c0
  00690628  PUSH EAX
  00690629  MOV dword ptr [EBP + -0x4],0xffffffff
  00690630  CALL 0x006ce000    ; call FUN_006ce000
  00690635  ADD ESP,0x1c
  00690638  MOV dword ptr [EBP + 0xffffdb8c],EAX
  0069063e  MOV ECX,dword ptr [EBP + 0xffffdb8c]
  00690644  MOVZX EDX,byte ptr [ECX + 0x9a8]
  0069064b  TEST EDX,EDX
  0069064d  JZ 0x00690656
  0069064f  MOV byte ptr [EBP + 0xffffe607],0x1
LAB_00690656:
  00690656  MOV dword ptr [EBP + 0xffffdb88],0xe
  00690660  SUB ESP,0x18
  00690663  MOV ECX,ESP
  00690665  MOV dword ptr [EBP + 0xffffd6b4],ESP
  0069066b  PUSH 0x774838
  00690670  CALL 0x004054a0    ; call FUN_004054a0
  00690675  MOV dword ptr [EBP + 0xffffd6b0],EAX
  0069067b  MOV dword ptr [EBP + -0x4],0x2a
  00690682  LEA EAX,[EBP + 0xffffdb88]
  00690688  PUSH EAX
  00690689  MOV ECX,0x7ca6e8
  0069068e  CALL 0x004051c0    ; call FUN_004051c0
  00690693  PUSH EAX
  00690694  MOV dword ptr [EBP + -0x4],0xffffffff
  0069069b  CALL 0x006ce000    ; call FUN_006ce000
  006906a0  ADD ESP,0x1c
  006906a3  MOV dword ptr [EBP + 0xffffdb84],EAX
  006906a9  CMP dword ptr [EBP + 0xffffdb84],0x0
  006906b0  JZ 0x0069071d
  006906b2  MOV dword ptr [EBP + 0xffffdb80],0xe
  006906bc  SUB ESP,0x18
  006906bf  MOV ECX,ESP
  006906c1  MOV dword ptr [EBP + 0xffffd6ac],ESP
  006906c7  PUSH 0x774868
  006906cc  CALL 0x004054a0    ; call FUN_004054a0
  006906d1  MOV dword ptr [EBP + 0xffffd6a8],EAX
  006906d7  MOV dword ptr [EBP + -0x4],0x2b
  006906de  LEA ECX,[EBP + 0xffffdb80]
  006906e4  PUSH ECX
  006906e5  MOV ECX,0x7ca6e8
  006906ea  CALL 0x004051c0    ; call FUN_004051c0
  006906ef  PUSH EAX
  006906f0  MOV dword ptr [EBP + -0x4],0xffffffff
  006906f7  CALL 0x006ce000    ; call FUN_006ce000
  006906fc  ADD ESP,0x1c
  006906ff  MOV dword ptr [EBP + 0xffffdb7c],EAX
  00690705  MOV EDX,dword ptr [EBP + 0xffffdb7c]
  0069070b  MOVZX EAX,byte ptr [EDX + 0x9a8]
  00690712  TEST EAX,EAX
  00690714  JZ 0x0069071d
  00690716  MOV byte ptr [EBP + 0xffffe607],0x1
LAB_0069071d:
  0069071d  MOV dword ptr [EBP + 0xffffdb78],0xe
  00690727  SUB ESP,0x18
  0069072a  MOV ECX,ESP
  0069072c  MOV dword ptr [EBP + 0xffffd6a4],ESP
  00690732  PUSH 0x774860
  00690737  CALL 0x004054a0    ; call FUN_004054a0
  0069073c  MOV dword ptr [EBP + 0xffffd6a0],EAX
  00690742  MOV dword ptr [EBP + -0x4],0x2c
  00690749  LEA ECX,[EBP + 0xffffdb78]
  0069074f  PUSH ECX
  00690750  MOV ECX,0x7ca6e8
  00690755  CALL 0x004051c0    ; call FUN_004051c0
  0069075a  PUSH EAX
  0069075b  MOV dword ptr [EBP + -0x4],0xffffffff
  00690762  CALL 0x006ce000    ; call FUN_006ce000
  00690767  ADD ESP,0x1c
  0069076a  MOV dword ptr [EBP + 0xffffdb74],EAX
  00690770  CMP dword ptr [EBP + 0xffffdb74],0x0
  00690777  JZ 0x006907e4
  00690779  MOV dword ptr [EBP + 0xffffdb70],0xe
  00690783  SUB ESP,0x18
  00690786  MOV ECX,ESP
  00690788  MOV dword ptr [EBP + 0xffffd69c],ESP
  0069078e  PUSH 0x774858
  00690793  CALL 0x004054a0    ; call FUN_004054a0
  00690798  MOV dword ptr [EBP + 0xffffd698],EAX
  0069079e  MOV dword ptr [EBP + -0x4],0x2d
  006907a5  LEA EDX,[EBP + 0xffffdb70]
  006907ab  PUSH EDX
  006907ac  MOV ECX,0x7ca6e8
  006907b1  CALL 0x004051c0    ; call FUN_004051c0
  006907b6  PUSH EAX
  006907b7  MOV dword ptr [EBP + -0x4],0xffffffff
  006907be  CALL 0x006ce000    ; call FUN_006ce000
  006907c3  ADD ESP,0x1c
  006907c6  MOV dword ptr [EBP + 0xffffdb6c],EAX
  006907cc  MOV EAX,dword ptr [EBP + 0xffffdb6c]
  006907d2  MOVZX ECX,byte ptr [EAX + 0x9a8]
  006907d9  TEST ECX,ECX
  006907db  JZ 0x006907e4
  006907dd  MOV byte ptr [EBP + 0xffffe607],0x1
LAB_006907e4:
  006907e4  MOV dword ptr [EBP + 0xffffdb68],0xe
  006907ee  SUB ESP,0x18
  006907f1  MOV ECX,ESP
  006907f3  MOV dword ptr [EBP + 0xffffd694],ESP
  006907f9  PUSH 0x774850
  006907fe  CALL 0x004054a0    ; call FUN_004054a0
  00690803  MOV dword ptr [EBP + 0xffffd690],EAX
  00690809  MOV dword ptr [EBP + -0x4],0x2e
  00690810  LEA EDX,[EBP + 0xffffdb68]
  00690816  PUSH EDX
  00690817  MOV ECX,0x7ca6e8
  0069081c  CALL 0x004051c0    ; call FUN_004051c0
  00690821  PUSH EAX
  00690822  MOV dword ptr [EBP + -0x4],0xffffffff
  00690829  CALL 0x006ce000    ; call FUN_006ce000
  0069082e  ADD ESP,0x1c
  00690831  MOV dword ptr [EBP + 0xffffdb64],EAX
  00690837  CMP dword ptr [EBP + 0xffffdb64],0x0
  0069083e  JZ 0x006908ab
  00690840  MOV dword ptr [EBP + 0xffffdb60],0xe
  0069084a  SUB ESP,0x18
  0069084d  MOV ECX,ESP
  0069084f  MOV dword ptr [EBP + 0xffffd68c],ESP
  00690855  PUSH 0x774890
  0069085a  CALL 0x004054a0    ; call FUN_004054a0
  0069085f  MOV dword ptr [EBP + 0xffffd688],EAX
  00690865  MOV dword ptr [EBP + -0x4],0x2f
  0069086c  LEA EAX,[EBP + 0xffffdb60]
  00690872  PUSH EAX
  00690873  MOV ECX,0x7ca6e8
  00690878  CALL 0x004051c0    ; call FUN_004051c0
  0069087d  PUSH EAX
  0069087e  MOV dword ptr [EBP + -0x4],0xffffffff
  00690885  CALL 0x006ce000    ; call FUN_006ce000
  0069088a  ADD ESP,0x1c
  0069088d  MOV dword ptr [EBP + 0xffffdb5c],EAX
  00690893  MOV ECX,dword ptr [EBP + 0xffffdb5c]
  00690899  MOVZX EDX,byte ptr [ECX + 0x9a8]
  006908a0  TEST EDX,EDX
  006908a2  JZ 0x006908ab
  006908a4  MOV byte ptr [EBP + 0xffffe607],0x1
LAB_006908ab:
  006908ab  MOVZX EAX,byte ptr [EBP + 0xffffe607]
  006908b2  TEST EAX,EAX
  006908b4  JNZ 0x00690967
  006908ba  SUB ESP,0x18
  006908bd  MOV ECX,ESP
  006908bf  MOV dword ptr [EBP + 0xffffd684],ESP
  006908c5  PUSH 0x774880    ; "REWARD_OPEN2"
  006908ca  CALL 0x004054a0    ; call FUN_004054a0
  006908cf  CALL 0x004c3570    ; call FUN_004c3570
  006908d4  ADD ESP,0x18
  006908d7  MOV ECX,dword ptr [EBP + 0xffffe584]
  006908dd  MOV byte ptr [ECX + 0x9a8],0x1
  006908e4  MOV EDX,dword ptr [EBP + 0xffffe584]
  006908ea  MOV dword ptr [EDX + 0x4c],0x0
  006908f1  MOV EAX,dword ptr [EBP + 0xffffe584]
  006908f7  MOV dword ptr [EAX + 0x8dc],0x0
  00690901  MOV ECX,dword ptr [EBP + 0xffffe584]
  00690907  ADD ECX,0x880
  0069090d  CALL 0x0040d6a0    ; call FUN_0040d6a0
  00690912  CMP EAX,0x1
  00690915  JBE 0x00690967
  00690917  PUSH 0x1
  00690919  LEA ECX,[EBP + 0xffffd680]
  0069091f  PUSH ECX
  00690920  LEA EDX,[EBP + 0xffffd67c]
  00690926  PUSH EDX
  00690927  MOV ECX,dword ptr [EBP + 0xffffe584]
  0069092d  ADD ECX,0x880
  00690933  CALL 0x00402170    ; call FUN_00402170
  00690938  MOV ECX,EAX
  0069093a  CALL 0x0069f180    ; call FUN_0069f180
  0069093f  MOV EAX,dword ptr [EAX]
  00690941  MOV dword ptr [EBP + 0xffffdb58],EAX
  00690947  MOV ECX,dword ptr [EBP + 0xffffdb58]
  0069094d  PUSH ECX
  0069094e  LEA EDX,[EBP + 0xffffd678]
  00690954  PUSH EDX
  00690955  MOV ECX,dword ptr [EBP + 0xffffe584]
  0069095b  ADD ECX,0x880
  00690961  CALL 0x0069f720    ; call FUN_0069f720
  00690966  NOP
LAB_00690967:
  00690967  JMP 0x0069e6d6
LAB_0069096c:
  0069096c  MOV EAX,dword ptr [EBP + 0xc]
  0069096f  MOV dword ptr [EBP + 0xffffe580],EAX
  00690975  MOV ECX,dword ptr [EBP + 0xffffe580]
  0069097b  CMP dword ptr [ECX + 0x5c],0x0
  0069097f  JZ 0x00690d74
  00690985  MOV EDX,dword ptr [EBP + 0xffffe580]
  0069098b  CMP dword ptr [EDX + 0x60],0x0
  0069098f  JZ 0x00690d74
  00690995  MOV byte ptr [EBP + 0xffffe604],0x0
  0069099c  MOV dword ptr [EBP + 0xffffdb54],0xe
  006909a6  SUB ESP,0x18
  006909a9  MOV ECX,ESP
  006909ab  MOV dword ptr [EBP + 0xffffd674],ESP
  006909b1  PUSH 0x774878
  006909b6  CALL 0x004054a0    ; call FUN_004054a0
  006909bb  MOV dword ptr [EBP + 0xffffd670],EAX
  006909c1  MOV dword ptr [EBP + -0x4],0x30
  006909c8  LEA EAX,[EBP + 0xffffdb54]
  006909ce  PUSH EAX
  006909cf  MOV ECX,0x7ca6e8
  006909d4  CALL 0x004051c0    ; call FUN_004051c0
  006909d9  PUSH EAX
  006909da  MOV dword ptr [EBP + -0x4],0xffffffff
  006909e1  CALL 0x006ce000    ; call FUN_006ce000
  006909e6  ADD ESP,0x1c
  006909e9  MOV dword ptr [EBP + 0xffffdb50],EAX
  006909ef  CMP dword ptr [EBP + 0xffffdb50],0x0
  006909f6  JZ 0x00690a63
  006909f8  MOV dword ptr [EBP + 0xffffdb4c],0xe
  00690a02  SUB ESP,0x18
  00690a05  MOV ECX,ESP
  00690a07  MOV dword ptr [EBP + 0xffffd66c],ESP
  00690a0d  PUSH 0x774870
  00690a12  CALL 0x004054a0    ; call FUN_004054a0
  00690a17  MOV dword ptr [EBP + 0xffffd668],EAX
  00690a1d  MOV dword ptr [EBP + -0x4],0x31
  00690a24  LEA ECX,[EBP + 0xffffdb4c]
  00690a2a  PUSH ECX
  00690a2b  MOV ECX,0x7ca6e8
  00690a30  CALL 0x004051c0    ; call FUN_004051c0
  00690a35  PUSH EAX
  00690a36  MOV dword ptr [EBP + -0x4],0xffffffff
  00690a3d  CALL 0x006ce000    ; call FUN_006ce000
  00690a42  ADD ESP,0x1c
  00690a45  MOV dword ptr [EBP + 0xffffdb48],EAX
  00690a4b  MOV EDX,dword ptr [EBP + 0xffffdb48]
  00690a51  MOVZX EAX,byte ptr [EDX + 0x9a8]
  00690a58  TEST EAX,EAX
  00690a5a  JZ 0x00690a63
  00690a5c  MOV byte ptr [EBP + 0xffffe604],0x1
LAB_00690a63:
  00690a63  MOV dword ptr [EBP + 0xffffdb44],0xe
  00690a6d  SUB ESP,0x18
  00690a70  MOV ECX,ESP
  00690a72  MOV dword ptr [EBP + 0xffffd664],ESP
  00690a78  PUSH 0x7748b0
  00690a7d  CALL 0x004054a0    ; call FUN_004054a0
  00690a82  MOV dword ptr [EBP + 0xffffd660],EAX
  00690a88  MOV dword ptr [EBP + -0x4],0x32
  00690a8f  LEA ECX,[EBP + 0xffffdb44]
  00690a95  PUSH ECX
  00690a96  MOV ECX,0x7ca6e8
  00690a9b  CALL 0x004051c0    ; call FUN_004051c0
  00690aa0  PUSH EAX
  00690aa1  MOV dword ptr [EBP + -0x4],0xffffffff
  00690aa8  CALL 0x006ce000    ; call FUN_006ce000
  00690aad  ADD ESP,0x1c
  00690ab0  MOV dword ptr [EBP + 0xffffdb40],EAX
  00690ab6  CMP dword ptr [EBP + 0xffffdb40],0x0
  00690abd  JZ 0x00690b2a
  00690abf  MOV dword ptr [EBP + 0xffffdb3c],0xe
  00690ac9  SUB ESP,0x18
  00690acc  MOV ECX,ESP
  00690ace  MOV dword ptr [EBP + 0xffffd65c],ESP
  00690ad4  PUSH 0x7748a8
  00690ad9  CALL 0x004054a0    ; call FUN_004054a0
  00690ade  MOV dword ptr [EBP + 0xffffd658],EAX
  00690ae4  MOV dword ptr [EBP + -0x4],0x33
  00690aeb  LEA EDX,[EBP + 0xffffdb3c]
  00690af1  PUSH EDX
  00690af2  MOV ECX,0x7ca6e8
  00690af7  CALL 0x004051c0    ; call FUN_004051c0
  00690afc  PUSH EAX
  00690afd  MOV dword ptr [EBP + -0x4],0xffffffff
  00690b04  CALL 0x006ce000    ; call FUN_006ce000
  00690b09  ADD ESP,0x1c
  00690b0c  MOV dword ptr [EBP + 0xffffdb38],EAX
  00690b12  MOV EAX,dword ptr [EBP + 0xffffdb38]
  00690b18  MOVZX ECX,byte ptr [EAX + 0x9a8]
  00690b1f  TEST ECX,ECX
  00690b21  JZ 0x00690b2a
  00690b23  MOV byte ptr [EBP + 0xffffe604],0x1
LAB_00690b2a:
  00690b2a  MOV dword ptr [EBP + 0xffffdb34],0xe
  00690b34  SUB ESP,0x18
  00690b37  MOV ECX,ESP
  00690b39  MOV dword ptr [EBP + 0xffffd654],ESP
  00690b3f  PUSH 0x7748a0
  00690b44  CALL 0x004054a0    ; call FUN_004054a0
  00690b49  MOV dword ptr [EBP + 0xffffd650],EAX
  00690b4f  MOV dword ptr [EBP + -0x4],0x34
  00690b56  LEA EDX,[EBP + 0xffffdb34]
  00690b5c  PUSH EDX
  00690b5d  MOV ECX,0x7ca6e8
  00690b62  CALL 0x004051c0    ; call FUN_004051c0
  00690b67  PUSH EAX
  00690b68  MOV dword ptr [EBP + -0x4],0xffffffff
  00690b6f  CALL 0x006ce000    ; call FUN_006ce000
  00690b74  ADD ESP,0x1c
  00690b77  MOV dword ptr [EBP + 0xffffdb30],EAX
  00690b7d  CMP dword ptr [EBP + 0xffffdb30],0x0
  00690b84  JZ 0x00690bf1
  00690b86  MOV dword ptr [EBP + 0xffffdb2c],0xe
  00690b90  SUB ESP,0x18
  00690b93  MOV ECX,ESP
  00690b95  MOV dword ptr [EBP + 0xffffd64c],ESP
  00690b9b  PUSH 0x774898
  00690ba0  CALL 0x004054a0    ; call FUN_004054a0
  00690ba5  MOV dword ptr [EBP + 0xffffd648],EAX
  00690bab  MOV dword ptr [EBP + -0x4],0x35
  00690bb2  LEA EAX,[EBP + 0xffffdb2c]
  00690bb8  PUSH EAX
  00690bb9  MOV ECX,0x7ca6e8
  00690bbe  CALL 0x004051c0    ; call FUN_004051c0
  00690bc3  PUSH EAX
  00690bc4  MOV dword ptr [EBP + -0x4],0xffffffff
  00690bcb  CALL 0x006ce000    ; call FUN_006ce000
  00690bd0  ADD ESP,0x1c
  00690bd3  MOV dword ptr [EBP + 0xffffdb28],EAX
  00690bd9  MOV ECX,dword ptr [EBP + 0xffffdb28]
  00690bdf  MOVZX EDX,byte ptr [ECX + 0x9a8]
  00690be6  TEST EDX,EDX
  00690be8  JZ 0x00690bf1
  00690bea  MOV byte ptr [EBP + 0xffffe604],0x1
LAB_00690bf1:
  00690bf1  MOV dword ptr [EBP + 0xffffdb24],0xe
  00690bfb  SUB ESP,0x18
  00690bfe  MOV ECX,ESP
  00690c00  MOV dword ptr [EBP + 0xffffd644],ESP
  00690c06  PUSH 0x7748d8
  00690c0b  CALL 0x004054a0    ; call FUN_004054a0
  00690c10  MOV dword ptr [EBP + 0xffffd640],EAX
  00690c16  MOV dword ptr [EBP + -0x4],0x36
  00690c1d  LEA EAX,[EBP + 0xffffdb24]
  00690c23  PUSH EAX
  00690c24  MOV ECX,0x7ca6e8
  00690c29  CALL 0x004051c0    ; call FUN_004051c0
  00690c2e  PUSH EAX
  00690c2f  MOV dword ptr [EBP + -0x4],0xffffffff
  00690c36  CALL 0x006ce000    ; call FUN_006ce000
  00690c3b  ADD ESP,0x1c
  00690c3e  MOV dword ptr [EBP + 0xffffdb20],EAX
  00690c44  CMP dword ptr [EBP + 0xffffdb20],0x0
  00690c4b  JZ 0x00690cb8
  00690c4d  MOV dword ptr [EBP + 0xffffdb1c],0xe
  00690c57  SUB ESP,0x18
  00690c5a  MOV ECX,ESP
  00690c5c  MOV dword ptr [EBP + 0xffffd63c],ESP
  00690c62  PUSH 0x7748d0
  00690c67  CALL 0x004054a0    ; call FUN_004054a0
  00690c6c  MOV dword ptr [EBP + 0xffffd638],EAX
  00690c72  MOV dword ptr [EBP + -0x4],0x37
  00690c79  LEA ECX,[EBP + 0xffffdb1c]
  00690c7f  PUSH ECX
  00690c80  MOV ECX,0x7ca6e8
  00690c85  CALL 0x004051c0    ; call FUN_004051c0
  00690c8a  PUSH EAX
  00690c8b  MOV dword ptr [EBP + -0x4],0xffffffff
  00690c92  CALL 0x006ce000    ; call FUN_006ce000
  00690c97  ADD ESP,0x1c
  00690c9a  MOV dword ptr [EBP + 0xffffdb18],EAX
  00690ca0  MOV EDX,dword ptr [EBP + 0xffffdb18]
  00690ca6  MOVZX EAX,byte ptr [EDX + 0x9a8]
  00690cad  TEST EAX,EAX
  00690caf  JZ 0x00690cb8
  00690cb1  MOV byte ptr [EBP + 0xffffe604],0x1
LAB_00690cb8:
  00690cb8  MOVZX ECX,byte ptr [EBP + 0xffffe604]
  00690cbf  TEST ECX,ECX
  00690cc1  JNZ 0x00690d74
  00690cc7  SUB ESP,0x18
  00690cca  MOV ECX,ESP
  00690ccc  MOV dword ptr [EBP + 0xffffd634],ESP
  00690cd2  PUSH 0x7748c0    ; "REWARD_OPEN2"
  00690cd7  CALL 0x004054a0    ; call FUN_004054a0
  00690cdc  CALL 0x004c3570    ; call FUN_004c3570
  00690ce1  ADD ESP,0x18
  00690ce4  MOV EDX,dword ptr [EBP + 0xffffe580]
  00690cea  MOV byte ptr [EDX + 0x9a8],0x1
  00690cf1  MOV EAX,dword ptr [EBP + 0xffffe580]
  00690cf7  MOV dword ptr [EAX + 0x4c],0x0
  00690cfe  MOV ECX,dword ptr [EBP + 0xffffe580]
  00690d04  MOV dword ptr [ECX + 0x8dc],0x0
  00690d0e  MOV ECX,dword ptr [EBP + 0xffffe580]
  00690d14  ADD ECX,0x880
  00690d1a  CALL 0x0040d6a0    ; call FUN_0040d6a0
  00690d1f  CMP EAX,0x1
  00690d22  JBE 0x00690d74
  00690d24  PUSH 0x1
  00690d26  LEA EDX,[EBP + 0xffffd630]
  00690d2c  PUSH EDX
  00690d2d  LEA EAX,[EBP + 0xffffd62c]
  00690d33  PUSH EAX
  00690d34  MOV ECX,dword ptr [EBP + 0xffffe580]
  00690d3a  ADD ECX,0x880
  00690d40  CALL 0x00402170    ; call FUN_00402170
  00690d45  MOV ECX,EAX
  00690d47  CALL 0x0069f180    ; call FUN_0069f180
  00690d4c  MOV ECX,dword ptr [EAX]
  00690d4e  MOV dword ptr [EBP + 0xffffdb14],ECX
  00690d54  MOV EDX,dword ptr [EBP + 0xffffdb14]
  00690d5a  PUSH EDX
  00690d5b  LEA EAX,[EBP + 0xffffd628]
  00690d61  PUSH EAX
  00690d62  MOV ECX,dword ptr [EBP + 0xffffe580]
  00690d68  ADD ECX,0x880
  00690d6e  CALL 0x0069f720    ; call FUN_0069f720
  00690d73  NOP
LAB_00690d74:
  00690d74  JMP 0x0069e6d6
LAB_00690d79:
  00690d79  MOV ECX,dword ptr [EBP + 0xc]
  00690d7c  MOV dword ptr [EBP + 0xffffe590],ECX
  00690d82  MOV EDX,dword ptr [EBP + 0xffffe590]
  00690d88  CMP dword ptr [EDX + 0x5c],0x0
  00690d8c  JZ 0x00691181
  00690d92  MOV EAX,dword ptr [EBP + 0xffffe590]
  00690d98  CMP dword ptr [EAX + 0x60],0x0
  00690d9c  JZ 0x00691181
  00690da2  MOV byte ptr [EBP + 0xffffe606],0x0
  00690da9  MOV dword ptr [EBP + 0xffffdb10],0xe
  00690db3  SUB ESP,0x18
  00690db6  MOV ECX,ESP
  00690db8  MOV dword ptr [EBP + 0xffffd624],ESP
  00690dbe  PUSH 0x7748b8
  00690dc3  CALL 0x004054a0    ; call FUN_004054a0
  00690dc8  MOV dword ptr [EBP + 0xffffd620],EAX
  00690dce  MOV dword ptr [EBP + -0x4],0x38
  00690dd5  LEA ECX,[EBP + 0xffffdb10]
  00690ddb  PUSH ECX
  00690ddc  MOV ECX,0x7ca6e8
  00690de1  CALL 0x004051c0    ; call FUN_004051c0
  00690de6  PUSH EAX
  00690de7  MOV dword ptr [EBP + -0x4],0xffffffff
  00690dee  CALL 0x006ce000    ; call FUN_006ce000
  00690df3  ADD ESP,0x1c
  00690df6  MOV dword ptr [EBP + 0xffffdb0c],EAX
  00690dfc  CMP dword ptr [EBP + 0xffffdb0c],0x0
  00690e03  JZ 0x00690e70
  00690e05  MOV dword ptr [EBP + 0xffffdb08],0xe
  00690e0f  SUB ESP,0x18
  00690e12  MOV ECX,ESP
  00690e14  MOV dword ptr [EBP + 0xffffd61c],ESP
  00690e1a  PUSH 0x7748f8
  00690e1f  CALL 0x004054a0    ; call FUN_004054a0
  00690e24  MOV dword ptr [EBP + 0xffffd618],EAX
  00690e2a  MOV dword ptr [EBP + -0x4],0x39
  00690e31  LEA EDX,[EBP + 0xffffdb08]
  00690e37  PUSH EDX
  00690e38  MOV ECX,0x7ca6e8
  00690e3d  CALL 0x004051c0    ; call FUN_004051c0
  00690e42  PUSH EAX
  00690e43  MOV dword ptr [EBP + -0x4],0xffffffff
  00690e4a  CALL 0x006ce000    ; call FUN_006ce000
  00690e4f  ADD ESP,0x1c
  00690e52  MOV dword ptr [EBP + 0xffffdb04],EAX
  00690e58  MOV EAX,dword ptr [EBP + 0xffffdb04]
  00690e5e  MOVZX ECX,byte ptr [EAX + 0x9a8]
  00690e65  TEST ECX,ECX
  00690e67  JZ 0x00690e70
  00690e69  MOV byte ptr [EBP + 0xffffe606],0x1
LAB_00690e70:
  00690e70  MOV dword ptr [EBP + 0xffffdb00],0xe
  00690e7a  SUB ESP,0x18
  00690e7d  MOV ECX,ESP
  00690e7f  MOV dword ptr [EBP + 0xffffd614],ESP
  00690e85  PUSH 0x7748f0
  00690e8a  CALL 0x004054a0    ; call FUN_004054a0
  00690e8f  MOV dword ptr [EBP + 0xffffd610],EAX
  00690e95  MOV dword ptr [EBP + -0x4],0x3a
  00690e9c  LEA EDX,[EBP + 0xffffdb00]
  00690ea2  PUSH EDX
  00690ea3  MOV ECX,0x7ca6e8
  00690ea8  CALL 0x004051c0    ; call FUN_004051c0
  00690ead  PUSH EAX
  00690eae  MOV dword ptr [EBP + -0x4],0xffffffff
  00690eb5  CALL 0x006ce000    ; call FUN_006ce000
  00690eba  ADD ESP,0x1c
  00690ebd  MOV dword ptr [EBP + 0xffffdafc],EAX
  00690ec3  CMP dword ptr [EBP + 0xffffdafc],0x0
  00690eca  JZ 0x00690f37
  00690ecc  MOV dword ptr [EBP + 0xffffdaf8],0xe
  00690ed6  SUB ESP,0x18
  00690ed9  MOV ECX,ESP
  00690edb  MOV dword ptr [EBP + 0xffffd60c],ESP
  00690ee1  PUSH 0x7748e8
  00690ee6  CALL 0x004054a0    ; call FUN_004054a0
  00690eeb  MOV dword ptr [EBP + 0xffffd608],EAX
  00690ef1  MOV dword ptr [EBP + -0x4],0x3b
  00690ef8  LEA EAX,[EBP + 0xffffdaf8]
  00690efe  PUSH EAX
  00690eff  MOV ECX,0x7ca6e8
  00690f04  CALL 0x004051c0    ; call FUN_004051c0
  00690f09  PUSH EAX
  00690f0a  MOV dword ptr [EBP + -0x4],0xffffffff
  00690f11  CALL 0x006ce000    ; call FUN_006ce000
  00690f16  ADD ESP,0x1c
  00690f19  MOV dword ptr [EBP + 0xffffdaf4],EAX
  00690f1f  MOV ECX,dword ptr [EBP + 0xffffdaf4]
  00690f25  MOVZX EDX,byte ptr [ECX + 0x9a8]
  00690f2c  TEST EDX,EDX
  00690f2e  JZ 0x00690f37
  00690f30  MOV byte ptr [EBP + 0xffffe606],0x1
LAB_00690f37:
  00690f37  MOV dword ptr [EBP + 0xffffdaf0],0xe
  00690f41  SUB ESP,0x18
  00690f44  MOV ECX,ESP
  00690f46  MOV dword ptr [EBP + 0xffffd604],ESP
  00690f4c  PUSH 0x7748e0
  00690f51  CALL 0x004054a0    ; call FUN_004054a0
  00690f56  MOV dword ptr [EBP + 0xffffd600],EAX
  00690f5c  MOV dword ptr [EBP + -0x4],0x3c
  00690f63  LEA EAX,[EBP + 0xffffdaf0]
  00690f69  PUSH EAX
  00690f6a  MOV ECX,0x7ca6e8
  00690f6f  CALL 0x004051c0    ; call FUN_004051c0
  00690f74  PUSH EAX
  00690f75  MOV dword ptr [EBP + -0x4],0xffffffff
  00690f7c  CALL 0x006ce000    ; call FUN_006ce000
  00690f81  ADD ESP,0x1c
  00690f84  MOV dword ptr [EBP + 0xffffdaec],EAX
  00690f8a  CMP dword ptr [EBP + 0xffffdaec],0x0
  00690f91  JZ 0x00690ffe
  00690f93  MOV dword ptr [EBP + 0xffffdae8],0xe
  00690f9d  SUB ESP,0x18
  00690fa0  MOV ECX,ESP
  00690fa2  MOV dword ptr [EBP + 0xffffd5fc],ESP
  00690fa8  PUSH 0x774920
  00690fad  CALL 0x004054a0    ; call FUN_004054a0
  00690fb2  MOV dword ptr [EBP + 0xffffd5f8],EAX
  00690fb8  MOV dword ptr [EBP + -0x4],0x3d
  00690fbf  LEA ECX,[EBP + 0xffffdae8]
  00690fc5  PUSH ECX
  00690fc6  MOV ECX,0x7ca6e8
  00690fcb  CALL 0x004051c0    ; call FUN_004051c0
  00690fd0  PUSH EAX
  00690fd1  MOV dword ptr [EBP + -0x4],0xffffffff
  00690fd8  CALL 0x006ce000    ; call FUN_006ce000
  00690fdd  ADD ESP,0x1c
  00690fe0  MOV dword ptr [EBP + 0xffffdae4],EAX
  00690fe6  MOV EDX,dword ptr [EBP + 0xffffdae4]
  00690fec  MOVZX EAX,byte ptr [EDX + 0x9a8]
  00690ff3  TEST EAX,EAX
  00690ff5  JZ 0x00690ffe
  00690ff7  MOV byte ptr [EBP + 0xffffe606],0x1
LAB_00690ffe:
  00690ffe  MOV dword ptr [EBP + 0xffffdae0],0xe
  00691008  SUB ESP,0x18
  0069100b  MOV ECX,ESP
  0069100d  MOV dword ptr [EBP + 0xffffd5f4],ESP
  00691013  PUSH 0x774918
  00691018  CALL 0x004054a0    ; call FUN_004054a0
  0069101d  MOV dword ptr [EBP + 0xffffd5f0],EAX
  00691023  MOV dword ptr [EBP + -0x4],0x3e
  0069102a  LEA ECX,[EBP + 0xffffdae0]
  00691030  PUSH ECX
  00691031  MOV ECX,0x7ca6e8
  00691036  CALL 0x004051c0    ; call FUN_004051c0
  0069103b  PUSH EAX
  0069103c  MOV dword ptr [EBP + -0x4],0xffffffff
  00691043  CALL 0x006ce000    ; call FUN_006ce000
  00691048  ADD ESP,0x1c
  0069104b  MOV dword ptr [EBP + 0xffffdadc],EAX
  00691051  CMP dword ptr [EBP + 0xffffdadc],0x0
  00691058  JZ 0x006910c5
  0069105a  MOV dword ptr [EBP + 0xffffdad8],0xe
  00691064  SUB ESP,0x18
  00691067  MOV ECX,ESP
  00691069  MOV dword ptr [EBP + 0xffffd5ec],ESP
  0069106f  PUSH 0x774910
  00691074  CALL 0x004054a0    ; call FUN_004054a0
  00691079  MOV dword ptr [EBP + 0xffffd5e8],EAX
  0069107f  MOV dword ptr [EBP + -0x4],0x3f
  00691086  LEA EDX,[EBP + 0xffffdad8]
  0069108c  PUSH EDX
  0069108d  MOV ECX,0x7ca6e8
  00691092  CALL 0x004051c0    ; call FUN_004051c0
  00691097  PUSH EAX
  00691098  MOV dword ptr [EBP + -0x4],0xffffffff
  0069109f  CALL 0x006ce000    ; call FUN_006ce000
  006910a4  ADD ESP,0x1c
  006910a7  MOV dword ptr [EBP + 0xffffdad4],EAX
  006910ad  MOV EAX,dword ptr [EBP + 0xffffdad4]
  006910b3  MOVZX ECX,byte ptr [EAX + 0x9a8]
  006910ba  TEST ECX,ECX
  006910bc  JZ 0x006910c5
  006910be  MOV byte ptr [EBP + 0xffffe606],0x1
LAB_006910c5:
  006910c5  MOVZX EDX,byte ptr [EBP + 0xffffe606]
  006910cc  TEST EDX,EDX
  006910ce  JNZ 0x00691181
  006910d4  SUB ESP,0x18
  006910d7  MOV ECX,ESP
  006910d9  MOV dword ptr [EBP + 0xffffd5e4],ESP
  006910df  PUSH 0x774900    ; "REWARD_OPEN2"
  006910e4  CALL 0x004054a0    ; call FUN_004054a0
  006910e9  CALL 0x004c3570    ; call FUN_004c3570
  006910ee  ADD ESP,0x18
  006910f1  MOV EAX,dword ptr [EBP + 0xffffe590]
  006910f7  MOV byte ptr [EAX + 0x9a8],0x1
  006910fe  MOV ECX,dword ptr [EBP + 0xffffe590]
  00691104  MOV dword ptr [ECX + 0x4c],0x0
  0069110b  MOV EDX,dword ptr [EBP + 0xffffe590]
  00691111  MOV dword ptr [EDX + 0x8dc],0x0
  0069111b  MOV ECX,dword ptr [EBP + 0xffffe590]
  00691121  ADD ECX,0x880
  00691127  CALL 0x0040d6a0    ; call FUN_0040d6a0
  0069112c  CMP EAX,0x1
  0069112f  JBE 0x00691181
  00691131  PUSH 0x1
  00691133  LEA EAX,[EBP + 0xffffd5e0]
  00691139  PUSH EAX
  0069113a  LEA ECX,[EBP + 0xffffd5dc]
  00691140  PUSH ECX
  00691141  MOV ECX,dword ptr [EBP + 0xffffe590]
  00691147  ADD ECX,0x880
  0069114d  CALL 0x00402170    ; call FUN_00402170
  00691152  MOV ECX,EAX
  00691154  CALL 0x0069f180    ; call FUN_0069f180
  00691159  MOV EDX,dword ptr [EAX]
  0069115b  MOV dword ptr [EBP + 0xffffdad0],EDX
  00691161  MOV EAX,dword ptr [EBP + 0xffffdad0]
  00691167  PUSH EAX
  00691168  LEA ECX,[EBP + 0xffffd5d8]
  0069116e  PUSH ECX
  0069116f  MOV ECX,dword ptr [EBP + 0xffffe590]
  00691175  ADD ECX,0x880
  0069117b  CALL 0x0069f720    ; call FUN_0069f720
  00691180  NOP
LAB_00691181:
  00691181  JMP 0x0069e6d6
LAB_00691186:
  00691186  MOV EDX,dword ptr [EBP + 0xc]
  00691189  MOV dword ptr [EBP + 0xffffe57c],EDX
  0069118f  MOV EAX,dword ptr [EBP + 0xffffe57c]
  00691195  CMP dword ptr [EAX + 0x5c],0x0
  00691199  JZ 0x0069158e
  0069119f  MOV ECX,dword ptr [EBP + 0xffffe57c]
  006911a5  CMP dword ptr [ECX + 0x60],0x0
  006911a9  JZ 0x0069158e
  006911af  MOV byte ptr [EBP + 0xffffe605],0x0
  006911b6  MOV dword ptr [EBP + 0xffffdacc],0xe
  006911c0  SUB ESP,0x18
  006911c3  MOV ECX,ESP
  006911c5  MOV dword ptr [EBP + 0xffffd5d4],ESP
  006911cb  PUSH 0x774940
  006911d0  CALL 0x004054a0    ; call FUN_004054a0
  006911d5  MOV dword ptr [EBP + 0xffffd5d0],EAX
  006911db  MOV dword ptr [EBP + -0x4],0x40
  006911e2  LEA EDX,[EBP + 0xffffdacc]
  006911e8  PUSH EDX
  006911e9  MOV ECX,0x7ca6e8
  006911ee  CALL 0x004051c0    ; call FUN_004051c0
  006911f3  PUSH EAX
  006911f4  MOV dword ptr [EBP + -0x4],0xffffffff
  006911fb  CALL 0x006ce000    ; call FUN_006ce000
  00691200  ADD ESP,0x1c
  00691203  MOV dword ptr [EBP + 0xffffdac8],EAX
  00691209  CMP dword ptr [EBP + 0xffffdac8],0x0
  00691210  JZ 0x0069127d
  00691212  MOV dword ptr [EBP + 0xffffdac4],0xe
  0069121c  SUB ESP,0x18
  0069121f  MOV ECX,ESP
  00691221  MOV dword ptr [EBP + 0xffffd5cc],ESP
  00691227  PUSH 0x774938
  0069122c  CALL 0x004054a0    ; call FUN_004054a0
  00691231  MOV dword ptr [EBP + 0xffffd5c8],EAX
  00691237  MOV dword ptr [EBP + -0x4],0x41
  0069123e  LEA EAX,[EBP + 0xffffdac4]
  00691244  PUSH EAX
  00691245  MOV ECX,0x7ca6e8
  0069124a  CALL 0x004051c0    ; call FUN_004051c0
  0069124f  PUSH EAX
  00691250  MOV dword ptr [EBP + -0x4],0xffffffff
  00691257  CALL 0x006ce000    ; call FUN_006ce000
  0069125c  ADD ESP,0x1c
  0069125f  MOV dword ptr [EBP + 0xffffdac0],EAX
  00691265  MOV ECX,dword ptr [EBP + 0xffffdac0]
  0069126b  MOVZX EDX,byte ptr [ECX + 0x9a8]
  00691272  TEST EDX,EDX
  00691274  JZ 0x0069127d
  00691276  MOV byte ptr [EBP + 0xffffe605],0x1
LAB_0069127d:
  0069127d  MOV dword ptr [EBP + 0xffffdabc],0xe
  00691287  SUB ESP,0x18
  0069128a  MOV ECX,ESP
  0069128c  MOV dword ptr [EBP + 0xffffd5c4],ESP
  00691292  PUSH 0x774930
  00691297  CALL 0x004054a0    ; call FUN_004054a0
  0069129c  MOV dword ptr [EBP + 0xffffd5c0],EAX
  006912a2  MOV dword ptr [EBP + -0x4],0x42
  006912a9  LEA EAX,[EBP + 0xffffdabc]
  006912af  PUSH EAX
  006912b0  MOV ECX,0x7ca6e8
  006912b5  CALL 0x004051c0    ; call FUN_004051c0
  006912ba  PUSH EAX
  006912bb  MOV dword ptr [EBP + -0x4],0xffffffff
  006912c2  CALL 0x006ce000    ; call FUN_006ce000
  006912c7  ADD ESP,0x1c
  006912ca  MOV dword ptr [EBP + 0xffffdab8],EAX
  006912d0  CMP dword ptr [EBP + 0xffffdab8],0x0
  006912d7  JZ 0x00691344
  006912d9  MOV dword ptr [EBP + 0xffffdab4],0xe
  006912e3  SUB ESP,0x18
  006912e6  MOV ECX,ESP
  006912e8  MOV dword ptr [EBP + 0xffffd5bc],ESP
  006912ee  PUSH 0x774928
  006912f3  CALL 0x004054a0    ; call FUN_004054a0
  006912f8  MOV dword ptr [EBP + 0xffffd5b8],EAX
  006912fe  MOV dword ptr [EBP + -0x4],0x43
  00691305  LEA ECX,[EBP + 0xffffdab4]
  0069130b  PUSH ECX
  0069130c  MOV ECX,0x7ca6e8
  00691311  CALL 0x004051c0    ; call FUN_004051c0
  00691316  PUSH EAX
  00691317  MOV dword ptr [EBP + -0x4],0xffffffff
  0069131e  CALL 0x006ce000    ; call FUN_006ce000
  00691323  ADD ESP,0x1c
  00691326  MOV dword ptr [EBP + 0xffffdab0],EAX
  0069132c  MOV EDX,dword ptr [EBP + 0xffffdab0]
  00691332  MOVZX EAX,byte ptr [EDX + 0x9a8]
  00691339  TEST EAX,EAX
  0069133b  JZ 0x00691344
  0069133d  MOV byte ptr [EBP + 0xffffe605],0x1
LAB_00691344:
  00691344  MOV dword ptr [EBP + 0xffffdaac],0xe
  0069134e  SUB ESP,0x18
  00691351  MOV ECX,ESP
  00691353  MOV dword ptr [EBP + 0xffffd5b4],ESP
  00691359  PUSH 0x774960
  0069135e  CALL 0x004054a0    ; call FUN_004054a0
  00691363  MOV dword ptr [EBP + 0xffffd5b0],EAX
  00691369  MOV dword ptr [EBP + -0x4],0x44
  00691370  LEA ECX,[EBP + 0xffffdaac]
  00691376  PUSH ECX
  00691377  MOV ECX,0x7ca6e8
  0069137c  CALL 0x004051c0    ; call FUN_004051c0
  00691381  PUSH EAX
  00691382  MOV dword ptr [EBP + -0x4],0xffffffff
  00691389  CALL 0x006ce000    ; call FUN_006ce000
  0069138e  ADD ESP,0x1c
  00691391  MOV dword ptr [EBP + 0xffffdaa8],EAX
  00691397  CMP dword ptr [EBP + 0xffffdaa8],0x0
  0069139e  JZ 0x0069140b
  006913a0  MOV dword ptr [EBP + 0xffffdaa4],0xe
  006913aa  SUB ESP,0x18
  006913ad  MOV ECX,ESP
  006913af  MOV dword ptr [EBP + 0xffffd5ac],ESP
  006913b5  PUSH 0x774958
  006913ba  CALL 0x004054a0    ; call FUN_004054a0
  006913bf  MOV dword ptr [EBP + 0xffffd5a8],EAX
  006913c5  MOV dword ptr [EBP + -0x4],0x45
  006913cc  LEA EDX,[EBP + 0xffffdaa4]
  006913d2  PUSH EDX
  006913d3  MOV ECX,0x7ca6e8
  006913d8  CALL 0x004051c0    ; call FUN_004051c0
  006913dd  PUSH EAX
  006913de  MOV dword ptr [EBP + -0x4],0xffffffff
  006913e5  CALL 0x006ce000    ; call FUN_006ce000
  006913ea  ADD ESP,0x1c
  006913ed  MOV dword ptr [EBP + 0xffffdaa0],EAX
  006913f3  MOV EAX,dword ptr [EBP + 0xffffdaa0]
  006913f9  MOVZX ECX,byte ptr [EAX + 0x9a8]
  00691400  TEST ECX,ECX
  00691402  JZ 0x0069140b
  00691404  MOV byte ptr [EBP + 0xffffe605],0x1
LAB_0069140b:
  0069140b  MOV dword ptr [EBP + 0xffffda9c],0xe
  00691415  SUB ESP,0x18
  00691418  MOV ECX,ESP
  0069141a  MOV dword ptr [EBP + 0xffffd5a4],ESP
  00691420  PUSH 0x774950
  00691425  CALL 0x004054a0    ; call FUN_004054a0
  0069142a  MOV dword ptr [EBP + 0xffffd5a0],EAX
  00691430  MOV dword ptr [EBP + -0x4],0x46
  00691437  LEA EDX,[EBP + 0xffffda9c]
  0069143d  PUSH EDX
  0069143e  MOV ECX,0x7ca6e8
  00691443  CALL 0x004051c0    ; call FUN_004051c0
  00691448  PUSH EAX
  00691449  MOV dword ptr [EBP + -0x4],0xffffffff
  00691450  CALL 0x006ce000    ; call FUN_006ce000
  00691455  ADD ESP,0x1c
  00691458  MOV dword ptr [EBP + 0xffffda98],EAX
  0069145e  CMP dword ptr [EBP + 0xffffda98],0x0
  00691465  JZ 0x006914d2
  00691467  MOV dword ptr [EBP + 0xffffda94],0xe
  00691471  SUB ESP,0x18
  00691474  MOV ECX,ESP
  00691476  MOV dword ptr [EBP + 0xffffd59c],ESP
  0069147c  PUSH 0x774948
  00691481  CALL 0x004054a0    ; call FUN_004054a0
  00691486  MOV dword ptr [EBP + 0xffffd598],EAX
  0069148c  MOV dword ptr [EBP + -0x4],0x47
  00691493  LEA EAX,[EBP + 0xffffda94]
  00691499  PUSH EAX
  0069149a  MOV ECX,0x7ca6e8
  0069149f  CALL 0x004051c0    ; call FUN_004051c0
  006914a4  PUSH EAX
  006914a5  MOV dword ptr [EBP + -0x4],0xffffffff
  006914ac  CALL 0x006ce000    ; call FUN_006ce000
  006914b1  ADD ESP,0x1c
  006914b4  MOV dword ptr [EBP + 0xffffda90],EAX
  006914ba  MOV ECX,dword ptr [EBP + 0xffffda90]
  006914c0  MOVZX EDX,byte ptr [ECX + 0x9a8]
  006914c7  TEST EDX,EDX
  006914c9  JZ 0x006914d2
  006914cb  MOV byte ptr [EBP + 0xffffe605],0x1
LAB_006914d2:
  006914d2  MOVZX EAX,byte ptr [EBP + 0xffffe605]
  006914d9  TEST EAX,EAX
  006914db  JNZ 0x0069158e
  006914e1  SUB ESP,0x18
  006914e4  MOV ECX,ESP
  006914e6  MOV dword ptr [EBP + 0xffffd594],ESP
  006914ec  PUSH 0x77498c    ; "REWARD_OPEN2"
  006914f1  CALL 0x004054a0    ; call FUN_004054a0
  006914f6  CALL 0x004c3570    ; call FUN_004c3570
  006914fb  ADD ESP,0x18
  006914fe  MOV ECX,dword ptr [EBP + 0xffffe57c]
  00691504  MOV byte ptr [ECX + 0x9a8],0x1
  0069150b  MOV EDX,dword ptr [EBP + 0xffffe57c]
  00691511  MOV dword ptr [EDX + 0x4c],0x0
  00691518  MOV EAX,dword ptr [EBP + 0xffffe57c]
  0069151e  MOV dword ptr [EAX + 0x8dc],0x0
  00691528  MOV ECX,dword ptr [EBP + 0xffffe57c]
  0069152e  ADD ECX,0x880
  00691534  CALL 0x0040d6a0    ; call FUN_0040d6a0
  00691539  CMP EAX,0x1
  0069153c  JBE 0x0069158e
  0069153e  PUSH 0x1
  00691540  LEA ECX,[EBP + 0xffffd590]
  00691546  PUSH ECX
  00691547  LEA EDX,[EBP + 0xffffd58c]
  0069154d  PUSH EDX
  0069154e  MOV ECX,dword ptr [EBP + 0xffffe57c]
  00691554  ADD ECX,0x880
  0069155a  CALL 0x00402170    ; call FUN_00402170
  0069155f  MOV ECX,EAX
  00691561  CALL 0x0069f180    ; call FUN_0069f180
  00691566  MOV EAX,dword ptr [EAX]
  00691568  MOV dword ptr [EBP + 0xffffda8c],EAX
  0069156e  MOV ECX,dword ptr [EBP + 0xffffda8c]
  00691574  PUSH ECX
  00691575  LEA EDX,[EBP + 0xffffd588]
  0069157b  PUSH EDX
  0069157c  MOV ECX,dword ptr [EBP + 0xffffe57c]
  00691582  ADD ECX,0x880
  00691588  CALL 0x0069f720    ; call FUN_0069f720
  0069158d  NOP
LAB_0069158e:
  0069158e  JMP 0x0069e6d6
LAB_00691593:
  00691593  MOV EAX,dword ptr [EBP + 0xc]
  00691596  MOV dword ptr [EBP + 0xffffda88],EAX
  0069159c  MOV ECX,dword ptr [EBP + 0xffffda88]
  006915a2  ADD ECX,0x1c
  006915a5  PUSH ECX
  006915a6  LEA ECX,[EBP + 0xfffff818]
  006915ac  CALL 0x00405520    ; call FUN_00405520
  006915b1  MOV dword ptr [EBP + -0x4],0x48
  006915b8  PUSH 0x774980
  006915bd  LEA ECX,[EBP + 0xfffff7b8]
  006915c3  CALL 0x004054a0    ; call FUN_004054a0
  006915c8  MOV byte ptr [EBP + -0x4],0x49
  006915cc  PUSH 0x0
  006915ce  PUSH 0x774974
  006915d3  LEA ECX,[EBP + 0xfffff818]
  006915d9  CALL 0x004277a0    ; call FUN_004277a0
  006915de  MOV dword ptr [EBP + 0xffffe280],EAX
  006915e4  CMP dword ptr [EBP + 0xffffe280],-0x1
  006915eb  JZ 0x0069160c
  006915ed  LEA ECX,[EBP + 0xfffff7b8]
  006915f3  CALL 0x00410b30    ; call FUN_00410b30
  006915f8  PUSH EAX
  006915f9  MOV EDX,dword ptr [EBP + 0xffffe280]
  006915ff  PUSH EDX
  00691600  LEA ECX,[EBP + 0xfffff818]
  00691606  CALL 0x00427800    ; call FUN_00427800
  0069160b  NOP
LAB_0069160c:
  0069160c  MOV dword ptr [EBP + 0xffffe4b0],0x0
  00691616  JMP 0x00691627
LAB_00691618:
  00691618  MOV EAX,dword ptr [EBP + 0xffffe4b0]
  0069161e  ADD EAX,0x1
  00691621  MOV dword ptr [EBP + 0xffffe4b0],EAX
LAB_00691627:
  00691627  MOV dword ptr [EBP + 0xffffda84],0x1b58
  00691631  LEA ECX,[EBP + 0xffffda84]
  00691637  PUSH ECX
  00691638  MOV ECX,0x7ca6e8
  0069163d  CALL 0x004051c0    ; call FUN_004051c0
  00691642  MOV ECX,EAX
  00691644  CALL 0x00401a90    ; call FUN_00401a90
  00691649  CMP dword ptr [EBP + 0xffffe4b0],EAX
  0069164f  JNC 0x00691939
  00691655  MOV dword ptr [EBP + 0xffffda80],0x1b58
  0069165f  MOV EDX,dword ptr [EBP + 0xffffe4b0]
  00691665  PUSH EDX
  00691666  LEA EAX,[EBP + 0xffffda80]
  0069166c  PUSH EAX
  0069166d  MOV ECX,0x7ca6e8
  00691672  CALL 0x004051c0    ; call FUN_004051c0
  00691677  MOV ECX,EAX
  00691679  CALL 0x00401a70    ; call FUN_00401a70
  0069167e  MOV ECX,dword ptr [EAX]
  00691680  MOV dword ptr [EBP + 0xffffe5c0],ECX
  00691686  PUSH 0x774968
  0069168b  LEA ECX,[EBP + 0xfffff248]
  00691691  CALL 0x004054a0    ; call FUN_004054a0
  00691696  MOV dword ptr [EBP + 0xffffda7c],EAX
  0069169c  MOV EDX,dword ptr [EBP + 0xffffda7c]
  006916a2  MOV dword ptr [EBP + 0xffffda78],EDX
  006916a8  MOV byte ptr [EBP + -0x4],0x4a
  006916ac  MOV EAX,dword ptr [EBP + 0xffffda78]
  006916b2  PUSH EAX
  006916b3  LEA ECX,[EBP + 0xfffff818]
  006916b9  PUSH ECX
  006916ba  LEA EDX,[EBP + 0xfffff230]
  006916c0  PUSH EDX
  006916c1  CALL 0x00427c80    ; call FUN_00427c80
  006916c6  ADD ESP,0xc
  006916c9  MOV dword ptr [EBP + 0xffffda74],EAX
  006916cf  MOV EAX,dword ptr [EBP + 0xffffda74]
  006916d5  PUSH EAX
  006916d6  MOV ECX,dword ptr [EBP + 0xffffe5c0]
  006916dc  ADD ECX,0x1c
  006916df  PUSH ECX
  006916e0  CALL 0x0040e2d0    ; call destroy<>
  006916e5  ADD ESP,0x8
  006916e8  MOV byte ptr [EBP + 0xffffe569],AL
  006916ee  LEA ECX,[EBP + 0xfffff230]
  006916f4  CALL 0x004053c0    ; call ~function<void___cdecl(void)>
  006916f9  MOV byte ptr [EBP + -0x4],0x49
  006916fd  LEA ECX,[EBP + 0xfffff248]
  00691703  CALL 0x004053c0    ; call ~function<void___cdecl(void)>
  00691708  MOVZX EDX,byte ptr [EBP + 0xffffe569]
  0069170f  TEST EDX,EDX
  00691711  JZ 0x00691934
  00691717  MOV EAX,dword ptr [EBP + 0xffffe5c0]
  0069171d  CMP dword ptr [EAX + 0xb04],0x1
  00691724  JLE 0x00691934
  0069172a  MOV ECX,dword ptr [EBP + 0xffffe5c0]
  00691730  CMP dword ptr [ECX + 0xb00],0x1
  00691737  JZ 0x00691934
  0069173d  MOV EDX,dword ptr [EBP + 0xffffe5c0]
  00691743  MOV EAX,dword ptr [EDX + 0xb04]
  00691749  SUB EAX,0x1
  0069174c  MOV ECX,dword ptr [EBP + 0xffffe5c0]
  00691752  MOV dword ptr [ECX + 0xb04],EAX
  00691758  MOV EDX,dword ptr [EBP + 0xffffe5c0]
  0069175e  MOV EAX,dword ptr [EDX + 0xb00]
  00691764  PUSH EAX
  00691765  LEA ECX,[EBP + 0xfffff2c0]
  0069176b  PUSH ECX
  0069176c  CALL 0x0040a850    ; call FUN_0040a850
  00691771  ADD ESP,0x8
  00691774  MOV dword ptr [EBP + 0xffffda70],EAX
  0069177a  MOV EDX,dword ptr [EBP + 0xffffda70]
  00691780  MOV dword ptr [EBP + 0xffffda58],EDX
  00691786  MOV byte ptr [EBP + -0x4],0x4b
  0069178a  PUSH 0x7749c0
  0069178f  LEA ECX,[EBP + 0xfffff2a8]
  00691795  CALL 0x004054a0    ; call FUN_004054a0
  0069179a  MOV dword ptr [EBP + 0xffffda6c],EAX
  006917a0  MOV EAX,dword ptr [EBP + 0xffffda6c]
  006917a6  MOV dword ptr [EBP + 0xffffda64],EAX
  006917ac  MOV byte ptr [EBP + -0x4],0x4c
  006917b0  MOV ECX,dword ptr [EBP + 0xffffe5c0]
  006917b6  MOV EDX,dword ptr [ECX + 0xb04]
  006917bc  PUSH EDX
  006917bd  LEA EAX,[EBP + 0xfffff290]
  006917c3  PUSH EAX
  006917c4  CALL 0x0040a850    ; call FUN_0040a850
  006917c9  ADD ESP,0x8
  006917cc  MOV dword ptr [EBP + 0xffffda68],EAX
  006917d2  MOV ECX,dword ptr [EBP + 0xffffda68]
  006917d8  MOV dword ptr [EBP + 0xffffda60],ECX
  006917de  MOV byte ptr [EBP + -0x4],0x4d
  006917e2  MOV EDX,dword ptr [EBP + 0xffffda64]
  006917e8  PUSH EDX
  006917e9  MOV EAX,dword ptr [EBP + 0xffffda60]
  006917ef  PUSH EAX
  006917f0  LEA ECX,[EBP + 0xfffff278]
  006917f6  PUSH ECX
  006917f7  CALL 0x00405cf0    ; call FUN_00405cf0
  006917fc  ADD ESP,0xc
  006917ff  MOV dword ptr [EBP + 0xffffda5c],EAX
  00691805  MOV EDX,dword ptr [EBP + 0xffffda5c]
  0069180b  MOV dword ptr [EBP + 0xffffda54],EDX
  00691811  MOV byte ptr [EBP + -0x4],0x4e
  00691815  MOV EAX,dword ptr [EBP + 0xffffda58]
  0069181b  PUSH EAX
  0069181c  MOV ECX,dword ptr [EBP + 0xffffda54]
  00691822  PUSH ECX
  00691823  LEA EDX,[EBP + 0xfffff260]
  00691829  PUSH EDX
  0069182a  CALL 0x00405cf0    ; call FUN_00405cf0
  0069182f  ADD ESP,0xc
  00691832  MOV dword ptr [EBP + 0xffffda50],EAX
  00691838  MOV EAX,dword ptr [EBP + 0xffffda50]
  0069183e  PUSH EAX
  0069183f  MOV ECX,dword ptr [EBP + 0xffffe5c0]
  00691845  ADD ECX,0xa4c
  0069184b  CALL 0x004053e0    ; call FUN_004053e0
  00691850  LEA ECX,[EBP + 0xfffff260]
  00691856  CALL 0x004053c0    ; call ~function<void___cdecl(void)>
  0069185b  MOV byte ptr [EBP + -0x4],0x4d
  0069185f  LEA ECX,[EBP + 0xfffff278]
  00691865  CALL 0x004053c0    ; call ~function<void___cdecl(void)>
  0069186a  MOV byte ptr [EBP + -0x4],0x4c
  0069186e  LEA ECX,[EBP + 0xfffff290]
  00691874  CALL 0x004053c0    ; call ~function<void___cdecl(void)>
  00691879  MOV byte ptr [EBP + -0x4],0x4b
  0069187d  LEA ECX,[EBP + 0xfffff2a8]
  00691883  CALL 0x004053c0    ; call ~function<void___cdecl(void)>
  00691888  MOV byte ptr [EBP + -0x4],0x49
  0069188c  LEA ECX,[EBP + 0xfffff2c0]
  00691892  CALL 0x004053c0    ; call ~function<void___cdecl(void)>
  00691897  NOP
  00691898  MOV ECX,dword ptr [EBP + 0xffffe5c0]
  0069189e  ADD ECX,0xa3c
  006918a4  CALL 0x0040b190    ; call ReleaseDocSite
  006918a9  NOP
  006918aa  MOV dword ptr [EBP + 0xffffda48],0x1b58
  006918b4  MOV ECX,dword ptr [EBP + 0xffffe5c0]
  006918ba  MOV EDX,dword ptr [ECX + 0xb04]
  006918c0  PUSH EDX
  006918c1  PUSH 0xc
  006918c3  PUSH 0x1
  006918c5  SUB ESP,0x18
  006918c8  MOV ECX,ESP
  006918ca  MOV dword ptr [EBP + 0xffffd584],ESP
  006918d0  LEA EAX,[EBP + 0xfffff818]
  006918d6  PUSH EAX
  006918d7  CALL 0x00405520    ; call FUN_00405520
  006918dc  CALL 0x006ce090    ; call FUN_006ce090
  006918e1  ADD ESP,0x18
  006918e4  MOV dword ptr [EBP + 0xffffda4c],EAX
  006918ea  MOV ECX,dword ptr [EBP + 0xffffda4c]
  006918f0  PUSH ECX
  006918f1  SUB ESP,0x18
  006918f4  MOV ECX,ESP
  006918f6  MOV dword ptr [EBP + 0xffffd580],ESP
  006918fc  LEA EDX,[EBP + 0xfffff818]
  00691902  PUSH EDX
  00691903  CALL 0x00405520    ; call FUN_00405520
  00691908  MOV dword ptr [EBP + 0xffffd57c],EAX
  0069190e  MOV byte ptr [EBP + -0x4],0x4f
  00691912  PUSH 0x1
  00691914  LEA EAX,[EBP + 0xffffda48]
  0069191a  PUSH EAX
  0069191b  MOV ECX,0x7ca6e8
  00691920  CALL 0x004051c0    ; call FUN_004051c0
  00691925  PUSH EAX
  00691926  MOV byte ptr [EBP + -0x4],0x49
  0069192a  CALL 0x00622460    ; call FUN_00622460
  0069192f  ADD ESP,0x30
  00691932  JMP 0x00691939
LAB_00691934:
  00691934  JMP 0x00691618
LAB_00691939:
  00691939  MOV ECX,dword ptr [0x007ca768]
  0069193f  PUSH ECX
  00691940  MOV EDX,dword ptr [0x007ca764]
  00691946  PUSH EDX
  00691947  SUB ESP,0x20
  0069194a  MOV ECX,0x8
  0069194f  MOV ESI,0x7ca70c
  00691954  MOV EDI,ESP
  00691956  MOVSD.REP ES:EDI,ESI
  00691958  CALL 0x0065e180    ; call FUN_0065e180
  0069195d  ADD ESP,0x28
  00691960  MOV byte ptr [EBP + -0x4],0x48
  00691964  LEA ECX,[EBP + 0xfffff7b8]
  0069196a  CALL 0x004053c0    ; call ~function<void___cdecl(void)>
  0069196f  MOV dword ptr [EBP + -0x4],0xffffffff
  00691976  LEA ECX,[EBP + 0xfffff818]
  0069197c  CALL 0x004053c0    ; call ~function<void___cdecl(void)>
  00691981  NOP
  00691982  JMP 0x0069e6d6
LAB_006919a9:
  006919a9  MOV EAX,dword ptr [EBP + 0xc]
  006919ac  MOV dword ptr [EBP + 0xffffda44],EAX
  006919b2  MOV ECX,dword ptr [EBP + 0xffffda44]
  006919b8  ADD ECX,0x1c
  006919bb  PUSH ECX
  006919bc  LEA ECX,[EBP + 0xfffff800]
  006919c2  CALL 0x00405520    ; call FUN_00405520
  006919c7  MOV dword ptr [EBP + -0x4],0x50
  006919ce  PUSH 0x7749b4
  006919d3  LEA ECX,[EBP + 0xfffff7a0]
  006919d9  CALL 0x004054a0    ; call FUN_004054a0
  006919de  MOV byte ptr [EBP + -0x4],0x51
  006919e2  PUSH 0x0
  006919e4  PUSH 0x7749a8
  006919e9  LEA ECX,[EBP + 0xfffff800]
  006919ef  CALL 0x004277a0    ; call FUN_004277a0
  006919f4  MOV dword ptr [EBP + 0xffffe27c],EAX
  006919fa  CMP dword ptr [EBP + 0xffffe27c],-0x1
  00691a01  JZ 0x00691a22
  00691a03  LEA ECX,[EBP + 0xfffff7a0]
  00691a09  CALL 0x00410b30    ; call FUN_00410b30
  00691a0e  PUSH EAX
  00691a0f  MOV EDX,dword ptr [EBP + 0xffffe27c]
  00691a15  PUSH EDX
  00691a16  LEA ECX,[EBP + 0xfffff800]
  00691a1c  CALL 0x00427800    ; call FUN_00427800
  00691a21  NOP
LAB_00691a22:
  00691a22  MOV dword ptr [EBP + 0xffffe4b4],0x0
  00691a2c  JMP 0x00691a3d
LAB_00691a2e:
  00691a2e  MOV EAX,dword ptr [EBP + 0xffffe4b4]
  00691a34  ADD EAX,0x1
  00691a37  MOV dword ptr [EBP + 0xffffe4b4],EAX
LAB_00691a3d:
  00691a3d  MOV dword ptr [EBP + 0xffffda40],0x1b58
  00691a47  LEA ECX,[EBP + 0xffffda40]
  00691a4d  PUSH ECX
  00691a4e  MOV ECX,0x7ca6e8
  00691a53  CALL 0x004051c0    ; call FUN_004051c0
  00691a58  MOV ECX,EAX
  00691a5a  CALL 0x00401a90    ; call FUN_00401a90
  00691a5f  CMP dword ptr [EBP + 0xffffe4b4],EAX
  00691a65  JNC 0x00691d5a
  00691a6b  MOV dword ptr [EBP + 0xffffda3c],0x1b58
  00691a75  MOV EDX,dword ptr [EBP + 0xffffe4b4]
  00691a7b  PUSH EDX
  00691a7c  LEA EAX,[EBP + 0xffffda3c]
  00691a82  PUSH EAX
  00691a83  MOV ECX,0x7ca6e8
  00691a88  CALL 0x004051c0    ; call FUN_004051c0
  00691a8d  MOV ECX,EAX
  00691a8f  CALL 0x00401a70    ; call FUN_00401a70
  00691a94  MOV ECX,dword ptr [EAX]
  00691a96  MOV dword ptr [EBP + 0xffffe5c8],ECX
  00691a9c  PUSH 0x77499c
  00691aa1  LEA ECX,[EBP + 0xfffff2d8]
  00691aa7  CALL 0x004054a0    ; call FUN_004054a0
  00691aac  MOV dword ptr [EBP + 0xffffda38],EAX
  00691ab2  MOV EDX,dword ptr [EBP + 0xffffda38]
  00691ab8  MOV dword ptr [EBP + 0xffffda34],EDX
  00691abe  MOV byte ptr [EBP + -0x4],0x52
  00691ac2  MOV EAX,dword ptr [EBP + 0xffffda34]
  00691ac8  PUSH EAX
  00691ac9  LEA ECX,[EBP + 0xfffff800]
  00691acf  PUSH ECX
  00691ad0  LEA EDX,[EBP + 0xfffff3c8]
  00691ad6  PUSH EDX
  00691ad7  CALL 0x00427c80    ; call FUN_00427c80
  00691adc  ADD ESP,0xc
  00691adf  MOV dword ptr [EBP + 0xffffda30],EAX
  00691ae5  MOV EAX,dword ptr [EBP + 0xffffda30]
  00691aeb  PUSH EAX
  00691aec  MOV ECX,dword ptr [EBP + 0xffffe5c8]
  00691af2  ADD ECX,0x1c
  00691af5  PUSH ECX
  00691af6  CALL 0x0040e2d0    ; call destroy<>
  00691afb  ADD ESP,0x8
  00691afe  MOV byte ptr [EBP + 0xffffe568],AL
  00691b04  LEA ECX,[EBP + 0xfffff3c8]
  00691b0a  CALL 0x004053c0    ; call ~function<void___cdecl(void)>
  00691b0f  MOV byte ptr [EBP + -0x4],0x51
  00691b13  LEA ECX,[EBP + 0xfffff2d8]
  00691b19  CALL 0x004053c0    ; call ~function<void___cdecl(void)>
  00691b1e  MOVZX EDX,byte ptr [EBP + 0xffffe568]
  00691b25  TEST EDX,EDX
  00691b27  JZ 0x00691d55
  00691b2d  MOV EAX,dword ptr [EBP + 0xffffe5c8]
  00691b33  MOV ECX,dword ptr [EBP + 0xffffe5c8]
  00691b39  MOV EDX,dword ptr [EAX + 0xb04]
  00691b3f  CMP EDX,dword ptr [ECX + 0xb00]
  00691b45  JGE 0x00691d55
  00691b4b  MOV EAX,dword ptr [EBP + 0xffffe5c8]
  00691b51  CMP dword ptr [EAX + 0xb00],0x1
  00691b58  JZ 0x00691d55
  00691b5e  MOV ECX,dword ptr [EBP + 0xffffe5c8]
  00691b64  MOV EDX,dword ptr [ECX + 0xb04]
  00691b6a  ADD EDX,0x1
  00691b6d  MOV EAX,dword ptr [EBP + 0xffffe5c8]
  00691b73  MOV dword ptr [EAX + 0xb04],EDX
  00691b79  MOV ECX,dword ptr [EBP + 0xffffe5c8]
  00691b7f  MOV EDX,dword ptr [ECX + 0xb00]
  00691b85  PUSH EDX
  00691b86  LEA EAX,[EBP + 0xfffff560]
  00691b8c  PUSH EAX
  00691b8d  CALL 0x0040a850    ; call FUN_0040a850
  00691b92  ADD ESP,0x8
  00691b95  MOV dword ptr [EBP + 0xffffda2c],EAX
  00691b9b  MOV ECX,dword ptr [EBP + 0xffffda2c]
  00691ba1  MOV dword ptr [EBP + 0xffffe210],ECX
  00691ba7  MOV byte ptr [EBP + -0x4],0x53
  00691bab  PUSH 0x774a04
  00691bb0  LEA ECX,[EBP + 0xfffff338]
  00691bb6  CALL 0x004054a0    ; call FUN_004054a0
  00691bbb  MOV dword ptr [EBP + 0xffffda28],EAX
  00691bc1  MOV EDX,dword ptr [EBP + 0xffffda28]
  00691bc7  MOV dword ptr [EBP + 0xffffe21c],EDX
  00691bcd  MOV byte ptr [EBP + -0x4],0x54
  00691bd1  MOV EAX,dword ptr [EBP + 0xffffe5c8]
  00691bd7  MOV ECX,dword ptr [EAX + 0xb04]
  00691bdd  PUSH ECX
  00691bde  LEA EDX,[EBP + 0xfffff320]
  00691be4  PUSH EDX
  00691be5  CALL 0x0040a850    ; call FUN_0040a850
  00691bea  ADD ESP,0x8
  00691bed  MOV dword ptr [EBP + 0xffffe220],EAX
  00691bf3  MOV EAX,dword ptr [EBP + 0xffffe220]
  00691bf9  MOV dword ptr [EBP + 0xffffe218],EAX
  00691bff  MOV byte ptr [EBP + -0x4],0x55
  00691c03  MOV ECX,dword ptr [EBP + 0xffffe21c]
  00691c09  PUSH ECX
  00691c0a  MOV EDX,dword ptr [EBP + 0xffffe218]
  00691c10  PUSH EDX
  00691c11  LEA EAX,[EBP + 0xfffff308]
  00691c17  PUSH EAX
  00691c18  CALL 0x00405cf0    ; call FUN_00405cf0
  00691c1d  ADD ESP,0xc
  00691c20  MOV dword ptr [EBP + 0xffffe214],EAX
  00691c26  MOV ECX,dword ptr [EBP + 0xffffe214]
  00691c2c  MOV dword ptr [EBP + 0xffffe20c],ECX
  00691c32  MOV byte ptr [EBP + -0x4],0x56
  00691c36  MOV EDX,dword ptr [EBP + 0xffffe210]
  00691c3c  PUSH EDX
  00691c3d  MOV EAX,dword ptr [EBP + 0xffffe20c]
  00691c43  PUSH EAX
  00691c44  LEA ECX,[EBP + 0xfffff2f0]
  00691c4a  PUSH ECX
  00691c4b  CALL 0x00405cf0    ; call FUN_00405cf0
  00691c50  ADD ESP,0xc
  00691c53  MOV dword ptr [EBP + 0xffffe208],EAX
  00691c59  MOV EDX,dword ptr [EBP + 0xffffe208]
  00691c5f  PUSH EDX
  00691c60  MOV ECX,dword ptr [EBP + 0xffffe5c8]
  00691c66  ADD ECX,0xa4c
  00691c6c  CALL 0x004053e0    ; call FUN_004053e0
  00691c71  LEA ECX,[EBP + 0xfffff2f0]
  00691c77  CALL 0x004053c0    ; call ~function<void___cdecl(void)>
  00691c7c  MOV byte ptr [EBP + -0x4],0x55
  00691c80  LEA ECX,[EBP + 0xfffff308]
  00691c86  CALL 0x004053c0    ; call ~function<void___cdecl(void)>
  00691c8b  MOV byte ptr [EBP + -0x4],0x54
  00691c8f  LEA ECX,[EBP + 0xfffff320]
  00691c95  CALL 0x004053c0    ; call ~function<void___cdecl(void)>
  00691c9a  MOV byte ptr [EBP + -0x4],0x53
  00691c9e  LEA ECX,[EBP + 0xfffff338]
  00691ca4  CALL 0x004053c0    ; call ~function<void___cdecl(void)>
  00691ca9  MOV byte ptr [EBP + -0x4],0x51
  00691cad  LEA ECX,[EBP + 0xfffff560]
  00691cb3  CALL 0x004053c0    ; call ~function<void___cdecl(void)>
  00691cb8  NOP
  00691cb9  MOV ECX,dword ptr [EBP + 0xffffe5c8]
  00691cbf  ADD ECX,0xa3c
  00691cc5  CALL 0x0040b190    ; call ReleaseDocSite
  00691cca  NOP
  00691ccb  MOV dword ptr [EBP + 0xffffe200],0x1b58
  00691cd5  MOV EAX,dword ptr [EBP + 0xffffe5c8]
  00691cdb  MOV ECX,dword ptr [EAX + 0xb04]
  00691ce1  PUSH ECX
  00691ce2  PUSH 0xc
  00691ce4  PUSH 0x1
  00691ce6  SUB ESP,0x18
  00691ce9  MOV ECX,ESP
  00691ceb  MOV dword ptr [EBP + 0xffffd578],ESP
  00691cf1  LEA EDX,[EBP + 0xfffff800]
  00691cf7  PUSH EDX
  00691cf8  CALL 0x00405520    ; call FUN_00405520
  00691cfd  CALL 0x006ce090    ; call FUN_006ce090
  00691d02  ADD ESP,0x18
  00691d05  MOV dword ptr [EBP + 0xffffe204],EAX
  00691d0b  MOV EAX,dword ptr [EBP + 0xffffe204]
  00691d11  PUSH EAX
  00691d12  SUB ESP,0x18
  00691d15  MOV ECX,ESP
  00691d17  MOV dword ptr [EBP + 0xffffd574],ESP
  00691d1d  LEA EDX,[EBP + 0xfffff800]
  00691d23  PUSH EDX
  00691d24  CALL 0x00405520    ; call FUN_00405520
  00691d29  MOV dword ptr [EBP + 0xffffd570],EAX
  00691d2f  MOV byte ptr [EBP + -0x4],0x57
  00691d33  PUSH 0x1
  00691d35  LEA EAX,[EBP + 0xffffe200]
  00691d3b  PUSH EAX
  00691d3c  MOV ECX,0x7ca6e8
  00691d41  CALL 0x004051c0    ; call FUN_004051c0
  00691d46  PUSH EAX
  00691d47  MOV byte ptr [EBP + -0x4],0x51
  00691d4b  CALL 0x00622460    ; call FUN_00622460
  00691d50  ADD ESP,0x30
  00691d53  JMP 0x00691d5a
LAB_00691d55:
  00691d55  JMP 0x00691a2e
LAB_00691d5a:
  00691d5a  MOV ECX,dword ptr [0x007ca768]
  00691d60  PUSH ECX
  00691d61  MOV EDX,dword ptr [0x007ca764]
  00691d67  PUSH EDX
  00691d68  SUB ESP,0x20
  00691d6b  MOV ECX,0x8
  00691d70  MOV ESI,0x7ca70c
  00691d75  MOV EDI,ESP
  00691d77  MOVSD.REP ES:EDI,ESI
  00691d79  CALL 0x0065e180    ; call FUN_0065e180
  00691d7e  ADD ESP,0x28
  00691d81  MOV byte ptr [EBP + -0x4],0x50
  00691d85  LEA ECX,[EBP + 0xfffff7a0]
  00691d8b  CALL 0x004053c0    ; call ~function<void___cdecl(void)>
  00691d90  MOV dword ptr [EBP + -0x4],0xffffffff
  00691d97  LEA ECX,[EBP + 0xfffff800]
  00691d9d  CALL 0x004053c0    ; call ~function<void___cdecl(void)>
  00691da2  NOP
  00691da3  JMP 0x0069e6d6
LAB_00691dca:
  00691dca  MOV byte ptr [EBP + 0xffffe3d7],0x0
  00691dd1  CALL 0x004d1520    ; call FUN_004d1520
  00691dd6  MOV EAX,dword ptr [EAX]
  00691dd8  MOVZX ECX,byte ptr [EAX + 0x68]
  00691ddc  TEST ECX,ECX
  00691dde  JZ 0x00691ded
  00691de0  CALL 0x004d1520    ; call FUN_004d1520
  00691de5  MOV EDX,dword ptr [EAX]
  00691de7  MOV byte ptr [EDX + 0x68],0x0
  00691deb  JMP 0x00691df8
LAB_00691ded:
  00691ded  CALL 0x004d1520    ; call FUN_004d1520
  00691df2  MOV EAX,dword ptr [EAX]
  00691df4  MOV byte ptr [EAX + 0x68],0x1
LAB_00691df8:
  00691df8  JMP 0x0069e6d6
LAB_00691dfd:
  00691dfd  CALL 0x00454ea0    ; call FUN_00454ea0
  00691e02  MOVZX ECX,byte ptr [EAX + 0xdb8]
  00691e09  TEST ECX,ECX
  00691e0b  JNZ 0x00691eb6
  00691e11  CALL 0x004d1520    ; call FUN_004d1520
  00691e16  MOV EDX,dword ptr [EAX]
  00691e18  MOVZX EAX,byte ptr [EDX + 0xb0]
  00691e1f  TEST EAX,EAX
  00691e21  JNZ 0x00691eb4
  00691e27  CALL 0x004d1520    ; call FUN_004d1520
  00691e2c  MOV ECX,dword ptr [EAX]
  00691e2e  MOVZX EDX,byte ptr [ECX + 0xb1]
  00691e35  TEST EDX,EDX
  00691e37  JNZ 0x00691eb4
  00691e39  CALL 0x004d1520    ; call FUN_004d1520
  00691e3e  MOV EAX,dword ptr [EAX]
  00691e40  MOVZX ECX,byte ptr [EAX + 0xb2]
  00691e47  TEST ECX,ECX
  00691e49  JNZ 0x00691eb4
  00691e4b  CALL 0x004d1520    ; call FUN_004d1520
  00691e50  MOV EDX,dword ptr [EAX]
  00691e52  MOV byte ptr [EDX + 0xb2],0x1
  00691e59  CALL 0x00657510    ; call FUN_00657510
  00691e5e  MOV dword ptr [EBP + 0xffffe4d0],EAX
  00691e64  MOV EAX,dword ptr [EBP + 0xffffe4d0]
  00691e6a  MOV dword ptr [EAX + 0xad4],0x3e8
  00691e74  MOV ECX,dword ptr [EBP + 0xffffe4d0]
  00691e7a  MOV dword ptr [ECX + 0xadc],0x3e8
  00691e84  MOV EDX,dword ptr [EBP + 0xffffe4d0]
  00691e8a  MOV dword ptr [EDX + 0xad8],0x3e8
  00691e94  MOV EAX,dword ptr [EBP + 0xffffe4d0]
  00691e9a  MOV dword ptr [EAX + 0xae8],0x1f4
  00691ea4  MOV ECX,dword ptr [EBP + 0xffffe4d0]
  00691eaa  MOV dword ptr [ECX + 0xaec],0x1f4
LAB_00691eb4:
  00691eb4  JMP 0x00691f15
LAB_00691eb6:
  00691eb6  CALL 0x004d1520    ; call FUN_004d1520
  00691ebb  MOV EDX,dword ptr [EAX]
  00691ebd  MOVZX EAX,byte ptr [EDX + 0xb0]
  00691ec4  TEST EAX,EAX
  00691ec6  JNZ 0x00691f15
  00691ec8  CALL 0x004d1520    ; call FUN_004d1520
  00691ecd  MOV ECX,dword ptr [EAX]
  00691ecf  MOVZX EDX,byte ptr [ECX + 0xb1]
  00691ed6  TEST EDX,EDX
  00691ed8  JNZ 0x00691f15
  00691eda  CALL 0x004d1520    ; call FUN_004d1520
  00691edf  MOV EAX,dword ptr [EAX]
  00691ee1  MOVZX ECX,byte ptr [EAX + 0xb2]
  00691ee8  TEST ECX,ECX
  00691eea  JNZ 0x00691f15
  00691eec  CALL 0x00454ea0    ; call FUN_00454ea0
  00691ef1  MOVZX EDX,byte ptr [EAX + 0xdb9]
  00691ef8  TEST EDX,EDX
  00691efa  JZ 0x00691f15
  00691efc  CALL 0x00454ea0    ; call FUN_00454ea0
  00691f01  MOV EAX,dword ptr [EAX + 0xdbc]
  00691f07  PUSH EAX
  00691f08  PUSH 0x91b4
  00691f0d  CALL 0x006a3f10    ; call FUN_006a3f10
  00691f12  ADD ESP,0x8
LAB_00691f15:
  00691f15  JMP 0x0069e6d6
LAB_00691f1a:
  00691f1a  CALL 0x00454ea0    ; call FUN_00454ea0
  00691f1f  MOVZX ECX,byte ptr [EAX + 0xdb8]
  00691f26  TEST ECX,ECX
  00691f28  JNZ 0x00691fd3
  00691f2e  CALL 0x004d1520    ; call FUN_004d1520
  00691f33  MOV EDX,dword ptr [EAX]
  00691f35  MOVZX EAX,byte ptr [EDX + 0xb0]
  00691f3c  TEST EAX,EAX
  00691f3e  JNZ 0x00691fd1
  00691f44  CALL 0x004d1520    ; call FUN_004d1520
  00691f49  MOV ECX,dword ptr [EAX]
  00691f4b  MOVZX EDX,byte ptr [ECX + 0xb1]
  00691f52  TEST EDX,EDX
  00691f54  JNZ 0x00691fd1
  00691f56  CALL 0x004d1520    ; call FUN_004d1520
  00691f5b  MOV EAX,dword ptr [EAX]
  00691f5d  MOVZX ECX,byte ptr [EAX + 0xb2]
  00691f64  TEST ECX,ECX
  00691f66  JNZ 0x00691fd1
  00691f68  CALL 0x004d1520    ; call FUN_004d1520
  00691f6d  MOV EDX,dword ptr [EAX]
  00691f6f  MOV byte ptr [EDX + 0xb1],0x1
  00691f76  CALL 0x00657510    ; call FUN_00657510
  00691f7b  MOV dword ptr [EBP + 0xffffe4d4],EAX
  00691f81  MOV EAX,dword ptr [EBP + 0xffffe4d4]
  00691f87  MOV dword ptr [EAX + 0xad4],0x3e8
  00691f91  MOV ECX,dword ptr [EBP + 0xffffe4d4]
  00691f97  MOV dword ptr [ECX + 0xadc],0x3e8
  00691fa1  MOV EDX,dword ptr [EBP + 0xffffe4d4]
  00691fa7  MOV dword ptr [EDX + 0xad8],0x3e8
  00691fb1  MOV EAX,dword ptr [EBP + 0xffffe4d4]
  00691fb7  MOV dword ptr [EAX + 0xae8],0x1f4
  00691fc1  MOV ECX,dword ptr [EBP + 0xffffe4d4]
  00691fc7  MOV dword ptr [ECX + 0xaec],0x1f4
LAB_00691fd1:
  00691fd1  JMP 0x00692032
LAB_00691fd3:
  00691fd3  CALL 0x004d1520    ; call FUN_004d1520
  00691fd8  MOV EDX,dword ptr [EAX]
  00691fda  MOVZX EAX,byte ptr [EDX + 0xb0]
  00691fe1  TEST EAX,EAX
  00691fe3  JNZ 0x00692032
  00691fe5  CALL 0x004d1520    ; call FUN_004d1520
  00691fea  MOV ECX,dword ptr [EAX]
  00691fec  MOVZX EDX,byte ptr [ECX + 0xb1]
  00691ff3  TEST EDX,EDX
  00691ff5  JNZ 0x00692032
  00691ff7  CALL 0x004d1520    ; call FUN_004d1520
  00691ffc  MOV EAX,dword ptr [EAX]
  00691ffe  MOVZX ECX,byte ptr [EAX + 0xb2]
  00692005  TEST ECX,ECX
  00692007  JNZ 0x00692032
  00692009  CALL 0x00454ea0    ; call FUN_00454ea0
  0069200e  MOVZX EDX,byte ptr [EAX + 0xdb9]
  00692015  TEST EDX,EDX
  00692017  JZ 0x00692032
  00692019  CALL 0x00454ea0    ; call FUN_00454ea0
  0069201e  MOV EAX,dword ptr [EAX + 0xdbc]
  00692024  PUSH EAX
  00692025  PUSH 0x9150
  0069202a  CALL 0x006a3f10    ; call FUN_006a3f10
  0069202f  ADD ESP,0x8
LAB_00692032:
  00692032  JMP 0x0069e6d6
LAB_00692037:
  00692037  CALL 0x00454ea0    ; call FUN_00454ea0
  0069203c  MOVZX ECX,byte ptr [EAX + 0xdb8]
  00692043  TEST ECX,ECX
  00692045  JNZ 0x0069218e
  0069204b  CALL 0x004d1520    ; call FUN_004d1520
  00692050  MOV EDX,dword ptr [EAX]
  00692052  MOVZX EAX,byte ptr [EDX + 0xb0]
  00692059  TEST EAX,EAX
  0069205b  JNZ 0x00692189
  00692061  CALL 0x004d1520    ; call FUN_004d1520
  00692066  MOV ECX,dword ptr [EAX]
  00692068  MOVZX EDX,byte ptr [ECX + 0xb1]
  0069206f  TEST EDX,EDX
  00692071  JNZ 0x00692189
  00692077  CALL 0x004d1520    ; call FUN_004d1520
  0069207c  MOV EAX,dword ptr [EAX]
  0069207e  MOVZX ECX,byte ptr [EAX + 0xb2]
  00692085  TEST ECX,ECX
  00692087  JNZ 0x00692189
  0069208d  MOV dword ptr [EBP + 0xffffe1fc],0x32
  00692097  LEA EDX,[EBP + 0xffffe1fc]
  0069209d  PUSH EDX
  0069209e  MOV ECX,0x7ca6e8
  006920a3  CALL 0x004051c0    ; call FUN_004051c0
  006920a8  PUSH EAX
  006920a9  CALL 0x0065dd40    ; call FUN_0065dd40
  006920ae  ADD ESP,0x4
  006920b1  CALL 0x004d1520    ; call FUN_004d1520
  006920b6  MOV EAX,dword ptr [EAX]
  006920b8  MOV byte ptr [EAX + 0xb0],0x1
  006920bf  CALL 0x004d1520    ; call FUN_004d1520
  006920c4  MOV ECX,dword ptr [EAX]
  006920c6  MOVZX EDX,byte ptr [ECX + 0x9d4]
  006920cd  TEST EDX,EDX
  006920cf  JZ 0x0069212e
  006920d1  CALL 0x00657510    ; call FUN_00657510
  006920d6  MOV dword ptr [EBP + 0xffffe4d8],EAX
  006920dc  MOV EAX,dword ptr [EBP + 0xffffe4d8]
  006920e2  MOV dword ptr [EAX + 0xad4],0x3e8
  006920ec  MOV ECX,dword ptr [EBP + 0xffffe4d8]
  006920f2  MOV dword ptr [ECX + 0xadc],0x3e8
  006920fc  MOV EDX,dword ptr [EBP + 0xffffe4d8]
  00692102  MOV dword ptr [EDX + 0xad8],0x3e8
  0069210c  MOV EAX,dword ptr [EBP + 0xffffe4d8]
  00692112  MOV dword ptr [EAX + 0xae8],0x1f4
  0069211c  MOV ECX,dword ptr [EBP + 0xffffe4d8]
  00692122  MOV dword ptr [ECX + 0xaec],0x1f4
  0069212c  JMP 0x00692189
LAB_0069212e:
  0069212e  CALL 0x00657510    ; call FUN_00657510
  00692133  MOV dword ptr [EBP + 0xffffe4dc],EAX
  00692139  MOV EDX,dword ptr [EBP + 0xffffe4dc]
  0069213f  MOV dword ptr [EDX + 0xad4],0x0
  00692149  MOV EAX,dword ptr [EBP + 0xffffe4dc]
  0069214f  MOV dword ptr [EAX + 0xadc],0x1f4
  00692159  MOV ECX,dword ptr [EBP + 0xffffe4dc]
  0069215f  MOV dword ptr [ECX + 0xad8],0x1f4
  00692169  MOV EDX,dword ptr [EBP + 0xffffe4dc]
  0069216f  MOV dword ptr [EDX + 0xae8],0x1
  00692179  MOV EAX,dword ptr [EBP + 0xffffe4dc]
  0069217f  MOV dword ptr [EAX + 0xaec],0x1
LAB_00692189:
  00692189  JMP 0x00692250
LAB_0069218e:
  0069218e  CALL 0x004d1520    ; call FUN_004d1520
  00692193  MOV ECX,dword ptr [EAX]
  00692195  MOVZX EDX,byte ptr [ECX + 0xb0]
  0069219c  TEST EDX,EDX
  0069219e  JNZ 0x00692250
  006921a4  CALL 0x004d1520    ; call FUN_004d1520
  006921a9  MOV EAX,dword ptr [EAX]
  006921ab  MOVZX ECX,byte ptr [EAX + 0xb1]
  006921b2  TEST ECX,ECX
  006921b4  JNZ 0x00692250
  006921ba  CALL 0x004d1520    ; call FUN_004d1520
  006921bf  MOV EDX,dword ptr [EAX]
  006921c1  MOVZX EAX,byte ptr [EDX + 0xb2]
  006921c8  TEST EAX,EAX
  006921ca  JNZ 0x00692250
  006921d0  MOV dword ptr [EBP + 0xffffe1f8],0x32
  006921da  LEA ECX,[EBP + 0xffffe1f8]
  006921e0  PUSH ECX
  006921e1  MOV ECX,0x7ca6e8
  006921e6  CALL 0x004051c0    ; call FUN_004051c0
  006921eb  PUSH EAX
  006921ec  CALL 0x0065dd40    ; call FUN_0065dd40
  006921f1  ADD ESP,0x4
  006921f4  CALL 0x004d1520    ; call FUN_004d1520
  006921f9  MOV EDX,dword ptr [EAX]
  006921fb  MOVZX EAX,byte ptr [EDX + 0x9d4]
  00692202  TEST EAX,EAX
  00692204  JZ 0x00692231
  00692206  CALL 0x00454ea0    ; call FUN_00454ea0
  0069220b  MOVZX ECX,byte ptr [EAX + 0xdb9]
  00692212  TEST ECX,ECX
  00692214  JZ 0x0069222f
  00692216  CALL 0x00454ea0    ; call FUN_00454ea0
  0069221b  MOV EDX,dword ptr [EAX + 0xdbc]
  00692221  PUSH EDX
  00692222  PUSH 0x90ec
  00692227  CALL 0x006a3f10    ; call FUN_006a3f10
  0069222c  ADD ESP,0x8
LAB_0069222f:
  0069222f  JMP 0x00692250
LAB_00692231:
  00692231  CALL 0x00454ea0    ; call FUN_00454ea0
  00692236  PUSH EAX
  00692237  CALL 0x00454ea0    ; call FUN_00454ea0
  0069223c  MOV EAX,dword ptr [EAX + 0xdbc]
  00692242  PUSH EAX
  00692243  PUSH 0x9218
  00692248  CALL 0x006a3c30    ; call FUN_006a3c30
  0069224d  ADD ESP,0xc
LAB_00692250:
  00692250  JMP 0x0069e6d6
LAB_00692255:
  00692255  CALL 0x004d1520    ; call FUN_004d1520
  0069225a  MOV ECX,dword ptr [EAX]
  0069225c  MOVZX EDX,byte ptr [ECX + 0x44]
  00692260  MOV dword ptr [EBP + 0xffffe1f4],EDX
  00692266  PUSH 0x0
  00692268  PUSH 0xce4
  0069226d  CALL 0x0068eb20    ; call FUN_0068eb20
  00692272  ADD ESP,0x8
  00692275  CMP dword ptr [EBP + 0xffffe1f4],0x0
  0069227c  JZ 0x00692287
  0069227e  MOV byte ptr [EBP + 0xffffe5d7],0x1
  00692285  JMP 0x0069228e
LAB_00692287:
  00692287  MOV byte ptr [EBP + 0xffffe5d7],0x0
LAB_0069228e:
  0069228e  CALL 0x004d1520    ; call FUN_004d1520
  00692293  MOV EAX,dword ptr [EAX]
  00692295  MOV CL,byte ptr [EBP + 0xffffe5d7]
  0069229b  MOV byte ptr [EAX + 0x44],CL
  0069229e  CALL 0x00454ea0    ; call FUN_00454ea0
  006922a3  MOVZX EDX,byte ptr [EAX + 0xdb8]
  006922aa  TEST EDX,EDX
  006922ac  JZ 0x00692454
  006922b2  CALL 0x00454ea0    ; call FUN_00454ea0
  006922b7  MOVZX EAX,byte ptr [EAX + 0xdb9]
  006922be  TEST EAX,EAX
  006922c0  JZ 0x0069242b
  006922c6  MOV dword ptr [EBP + 0xffffe3c0],0x0
  006922d0  CALL 0x00454ee0    ; call FUN_00454ee0
  006922d5  MOV dword ptr [EBP + 0xffffe278],EAX
  006922db  LEA ECX,[EBP + 0xffffe3bc]
  006922e1  PUSH ECX
  006922e2  MOV ECX,dword ptr [EBP + 0xffffe278]
  006922e8  CALL 0x0042a810    ; call FUN_0042a810
  006922ed  LEA EDX,[EBP + 0xffffe1f0]
  006922f3  PUSH EDX
  006922f4  MOV ECX,dword ptr [EBP + 0xffffe278]
  006922fa  CALL 0x0042a7f0    ; call FUN_0042a7f0
  006922ff  NOP
  00692300  JMP 0x0069230e
LAB_00692302:
  00692302  LEA ECX,[EBP + 0xffffe3bc]
  00692308  CALL 0x0042a560    ; call FUN_0042a560
  0069230d  NOP
LAB_0069230e:
  0069230e  LEA EAX,[EBP + 0xffffe1f0]
  00692314  PUSH EAX
  00692315  LEA ECX,[EBP + 0xffffe3bc]
  0069231b  CALL 0x0040d2d0    ; call FUN_0040d2d0
  00692320  MOVZX ECX,AL
  00692323  TEST ECX,ECX
  00692325  JZ 0x006923d4
  0069232b  LEA ECX,[EBP + 0xffffe3bc]
  00692331  CALL 0x0042a580    ; call FUN_0042a580
  00692336  MOV dword ptr [EBP + 0xffffe4e0],EAX
  0069233c  MOV EDX,dword ptr [EBP + 0xffffe4e0]
  00692342  MOV EAX,dword ptr [EDX + 0x4]
  00692345  MOVZX ECX,byte ptr [EAX + 0xdb8]
  0069234c  TEST ECX,ECX
  0069234e  JZ 0x006923cf
  00692350  CALL 0x00454ea0    ; call FUN_00454ea0
  00692355  MOV EDX,dword ptr [EBP + 0xffffe4e0]
  0069235b  MOV ECX,dword ptr [EDX + 0x4]
  0069235e  MOV EDX,dword ptr [EAX + 0xdbc]
  00692364  CMP EDX,dword ptr [ECX + 0xdbc]
  0069236a  JNZ 0x006923cf
  0069236c  CALL 0x00454ea0    ; call FUN_00454ea0
  00692371  MOV ECX,dword ptr [EBP + 0xffffe4e0]
  00692377  MOV EDX,dword ptr [ECX + 0x4]
  0069237a  MOV EAX,dword ptr [EAX + 0xadc]
  00692380  CMP EAX,dword ptr [EDX + 0xadc]
  00692386  JNZ 0x006923cf
  00692388  CALL 0x00454ea0    ; call FUN_00454ea0
  0069238d  MOV ECX,dword ptr [EBP + 0xffffe4e0]
  00692393  MOV EDX,dword ptr [ECX + 0x4]
  00692396  MOV EAX,dword ptr [EAX + 0xae0]
  0069239c  CMP EAX,dword ptr [EDX + 0xae0]
  006923a2  JNZ 0x006923cf
  006923a4  CALL 0x00454ea0    ; call FUN_00454ea0
  006923a9  MOV ECX,dword ptr [EBP + 0xffffe4e0]
  006923af  MOV EDX,dword ptr [ECX + 0x4]
  006923b2  MOV EAX,dword ptr [EAX + 0xdd8]
  006923b8  CMP EAX,dword ptr [EDX + 0xdd8]
  006923be  JNZ 0x006923cf
  006923c0  MOV ECX,dword ptr [EBP + 0xffffe3c0]
  006923c6  ADD ECX,0x1
  006923c9  MOV dword ptr [EBP + 0xffffe3c0],ECX
LAB_006923cf:
  006923cf  JMP 0x00692302
LAB_006923d4:
  006923d4  CALL 0x00454ea0    ; call FUN_00454ea0
  006923d9  MOV EDX,dword ptr [EAX + 0xdc4]
  006923df  CMP EDX,dword ptr [EBP + 0xffffe3c0]
  006923e5  JNZ 0x00692402
  006923e7  CALL 0x00454ea0    ; call FUN_00454ea0
  006923ec  MOV EAX,dword ptr [EAX + 0x1e8]
  006923f2  PUSH EAX
  006923f3  PUSH 0x7918
  006923f8  CALL 0x006a3f10    ; call FUN_006a3f10
  006923fd  ADD ESP,0x8
  00692400  JMP 0x00692429
LAB_00692402:
  00692402  PUSH 0x0
  00692404  PUSH 0x0
  00692406  PUSH 0x0
  00692408  PUSH 0x0
  0069240a  PUSH 0xa
  0069240c  SUB ESP,0x18
  0069240f  MOV ECX,ESP
  00692411  MOV dword ptr [EBP + 0xffffd56c],ESP
  00692417  PUSH 0x7749f0
  0069241c  CALL 0x004054a0    ; call FUN_004054a0
  00692421  CALL 0x006634f0    ; call FUN_006634f0
  00692426  ADD ESP,0x2c
LAB_00692429:
  00692429  JMP 0x00692452
LAB_0069242b:
  0069242b  PUSH 0x0
  0069242d  PUSH 0x0
  0069242f  PUSH 0x0
  00692431  PUSH 0x0
  00692433  PUSH 0xa
  00692435  SUB ESP,0x18
  00692438  MOV ECX,ESP
  0069243a  MOV dword ptr [EBP + 0xffffd568],ESP
  00692440  PUSH 0x7749d8
  00692445  CALL 0x004054a0    ; call FUN_004054a0
  0069244a  CALL 0x006634f0    ; call FUN_006634f0
  0069244f  ADD ESP,0x2c
LAB_00692452:
  00692452  JMP 0x0069246d
LAB_00692454:
  00692454  CALL 0x00454ea0    ; call FUN_00454ea0
  00692459  MOV ECX,dword ptr [EAX + 0x1e8]
  0069245f  PUSH ECX
  00692460  PUSH 0x7918
  00692465  CALL 0x006a3f10    ; call FUN_006a3f10
  0069246a  ADD ESP,0x8
LAB_0069246d:
  0069246d  CALL 0x00454ea0    ; call FUN_00454ea0
  00692472  PUSH EAX
  00692473  CALL 0x004d1520    ; call FUN_004d1520
  00692478  MOV EDX,dword ptr [EAX]
  0069247a  MOVZX EAX,byte ptr [EDX + 0x44]
  0069247e  PUSH EAX
  0069247f  PUSH 0x84d0
  00692484  CALL 0x006a3c30    ; call FUN_006a3c30
  00692489  ADD ESP,0xc
  0069248c  JMP 0x0069e6d6
LAB_00692491:
  00692491  CALL 0x004d1520    ; call FUN_004d1520
  00692496  MOV ECX,dword ptr [EAX]
  00692498  MOVZX EDX,byte ptr [ECX + 0x44]
  0069249c  MOV dword ptr [EBP + 0xffffe1ec],EDX
  006924a2  PUSH 0x0
  006924a4  PUSH 0xce4
  006924a9  CALL 0x0068eb20    ; call FUN_0068eb20
  006924ae  ADD ESP,0x8
  006924b1  CMP dword ptr [EBP + 0xffffe1ec],0x0
  006924b8  JZ 0x006924c3
  006924ba  MOV byte ptr [EBP + 0xffffe5d6],0x1
  006924c1  JMP 0x006924ca
LAB_006924c3:
  006924c3  MOV byte ptr [EBP + 0xffffe5d6],0x0
LAB_006924ca:
  006924ca  CALL 0x004d1520    ; call FUN_004d1520
  006924cf  MOV EAX,dword ptr [EAX]
  006924d1  MOV CL,byte ptr [EBP + 0xffffe5d6]
  006924d7  MOV byte ptr [EAX + 0x44],CL
  006924da  CALL 0x00454ea0    ; call FUN_00454ea0
  006924df  MOVZX EDX,byte ptr [EAX + 0xdb8]
  006924e6  TEST EDX,EDX
  006924e8  JZ 0x00692690
  006924ee  CALL 0x00454ea0    ; call FUN_00454ea0
  006924f3  MOVZX EAX,byte ptr [EAX + 0xdb9]
  006924fa  TEST EAX,EAX
  006924fc  JZ 0x00692667
  00692502  MOV dword ptr [EBP + 0xffffe3c8],0x0
  0069250c  CALL 0x00454ee0    ; call FUN_00454ee0
  00692511  MOV dword ptr [EBP + 0xffffe270],EAX
  00692517  LEA ECX,[EBP + 0xffffe3c4]
  0069251d  PUSH ECX
  0069251e  MOV ECX,dword ptr [EBP + 0xffffe270]
  00692524  CALL 0x0042a810    ; call FUN_0042a810
  00692529  LEA EDX,[EBP + 0xffffe1e8]
  0069252f  PUSH EDX
  00692530  MOV ECX,dword ptr [EBP + 0xffffe270]
  00692536  CALL 0x0042a7f0    ; call FUN_0042a7f0
  0069253b  NOP
  0069253c  JMP 0x0069254a
LAB_0069253e:
  0069253e  LEA ECX,[EBP + 0xffffe3c4]
  00692544  CALL 0x0042a560    ; call FUN_0042a560
  00692549  NOP
LAB_0069254a:
  0069254a  LEA EAX,[EBP + 0xffffe1e8]
  00692550  PUSH EAX
  00692551  LEA ECX,[EBP + 0xffffe3c4]
  00692557  CALL 0x0040d2d0    ; call FUN_0040d2d0
  0069255c  MOVZX ECX,AL
  0069255f  TEST ECX,ECX
  00692561  JZ 0x00692610
  00692567  LEA ECX,[EBP + 0xffffe3c4]
  0069256d  CALL 0x0042a580    ; call FUN_0042a580
  00692572  MOV dword ptr [EBP + 0xffffe4e4],EAX
  00692578  MOV EDX,dword ptr [EBP + 0xffffe4e4]
  0069257e  MOV EAX,dword ptr [EDX + 0x4]
  00692581  MOVZX ECX,byte ptr [EAX + 0xdb8]
  00692588  TEST ECX,ECX
  0069258a  JZ 0x0069260b
  0069258c  CALL 0x00454ea0    ; call FUN_00454ea0
  00692591  MOV EDX,dword ptr [EBP + 0xffffe4e4]
  00692597  MOV ECX,dword ptr [EDX + 0x4]
  0069259a  MOV EDX,dword ptr [EAX + 0xdbc]
  006925a0  CMP EDX,dword ptr [ECX + 0xdbc]
  006925a6  JNZ 0x0069260b
  006925a8  CALL 0x00454ea0    ; call FUN_00454ea0
  006925ad  MOV ECX,dword ptr [EBP + 0xffffe4e4]
  006925b3  MOV EDX,dword ptr [ECX + 0x4]
  006925b6  MOV EAX,dword ptr [EAX + 0xadc]
  006925bc  CMP EAX,dword ptr [EDX + 0xadc]
  006925c2  JNZ 0x0069260b
  006925c4  CALL 0x00454ea0    ; call FUN_00454ea0
  006925c9  MOV ECX,dword ptr [EBP + 0xffffe4e4]
  006925cf  MOV EDX,dword ptr [ECX + 0x4]
  006925d2  MOV EAX,dword ptr [EAX + 0xae0]
  006925d8  CMP EAX,dword ptr [EDX + 0xae0]
  006925de  JNZ 0x0069260b
  006925e0  CALL 0x00454ea0    ; call FUN_00454ea0
  006925e5  MOV ECX,dword ptr [EBP + 0xffffe4e4]
  006925eb  MOV EDX,dword ptr [ECX + 0x4]
  006925ee  MOV EAX,dword ptr [EAX + 0xdd8]
  006925f4  CMP EAX,dword ptr [EDX + 0xdd8]
  006925fa  JNZ 0x0069260b
  006925fc  MOV ECX,dword ptr [EBP + 0xffffe3c8]
  00692602  ADD ECX,0x1
  00692605  MOV dword ptr [EBP + 0xffffe3c8],ECX
LAB_0069260b:
  0069260b  JMP 0x0069253e
LAB_00692610:
  00692610  CALL 0x00454ea0    ; call FUN_00454ea0
  00692615  MOV EDX,dword ptr [EAX + 0xdc4]
  0069261b  CMP EDX,dword ptr [EBP + 0xffffe3c8]
  00692621  JNZ 0x0069263e
  00692623  CALL 0x00454ea0    ; call FUN_00454ea0
  00692628  MOV EAX,dword ptr [EAX + 0x1e8]
  0069262e  PUSH EAX
  0069262f  PUSH 0x7918
  00692634  CALL 0x006a3f10    ; call FUN_006a3f10
  00692639  ADD ESP,0x8
  0069263c  JMP 0x00692665
LAB_0069263e:
  0069263e  PUSH 0x0
  00692640  PUSH 0x0
  00692642  PUSH 0x0
  00692644  PUSH 0x0
  00692646  PUSH 0xa
  00692648  SUB ESP,0x18
  0069264b  MOV ECX,ESP
  0069264d  MOV dword ptr [EBP + 0xffffd564],ESP
  00692653  PUSH 0x7749c4
  00692658  CALL 0x004054a0    ; call FUN_004054a0
  0069265d  CALL 0x006634f0    ; call FUN_006634f0
  00692662  ADD ESP,0x2c
LAB_00692665:
  00692665  JMP 0x0069268e
LAB_00692667:
  00692667  PUSH 0x0
  00692669  PUSH 0x0
  0069266b  PUSH 0x0
  0069266d  PUSH 0x0
  0069266f  PUSH 0xa
  00692671  SUB ESP,0x18
  00692674  MOV ECX,ESP
  00692676  MOV dword ptr [EBP + 0xffffd560],ESP
  0069267c  PUSH 0x774a34
  00692681  CALL 0x004054a0    ; call FUN_004054a0
  00692686  CALL 0x006634f0    ; call FUN_006634f0
  0069268b  ADD ESP,0x2c
LAB_0069268e:
  0069268e  JMP 0x006926a9
LAB_00692690:
  00692690  CALL 0x00454ea0    ; call FUN_00454ea0
  00692695  MOV ECX,dword ptr [EAX + 0x1e8]
  0069269b  PUSH ECX
  0069269c  PUSH 0x7918
  006926a1  CALL 0x006a3f10    ; call FUN_006a3f10
  006926a6  ADD ESP,0x8
LAB_006926a9:
  006926a9  JMP 0x0069e6d6
LAB_006926ae:
  006926ae  MOV EDX,0x1
  006926b3  TEST EDX,EDX
  006926b5  JZ 0x00692722
  006926b7  MOV dword ptr [EBP + 0xffffe1e4],0xdac
  006926c1  LEA EAX,[EBP + 0xffffe1e4]
  006926c7  PUSH EAX
  006926c8  MOV ECX,0x7ca6e8
  006926cd  CALL 0x004051c0    ; call FUN_004051c0
  006926d2  PUSH EAX
  006926d3  CALL 0x0065e0b0    ; call FUN_0065e0b0
  006926d8  ADD ESP,0x4
  006926db  MOV dword ptr [EBP + 0xffffe1e0],0xd48
  006926e5  LEA ECX,[EBP + 0xffffe1e0]
  006926eb  PUSH ECX
  006926ec  MOV ECX,0x7ca6e8
  006926f1  CALL 0x004051c0    ; call FUN_004051c0
  006926f6  PUSH EAX
  006926f7  CALL 0x0065e0b0    ; call FUN_0065e0b0
  006926fc  ADD ESP,0x4
  006926ff  MOV dword ptr [EBP + 0xffffe1dc],0x13
  00692709  LEA EDX,[EBP + 0xffffe1dc]
  0069270f  PUSH EDX
  00692710  MOV ECX,0x7ca6f0
  00692715  CALL 0x0040d330    ; call FUN_0040d330
  0069271a  MOV ECX,EAX
  0069271c  CALL 0x0040d540    ; call FUN_0040d540
  00692721  NOP
LAB_00692722:
  00692722  MOV dword ptr [EBP + 0xffffe1d8],0x12
  0069272c  LEA EAX,[EBP + 0xffffe1d8]
  00692732  PUSH EAX
  00692733  MOV ECX,0x7ca6e8
  00692738  CALL 0x004051c0    ; call FUN_004051c0
  0069273d  PUSH EAX
  0069273e  CALL 0x0065e0b0    ; call FUN_0065e0b0
  00692743  ADD ESP,0x4
  00692746  MOV dword ptr [EBP + 0xffffe1d4],0x2a8
  00692750  LEA ECX,[EBP + 0xffffe1d4]
  00692756  PUSH ECX
  00692757  MOV ECX,0x7ca6e8
  0069275c  CALL 0x004051c0    ; call FUN_004051c0
  00692761  PUSH EAX
  00692762  CALL 0x0065e0b0    ; call FUN_0065e0b0
  00692767  ADD ESP,0x4
  0069276a  MOV dword ptr [EBP + 0xffffe4b8],0x0
  00692774  JMP 0x00692785
LAB_00692776:
  00692776  MOV EDX,dword ptr [EBP + 0xffffe4b8]
  0069277c  ADD EDX,0x1
  0069277f  MOV dword ptr [EBP + 0xffffe4b8],EDX
LAB_00692785:
  00692785  CMP dword ptr [EBP + 0xffffe4b8],0x4
  0069278c  JGE 0x006927ae
  0069278e  CALL 0x004d1520    ; call FUN_004d1520
  00692793  MOV EAX,dword ptr [EAX]
  00692795  IMUL ECX,dword ptr [EBP + 0xffffe4b8],0x1f0
  0069279f  LEA ECX,[EAX + ECX*0x1 + 0x20c]
  006927a6  CALL 0x004ce8c0    ; call FUN_004ce8c0
  006927ab  NOP
  006927ac  JMP 0x00692776
LAB_006927ae:
  006927ae  CALL 0x004d1520    ; call FUN_004d1520
  006927b3  MOV ECX,dword ptr [EAX]
  006927b5  ADD ECX,0x38
  006927b8  CALL 0x0040d500    ; call FUN_0040d500
  006927bd  MOVZX EDX,AL
  006927c0  TEST EDX,EDX
  006927c2  JZ 0x00692875
  006927c8  LEA EAX,[EBP + 0xffffe3d8]
  006927ce  PUSH EAX
  006927cf  CALL 0x004d1520    ; call FUN_004d1520
  006927d4  MOV ECX,dword ptr [EAX]
  006927d6  ADD ECX,0x160
  006927dc  CALL 0x004021b0    ; call FUN_004021b0
  006927e1  NOP
LAB_006927e2:
  006927e2  LEA ECX,[EBP + 0xffffd55c]
  006927e8  PUSH ECX
  006927e9  CALL 0x004d1520    ; call FUN_004d1520
  006927ee  MOV ECX,dword ptr [EAX]
  006927f0  ADD ECX,0x160
  006927f6  CALL 0x00402170    ; call FUN_00402170
  006927fb  PUSH EAX
  006927fc  LEA ECX,[EBP + 0xffffe3d8]
  00692802  CALL 0x00426ed0    ; call FUN_00426ed0
  00692807  MOVZX EDX,AL
  0069280a  TEST EDX,EDX
  0069280c  JZ 0x0069285d
  0069280e  LEA ECX,[EBP + 0xffffe3d8]
  00692814  CALL 0x0044ddc0    ; call FUN_0044ddc0
  00692819  PUSH EAX
  0069281a  CALL 0x004d1b30    ; call FUN_004d1b30
  0069281f  MOV ECX,dword ptr [EAX]
  00692821  CALL 0x00517980    ; call FUN_00517980
  00692826  NOP
  00692827  MOV EAX,dword ptr [EBP + 0xffffe3d8]
  0069282d  MOV dword ptr [EBP + 0xffffe1d0],EAX
  00692833  MOV ECX,dword ptr [EBP + 0xffffe1d0]
  00692839  PUSH ECX
  0069283a  LEA EDX,[EBP + 0xffffd558]
  00692840  PUSH EDX
  00692841  CALL 0x004d1520    ; call FUN_004d1520
  00692846  MOV ECX,dword ptr [EAX]
  00692848  ADD ECX,0x160
  0069284e  CALL 0x0044dea0    ; call FUN_0044dea0
  00692853  MOV EAX,dword ptr [EAX]
  00692855  MOV dword ptr [EBP + 0xffffe3d8],EAX
  0069285b  JMP 0x006927e2
LAB_0069285d:
  0069285d  CALL 0x004d1520    ; call FUN_004d1520
  00692862  MOV ECX,dword ptr [EAX]
  00692864  ADD ECX,0x160
  0069286a  CALL 0x0040d5f0    ; call FUN_0040d5f0
  0069286f  NOP
  00692870  JMP 0x00692b44
LAB_00692875:
  00692875  LEA ECX,[EBP + 0xffffe5a4]
  0069287b  PUSH ECX
  0069287c  CALL 0x004d1520    ; call FUN_004d1520
  00692881  MOV ECX,dword ptr [EAX]
  00692883  ADD ECX,0x38
  00692886  CALL 0x004021b0    ; call FUN_004021b0
  0069288b  NOP
  0069288c  JMP 0x0069289a
LAB_0069288e:
  0069288e  LEA ECX,[EBP + 0xffffe5a4]
  00692894  CALL 0x00518450    ; call FUN_00518450
  00692899  NOP
LAB_0069289a:
  0069289a  LEA EDX,[EBP + 0xffffd554]
  006928a0  PUSH EDX
  006928a1  CALL 0x004d1520    ; call FUN_004d1520
  006928a6  MOV ECX,dword ptr [EAX]
  006928a8  ADD ECX,0x38
  006928ab  CALL 0x00402170    ; call FUN_00402170
  006928b0  PUSH EAX
  006928b1  LEA ECX,[EBP + 0xffffe5a4]
  006928b7  CALL 0x00426ed0    ; call FUN_00426ed0
  006928bc  MOVZX EAX,AL
  006928bf  TEST EAX,EAX
  006928c1  JZ 0x00692a8c
  006928c7  LEA ECX,[EBP + 0xffffe560]
  006928cd  PUSH ECX
  006928ce  LEA ECX,[EBP + 0xffffe5a4]
  006928d4  CALL 0x00401b20    ; call FUN_00401b20
  006928d9  ADD EAX,0x8
  006928dc  MOV ECX,EAX
  006928de  CALL 0x0044e0f0    ; call FUN_0044e0f0
  006928e3  NOP
LAB_006928e4:
  006928e4  LEA EDX,[EBP + 0xffffd550]
  006928ea  PUSH EDX
  006928eb  LEA ECX,[EBP + 0xffffe5a4]
  006928f1  CALL 0x00401b20    ; call FUN_00401b20
  006928f6  ADD EAX,0x8
  006928f9  MOV ECX,EAX
  006928fb  CALL 0x0040d9a0    ; call FUN_0040d9a0
  00692900  PUSH EAX
  00692901  LEA ECX,[EBP + 0xffffe560]
  00692907  CALL 0x0040d2d0    ; call FUN_0040d2d0
  0069290c  MOVZX EAX,AL
  0069290f  TEST EAX,EAX
  00692911  JZ 0x006929e6
  00692917  LEA ECX,[EBP + 0xffffe560]
  0069291d  CALL 0x0042a580    ; call FUN_0042a580
  00692922  MOV ECX,dword ptr [EAX]
  00692924  CMP dword ptr [ECX + 0x204],0x0
  0069292b  JZ 0x006929d5
  00692931  LEA ECX,[EBP + 0xffffe560]
  00692937  CALL 0x0042a580    ; call FUN_0042a580
  0069293c  MOV EDX,dword ptr [EAX]
  0069293e  CMP dword ptr [EDX + 0x204],0x12c
  00692948  JZ 0x006929d5
  0069294e  LEA ECX,[EBP + 0xffffe560]
  00692954  CALL 0x0042a580    ; call FUN_0042a580
  00692959  MOV ECX,dword ptr [EAX]
  0069295b  CALL 0x0062ed50    ; call FUN_0062ed50
  00692960  NOP
  00692961  LEA ECX,[EBP + 0xffffe560]
  00692967  CALL 0x0042a580    ; call FUN_0042a580
  0069296c  MOV EAX,dword ptr [EAX]
  0069296e  MOV dword ptr [EBP + 0xffffe2fc],EAX
  00692974  CMP dword ptr [EBP + 0xffffe2fc],0x0
  0069297b  JZ 0x00692992
  0069297d  PUSH 0x1
  0069297f  MOV ECX,dword ptr [EBP + 0xffffe2fc]
  00692985  CALL 0x004d1980    ; call FUN_004d1980
  0069298a  MOV dword ptr [EBP + 0xffffe1cc],EAX
  00692990  JMP 0x0069299c
LAB_00692992:
  00692992  MOV dword ptr [EBP + 0xffffe1cc],0x0
LAB_0069299c:
  0069299c  MOV ECX,dword ptr [EBP + 0xffffe560]
  006929a2  MOV dword ptr [EBP + 0xffffe1c8],ECX
  006929a8  MOV EDX,dword ptr [EBP + 0xffffe1c8]
  006929ae  PUSH EDX
  006929af  LEA EAX,[EBP + 0xffffd54c]
  006929b5  PUSH EAX
  006929b6  LEA ECX,[EBP + 0xffffe5a4]
  006929bc  CALL 0x00401b20    ; call FUN_00401b20
  006929c1  ADD EAX,0x8
  006929c4  MOV ECX,EAX
  006929c6  CALL 0x0044e0a0    ; call FUN_0044e0a0
  006929cb  MOV ECX,dword ptr [EAX]
  006929cd  MOV dword ptr [EBP + 0xffffe560],ECX
  006929d3  JMP 0x006929e1
LAB_006929d5:
  006929d5  LEA ECX,[EBP + 0xffffe5a4]
  006929db  CALL 0x00518450    ; call FUN_00518450
  006929e0  NOP
LAB_006929e1:
  006929e1  JMP 0x006928e4
LAB_006929e6:
  006929e6  LEA EDX,[EBP + 0xffffe3dc]
  006929ec  PUSH EDX
  006929ed  LEA ECX,[EBP + 0xffffe5a4]
  006929f3  CALL 0x00401b20    ; call FUN_00401b20
  006929f8  ADD EAX,0x10
  006929fb  MOV ECX,EAX
  006929fd  CALL 0x004021b0    ; call FUN_004021b0
  00692a02  NOP
LAB_00692a03:
  00692a03  LEA EAX,[EBP + 0xffffd548]
  00692a09  PUSH EAX
  00692a0a  LEA ECX,[EBP + 0xffffe5a4]
  00692a10  CALL 0x00401b20    ; call FUN_00401b20
  00692a15  ADD EAX,0x10
  00692a18  MOV ECX,EAX
  00692a1a  CALL 0x00402170    ; call FUN_00402170
  00692a1f  PUSH EAX
  00692a20  LEA ECX,[EBP + 0xffffe3dc]
  00692a26  CALL 0x00426ed0    ; call FUN_00426ed0
  00692a2b  MOVZX ECX,AL
  00692a2e  TEST ECX,ECX
  00692a30  JZ 0x00692a87
  00692a32  LEA ECX,[EBP + 0xffffe3dc]
  00692a38  CALL 0x0044ddc0    ; call FUN_0044ddc0
  00692a3d  PUSH EAX
  00692a3e  CALL 0x004d1b30    ; call FUN_004d1b30
  00692a43  MOV ECX,dword ptr [EAX]
  00692a45  CALL 0x00517980    ; call FUN_00517980
  00692a4a  NOP
  00692a4b  MOV EDX,dword ptr [EBP + 0xffffe3dc]
  00692a51  MOV dword ptr [EBP + 0xffffe1c4],EDX
  00692a57  MOV EAX,dword ptr [EBP + 0xffffe1c4]
  00692a5d  PUSH EAX
  00692a5e  LEA ECX,[EBP + 0xffffd544]
  00692a64  PUSH ECX
  00692a65  LEA ECX,[EBP + 0xffffe5a4]
  00692a6b  CALL 0x00401b20    ; call FUN_00401b20
  00692a70  ADD EAX,0x10
  00692a73  MOV ECX,EAX
  00692a75  CALL 0x0044dea0    ; call FUN_0044dea0
  00692a7a  MOV EDX,dword ptr [EAX]
  00692a7c  MOV dword ptr [EBP + 0xffffe3dc],EDX
  00692a82  JMP 0x00692a03
LAB_00692a87:
  00692a87  JMP 0x0069288e
LAB_00692a8c:
  00692a8c  CALL 0x004d1520    ; call FUN_004d1520
  00692a91  MOV ECX,dword ptr [EAX]
  00692a93  ADD ECX,0x38
  00692a96  CALL 0x0069f300    ; call FUN_0069f300
  00692a9b  NOP
  00692a9c  LEA EAX,[EBP + 0xffffe3e0]
  00692aa2  PUSH EAX
  00692aa3  CALL 0x004d1520    ; call FUN_004d1520
  00692aa8  MOV ECX,dword ptr [EAX]
  00692aaa  ADD ECX,0x160
  00692ab0  CALL 0x004021b0    ; call FUN_004021b0
  00692ab5  NOP
LAB_00692ab6:
  00692ab6  LEA ECX,[EBP + 0xffffd540]
  00692abc  PUSH ECX
  00692abd  CALL 0x004d1520    ; call FUN_004d1520
  00692ac2  MOV ECX,dword ptr [EAX]
  00692ac4  ADD ECX,0x160
  00692aca  CALL 0x00402170    ; call FUN_00402170
  00692acf  PUSH EAX
  00692ad0  LEA ECX,[EBP + 0xffffe3e0]
  00692ad6  CALL 0x00426ed0    ; call FUN_00426ed0
  00692adb  MOVZX EDX,AL
  00692ade  TEST EDX,EDX
  00692ae0  JZ 0x00692b31
  00692ae2  LEA ECX,[EBP + 0xffffe3e0]
  00692ae8  CALL 0x0044ddc0    ; call FUN_0044ddc0
  00692aed  PUSH EAX
  00692aee  CALL 0x004d1b30    ; call FUN_004d1b30
  00692af3  MOV ECX,dword ptr [EAX]
  00692af5  CALL 0x00517980    ; call FUN_00517980
  00692afa  NOP
  00692afb  MOV EAX,dword ptr [EBP + 0xffffe3e0]
  00692b01  MOV dword ptr [EBP + 0xffffe1c0],EAX
  00692b07  MOV ECX,dword ptr [EBP + 0xffffe1c0]
  00692b0d  PUSH ECX
  00692b0e  LEA EDX,[EBP + 0xffffd53c]
  00692b14  PUSH EDX
  00692b15  CALL 0x004d1520    ; call FUN_004d1520
  00692b1a  MOV ECX,dword ptr [EAX]
  00692b1c  ADD ECX,0x160
  00692b22  CALL 0x0044dea0    ; call FUN_0044dea0
  00692b27  MOV EAX,dword ptr [EAX]
  00692b29  MOV dword ptr [EBP + 0xffffe3e0],EAX
  00692b2f  JMP 0x00692ab6
LAB_00692b31:
  00692b31  CALL 0x004d1520    ; call FUN_004d1520
  00692b36  MOV ECX,dword ptr [EAX]
  00692b38  ADD ECX,0x160
  00692b3e  CALL 0x0040d5f0    ; call FUN_0040d5f0
  00692b43  NOP
LAB_00692b44:
  00692b44  CALL 0x004d1520    ; call FUN_004d1520
  00692b49  MOV ECX,dword ptr [EAX]
  00692b4b  ADD ECX,0x74
  00692b4e  CALL 0x0069f880    ; call FUN_0069f880
  00692b53  CALL 0x004d1520    ; call FUN_004d1520
  00692b58  MOV ECX,dword ptr [EAX]
  00692b5a  MOV byte ptr [ECX + 0x44],0x0
  00692b5e  CALL 0x0053c7e0    ; call FUN_0053c7e0
  00692b63  MOV ECX,EAX
  00692b65  CALL 0x004a1510    ; call FUN_004a1510
  00692b6a  CALL 0x0053c880    ; call FUN_0053c880
  00692b6f  MOV dword ptr [0x007ca1d8],0x2
  00692b79  CALL 0x00454ea0    ; call FUN_00454ea0
  00692b7e  MOV dword ptr [EBP + 0xffffe620],EAX
  00692b84  MOV EDX,dword ptr [EBP + 0xffffe620]
  00692b8a  MOVZX EAX,byte ptr [EDX + 0xdb8]
  00692b91  TEST EAX,EAX
  00692b93  JNZ 0x00692cb9
  00692b99  MOV ECX,dword ptr [EBP + 0xffffe620]
  00692b9f  MOV dword ptr [ECX + 0x22c],0x0
  00692ba9  MOV EDX,dword ptr [EBP + 0xffffe620]
  00692baf  MOV dword ptr [EDX + 0xdd8],0x2
  00692bb9  MOV EAX,dword ptr [EBP + 0xffffe620]
  00692bbf  MOV byte ptr [EAX + 0x170],0x1
  00692bc6  MOV ECX,dword ptr [EBP + 0xffffe620]
  00692bcc  MOV dword ptr [ECX + 0x24],0x0
  00692bd3  MOV EDX,dword ptr [EBP + 0xffffe620]
  00692bd9  MOV byte ptr [EDX + 0x28],0x0
  00692bdd  PUSH 0x1
  00692bdf  PUSH 0x0
  00692be1  MOV ECX,dword ptr [EBP + 0xffffe620]
  00692be7  CALL 0x0047fef0    ; call FUN_0047fef0
  00692bec  PUSH 0x1
  00692bee  PUSH 0x0
  00692bf0  MOV ECX,dword ptr [EBP + 0xffffe620]
  00692bf6  CALL 0x004821f0    ; call FUN_004821f0
  00692bfb  PUSH 0x1
  00692bfd  PUSH 0x0
  00692bff  MOV ECX,dword ptr [EBP + 0xffffe620]
  00692c05  CALL 0x00483360    ; call FUN_00483360
  00692c0a  MOV ECX,dword ptr [EBP + 0xffffe620]
  00692c10  CALL 0x00465880    ; call FUN_00465880
  00692c15  MOV ECX,dword ptr [EBP + 0xffffe620]
  00692c1b  CALL 0x00465570    ; call FUN_00465570
  00692c20  MOV ECX,dword ptr [EBP + 0xffffe620]
  00692c26  CALL 0x00465a40    ; call FUN_00465a40
  00692c2b  MOV ECX,dword ptr [EBP + 0xffffe620]
  00692c31  CALL 0x00465db0    ; call FUN_00465db0
  00692c36  MOV ECX,dword ptr [EBP + 0xffffe620]
  00692c3c  CALL 0x00465c50    ; call FUN_00465c50
  00692c41  MOV ECX,dword ptr [EBP + 0xffffe620]
  00692c47  CALL 0x00484d20    ; call FUN_00484d20
  00692c4c  MOV ECX,dword ptr [EBP + 0xffffe620]
  00692c52  CALL 0x00630c00    ; call FUN_00630c00
  00692c57  MOV EAX,dword ptr [EBP + 0xffffe620]
  00692c5d  PUSH EAX
  00692c5e  CALL 0x004aae50    ; call FUN_004aae50
  00692c63  ADD ESP,0x4
  00692c66  MOV ECX,dword ptr [EBP + 0xffffe620]
  00692c6c  MOV dword ptr [ECX + 0x20],0x0
  00692c73  MOV EDX,dword ptr [EBP + 0xffffe620]
  00692c79  MOV dword ptr [EDX + 0x214],0x0
  00692c83  MOV EAX,dword ptr [EBP + 0xffffe620]
  00692c89  MOV EDX,dword ptr [EAX]
  00692c8b  MOV ECX,dword ptr [EBP + 0xffffe620]
  00692c91  MOV EAX,dword ptr [EDX + 0x134]
  00692c97  CALL EAX
  00692c99  PUSH 0x0
  00692c9b  PUSH 0x9
  00692c9d  MOV ECX,dword ptr [EBP + 0xffffe620]
  00692ca3  MOV EDX,dword ptr [ECX]
  00692ca5  MOV ECX,dword ptr [EBP + 0xffffe620]
  00692cab  MOV EAX,dword ptr [EDX + 0x138]
  00692cb1  CALL EAX
  00692cb3  NOP
  00692cb4  JMP 0x00692e6f
LAB_00692cb9:
  00692cb9  MOV dword ptr [EBP + 0xffffe26c],0x7ca758
  00692cc3  MOV ECX,dword ptr [EBP + 0xffffe26c]
  00692cc9  CALL 0x004018d0    ; call FUN_004018d0
  00692cce  MOV dword ptr [EBP + 0xffffe3e4],EAX
  00692cd4  MOV ECX,dword ptr [EBP + 0xffffe26c]
  00692cda  CALL 0x004018b0    ; call FUN_004018b0
  00692cdf  MOV dword ptr [EBP + 0xffffe1bc],EAX
  00692ce5  JMP 0x00692cf6
LAB_00692ce7:
  00692ce7  MOV ECX,dword ptr [EBP + 0xffffe3e4]
  00692ced  ADD ECX,0x4
  00692cf0  MOV dword ptr [EBP + 0xffffe3e4],ECX
LAB_00692cf6:
  00692cf6  MOV EDX,dword ptr [EBP + 0xffffe3e4]
  00692cfc  CMP EDX,dword ptr [EBP + 0xffffe1bc]
  00692d02  JZ 0x00692e6f
  00692d08  MOV EAX,dword ptr [EBP + 0xffffe3e4]
  00692d0e  MOV dword ptr [EBP + 0xffffe608],EAX
  00692d14  MOV ECX,dword ptr [EBP + 0xffffe608]
  00692d1a  CMP dword ptr [ECX],0x0
  00692d1d  JZ 0x00692e6a
  00692d23  MOV EDX,dword ptr [EBP + 0xffffe608]
  00692d29  MOV EAX,dword ptr [EDX]
  00692d2b  MOV dword ptr [EAX + 0x22c],0x0
  00692d35  MOV ECX,dword ptr [EBP + 0xffffe608]
  00692d3b  MOV EDX,dword ptr [ECX]
  00692d3d  MOV dword ptr [EDX + 0xdd8],0x2
  00692d47  MOV EAX,dword ptr [EBP + 0xffffe608]
  00692d4d  MOV ECX,dword ptr [EAX]
  00692d4f  MOV byte ptr [ECX + 0x170],0x1
  00692d56  MOV EDX,dword ptr [EBP + 0xffffe608]
  00692d5c  MOV EAX,dword ptr [EDX]
  00692d5e  MOV dword ptr [EAX + 0x24],0x0
  00692d65  MOV ECX,dword ptr [EBP + 0xffffe608]
  00692d6b  MOV EDX,dword ptr [ECX]
  00692d6d  MOV byte ptr [EDX + 0x28],0x0
  00692d71  PUSH 0x1
  00692d73  PUSH 0x0
  00692d75  MOV EAX,dword ptr [EBP + 0xffffe608]
  00692d7b  MOV ECX,dword ptr [EAX]
  00692d7d  CALL 0x0047fef0    ; call FUN_0047fef0
  00692d82  PUSH 0x1
  00692d84  PUSH 0x0
  00692d86  MOV ECX,dword ptr [EBP + 0xffffe608]
  00692d8c  MOV ECX,dword ptr [ECX]
  00692d8e  CALL 0x004821f0    ; call FUN_004821f0
  00692d93  PUSH 0x1
  00692d95  PUSH 0x0
  00692d97  MOV EDX,dword ptr [EBP + 0xffffe608]
  00692d9d  MOV ECX,dword ptr [EDX]
  00692d9f  CALL 0x00483360    ; call FUN_00483360
  00692da4  MOV EAX,dword ptr [EBP + 0xffffe608]
  00692daa  MOV ECX,dword ptr [EAX]
  00692dac  CALL 0x00465880    ; call FUN_00465880
  00692db1  MOV ECX,dword ptr [EBP + 0xffffe608]
  00692db7  MOV ECX,dword ptr [ECX]
  00692db9  CALL 0x00465570    ; call FUN_00465570
  00692dbe  MOV EDX,dword ptr [EBP + 0xffffe608]
  00692dc4  MOV ECX,dword ptr [EDX]
  00692dc6  CALL 0x00465a40    ; call FUN_00465a40
  00692dcb  MOV EAX,dword ptr [EBP + 0xffffe608]
  00692dd1  MOV ECX,dword ptr [EAX]
  00692dd3  CALL 0x00465db0    ; call FUN_00465db0
  00692dd8  MOV ECX,dword ptr [EBP + 0xffffe608]
  00692dde  MOV ECX,dword ptr [ECX]
  00692de0  CALL 0x00465c50    ; call FUN_00465c50
  00692de5  MOV EDX,dword ptr [EBP + 0xffffe608]
  00692deb  MOV ECX,dword ptr [EDX]
  00692ded  CALL 0x00484d20    ; call FUN_00484d20
  00692df2  MOV EAX,dword ptr [EBP + 0xffffe608]
  00692df8  MOV ECX,dword ptr [EAX]
  00692dfa  CALL 0x00630c00    ; call FUN_00630c00
  00692dff  MOV ECX,dword ptr [EBP + 0xffffe608]
  00692e05  MOV EDX,dword ptr [ECX]
  00692e07  PUSH EDX
  00692e08  CALL 0x004aae50    ; call FUN_004aae50
  00692e0d  ADD ESP,0x4
  00692e10  MOV EAX,dword ptr [EBP + 0xffffe608]
  00692e16  MOV ECX,dword ptr [EAX]
  00692e18  MOV dword ptr [ECX + 0x20],0x0
  00692e1f  MOV EDX,dword ptr [EBP + 0xffffe608]
  00692e25  MOV EAX,dword ptr [EDX]
  00692e27  MOV dword ptr [EAX + 0x214],0x0
  00692e31  MOV ECX,dword ptr [EBP + 0xffffe608]
  00692e37  MOV EDX,dword ptr [ECX]
  00692e39  MOV EAX,dword ptr [EBP + 0xffffe608]
  00692e3f  MOV EDX,dword ptr [EDX]
  00692e41  MOV ECX,dword ptr [EAX]
  00692e43  MOV EAX,dword ptr [EDX + 0x134]
  00692e49  CALL EAX
  00692e4b  PUSH 0x0
  00692e4d  PUSH 0x9
  00692e4f  MOV ECX,dword ptr [EBP + 0xffffe608]
  00692e55  MOV EDX,dword ptr [ECX]
  00692e57  MOV EAX,dword ptr [EBP + 0xffffe608]
  00692e5d  MOV EDX,dword ptr [EDX]
  00692e5f  MOV ECX,dword ptr [EAX]
  00692e61  MOV EAX,dword ptr [EDX + 0x138]
  00692e67  CALL EAX
  00692e69  NOP
LAB_00692e6a:
  00692e6a  JMP 0x00692ce7
LAB_00692e6f:
  00692e6f  MOV ECX,dword ptr [EBP + 0xffffe620]
  00692e75  MOV EDX,dword ptr [ECX + 0xadc]
  00692e7b  PUSH EDX
  00692e7c  MOV ECX,dword ptr [0x007ca640]
  00692e82  CALL 0x005a7d70    ; call FUN_005a7d70
  00692e87  MOV dword ptr [EBP + 0xffffe370],EAX
  00692e8d  PUSH 0x740703
  00692e92  LEA ECX,[EBP + 0xfffff7d0]
  00692e98  CALL 0x004054a0    ; call FUN_004054a0
  00692e9d  MOV dword ptr [EBP + -0x4],0x58
  00692ea4  MOV dword ptr [EBP + 0xffffe4e8],0x0
  00692eae  JMP 0x00692ebf
LAB_00692eb0:
  00692eb0  MOV EAX,dword ptr [EBP + 0xffffe4e8]
  00692eb6  ADD EAX,0x1
  00692eb9  MOV dword ptr [EBP + 0xffffe4e8],EAX
LAB_00692ebf:
  00692ebf  MOV ECX,dword ptr [EBP + 0xffffe370]
  00692ec5  ADD ECX,0x38
  00692ec8  CALL 0x00519290    ; call FUN_00519290
  00692ecd  CMP dword ptr [EBP + 0xffffe4e8],EAX
  00692ed3  JNC 0x00692f21
  00692ed5  MOV ECX,dword ptr [EBP + 0xffffe4e8]
  00692edb  PUSH ECX
  00692edc  MOV ECX,dword ptr [EBP + 0xffffe370]
  00692ee2  ADD ECX,0x38
  00692ee5  CALL 0x00519270    ; call FUN_00519270
  00692eea  MOV EDX,dword ptr [EBP + 0xffffe620]
  00692ef0  MOV EAX,dword ptr [EAX]
  00692ef2  CMP EAX,dword ptr [EDX + 0xae0]
  00692ef8  JNZ 0x00692f1f
  00692efa  MOV ECX,dword ptr [EBP + 0xffffe4e8]
  00692f00  PUSH ECX
  00692f01  MOV ECX,dword ptr [EBP + 0xffffe370]
  00692f07  ADD ECX,0x38
  00692f0a  CALL 0x00519270    ; call FUN_00519270
  00692f0f  ADD EAX,0x4
  00692f12  PUSH EAX
  00692f13  LEA ECX,[EBP + 0xfffff7d0]
  00692f19  CALL 0x0040d840    ; call FUN_0040d840
  00692f1e  NOP
LAB_00692f1f:
  00692f1f  JMP 0x00692eb0
LAB_00692f21:
  00692f21  SUB ESP,0x18
  00692f24  MOV ECX,ESP
  00692f26  MOV dword ptr [EBP + 0xffffd538],ESP
  00692f2c  LEA EDX,[EBP + 0xfffff7d0]
  00692f32  PUSH EDX
  00692f33  CALL 0x00405520    ; call FUN_00405520
  00692f38  MOV EAX,dword ptr [EBP + 0xffffe620]
  00692f3e  PUSH EAX
  00692f3f  CALL 0x004e95d0    ; call FUN_004e95d0
  00692f44  ADD ESP,0x1c
  00692f47  MOV ECX,dword ptr [EBP + 0xffffe620]
  00692f4d  MOVZX EDX,byte ptr [ECX + 0xdb8]
  00692f54  TEST EDX,EDX
  00692f56  JNZ 0x00692f99
  00692f58  MOV EAX,dword ptr [EBP + 0xffffe620]
  00692f5e  MOV ECX,dword ptr [EBP + 0xffffe620]
  00692f64  MOV EDX,dword ptr [ECX + 0x9fc]
  00692f6a  MOV dword ptr [EAX + 0x224],EDX
  00692f70  MOV EAX,dword ptr [EBP + 0xffffe620]
  00692f76  MOV ECX,dword ptr [EBP + 0xffffe620]
  00692f7c  MOV EDX,dword ptr [ECX + 0xa00]
  00692f82  MOV dword ptr [EAX + 0x228],EDX
  00692f88  MOV ECX,dword ptr [EBP + 0xffffe620]
  00692f8e  CALL 0x00479060    ; call FUN_00479060
  00692f93  NOP
  00692f94  JMP 0x0069303f
LAB_00692f99:
  00692f99  MOV dword ptr [EBP + 0xffffe268],0x7ca758
  00692fa3  MOV ECX,dword ptr [EBP + 0xffffe268]
  00692fa9  CALL 0x004018d0    ; call FUN_004018d0
  00692fae  MOV dword ptr [EBP + 0xffffe3e8],EAX
  00692fb4  MOV ECX,dword ptr [EBP + 0xffffe268]
  00692fba  CALL 0x004018b0    ; call FUN_004018b0
  00692fbf  MOV dword ptr [EBP + 0xffffe1b8],EAX
  00692fc5  JMP 0x00692fd6
LAB_00692fc7:
  00692fc7  MOV EAX,dword ptr [EBP + 0xffffe3e8]
  00692fcd  ADD EAX,0x4
  00692fd0  MOV dword ptr [EBP + 0xffffe3e8],EAX
LAB_00692fd6:
  00692fd6  MOV ECX,dword ptr [EBP + 0xffffe3e8]
  00692fdc  CMP ECX,dword ptr [EBP + 0xffffe1b8]
  00692fe2  JZ 0x0069303f
  00692fe4  MOV EDX,dword ptr [EBP + 0xffffe3e8]
  00692fea  MOV dword ptr [EBP + 0xffffe3ec],EDX
  00692ff0  MOV EAX,dword ptr [EBP + 0xffffe3ec]
  00692ff6  CMP dword ptr [EAX],0x0
  00692ff9  JZ 0x0069303d
  00692ffb  MOV ECX,dword ptr [EBP + 0xffffe3ec]
  00693001  MOV EDX,dword ptr [ECX]
  00693003  MOV EAX,dword ptr [EBP + 0xffffe620]
  00693009  MOV ECX,dword ptr [EAX + 0x9fc]
  0069300f  MOV dword ptr [EDX + 0x224],ECX
  00693015  MOV EDX,dword ptr [EBP + 0xffffe3ec]
  0069301b  MOV EAX,dword ptr [EDX]
  0069301d  MOV ECX,dword ptr [EBP + 0xffffe620]
  00693023  MOV EDX,dword ptr [ECX + 0xa00]
  00693029  MOV dword ptr [EAX + 0x228],EDX
  0069302f  MOV EAX,dword ptr [EBP + 0xffffe3ec]
  00693035  MOV ECX,dword ptr [EAX]
  00693037  CALL 0x00479060    ; call FUN_00479060
  0069303c  NOP
LAB_0069303d:
  0069303d  JMP 0x00692fc7
LAB_0069303f:
  0069303f  CALL 0x004d1520    ; call FUN_004d1520
  00693044  MOV ECX,dword ptr [EAX]
  00693046  MOVZX EDX,byte ptr [ECX + 0x9d4]
  0069304d  TEST EDX,EDX
  0069304f  JZ 0x00693086
  00693051  MOV EAX,dword ptr [EBP + 0xffffe620]
  00693057  MOV ECX,dword ptr [EBP + 0xffffe620]
  0069305d  MOV EDX,dword ptr [ECX + 0x99c]
  00693063  MOV dword ptr [EAX + 0x6e8],EDX
  00693069  MOV EAX,dword ptr [EBP + 0xffffe620]
  0069306f  MOV ECX,dword ptr [EBP + 0xffffe620]
  00693075  MOV EDX,dword ptr [ECX + 0x9a0]
  0069307b  MOV dword ptr [EAX + 0x6ec],EDX
  00693081  JMP 0x00693273
LAB_00693086:
  00693086  MOV EAX,dword ptr [EBP + 0xffffe620]
  0069308c  CMP dword ptr [EAX + 0x1fc],0x3
  00693093  JLE 0x006931fb
  00693099  MOV ECX,dword ptr [EBP + 0xffffe620]
  0069309f  IMUL EAX,dword ptr [ECX + 0x6e0],0xa
  006930a6  CDQ
  006930a7  MOV ECX,0x64
  006930ac  IDIV ECX
  006930ae  MOV EDX,dword ptr [EBP + 0xffffe620]
  006930b4  MOV dword ptr [EDX + 0x6e8],EAX
  006930ba  MOV EAX,dword ptr [EBP + 0xffffe620]
  006930c0  IMUL EAX,dword ptr [EAX + 0x6e4],0xa
  006930c7  CDQ
  006930c8  MOV ECX,0x64
  006930cd  IDIV ECX
  006930cf  MOV EDX,dword ptr [EBP + 0xffffe620]
  006930d5  MOV dword ptr [EDX + 0x6ec],EAX
  006930db  MOV dword ptr [EBP + 0xffffe1b4],0x294
  006930e5  LEA EAX,[EBP + 0xffffe1b4]
  006930eb  PUSH EAX
  006930ec  MOV ECX,0x7ca6e8
  006930f1  CALL 0x004051c0    ; call FUN_004051c0
  006930f6  MOV ECX,EAX
  006930f8  CALL 0x0040d500    ; call FUN_0040d500
  006930fd  MOVZX ECX,AL
  00693100  TEST ECX,ECX
  00693102  JZ 0x006931f9
  00693108  MOV dword ptr [EBP + 0xffffe1b0],0x294
  00693112  LEA EDX,[EBP + 0xffffe1b0]
  00693118  PUSH EDX
  00693119  MOV ECX,0x7ca6e8
  0069311e  CALL 0x004051c0    ; call FUN_004051c0
  00693123  PUSH EAX
  00693124  PUSH 0x16a
  00693129  PUSH 0x5
  0069312b  PUSH 0xe2
  00693130  SUB ESP,0x18
  00693133  MOV ECX,ESP
  00693135  MOV dword ptr [EBP + 0xffffd534],ESP
  0069313b  PUSH 0x774a18    ; "sprite/interface/base.img"
  00693140  CALL 0x004054a0    ; call FUN_004054a0
  00693145  MOV dword ptr [EBP + 0xffffd530],EAX
  0069314b  MOV byte ptr [EBP + -0x4],0x59
  0069314f  SUB ESP,0x18
  00693152  MOV ECX,ESP
  00693154  MOV dword ptr [EBP + 0xffffd52c],ESP
  0069315a  PUSH 0x774a08
  0069315f  CALL 0x004054a0    ; call FUN_004054a0
  00693164  MOV dword ptr [EBP + 0xffffd714],EAX
  0069316a  MOV byte ptr [EBP + -0x4],0x5a
  0069316e  PUSH 0x64
  00693170  SUB ESP,0x18
  00693173  MOV ECX,ESP
  00693175  MOV dword ptr [EBP + 0xffffd70c],ESP
  0069317b  PUSH 0x774a98
  00693180  CALL 0x004054a0    ; call FUN_004054a0
  00693185  PUSH 0x2
  00693187  PUSH 0x0
  00693189  MOV byte ptr [EBP + -0x4],0x58
  0069318d  CALL 0x00661cc0    ; call FUN_00661cc0
  00693192  ADD ESP,0x64
  00693195  MOV dword ptr [EBP + 0xffffe1ac],EAX
  0069319b  MOV EAX,dword ptr [EBP + 0xffffe1ac]
  006931a1  MOV dword ptr [EBP + 0xffffe1a8],EAX
  006931a7  MOV ECX,dword ptr [EBP + 0xffffe1a8]
  006931ad  MOV dword ptr [ECX + 0x984],0xed8
  006931b7  PUSH 0xed8
  006931bc  SUB ESP,0x18
  006931bf  MOV ECX,ESP
  006931c1  MOV dword ptr [EBP + 0xffffd708],ESP
  006931c7  PUSH 0x774a84
  006931cc  CALL 0x004054a0    ; call FUN_004054a0
  006931d1  MOV dword ptr [EBP + 0xffffd704],EAX
  006931d7  MOV byte ptr [EBP + -0x4],0x5b
  006931db  CALL 0x00454ea0    ; call FUN_00454ea0
  006931e0  MOV EDX,dword ptr [EAX + 0xdcc]
  006931e6  PUSH EDX
  006931e7  CALL 0x00454ea0    ; call FUN_00454ea0
  006931ec  PUSH EAX
  006931ed  MOV byte ptr [EBP + -0x4],0x58
  006931f1  CALL 0x006427e0    ; call FUN_006427e0
  006931f6  ADD ESP,0x24
LAB_006931f9:
  006931f9  JMP 0x00693273
LAB_006931fb:
  006931fb  MOV dword ptr [EBP + 0xffffe1a4],0x39
  00693205  LEA EAX,[EBP + 0xffffe1a4]
  0069320b  PUSH EAX
  0069320c  MOV ECX,0x7ca6e8
  00693211  CALL 0x004051c0    ; call FUN_004051c0
  00693216  PUSH EAX
  00693217  CALL 0x0065e0b0    ; call FUN_0065e0b0
  0069321c  ADD ESP,0x4
  0069321f  MOV dword ptr [EBP + 0xffffe1a0],0x294
  00693229  LEA ECX,[EBP + 0xffffe1a0]
  0069322f  PUSH ECX
  00693230  MOV ECX,0x7ca6e8
  00693235  CALL 0x004051c0    ; call FUN_004051c0
  0069323a  PUSH EAX
  0069323b  CALL 0x0065e0b0    ; call FUN_0065e0b0
  00693240  ADD ESP,0x4
  00693243  MOV EDX,dword ptr [EBP + 0xffffe620]
  00693249  MOV EAX,dword ptr [EBP + 0xffffe620]
  0069324f  MOV ECX,dword ptr [EAX + 0x6e0]
  00693255  MOV dword ptr [EDX + 0x6e8],ECX
  0069325b  MOV EDX,dword ptr [EBP + 0xffffe620]
  00693261  MOV EAX,dword ptr [EBP + 0xffffe620]
  00693267  MOV ECX,dword ptr [EAX + 0x6e4]
  0069326d  MOV dword ptr [EDX + 0x6ec],ECX
LAB_00693273:
  00693273  PUSH 0x1
  00693275  CALL 0x00454ea0    ; call FUN_00454ea0
  0069327a  PUSH EAX
  0069327b  CALL 0x004f0610    ; call FUN_004f0610
  00693280  ADD ESP,0x8
  00693283  MOV EDX,dword ptr [EBP + 0xffffe620]
  00693289  PUSH EDX
  0069328a  MOV EAX,dword ptr [EBP + 0xffffe620]
  00693290  MOV ECX,dword ptr [EAX + 0x6ec]
  00693296  PUSH ECX
  00693297  PUSH 0x8
  00693299  MOV EDX,dword ptr [EBP + 0xffffe620]
  0069329f  MOV EAX,dword ptr [EDX + 0x6e8]
  006932a5  PUSH EAX
  006932a6  PUSH 0x7
  006932a8  PUSH 0x2904
  006932ad  CALL 0x006a38b0    ; call FUN_006a38b0
  006932b2  ADD ESP,0x18
  006932b5  MOV dword ptr [EBP + -0x4],0xffffffff
  006932bc  LEA ECX,[EBP + 0xfffff7d0]
  006932c2  CALL 0x004053c0    ; call ~function<void___cdecl(void)>
  006932c7  NOP
  006932c8  JMP 0x0069e6d6
LAB_0069378e:
  0069378e  MOV EDX,dword ptr [0x007ca1d8]
  00693794  PUSH EDX
  00693795  PUSH 0x28
  00693797  CALL 0x006a3f10    ; call FUN_006a3f10
  0069379c  ADD ESP,0x8
  0069379f  PUSH 0x28
  006937a1  CALL 0x004f2720    ; call FUN_004f2720
  006937a6  ADD ESP,0x4
  006937a9  JMP 0x0069e6d6
LAB_006937ae:
  006937ae  PUSH 0x1
  006937b0  PUSH 0xa
  006937b2  CALL 0x006a3f10    ; call FUN_006a3f10
  006937b7  ADD ESP,0x8
  006937ba  PUSH 0xa
  006937bc  CALL 0x004f2720    ; call FUN_004f2720
  006937c1  ADD ESP,0x4
  006937c4  JMP 0x0069e6d6
LAB_006937c9:
  006937c9  CALL 0x00454ea0    ; call FUN_00454ea0
  006937ce  CMP dword ptr [EAX + 0xdd8],0x4
  006937d5  JL 0x006937dc
  006937d7  JMP 0x0069e6d6
LAB_006937dc:
  006937dc  CALL 0x00454ea0    ; call FUN_00454ea0
  006937e1  MOV ESI,EAX
  006937e3  CALL 0x00454ea0    ; call FUN_00454ea0
  006937e8  MOV ECX,dword ptr [ESI + 0x6e8]
  006937ee  CMP ECX,dword ptr [EAX + 0x6e0]
  006937f4  JGE 0x0069388d
  006937fa  MOV dword ptr [EBP + 0xffffe134],0x39
  00693804  LEA EDX,[EBP + 0xffffe134]
  0069380a  PUSH EDX
  0069380b  MOV ECX,0x7ca6e8
  00693810  CALL 0x004051c0    ; call FUN_004051c0
  00693815  MOV ECX,EAX
  00693817  CALL 0x0040d500    ; call FUN_0040d500
  0069381c  MOVZX EAX,AL
  0069381f  TEST EAX,EAX
  00693821  JNZ 0x00693847
  00693823  MOV dword ptr [EBP + 0xffffe130],0x39
  0069382d  LEA ECX,[EBP + 0xffffe130]
  00693833  PUSH ECX
  00693834  MOV ECX,0x7ca6e8
  00693839  CALL 0x004051c0    ; call FUN_004051c0
  0069383e  PUSH EAX
  0069383f  CALL 0x0065e0b0    ; call FUN_0065e0b0
  00693844  ADD ESP,0x4
LAB_00693847:
  00693847  MOV EDX,dword ptr [EBP + 0xc]
  0069384a  PUSH EDX
  0069384b  PUSH 0x1
  0069384d  PUSH 0xa
  0069384f  PUSH 0xe10
  00693854  SUB ESP,0x18
  00693857  MOV ECX,ESP
  00693859  MOV dword ptr [EBP + 0xffffd700],ESP
  0069385f  PUSH 0x774a70
  00693864  CALL 0x004054a0    ; call FUN_004054a0
  00693869  MOV dword ptr [EBP + 0xffffd9dc],EAX
  0069386f  MOV dword ptr [EBP + -0x4],0x5c
  00693876  CALL 0x00454ea0    ; call FUN_00454ea0
  0069387b  PUSH EAX
  0069387c  MOV dword ptr [EBP + -0x4],0xffffffff
  00693883  CALL 0x00643010    ; call FUN_00643010
  00693888  ADD ESP,0x2c
  0069388b  JMP 0x006938b4
LAB_0069388d:
  0069388d  PUSH 0x0
  0069388f  PUSH 0x0
  00693891  PUSH 0x0
  00693893  PUSH 0x0
  00693895  PUSH 0xa
  00693897  SUB ESP,0x18
  0069389a  MOV ECX,ESP
  0069389c  MOV dword ptr [EBP + 0xffffd9d8],ESP
  006938a2  PUSH 0x774a4c
  006938a7  CALL 0x004054a0    ; call FUN_004054a0
  006938ac  CALL 0x006634f0    ; call FUN_006634f0
  006938b1  ADD ESP,0x2c
LAB_006938b4:
  006938b4  MOV dword ptr [EBP + 0xffffe12c],0x15e0
  006938be  LEA EAX,[EBP + 0xffffe12c]
  006938c4  PUSH EAX
  006938c5  MOV ECX,0x7ca6e8
  006938ca  CALL 0x004051c0    ; call FUN_004051c0
  006938cf  PUSH EAX
  006938d0  CALL 0x0065e0b0    ; call FUN_0065e0b0
  006938d5  ADD ESP,0x4
  006938d8  JMP 0x0069e6d6
LAB_006938dd:
  006938dd  MOV dword ptr [EBP + 0xffffe128],0x48
  006938e7  SUB ESP,0x18
  006938ea  MOV ECX,ESP
  006938ec  MOV dword ptr [EBP + 0xffffd9d4],ESP
  006938f2  PUSH 0x774ae0
  006938f7  CALL 0x004054a0    ; call FUN_004054a0
  006938fc  MOV dword ptr [EBP + 0xffffd9d0],EAX
  00693902  MOV dword ptr [EBP + -0x4],0x5d
  00693909  LEA ECX,[EBP + 0xffffe128]
  0069390f  PUSH ECX
  00693910  MOV ECX,0x7ca6e8
  00693915  CALL 0x004051c0    ; call FUN_004051c0
  0069391a  PUSH EAX
  0069391b  MOV dword ptr [EBP + -0x4],0xffffffff
  00693922  CALL 0x006ce000    ; call FUN_006ce000
  00693927  ADD ESP,0x1c
  0069392a  MOV dword ptr [EBP + 0xffffe124],EAX
  00693930  MOV EDX,dword ptr [EBP + 0xffffe124]
  00693936  MOV dword ptr [EBP + 0xffffe4ec],EDX
  0069393c  CMP dword ptr [EBP + 0xffffe4ec],0x0
  00693943  JZ 0x00693a9d
  00693949  CALL 0x00454ea0    ; call FUN_00454ea0
  0069394e  PUSH EAX
  0069394f  CALL 0x00642760    ; call FUN_00642760
  00693954  ADD ESP,0x4
  00693957  MOV dword ptr [EBP + 0xffffe264],EAX
  0069395d  PUSH 0x774ad8
  00693962  LEA ECX,[EBP + 0xfffff380]
  00693968  CALL 0x004054a0    ; call FUN_004054a0
  0069396d  MOV dword ptr [EBP + 0xffffe120],EAX
  00693973  MOV EAX,dword ptr [EBP + 0xffffe120]
  00693979  MOV dword ptr [EBP + 0xffffe118],EAX
  0069397f  MOV dword ptr [EBP + -0x4],0x5e
  00693986  MOV ECX,dword ptr [EBP + 0xffffe264]
  0069398c  PUSH ECX
  0069398d  LEA EDX,[EBP + 0xfffff368]
  00693993  PUSH EDX
  00693994  CALL 0x0040a850    ; call FUN_0040a850
  00693999  ADD ESP,0x8
  0069399c  MOV dword ptr [EBP + 0xffffe11c],EAX
  006939a2  MOV EAX,dword ptr [EBP + 0xffffe11c]
  006939a8  MOV dword ptr [EBP + 0xffffe114],EAX
  006939ae  MOV byte ptr [EBP + -0x4],0x5f
  006939b2  MOV ECX,dword ptr [EBP + 0xffffe118]
  006939b8  PUSH ECX
  006939b9  MOV EDX,dword ptr [EBP + 0xffffe114]
  006939bf  PUSH EDX
  006939c0  LEA EAX,[EBP + 0xfffff350]
  006939c6  PUSH EAX
  006939c7  CALL 0x00405cf0    ; call FUN_00405cf0
  006939cc  ADD ESP,0xc
  006939cf  MOV dword ptr [EBP + 0xffffe110],EAX
  006939d5  MOV ECX,dword ptr [EBP + 0xffffe110]
  006939db  PUSH ECX
  006939dc  MOV ECX,dword ptr [EBP + 0xffffe4ec]
  006939e2  ADD ECX,0xa4c
  006939e8  CALL 0x004053e0    ; call FUN_004053e0
  006939ed  LEA ECX,[EBP + 0xfffff350]
  006939f3  CALL 0x004053c0    ; call ~function<void___cdecl(void)>
  006939f8  MOV byte ptr [EBP + -0x4],0x5e
  006939fc  LEA ECX,[EBP + 0xfffff368]
  00693a02  CALL 0x004053c0    ; call ~function<void___cdecl(void)>
  00693a07  MOV dword ptr [EBP + -0x4],0xffffffff
  00693a0e  LEA ECX,[EBP + 0xfffff380]
  00693a14  CALL 0x004053c0    ; call ~function<void___cdecl(void)>
  00693a19  NOP
  00693a1a  MOV ECX,dword ptr [EBP + 0xffffe4ec]
  00693a20  ADD ECX,0xa3c
  00693a26  CALL 0x0040b190    ; call ReleaseDocSite
  00693a2b  NOP
  00693a2c  MOV dword ptr [EBP + 0xffffe10c],0x48
  00693a36  SUB ESP,0x18
  00693a39  MOV ECX,ESP
  00693a3b  MOV dword ptr [EBP + 0xffffd9cc],ESP
  00693a41  PUSH 0x774ac0
  00693a46  CALL 0x004054a0    ; call FUN_004054a0
  00693a4b  MOV dword ptr [EBP + 0xffffd9c8],EAX
  00693a51  MOV dword ptr [EBP + -0x4],0x60
  00693a58  LEA EDX,[EBP + 0xffffe10c]
  00693a5e  PUSH EDX
  00693a5f  MOV ECX,0x7ca6e8
  00693a64  CALL 0x004051c0    ; call FUN_004051c0
  00693a69  PUSH EAX
  00693a6a  MOV dword ptr [EBP + -0x4],0xffffffff
  00693a71  CALL 0x006ce000    ; call FUN_006ce000
  00693a76  ADD ESP,0x1c
  00693a79  MOV dword ptr [EBP + 0xffffe108],EAX
  00693a7f  MOV EAX,dword ptr [EBP + 0xffffe108]
  00693a85  MOV dword ptr [EBP + 0xffffe4ec],EAX
  00693a8b  MOV ECX,dword ptr [EBP + 0xffffe4ec]
  00693a91  MOV EDX,dword ptr [EBP + 0xffffe264]
  00693a97  MOV dword ptr [ECX + 0x9a0],EDX
LAB_00693a9d:
  00693a9d  JMP 0x0069e6d6
LAB_00693aa2:
  00693aa2  CALL 0x00454ea0    ; call FUN_00454ea0
  00693aa7  MOV ESI,EAX
  00693aa9  CALL 0x00454ea0    ; call FUN_00454ea0
  00693aae  MOV ECX,dword ptr [ESI + 0x6e8]
  00693ab4  CMP ECX,dword ptr [EAX + 0x6e0]
  00693aba  JNZ 0x00693ae5
  00693abc  MOV dword ptr [EBP + 0xffffe104],0x48
  00693ac6  LEA EDX,[EBP + 0xffffe104]
  00693acc  PUSH EDX
  00693acd  MOV ECX,0x7ca6e8
  00693ad2  CALL 0x004051c0    ; call FUN_004051c0
  00693ad7  PUSH EAX
  00693ad8  CALL 0x0065e0b0    ; call FUN_0065e0b0
  00693add  ADD ESP,0x4
  00693ae0  JMP 0x00693c0a
LAB_00693ae5:
  00693ae5  CALL 0x00454ea0    ; call FUN_00454ea0
  00693aea  MOV ESI,EAX
  00693aec  CALL 0x00454ea0    ; call FUN_00454ea0
  00693af1  PUSH EAX
  00693af2  CALL 0x00642760    ; call FUN_00642760
  00693af7  ADD ESP,0x4
  00693afa  CMP dword ptr [ESI + 0xac8],EAX
  00693b00  JGE 0x00693b52
  00693b02  MOV dword ptr [EBP + 0xffffe100],0x48
  00693b0c  LEA EAX,[EBP + 0xffffe100]
  00693b12  PUSH EAX
  00693b13  MOV ECX,0x7ca6e8
  00693b18  CALL 0x004051c0    ; call FUN_004051c0
  00693b1d  PUSH EAX
  00693b1e  CALL 0x0065e0b0    ; call FUN_0065e0b0
  00693b23  ADD ESP,0x4
  00693b26  PUSH 0x0
  00693b28  PUSH 0x0
  00693b2a  PUSH 0x0
  00693b2c  PUSH 0x0
  00693b2e  PUSH 0xa
  00693b30  SUB ESP,0x18
  00693b33  MOV ECX,ESP
  00693b35  MOV dword ptr [EBP + 0xffffd9c4],ESP
  00693b3b  PUSH 0x774aa0
  00693b40  CALL 0x004054a0    ; call FUN_004054a0
  00693b45  CALL 0x006634f0    ; call FUN_006634f0
  00693b4a  ADD ESP,0x2c
  00693b4d  JMP 0x00693c0a
LAB_00693b52:
  00693b52  MOV ECX,dword ptr [EBP + 0xc]
  00693b55  MOV byte ptr [ECX + 0x9a8],0x1
  00693b5c  CALL 0x00657510    ; call FUN_00657510
  00693b61  MOV dword ptr [EBP + 0xffffe5a0],EAX
  00693b67  PUSH 0x774b28    ; "White"
  00693b6c  MOV ECX,dword ptr [EBP + 0xffffe5a0]
  00693b72  ADD ECX,0x1c
  00693b75  CALL 0x004053a0    ; call FUN_004053a0
  00693b7a  PUSH 0x774b20    ; "White"
  00693b7f  MOV ECX,dword ptr [EBP + 0xffffe5a0]
  00693b85  ADD ECX,0x8b0
  00693b8b  CALL 0x004053a0    ; call FUN_004053a0
  00693b90  MOV EDX,dword ptr [EBP + 0xffffe5a0]
  00693b96  ADD EDX,0x8b0
  00693b9c  PUSH EDX
  00693b9d  PUSH 0x0
  00693b9f  MOV ECX,dword ptr [EBP + 0xffffe5a0]
  00693ba5  ADD ECX,0x880
  00693bab  CALL 0x0040d680    ; call FUN_0040d680
  00693bb0  ADD EAX,0x8
  00693bb3  MOV ECX,EAX
  00693bb5  CALL 0x0040d840    ; call FUN_0040d840
  00693bba  MOV EAX,dword ptr [EBP + 0xffffe5a0]
  00693bc0  MOV dword ptr [EAX + 0xad4],0x0
  00693bca  MOV ECX,dword ptr [EBP + 0xffffe5a0]
  00693bd0  MOV dword ptr [ECX + 0xadc],0x0
  00693bda  MOV EDX,dword ptr [EBP + 0xffffe5a0]
  00693be0  MOV dword ptr [EDX + 0xad8],0x0
  00693bea  MOV EAX,dword ptr [EBP + 0xffffe5a0]
  00693bf0  MOV dword ptr [EAX + 0xae8],0x1770
  00693bfa  MOV ECX,dword ptr [EBP + 0xffffe5a0]
  00693c00  MOV dword ptr [ECX + 0xaec],0xbb8
LAB_00693c0a:
  00693c0a  JMP 0x0069e6d6
LAB_00696e0d:
  00696e0d  MOV dword ptr [EBP + 0xffffdfe0],0x32
  00696e17  LEA EDX,[EBP + 0xffffdfe0]
  00696e1d  PUSH EDX
  00696e1e  MOV ECX,0x7ca6e8
  00696e23  CALL 0x004051c0    ; call FUN_004051c0
  00696e28  PUSH EAX
  00696e29  CALL 0x0065e0b0    ; call FUN_0065e0b0
  00696e2e  ADD ESP,0x4
  00696e31  MOV dword ptr [EBP + 0xffffdfdc],0x32
  00696e3b  LEA EAX,[EBP + 0xffffdfdc]
  00696e41  PUSH EAX
  00696e42  MOV ECX,0x7ca730
  00696e47  CALL 0x005187c0    ; call FUN_005187c0
  00696e4c  MOV byte ptr [EAX],0x0
  00696e4f  JMP 0x0069e6d6
LAB_00697a42:
  00697a42  MOV ECX,dword ptr [EBP + 0xc]
  00697a45  MOV dword ptr [EBP + 0xffffe4bc],ECX
  00697a4b  MOV EDX,dword ptr [EBP + 0xffffe4bc]
  00697a51  MOV EAX,dword ptr [EDX + 0x9d0]
  00697a57  MOV dword ptr [EBP + 0xffffe51c],EAX
  00697a5d  CMP dword ptr [EBP + 0xffffe51c],0x0
  00697a64  JNZ 0x00697a6b
  00697a66  JMP 0x0069e883
LAB_00697a6b:
  00697a6b  MOV ECX,dword ptr [EBP + 0xffffe51c]
  00697a71  MOV EDX,dword ptr [ECX + 0x9d0]
  00697a77  MOV dword ptr [EBP + 0xffffe540],EDX
  00697a7d  PUSH 0x1
  00697a7f  CALL 0x00454ea0    ; call FUN_00454ea0
  00697a84  ADD EAX,0xc50
  00697a89  MOV ECX,EAX
  00697a8b  CALL 0x00405270    ; call FUN_00405270
  00697a90  CMP dword ptr [EBP + 0xffffe540],EAX
  00697a96  JNZ 0x00697aea
  00697a98  CALL 0x00454ea0    ; call FUN_00454ea0
  00697a9d  PUSH EAX
  00697a9e  MOV EAX,dword ptr [EBP + 0xffffe4bc]
  00697aa4  MOV ECX,dword ptr [EAX + 0x9a0]
  00697aaa  PUSH ECX
  00697aab  CALL 0x0067e9b0    ; call FUN_0067e9b0
  00697ab0  ADD ESP,0x8
  00697ab3  MOVZX EDX,AL
  00697ab6  TEST EDX,EDX
  00697ab8  JNZ 0x00697abf
  00697aba  JMP 0x0069e883
LAB_00697abf:
  00697abf  CALL 0x00454ea0    ; call FUN_00454ea0
  00697ac4  PUSH EAX
  00697ac5  CALL 0x00454ea0    ; call FUN_00454ea0
  00697aca  MOV ECX,dword ptr [EBP + 0xffffe4bc]
  00697ad0  MOV EDX,dword ptr [EAX + 0xac8]
  00697ad6  SUB EDX,dword ptr [ECX + 0x9a0]
  00697adc  PUSH EDX
  00697add  CALL 0x00680fb0    ; call FUN_00680fb0
  00697ae2  ADD ESP,0x8
  00697ae5  JMP 0x00697c23
LAB_00697aea:
  00697aea  MOV EAX,dword ptr [EBP + 0xffffe51c]
  00697af0  MOV ECX,dword ptr [EAX + 0xa10]
  00697af6  PUSH ECX
  00697af7  MOV EDX,dword ptr [EBP + 0xffffe51c]
  00697afd  ADD EDX,0x98c
  00697b03  PUSH EDX
  00697b04  CALL 0x00642750    ; call FUN_00642750
  00697b09  MOV ECX,EAX
  00697b0b  CALL 0x0040d5c0    ; call FUN_0040d5c0
  00697b10  MOV ECX,EAX
  00697b12  CALL 0x00401a70    ; call FUN_00401a70
  00697b17  MOV ECX,dword ptr [EBP + 0xffffe51c]
  00697b1d  MOV EDX,dword ptr [ECX + 0x10]
  00697b20  CMP EDX,dword ptr [EAX]
  00697b22  JZ 0x00697b29
  00697b24  JMP 0x0069e883
LAB_00697b29:
  00697b29  MOV EAX,dword ptr [EBP + 0xffffe540]
  00697b2f  MOV ECX,dword ptr [EAX + 0x4]
  00697b32  PUSH ECX
  00697b33  CALL 0x006caba0    ; call FUN_006caba0
  00697b38  ADD ESP,0x4
  00697b3b  CMP EAX,0x8e
  00697b40  JNZ 0x00697bd8
  00697b46  CALL 0x00454ea0    ; call FUN_00454ea0
  00697b4b  PUSH EAX
  00697b4c  MOV EDX,dword ptr [EBP + 0xffffe540]
  00697b52  MOV EAX,dword ptr [EDX + 0x4]
  00697b55  PUSH EAX
  00697b56  MOV ECX,dword ptr [EBP + 0xffffe4bc]
  00697b5c  MOV EDX,dword ptr [ECX + 0x9a0]
  00697b62  PUSH EDX
  00697b63  CALL 0x0067e9f0    ; call FUN_0067e9f0
  00697b68  ADD ESP,0xc
  00697b6b  MOVZX EAX,AL
  00697b6e  TEST EAX,EAX
  00697b70  JNZ 0x00697b77
  00697b72  JMP 0x0069e883
LAB_00697b77:
  00697b77  LEA ECX,[EBP + 0xffffe760]
  00697b7d  CALL 0x0040a880    ; call FUN_0040a880
  00697b82  MOV dword ptr [EBP + -0x4],0x7e
  00697b89  MOV ECX,dword ptr [EBP + 0xffffe540]
  00697b8f  MOV EDX,dword ptr [ECX + 0x4]
  00697b92  MOV dword ptr [EBP + 0xffffe764],EDX
  00697b98  MOV EAX,dword ptr [EBP + 0xffffe4bc]
  00697b9e  MOV ECX,dword ptr [EAX + 0x9a0]
  00697ba4  MOV dword ptr [EBP + 0xffffe768],ECX
  00697baa  PUSH 0x0
  00697bac  LEA EDX,[EBP + 0xffffe760]
  00697bb2  PUSH EDX
  00697bb3  CALL 0x00454ea0    ; call FUN_00454ea0
  00697bb8  PUSH EAX
  00697bb9  PUSH 0x1
  00697bbb  CALL 0x0067f8c0    ; call FUN_0067f8c0
  00697bc0  ADD ESP,0x10
  00697bc3  MOV dword ptr [EBP + -0x4],0xffffffff
  00697bca  LEA ECX,[EBP + 0xffffe760]
  00697bd0  CALL 0x004039a0    ; call FUN_004039a0
  00697bd5  NOP
  00697bd6  JMP 0x00697c23
LAB_00697bd8:
  00697bd8  MOV EAX,dword ptr [EBP + 0xffffe540]
  00697bde  MOV ECX,dword ptr [EAX + 0x4]
  00697be1  PUSH ECX
  00697be2  CALL 0x006caba0    ; call FUN_006caba0
  00697be7  ADD ESP,0x4
  00697bea  CMP EAX,0x71
  00697bed  JNZ 0x00697c23
  00697bef  MOV EDX,dword ptr [EBP + 0xffffe540]
  00697bf5  PUSH EDX
  00697bf6  CALL 0x0067e9d0    ; call FUN_0067e9d0
  00697bfb  ADD ESP,0x4
  00697bfe  MOVZX EAX,AL
  00697c01  TEST EAX,EAX
  00697c03  JNZ 0x00697c0a
  00697c05  JMP 0x0069e883
LAB_00697c0a:
  00697c0a  PUSH 0x0
  00697c0c  MOV ECX,dword ptr [EBP + 0xffffe540]
  00697c12  PUSH ECX
  00697c13  CALL 0x00454ea0    ; call FUN_00454ea0
  00697c18  PUSH EAX
  00697c19  PUSH 0x1
  00697c1b  CALL 0x0067f8c0    ; call FUN_0067f8c0
  00697c20  ADD ESP,0x10
LAB_00697c23:
  00697c23  MOV dword ptr [EBP + 0xffffdf74],0x38
  00697c2d  MOV dword ptr [EBP + 0xffffdf70],0x38
  00697c37  MOV EDX,dword ptr [EBP + 0xc]
  00697c3a  PUSH EDX
  00697c3b  LEA EAX,[EBP + 0xffffdf74]
  00697c41  PUSH EAX
  00697c42  MOV ECX,0x7ca6e8
  00697c47  CALL 0x004051c0    ; call FUN_004051c0
  00697c4c  PUSH EAX
  00697c4d  CALL 0x0065de20    ; call FUN_0065de20
  00697c52  ADD ESP,0x8
  00697c55  PUSH EAX
  00697c56  LEA ECX,[EBP + 0xffffdf70]
  00697c5c  PUSH ECX
  00697c5d  MOV ECX,0x7ca6e8
  00697c62  CALL 0x004051c0    ; call FUN_004051c0
  00697c67  PUSH EAX
  00697c68  CALL 0x0065dee0    ; call FUN_0065dee0
  00697c6d  ADD ESP,0x8
  00697c70  JMP 0x0069e6d6
LAB_0069837a:
  0069837a  PUSH 0x0
  0069837c  PUSH 0x3b1
  00698381  CALL 0x0068eb20    ; call FUN_0068eb20
  00698386  ADD ESP,0x8
  00698389  JMP 0x0069e6d6
LAB_0069e6d6:
  0069e6d6  CALL 0x00454ea0    ; call FUN_00454ea0
  0069e6db  PUSH EAX
  0069e6dc  MOV ECX,dword ptr [EBP + 0xc]
  0069e6df  PUSH ECX
  0069e6e0  MOV EDX,dword ptr [EBP + 0x8]
  0069e6e3  PUSH EDX
  0069e6e4  CALL 0x00614bd0    ; call FUN_00614bd0
  0069e6e9  ADD ESP,0xc
  0069e6ec  CALL 0x00454ea0    ; call FUN_00454ea0
  0069e6f1  PUSH EAX
  0069e6f2  MOV EAX,dword ptr [EBP + 0xc]
  0069e6f5  PUSH EAX
  0069e6f6  MOV ECX,dword ptr [EBP + 0x8]
  0069e6f9  PUSH ECX
  0069e6fa  CALL 0x004a3110    ; call FUN_004a3110
  0069e6ff  ADD ESP,0xc
  0069e702  CALL 0x00454ea0    ; call FUN_00454ea0
  0069e707  PUSH EAX
  0069e708  MOV EDX,dword ptr [EBP + 0xc]
  0069e70b  PUSH EDX
  0069e70c  MOV EAX,dword ptr [EBP + 0x8]
  0069e70f  PUSH EAX
  0069e710  CALL 0x0041d440    ; call FUN_0041d440
  0069e715  ADD ESP,0xc
  0069e718  CALL 0x00454ea0    ; call FUN_00454ea0
  0069e71d  PUSH EAX
  0069e71e  MOV ECX,dword ptr [EBP + 0xc]
  0069e721  PUSH ECX
  0069e722  MOV EDX,dword ptr [EBP + 0x8]
  0069e725  PUSH EDX
  0069e726  CALL 0x00594b70    ; call FUN_00594b70
  0069e72b  ADD ESP,0xc
  0069e72e  CALL 0x00454ea0    ; call FUN_00454ea0
  0069e733  PUSH EAX
  0069e734  MOV EAX,dword ptr [EBP + 0xc]
  0069e737  PUSH EAX
  0069e738  MOV ECX,dword ptr [EBP + 0x8]
  0069e73b  PUSH ECX
  0069e73c  CALL 0x006a56d0    ; call FUN_006a56d0
  0069e741  ADD ESP,0xc
  0069e744  CALL 0x00454ea0    ; call FUN_00454ea0
  0069e749  PUSH EAX
  0069e74a  MOV EDX,dword ptr [EBP + 0xc]
  0069e74d  PUSH EDX
  0069e74e  MOV EAX,dword ptr [EBP + 0x8]
  0069e751  PUSH EAX
  0069e752  CALL 0x004b13c0    ; call FUN_004b13c0
  0069e757  ADD ESP,0xc
  0069e75a  CALL 0x00454ea0    ; call FUN_00454ea0
  0069e75f  PUSH EAX
  0069e760  MOV ECX,dword ptr [EBP + 0xc]
  0069e763  PUSH ECX
  0069e764  MOV EDX,dword ptr [EBP + 0x8]
  0069e767  PUSH EDX
  0069e768  CALL 0x0040b1d0    ; call FUN_0040b1d0
  0069e76d  ADD ESP,0xc
  0069e770  CALL 0x00454ea0    ; call FUN_00454ea0
  0069e775  PUSH EAX
  0069e776  MOV EAX,dword ptr [EBP + 0xc]
  0069e779  PUSH EAX
  0069e77a  MOV ECX,dword ptr [EBP + 0x8]
  0069e77d  PUSH ECX
  0069e77e  CALL 0x00412880    ; call FUN_00412880
  0069e783  ADD ESP,0xc
  0069e786  CALL 0x00454ea0    ; call FUN_00454ea0
  0069e78b  PUSH EAX
  0069e78c  MOV EDX,dword ptr [EBP + 0xc]
  0069e78f  PUSH EDX
  0069e790  MOV EAX,dword ptr [EBP + 0x8]
  0069e793  PUSH EAX
  0069e794  CALL 0x00535050    ; call FUN_00535050
  0069e799  ADD ESP,0xc
  0069e79c  CALL 0x00454ea0    ; call FUN_00454ea0
  0069e7a1  PUSH EAX
  0069e7a2  MOV ECX,dword ptr [EBP + 0xc]
  0069e7a5  PUSH ECX
  0069e7a6  MOV EDX,dword ptr [EBP + 0x8]
  0069e7a9  PUSH EDX
  0069e7aa  CALL 0x00586540    ; call FUN_00586540
  0069e7af  ADD ESP,0xc
  0069e7b2  CALL 0x00454ea0    ; call FUN_00454ea0
  0069e7b7  PUSH EAX
  0069e7b8  MOV EAX,dword ptr [EBP + 0xc]
  0069e7bb  PUSH EAX
  0069e7bc  MOV ECX,dword ptr [EBP + 0x8]
  0069e7bf  PUSH ECX
  0069e7c0  CALL 0x00625350    ; call FUN_00625350
  0069e7c5  ADD ESP,0xc
  0069e7c8  CALL 0x00454ea0    ; call FUN_00454ea0
  0069e7cd  PUSH EAX
  0069e7ce  MOV EDX,dword ptr [EBP + 0xc]
  0069e7d1  PUSH EDX
  0069e7d2  MOV EAX,dword ptr [EBP + 0x8]
  0069e7d5  PUSH EAX
  0069e7d6  CALL 0x00624170    ; call FUN_00624170
  0069e7db  ADD ESP,0xc
  0069e7de  MOV ECX,dword ptr [EBP + 0xc]
  0069e7e1  PUSH ECX
  0069e7e2  MOV EDX,dword ptr [EBP + 0x8]
  0069e7e5  PUSH EDX
  0069e7e6  CALL 0x004995d0    ; call FUN_004995d0
  0069e7eb  ADD ESP,0x8
  0069e7ee  CALL 0x00454ea0    ; call FUN_00454ea0
  0069e7f3  PUSH EAX
  0069e7f4  MOV EAX,dword ptr [EBP + 0xc]
  0069e7f7  PUSH EAX
  0069e7f8  MOV ECX,dword ptr [EBP + 0x8]
  0069e7fb  PUSH ECX
  0069e7fc  CALL 0x0052c550    ; call FUN_0052c550
  0069e801  ADD ESP,0xc
  0069e804  CALL 0x00454ea0    ; call FUN_00454ea0
  0069e809  PUSH EAX
  0069e80a  MOV EDX,dword ptr [EBP + 0xc]
  0069e80d  PUSH EDX
  0069e80e  MOV EAX,dword ptr [EBP + 0x8]
  0069e811  PUSH EAX
  0069e812  CALL 0x0062e4f0    ; call FUN_0062e4f0
  0069e817  ADD ESP,0xc
  0069e81a  CALL 0x00454ea0    ; call FUN_00454ea0
  0069e81f  PUSH EAX
  0069e820  MOV ECX,dword ptr [EBP + 0xc]
  0069e823  PUSH ECX
  0069e824  MOV EDX,dword ptr [EBP + 0x8]
  0069e827  PUSH EDX
  0069e828  CALL 0x005386a0    ; call FUN_005386a0
  0069e82d  ADD ESP,0xc
  0069e830  CALL 0x00454ea0    ; call FUN_00454ea0
  0069e835  PUSH EAX
  0069e836  MOV EAX,dword ptr [EBP + 0xc]
  0069e839  PUSH EAX
  0069e83a  MOV ECX,dword ptr [EBP + 0x8]
  0069e83d  PUSH ECX
  0069e83e  CALL 0x00403be0    ; call FUN_00403be0
  0069e843  ADD ESP,0xc
  0069e846  CALL 0x00454ea0    ; call FUN_00454ea0
  0069e84b  PUSH EAX
  0069e84c  MOV EDX,dword ptr [EBP + 0xc]
  0069e84f  PUSH EDX
  0069e850  MOV EAX,dword ptr [EBP + 0x8]
  0069e853  PUSH EAX
  0069e854  CALL 0x004adc80    ; call FUN_004adc80
  0069e859  ADD ESP,0xc
  0069e85c  MOV ECX,dword ptr [0x007ca768]
  0069e862  PUSH ECX
  0069e863  MOV EDX,dword ptr [0x007ca764]
  0069e869  PUSH EDX
  0069e86a  SUB ESP,0x20
  0069e86d  MOV ECX,0x8
  0069e872  MOV ESI,0x7ca70c
  0069e877  MOV EDI,ESP
  0069e879  MOVSD.REP ES:EDI,ESI
  0069e87b  CALL 0x0065e180    ; call FUN_0065e180
  0069e880  ADD ESP,0x28
LAB_0069e883:
  0069e883  MOV ECX,dword ptr [EBP + -0xc]
  0069e886  MOV dword ptr FS:[0x0],ECX
  0069e88d  POP ECX
  0069e88e  POP EDI
  0069e88f  POP ESI
  0069e890  MOV ECX,dword ptr [EBP + -0x10]
  0069e893  XOR ECX,EBP
  0069e895  CALL 0x006e4b50    ; call __security_check_cookie
  0069e89a  MOV ESP,EBP
  0069e89c  POP EBP
  0069e89d  RET
