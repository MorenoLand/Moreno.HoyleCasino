; FUN_005eaf60  005eaf60
005eaf60  PUSH EBP
005eaf61  MOV EBP,ESP
005eaf63  PUSH ECX
005eaf64  MOV dword ptr [EBP + -0x4],ECX
005eaf67  MOV EAX,dword ptr [EBP + -0x4]
005eaf6a  MOV dword ptr [EAX + 0x4c],0x0
005eaf71  MOV ECX,dword ptr [EBP + -0x4]
005eaf74  ADD ECX,0x50
005eaf77  PUSH ECX
005eaf78  MOV EDX,dword ptr [EBP + 0x8]
005eaf7b  PUSH EDX
005eaf7c  CALL 0x00686ec0
005eaf81  ADD ESP,0x8
005eaf84  TEST EAX,EAX
005eaf86  JZ 0x005eafac
005eaf88  MOV EAX,dword ptr [EBP + 0x8]
005eaf8b  PUSH EAX
005eaf8c  MOV ECX,dword ptr [EBP + -0x4]
005eaf8f  ADD ECX,0x50
005eaf92  PUSH ECX
005eaf93  CALL 0x00686d8e
005eaf98  ADD ESP,0x8
005eaf9b  MOV EDX,dword ptr [EBP + -0x4]
005eaf9e  CMP dword ptr [EDX + 0x28],0x0
005eafa2  JZ 0x005eafac
005eafa4  MOV ECX,dword ptr [EBP + -0x4]
005eafa7  CALL 0x005eacd0
005eafac  MOV ESP,EBP
005eafae  POP EBP
005eafaf  RET 0x4
