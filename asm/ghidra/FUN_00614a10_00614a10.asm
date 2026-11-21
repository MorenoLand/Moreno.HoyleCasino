; FUN_00614a10  00614a10
00614a10  PUSH EBP
00614a11  MOV EBP,ESP
00614a13  PUSH -0x1
00614a15  PUSH 0x6ab1b2
00614a1a  MOV EAX,FS:[0x0]
00614a20  PUSH EAX
00614a21  SUB ESP,0x40
00614a24  MOV EAX,[0x00781870]
00614a29  XOR EAX,EBP
00614a2b  PUSH EAX
00614a2c  LEA EAX,[EBP + -0xc]
00614a2f  MOV FS:[0x0],EAX
00614a35  MOV dword ptr [EBP + -0x38],ECX
00614a38  MOV EAX,dword ptr [EBP + -0x38]
00614a3b  MOV dword ptr [EAX],0x6d8584
00614a41  MOV dword ptr [EBP + -0x4],0x0
00614a48  MOV ECX,dword ptr [EBP + -0x38]
00614a4b  MOV EDX,dword ptr [ECX + 0x48]
00614a4e  MOV dword ptr [EBP + -0x14],EDX
00614a51  MOV EAX,dword ptr [EBP + -0x14]
00614a54  MOV dword ptr [EBP + -0x10],EAX
00614a57  CMP dword ptr [EBP + -0x10],0x0
00614a5b  JZ 0x00614a70
00614a5d  PUSH 0x1
00614a5f  MOV ECX,dword ptr [EBP + -0x10]
00614a62  MOV EDX,dword ptr [ECX]
00614a64  MOV ECX,dword ptr [EBP + -0x10]
00614a67  MOV EAX,dword ptr [EDX]
00614a69  CALL EAX
00614a6b  MOV dword ptr [EBP + -0x3c],EAX
00614a6e  JMP 0x00614a77
00614a70  MOV dword ptr [EBP + -0x3c],0x0
00614a77  MOV ECX,dword ptr [EBP + -0x38]
00614a7a  MOV EDX,dword ptr [ECX + 0x4c]
00614a7d  MOV dword ptr [EBP + -0x1c],EDX
00614a80  MOV EAX,dword ptr [EBP + -0x1c]
00614a83  MOV dword ptr [EBP + -0x18],EAX
00614a86  CMP dword ptr [EBP + -0x18],0x0
00614a8a  JZ 0x00614a9f
00614a8c  PUSH 0x1
00614a8e  MOV ECX,dword ptr [EBP + -0x18]
00614a91  MOV EDX,dword ptr [ECX]
00614a93  MOV ECX,dword ptr [EBP + -0x18]
00614a96  MOV EAX,dword ptr [EDX]
00614a98  CALL EAX
00614a9a  MOV dword ptr [EBP + -0x40],EAX
00614a9d  JMP 0x00614aa6
00614a9f  MOV dword ptr [EBP + -0x40],0x0
00614aa6  MOV ECX,dword ptr [EBP + -0x38]
00614aa9  MOV EDX,dword ptr [ECX + 0x50]
00614aac  MOV dword ptr [EBP + -0x24],EDX
00614aaf  MOV EAX,dword ptr [EBP + -0x24]
00614ab2  MOV dword ptr [EBP + -0x20],EAX
00614ab5  CMP dword ptr [EBP + -0x20],0x0
00614ab9  JZ 0x00614ace
00614abb  PUSH 0x1
00614abd  MOV ECX,dword ptr [EBP + -0x20]
00614ac0  MOV EDX,dword ptr [ECX]
00614ac2  MOV ECX,dword ptr [EBP + -0x20]
00614ac5  MOV EAX,dword ptr [EDX]
00614ac7  CALL EAX
00614ac9  MOV dword ptr [EBP + -0x44],EAX
00614acc  JMP 0x00614ad5
00614ace  MOV dword ptr [EBP + -0x44],0x0
00614ad5  MOV ECX,dword ptr [EBP + -0x38]
00614ad8  MOV EDX,dword ptr [ECX + 0x54]
00614adb  MOV dword ptr [EBP + -0x2c],EDX
00614ade  MOV EAX,dword ptr [EBP + -0x2c]
00614ae1  MOV dword ptr [EBP + -0x28],EAX
00614ae4  CMP dword ptr [EBP + -0x28],0x0
00614ae8  JZ 0x00614afd
00614aea  PUSH 0x1
00614aec  MOV ECX,dword ptr [EBP + -0x28]
00614aef  MOV EDX,dword ptr [ECX]
00614af1  MOV ECX,dword ptr [EBP + -0x28]
00614af4  MOV EAX,dword ptr [EDX]
00614af6  CALL EAX
00614af8  MOV dword ptr [EBP + -0x48],EAX
00614afb  JMP 0x00614b04
00614afd  MOV dword ptr [EBP + -0x48],0x0
00614b04  MOV ECX,dword ptr [EBP + -0x38]
00614b07  MOV EDX,dword ptr [ECX + 0x58]
00614b0a  MOV dword ptr [EBP + -0x34],EDX
00614b0d  MOV EAX,dword ptr [EBP + -0x34]
00614b10  MOV dword ptr [EBP + -0x30],EAX
00614b13  CMP dword ptr [EBP + -0x30],0x0
00614b17  JZ 0x00614b2c
00614b19  PUSH 0x1
00614b1b  MOV ECX,dword ptr [EBP + -0x30]
00614b1e  MOV EDX,dword ptr [ECX]
00614b20  MOV ECX,dword ptr [EBP + -0x30]
00614b23  MOV EAX,dword ptr [EDX]
00614b25  CALL EAX
00614b27  MOV dword ptr [EBP + -0x4c],EAX
00614b2a  JMP 0x00614b33
00614b2c  MOV dword ptr [EBP + -0x4c],0x0
00614b33  MOV dword ptr [EBP + -0x4],0xffffffff
00614b3a  MOV ECX,dword ptr [EBP + -0x38]
00614b3d  CALL 0x005f4ad0
00614b42  MOV ECX,dword ptr [EBP + -0xc]
00614b45  MOV dword ptr FS:[0x0],ECX
00614b4c  POP ECX
00614b4d  MOV ESP,EBP
00614b4f  POP EBP
00614b50  RET
