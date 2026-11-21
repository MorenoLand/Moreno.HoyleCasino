; FUN_0045df20  0045df20
0045df20  PUSH EBP
0045df21  MOV EBP,ESP
0045df23  SUB ESP,0x34
0045df26  MOV dword ptr [EBP + -0x34],ECX
0045df29  PUSH 0x0
0045df2b  PUSH 0x0
0045df2d  CALL 0x0064c8a0
0045df32  ADD ESP,0x8
0045df35  MOV dword ptr [EBP + -0x8],EAX
0045df38  MOV dword ptr [EBP + -0x4],EDX
0045df3b  MOV EAX,dword ptr [EBP + 0xc]
0045df3e  MOV ECX,dword ptr [EBP + -0x8]
0045df41  MOV dword ptr [EAX],ECX
0045df43  MOV EDX,dword ptr [EBP + -0x4]
0045df46  MOV dword ptr [EAX + 0x4],EDX
0045df49  MOV EAX,dword ptr [EBP + 0x8]
0045df4c  PUSH EAX
0045df4d  CALL 0x005dcb00
0045df52  ADD ESP,0x4
0045df55  MOV dword ptr [EBP + -0x24],EAX
0045df58  MOV ECX,dword ptr [EBP + -0x24]
0045df5b  MOV DL,byte ptr [ECX + 0x4a2]
0045df61  MOV byte ptr [EBP + -0x25],DL
0045df64  MOVZX EAX,byte ptr [EBP + -0x25]
0045df68  TEST EAX,EAX
0045df6a  JZ 0x0045df6e
0045df6c  JMP 0x0045dfe7
0045df6e  MOV ECX,dword ptr [0x00790738]
0045df74  MOV EDX,dword ptr [ECX + 0x4]
0045df77  MOV dword ptr [EBP + -0x2c],EDX
0045df7a  MOV EAX,dword ptr [EBP + 0x8]
0045df7d  SHL EAX,0x5
0045df80  MOV ECX,dword ptr [EBP + -0x2c]
0045df83  LEA EDX,[ECX + EAX*0x1 + 0x48]
0045df87  MOV EAX,0x1
0045df8c  SHL EAX,0x3
0045df8f  MOV ECX,dword ptr [EDX + EAX*0x1]
0045df92  MOV EDX,dword ptr [EDX + EAX*0x1 + 0x4]
0045df96  MOV dword ptr [EBP + -0x18],ECX
0045df99  MOV dword ptr [EBP + -0x14],EDX
0045df9c  MOV EAX,[0x00790738]
0045dfa1  MOV ECX,dword ptr [EAX + 0x4]
0045dfa4  MOV dword ptr [EBP + -0x30],ECX
0045dfa7  MOV EDX,dword ptr [EBP + 0x8]
0045dfaa  SHL EDX,0x5
0045dfad  MOV EAX,dword ptr [EBP + -0x30]
0045dfb0  LEA ECX,[EAX + EDX*0x1 + 0x48]
0045dfb4  XOR EDX,EDX
0045dfb6  SHL EDX,0x3
0045dfb9  MOV EAX,dword ptr [ECX + EDX*0x1]
0045dfbc  MOV ECX,dword ptr [ECX + EDX*0x1 + 0x4]
0045dfc0  MOV dword ptr [EBP + -0x10],EAX
0045dfc3  MOV dword ptr [EBP + -0xc],ECX
0045dfc6  MOV EDX,dword ptr [EBP + -0x14]
0045dfc9  PUSH EDX
0045dfca  MOV EAX,dword ptr [EBP + -0x18]
0045dfcd  PUSH EAX
0045dfce  LEA ECX,[EBP + -0x20]
0045dfd1  PUSH ECX
0045dfd2  LEA ECX,[EBP + -0x10]
0045dfd5  CALL 0x0064c5c0
0045dfda  MOV EDX,dword ptr [EAX]
0045dfdc  MOV EAX,dword ptr [EAX + 0x4]
0045dfdf  MOV ECX,dword ptr [EBP + 0xc]
0045dfe2  MOV dword ptr [ECX],EDX
0045dfe4  MOV dword ptr [ECX + 0x4],EAX
0045dfe7  MOV ESP,EBP
0045dfe9  POP EBP
0045dfea  RET 0x8
