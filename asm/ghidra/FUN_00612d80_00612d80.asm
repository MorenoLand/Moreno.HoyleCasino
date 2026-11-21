; FUN_00612d80  00612d80
00612d80  PUSH EBP
00612d81  MOV EBP,ESP
00612d83  SUB ESP,0x60
00612d86  MOV dword ptr [EBP + -0x5c],ECX
00612d89  MOV EAX,dword ptr [EBP + -0x5c]
00612d8c  MOV dword ptr [EAX + 0x4],0x0
00612d93  MOV ECX,dword ptr [EBP + -0x5c]
00612d96  MOV dword ptr [ECX + 0x8],0x0
00612d9d  MOV EDX,dword ptr [EBP + -0x5c]
00612da0  MOV dword ptr [EDX + 0xc],0x0
00612da7  CMP dword ptr [EBP + 0x8],0x0
00612dab  JNZ 0x00612db3
00612dad  XOR AL,AL
00612daf  JMP 0x00612e12
00612db3  MOV dword ptr [EBP + -0x4],0x38e38e3
00612dba  CMP dword ptr [EBP + -0x4],0x0
00612dbe  JBE 0x00612dc8
00612dc0  MOV EAX,dword ptr [EBP + -0x4]
00612dc3  MOV dword ptr [EBP + -0x60],EAX
00612dc6  JMP 0x00612dcf
00612dc8  MOV dword ptr [EBP + -0x60],0x1
00612dcf  MOV ECX,dword ptr [EBP + -0x60]
00612dd2  CMP ECX,dword ptr [EBP + 0x8]
00612dd5  JNC 0x00612dde
00612dd7  CALL 0x006126e0
00612ddc  JMP 0x00612e10
00612dde  PUSH 0x0
00612de0  MOV EDX,dword ptr [EBP + 0x8]
00612de3  PUSH EDX
00612de4  CALL 0x0068fa30
00612de9  ADD ESP,0x8
00612dec  MOV ECX,dword ptr [EBP + -0x5c]
00612def  MOV dword ptr [ECX + 0x4],EAX
00612df2  MOV EDX,dword ptr [EBP + -0x5c]
00612df5  MOV EAX,dword ptr [EBP + -0x5c]
00612df8  MOV ECX,dword ptr [EAX + 0x4]
00612dfb  MOV dword ptr [EDX + 0x8],ECX
00612dfe  MOV EDX,dword ptr [EBP + 0x8]
00612e01  IMUL EDX,EDX,0x48
00612e04  MOV EAX,dword ptr [EBP + -0x5c]
00612e07  ADD EDX,dword ptr [EAX + 0x4]
00612e0a  MOV ECX,dword ptr [EBP + -0x5c]
00612e0d  MOV dword ptr [ECX + 0xc],EDX
00612e10  MOV AL,0x1
00612e12  MOV ESP,EBP
00612e14  POP EBP
00612e15  RET 0x4
