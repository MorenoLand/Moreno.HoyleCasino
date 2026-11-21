; FUN_00590cb0  00590cb0
00590cb0  PUSH EBP
00590cb1  MOV EBP,ESP
00590cb3  SUB ESP,0xc
00590cb6  MOV dword ptr [EBP + -0xc],ECX
00590cb9  MOV ECX,dword ptr [EBP + -0xc]
00590cbc  CALL 0x005e9e20
00590cc1  MOV EAX,dword ptr [EBP + -0xc]
00590cc4  MOV dword ptr [EAX],0x6ce0e8
00590cca  MOV dword ptr [EBP + -0x4],0x0
00590cd1  JMP 0x00590cdc
00590cd3  MOV ECX,dword ptr [EBP + -0x4]
00590cd6  ADD ECX,0x1
00590cd9  MOV dword ptr [EBP + -0x4],ECX
00590cdc  CMP dword ptr [EBP + -0x4],0x5
00590ce0  JGE 0x00590d03
00590ce2  MOV EDX,dword ptr [EBP + -0x4]
00590ce5  MOV EAX,dword ptr [EBP + -0xc]
00590ce8  MOV dword ptr [EAX + EDX*0x4 + 0x4],0x0
00590cf0  MOV ECX,dword ptr [EBP + -0x4]
00590cf3  MOV EDX,dword ptr [EBP + -0xc]
00590cf6  MOV dword ptr [EDX + ECX*0x4 + 0x80],0x0
00590d01  JMP 0x00590cd3
00590d03  MOV dword ptr [EBP + -0x8],0x0
00590d0a  JMP 0x00590d15
00590d0c  MOV EAX,dword ptr [EBP + -0x8]
00590d0f  ADD EAX,0x1
00590d12  MOV dword ptr [EBP + -0x8],EAX
00590d15  CMP dword ptr [EBP + -0x8],0xc
00590d19  JGE 0x00590d39
00590d1b  MOV ECX,dword ptr [EBP + -0x8]
00590d1e  MOV EDX,dword ptr [EBP + -0xc]
00590d21  MOV dword ptr [EDX + ECX*0x4 + 0x18],0x0
00590d29  MOV EAX,dword ptr [EBP + -0x8]
00590d2c  MOV ECX,dword ptr [EBP + -0xc]
00590d2f  MOV dword ptr [ECX + EAX*0x4 + 0x50],0x0
00590d37  JMP 0x00590d0c
00590d39  MOV EDX,dword ptr [EBP + -0xc]
00590d3c  MOV dword ptr [EDX + 0x48],0x0
00590d43  MOV EAX,dword ptr [EBP + -0xc]
00590d46  MOV dword ptr [EAX + 0x94],0x0
00590d50  MOV ECX,dword ptr [EBP + -0xc]
00590d53  MOV dword ptr [ECX + 0x98],0x0
00590d5d  MOV EDX,dword ptr [EBP + -0xc]
00590d60  MOV dword ptr [EDX + 0x9c],0x0
00590d6a  MOV EAX,dword ptr [EBP + -0xc]
00590d6d  MOV dword ptr [EAX + 0x4c],0x0
00590d74  MOV EAX,dword ptr [EBP + -0xc]
00590d77  MOV ESP,EBP
00590d79  POP EBP
00590d7a  RET
