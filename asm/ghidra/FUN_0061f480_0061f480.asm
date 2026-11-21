; FUN_0061f480  0061f480
0061f480  PUSH EBP
0061f481  MOV EBP,ESP
0061f483  PUSH -0x1
0061f485  PUSH 0x6ab39b
0061f48a  MOV EAX,FS:[0x0]
0061f490  PUSH EAX
0061f491  SUB ESP,0x28
0061f494  MOV EAX,[0x00781870]
0061f499  XOR EAX,EBP
0061f49b  PUSH EAX
0061f49c  LEA EAX,[EBP + -0xc]
0061f49f  MOV FS:[0x0],EAX
0061f4a5  MOV dword ptr [EBP + -0x34],ECX
0061f4a8  MOV EAX,dword ptr [EBP + -0x34]
0061f4ab  MOV dword ptr [EAX],0x6d8e20
0061f4b1  MOV dword ptr [EBP + -0x4],0x0
0061f4b8  MOV dword ptr [EBP + -0x10],0x0
0061f4bf  JMP 0x0061f4ca
0061f4c1  MOV ECX,dword ptr [EBP + -0x10]
0061f4c4  ADD ECX,0x1
0061f4c7  MOV dword ptr [EBP + -0x10],ECX
0061f4ca  MOV EDX,dword ptr [EBP + -0x34]
0061f4cd  MOV EAX,dword ptr [EBP + -0x10]
0061f4d0  CMP EAX,dword ptr [EDX + 0x30c]
0061f4d6  JGE 0x0061f5e3
0061f4dc  MOV dword ptr [EBP + -0x18],0x0
0061f4e3  JMP 0x0061f4ee
0061f4e5  MOV ECX,dword ptr [EBP + -0x18]
0061f4e8  ADD ECX,0x1
0061f4eb  MOV dword ptr [EBP + -0x18],ECX
0061f4ee  MOV EDX,dword ptr [EBP + -0x34]
0061f4f1  MOV EAX,dword ptr [EDX + 0x310]
0061f4f7  MOV ECX,dword ptr [EBP + -0x10]
0061f4fa  MOV EDX,dword ptr [EBP + -0x18]
0061f4fd  CMP EDX,dword ptr [EAX + ECX*0x8]
0061f500  JGE 0x0061f5bf
0061f506  MOV EAX,dword ptr [EBP + -0x34]
0061f509  MOV ECX,dword ptr [EAX + 0x310]
0061f50f  MOV EDX,dword ptr [EBP + -0x18]
0061f512  IMUL EDX,EDX,0x18
0061f515  MOV EAX,dword ptr [EBP + -0x10]
0061f518  MOV ECX,dword ptr [ECX + EAX*0x8 + 0x4]
0061f51c  MOV EDX,dword ptr [ECX + EDX*0x1 + 0x10]
0061f520  MOV dword ptr [EBP + -0x1c],EDX
0061f523  MOV EAX,dword ptr [EBP + -0x1c]
0061f526  PUSH EAX
0061f527  CALL 0x00686cae
0061f52c  ADD ESP,0x4
0061f52f  MOV dword ptr [EBP + -0x14],0x0
0061f536  JMP 0x0061f541
0061f538  MOV ECX,dword ptr [EBP + -0x14]
0061f53b  ADD ECX,0x1
0061f53e  MOV dword ptr [EBP + -0x14],ECX
0061f541  MOV EDX,dword ptr [EBP + -0x34]
0061f544  MOV EAX,dword ptr [EDX + 0x310]
0061f54a  MOV ECX,dword ptr [EBP + -0x18]
0061f54d  IMUL ECX,ECX,0x18
0061f550  MOV EDX,dword ptr [EBP + -0x10]
0061f553  MOV EAX,dword ptr [EAX + EDX*0x8 + 0x4]
0061f557  MOV EDX,dword ptr [EBP + -0x14]
0061f55a  CMP EDX,dword ptr [EAX + ECX*0x1 + 0x4]
0061f55e  JGE 0x0061f591
0061f560  MOV EAX,dword ptr [EBP + -0x34]
0061f563  MOV ECX,dword ptr [EAX + 0x310]
0061f569  MOV EDX,dword ptr [EBP + -0x18]
0061f56c  IMUL EDX,EDX,0x18
0061f56f  MOV EAX,dword ptr [EBP + -0x10]
0061f572  MOV ECX,dword ptr [ECX + EAX*0x8 + 0x4]
0061f576  MOV EDX,dword ptr [ECX + EDX*0x1 + 0x14]
0061f57a  MOV EAX,dword ptr [EBP + -0x14]
0061f57d  MOV ECX,dword ptr [EDX + EAX*0x4]
0061f580  MOV dword ptr [EBP + -0x20],ECX
0061f583  MOV EDX,dword ptr [EBP + -0x20]
0061f586  PUSH EDX
0061f587  CALL 0x00686cae
0061f58c  ADD ESP,0x4
0061f58f  JMP 0x0061f538
0061f591  MOV EAX,dword ptr [EBP + -0x34]
0061f594  MOV ECX,dword ptr [EAX + 0x310]
0061f59a  MOV EDX,dword ptr [EBP + -0x18]
0061f59d  IMUL EDX,EDX,0x18
0061f5a0  MOV EAX,dword ptr [EBP + -0x10]
0061f5a3  MOV ECX,dword ptr [ECX + EAX*0x8 + 0x4]
0061f5a7  MOV EDX,dword ptr [ECX + EDX*0x1 + 0x14]
0061f5ab  MOV dword ptr [EBP + -0x24],EDX
0061f5ae  MOV EAX,dword ptr [EBP + -0x24]
0061f5b1  PUSH EAX
0061f5b2  CALL 0x00686cae
0061f5b7  ADD ESP,0x4
0061f5ba  JMP 0x0061f4e5
0061f5bf  MOV ECX,dword ptr [EBP + -0x34]
0061f5c2  MOV EDX,dword ptr [ECX + 0x310]
0061f5c8  MOV EAX,dword ptr [EBP + -0x10]
0061f5cb  MOV ECX,dword ptr [EDX + EAX*0x8 + 0x4]
0061f5cf  MOV dword ptr [EBP + -0x28],ECX
0061f5d2  MOV EDX,dword ptr [EBP + -0x28]
0061f5d5  PUSH EDX
0061f5d6  CALL 0x00686cae
0061f5db  ADD ESP,0x4
0061f5de  JMP 0x0061f4c1
0061f5e3  MOV EAX,dword ptr [EBP + -0x34]
0061f5e6  MOV ECX,dword ptr [EAX + 0x310]
0061f5ec  MOV dword ptr [EBP + -0x2c],ECX
0061f5ef  MOV EDX,dword ptr [EBP + -0x2c]
0061f5f2  PUSH EDX
0061f5f3  CALL 0x00686cae
0061f5f8  ADD ESP,0x4
0061f5fb  MOV EAX,dword ptr [EBP + -0x34]
0061f5fe  CMP dword ptr [EAX + 0x31c],0x0
0061f605  JZ 0x0061f61f
0061f607  MOV ECX,dword ptr [EBP + -0x34]
0061f60a  MOV EDX,dword ptr [ECX + 0x31c]
0061f610  MOV dword ptr [EBP + -0x30],EDX
0061f613  MOV EAX,dword ptr [EBP + -0x30]
0061f616  PUSH EAX
0061f617  CALL 0x00686cae
0061f61c  ADD ESP,0x4
0061f61f  MOV ECX,dword ptr [EBP + -0x34]
0061f622  MOV dword ptr [ECX + 0x31c],0x0
0061f62c  MOV dword ptr [EBP + -0x4],0xffffffff
0061f633  MOV ECX,dword ptr [EBP + -0x34]
0061f636  CALL 0x0062aef0
0061f63b  MOV ECX,dword ptr [EBP + -0xc]
0061f63e  MOV dword ptr FS:[0x0],ECX
0061f645  POP ECX
0061f646  MOV ESP,EBP
0061f648  POP EBP
0061f649  RET
