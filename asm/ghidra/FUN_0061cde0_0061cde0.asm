; FUN_0061cde0  0061cde0
0061cde0  PUSH EBP
0061cde1  MOV EBP,ESP
0061cde3  SUB ESP,0x8
0061cde6  MOV EAX,dword ptr [EBP + 0x8]
0061cde9  MOV ECX,dword ptr [EAX]
0061cdeb  MOV DX,word ptr [ECX]
0061cdee  MOV word ptr [EBP + -0x8],DX
0061cdf2  MOV EAX,dword ptr [EBP + 0x8]
0061cdf5  MOV ECX,dword ptr [EAX]
0061cdf7  ADD ECX,0x2
0061cdfa  MOV EDX,dword ptr [EBP + 0x8]
0061cdfd  MOV dword ptr [EDX],ECX
0061cdff  MOV dword ptr [EBP + -0x4],0x0
0061ce06  JMP 0x0061ce11
0061ce08  MOV EAX,dword ptr [EBP + -0x4]
0061ce0b  ADD EAX,0x1
0061ce0e  MOV dword ptr [EBP + -0x4],EAX
0061ce11  MOVZX ECX,word ptr [EBP + -0x8]
0061ce15  CMP dword ptr [EBP + -0x4],ECX
0061ce18  JGE 0x0061ce30
0061ce1a  MOV EDX,dword ptr [EBP + 0x10]
0061ce1d  PUSH EDX
0061ce1e  MOV EAX,dword ptr [EBP + 0xc]
0061ce21  PUSH EAX
0061ce22  MOV ECX,dword ptr [EBP + 0x8]
0061ce25  PUSH ECX
0061ce26  CALL 0x0061ce40
0061ce2b  ADD ESP,0xc
0061ce2e  JMP 0x0061ce08
0061ce30  MOV ESP,EBP
0061ce32  POP EBP
0061ce33  RET
