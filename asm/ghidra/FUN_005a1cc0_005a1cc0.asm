; FUN_005a1cc0  005a1cc0
005a1cc0  PUSH EBP
005a1cc1  MOV EBP,ESP
005a1cc3  SUB ESP,0x8
005a1cc6  MOV dword ptr [EBP + -0x8],ECX
005a1cc9  MOV ECX,dword ptr [EBP + -0x8]
005a1ccc  CALL 0x005e9e20
005a1cd1  MOV EAX,dword ptr [EBP + -0x8]
005a1cd4  MOV dword ptr [EAX],0x6cf69c
005a1cda  MOV ECX,dword ptr [EBP + -0x8]
005a1cdd  MOV dword ptr [ECX + 0x4],0x0
005a1ce4  MOV dword ptr [EBP + -0x4],0x0
005a1ceb  JMP 0x005a1cf6
005a1ced  MOV EDX,dword ptr [EBP + -0x4]
005a1cf0  ADD EDX,0x1
005a1cf3  MOV dword ptr [EBP + -0x4],EDX
005a1cf6  CMP dword ptr [EBP + -0x4],0xc
005a1cfa  JGE 0x005a1d0c
005a1cfc  MOV EAX,dword ptr [EBP + -0x4]
005a1cff  MOV ECX,dword ptr [EBP + -0x8]
005a1d02  MOV dword ptr [ECX + EAX*0x4 + 0x8],0x0
005a1d0a  JMP 0x005a1ced
005a1d0c  MOV EAX,dword ptr [EBP + -0x8]
005a1d0f  MOV ESP,EBP
005a1d11  POP EBP
005a1d12  RET
