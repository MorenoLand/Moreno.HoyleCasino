; FUN_005b9440  005b9440
005b9440  PUSH EBP
005b9441  MOV EBP,ESP
005b9443  SUB ESP,0xcc
005b9449  MOV dword ptr [EBP + 0xffffff38],ECX
005b944f  MOV EAX,dword ptr [EBP + 0xc]
005b9452  ADD EAX,0x1
005b9455  PUSH EAX
005b9456  MOV ECX,dword ptr [EBP + 0xffffff38]
005b945c  ADD ECX,0x4
005b945f  CALL 0x005b9ec0
005b9464  MOV ECX,dword ptr [EBP + 0xffffff38]
005b946a  ADD ECX,0x4
005b946d  MOV dword ptr [EBP + -0x58],ECX
005b9470  MOV EDX,dword ptr [EBP + -0x58]
005b9473  CMP dword ptr [EDX + 0x4],0x0
005b9477  JNZ 0x005b9485
005b9479  MOV dword ptr [EBP + 0xffffff34],0x0
005b9483  JMP 0x005b949a
005b9485  MOV EAX,dword ptr [EBP + -0x58]
005b9488  MOV ECX,dword ptr [EBP + -0x58]
005b948b  MOV EDX,dword ptr [EAX + 0x8]
005b948e  SUB EDX,dword ptr [ECX + 0x4]
005b9491  SAR EDX,0x4
005b9494  MOV dword ptr [EBP + 0xffffff34],EDX
005b949a  MOV EAX,dword ptr [EBP + 0xc]
005b949d  CMP EAX,dword ptr [EBP + 0xffffff34]
005b94a3  JC 0x005b94ab
005b94a5  CALL dword ptr [0x006b2274]
005b94ab  MOV ECX,dword ptr [EBP + 0xc]
005b94ae  SHL ECX,0x4
005b94b1  MOV EDX,dword ptr [EBP + -0x58]
005b94b4  ADD ECX,dword ptr [EDX + 0x4]
005b94b7  MOV dword ptr [EBP + -0x4],ECX
005b94ba  LEA EAX,[EBP + 0x8]
005b94bd  PUSH EAX
005b94be  MOV ECX,dword ptr [EBP + -0x4]
005b94c1  CALL 0x005ba090
005b94c6  MOV ESP,EBP
005b94c8  POP EBP
005b94c9  RET 0x8
