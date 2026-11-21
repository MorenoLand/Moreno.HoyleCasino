; FUN_0044d760  0044d760
0044d760  PUSH EBP
0044d761  MOV EBP,ESP
0044d763  SUB ESP,0xc
0044d766  MOV dword ptr [EBP + -0xc],ECX
0044d769  MOV dword ptr [EBP + -0x8],0xffffffff
0044d770  MOV EAX,dword ptr [EBP + -0xc]
0044d773  MOVZX ECX,byte ptr [EAX + 0xd8]
0044d77a  TEST ECX,ECX
0044d77c  JNZ 0x0044d791
0044d77e  MOV dword ptr [EBP + -0x8],0x0
0044d785  MOV EDX,dword ptr [EBP + -0xc]
0044d788  MOV byte ptr [EDX + 0xd8],0x1
0044d78f  JMP 0x0044d7a2
0044d791  MOV dword ptr [EBP + -0x8],0x1
0044d798  MOV EAX,dword ptr [EBP + -0xc]
0044d79b  MOV byte ptr [EAX + 0xd9],0x1
0044d7a2  MOV dword ptr [EBP + -0x4],0x0
0044d7a9  JMP 0x0044d7b4
0044d7ab  MOV ECX,dword ptr [EBP + -0x4]
0044d7ae  ADD ECX,0x1
0044d7b1  MOV dword ptr [EBP + -0x4],ECX
0044d7b4  CMP dword ptr [EBP + -0x4],0x4
0044d7b8  JGE 0x0044d7d7
0044d7ba  MOV EDX,dword ptr [EBP + -0x8]
0044d7bd  MOV EAX,dword ptr [EBP + -0xc]
0044d7c0  MOV CX,word ptr [EAX + EDX*0x2 + 0xc0]
0044d7c8  PUSH ECX
0044d7c9  MOV EDX,dword ptr [EBP + -0x4]
0044d7cc  PUSH EDX
0044d7cd  MOV ECX,dword ptr [EBP + -0xc]
0044d7d0  CALL 0x0044cda0
0044d7d5  JMP 0x0044d7ab
0044d7d7  MOV ESP,EBP
0044d7d9  POP EBP
0044d7da  RET
