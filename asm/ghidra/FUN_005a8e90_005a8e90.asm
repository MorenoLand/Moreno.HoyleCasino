; FUN_005a8e90  005a8e90
005a8e90  PUSH EBP
005a8e91  MOV EBP,ESP
005a8e93  SUB ESP,0x2c
005a8e96  MOV dword ptr [EBP + -0x2c],ECX
005a8e99  MOV dword ptr [EBP + -0x28],0x20
005a8ea0  MOV dword ptr [EBP + -0x24],0x22
005a8ea7  MOV dword ptr [EBP + -0x20],0x20
005a8eae  MOV dword ptr [EBP + -0x1c],0x40
005a8eb5  MOV dword ptr [EBP + -0x18],0x20
005a8ebc  MOV dword ptr [EBP + -0x14],0x5e
005a8ec3  MOV dword ptr [EBP + -0x10],0x20
005a8eca  MOV dword ptr [EBP + -0xc],0x7c
005a8ed1  MOV dword ptr [EBP + -0x8],0x5
005a8ed8  MOV dword ptr [EBP + -0x4],0x9a
005a8edf  PUSH 0x0
005a8ee1  MOV ECX,dword ptr [EBP + -0x2c]
005a8ee4  CALL 0x005fb2b0
005a8ee9  TEST EAX,EAX
005a8eeb  JNZ 0x005a8f37
005a8eed  PUSH 0x0
005a8eef  PUSH 0xff
005a8ef4  PUSH 0x0
005a8ef6  PUSH 0x3
005a8ef8  MOV EAX,dword ptr [EBP + 0x8]
005a8efb  MOV ECX,dword ptr [EBP + EAX*0x8 + -0x24]
005a8eff  PUSH ECX
005a8f00  MOV EDX,dword ptr [EBP + 0x8]
005a8f03  MOV EAX,dword ptr [EBP + EDX*0x8 + -0x28]
005a8f07  PUSH EAX
005a8f08  XOR ECX,ECX
005a8f0a  CMP dword ptr [EBP + 0x8],0x4
005a8f0e  SETZ CL
005a8f11  ADD ECX,0x1398
005a8f17  PUSH ECX
005a8f18  PUSH 0x0
005a8f1a  PUSH 0x0
005a8f1c  MOV ECX,dword ptr [EBP + -0x2c]
005a8f1f  CALL 0x005f9ce0
005a8f24  PUSH 0x64
005a8f26  PUSH 0x0
005a8f28  MOV ECX,dword ptr [EBP + -0x2c]
005a8f2b  CALL 0x005fb2b0
005a8f30  MOV ECX,EAX
005a8f32  CALL 0x005eb5d0
005a8f37  MOV ESP,EBP
005a8f39  POP EBP
005a8f3a  RET 0x4
