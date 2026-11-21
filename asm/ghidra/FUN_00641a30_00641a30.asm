; FUN_00641a30  00641a30
00641a30  PUSH EBP
00641a31  MOV EBP,ESP
00641a33  SUB ESP,0x14
00641a36  MOV EAX,dword ptr [EBP + 0xc]
00641a39  MOV dword ptr [EBP + -0x4],EAX
00641a3c  CMP dword ptr [EBP + -0x4],0x1
00641a40  JZ 0x00641b4f
00641a46  CMP dword ptr [EBP + -0x4],0x2
00641a4a  JZ 0x00641b00
00641a50  CMP dword ptr [EBP + -0x4],0x3
00641a54  JZ 0x00641aab
00641a56  MOV ECX,dword ptr [EBP + 0x8]
00641a59  MOV dword ptr [EBP + -0x8],ECX
00641a5c  MOV EDX,dword ptr [EBP + -0x8]
00641a5f  SUB EDX,0x1
00641a62  MOV dword ptr [EBP + -0x8],EDX
00641a65  CMP dword ptr [EBP + -0x8],0x3
00641a69  JA 0x00641aab
00641a6b  MOV EAX,dword ptr [EBP + -0x8]
00641a6e  JMP dword ptr [EAX*0x4 + 0x641bbc]
00641aab  MOV ECX,dword ptr [EBP + 0x8]
00641aae  MOV dword ptr [EBP + -0xc],ECX
00641ab1  MOV EDX,dword ptr [EBP + -0xc]
00641ab4  SUB EDX,0x1
00641ab7  MOV dword ptr [EBP + -0xc],EDX
00641aba  CMP dword ptr [EBP + -0xc],0x3
00641abe  JA 0x00641b00
00641ac0  MOV EAX,dword ptr [EBP + -0xc]
00641ac3  JMP dword ptr [EAX*0x4 + 0x641bcc]
00641b00  MOV ECX,dword ptr [EBP + 0x8]
00641b03  MOV dword ptr [EBP + -0x10],ECX
00641b06  MOV EDX,dword ptr [EBP + -0x10]
00641b09  SUB EDX,0x1
00641b0c  MOV dword ptr [EBP + -0x10],EDX
00641b0f  CMP dword ptr [EBP + -0x10],0x3
00641b13  JA 0x00641b4f
00641b15  MOV EAX,dword ptr [EBP + -0x10]
00641b18  JMP dword ptr [EAX*0x4 + 0x641bdc]
00641b4f  MOV ECX,dword ptr [EBP + 0x8]
00641b52  MOV dword ptr [EBP + -0x14],ECX
00641b55  MOV EDX,dword ptr [EBP + -0x14]
00641b58  SUB EDX,0x1
00641b5b  MOV dword ptr [EBP + -0x14],EDX
00641b5e  CMP dword ptr [EBP + -0x14],0x3
00641b62  JA 0x00641b98
00641b64  MOV EAX,dword ptr [EBP + -0x14]
00641b67  JMP dword ptr [EAX*0x4 + 0x641bec]
00641b98  XOR ECX,ECX
00641b9a  JNZ 0x00641bb3
00641b9c  PUSH 0xeb
00641ba1  PUSH 0x6dc3c0
00641ba6  PUSH 0x6b2f58
00641bab  CALL 0x005e9f20
00641bb0  ADD ESP,0xc
00641bb3  XOR EAX,EAX
00641bb5  MOV ESP,EBP
00641bb7  POP EBP
00641bb8  RET
