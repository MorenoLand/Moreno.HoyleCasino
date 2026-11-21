; FUN_005c0870  005c0870
005c0870  PUSH EBP
005c0871  MOV EBP,ESP
005c0873  SUB ESP,0x60
005c0876  MOV dword ptr [EBP + -0x5c],ECX
005c0879  MOV EAX,dword ptr [EBP + -0x5c]
005c087c  MOV dword ptr [EAX + 0x4],0x0
005c0883  MOV ECX,dword ptr [EBP + -0x5c]
005c0886  MOV dword ptr [ECX + 0x8],0x0
005c088d  MOV EDX,dword ptr [EBP + -0x5c]
005c0890  MOV dword ptr [EDX + 0xc],0x0
005c0897  CMP dword ptr [EBP + 0x8],0x0
005c089b  JNZ 0x005c08a3
005c089d  XOR AL,AL
005c089f  JMP 0x005c0902
005c08a3  MOV dword ptr [EBP + -0x4],0x3fffffff
005c08aa  CMP dword ptr [EBP + -0x4],0x0
005c08ae  JBE 0x005c08b8
005c08b0  MOV EAX,dword ptr [EBP + -0x4]
005c08b3  MOV dword ptr [EBP + -0x60],EAX
005c08b6  JMP 0x005c08bf
005c08b8  MOV dword ptr [EBP + -0x60],0x1
005c08bf  MOV ECX,dword ptr [EBP + -0x60]
005c08c2  CMP ECX,dword ptr [EBP + 0x8]
005c08c5  JNC 0x005c08ce
005c08c7  CALL 0x005c06f0
005c08cc  JMP 0x005c0900
005c08ce  PUSH 0x0
005c08d0  MOV EDX,dword ptr [EBP + 0x8]
005c08d3  PUSH EDX
005c08d4  CALL 0x005c6310
005c08d9  ADD ESP,0x8
005c08dc  MOV ECX,dword ptr [EBP + -0x5c]
005c08df  MOV dword ptr [ECX + 0x4],EAX
005c08e2  MOV EDX,dword ptr [EBP + -0x5c]
005c08e5  MOV EAX,dword ptr [EBP + -0x5c]
005c08e8  MOV ECX,dword ptr [EAX + 0x4]
005c08eb  MOV dword ptr [EDX + 0x8],ECX
005c08ee  MOV EDX,dword ptr [EBP + -0x5c]
005c08f1  MOV EAX,dword ptr [EDX + 0x4]
005c08f4  MOV ECX,dword ptr [EBP + 0x8]
005c08f7  LEA EDX,[EAX + ECX*0x4]
005c08fa  MOV EAX,dword ptr [EBP + -0x5c]
005c08fd  MOV dword ptr [EAX + 0xc],EDX
005c0900  MOV AL,0x1
005c0902  MOV ESP,EBP
005c0904  POP EBP
005c0905  RET 0x4
