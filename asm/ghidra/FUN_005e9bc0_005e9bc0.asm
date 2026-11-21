; FUN_005e9bc0  005e9bc0
005e9bc0  PUSH EBP
005e9bc1  MOV EBP,ESP
005e9bc3  SUB ESP,0x8
005e9bc6  MOV dword ptr [EBP + -0x8],ECX
005e9bc9  MOV dword ptr [EBP + -0x4],0x0
005e9bd0  JMP 0x005e9bdb
005e9bd2  MOV EAX,dword ptr [EBP + -0x4]
005e9bd5  ADD EAX,0x1
005e9bd8  MOV dword ptr [EBP + -0x4],EAX
005e9bdb  CMP dword ptr [EBP + -0x4],0x2
005e9bdf  JGE 0x005e9bfa
005e9be1  MOV ECX,dword ptr [EBP + -0x4]
005e9be4  ADD ECX,0x64
005e9be7  PUSH ECX
005e9be8  PUSH 0x0
005e9bea  MOV EDX,dword ptr [0x0162ee84]
005e9bf0  MOV ECX,dword ptr [EDX + 0x14]
005e9bf3  CALL 0x005fbcb0
005e9bf8  JMP 0x005e9bd2
005e9bfa  MOV ESP,EBP
005e9bfc  POP EBP
005e9bfd  RET
