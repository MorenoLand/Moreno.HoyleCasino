; FUN_005f5cf0  005f5cf0
005f5cf0  PUSH EBP
005f5cf1  MOV EBP,ESP
005f5cf3  PUSH ECX
005f5cf4  MOV dword ptr [EBP + -0x4],ECX
005f5cf7  MOV ECX,dword ptr [EBP + -0x4]
005f5cfa  CALL 0x005f5600
005f5cff  MOVZX EAX,AL
005f5d02  TEST EAX,EAX
005f5d04  JNZ 0x005f5d45
005f5d06  MOV ECX,dword ptr [EBP + -0x4]
005f5d09  CMP dword ptr [ECX + 0x17c],0x0
005f5d10  JZ 0x005f5d20
005f5d12  MOV EDX,dword ptr [EBP + -0x4]
005f5d15  MOV ECX,dword ptr [EDX + 0x17c]
005f5d1b  CALL 0x005fc250
005f5d20  MOV EAX,dword ptr [EBP + -0x4]
005f5d23  CMP dword ptr [EAX + 0x180],0x0
005f5d2a  JZ 0x005f5d45
005f5d2c  MOV ECX,dword ptr [EBP + -0x4]
005f5d2f  MOV EDX,dword ptr [ECX + 0x180]
005f5d35  MOV EAX,dword ptr [EBP + -0x4]
005f5d38  MOV ECX,dword ptr [EAX + 0x180]
005f5d3e  MOV EDX,dword ptr [EDX]
005f5d40  MOV EAX,dword ptr [EDX + 0x8]
005f5d43  CALL EAX
005f5d45  MOV ESP,EBP
005f5d47  POP EBP
005f5d48  RET
