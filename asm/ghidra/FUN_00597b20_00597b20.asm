; FUN_00597b20  00597b20
00597b20  PUSH EBP
00597b21  MOV EBP,ESP
00597b23  PUSH -0x1
00597b25  PUSH 0x6a7428
00597b2a  MOV EAX,FS:[0x0]
00597b30  PUSH EAX
00597b31  SUB ESP,0x20
00597b34  MOV EAX,[0x00781870]
00597b39  XOR EAX,EBP
00597b3b  PUSH EAX
00597b3c  LEA EAX,[EBP + -0xc]
00597b3f  MOV FS:[0x0],EAX
00597b45  MOV dword ptr [EBP + -0x24],ECX
00597b48  MOV EAX,dword ptr [EBP + -0x24]
00597b4b  MOV dword ptr [EAX],0x6cea48
00597b51  MOV dword ptr [EBP + -0x4],0x0
00597b58  MOV ECX,dword ptr [EBP + -0x24]
00597b5b  MOV EDX,dword ptr [ECX + 0x4]
00597b5e  MOV dword ptr [EBP + -0x18],EDX
00597b61  MOV EAX,dword ptr [EBP + -0x18]
00597b64  MOV dword ptr [EBP + -0x14],EAX
00597b67  CMP dword ptr [EBP + -0x14],0x0
00597b6b  JZ 0x00597b80
00597b6d  PUSH 0x1
00597b6f  MOV ECX,dword ptr [EBP + -0x14]
00597b72  MOV EDX,dword ptr [ECX]
00597b74  MOV ECX,dword ptr [EBP + -0x14]
00597b77  MOV EAX,dword ptr [EDX]
00597b79  CALL EAX
00597b7b  MOV dword ptr [EBP + -0x28],EAX
00597b7e  JMP 0x00597b87
00597b80  MOV dword ptr [EBP + -0x28],0x0
00597b87  MOV dword ptr [EBP + -0x10],0x0
00597b8e  JMP 0x00597b99
00597b90  MOV ECX,dword ptr [EBP + -0x10]
00597b93  ADD ECX,0x1
00597b96  MOV dword ptr [EBP + -0x10],ECX
00597b99  CMP dword ptr [EBP + -0x10],0xc
00597b9d  JGE 0x00597bd4
00597b9f  MOV EDX,dword ptr [EBP + -0x10]
00597ba2  MOV EAX,dword ptr [EBP + -0x24]
00597ba5  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x8]
00597ba9  MOV dword ptr [EBP + -0x20],ECX
00597bac  MOV EDX,dword ptr [EBP + -0x20]
00597baf  MOV dword ptr [EBP + -0x1c],EDX
00597bb2  CMP dword ptr [EBP + -0x1c],0x0
00597bb6  JZ 0x00597bcb
00597bb8  PUSH 0x1
00597bba  MOV EAX,dword ptr [EBP + -0x1c]
00597bbd  MOV EDX,dword ptr [EAX]
00597bbf  MOV ECX,dword ptr [EBP + -0x1c]
00597bc2  MOV EAX,dword ptr [EDX]
00597bc4  CALL EAX
00597bc6  MOV dword ptr [EBP + -0x2c],EAX
00597bc9  JMP 0x00597bd2
00597bcb  MOV dword ptr [EBP + -0x2c],0x0
00597bd2  JMP 0x00597b90
00597bd4  MOV dword ptr [EBP + -0x4],0xffffffff
00597bdb  MOV ECX,dword ptr [EBP + -0x24]
00597bde  CALL 0x005e9e40
00597be3  MOV ECX,dword ptr [EBP + -0xc]
00597be6  MOV dword ptr FS:[0x0],ECX
00597bed  POP ECX
00597bee  MOV ESP,EBP
00597bf0  POP EBP
00597bf1  RET
