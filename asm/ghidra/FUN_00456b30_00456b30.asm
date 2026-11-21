; FUN_00456b30  00456b30
00456b30  PUSH EBP
00456b31  MOV EBP,ESP
00456b33  SUB ESP,0x24
00456b36  MOV dword ptr [EBP + -0x24],ECX
00456b39  MOV dword ptr [EBP + -0x18],0x0
00456b40  MOV dword ptr [EBP + -0x4],0x0
00456b47  MOV dword ptr [EBP + -0x8],0x0
00456b4e  MOV dword ptr [EBP + -0x10],0x0
00456b55  MOV dword ptr [EBP + -0x20],0xffffffff
00456b5c  MOV dword ptr [EBP + -0x14],0xffffffff
00456b63  MOV dword ptr [EBP + -0xc],0x0
00456b6a  JMP 0x00456b75
00456b6c  MOV EAX,dword ptr [EBP + -0xc]
00456b6f  ADD EAX,0x1
00456b72  MOV dword ptr [EBP + -0xc],EAX
00456b75  CMP dword ptr [EBP + -0xc],0x7
00456b79  JGE 0x00456c1b
00456b7f  MOV ECX,dword ptr [EBP + -0xc]
00456b82  MOV EDX,dword ptr [EBP + -0x24]
00456b85  MOV AX,word ptr [EDX + ECX*0x2 + 0x4]
00456b8a  PUSH EAX
00456b8b  MOV ECX,dword ptr [EBP + -0x24]
00456b8e  CALL 0x0044f680
00456b93  PUSH EAX
00456b94  MOV ECX,dword ptr [EBP + -0x24]
00456b97  CALL 0x0044f700
00456b9c  CMP EAX,0x4
00456b9f  JNZ 0x00456bc9
00456ba1  MOV ECX,dword ptr [EBP + -0xc]
00456ba4  MOV EDX,dword ptr [EBP + -0x24]
00456ba7  MOV AX,word ptr [EDX + ECX*0x2 + 0x4]
00456bac  PUSH EAX
00456bad  MOV ECX,dword ptr [EBP + -0x24]
00456bb0  CALL 0x0044f680
00456bb5  MOV dword ptr [EBP + -0x18],EAX
00456bb8  MOV ECX,dword ptr [EBP + -0xc]
00456bbb  MOV dword ptr [EBP + -0x4],ECX
00456bbe  MOV EDX,dword ptr [EBP + -0xc]
00456bc1  ADD EDX,0x3
00456bc4  MOV dword ptr [EBP + -0xc],EDX
00456bc7  JMP 0x00456b6c
00456bc9  MOV EAX,dword ptr [EBP + -0xc]
00456bcc  MOV ECX,dword ptr [EBP + -0x24]
00456bcf  MOV DX,word ptr [ECX + EAX*0x2 + 0x4]
00456bd4  PUSH EDX
00456bd5  MOV ECX,dword ptr [EBP + -0x24]
00456bd8  CALL 0x0044f680
00456bdd  PUSH EAX
00456bde  MOV ECX,dword ptr [EBP + -0x24]
00456be1  CALL 0x0044f700
00456be6  CMP EAX,0x2
00456be9  JNZ 0x00456c16
00456beb  MOV EAX,dword ptr [EBP + -0xc]
00456bee  MOV ECX,dword ptr [EBP + -0x24]
00456bf1  MOV DX,word ptr [ECX + EAX*0x2 + 0x4]
00456bf6  PUSH EDX
00456bf7  MOV ECX,dword ptr [EBP + -0x24]
00456bfa  CALL 0x0044f680
00456bff  MOV dword ptr [EBP + -0x8],EAX
00456c02  MOV EAX,dword ptr [EBP + -0xc]
00456c05  MOV dword ptr [EBP + -0x10],EAX
00456c08  MOV ECX,dword ptr [EBP + -0xc]
00456c0b  ADD ECX,0x1
00456c0e  MOV dword ptr [EBP + -0xc],ECX
00456c11  JMP 0x00456b6c
00456c16  JMP 0x00456b6c
00456c1b  CMP dword ptr [EBP + -0x18],0xe
00456c1f  JNZ 0x00456c27
00456c21  CMP dword ptr [EBP + -0x8],0x5
00456c25  JLE 0x00456c4b
00456c27  CMP dword ptr [EBP + -0x18],0xd
00456c2b  JNZ 0x00456c33
00456c2d  CMP dword ptr [EBP + -0x8],0x4
00456c31  JLE 0x00456c4b
00456c33  CMP dword ptr [EBP + -0x18],0xc
00456c37  JNZ 0x00456c3f
00456c39  CMP dword ptr [EBP + -0x8],0x4
00456c3d  JLE 0x00456c4b
00456c3f  CMP dword ptr [EBP + -0x18],0xb
00456c43  JNZ 0x00456c62
00456c45  CMP dword ptr [EBP + -0x8],0x3
00456c49  JG 0x00456c62
00456c4b  MOV word ptr [EBP + -0x1c],0x1
00456c51  MOV EDX,dword ptr [EBP + -0x4]
00456c54  MOV dword ptr [EBP + -0x20],EDX
00456c57  MOV EAX,dword ptr [EBP + -0x4]
00456c5a  ADD EAX,0x1
00456c5d  MOV dword ptr [EBP + -0x14],EAX
00456c60  JMP 0x00456c77
00456c62  MOV word ptr [EBP + -0x1c],0x0
00456c68  MOV ECX,dword ptr [EBP + -0x10]
00456c6b  MOV dword ptr [EBP + -0x20],ECX
00456c6e  MOV EDX,dword ptr [EBP + -0x10]
00456c71  ADD EDX,0x1
00456c74  MOV dword ptr [EBP + -0x14],EDX
00456c77  MOV EAX,dword ptr [EBP + 0xc]
00456c7a  PUSH EAX
00456c7b  MOV ECX,dword ptr [EBP + 0x8]
00456c7e  PUSH ECX
00456c7f  MOV EDX,dword ptr [EBP + -0x14]
00456c82  PUSH EDX
00456c83  MOV EAX,dword ptr [EBP + -0x20]
00456c86  PUSH EAX
00456c87  MOV ECX,dword ptr [EBP + -0x24]
00456c8a  CALL 0x0044f840
00456c8f  MOV AX,word ptr [EBP + -0x1c]
00456c93  MOV ESP,EBP
00456c95  POP EBP
00456c96  RET 0x8
