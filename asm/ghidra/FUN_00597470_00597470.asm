; FUN_00597470  00597470
00597470  PUSH EBP
00597471  MOV EBP,ESP
00597473  SUB ESP,0x18
00597476  MOV dword ptr [EBP + -0x18],ECX
00597479  PUSH 0x6
0059747b  MOV ECX,dword ptr [EBP + 0x8]
0059747e  CALL 0x0063aae0
00597483  MOV dword ptr [EBP + -0x4],EAX
00597486  MOV EAX,dword ptr [EBP + -0x4]
00597489  MOV ECX,dword ptr [EAX + 0x4]
0059748c  MOV EDX,dword ptr [EBP + -0x4]
0059748f  ADD ECX,dword ptr [EDX + 0xc]
00597492  MOV EAX,dword ptr [EBP + 0xc]
00597495  ADD ECX,dword ptr [EAX]
00597497  MOV EDX,dword ptr [EBP + 0xc]
0059749a  MOV dword ptr [EDX],ECX
0059749c  MOV EAX,dword ptr [EBP + 0xc]
0059749f  MOV ECX,dword ptr [EAX + 0x4]
005974a2  MOV EDX,dword ptr [EBP + -0x4]
005974a5  ADD ECX,dword ptr [EDX + 0x8]
005974a8  MOV EAX,dword ptr [EBP + 0xc]
005974ab  MOV dword ptr [EAX + 0x4],ECX
005974ae  MOV ECX,dword ptr [EBP + 0x10]
005974b1  MOV EDX,dword ptr [ECX]
005974b3  MOV EAX,dword ptr [EBP + -0x4]
005974b6  ADD EDX,dword ptr [EAX + 0x4]
005974b9  MOV ECX,dword ptr [EBP + 0x10]
005974bc  MOV dword ptr [ECX],EDX
005974be  MOV EDX,dword ptr [EBP + 0x10]
005974c1  MOV EAX,dword ptr [EDX + 0x4]
005974c4  MOV ECX,dword ptr [EBP + -0x4]
005974c7  ADD EAX,dword ptr [ECX + 0x8]
005974ca  MOV EDX,dword ptr [EBP + 0x10]
005974cd  MOV dword ptr [EDX + 0x4],EAX
005974d0  MOV EAX,dword ptr [EBP + 0x14]
005974d3  MOV ECX,dword ptr [EAX]
005974d5  MOV EDX,dword ptr [EBP + -0x4]
005974d8  ADD ECX,dword ptr [EDX + 0xc]
005974db  MOV EAX,dword ptr [EBP + 0x14]
005974de  MOV dword ptr [EAX],ECX
005974e0  MOV ECX,dword ptr [EBP + 0x14]
005974e3  MOV EDX,dword ptr [ECX + 0x4]
005974e6  MOV EAX,dword ptr [EBP + -0x4]
005974e9  ADD EDX,dword ptr [EAX + 0x10]
005974ec  MOV ECX,dword ptr [EBP + 0x14]
005974ef  MOV dword ptr [ECX + 0x4],EDX
005974f2  PUSH -0x1
005974f4  MOV EDX,dword ptr [0x007947e0]
005974fa  MOV EAX,dword ptr [EDX]
005974fc  MOV ECX,dword ptr [0x007947e0]
00597502  MOV EDX,dword ptr [EAX + 0x33c]
00597508  CALL EDX
0059750a  MOVZX EAX,AL
0059750d  TEST EAX,EAX
0059750f  JZ 0x0059758f
00597511  MOV ECX,dword ptr [0x0162ee84]
00597517  CALL 0x005f3bf0
0059751c  CMP EAX,0x6
0059751f  JNZ 0x0059758f
00597521  LEA ECX,[EBP + -0xc]
00597524  PUSH ECX
00597525  LEA EDX,[EBP + -0x14]
00597528  PUSH EDX
00597529  MOV EAX,dword ptr [EBP + 0x8]
0059752c  PUSH EAX
0059752d  MOV ECX,dword ptr [0x007947e0]
00597533  CALL 0x005e0c40
00597538  MOV ECX,dword ptr [EBP + -0x14]
0059753b  ADD ECX,dword ptr [EBP + -0xc]
0059753e  MOV EDX,dword ptr [EBP + 0xc]
00597541  ADD ECX,dword ptr [EDX]
00597543  MOV EAX,dword ptr [EBP + 0xc]
00597546  MOV dword ptr [EAX],ECX
00597548  MOV ECX,dword ptr [EBP + 0xc]
0059754b  MOV EDX,dword ptr [ECX + 0x4]
0059754e  ADD EDX,dword ptr [EBP + -0x10]
00597551  MOV EAX,dword ptr [EBP + 0xc]
00597554  MOV dword ptr [EAX + 0x4],EDX
00597557  MOV ECX,dword ptr [EBP + 0x10]
0059755a  MOV EDX,dword ptr [ECX]
0059755c  ADD EDX,dword ptr [EBP + -0x14]
0059755f  MOV EAX,dword ptr [EBP + 0x10]
00597562  MOV dword ptr [EAX],EDX
00597564  MOV ECX,dword ptr [EBP + 0x10]
00597567  MOV EDX,dword ptr [ECX + 0x4]
0059756a  ADD EDX,dword ptr [EBP + -0x10]
0059756d  MOV EAX,dword ptr [EBP + 0x10]
00597570  MOV dword ptr [EAX + 0x4],EDX
00597573  MOV ECX,dword ptr [EBP + 0x14]
00597576  MOV EDX,dword ptr [ECX]
00597578  ADD EDX,dword ptr [EBP + -0xc]
0059757b  MOV EAX,dword ptr [EBP + 0x14]
0059757e  MOV dword ptr [EAX],EDX
00597580  MOV ECX,dword ptr [EBP + 0x14]
00597583  MOV EDX,dword ptr [ECX + 0x4]
00597586  ADD EDX,dword ptr [EBP + -0x8]
00597589  MOV EAX,dword ptr [EBP + 0x14]
0059758c  MOV dword ptr [EAX + 0x4],EDX
0059758f  MOV ESP,EBP
00597591  POP EBP
00597592  RET 0x10
