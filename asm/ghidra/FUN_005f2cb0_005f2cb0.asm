; FUN_005f2cb0  005f2cb0
005f2cb0  PUSH EBP
005f2cb1  MOV EBP,ESP
005f2cb3  SUB ESP,0x8
005f2cb6  MOV dword ptr [EBP + -0x8],ECX
005f2cb9  PUSH 0x0
005f2cbb  MOV EAX,dword ptr [EBP + 0x8]
005f2cbe  PUSH EAX
005f2cbf  MOV ECX,dword ptr [EBP + -0x8]
005f2cc2  CALL 0x005f2a60
005f2cc7  MOV dword ptr [EBP + -0x4],EAX
005f2cca  CMP dword ptr [EBP + -0x4],0x0
005f2cce  JZ 0x005f2cd8
005f2cd0  MOV ECX,dword ptr [EBP + -0x4]
005f2cd3  CALL 0x005fd440
005f2cd8  MOV ESP,EBP
005f2cda  POP EBP
005f2cdb  RET 0x4
