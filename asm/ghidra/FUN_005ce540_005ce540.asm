; FUN_005ce540  005ce540
005ce540  PUSH EBP
005ce541  MOV EBP,ESP
005ce543  SUB ESP,0x14
005ce546  MOV dword ptr [EBP + -0x10],ECX
005ce549  MOV byte ptr [EBP + -0x1],0x0
005ce54d  CMP dword ptr [EBP + 0x8],0x0
005ce551  JNZ 0x005ce5fe
005ce557  PUSH 0x0
005ce559  MOV ECX,dword ptr [EBP + -0x10]
005ce55c  CALL 0x005fb3a0
005ce561  MOV ECX,EAX
005ce563  CALL 0x00606570
005ce568  MOV dword ptr [EBP + -0x14],EAX
005ce56b  MOV EAX,dword ptr [EBP + -0x14]
005ce56e  SUB EAX,0x1
005ce571  MOV dword ptr [EBP + -0x14],EAX
005ce574  CMP dword ptr [EBP + -0x14],0x3
005ce578  JA 0x005ce5dd
005ce57a  MOV ECX,dword ptr [EBP + -0x14]
005ce57d  JMP dword ptr [ECX*0x4 + 0x5ce63c]
005ce5dd  MOV ECX,dword ptr [0x007947e4]
005ce5e3  MOV EDX,dword ptr [ECX]
005ce5e5  MOV ECX,dword ptr [0x007947e4]
005ce5eb  MOV EAX,dword ptr [EDX + 0x278]
005ce5f1  CALL EAX
005ce5f3  MOV ECX,dword ptr [0x007947e4]
005ce5f9  CALL 0x005dbcd0
005ce5fe  MOVZX ECX,byte ptr [EBP + -0x1]
005ce602  TEST ECX,ECX
005ce604  JZ 0x005ce634
005ce606  PUSH -0x1
005ce608  MOV EDX,dword ptr [0x0162ee84]
005ce60e  MOV EAX,dword ptr [EDX]
005ce610  MOV ECX,dword ptr [0x0162ee84]
005ce616  MOV EDX,dword ptr [EAX + 0x258]
005ce61c  CALL EDX
005ce61e  PUSH EAX
005ce61f  MOV EAX,[0x0162ee84]
005ce624  MOV EDX,dword ptr [EAX]
005ce626  MOV ECX,dword ptr [0x0162ee84]
005ce62c  MOV EAX,dword ptr [EDX + 0x334]
005ce632  CALL EAX
005ce634  MOV ESP,EBP
005ce636  POP EBP
005ce637  RET 0x4
