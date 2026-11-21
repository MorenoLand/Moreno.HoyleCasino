; FUN_0066d1c0  0066d1c0
0066d1c0  PUSH EBP
0066d1c1  MOV EBP,ESP
0066d1c3  SUB ESP,0x8
0066d1c6  MOV dword ptr [EBP + -0x8],ECX
0066d1c9  MOV EAX,dword ptr [EBP + -0x8]
0066d1cc  MOVZX ECX,byte ptr [EAX + 0x18]
0066d1d0  TEST ECX,ECX
0066d1d2  JNZ 0x0066d1d6
0066d1d4  JMP 0x0066d23e
0066d1d6  MOV EDX,dword ptr [EBP + -0x8]
0066d1d9  MOV EAX,dword ptr [EDX]
0066d1db  MOV ECX,dword ptr [EBP + -0x8]
0066d1de  MOV EDX,dword ptr [EAX + 0x10]
0066d1e1  CALL EDX
0066d1e3  MOV dword ptr [EBP + -0x4],EAX
0066d1e6  MOV EAX,dword ptr [EBP + -0x8]
0066d1e9  MOV ECX,dword ptr [EAX + 0x4]
0066d1ec  CALL 0x005eb220
0066d1f1  CMP EAX,dword ptr [EBP + -0x4]
0066d1f4  JZ 0x0066d23e
0066d1f6  MOV ECX,dword ptr [EBP + -0x8]
0066d1f9  MOV EDX,dword ptr [EBP + -0x4]
0066d1fc  CMP EDX,dword ptr [ECX + 0x1c]
0066d1ff  JNZ 0x0066d224
0066d201  MOV dword ptr [EBP + -0x4],0x0
0066d208  MOV EAX,dword ptr [EBP + -0x4]
0066d20b  PUSH EAX
0066d20c  MOV ECX,dword ptr [EBP + -0x8]
0066d20f  MOV EDX,dword ptr [ECX + 0x4]
0066d212  MOV EAX,dword ptr [EBP + -0x8]
0066d215  MOV ECX,dword ptr [EAX + 0x4]
0066d218  MOV EDX,dword ptr [EDX]
0066d21a  MOV EAX,dword ptr [EDX + 0xb0]
0066d220  CALL EAX
0066d222  JMP 0x0066d23e
0066d224  MOV ECX,dword ptr [EBP + -0x4]
0066d227  PUSH ECX
0066d228  MOV EDX,dword ptr [EBP + -0x8]
0066d22b  MOV EAX,dword ptr [EDX + 0x4]
0066d22e  MOV ECX,dword ptr [EBP + -0x8]
0066d231  MOV ECX,dword ptr [ECX + 0x4]
0066d234  MOV EDX,dword ptr [EAX]
0066d236  MOV EAX,dword ptr [EDX + 0xb0]
0066d23c  CALL EAX
0066d23e  MOV ESP,EBP
0066d240  POP EBP
0066d241  RET
