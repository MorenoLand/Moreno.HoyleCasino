; FUN_0062aae0  0062aae0
0062aae0  PUSH EBP
0062aae1  MOV EBP,ESP
0062aae3  SUB ESP,0xc
0062aae6  PUSH ESI
0062aae7  MOV dword ptr [EBP + -0xc],ECX
0062aaea  MOV EAX,dword ptr [EBP + -0xc]
0062aaed  MOV ECX,dword ptr [EBP + -0xc]
0062aaf0  MOV EDX,dword ptr [EAX + 0x8]
0062aaf3  CMP EDX,dword ptr [ECX + 0x10]
0062aaf6  JNZ 0x0062ab00
0062aaf8  MOV ECX,dword ptr [EBP + -0xc]
0062aafb  CALL 0x0062a980
0062ab00  MOV EAX,dword ptr [EBP + -0xc]
0062ab03  MOV ECX,dword ptr [EAX + 0xc]
0062ab06  MOV dword ptr [EBP + -0x8],ECX
0062ab09  MOV EDX,dword ptr [EBP + -0xc]
0062ab0c  MOV EAX,dword ptr [EDX + 0x8]
0062ab0f  SUB EAX,0x1
0062ab12  MOV dword ptr [EBP + -0x4],EAX
0062ab15  JMP 0x0062ab20
0062ab17  MOV ECX,dword ptr [EBP + -0x4]
0062ab1a  SUB ECX,0x1
0062ab1d  MOV dword ptr [EBP + -0x4],ECX
0062ab20  MOV EDX,dword ptr [EBP + -0x4]
0062ab23  CMP EDX,dword ptr [EBP + 0xc]
0062ab26  JL 0x0062ab3d
0062ab28  MOV EAX,dword ptr [EBP + -0x4]
0062ab2b  MOV ECX,dword ptr [EBP + -0x8]
0062ab2e  MOV EDX,dword ptr [EBP + -0x4]
0062ab31  MOV ESI,dword ptr [EBP + -0x8]
0062ab34  MOV EDX,dword ptr [ESI + EDX*0x4]
0062ab37  MOV dword ptr [ECX + EAX*0x4 + 0x4],EDX
0062ab3b  JMP 0x0062ab17
0062ab3d  MOV EAX,dword ptr [EBP + -0xc]
0062ab40  MOV ECX,dword ptr [EAX + 0x8]
0062ab43  ADD ECX,0x1
0062ab46  MOV EDX,dword ptr [EBP + -0xc]
0062ab49  MOV dword ptr [EDX + 0x8],ECX
0062ab4c  MOV EAX,dword ptr [EBP + 0xc]
0062ab4f  MOV ECX,dword ptr [EBP + -0x8]
0062ab52  MOV EDX,dword ptr [EBP + 0x8]
0062ab55  MOV dword ptr [ECX + EAX*0x4],EDX
0062ab58  POP ESI
0062ab59  MOV ESP,EBP
0062ab5b  POP EBP
0062ab5c  RET 0x8
