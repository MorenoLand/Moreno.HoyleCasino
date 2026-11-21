; FUN_0056adb0  0056adb0
0056adb0  PUSH EBP
0056adb1  MOV EBP,ESP
0056adb3  SUB ESP,0xc
0056adb6  MOV dword ptr [EBP + -0xc],ECX
0056adb9  MOV dword ptr [EBP + -0x4],0x0
0056adc0  JMP 0x0056adcb
0056adc2  MOV EAX,dword ptr [EBP + -0x4]
0056adc5  ADD EAX,0x1
0056adc8  MOV dword ptr [EBP + -0x4],EAX
0056adcb  CMP dword ptr [EBP + -0x4],0x5
0056adcf  JGE 0x0056addf
0056add1  MOV ECX,dword ptr [EBP + -0x4]
0056add4  MOV EDX,dword ptr [EBP + 0xc]
0056add7  MOV word ptr [EDX + ECX*0x2],0x0
0056addd  JMP 0x0056adc2
0056addf  MOV dword ptr [EBP + -0x4],0x0
0056ade6  JMP 0x0056adf1
0056ade8  MOV EAX,dword ptr [EBP + -0x4]
0056adeb  ADD EAX,0x1
0056adee  MOV dword ptr [EBP + -0x4],EAX
0056adf1  CMP dword ptr [EBP + -0x4],0x5
0056adf5  JGE 0x0056ae3e
0056adf7  MOV ECX,dword ptr [EBP + 0x8]
0056adfa  IMUL ECX,ECX,0xa
0056adfd  MOV EDX,dword ptr [EBP + -0xc]
0056ae00  LEA EAX,[EDX + ECX*0x1 + 0xf6]
0056ae07  MOV ECX,dword ptr [EBP + -0x4]
0056ae0a  MOV DX,word ptr [EAX + ECX*0x2]
0056ae0e  MOV word ptr [EBP + -0x8],DX
0056ae12  MOV EAX,dword ptr [EBP + -0x4]
0056ae15  PUSH EAX
0056ae16  MOV ECX,dword ptr [EBP + 0x8]
0056ae19  PUSH ECX
0056ae1a  MOV DX,word ptr [EBP + -0x8]
0056ae1e  PUSH EDX
0056ae1f  MOV ECX,dword ptr [EBP + -0xc]
0056ae22  CALL 0x0056ad70
0056ae27  MOVZX EAX,AL
0056ae2a  TEST EAX,EAX
0056ae2c  JNZ 0x0056ae3c
0056ae2e  MOV ECX,dword ptr [EBP + -0x4]
0056ae31  MOV EDX,dword ptr [EBP + 0xc]
0056ae34  MOV AX,word ptr [EBP + -0x8]
0056ae38  MOV word ptr [EDX + ECX*0x2],AX
0056ae3c  JMP 0x0056ade8
0056ae3e  MOV ESP,EBP
0056ae40  POP EBP
0056ae41  RET 0x8
