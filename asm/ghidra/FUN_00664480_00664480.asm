; FUN_00664480  00664480
00664480  PUSH EBP
00664481  MOV EBP,ESP
00664483  SUB ESP,0x7c
00664486  PUSH ESI
00664487  MOV dword ptr [EBP + -0x7c],ECX
0066448a  MOV dword ptr [EBP + -0x78],0xa
00664491  MOV dword ptr [EBP + -0x74],0x1
00664498  MOV dword ptr [EBP + -0x70],0xf
0066449f  MOV dword ptr [EBP + -0x6c],0x14
006644a6  MOV dword ptr [EBP + -0x68],0x2
006644ad  MOV dword ptr [EBP + -0x64],0x3e
006644b4  MOV dword ptr [EBP + -0x60],0x3d
006644bb  MOV dword ptr [EBP + -0x5c],0x3c
006644c2  MOV dword ptr [EBP + -0x58],0x3e
006644c9  MOV dword ptr [EBP + -0x54],0x3d
006644d0  MOV dword ptr [EBP + -0x50],0x3c
006644d7  MOV dword ptr [EBP + -0x4c],0x6e
006644de  MOV dword ptr [EBP + -0x48],0x6
006644e5  MOV dword ptr [EBP + -0x44],0x20
006644ec  MOV dword ptr [EBP + -0x40],0x1f
006644f3  MOV dword ptr [EBP + -0x3c],0x1e
006644fa  MOV dword ptr [EBP + -0x38],0x34
00664501  MOV dword ptr [EBP + -0x34],0x33
00664508  MOV dword ptr [EBP + -0x30],0x32
0066450f  MOV dword ptr [EBP + -0x2c],0x2d
00664516  MOV dword ptr [EBP + -0x28],0x2c
0066451d  MOV dword ptr [EBP + -0x24],0x2b
00664524  MOV dword ptr [EBP + -0x20],0x2a
0066452b  MOV dword ptr [EBP + -0x1c],0x29
00664532  MOV dword ptr [EBP + -0x18],0x28
00664539  MOV dword ptr [EBP + -0x14],0x50
00664540  MOV dword ptr [EBP + -0x10],0x78
00664547  MOV EAX,dword ptr [EBP + -0x7c]
0066454a  MOV ECX,dword ptr [EBP + 0x8]
0066454d  MOV dword ptr [EAX + 0xc],ECX
00664550  MOV dword ptr [EBP + -0x4],0x0
00664557  JMP 0x00664562
00664559  MOV EDX,dword ptr [EBP + -0x4]
0066455c  ADD EDX,0x1
0066455f  MOV dword ptr [EBP + -0x4],EDX
00664562  CMP dword ptr [EBP + -0x4],0x1b
00664566  JGE 0x006645bc
00664568  MOV EAX,dword ptr [EBP + -0x4]
0066456b  MOV ECX,dword ptr [EBP + -0x7c]
0066456e  CMP dword ptr [ECX + EAX*0x4 + 0x5c],0x0
00664573  JZ 0x006645ba
00664575  MOV EDX,dword ptr [EBP + -0x7c]
00664578  MOV ESI,dword ptr [EDX + 0xc]
0066457b  MOV EAX,dword ptr [EBP + -0x4]
0066457e  ADD ESI,dword ptr [EBP + EAX*0x4 + -0x78]
00664582  MOV ECX,dword ptr [EBP + -0x4]
00664585  PUSH ECX
00664586  MOV EDX,dword ptr [0x0162ee84]
0066458c  MOV EAX,dword ptr [EDX]
0066458e  MOV ECX,dword ptr [0x0162ee84]
00664594  MOV EDX,dword ptr [EAX + 0x324]
0066459a  CALL EDX
0066459c  ADD ESI,EAX
0066459e  PUSH ESI
0066459f  MOV EAX,dword ptr [EBP + -0x4]
006645a2  MOV ECX,dword ptr [EBP + -0x7c]
006645a5  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x5c]
006645a9  MOV EAX,dword ptr [EBP + -0x4]
006645ac  MOV ECX,dword ptr [EBP + -0x7c]
006645af  MOV ECX,dword ptr [ECX + EAX*0x4 + 0x5c]
006645b3  MOV EDX,dword ptr [EDX]
006645b5  MOV EAX,dword ptr [EDX + 0x6c]
006645b8  CALL EAX
006645ba  JMP 0x00664559
006645bc  POP ESI
006645bd  MOV ESP,EBP
006645bf  POP EBP
006645c0  RET 0x4
