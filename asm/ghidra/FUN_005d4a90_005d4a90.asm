; FUN_005d4a90  005d4a90
005d4a90  PUSH EBP
005d4a91  MOV EBP,ESP
005d4a93  PUSH -0x1
005d4a95  PUSH 0x6a8fbb
005d4a9a  MOV EAX,FS:[0x0]
005d4aa0  PUSH EAX
005d4aa1  SUB ESP,0x1c
005d4aa4  MOV EAX,[0x00781870]
005d4aa9  XOR EAX,EBP
005d4aab  PUSH EAX
005d4aac  LEA EAX,[EBP + -0xc]
005d4aaf  MOV FS:[0x0],EAX
005d4ab5  MOV dword ptr [EBP + -0x20],ECX
005d4ab8  MOV EAX,dword ptr [EBP + -0x20]
005d4abb  MOV dword ptr [EAX],0x6d3c0c
005d4ac1  MOV dword ptr [EBP + -0x4],0x0
005d4ac8  MOV ECX,dword ptr [EBP + -0x20]
005d4acb  MOV EDX,dword ptr [ECX + 0x178]
005d4ad1  MOV dword ptr [EBP + -0x14],EDX
005d4ad4  MOV EAX,dword ptr [EBP + -0x14]
005d4ad7  MOV dword ptr [EBP + -0x10],EAX
005d4ada  CMP dword ptr [EBP + -0x10],0x0
005d4ade  JZ 0x005d4af3
005d4ae0  PUSH 0x1
005d4ae2  MOV ECX,dword ptr [EBP + -0x10]
005d4ae5  MOV EDX,dword ptr [ECX]
005d4ae7  MOV ECX,dword ptr [EBP + -0x10]
005d4aea  MOV EAX,dword ptr [EDX]
005d4aec  CALL EAX
005d4aee  MOV dword ptr [EBP + -0x24],EAX
005d4af1  JMP 0x005d4afa
005d4af3  MOV dword ptr [EBP + -0x24],0x0
005d4afa  MOV ECX,dword ptr [EBP + -0x20]
005d4afd  MOV EDX,dword ptr [ECX + 0x17c]
005d4b03  MOV dword ptr [EBP + -0x1c],EDX
005d4b06  MOV EAX,dword ptr [EBP + -0x1c]
005d4b09  MOV dword ptr [EBP + -0x18],EAX
005d4b0c  CMP dword ptr [EBP + -0x18],0x0
005d4b10  JZ 0x005d4b25
005d4b12  PUSH 0x1
005d4b14  MOV ECX,dword ptr [EBP + -0x18]
005d4b17  MOV EDX,dword ptr [ECX]
005d4b19  MOV ECX,dword ptr [EBP + -0x18]
005d4b1c  MOV EAX,dword ptr [EDX]
005d4b1e  CALL EAX
005d4b20  MOV dword ptr [EBP + -0x28],EAX
005d4b23  JMP 0x005d4b2c
005d4b25  MOV dword ptr [EBP + -0x28],0x0
005d4b2c  MOV dword ptr [EBP + -0x4],0xffffffff
005d4b33  MOV ECX,dword ptr [EBP + -0x20]
005d4b36  CALL 0x005eac00
005d4b3b  MOV ECX,dword ptr [EBP + -0xc]
005d4b3e  MOV dword ptr FS:[0x0],ECX
005d4b45  POP ECX
005d4b46  MOV ESP,EBP
005d4b48  POP EBP
005d4b49  RET
