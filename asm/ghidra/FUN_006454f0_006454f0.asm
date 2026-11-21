; FUN_006454f0  006454f0
006454f0  PUSH EBP
006454f1  MOV EBP,ESP
006454f3  PUSH -0x1
006454f5  PUSH 0x6abdc8
006454fa  MOV EAX,FS:[0x0]
00645500  PUSH EAX
00645501  PUSH ECX
00645502  MOV EAX,[0x00781870]
00645507  XOR EAX,EBP
00645509  PUSH EAX
0064550a  LEA EAX,[EBP + -0xc]
0064550d  MOV FS:[0x0],EAX
00645513  MOV dword ptr [EBP + -0x10],ECX
00645516  MOV ECX,dword ptr [EBP + -0x10]
00645519  CALL 0x005e9e20
0064551e  MOV dword ptr [EBP + -0x4],0x0
00645525  MOV EAX,dword ptr [EBP + -0x10]
00645528  MOV dword ptr [EAX],0x6dc60c
0064552e  MOV ECX,dword ptr [EBP + -0x10]
00645531  MOV dword ptr [ECX + 0x8],0x0
00645538  MOV EDX,dword ptr [EBP + -0x10]
0064553b  MOV dword ptr [EDX + 0xc],0x0
00645542  MOV EAX,dword ptr [EBP + -0x10]
00645545  MOV dword ptr [EAX + 0x14],0x0
0064554c  MOV ECX,dword ptr [EBP + -0x10]
0064554f  MOV byte ptr [ECX + 0x28],0x1
00645553  MOV EDX,dword ptr [EBP + -0x10]
00645556  MOV byte ptr [EDX + 0x29],0x1
0064555a  MOV EAX,dword ptr [EBP + -0x10]
0064555d  MOV dword ptr [EAX + 0x18],0x0
00645564  MOV ECX,dword ptr [EBP + -0x10]
00645567  MOV dword ptr [ECX + 0x1c],0x0
0064556e  MOV EDX,dword ptr [EBP + -0x10]
00645571  MOV dword ptr [EDX + 0x20],0x0
00645578  MOV EAX,dword ptr [EBP + -0x10]
0064557b  MOV dword ptr [EAX + 0x24],0x0
00645582  MOV ECX,dword ptr [EBP + -0x10]
00645585  MOV dword ptr [ECX + 0x48],0x0
0064558c  MOV EDX,dword ptr [EBP + -0x10]
0064558f  MOV dword ptr [EDX + 0x4c],0x0
00645596  MOV EAX,dword ptr [EBP + -0x10]
00645599  MOV byte ptr [EAX + 0x50],0x0
0064559d  MOV ECX,dword ptr [EBP + -0x10]
006455a0  FLD float ptr [0x006b3654]
006455a6  FSTP float ptr [ECX + 0x54]
006455a9  MOV EDX,dword ptr [EBP + -0x10]
006455ac  MOV dword ptr [EDX + 0x58],0x0
006455b3  MOV EAX,dword ptr [EBP + -0x10]
006455b6  MOV byte ptr [EAX + 0x51],0x0
006455ba  MOV ECX,dword ptr [EBP + -0x10]
006455bd  MOV byte ptr [ECX + 0x5c],0x0
006455c1  MOV ECX,dword ptr [EBP + -0x10]
006455c4  CALL 0x00648c20
006455c9  MOV EDX,dword ptr [EBP + -0x10]
006455cc  MOV dword ptr [EDX + 0x34],0x0
006455d3  MOV dword ptr [EBP + -0x4],0xffffffff
006455da  MOV EAX,dword ptr [EBP + -0x10]
006455dd  MOV ECX,dword ptr [EBP + -0xc]
006455e0  MOV dword ptr FS:[0x0],ECX
006455e7  POP ECX
006455e8  MOV ESP,EBP
006455ea  POP EBP
006455eb  RET
