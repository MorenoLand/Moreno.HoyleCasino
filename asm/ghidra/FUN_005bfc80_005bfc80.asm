; FUN_005bfc80  005bfc80
005bfc80  PUSH EBP
005bfc81  MOV EBP,ESP
005bfc83  SUB ESP,0x8
005bfc86  MOV dword ptr [EBP + -0x4],ECX
005bfc89  MOV ECX,dword ptr [EBP + -0x4]
005bfc8c  CALL 0x005fc360
005bfc91  MOV dword ptr [EBP + -0x8],EAX
005bfc94  CMP dword ptr [EBP + -0x8],0x0
005bfc98  JZ 0x005bfca2
005bfc9a  CMP dword ptr [EBP + -0x8],0x1
005bfc9e  JZ 0x005bfcb3
005bfca0  JMP 0x005bfcd4
005bfca2  PUSH 0x1
005bfca4  MOV EAX,dword ptr [EBP + -0x4]
005bfca7  MOV EDX,dword ptr [EAX]
005bfca9  MOV ECX,dword ptr [EBP + -0x4]
005bfcac  MOV EAX,dword ptr [EDX + 0x4]
005bfcaf  CALL EAX
005bfcb1  JMP 0x005bfcd4
005bfcb3  MOV ECX,dword ptr [EBP + -0x4]
005bfcb6  MOV EDX,dword ptr [ECX + 0x24]
005bfcb9  PUSH EDX
005bfcba  MOV EAX,dword ptr [EBP + -0x4]
005bfcbd  MOV ECX,dword ptr [EAX + 0x20]
005bfcc0  CALL 0x005bfbc0
005bfcc5  PUSH 0x2
005bfcc7  MOV ECX,dword ptr [EBP + -0x4]
005bfcca  MOV EDX,dword ptr [ECX]
005bfccc  MOV ECX,dword ptr [EBP + -0x4]
005bfccf  MOV EAX,dword ptr [EDX + 0x4]
005bfcd2  CALL EAX
005bfcd4  MOV ESP,EBP
005bfcd6  POP EBP
005bfcd7  RET
