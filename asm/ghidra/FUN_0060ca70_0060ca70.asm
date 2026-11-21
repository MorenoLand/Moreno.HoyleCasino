; FUN_0060ca70  0060ca70
0060ca70  PUSH EBP
0060ca71  MOV EBP,ESP
0060ca73  PUSH ECX
0060ca74  MOV dword ptr [EBP + -0x4],ECX
0060ca77  MOV EAX,dword ptr [EBP + -0x4]
0060ca7a  MOV ECX,dword ptr [EBP + 0x8]
0060ca7d  CMP ECX,dword ptr [EAX + 0x8]
0060ca80  JL 0x0060ca8c
0060ca82  MOV ECX,dword ptr [EBP + -0x4]
0060ca85  CALL 0x0060c720
0060ca8a  JMP 0x0060ca77
0060ca8c  MOV EDX,dword ptr [EBP + -0x4]
0060ca8f  MOV EAX,dword ptr [EDX + 0xc]
0060ca92  MOV ECX,dword ptr [EBP + 0x8]
0060ca95  MOV EDX,dword ptr [EBP + 0xc]
0060ca98  MOV dword ptr [EAX + ECX*0x4],EDX
0060ca9b  MOV EAX,dword ptr [EBP + -0x4]
0060ca9e  MOV ECX,dword ptr [EBP + 0x8]
0060caa1  CMP ECX,dword ptr [EAX + 0x4]
0060caa4  JLE 0x0060cab2
0060caa6  MOV EDX,dword ptr [EBP + 0x8]
0060caa9  ADD EDX,0x1
0060caac  MOV EAX,dword ptr [EBP + -0x4]
0060caaf  MOV dword ptr [EAX + 0x4],EDX
0060cab2  MOV ESP,EBP
0060cab4  POP EBP
0060cab5  RET 0x8
