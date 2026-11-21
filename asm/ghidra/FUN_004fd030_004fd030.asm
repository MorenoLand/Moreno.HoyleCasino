; FUN_004fd030  004fd030
004fd030  PUSH EBP
004fd031  MOV EBP,ESP
004fd033  SUB ESP,0x10
004fd036  MOV dword ptr [EBP + -0xc],ECX
004fd039  MOV EAX,[0x00791eb8]
004fd03e  MOV ECX,dword ptr [EAX + 0xa4]
004fd044  MOV dword ptr [EBP + -0x8],ECX
004fd047  MOV EDX,dword ptr [EBP + -0x8]
004fd04a  MOV dword ptr [EBP + -0x4],EDX
004fd04d  CMP dword ptr [EBP + -0x4],0x0
004fd051  JZ 0x004fd066
004fd053  PUSH 0x1
004fd055  MOV EAX,dword ptr [EBP + -0x4]
004fd058  MOV EDX,dword ptr [EAX]
004fd05a  MOV ECX,dword ptr [EBP + -0x4]
004fd05d  MOV EAX,dword ptr [EDX]
004fd05f  CALL EAX
004fd061  MOV dword ptr [EBP + -0x10],EAX
004fd064  JMP 0x004fd06d
004fd066  MOV dword ptr [EBP + -0x10],0x0
004fd06d  MOV ESP,EBP
004fd06f  POP EBP
004fd070  RET
