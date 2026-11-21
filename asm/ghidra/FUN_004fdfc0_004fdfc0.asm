; FUN_004fdfc0  004fdfc0
004fdfc0  PUSH EBP
004fdfc1  MOV EBP,ESP
004fdfc3  SUB ESP,0x8
004fdfc6  MOV dword ptr [EBP + -0x8],ECX
004fdfc9  MOV EAX,dword ptr [EBP + 0xc]
004fdfcc  PUSH EAX
004fdfcd  MOV ECX,dword ptr [EBP + -0x8]
004fdfd0  CALL 0x004fe0a0
004fdfd5  MOV dword ptr [EBP + -0x4],EAX
004fdfd8  CMP dword ptr [EBP + -0x4],-0x1
004fdfdc  JNZ 0x004fdfe5
004fdfde  XOR AL,AL
004fdfe0  JMP 0x004fe08b
004fdfe5  CMP dword ptr [EBP + 0x8],0x1397
004fdfec  JZ 0x004fdff7
004fdfee  CMP dword ptr [EBP + 0x8],0x1398
004fdff5  JNZ 0x004fe048
004fdff7  XOR ECX,ECX
004fdff9  CMP dword ptr [EBP + 0x8],0x1398
004fe000  SETZ CL
004fe003  MOV EDX,dword ptr [0x007947e0]
004fe009  MOV byte ptr [EDX + 0x4f34],CL
004fe00f  MOV EAX,dword ptr [EBP + 0xc]
004fe012  PUSH EAX
004fe013  MOV ECX,dword ptr [EBP + -0x8]
004fe016  CALL 0x004fe0a0
004fe01b  MOV ECX,dword ptr [0x007947e0]
004fe021  MOV dword ptr [ECX + 0x4f20],EAX
004fe027  PUSH -0x1
004fe029  PUSH 0x30d401
004fe02e  MOV EDX,dword ptr [0x007947e0]
004fe034  MOV EAX,dword ptr [EDX]
004fe036  MOV ECX,dword ptr [0x007947e0]
004fe03c  MOV EDX,dword ptr [EAX + 0x334]
004fe042  CALL EDX
004fe044  MOV AL,0x1
004fe046  JMP 0x004fe08b
004fe048  MOV EAX,dword ptr [EBP + 0x8]
004fe04b  PUSH EAX
004fe04c  MOV ECX,dword ptr [EBP + -0x8]
004fe04f  CALL 0x004fe120
004fe054  MOV ECX,dword ptr [0x007947e0]
004fe05a  MOV dword ptr [ECX + 0x4f0c],EAX
004fe060  MOV EDX,dword ptr [0x007947e0]
004fe066  MOV EAX,dword ptr [EBP + -0x4]
004fe069  MOV dword ptr [EDX + 0x4f18],EAX
004fe06f  PUSH -0x1
004fe071  PUSH 0xb
004fe073  MOV ECX,dword ptr [0x007947e0]
004fe079  MOV EDX,dword ptr [ECX]
004fe07b  MOV ECX,dword ptr [0x007947e0]
004fe081  MOV EAX,dword ptr [EDX + 0x334]
004fe087  CALL EAX
004fe089  MOV AL,0x1
004fe08b  MOV ESP,EBP
004fe08d  POP EBP
004fe08e  RET 0x8
