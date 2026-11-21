; FUN_004fb4a0  004fb4a0
004fb4a0  PUSH EBP
004fb4a1  MOV EBP,ESP
004fb4a3  SUB ESP,0x4c
004fb4a6  MOV dword ptr [EBP + -0x4c],ECX
004fb4a9  MOV dword ptr [EBP + -0x48],0xf0
004fb4b0  MOV dword ptr [EBP + -0x44],0xd2
004fb4b7  MOV dword ptr [EBP + -0x40],0x73
004fb4be  MOV dword ptr [EBP + -0x3c],0x14
004fb4c5  MOV dword ptr [EBP + -0x38],0x13b
004fb4cc  MOV dword ptr [EBP + -0x34],0x14
004fb4d3  MOV dword ptr [EBP + -0x30],0x168
004fb4da  MOV dword ptr [EBP + -0x2c],0x14
004fb4e1  MOV dword ptr [EBP + -0x28],0x168
004fb4e8  MOV dword ptr [EBP + -0x24],0xaa
004fb4ef  MOV dword ptr [EBP + -0x20],0x168
004fb4f6  MOV dword ptr [EBP + -0x1c],0x136
004fb4fd  MOV dword ptr [EBP + -0x18],0x73
004fb504  MOV dword ptr [EBP + -0x14],0x136
004fb50b  MOV dword ptr [EBP + -0x10],0x73
004fb512  MOV dword ptr [EBP + -0xc],0xaa
004fb519  MOV dword ptr [EBP + -0x8],0x0
004fb520  MOV dword ptr [EBP + -0x4],0x0
004fb527  CMP dword ptr [EBP + 0xc],0x8
004fb52b  JGE 0x004fb545
004fb52d  MOV EAX,dword ptr [EBP + 0xc]
004fb530  MOV ECX,dword ptr [EBP + EAX*0x8 + -0x48]
004fb534  MOV EDX,dword ptr [EBP + EAX*0x8 + -0x44]
004fb538  MOV EAX,dword ptr [EBP + 0x8]
004fb53b  MOV dword ptr [EAX],ECX
004fb53d  MOV dword ptr [EAX + 0x4],EDX
004fb540  MOV EAX,dword ptr [EBP + 0x8]
004fb543  JMP 0x004fb571
004fb545  XOR ECX,ECX
004fb547  JNZ 0x004fb560
004fb549  PUSH 0x261
004fb54e  PUSH 0x6c07c8
004fb553  PUSH 0x6b2f58
004fb558  CALL 0x005e9f20
004fb55d  ADD ESP,0xc
004fb560  MOV EAX,dword ptr [EBP + 0x8]
004fb563  MOV ECX,dword ptr [EBP + -0x8]
004fb566  MOV dword ptr [EAX],ECX
004fb568  MOV EDX,dword ptr [EBP + -0x4]
004fb56b  MOV dword ptr [EAX + 0x4],EDX
004fb56e  MOV EAX,dword ptr [EBP + 0x8]
004fb571  MOV ESP,EBP
004fb573  POP EBP
004fb574  RET 0x8
