; FUN_005f8ce0  005f8ce0
005f8ce0  PUSH EBP
005f8ce1  MOV EBP,ESP
005f8ce3  SUB ESP,0x8
005f8ce6  MOV dword ptr [EBP + -0x8],ECX
005f8ce9  MOV EAX,dword ptr [EBP + 0x8]
005f8cec  PUSH EAX
005f8ced  MOV ECX,dword ptr [EBP + -0x8]
005f8cf0  ADD ECX,0x13c
005f8cf6  CALL 0x0060c9e0
005f8cfb  MOVZX ECX,AL
005f8cfe  TEST ECX,ECX
005f8d00  JZ 0x005f8d5f
005f8d02  MOV EDX,dword ptr [EBP + 0x8]
005f8d05  PUSH EDX
005f8d06  MOV ECX,dword ptr [EBP + -0x8]
005f8d09  ADD ECX,0x13c
005f8d0f  CALL 0x0060c890
005f8d14  MOV dword ptr [EBP + -0x4],0x0
005f8d1b  JMP 0x005f8d26
005f8d1d  MOV EAX,dword ptr [EBP + -0x4]
005f8d20  ADD EAX,0x1
005f8d23  MOV dword ptr [EBP + -0x4],EAX
005f8d26  MOV ECX,dword ptr [EBP + -0x8]
005f8d29  MOV EDX,dword ptr [EBP + -0x4]
005f8d2c  CMP EDX,dword ptr [ECX + 0x154]
005f8d32  JGE 0x005f8d5f
005f8d34  MOV EAX,dword ptr [EBP + -0x8]
005f8d37  MOV ECX,dword ptr [EAX + 0x14c]
005f8d3d  MOV EDX,dword ptr [EBP + -0x4]
005f8d40  MOV EAX,dword ptr [ECX + EDX*0x4]
005f8d43  CMP EAX,dword ptr [EBP + 0x8]
005f8d46  JNZ 0x005f8d5d
005f8d48  MOV ECX,dword ptr [EBP + -0x8]
005f8d4b  MOV EDX,dword ptr [ECX + 0x14c]
005f8d51  MOV EAX,dword ptr [EBP + -0x4]
005f8d54  MOV dword ptr [EDX + EAX*0x4],0x0
005f8d5b  JMP 0x005f8d5f
005f8d5d  JMP 0x005f8d1d
005f8d5f  MOV ESP,EBP
005f8d61  POP EBP
005f8d62  RET 0x4
