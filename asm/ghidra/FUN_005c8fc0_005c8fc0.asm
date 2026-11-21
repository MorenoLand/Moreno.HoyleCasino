; FUN_005c8fc0  005c8fc0
005c8fc0  PUSH EBP
005c8fc1  MOV EBP,ESP
005c8fc3  SUB ESP,0x10
005c8fc6  MOV dword ptr [EBP + -0x10],ECX
005c8fc9  MOV EAX,dword ptr [EBP + -0x10]
005c8fcc  MOV dword ptr [EAX + 0xe0],0x0
005c8fd6  MOV dword ptr [EBP + -0x4],0x0
005c8fdd  JMP 0x005c8fe8
005c8fdf  MOV ECX,dword ptr [EBP + -0x4]
005c8fe2  ADD ECX,0x1
005c8fe5  MOV dword ptr [EBP + -0x4],ECX
005c8fe8  MOV EDX,dword ptr [EBP + -0x10]
005c8feb  MOV EAX,dword ptr [EDX + 0x10]
005c8fee  MOV ECX,dword ptr [EBP + -0x4]
005c8ff1  CMP ECX,dword ptr [EAX]
005c8ff3  JGE 0x005c9005
005c8ff5  MOV EDX,dword ptr [EBP + -0x4]
005c8ff8  MOV EAX,dword ptr [EBP + -0x10]
005c8ffb  MOV dword ptr [EAX + EDX*0x4 + 0x18],0xffffffff
005c9003  JMP 0x005c8fdf
005c9005  MOV ECX,dword ptr [EBP + -0x10]
005c9008  MOV EDX,dword ptr [ECX + 0x4]
005c900b  MOV dword ptr [EBP + -0x8],EDX
005c900e  MOV EAX,dword ptr [EBP + -0x10]
005c9011  MOV ECX,dword ptr [EAX + 0x8]
005c9014  MOV dword ptr [EBP + -0xc],ECX
005c9017  MOV EDX,dword ptr [EBP + -0x8]
005c901a  SUB EDX,dword ptr [EBP + -0xc]
005c901d  PUSH EDX
005c901e  MOV ECX,dword ptr [EBP + -0x10]
005c9021  CALL 0x005d0a20
005c9026  MOV ESP,EBP
005c9028  POP EBP
005c9029  RET
