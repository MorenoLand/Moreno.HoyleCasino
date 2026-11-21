; FUN_004fccc0  004fccc0
004fccc0  PUSH EBP
004fccc1  MOV EBP,ESP
004fccc3  PUSH -0x1
004fccc5  PUSH 0x6a2825
004fccca  MOV EAX,FS:[0x0]
004fccd0  PUSH EAX
004fccd1  SUB ESP,0x10
004fccd4  MOV EAX,[0x00781870]
004fccd9  XOR EAX,EBP
004fccdb  PUSH EAX
004fccdc  LEA EAX,[EBP + -0xc]
004fccdf  MOV FS:[0x0],EAX
004fcce5  MOV dword ptr [EBP + -0x18],ECX
004fcce8  MOV EAX,dword ptr [EBP + -0x18]
004fcceb  CMP dword ptr [EAX + 0x8c],0x0
004fccf2  JNZ 0x004fcd69
004fccf4  PUSH 0x1c4
004fccf9  CALL 0x00686d82
004fccfe  ADD ESP,0x4
004fcd01  MOV dword ptr [EBP + -0x14],EAX
004fcd04  MOV dword ptr [EBP + -0x4],0x0
004fcd0b  CMP dword ptr [EBP + -0x14],0x0
004fcd0f  JZ 0x004fcd1e
004fcd11  MOV ECX,dword ptr [EBP + -0x14]
004fcd14  CALL 0x0051afc0
004fcd19  MOV dword ptr [EBP + -0x1c],EAX
004fcd1c  JMP 0x004fcd25
004fcd1e  MOV dword ptr [EBP + -0x1c],0x0
004fcd25  MOV ECX,dword ptr [EBP + -0x1c]
004fcd28  MOV dword ptr [EBP + -0x10],ECX
004fcd2b  MOV dword ptr [EBP + -0x4],0xffffffff
004fcd32  MOV EDX,dword ptr [EBP + -0x18]
004fcd35  MOV EAX,dword ptr [EBP + -0x10]
004fcd38  MOV dword ptr [EDX + 0x8c],EAX
004fcd3e  MOV ECX,dword ptr [EBP + -0x18]
004fcd41  MOV EDX,dword ptr [ECX + 0x8c]
004fcd47  MOV EAX,dword ptr [EBP + -0x18]
004fcd4a  MOV ECX,dword ptr [EAX + 0x8c]
004fcd50  MOV EDX,dword ptr [EDX]
004fcd52  MOV EAX,dword ptr [EDX + 0x3c]
004fcd55  CALL EAX
004fcd57  PUSH 0x0
004fcd59  PUSH 0x0
004fcd5b  MOV ECX,dword ptr [EBP + -0x18]
004fcd5e  MOV ECX,dword ptr [ECX + 0x8c]
004fcd64  CALL 0x005f7340
004fcd69  MOV EDX,dword ptr [EBP + -0x18]
004fcd6c  MOV ECX,dword ptr [EDX + 0x8c]
004fcd72  CALL 0x005f85d0
004fcd77  MOV ECX,dword ptr [EBP + -0xc]
004fcd7a  MOV dword ptr FS:[0x0],ECX
004fcd81  POP ECX
004fcd82  MOV ESP,EBP
004fcd84  POP EBP
004fcd85  RET
