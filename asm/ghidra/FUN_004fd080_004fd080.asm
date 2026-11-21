; FUN_004fd080  004fd080
004fd080  PUSH EBP
004fd081  MOV EBP,ESP
004fd083  PUSH -0x1
004fd085  PUSH 0x6a28b3
004fd08a  MOV EAX,FS:[0x0]
004fd090  PUSH EAX
004fd091  SUB ESP,0x58
004fd094  MOV EAX,[0x00781870]
004fd099  XOR EAX,EBP
004fd09b  PUSH EAX
004fd09c  LEA EAX,[EBP + -0xc]
004fd09f  MOV FS:[0x0],EAX
004fd0a5  MOV dword ptr [EBP + -0x40],ECX
004fd0a8  MOV EAX,dword ptr [EBP + 0x8]
004fd0ab  PUSH EAX
004fd0ac  MOV ECX,dword ptr [EBP + -0x40]
004fd0af  CALL 0x005fc3a0
004fd0b4  MOV ECX,dword ptr [EBP + -0x40]
004fd0b7  MOV EDX,dword ptr [ECX + 0x14]
004fd0ba  MOV dword ptr [EBP + -0x44],EDX
004fd0bd  CMP dword ptr [EBP + -0x44],0x8
004fd0c1  JA 0x004fd596
004fd0c7  MOV EAX,dword ptr [EBP + -0x44]
004fd0ca  JMP dword ptr [EAX*0x4 + 0x4fd5a8]
004fd596  MOV ECX,dword ptr [EBP + -0xc]
004fd599  MOV dword ptr FS:[0x0],ECX
004fd5a0  POP ECX
004fd5a1  MOV ESP,EBP
004fd5a3  POP EBP
004fd5a4  RET 0x4
