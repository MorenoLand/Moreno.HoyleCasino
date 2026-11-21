; FUN_005d5e10  005d5e10
005d5e10  PUSH EBP
005d5e11  MOV EBP,ESP
005d5e13  SUB ESP,0x8
005d5e16  MOV dword ptr [EBP + -0x8],ECX
005d5e19  MOV EAX,dword ptr [EBP + -0x8]
005d5e1c  MOV ECX,dword ptr [EBP + 0x8]
005d5e1f  MOV dword ptr [EAX + 0x4bc],ECX
005d5e25  MOV EDX,dword ptr [EBP + 0xc]
005d5e28  MOV dword ptr [EAX + 0x4c0],EDX
005d5e2e  MOV EAX,dword ptr [EBP + -0x8]
005d5e31  CMP dword ptr [EAX + 0x4bc],0x0
005d5e38  JL 0x005d5e46
005d5e3a  MOV ECX,dword ptr [EBP + -0x8]
005d5e3d  CMP dword ptr [ECX + 0x4c0],0x0
005d5e44  JGE 0x005d5e5d
005d5e46  PUSH 0x1b4
005d5e4b  PUSH 0x6d3d54
005d5e50  PUSH 0x6d3d20
005d5e55  CALL 0x005e9f20
005d5e5a  ADD ESP,0xc
005d5e5d  CMP dword ptr [0x0162ee80],0x0
005d5e64  JZ 0x005d5e9c
005d5e66  MOV EAX,[0x007947e4]
005d5e6b  CMP dword ptr [EAX + 0x68],0x0
005d5e6f  JZ 0x005d5e9c
005d5e71  MOV ECX,dword ptr [EBP + -0x8]
005d5e74  CALL 0x0063aac0
005d5e79  MOV ECX,dword ptr [EAX]
005d5e7b  MOV dword ptr [EBP + -0x4],ECX
005d5e7e  XOR EDX,EDX
005d5e80  CMP dword ptr [EBP + -0x4],0x0
005d5e84  SETZ DL
005d5e87  MOVZX EAX,DL
005d5e8a  TEST EAX,EAX
005d5e8c  JNZ 0x005d5e9c
005d5e8e  MOV ECX,dword ptr [0x007947e4]
005d5e94  MOV ECX,dword ptr [ECX + 0x68]
005d5e97  CALL 0x005ca8b0
005d5e9c  MOV ESP,EBP
005d5e9e  POP EBP
005d5e9f  RET 0x8
