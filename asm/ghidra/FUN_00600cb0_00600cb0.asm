; FUN_00600cb0  00600cb0
00600cb0  PUSH EBP
00600cb1  MOV EBP,ESP
00600cb3  SUB ESP,0x8
00600cb6  MOV dword ptr [EBP + -0x8],ECX
00600cb9  MOV EAX,dword ptr [EBP + -0x8]
00600cbc  MOVZX ECX,byte ptr [EAX + 0x18]
00600cc0  TEST ECX,ECX
00600cc2  JNZ 0x00600cc6
00600cc4  JMP 0x00600d15
00600cc6  MOV EDX,dword ptr [EBP + -0x8]
00600cc9  MOV EAX,dword ptr [EDX]
00600ccb  MOV ECX,dword ptr [EBP + -0x8]
00600cce  MOV EDX,dword ptr [EAX + 0x10]
00600cd1  CALL EDX
00600cd3  MOV dword ptr [EBP + -0x4],EAX
00600cd6  MOV EAX,dword ptr [EBP + -0x8]
00600cd9  MOV ECX,dword ptr [EAX + 0x4]
00600cdc  CALL 0x005eb220
00600ce1  CMP EAX,dword ptr [EBP + -0x4]
00600ce4  JZ 0x00600d15
00600ce6  CMP dword ptr [EBP + -0x4],0x0
00600cea  JGE 0x00600cfb
00600cec  MOV ECX,dword ptr [EBP + -0x8]
00600cef  MOV EDX,dword ptr [ECX]
00600cf1  MOV ECX,dword ptr [EBP + -0x8]
00600cf4  MOV EAX,dword ptr [EDX + 0x14]
00600cf7  CALL EAX
00600cf9  JMP 0x00600d15
00600cfb  MOV ECX,dword ptr [EBP + -0x4]
00600cfe  PUSH ECX
00600cff  MOV EDX,dword ptr [EBP + -0x8]
00600d02  MOV EAX,dword ptr [EDX + 0x4]
00600d05  MOV ECX,dword ptr [EBP + -0x8]
00600d08  MOV ECX,dword ptr [ECX + 0x4]
00600d0b  MOV EDX,dword ptr [EAX]
00600d0d  MOV EAX,dword ptr [EDX + 0xb0]
00600d13  CALL EAX
00600d15  MOV ESP,EBP
00600d17  POP EBP
00600d18  RET
