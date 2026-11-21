; FUN_0044fe60  0044fe60
0044fe60  PUSH EBP
0044fe61  MOV EBP,ESP
0044fe63  SUB ESP,0x2cc
0044fe69  PUSH ESI
0044fe6a  PUSH EDI
0044fe6b  MOV dword ptr [EBP + 0xfffffd34],ECX
0044fe71  MOV EAX,dword ptr [EBP + 0xfffffd34]
0044fe77  MOVZX ECX,byte ptr [EAX + 0x2be]
0044fe7e  TEST ECX,ECX
0044fe80  JZ 0x0044fe93
0044fe82  MOV EDX,dword ptr [EBP + 0xfffffd34]
0044fe88  MOVZX EAX,byte ptr [EDX + 0x2c3]
0044fe8f  TEST EAX,EAX
0044fe91  JZ 0x0044fe9a
0044fe93  XOR AL,AL
0044fe95  JMP 0x004502df
0044fe9a  MOV dword ptr [EBP + 0xfffffd54],0x0
0044fea4  MOV dword ptr [EBP + 0xfffffd3c],0x0
0044feae  MOV dword ptr [EBP + 0xfffffd40],0x0
0044feb8  MOV dword ptr [EBP + 0xfffffd38],0x0
0044fec2  MOV dword ptr [EBP + 0xfffffd58],0x0
0044fecc  MOV dword ptr [EBP + 0xfffffd64],0x0
0044fed6  MOV byte ptr [EBP + 0xfffffd53],0x0
0044fedd  MOV dword ptr [EBP + 0xfffffd44],0x0
0044fee7  MOV dword ptr [EBP + 0xfffffd48],0x0
0044fef1  MOV dword ptr [EBP + 0xfffffd4c],0x0
0044fefb  MOV dword ptr [EBP + 0xfffffd60],0x0
0044ff05  MOV dword ptr [EBP + 0xfffffd5c],0x0
0044ff0f  JMP 0x0044ff20
0044ff11  MOV ECX,dword ptr [EBP + 0xfffffd5c]
0044ff17  ADD ECX,0x1
0044ff1a  MOV dword ptr [EBP + 0xfffffd5c],ECX
0044ff20  CMP dword ptr [EBP + 0xfffffd5c],0xf
0044ff27  JGE 0x0044ff55
0044ff29  MOV EDX,dword ptr [EBP + 0xfffffd5c]
0044ff2f  IMUL EDX,EDX,0x2c
0044ff32  MOV EAX,dword ptr [EBP + 0xfffffd34]
0044ff38  LEA ESI,[EAX + EDX*0x1 + 0x18]
0044ff3c  MOV ECX,dword ptr [EBP + 0xfffffd5c]
0044ff42  IMUL ECX,ECX,0x2c
0044ff45  LEA EDI,[EBP + ECX*0x1 + 0xfffffd68]
0044ff4c  MOV ECX,0xb
0044ff51  MOVSD.REP ES:EDI,ESI
0044ff53  JMP 0x0044ff11
0044ff55  MOV EDX,dword ptr [EBP + 0xfffffd34]
0044ff5b  MOVZX EAX,byte ptr [EDX + 0x2be]
0044ff62  TEST EAX,EAX
0044ff64  JZ 0x0044ff7e
0044ff66  MOV ECX,dword ptr [EBP + 0xfffffd94]
0044ff6c  SUB ECX,0x1
0044ff6f  MOV dword ptr [EBP + 0xfffffd94],ECX
0044ff75  MOV EDX,dword ptr [EBP + -0x30]
0044ff78  SUB EDX,0x1
0044ff7b  MOV dword ptr [EBP + -0x30],EDX
0044ff7e  MOV dword ptr [EBP + 0xfffffd5c],0x1
0044ff88  JMP 0x0044ff99
0044ff8a  MOV EAX,dword ptr [EBP + 0xfffffd5c]
0044ff90  ADD EAX,0x1
0044ff93  MOV dword ptr [EBP + 0xfffffd5c],EAX
0044ff99  CMP dword ptr [EBP + 0xfffffd5c],0xf
0044ffa0  JGE 0x004500f5
0044ffa6  MOV ECX,dword ptr [EBP + 0xfffffd5c]
0044ffac  IMUL ECX,ECX,0x2c
0044ffaf  CMP dword ptr [EBP + ECX*0x1 + 0xfffffd68],0x0
0044ffb7  JZ 0x0045000f
0044ffb9  CMP dword ptr [EBP + 0xfffffd3c],0x0
0044ffc0  JNZ 0x0044ffce
0044ffc2  MOV EDX,dword ptr [EBP + 0xfffffd5c]
0044ffc8  MOV dword ptr [EBP + 0xfffffd58],EDX
0044ffce  MOV EAX,dword ptr [EBP + 0xfffffd3c]
0044ffd4  ADD EAX,0x1
0044ffd7  MOV dword ptr [EBP + 0xfffffd3c],EAX
0044ffdd  CMP dword ptr [EBP + 0xfffffd3c],0x5
0044ffe4  JL 0x0045000a
0044ffe6  MOV ECX,dword ptr [EBP + 0xfffffd3c]
0044ffec  MOV dword ptr [EBP + 0xfffffd54],ECX
0044fff2  MOV EDX,dword ptr [EBP + 0xfffffd58]
0044fff8  MOV dword ptr [EBP + 0xfffffd44],EDX
0044fffe  MOV EAX,dword ptr [EBP + 0xfffffd64]
00450004  MOV dword ptr [EBP + 0xfffffd4c],EAX
0045000a  JMP 0x004500f0
0045000f  MOVZX ECX,byte ptr [EBP + 0xfffffd53]
00450016  TEST ECX,ECX
00450018  JZ 0x0045008c
0045001a  CMP dword ptr [EBP + 0xfffffd3c],0x5
00450021  JL 0x00450050
00450023  CMP dword ptr [EBP + 0xfffffd40],0x0
0045002a  JNZ 0x00450050
0045002c  MOV EDX,dword ptr [EBP + 0xfffffd54]
00450032  MOV dword ptr [EBP + 0xfffffd40],EDX
00450038  MOV EAX,dword ptr [EBP + 0xfffffd58]
0045003e  MOV dword ptr [EBP + 0xfffffd48],EAX
00450044  MOV ECX,dword ptr [EBP + 0xfffffd64]
0045004a  MOV dword ptr [EBP + 0xfffffd60],ECX
00450050  CMP dword ptr [EBP + 0xfffffd58],0xa
00450057  JGE 0x00450065
00450059  MOV EDX,dword ptr [EBP + 0xfffffd64]
0045005f  MOV dword ptr [EBP + 0xfffffd5c],EDX
00450065  MOV dword ptr [EBP + 0xfffffd3c],0x0
0045006f  MOV dword ptr [EBP + 0xfffffd58],0x0
00450079  MOV dword ptr [EBP + 0xfffffd64],0x0
00450083  MOV byte ptr [EBP + 0xfffffd53],0x0
0045008a  JMP 0x004500f0
0045008c  MOV byte ptr [EBP + 0xfffffd53],0x1
00450093  MOV EAX,dword ptr [EBP + 0xfffffd5c]
00450099  MOV dword ptr [EBP + 0xfffffd64],EAX
0045009f  CMP dword ptr [EBP + 0xfffffd3c],0x0
004500a6  JNZ 0x004500b4
004500a8  MOV ECX,dword ptr [EBP + 0xfffffd64]
004500ae  MOV dword ptr [EBP + 0xfffffd58],ECX
004500b4  MOV EDX,dword ptr [EBP + 0xfffffd3c]
004500ba  ADD EDX,0x1
004500bd  MOV dword ptr [EBP + 0xfffffd3c],EDX
004500c3  CMP dword ptr [EBP + 0xfffffd3c],0x5
004500ca  JL 0x004500f0
004500cc  MOV EAX,dword ptr [EBP + 0xfffffd3c]
004500d2  MOV dword ptr [EBP + 0xfffffd54],EAX
004500d8  MOV ECX,dword ptr [EBP + 0xfffffd58]
004500de  MOV dword ptr [EBP + 0xfffffd44],ECX
004500e4  MOV EDX,dword ptr [EBP + 0xfffffd64]
004500ea  MOV dword ptr [EBP + 0xfffffd4c],EDX
004500f0  JMP 0x0044ff8a
004500f5  CMP dword ptr [EBP + 0xfffffd54],0x5
004500fc  JL 0x004502dd
00450102  MOV EAX,dword ptr [EBP + 0xfffffd34]
00450108  MOV ECX,dword ptr [EBP + 0xfffffd54]
0045010e  MOV dword ptr [EAX + 0x2f4],ECX
00450114  MOV EDX,dword ptr [EBP + 0xfffffd34]
0045011a  MOV EAX,dword ptr [EBP + 0xfffffd44]
00450120  MOV dword ptr [EDX + 0x2f8],EAX
00450126  MOV ECX,dword ptr [EBP + 0xfffffd34]
0045012c  MOV EDX,dword ptr [EBP + 0xfffffd4c]
00450132  MOV dword ptr [ECX + 0x2fc],EDX
00450138  MOV ECX,dword ptr [0x00790738]
0045013e  CALL 0x0045f940
00450143  MOVZX EAX,AL
00450146  TEST EAX,EAX
00450148  JZ 0x00450188
0045014a  MOV ECX,dword ptr [EBP + 0xfffffd34]
00450150  CMP dword ptr [ECX + 0x2f8],0x1
00450157  JNZ 0x00450188
00450159  MOV EDX,dword ptr [EBP + 0xfffffd34]
0045015f  CMP dword ptr [EDX + 0x2fc],0x1
00450166  JNZ 0x00450188
00450168  MOV EAX,dword ptr [EBP + 0xfffffd34]
0045016e  MOV dword ptr [EAX + 0x2f8],0x2
00450178  MOV ECX,dword ptr [EBP + 0xfffffd34]
0045017e  MOV dword ptr [ECX + 0x2fc],0xe
00450188  MOV dword ptr [EBP + 0xfffffd5c],0x0
00450192  JMP 0x004501a3
00450194  MOV EDX,dword ptr [EBP + 0xfffffd5c]
0045019a  ADD EDX,0x1
0045019d  MOV dword ptr [EBP + 0xfffffd5c],EDX
004501a3  MOV EAX,dword ptr [EBP + 0xfffffd34]
004501a9  MOV ECX,dword ptr [EBP + 0xfffffd5c]
004501af  CMP ECX,dword ptr [EAX + 0x2f4]
004501b5  JGE 0x004501de
004501b7  MOV EDX,dword ptr [EBP + 0xfffffd34]
004501bd  MOV EAX,dword ptr [EDX + 0x2f8]
004501c3  ADD EAX,dword ptr [EBP + 0xfffffd5c]
004501c9  MOV ECX,dword ptr [EBP + 0xfffffd5c]
004501cf  MOV EDX,dword ptr [EBP + 0xfffffd34]
004501d5  MOV dword ptr [EDX + ECX*0x4 + 0x2d8],EAX
004501dc  JMP 0x00450194
004501de  CMP dword ptr [EBP + 0xfffffd40],0x5
004501e5  JL 0x004502d9
004501eb  MOV EAX,dword ptr [EBP + 0xfffffd44]
004501f1  CMP EAX,dword ptr [EBP + 0xfffffd48]
004501f7  JZ 0x004502d9
004501fd  MOV ECX,dword ptr [EBP + 0xfffffd34]
00450203  MOV EDX,dword ptr [EBP + 0xfffffd40]
00450209  MOV dword ptr [ECX + 0x31c],EDX
0045020f  MOV EAX,dword ptr [EBP + 0xfffffd34]
00450215  MOV ECX,dword ptr [EBP + 0xfffffd48]
0045021b  MOV dword ptr [EAX + 0x320],ECX
00450221  MOV EDX,dword ptr [EBP + 0xfffffd34]
00450227  MOV EAX,dword ptr [EBP + 0xfffffd60]
0045022d  MOV dword ptr [EDX + 0x324],EAX
00450233  MOV ECX,dword ptr [0x00790738]
00450239  CALL 0x0045f940
0045023e  MOVZX ECX,AL
00450241  TEST ECX,ECX
00450243  JZ 0x00450283
00450245  MOV EDX,dword ptr [EBP + 0xfffffd34]
0045024b  CMP dword ptr [EDX + 0x320],0x1
00450252  JNZ 0x00450283
00450254  MOV EAX,dword ptr [EBP + 0xfffffd34]
0045025a  CMP dword ptr [EAX + 0x324],0x1
00450261  JNZ 0x00450283
00450263  MOV ECX,dword ptr [EBP + 0xfffffd34]
00450269  MOV dword ptr [ECX + 0x320],0x2
00450273  MOV EDX,dword ptr [EBP + 0xfffffd34]
00450279  MOV dword ptr [EDX + 0x324],0xe
00450283  MOV dword ptr [EBP + 0xfffffd5c],0x0
0045028d  JMP 0x0045029e
0045028f  MOV EAX,dword ptr [EBP + 0xfffffd5c]
00450295  ADD EAX,0x1
00450298  MOV dword ptr [EBP + 0xfffffd5c],EAX
0045029e  MOV ECX,dword ptr [EBP + 0xfffffd34]
004502a4  MOV EDX,dword ptr [EBP + 0xfffffd5c]
004502aa  CMP EDX,dword ptr [ECX + 0x31c]
004502b0  JGE 0x004502d9
004502b2  MOV EAX,dword ptr [EBP + 0xfffffd34]
004502b8  MOV ECX,dword ptr [EAX + 0x320]
004502be  ADD ECX,dword ptr [EBP + 0xfffffd5c]
004502c4  MOV EDX,dword ptr [EBP + 0xfffffd5c]
004502ca  MOV EAX,dword ptr [EBP + 0xfffffd34]
004502d0  MOV dword ptr [EAX + EDX*0x4 + 0x300],ECX
004502d7  JMP 0x0045028f
004502d9  MOV AL,0x1
004502db  JMP 0x004502df
004502dd  XOR AL,AL
004502df  POP EDI
004502e0  POP ESI
004502e1  MOV ESP,EBP
004502e3  POP EBP
004502e4  RET
