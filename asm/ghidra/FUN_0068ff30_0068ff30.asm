; FUN_0068ff30  0068ff30
0068ff30  PUSH EBP
0068ff31  MOV EBP,ESP
0068ff33  SUB ESP,0x20
0068ff36  MOV dword ptr [EBP + -0x20],ECX
0068ff39  MOV EAX,dword ptr [EBP + -0x20]
0068ff3c  CMP dword ptr [EAX + 0x18],0x0
0068ff40  JNZ 0x0068ff49
0068ff42  XOR AL,AL
0068ff44  JMP 0x00690038
0068ff49  CMP dword ptr [EBP + 0x10],0x0
0068ff4d  JNZ 0x0068ff65
0068ff4f  PUSH 0x10
0068ff51  PUSH 0x0
0068ff53  LEA ECX,[EBP + -0x14]
0068ff56  PUSH ECX
0068ff57  CALL 0x00686fa2
0068ff5c  ADD ESP,0xc
0068ff5f  LEA EDX,[EBP + -0x14]
0068ff62  MOV dword ptr [EBP + 0x10],EDX
0068ff65  MOV EAX,dword ptr [EBP + 0x14]
0068ff68  PUSH EAX
0068ff69  MOV ECX,dword ptr [EBP + 0x10]
0068ff6c  PUSH ECX
0068ff6d  MOV EDX,dword ptr [EBP + 0xc]
0068ff70  PUSH EDX
0068ff71  MOV EAX,dword ptr [EBP + -0x20]
0068ff74  MOV EDX,dword ptr [EAX]
0068ff76  MOV ECX,dword ptr [EBP + -0x20]
0068ff79  MOV EAX,dword ptr [EDX + 0x20]
0068ff7c  CALL EAX
0068ff7e  MOVZX ECX,AL
0068ff81  TEST ECX,ECX
0068ff83  JNZ 0x0068ff8c
0068ff85  XOR AL,AL
0068ff87  JMP 0x00690038
0068ff8c  MOV EDX,dword ptr [EBP + 0x18]
0068ff8f  PUSH EDX
0068ff90  MOV EAX,dword ptr [EBP + 0x10]
0068ff93  PUSH EAX
0068ff94  MOV ECX,dword ptr [EBP + -0x20]
0068ff97  MOV EDX,dword ptr [ECX]
0068ff99  MOV ECX,dword ptr [EBP + -0x20]
0068ff9c  MOV EAX,dword ptr [EDX + 0x24]
0068ff9f  CALL EAX
0068ffa1  MOVZX ECX,AL
0068ffa4  TEST ECX,ECX
0068ffa6  JNZ 0x0068ffaf
0068ffa8  XOR AL,AL
0068ffaa  JMP 0x00690038
0068ffaf  MOV EDX,dword ptr [EBP + 0x18]
0068ffb2  PUSH EDX
0068ffb3  MOV EAX,dword ptr [EBP + 0x10]
0068ffb6  PUSH EAX
0068ffb7  MOV ECX,dword ptr [EBP + 0xc]
0068ffba  PUSH ECX
0068ffbb  MOV EDX,dword ptr [EBP + 0x8]
0068ffbe  PUSH EDX
0068ffbf  MOV ECX,dword ptr [EBP + -0x20]
0068ffc2  CALL 0x006901b0
0068ffc7  MOV byte ptr [EBP + -0x1],AL
0068ffca  MOVZX EAX,byte ptr [EBP + -0x1]
0068ffce  TEST EAX,EAX
0068ffd0  JZ 0x00690035
0068ffd2  LEA ECX,[EBP + -0x1c]
0068ffd5  PUSH ECX
0068ffd6  LEA EDX,[EBP + -0x18]
0068ffd9  PUSH EDX
0068ffda  MOV EAX,dword ptr [EBP + -0x20]
0068ffdd  MOV EDX,dword ptr [EAX]
0068ffdf  MOV ECX,dword ptr [EBP + -0x20]
0068ffe2  MOV EAX,dword ptr [EDX + 0x28]
0068ffe5  CALL EAX
0068ffe7  MOV ECX,dword ptr [EBP + 0x10]
0068ffea  FILD dword ptr [ECX]
0068ffec  FDIV float ptr [EBP + -0x18]
0068ffef  CALL 0x00686cc0
0068fff4  MOV EDX,dword ptr [EBP + 0x10]
0068fff7  MOV dword ptr [EDX],EAX
0068fff9  MOV EAX,dword ptr [EBP + 0x10]
0068fffc  FILD dword ptr [EAX + 0x8]
0068ffff  FDIV float ptr [EBP + -0x18]
00690002  CALL 0x00686cc0
00690007  MOV ECX,dword ptr [EBP + 0x10]
0069000a  MOV dword ptr [ECX + 0x8],EAX
0069000d  MOV EDX,dword ptr [EBP + 0x10]
00690010  FILD dword ptr [EDX + 0x4]
00690013  FDIV float ptr [EBP + -0x1c]
00690016  CALL 0x00686cc0
0069001b  MOV ECX,dword ptr [EBP + 0x10]
0069001e  MOV dword ptr [ECX + 0x4],EAX
00690021  MOV EDX,dword ptr [EBP + 0x10]
00690024  FILD dword ptr [EDX + 0xc]
00690027  FDIV float ptr [EBP + -0x1c]
0069002a  CALL 0x00686cc0
0069002f  MOV ECX,dword ptr [EBP + 0x10]
00690032  MOV dword ptr [ECX + 0xc],EAX
00690035  MOV AL,byte ptr [EBP + -0x1]
00690038  MOV ESP,EBP
0069003a  POP EBP
0069003b  RET 0x14
