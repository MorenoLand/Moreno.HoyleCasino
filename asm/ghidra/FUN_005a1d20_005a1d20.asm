; FUN_005a1d20  005a1d20
005a1d20  PUSH EBP
005a1d21  MOV EBP,ESP
005a1d23  PUSH -0x1
005a1d25  PUSH 0x6a7888
005a1d2a  MOV EAX,FS:[0x0]
005a1d30  PUSH EAX
005a1d31  SUB ESP,0x20
005a1d34  MOV EAX,[0x00781870]
005a1d39  XOR EAX,EBP
005a1d3b  PUSH EAX
005a1d3c  LEA EAX,[EBP + -0xc]
005a1d3f  MOV FS:[0x0],EAX
005a1d45  MOV dword ptr [EBP + -0x24],ECX
005a1d48  MOV EAX,dword ptr [EBP + -0x24]
005a1d4b  MOV dword ptr [EAX],0x6cf69c
005a1d51  MOV dword ptr [EBP + -0x4],0x0
005a1d58  MOV ECX,dword ptr [EBP + -0x24]
005a1d5b  MOV EDX,dword ptr [ECX + 0x4]
005a1d5e  MOV dword ptr [EBP + -0x18],EDX
005a1d61  MOV EAX,dword ptr [EBP + -0x18]
005a1d64  MOV dword ptr [EBP + -0x14],EAX
005a1d67  CMP dword ptr [EBP + -0x14],0x0
005a1d6b  JZ 0x005a1d80
005a1d6d  PUSH 0x1
005a1d6f  MOV ECX,dword ptr [EBP + -0x14]
005a1d72  MOV EDX,dword ptr [ECX]
005a1d74  MOV ECX,dword ptr [EBP + -0x14]
005a1d77  MOV EAX,dword ptr [EDX]
005a1d79  CALL EAX
005a1d7b  MOV dword ptr [EBP + -0x28],EAX
005a1d7e  JMP 0x005a1d87
005a1d80  MOV dword ptr [EBP + -0x28],0x0
005a1d87  MOV dword ptr [EBP + -0x10],0x0
005a1d8e  JMP 0x005a1d99
005a1d90  MOV ECX,dword ptr [EBP + -0x10]
005a1d93  ADD ECX,0x1
005a1d96  MOV dword ptr [EBP + -0x10],ECX
005a1d99  CMP dword ptr [EBP + -0x10],0xc
005a1d9d  JGE 0x005a1dd4
005a1d9f  MOV EDX,dword ptr [EBP + -0x10]
005a1da2  MOV EAX,dword ptr [EBP + -0x24]
005a1da5  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x8]
005a1da9  MOV dword ptr [EBP + -0x20],ECX
005a1dac  MOV EDX,dword ptr [EBP + -0x20]
005a1daf  MOV dword ptr [EBP + -0x1c],EDX
005a1db2  CMP dword ptr [EBP + -0x1c],0x0
005a1db6  JZ 0x005a1dcb
005a1db8  PUSH 0x1
005a1dba  MOV EAX,dword ptr [EBP + -0x1c]
005a1dbd  MOV EDX,dword ptr [EAX]
005a1dbf  MOV ECX,dword ptr [EBP + -0x1c]
005a1dc2  MOV EAX,dword ptr [EDX]
005a1dc4  CALL EAX
005a1dc6  MOV dword ptr [EBP + -0x2c],EAX
005a1dc9  JMP 0x005a1dd2
005a1dcb  MOV dword ptr [EBP + -0x2c],0x0
005a1dd2  JMP 0x005a1d90
005a1dd4  MOV dword ptr [EBP + -0x4],0xffffffff
005a1ddb  MOV ECX,dword ptr [EBP + -0x24]
005a1dde  CALL 0x005e9e40
005a1de3  MOV ECX,dword ptr [EBP + -0xc]
005a1de6  MOV dword ptr FS:[0x0],ECX
005a1ded  POP ECX
005a1dee  MOV ESP,EBP
005a1df0  POP EBP
005a1df1  RET
