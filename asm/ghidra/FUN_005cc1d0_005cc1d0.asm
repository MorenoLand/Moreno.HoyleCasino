; FUN_005cc1d0  005cc1d0
005cc1d0  PUSH EBP
005cc1d1  MOV EBP,ESP
005cc1d3  PUSH ECX
005cc1d4  MOV dword ptr [EBP + -0x4],ECX
005cc1d7  MOV ECX,dword ptr [EBP + -0x4]
005cc1da  CALL 0x005eaaf0
005cc1df  MOV EAX,dword ptr [EBP + -0x4]
005cc1e2  MOV dword ptr [EAX],0x6d287c
005cc1e8  PUSH 0x960
005cc1ed  PUSH 0x0
005cc1ef  MOV ECX,dword ptr [EBP + -0x4]
005cc1f2  ADD ECX,0x17c
005cc1f8  PUSH ECX
005cc1f9  CALL 0x00686fa2
005cc1fe  ADD ESP,0xc
005cc201  MOV EDX,dword ptr [EBP + -0x4]
005cc204  MOV dword ptr [EDX + 0x178],0x0
005cc20e  MOV EAX,dword ptr [EBP + -0x4]
005cc211  MOV dword ptr [EAX + 0xadc],0x0
005cc21b  MOV EAX,dword ptr [EBP + -0x4]
005cc21e  MOV ESP,EBP
005cc220  POP EBP
005cc221  RET
