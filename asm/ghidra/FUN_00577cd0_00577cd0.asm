; FUN_00577cd0  00577cd0
00577cd0  PUSH EBP
00577cd1  MOV EBP,ESP
00577cd3  PUSH ECX
00577cd4  MOV dword ptr [EBP + -0x4],ECX
00577cd7  MOV EAX,dword ptr [EBP + -0x4]
00577cda  CMP dword ptr [EAX + 0x8],0x0
00577cde  JZ 0x00577cf5
00577ce0  PUSH 0x0
00577ce2  MOV ECX,dword ptr [EBP + -0x4]
00577ce5  MOV EDX,dword ptr [ECX + 0x8]
00577ce8  MOV EAX,dword ptr [EBP + -0x4]
00577ceb  MOV ECX,dword ptr [EAX + 0x8]
00577cee  MOV EDX,dword ptr [EDX]
00577cf0  MOV EAX,dword ptr [EDX + 0x1c]
00577cf3  CALL EAX
00577cf5  MOV ECX,dword ptr [EBP + -0x4]
00577cf8  CMP dword ptr [ECX + 0xc],0x1
00577cfc  JNZ 0x00577d10
00577cfe  PUSH 0xff
00577d03  MOV EDX,dword ptr [EBP + -0x4]
00577d06  MOV ECX,dword ptr [EDX + 0x4]
00577d09  CALL 0x005eb5d0
00577d0e  JMP 0x00577d30
00577d10  PUSH 0x0
00577d12  MOV EAX,dword ptr [EBP + -0x4]
00577d15  MOV ECX,dword ptr [EAX + 0x4]
00577d18  CALL 0x005eb5d0
00577d1d  MOV ECX,dword ptr [EBP + -0x4]
00577d20  MOV EDX,dword ptr [ECX + 0x4]
00577d23  MOV EAX,dword ptr [EBP + -0x4]
00577d26  MOV ECX,dword ptr [EAX + 0x4]
00577d29  MOV EDX,dword ptr [EDX]
00577d2b  MOV EAX,dword ptr [EDX + 0x70]
00577d2e  CALL EAX
00577d30  MOV ECX,dword ptr [EBP + -0x4]
00577d33  CALL 0x006005d0
00577d38  MOV ESP,EBP
00577d3a  POP EBP
00577d3b  RET
