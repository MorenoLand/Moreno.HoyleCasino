; FUN_005f5fa0  005f5fa0
005f5fa0  PUSH EBP
005f5fa1  MOV EBP,ESP
005f5fa3  PUSH -0x1
005f5fa5  PUSH 0x6a9f68
005f5faa  MOV EAX,FS:[0x0]
005f5fb0  PUSH EAX
005f5fb1  PUSH ECX
005f5fb2  MOV EAX,[0x00781870]
005f5fb7  XOR EAX,EBP
005f5fb9  PUSH EAX
005f5fba  LEA EAX,[EBP + -0xc]
005f5fbd  MOV FS:[0x0],EAX
005f5fc3  MOV dword ptr [EBP + -0x10],ECX
005f5fc6  MOV EAX,dword ptr [EBP + -0x10]
005f5fc9  MOV dword ptr [EAX],0x6d6a2c
005f5fcf  MOV dword ptr [EBP + -0x4],0x0
005f5fd6  PUSH 0x0
005f5fd8  MOV ECX,dword ptr [EBP + -0x10]
005f5fdb  CALL 0x005f6050
005f5fe0  MOV dword ptr [EBP + -0x4],0xffffffff
005f5fe7  MOV ECX,dword ptr [EBP + -0x10]
005f5fea  CALL 0x005f5c40
005f5fef  MOV ECX,dword ptr [EBP + -0xc]
005f5ff2  MOV dword ptr FS:[0x0],ECX
005f5ff9  POP ECX
005f5ffa  MOV ESP,EBP
005f5ffc  POP EBP
005f5ffd  RET
