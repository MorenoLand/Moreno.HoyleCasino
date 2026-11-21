; FUN_0042bf50  0042bf50
0042bf50  PUSH EBP
0042bf51  MOV EBP,ESP
0042bf53  SUB ESP,0x8
0042bf56  MOV dword ptr [EBP + -0x8],ECX
0042bf59  MOV ECX,dword ptr [EBP + -0x8]
0042bf5c  CALL 0x005cc1d0
0042bf61  MOV EAX,dword ptr [EBP + -0x8]
0042bf64  MOV dword ptr [EAX],0x6b6b74
0042bf6a  MOV ECX,dword ptr [EBP + -0x8]
0042bf6d  MOV dword ptr [ECX + 0xae4],0x0
0042bf77  MOV EDX,dword ptr [EBP + -0x8]
0042bf7a  MOV dword ptr [EDX + 0xae8],0x0
0042bf84  MOV EAX,dword ptr [EBP + -0x8]
0042bf87  MOV dword ptr [EAX + 0xae0],0x0
0042bf91  MOV dword ptr [EBP + -0x4],0x0
0042bf98  JMP 0x0042bfa3
0042bf9a  MOV ECX,dword ptr [EBP + -0x4]
0042bf9d  ADD ECX,0x1
0042bfa0  MOV dword ptr [EBP + -0x4],ECX
0042bfa3  CMP dword ptr [EBP + -0x4],0x4
0042bfa7  JGE 0x0042bfcd
0042bfa9  MOV EDX,dword ptr [EBP + -0x4]
0042bfac  MOV EAX,dword ptr [EBP + -0x8]
0042bfaf  MOV dword ptr [EAX + EDX*0x4 + 0xaec],0x0
0042bfba  MOV ECX,dword ptr [EBP + -0x4]
0042bfbd  MOV EDX,dword ptr [EBP + -0x8]
0042bfc0  MOV dword ptr [EDX + ECX*0x4 + 0xafc],0x0
0042bfcb  JMP 0x0042bf9a
0042bfcd  MOV EAX,dword ptr [EBP + -0x8]
0042bfd0  MOV ESP,EBP
0042bfd2  POP EBP
0042bfd3  RET
