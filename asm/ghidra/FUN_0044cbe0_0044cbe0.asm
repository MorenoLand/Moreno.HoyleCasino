; FUN_0044cbe0  0044cbe0
0044cbe0  PUSH EBP
0044cbe1  MOV EBP,ESP
0044cbe3  SUB ESP,0x20
0044cbe6  MOV dword ptr [EBP + -0x20],ECX
0044cbe9  MOV dword ptr [EBP + -0x4],0x0
0044cbf0  JMP 0x0044cbfb
0044cbf2  MOV EAX,dword ptr [EBP + -0x4]
0044cbf5  ADD EAX,0x1
0044cbf8  MOV dword ptr [EBP + -0x4],EAX
0044cbfb  CMP dword ptr [EBP + -0x4],0x4
0044cbff  JGE 0x0044cc7c
0044cc01  MOV ECX,dword ptr [EBP + -0x4]
0044cc04  PUSH ECX
0044cc05  CALL 0x005dcb00
0044cc0a  ADD ESP,0x4
0044cc0d  MOV dword ptr [EBP + -0xc],EAX
0044cc10  MOV ECX,dword ptr [EBP + -0xc]
0044cc13  CALL 0x0063aac0
0044cc18  MOV EDX,dword ptr [EAX]
0044cc1a  MOV dword ptr [EBP + -0x8],EDX
0044cc1d  XOR EAX,EAX
0044cc1f  CMP dword ptr [EBP + -0x8],0x0
0044cc23  SETZ AL
0044cc26  MOVZX ECX,AL
0044cc29  TEST ECX,ECX
0044cc2b  JNZ 0x0044cc77
0044cc2d  MOV EDX,dword ptr [EBP + -0x4]
0044cc30  PUSH EDX
0044cc31  CALL 0x005dcb00
0044cc36  ADD ESP,0x4
0044cc39  MOV dword ptr [EBP + -0x10],EAX
0044cc3c  MOV EAX,dword ptr [EBP + -0x10]
0044cc3f  MOV CL,byte ptr [EAX + 0x4a1]
0044cc45  MOV byte ptr [EBP + -0x11],CL
0044cc48  MOVZX EDX,byte ptr [EBP + -0x11]
0044cc4c  TEST EDX,EDX
0044cc4e  JNZ 0x0044cc77
0044cc50  MOV EAX,dword ptr [EBP + -0x4]
0044cc53  PUSH EAX
0044cc54  CALL 0x005dcb00
0044cc59  ADD ESP,0x4
0044cc5c  MOV dword ptr [EBP + -0x18],EAX
0044cc5f  MOV ECX,dword ptr [EBP + -0x18]
0044cc62  MOV DL,byte ptr [ECX + 0x4a0]
0044cc68  MOV byte ptr [EBP + -0x19],DL
0044cc6b  MOVZX EAX,byte ptr [EBP + -0x19]
0044cc6f  TEST EAX,EAX
0044cc71  JNZ 0x0044cc77
0044cc73  MOV AL,0x1
0044cc75  JMP 0x0044cc7e
0044cc77  JMP 0x0044cbf2
0044cc7c  XOR AL,AL
0044cc7e  MOV ESP,EBP
0044cc80  POP EBP
0044cc81  RET
