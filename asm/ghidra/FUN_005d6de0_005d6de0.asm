; FUN_005d6de0  005d6de0
005d6de0  PUSH EBP
005d6de1  MOV EBP,ESP
005d6de3  SUB ESP,0x10
005d6de6  MOV dword ptr [EBP + -0x10],ECX
005d6de9  MOV ECX,dword ptr [EBP + -0x10]
005d6dec  CALL 0x005d52e0
005d6df1  MOV AL,byte ptr [EAX + 0x2a]
005d6df4  MOV byte ptr [EBP + -0x9],AL
005d6df7  MOVSX ECX,byte ptr [EBP + -0x9]
005d6dfb  CMP ECX,0x7
005d6dfe  JZ 0x005d6e0c
005d6e00  MOV ECX,dword ptr [EBP + -0x10]
005d6e03  CALL 0x005d52e0
005d6e08  MOV byte ptr [EAX + 0x29],0x1
005d6e0c  MOV EDX,dword ptr [EBP + -0x10]
005d6e0f  MOV byte ptr [EDX + 0x4b1],0x1
005d6e16  PUSH 0x0
005d6e18  MOV ECX,dword ptr [EBP + -0x10]
005d6e1b  CALL 0x005d6bd0
005d6e20  PUSH EAX
005d6e21  CALL 0x0064c8a0
005d6e26  ADD ESP,0x8
005d6e29  MOV dword ptr [EBP + -0x8],EAX
005d6e2c  MOV dword ptr [EBP + -0x4],EDX
005d6e2f  MOV EAX,dword ptr [EBP + -0x4]
005d6e32  PUSH EAX
005d6e33  MOV ECX,dword ptr [EBP + -0x8]
005d6e36  PUSH ECX
005d6e37  MOV ECX,dword ptr [EBP + -0x10]
005d6e3a  CALL 0x005d5cf0
005d6e3f  MOV EDX,dword ptr [EBP + -0x10]
005d6e42  MOV byte ptr [EDX + 0x4b1],0x0
005d6e49  MOV EAX,dword ptr [EBP + -0x10]
005d6e4c  MOV ECX,dword ptr [EAX + 0x4]
005d6e4f  MOV EDX,dword ptr [0x0162ee84]
005d6e55  MOV EAX,dword ptr [EDX + 0x58]
005d6e58  MOV ECX,dword ptr [EAX + ECX*0x4]
005d6e5b  CALL 0x0063b0a0
005d6e60  MOV ESP,EBP
005d6e62  POP EBP
005d6e63  RET
