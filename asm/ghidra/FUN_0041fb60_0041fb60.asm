; FUN_0041fb60  0041fb60
0041fb60  PUSH EBP
0041fb61  MOV EBP,ESP
0041fb63  PUSH -0x1
0041fb65  PUSH 0x69dfe3
0041fb6a  MOV EAX,FS:[0x0]
0041fb70  PUSH EAX
0041fb71  SUB ESP,0x10
0041fb74  MOV EAX,[0x00781870]
0041fb79  XOR EAX,EBP
0041fb7b  PUSH EAX
0041fb7c  LEA EAX,[EBP + -0xc]
0041fb7f  MOV FS:[0x0],EAX
0041fb85  MOV dword ptr [EBP + -0x18],ECX
0041fb88  MOV ECX,dword ptr [EBP + -0x18]
0041fb8b  CALL 0x0041f1b0
0041fb90  MOV EAX,dword ptr [EBP + -0x18]
0041fb93  CMP dword ptr [EAX + 0x40],0x0
0041fb97  JNZ 0x0041fc05
0041fb99  PUSH 0x1bc
0041fb9e  CALL 0x00686d82
0041fba3  ADD ESP,0x4
0041fba6  MOV dword ptr [EBP + -0x14],EAX
0041fba9  MOV dword ptr [EBP + -0x4],0x0
0041fbb0  CMP dword ptr [EBP + -0x14],0x0
0041fbb4  JZ 0x0041fbc3
0041fbb6  MOV ECX,dword ptr [EBP + -0x14]
0041fbb9  CALL 0x00421ed0
0041fbbe  MOV dword ptr [EBP + -0x1c],EAX
0041fbc1  JMP 0x0041fbca
0041fbc3  MOV dword ptr [EBP + -0x1c],0x0
0041fbca  MOV ECX,dword ptr [EBP + -0x1c]
0041fbcd  MOV dword ptr [EBP + -0x10],ECX
0041fbd0  MOV dword ptr [EBP + -0x4],0xffffffff
0041fbd7  MOV EDX,dword ptr [EBP + -0x18]
0041fbda  MOV EAX,dword ptr [EBP + -0x10]
0041fbdd  MOV dword ptr [EDX + 0x40],EAX
0041fbe0  MOV ECX,dword ptr [EBP + -0x18]
0041fbe3  MOV EDX,dword ptr [ECX + 0x40]
0041fbe6  MOV EAX,dword ptr [EBP + -0x18]
0041fbe9  MOV ECX,dword ptr [EAX + 0x40]
0041fbec  MOV EDX,dword ptr [EDX]
0041fbee  MOV EAX,dword ptr [EDX + 0x3c]
0041fbf1  CALL EAX
0041fbf3  PUSH 0xb4
0041fbf8  PUSH 0x5
0041fbfa  MOV ECX,dword ptr [EBP + -0x18]
0041fbfd  MOV ECX,dword ptr [ECX + 0x40]
0041fc00  CALL 0x005f7340
0041fc05  MOV EDX,dword ptr [EBP + -0x18]
0041fc08  MOV ECX,dword ptr [EDX + 0x40]
0041fc0b  CALL 0x005f85d0
0041fc10  PUSH 0x1
0041fc12  PUSH 0x3106cb
0041fc17  MOV ECX,dword ptr [0x0162ee80]
0041fc1d  CALL 0x005f2b20
0041fc22  PUSH 0x1
0041fc24  PUSH 0x3106cc
0041fc29  MOV ECX,dword ptr [0x0162ee80]
0041fc2f  CALL 0x005f2b20
0041fc34  MOV ECX,dword ptr [EBP + -0xc]
0041fc37  MOV dword ptr FS:[0x0],ECX
0041fc3e  POP ECX
0041fc3f  MOV ESP,EBP
0041fc41  POP EBP
0041fc42  RET
