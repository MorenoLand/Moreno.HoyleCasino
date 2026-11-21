; FUN_0043d7a0  0043d7a0
0043d7a0  PUSH EBP
0043d7a1  MOV EBP,ESP
0043d7a3  SUB ESP,0x24
0043d7a6  MOV dword ptr [EBP + -0x1c],ECX
0043d7a9  MOV ECX,dword ptr [EBP + -0x1c]
0043d7ac  CALL 0x0043d350
0043d7b1  MOVZX EAX,AL
0043d7b4  TEST EAX,EAX
0043d7b6  JNZ 0x0043d7bd
0043d7b8  JMP 0x0043d921
0043d7bd  MOV ECX,dword ptr [EBP + -0x1c]
0043d7c0  MOV byte ptr [ECX + 0x188],0x1
0043d7c7  MOV EDX,dword ptr [EBP + 0x8]
0043d7ca  MOV dword ptr [EBP + -0xc],EDX
0043d7cd  MOV EAX,dword ptr [EBP + -0x1c]
0043d7d0  MOV ECX,dword ptr [EAX + 0x184]
0043d7d6  IMUL ECX,ECX,0x2710
0043d7dc  MOV dword ptr [EBP + -0x8],ECX
0043d7df  MOV dword ptr [EBP + -0x4],0x0
0043d7e6  JMP 0x0043d7f1
0043d7e8  MOV EDX,dword ptr [EBP + -0x4]
0043d7eb  ADD EDX,0x1
0043d7ee  MOV dword ptr [EBP + -0x4],EDX
0043d7f1  CMP dword ptr [EBP + -0x4],0x3
0043d7f5  JGE 0x0043d8c4
0043d7fb  MOV EAX,dword ptr [EBP + -0x4]
0043d7fe  MOV dword ptr [EBP + EAX*0x4 + -0x18],0x0
0043d806  MOV ECX,dword ptr [EBP + -0x4]
0043d809  MOV dword ptr [EBP + -0x20],ECX
0043d80c  CMP dword ptr [EBP + -0x20],0x0
0043d810  JZ 0x0043d820
0043d812  CMP dword ptr [EBP + -0x20],0x1
0043d816  JZ 0x0043d828
0043d818  CMP dword ptr [EBP + -0x20],0x2
0043d81c  JZ 0x0043d830
0043d81e  JMP 0x0043d836
0043d820  MOV EDX,dword ptr [EBP + 0x8]
0043d823  MOV dword ptr [EBP + -0xc],EDX
0043d826  JMP 0x0043d836
0043d828  MOV EAX,dword ptr [EBP + 0xc]
0043d82b  MOV dword ptr [EBP + -0xc],EAX
0043d82e  JMP 0x0043d836
0043d830  MOV ECX,dword ptr [EBP + 0x10]
0043d833  MOV dword ptr [EBP + -0xc],ECX
0043d836  MOV EDX,dword ptr [EBP + -0xc]
0043d839  MOV dword ptr [EBP + -0x24],EDX
0043d83c  CMP dword ptr [EBP + -0x24],0x4
0043d840  JA 0x0043d8a4
0043d842  MOV EAX,dword ptr [EBP + -0x24]
0043d845  JMP dword ptr [EAX*0x4 + 0x43d928]
0043d84c  MOV ECX,dword ptr [EBP + -0x8]
0043d84f  ADD ECX,0x24a52
0043d855  MOV EDX,dword ptr [EBP + -0x4]
0043d858  MOV dword ptr [EBP + EDX*0x4 + -0x18],ECX
0043d85c  JMP 0x0043d8bf
0043d85e  MOV EAX,dword ptr [EBP + -0x8]
0043d861  ADD EAX,0x24a51
0043d866  MOV ECX,dword ptr [EBP + -0x4]
0043d869  MOV dword ptr [EBP + ECX*0x4 + -0x18],EAX
0043d86d  JMP 0x0043d8bf
0043d86f  MOV EDX,dword ptr [EBP + -0x8]
0043d872  ADD EDX,0x24a50
0043d878  MOV EAX,dword ptr [EBP + -0x4]
0043d87b  MOV dword ptr [EBP + EAX*0x4 + -0x18],EDX
0043d87f  JMP 0x0043d8bf
0043d881  MOV ECX,dword ptr [EBP + -0x8]
0043d884  ADD ECX,0x24a4f
0043d88a  MOV EDX,dword ptr [EBP + -0x4]
0043d88d  MOV dword ptr [EBP + EDX*0x4 + -0x18],ECX
0043d891  JMP 0x0043d8bf
0043d893  MOV EAX,dword ptr [EBP + -0x8]
0043d896  ADD EAX,0x24a4e
0043d89b  MOV ECX,dword ptr [EBP + -0x4]
0043d89e  MOV dword ptr [EBP + ECX*0x4 + -0x18],EAX
0043d8a2  JMP 0x0043d8bf
0043d8a4  XOR EDX,EDX
0043d8a6  JNZ 0x0043d8bf
0043d8a8  PUSH 0x178
0043d8ad  PUSH 0x6b82b4
0043d8b2  PUSH 0x6b2b64
0043d8b7  CALL 0x005e9f20
0043d8bc  ADD ESP,0xc
0043d8bf  JMP 0x0043d7e8
0043d8c4  PUSH -0x1
0043d8c6  MOV ECX,dword ptr [EBP + -0x1c]
0043d8c9  MOV EDX,dword ptr [ECX + 0x1ec]
0043d8cf  PUSH EDX
0043d8d0  MOV EAX,dword ptr [EBP + -0x10]
0043d8d3  PUSH EAX
0043d8d4  MOV ECX,dword ptr [EBP + -0x1c]
0043d8d7  MOV EDX,dword ptr [ECX + 0x1e8]
0043d8dd  PUSH EDX
0043d8de  MOV EAX,dword ptr [EBP + -0x14]
0043d8e1  PUSH EAX
0043d8e2  MOV ECX,dword ptr [EBP + -0x1c]
0043d8e5  MOV EDX,dword ptr [ECX + 0x1e4]
0043d8eb  PUSH EDX
0043d8ec  MOV EAX,dword ptr [EBP + -0x18]
0043d8ef  PUSH EAX
0043d8f0  MOV ECX,dword ptr [EBP + -0x1c]
0043d8f3  MOV EDX,dword ptr [ECX + 0x17c]
0043d8f9  PUSH EDX
0043d8fa  CALL 0x0043f1b0
0043d8ff  ADD ESP,0x20
0043d902  PUSH 0x0
0043d904  PUSH 0x24
0043d906  MOV EAX,dword ptr [EBP + -0x1c]
0043d909  MOV ECX,dword ptr [EAX + 0x17c]
0043d90f  MOV EDX,dword ptr [EBP + -0x1c]
0043d912  MOV EAX,dword ptr [EDX + 0x17c]
0043d918  MOV EDX,dword ptr [ECX]
0043d91a  MOV ECX,EAX
0043d91c  MOV EAX,dword ptr [EDX + 0x8]
0043d91f  CALL EAX
0043d921  MOV ESP,EBP
0043d923  POP EBP
0043d924  RET 0xc
