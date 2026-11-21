; FUN_0044cee0  0044cee0
0044cee0  PUSH EBP
0044cee1  MOV EBP,ESP
0044cee3  SUB ESP,0x30
0044cee6  MOV dword ptr [EBP + -0x30],ECX
0044cee9  MOV dword ptr [EBP + -0x14],0x2
0044cef0  MOV dword ptr [EBP + -0x10],0x0
0044cef7  MOV dword ptr [EBP + -0xc],0x1
0044cefe  MOV dword ptr [EBP + -0x8],0x3
0044cf05  MOV dword ptr [EBP + -0x4],0x0
0044cf0c  JMP 0x0044cf17
0044cf0e  MOV EAX,dword ptr [EBP + -0x4]
0044cf11  ADD EAX,0x1
0044cf14  MOV dword ptr [EBP + -0x4],EAX
0044cf17  CMP dword ptr [EBP + -0x4],0x4
0044cf1b  JGE 0x0044cfad
0044cf21  MOV ECX,dword ptr [EBP + -0x4]
0044cf24  MOV EDX,dword ptr [EBP + ECX*0x4 + -0x14]
0044cf28  PUSH EDX
0044cf29  CALL 0x005dcb00
0044cf2e  ADD ESP,0x4
0044cf31  MOV dword ptr [EBP + -0x1c],EAX
0044cf34  MOV ECX,dword ptr [EBP + -0x1c]
0044cf37  CALL 0x0063aac0
0044cf3c  MOV EAX,dword ptr [EAX]
0044cf3e  MOV dword ptr [EBP + -0x18],EAX
0044cf41  XOR ECX,ECX
0044cf43  CMP dword ptr [EBP + -0x18],0x0
0044cf47  SETZ CL
0044cf4a  MOVZX EDX,CL
0044cf4d  TEST EDX,EDX
0044cf4f  JNZ 0x0044cfa8
0044cf51  MOV EAX,dword ptr [EBP + -0x4]
0044cf54  MOV ECX,dword ptr [EBP + EAX*0x4 + -0x14]
0044cf58  PUSH ECX
0044cf59  CALL 0x005dcb00
0044cf5e  ADD ESP,0x4
0044cf61  MOV dword ptr [EBP + -0x20],EAX
0044cf64  MOV EDX,dword ptr [EBP + -0x20]
0044cf67  MOV AL,byte ptr [EDX + 0x4a0]
0044cf6d  MOV byte ptr [EBP + -0x21],AL
0044cf70  MOVZX ECX,byte ptr [EBP + -0x21]
0044cf74  TEST ECX,ECX
0044cf76  JNZ 0x0044cfa8
0044cf78  MOV EDX,dword ptr [EBP + -0x4]
0044cf7b  MOV EAX,dword ptr [EBP + EDX*0x4 + -0x14]
0044cf7f  PUSH EAX
0044cf80  CALL 0x005dcb00
0044cf85  ADD ESP,0x4
0044cf88  MOV dword ptr [EBP + -0x28],EAX
0044cf8b  MOV ECX,dword ptr [EBP + -0x28]
0044cf8e  MOV DL,byte ptr [ECX + 0x4a1]
0044cf94  MOV byte ptr [EBP + -0x29],DL
0044cf97  MOVZX EAX,byte ptr [EBP + -0x29]
0044cf9b  TEST EAX,EAX
0044cf9d  JNZ 0x0044cfa8
0044cf9f  MOV ECX,dword ptr [EBP + -0x4]
0044cfa2  MOV EAX,dword ptr [EBP + ECX*0x4 + -0x14]
0044cfa6  JMP 0x0044cfb0
0044cfa8  JMP 0x0044cf0e
0044cfad  OR EAX,0xffffffff
0044cfb0  MOV ESP,EBP
0044cfb2  POP EBP
0044cfb3  RET
