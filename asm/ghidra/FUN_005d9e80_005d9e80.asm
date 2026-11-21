; FUN_005d9e80  005d9e80
005d9e80  PUSH EBP
005d9e81  MOV EBP,ESP
005d9e83  SUB ESP,0x8
005d9e86  MOV dword ptr [EBP + -0x8],ECX
005d9e89  MOV EAX,dword ptr [EBP + 0x8]
005d9e8c  MOV dword ptr [EAX + 0x49c],0x0
005d9e96  MOV dword ptr [EBP + -0x4],0x0
005d9e9d  JMP 0x005d9ea8
005d9e9f  MOV ECX,dword ptr [EBP + -0x4]
005d9ea2  ADD ECX,0x1
005d9ea5  MOV dword ptr [EBP + -0x4],ECX
005d9ea8  CMP dword ptr [EBP + -0x4],0x1e
005d9eac  JGE 0x005d9ed2
005d9eae  MOV EDX,dword ptr [EBP + -0x4]
005d9eb1  MOV EAX,dword ptr [EBP + 0x8]
005d9eb4  MOV dword ptr [EAX + EDX*0x4 + 0x3ac],0x0
005d9ebf  MOV ECX,dword ptr [EBP + -0x4]
005d9ec2  MOV EDX,dword ptr [EBP + 0x8]
005d9ec5  MOV dword ptr [EDX + ECX*0x4 + 0x424],0x0
005d9ed0  JMP 0x005d9e9f
005d9ed2  MOV ESP,EBP
005d9ed4  POP EBP
005d9ed5  RET 0x4
