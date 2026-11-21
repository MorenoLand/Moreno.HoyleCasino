; FUN_0041bba0  0041bba0
0041bba0  PUSH EBP
0041bba1  MOV EBP,ESP
0041bba3  SUB ESP,0x10
0041bba6  MOV dword ptr [EBP + -0x10],ECX
0041bba9  MOV byte ptr [EBP + -0x5],0x0
0041bbad  MOV EAX,dword ptr [EBP + 0x18]
0041bbb0  PUSH EAX
0041bbb1  MOV ECX,dword ptr [EBP + 0x14]
0041bbb4  PUSH ECX
0041bbb5  MOV EDX,dword ptr [EBP + 0x10]
0041bbb8  PUSH EDX
0041bbb9  MOV EAX,dword ptr [EBP + 0xc]
0041bbbc  PUSH EAX
0041bbbd  MOV ECX,dword ptr [EBP + 0x8]
0041bbc0  PUSH ECX
0041bbc1  MOV EDX,dword ptr [EBP + 0x8]
0041bbc4  MOV EAX,dword ptr [EBP + -0x10]
0041bbc7  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x468]
0041bbce  CALL 0x0041d950
0041bbd3  MOV dword ptr [EBP + -0x4],0x0
0041bbda  JMP 0x0041bbe5
0041bbdc  MOV ECX,dword ptr [EBP + -0x4]
0041bbdf  ADD ECX,0x1
0041bbe2  MOV dword ptr [EBP + -0x4],ECX
0041bbe5  MOV EDX,dword ptr [EBP + 0x8]
0041bbe8  PUSH EDX
0041bbe9  MOV ECX,dword ptr [EBP + -0x10]
0041bbec  CALL 0x004194c0
0041bbf1  CMP dword ptr [EBP + -0x4],EAX
0041bbf4  JGE 0x0041bc15
0041bbf6  MOV EAX,dword ptr [EBP + -0x4]
0041bbf9  PUSH EAX
0041bbfa  MOV ECX,dword ptr [EBP + 0x8]
0041bbfd  PUSH ECX
0041bbfe  MOV ECX,dword ptr [EBP + -0x10]
0041bc01  CALL 0x0041b990
0041bc06  MOVZX EDX,AL
0041bc09  TEST EDX,EDX
0041bc0b  JZ 0x0041bc13
0041bc0d  MOV byte ptr [EBP + -0x5],0x1
0041bc11  JMP 0x0041bc15
0041bc13  JMP 0x0041bbdc
0041bc15  MOVZX EAX,byte ptr [EBP + -0x5]
0041bc19  TEST EAX,EAX
0041bc1b  JZ 0x0041bc36
0041bc1d  MOV ECX,dword ptr [EBP + 0x8]
0041bc20  PUSH ECX
0041bc21  CALL 0x005dcb00
0041bc26  ADD ESP,0x4
0041bc29  MOV dword ptr [EBP + -0xc],EAX
0041bc2c  MOV EDX,dword ptr [EBP + -0xc]
0041bc2f  MOV byte ptr [EDX + 0x4a2],0x1
0041bc36  MOV EAX,dword ptr [EBP + 0x10]
0041bc39  PUSH EAX
0041bc3a  MOV ECX,dword ptr [EBP + 0xc]
0041bc3d  PUSH ECX
0041bc3e  MOV EDX,dword ptr [EBP + 0x8]
0041bc41  PUSH EDX
0041bc42  MOV ECX,dword ptr [EBP + -0x10]
0041bc45  CALL 0x004191f0
0041bc4a  MOV ESP,EBP
0041bc4c  POP EBP
0041bc4d  RET 0x14
