; FUN_005a80d0  005a80d0
005a80d0  PUSH EBP
005a80d1  MOV EBP,ESP
005a80d3  PUSH -0x1
005a80d5  PUSH 0x6a7995
005a80da  MOV EAX,FS:[0x0]
005a80e0  PUSH EAX
005a80e1  SUB ESP,0x1c
005a80e4  MOV EAX,[0x00781870]
005a80e9  XOR EAX,EBP
005a80eb  PUSH EAX
005a80ec  LEA EAX,[EBP + -0xc]
005a80ef  MOV FS:[0x0],EAX
005a80f5  MOV dword ptr [EBP + -0x20],ECX
005a80f8  MOV EAX,dword ptr [EBP + -0x20]
005a80fb  CMP dword ptr [EAX + 0x34],0x0
005a80ff  JNZ 0x005a816d
005a8101  PUSH 0x1bc
005a8106  CALL 0x00686d82
005a810b  ADD ESP,0x4
005a810e  MOV dword ptr [EBP + -0x14],EAX
005a8111  MOV dword ptr [EBP + -0x4],0x0
005a8118  CMP dword ptr [EBP + -0x14],0x0
005a811c  JZ 0x005a812b
005a811e  MOV ECX,dword ptr [EBP + -0x14]
005a8121  CALL 0x005a8960
005a8126  MOV dword ptr [EBP + -0x24],EAX
005a8129  JMP 0x005a8132
005a812b  MOV dword ptr [EBP + -0x24],0x0
005a8132  MOV ECX,dword ptr [EBP + -0x24]
005a8135  MOV dword ptr [EBP + -0x10],ECX
005a8138  MOV dword ptr [EBP + -0x4],0xffffffff
005a813f  MOV EDX,dword ptr [EBP + -0x20]
005a8142  MOV EAX,dword ptr [EBP + -0x10]
005a8145  MOV dword ptr [EDX + 0x34],EAX
005a8148  MOV ECX,dword ptr [EBP + -0x20]
005a814b  MOV EDX,dword ptr [ECX + 0x34]
005a814e  MOV EAX,dword ptr [EBP + -0x20]
005a8151  MOV ECX,dword ptr [EAX + 0x34]
005a8154  MOV EDX,dword ptr [EDX]
005a8156  MOV EAX,dword ptr [EDX + 0x3c]
005a8159  CALL EAX
005a815b  PUSH 0x82
005a8160  PUSH -0xa
005a8162  MOV ECX,dword ptr [EBP + -0x20]
005a8165  MOV ECX,dword ptr [ECX + 0x34]
005a8168  CALL 0x005f7340
005a816d  MOV EDX,dword ptr [EBP + -0x20]
005a8170  MOV ECX,dword ptr [EDX + 0x34]
005a8173  CALL 0x005f85d0
005a8178  PUSH 0x1
005a817a  MOV ECX,dword ptr [EBP + -0x20]
005a817d  CALL 0x005a8730
005a8182  MOV EAX,dword ptr [EBP + -0x20]
005a8185  CMP dword ptr [EAX + 0x28],0x0
005a8189  JNZ 0x005a81cf
005a818b  PUSH 0x5c
005a818d  CALL 0x00686d82
005a8192  ADD ESP,0x4
005a8195  MOV dword ptr [EBP + -0x1c],EAX
005a8198  MOV dword ptr [EBP + -0x4],0x1
005a819f  CMP dword ptr [EBP + -0x1c],0x0
005a81a3  JZ 0x005a81b2
005a81a5  MOV ECX,dword ptr [EBP + -0x1c]
005a81a8  CALL 0x005ab410
005a81ad  MOV dword ptr [EBP + -0x28],EAX
005a81b0  JMP 0x005a81b9
005a81b2  MOV dword ptr [EBP + -0x28],0x0
005a81b9  MOV ECX,dword ptr [EBP + -0x28]
005a81bc  MOV dword ptr [EBP + -0x18],ECX
005a81bf  MOV dword ptr [EBP + -0x4],0xffffffff
005a81c6  MOV EDX,dword ptr [EBP + -0x20]
005a81c9  MOV EAX,dword ptr [EBP + -0x18]
005a81cc  MOV dword ptr [EDX + 0x28],EAX
005a81cf  PUSH 0x0
005a81d1  MOV ECX,dword ptr [EBP + -0x20]
005a81d4  MOV EDX,dword ptr [ECX + 0x28]
005a81d7  MOV EAX,dword ptr [EBP + -0x20]
005a81da  MOV ECX,dword ptr [EAX + 0x28]
005a81dd  MOV EDX,dword ptr [EDX]
005a81df  MOV EAX,dword ptr [EDX + 0x6c]
005a81e2  CALL EAX
005a81e4  MOV ECX,dword ptr [EBP + -0x20]
005a81e7  MOV EDX,dword ptr [ECX + 0x28]
005a81ea  MOV EAX,dword ptr [EBP + -0x20]
005a81ed  MOV ECX,dword ptr [EAX + 0x28]
005a81f0  MOV EDX,dword ptr [EDX]
005a81f2  MOV EAX,dword ptr [EDX + 0x40]
005a81f5  CALL EAX
005a81f7  MOV ECX,dword ptr [EBP + -0xc]
005a81fa  MOV dword ptr FS:[0x0],ECX
005a8201  POP ECX
005a8202  MOV ESP,EBP
005a8204  POP EBP
005a8205  RET
