; FUN_005c2000  005c2000
005c2000  PUSH EBP
005c2001  MOV EBP,ESP
005c2003  PUSH -0x1
005c2005  PUSH 0x6a855f
005c200a  MOV EAX,FS:[0x0]
005c2010  PUSH EAX
005c2011  SUB ESP,0x1c
005c2014  MOV EAX,[0x00781870]
005c2019  XOR EAX,EBP
005c201b  PUSH EAX
005c201c  LEA EAX,[EBP + -0xc]
005c201f  MOV FS:[0x0],EAX
005c2025  MOV dword ptr [EBP + -0x20],ECX
005c2028  MOV EAX,dword ptr [EBP + -0x20]
005c202b  CMP dword ptr [EAX + 0x4c],0x0
005c202f  JNZ 0x005c20ee
005c2035  PUSH 0x184
005c203a  CALL 0x00686d82
005c203f  ADD ESP,0x4
005c2042  MOV dword ptr [EBP + -0x14],EAX
005c2045  MOV dword ptr [EBP + -0x4],0x0
005c204c  CMP dword ptr [EBP + -0x14],0x0
005c2050  JZ 0x005c205f
005c2052  MOV ECX,dword ptr [EBP + -0x14]
005c2055  CALL 0x005f5bf0
005c205a  MOV dword ptr [EBP + -0x24],EAX
005c205d  JMP 0x005c2066
005c205f  MOV dword ptr [EBP + -0x24],0x0
005c2066  MOV ECX,dword ptr [EBP + -0x24]
005c2069  MOV dword ptr [EBP + -0x10],ECX
005c206c  MOV dword ptr [EBP + -0x4],0xffffffff
005c2073  MOV EDX,dword ptr [EBP + -0x20]
005c2076  MOV EAX,dword ptr [EBP + -0x10]
005c2079  MOV dword ptr [EDX + 0x4c],EAX
005c207c  PUSH 0x15f97
005c2081  MOV ECX,dword ptr [EBP + -0x20]
005c2084  MOV ECX,dword ptr [ECX + 0x4c]
005c2087  CALL 0x005eaf00
005c208c  PUSH 0x5a
005c208e  MOV EDX,dword ptr [EBP + -0x20]
005c2091  MOV EAX,dword ptr [EDX + 0x4c]
005c2094  MOV ECX,dword ptr [EBP + -0x20]
005c2097  MOV ECX,dword ptr [ECX + 0x4c]
005c209a  MOV EDX,dword ptr [EAX]
005c209c  MOV EAX,dword ptr [EDX + 0x6c]
005c209f  CALL EAX
005c20a1  PUSH 0x6c
005c20a3  PUSH 0x78
005c20a5  MOV ECX,dword ptr [EBP + -0x20]
005c20a8  MOV EDX,dword ptr [ECX + 0x4c]
005c20ab  MOV EAX,dword ptr [EBP + -0x20]
005c20ae  MOV ECX,dword ptr [EAX + 0x4c]
005c20b1  MOV EDX,dword ptr [EDX]
005c20b3  MOV EAX,dword ptr [EDX + 0x44]
005c20b6  CALL EAX
005c20b8  MOV ECX,dword ptr [EBP + -0x20]
005c20bb  MOV EDX,dword ptr [ECX + 0x4c]
005c20be  MOV EAX,dword ptr [EBP + -0x20]
005c20c1  MOV ECX,dword ptr [EAX + 0x4c]
005c20c4  MOV EDX,dword ptr [EDX]
005c20c6  MOV EAX,dword ptr [EDX + 0x40]
005c20c9  CALL EAX
005c20cb  MOV ECX,dword ptr [EBP + -0x20]
005c20ce  MOV EDX,dword ptr [ECX + 0x4c]
005c20d1  MOV EAX,dword ptr [EBP + -0x20]
005c20d4  MOV ECX,dword ptr [EAX + 0x4c]
005c20d7  MOV EDX,dword ptr [EDX]
005c20d9  MOV EAX,dword ptr [EDX + 0x70]
005c20dc  CALL EAX
005c20de  MOV ECX,dword ptr [EBP + -0x20]
005c20e1  MOV EDX,dword ptr [ECX + 0x4c]
005c20e4  MOV dword ptr [EDX + 0x178],0x4
005c20ee  PUSH 0x0
005c20f0  MOV EAX,dword ptr [EBP + -0x20]
005c20f3  MOV ECX,dword ptr [EAX + 0x4c]
005c20f6  MOV EDX,dword ptr [EBP + -0x20]
005c20f9  MOV EAX,dword ptr [EDX + 0x4c]
005c20fc  MOV EDX,dword ptr [ECX]
005c20fe  MOV ECX,EAX
005c2100  MOV EAX,dword ptr [EDX + 0xb0]
005c2106  CALL EAX
005c2108  MOV ECX,dword ptr [EBP + -0x20]
005c210b  MOV EDX,dword ptr [ECX + 0x4c]
005c210e  MOV EAX,dword ptr [EBP + -0x20]
005c2111  MOV ECX,dword ptr [EAX + 0x4c]
005c2114  MOV EDX,dword ptr [EDX]
005c2116  MOV EAX,dword ptr [EDX + 0x74]
005c2119  CALL EAX
005c211b  PUSH 0x20
005c211d  CALL 0x00686d82
005c2122  ADD ESP,0x4
005c2125  MOV dword ptr [EBP + -0x1c],EAX
005c2128  MOV dword ptr [EBP + -0x4],0x1
005c212f  CMP dword ptr [EBP + -0x1c],0x0
005c2133  JZ 0x005c2144
005c2135  PUSH 0x0
005c2137  MOV ECX,dword ptr [EBP + -0x1c]
005c213a  CALL 0x006010a0
005c213f  MOV dword ptr [EBP + -0x28],EAX
005c2142  JMP 0x005c214b
005c2144  MOV dword ptr [EBP + -0x28],0x0
005c214b  MOV ECX,dword ptr [EBP + -0x28]
005c214e  MOV dword ptr [EBP + -0x18],ECX
005c2151  MOV dword ptr [EBP + -0x4],0xffffffff
005c2158  MOV EDX,dword ptr [EBP + -0x18]
005c215b  PUSH EDX
005c215c  MOV EAX,dword ptr [EBP + -0x20]
005c215f  MOV ECX,dword ptr [EAX + 0x4c]
005c2162  CALL 0x005f5d50
005c2167  PUSH 0x1
005c2169  MOV ECX,dword ptr [EBP + -0x20]
005c216c  MOV EDX,dword ptr [ECX + 0x4c]
005c216f  MOV ECX,dword ptr [EDX + 0x180]
005c2175  CALL 0x00600520
005c217a  PUSH 0x0
005c217c  PUSH ECX
005c217d  FLD float ptr [0x006b3654]
005c2183  FSTP float ptr [ESP]
005c2186  PUSH ECX
005c2187  FLD1
005c2189  FSTP float ptr [ESP]
005c218c  PUSH 0x1
005c218e  PUSH 0x5
005c2190  PUSH 0x0
005c2192  PUSH 0x0
005c2194  PUSH 0x18a96
005c2199  MOV EAX,[0x0162ee84]
005c219e  MOV EDX,dword ptr [EAX]
005c21a0  MOV ECX,dword ptr [0x0162ee84]
005c21a6  MOV EAX,dword ptr [EDX + 0x80]
005c21ac  CALL EAX
005c21ae  MOV ECX,dword ptr [EBP + -0xc]
005c21b1  MOV dword ptr FS:[0x0],ECX
005c21b8  POP ECX
005c21b9  MOV ESP,EBP
005c21bb  POP EBP
005c21bc  RET
