; FUN_004c6cb0  004c6cb0
004c6cb0  PUSH EBP
004c6cb1  MOV EBP,ESP
004c6cb3  SUB ESP,0x24
004c6cb6  MOV dword ptr [EBP + -0x20],ECX
004c6cb9  MOV EAX,dword ptr [EBP + -0x20]
004c6cbc  MOV ECX,dword ptr [EAX + 0x4]
004c6cbf  PUSH ECX
004c6cc0  CALL 0x005dcb00
004c6cc5  ADD ESP,0x4
004c6cc8  MOV dword ptr [EBP + -0xc],EAX
004c6ccb  MOV ECX,dword ptr [EBP + -0xc]
004c6cce  CALL 0x0063aac0
004c6cd3  MOV EDX,dword ptr [EAX]
004c6cd5  MOV dword ptr [EBP + -0x4],EDX
004c6cd8  CMP dword ptr [EBP + -0x4],0x2
004c6cdc  JZ 0x004c6cfa
004c6cde  MOV ECX,dword ptr [EBP + -0xc]
004c6ce1  CALL 0x0063aac0
004c6ce6  MOV EAX,dword ptr [EAX]
004c6ce8  MOV dword ptr [EBP + -0x8],EAX
004c6ceb  CMP dword ptr [EBP + -0x8],0x3
004c6cef  JZ 0x004c6cfa
004c6cf1  MOV dword ptr [EBP + -0x24],0x0
004c6cf8  JMP 0x004c6d01
004c6cfa  MOV dword ptr [EBP + -0x24],0x1
004c6d01  MOVZX ECX,byte ptr [EBP + -0x24]
004c6d05  TEST ECX,ECX
004c6d07  JZ 0x004c6d10
004c6d09  MOV EAX,0x2
004c6d0e  JMP 0x004c6d7f
004c6d10  MOV EDX,dword ptr [EBP + -0x20]
004c6d13  MOV EAX,dword ptr [EDX + 0x4]
004c6d16  PUSH EAX
004c6d17  CALL 0x005dcb00
004c6d1c  ADD ESP,0x4
004c6d1f  MOV dword ptr [EBP + -0x14],EAX
004c6d22  MOV ECX,dword ptr [EBP + -0x14]
004c6d25  CALL 0x0063aac0
004c6d2a  MOV ECX,dword ptr [EAX]
004c6d2c  MOV dword ptr [EBP + -0x10],ECX
004c6d2f  XOR EDX,EDX
004c6d31  CMP dword ptr [EBP + -0x10],0x1
004c6d35  SETZ DL
004c6d38  MOVZX EAX,DL
004c6d3b  TEST EAX,EAX
004c6d3d  JZ 0x004c6d46
004c6d3f  MOV EAX,0x1
004c6d44  JMP 0x004c6d7f
004c6d46  MOV ECX,dword ptr [EBP + -0x20]
004c6d49  MOV EDX,dword ptr [ECX + 0x4]
004c6d4c  PUSH EDX
004c6d4d  CALL 0x005dcb00
004c6d52  ADD ESP,0x4
004c6d55  MOV dword ptr [EBP + -0x1c],EAX
004c6d58  MOV ECX,dword ptr [EBP + -0x1c]
004c6d5b  CALL 0x0063aac0
004c6d60  MOV EAX,dword ptr [EAX]
004c6d62  MOV dword ptr [EBP + -0x18],EAX
004c6d65  XOR ECX,ECX
004c6d67  CMP dword ptr [EBP + -0x18],0x0
004c6d6b  SETZ CL
004c6d6e  MOVZX EDX,CL
004c6d71  TEST EDX,EDX
004c6d73  JZ 0x004c6d79
004c6d75  XOR EAX,EAX
004c6d77  JMP 0x004c6d7f
004c6d79  MOV EAX,dword ptr [EBP + -0x20]
004c6d7c  MOV EAX,dword ptr [EAX + 0x70]
004c6d7f  MOV ESP,EBP
004c6d81  POP EBP
004c6d82  RET
