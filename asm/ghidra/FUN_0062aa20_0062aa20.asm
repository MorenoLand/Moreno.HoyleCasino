; FUN_0062aa20  0062aa20
0062aa20  PUSH EBP
0062aa21  MOV EBP,ESP
0062aa23  SUB ESP,0x8
0062aa26  MOV dword ptr [EBP + -0x8],ECX
0062aa29  MOV EAX,dword ptr [EBP + -0x8]
0062aa2c  MOV ECX,dword ptr [EBP + -0x8]
0062aa2f  MOV EDX,dword ptr [EAX + 0x8]
0062aa32  CMP EDX,dword ptr [ECX + 0x10]
0062aa35  JNZ 0x0062aa3f
0062aa37  MOV ECX,dword ptr [EBP + -0x8]
0062aa3a  CALL 0x0062a980
0062aa3f  MOV EAX,dword ptr [EBP + -0x8]
0062aa42  MOV ECX,dword ptr [EAX + 0xc]
0062aa45  MOV dword ptr [EBP + -0x4],ECX
0062aa48  MOV EDX,dword ptr [EBP + -0x8]
0062aa4b  MOV EAX,dword ptr [EDX + 0x8]
0062aa4e  MOV ECX,dword ptr [EBP + -0x4]
0062aa51  MOV EDX,dword ptr [EBP + 0x8]
0062aa54  MOV dword ptr [ECX + EAX*0x4],EDX
0062aa57  MOV EAX,dword ptr [EBP + -0x8]
0062aa5a  MOV ECX,dword ptr [EAX + 0x8]
0062aa5d  ADD ECX,0x1
0062aa60  MOV EDX,dword ptr [EBP + -0x8]
0062aa63  MOV dword ptr [EDX + 0x8],ECX
0062aa66  MOV ESP,EBP
0062aa68  POP EBP
0062aa69  RET 0x4
