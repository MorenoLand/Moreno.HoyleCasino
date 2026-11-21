; FUN_00523e40  00523e40
00523e40  PUSH EBP
00523e41  MOV EBP,ESP
00523e43  SUB ESP,0x10
00523e46  MOV dword ptr [EBP + -0xc],ECX
00523e49  MOV EAX,dword ptr [EBP + -0xc]
00523e4c  MOV ECX,dword ptr [EAX + 0xae0]
00523e52  MOV EDX,dword ptr [EBP + -0xc]
00523e55  MOV EAX,dword ptr [EDX + 0xae0]
00523e5b  MOV EDX,dword ptr [ECX]
00523e5d  MOV ECX,EAX
00523e5f  MOV EAX,dword ptr [EDX + 0x70]
00523e62  CALL EAX
00523e64  MOV ECX,dword ptr [EBP + -0xc]
00523e67  MOV EDX,dword ptr [ECX + 0xae0]
00523e6d  MOV dword ptr [EBP + -0x8],EDX
00523e70  MOV EAX,dword ptr [EBP + -0x8]
00523e73  MOV dword ptr [EBP + -0x4],EAX
00523e76  CMP dword ptr [EBP + -0x4],0x0
00523e7a  JZ 0x00523e8f
00523e7c  PUSH 0x1
00523e7e  MOV ECX,dword ptr [EBP + -0x4]
00523e81  MOV EDX,dword ptr [ECX]
00523e83  MOV ECX,dword ptr [EBP + -0x4]
00523e86  MOV EAX,dword ptr [EDX]
00523e88  CALL EAX
00523e8a  MOV dword ptr [EBP + -0x10],EAX
00523e8d  JMP 0x00523e96
00523e8f  MOV dword ptr [EBP + -0x10],0x0
00523e96  MOV ECX,dword ptr [EBP + -0xc]
00523e99  MOV dword ptr [ECX + 0xae0],0x0
00523ea3  MOV ESP,EBP
00523ea5  POP EBP
00523ea6  RET
