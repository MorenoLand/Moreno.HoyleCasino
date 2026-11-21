; FUN_004178e0  004178e0
004178e0  PUSH EBP
004178e1  MOV EBP,ESP
004178e3  SUB ESP,0x8
004178e6  MOV dword ptr [EBP + -0x8],ECX
004178e9  CMP dword ptr [EBP + 0x8],0x0
004178ed  JNZ 0x004178f3
004178ef  XOR AL,AL
004178f1  JMP 0x0041795c
004178f3  MOV EAX,dword ptr [EBP + 0x8]
004178f6  MOV dword ptr [EBP + -0x4],EAX
004178f9  MOV ECX,dword ptr [EBP + -0x4]
004178fc  MOV byte ptr [ECX],0x0
004178ff  MOV EDX,dword ptr [EBP + -0x4]
00417902  MOV byte ptr [EDX + 0x1],0x2
00417906  MOV EAX,dword ptr [EBP + -0x4]
00417909  MOV byte ptr [EAX + 0x2],0x50
0041790d  MOV ECX,dword ptr [EBP + -0x4]
00417910  MOV byte ptr [ECX + 0x3],0x1
00417914  MOV EDX,dword ptr [EBP + -0x4]
00417917  MOV byte ptr [EDX + 0x4],0x0
0041791b  MOV EAX,dword ptr [EBP + -0x4]
0041791e  MOV byte ptr [EAX + 0x5],0x0
00417922  MOV ECX,dword ptr [EBP + -0x4]
00417925  MOV byte ptr [ECX + 0x6],0x1
00417929  MOV EDX,dword ptr [EBP + -0x4]
0041792c  MOV byte ptr [EDX + 0x7],0x1
00417930  MOV EAX,dword ptr [EBP + -0x4]
00417933  MOV byte ptr [EAX + 0x8],0x0
00417937  MOV ECX,dword ptr [EBP + -0x4]
0041793a  MOV byte ptr [ECX + 0x9],0x4
0041793e  MOV EDX,dword ptr [EBP + -0x4]
00417941  MOV byte ptr [EDX + 0xa],0x1
00417945  MOV EAX,dword ptr [EBP + -0x4]
00417948  MOV byte ptr [EAX + 0xb],0x1
0041794c  MOV ECX,dword ptr [EBP + -0x4]
0041794f  MOV byte ptr [ECX + 0xc],0x0
00417953  MOV EDX,dword ptr [EBP + -0x4]
00417956  MOV byte ptr [EDX + 0xd],0x1
0041795a  MOV AL,0x1
0041795c  MOV ESP,EBP
0041795e  POP EBP
0041795f  RET 0x4
