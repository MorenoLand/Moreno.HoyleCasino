; FUN_006094b0  006094b0
006094b0  PUSH EBP
006094b1  MOV EBP,ESP
006094b3  SUB ESP,0xc
006094b6  MOV EAX,dword ptr [EBP + 0x14]
006094b9  MOV dword ptr [EBP + -0x4],EAX
006094bc  MOV ECX,dword ptr [EBP + -0x4]
006094bf  MOV EDX,dword ptr [EBP + -0x4]
006094c2  MOV EAX,dword ptr [ECX + 0x4]
006094c5  SUB EAX,dword ptr [EDX + 0x8]
006094c8  MOV dword ptr [EBP + -0x8],EAX
006094cb  MOV ECX,dword ptr [EBP + 0x10]
006094ce  IMUL ECX,dword ptr [EBP + 0xc]
006094d2  CMP ECX,dword ptr [EBP + -0x8]
006094d5  JNC 0x006094e3
006094d7  MOV EDX,dword ptr [EBP + 0x10]
006094da  IMUL EDX,dword ptr [EBP + 0xc]
006094de  MOV dword ptr [EBP + -0xc],EDX
006094e1  JMP 0x006094e9
006094e3  MOV EAX,dword ptr [EBP + -0x8]
006094e6  MOV dword ptr [EBP + -0xc],EAX
006094e9  CMP dword ptr [EBP + -0xc],0x0
006094ed  JZ 0x0060951a
006094ef  MOV ECX,dword ptr [EBP + -0xc]
006094f2  PUSH ECX
006094f3  MOV EDX,dword ptr [EBP + -0x4]
006094f6  MOV EAX,dword ptr [EDX]
006094f8  MOV ECX,dword ptr [EBP + -0x4]
006094fb  ADD EAX,dword ptr [ECX + 0x8]
006094fe  PUSH EAX
006094ff  MOV EDX,dword ptr [EBP + 0x8]
00609502  PUSH EDX
00609503  CALL 0x00686fde
00609508  ADD ESP,0xc
0060950b  MOV EAX,dword ptr [EBP + -0x4]
0060950e  MOV ECX,dword ptr [EAX + 0x8]
00609511  ADD ECX,dword ptr [EBP + -0xc]
00609514  MOV EDX,dword ptr [EBP + -0x4]
00609517  MOV dword ptr [EDX + 0x8],ECX
0060951a  MOV EAX,dword ptr [EBP + -0xc]
0060951d  MOV ESP,EBP
0060951f  POP EBP
00609520  RET
