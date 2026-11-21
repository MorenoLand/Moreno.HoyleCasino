; FUN_005ef8e0  005ef8e0
005ef8e0  PUSH EBP
005ef8e1  MOV EBP,ESP
005ef8e3  SUB ESP,0x20
005ef8e6  MOV dword ptr [EBP + -0x20],ECX
005ef8e9  MOV EAX,dword ptr [EBP + -0x20]
005ef8ec  MOV ECX,dword ptr [EAX + 0x4]
005ef8ef  MOV dword ptr [EBP + -0xc],ECX
005ef8f2  MOV ECX,dword ptr [EBP + -0x20]
005ef8f5  CALL 0x005f54c0
005ef8fa  MOVZX EDX,AL
005ef8fd  TEST EDX,EDX
005ef8ff  JNZ 0x005ef913
005ef901  MOV EAX,dword ptr [EBP + -0x20]
005ef904  MOV ECX,dword ptr [EAX + 0x4]
005ef907  CALL 0x005f88f0
005ef90c  MOVZX ECX,AL
005ef90f  TEST ECX,ECX
005ef911  JZ 0x005ef91a
005ef913  XOR AL,AL
005ef915  JMP 0x005efa0e
005ef91a  MOV EDX,dword ptr [EBP + -0xc]
005ef91d  MOV EAX,dword ptr [EDX + 0x1a4]
005ef923  MOV dword ptr [EBP + -0x10],EAX
005ef926  CMP dword ptr [EBP + -0x10],0x0
005ef92a  JZ 0x005ef93a
005ef92c  MOV ECX,dword ptr [EBP + -0xc]
005ef92f  MOV EDX,dword ptr [ECX + 0x1a4]
005ef935  MOV dword ptr [EBP + -0xc],EDX
005ef938  JMP 0x005ef91a
005ef93a  MOV EAX,dword ptr [EBP + -0xc]
005ef93d  MOV CL,byte ptr [EAX + 0x1b0]
005ef943  MOV byte ptr [EBP + -0x11],CL
005ef946  MOVZX EDX,byte ptr [EBP + -0x11]
005ef94a  TEST EDX,EDX
005ef94c  JZ 0x005ef960
005ef94e  MOV EAX,dword ptr [EBP + -0x20]
005ef951  MOV ECX,dword ptr [EBP + -0xc]
005ef954  CMP ECX,dword ptr [EAX + 0x4]
005ef957  JZ 0x005ef960
005ef959  XOR AL,AL
005ef95b  JMP 0x005efa0e
005ef960  MOV EDX,dword ptr [EBP + -0xc]
005ef963  MOV AL,byte ptr [EDX + 0x1b0]
005ef969  MOV byte ptr [EBP + -0x12],AL
005ef96c  MOVZX ECX,byte ptr [EBP + -0x12]
005ef970  TEST ECX,ECX
005ef972  JNZ 0x005ef9f9
005ef978  MOV EDX,dword ptr [EBP + -0x20]
005ef97b  MOV EAX,dword ptr [EBP + -0xc]
005ef97e  CMP EAX,dword ptr [EDX + 0x4]
005ef981  JNZ 0x005ef98a
005ef983  XOR AL,AL
005ef985  JMP 0x005efa0e
005ef98a  MOV ECX,dword ptr [0x015e55e8]
005ef990  ADD ECX,0x4
005ef993  CALL 0x0060c9a0
005ef998  SUB EAX,0x1
005ef99b  MOV dword ptr [EBP + -0x4],EAX
005ef99e  JMP 0x005ef9a9
005ef9a0  MOV ECX,dword ptr [EBP + -0x4]
005ef9a3  SUB ECX,0x1
005ef9a6  MOV dword ptr [EBP + -0x4],ECX
005ef9a9  CMP dword ptr [EBP + -0x4],0x0
005ef9ad  JL 0x005ef9f9
005ef9af  MOV EDX,dword ptr [EBP + -0x4]
005ef9b2  PUSH EDX
005ef9b3  MOV ECX,dword ptr [0x015e55e8]
005ef9b9  ADD ECX,0x4
005ef9bc  CALL 0x0060ca40
005ef9c1  MOV dword ptr [EBP + -0x8],EAX
005ef9c4  MOV EAX,dword ptr [EBP + -0x8]
005ef9c7  MOV ECX,dword ptr [EAX + 0x1a8]
005ef9cd  MOV dword ptr [EBP + -0x18],ECX
005ef9d0  MOV EDX,dword ptr [EBP + -0xc]
005ef9d3  MOV EAX,dword ptr [EDX + 0x1a8]
005ef9d9  MOV dword ptr [EBP + -0x1c],EAX
005ef9dc  MOV ECX,dword ptr [EBP + -0x18]
005ef9df  CMP ECX,dword ptr [EBP + -0x1c]
005ef9e2  JZ 0x005ef9e6
005ef9e4  JMP 0x005ef9a0
005ef9e6  MOV EDX,dword ptr [EBP + -0x20]
005ef9e9  MOV EAX,dword ptr [EDX + 0x4]
005ef9ec  CMP EAX,dword ptr [EBP + -0x8]
005ef9ef  JZ 0x005ef9f5
005ef9f1  XOR AL,AL
005ef9f3  JMP 0x005efa0e
005ef9f5  JMP 0x005ef9f9
005ef9f9  MOV ECX,dword ptr [EBP + -0x20]
005ef9fc  MOV ECX,dword ptr [ECX + 0x4]
005ef9ff  CALL 0x005f95c0
005efa04  XOR EDX,EDX
005efa06  CMP EAX,dword ptr [EBP + -0x20]
005efa09  SETZ DL
005efa0c  MOV AL,DL
005efa0e  MOV ESP,EBP
005efa10  POP EBP
005efa11  RET
