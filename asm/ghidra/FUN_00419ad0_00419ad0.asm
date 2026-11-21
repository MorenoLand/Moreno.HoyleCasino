; FUN_00419ad0  00419ad0
00419ad0  PUSH EBP
00419ad1  MOV EBP,ESP
00419ad3  SUB ESP,0x8
00419ad6  MOV dword ptr [EBP + -0x8],ECX
00419ad9  MOV EAX,dword ptr [EBP + 0x10]
00419adc  PUSH EAX
00419add  MOV ECX,dword ptr [EBP + 0xc]
00419ae0  PUSH ECX
00419ae1  MOV EDX,dword ptr [EBP + 0x8]
00419ae4  PUSH EDX
00419ae5  MOV ECX,dword ptr [EBP + -0x8]
00419ae8  CALL 0x00419780
00419aed  MOV dword ptr [EBP + -0x4],EAX
00419af0  CMP dword ptr [EBP + -0x4],0x1
00419af4  JNZ 0x00419afd
00419af6  MOV dword ptr [EBP + -0x4],0xb
00419afd  MOV EAX,dword ptr [EBP + -0x8]
00419b00  MOV ECX,dword ptr [EAX + 0x4dc]
00419b06  ADD ECX,0x1
00419b09  MOV EDX,dword ptr [EBP + -0x8]
00419b0c  MOV dword ptr [EDX + 0x4dc],ECX
00419b12  CMP dword ptr [EBP + -0x4],0x7
00419b16  JGE 0x00419b2d
00419b18  MOV EAX,dword ptr [EBP + -0x8]
00419b1b  MOV ECX,dword ptr [EAX + 0x4e4]
00419b21  ADD ECX,0x1
00419b24  MOV EDX,dword ptr [EBP + -0x8]
00419b27  MOV dword ptr [EDX + 0x4e4],ECX
00419b2d  CMP dword ptr [EBP + -0x4],0x9
00419b31  JLE 0x00419b48
00419b33  MOV EAX,dword ptr [EBP + -0x8]
00419b36  MOV ECX,dword ptr [EAX + 0x4e4]
00419b3c  SUB ECX,0x1
00419b3f  MOV EDX,dword ptr [EBP + -0x8]
00419b42  MOV dword ptr [EDX + 0x4e4],ECX
00419b48  CMP dword ptr [EBP + -0x4],0xb
00419b4c  JNZ 0x00419b63
00419b4e  MOV EAX,dword ptr [EBP + -0x8]
00419b51  MOV ECX,dword ptr [EAX + 0x4e8]
00419b57  ADD ECX,0x1
00419b5a  MOV EDX,dword ptr [EBP + -0x8]
00419b5d  MOV dword ptr [EDX + 0x4e8],ECX
00419b63  MOV ECX,dword ptr [EBP + -0x8]
00419b66  CALL 0x00419c90
00419b6b  MOV ECX,dword ptr [EBP + -0x8]
00419b6e  MOV dword ptr [ECX + 0x4e0],EAX
00419b74  PUSH 0x1
00419b76  MOV EDX,dword ptr [EBP + 0x10]
00419b79  PUSH EDX
00419b7a  MOV EAX,dword ptr [EBP + 0xc]
00419b7d  PUSH EAX
00419b7e  MOV ECX,dword ptr [EBP + 0x8]
00419b81  PUSH ECX
00419b82  MOV ECX,dword ptr [EBP + -0x8]
00419b85  CALL 0x00419420
00419b8a  MOV ESP,EBP
00419b8c  POP EBP
00419b8d  RET 0xc
