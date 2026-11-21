; FUN_005ffdf0  005ffdf0
005ffdf0  PUSH EBP
005ffdf1  MOV EBP,ESP
005ffdf3  PUSH ECX
005ffdf4  MOV dword ptr [EBP + -0x4],ECX
005ffdf7  PUSH 0x0
005ffdf9  MOV EAX,dword ptr [EBP + -0x4]
005ffdfc  MOV ECX,dword ptr [EAX + 0x4]
005ffdff  CALL 0x005f89f0
005ffe04  MOV ECX,dword ptr [EBP + 0x8]
005ffe07  PUSH ECX
005ffe08  MOV EDX,dword ptr [EBP + -0x4]
005ffe0b  MOV EAX,dword ptr [EDX]
005ffe0d  MOV ECX,dword ptr [EBP + -0x4]
005ffe10  MOV EDX,dword ptr [EAX + 0x84]
005ffe16  CALL EDX
005ffe18  MOVZX EAX,AL
005ffe1b  TEST EAX,EAX
005ffe1d  JZ 0x005ffe53
005ffe1f  PUSH 0x3
005ffe21  MOV ECX,dword ptr [EBP + -0x4]
005ffe24  MOV EDX,dword ptr [ECX]
005ffe26  MOV ECX,dword ptr [EBP + -0x4]
005ffe29  MOV EAX,dword ptr [EDX + 0xd8]
005ffe2f  CALL EAX
005ffe31  MOV ECX,dword ptr [EBP + -0x4]
005ffe34  MOV EDX,dword ptr [ECX]
005ffe36  MOV ECX,dword ptr [EBP + -0x4]
005ffe39  MOV EAX,dword ptr [EDX + 0xf0]
005ffe3f  CALL EAX
005ffe41  MOV ECX,dword ptr [EBP + -0x4]
005ffe44  MOV EDX,dword ptr [ECX]
005ffe46  MOV ECX,dword ptr [EBP + -0x4]
005ffe49  MOV EAX,dword ptr [EDX + 0xc4]
005ffe4f  CALL EAX
005ffe51  JMP 0x005ffe65
005ffe53  PUSH 0x0
005ffe55  MOV ECX,dword ptr [EBP + -0x4]
005ffe58  MOV EDX,dword ptr [ECX]
005ffe5a  MOV ECX,dword ptr [EBP + -0x4]
005ffe5d  MOV EAX,dword ptr [EDX + 0xd8]
005ffe63  CALL EAX
005ffe65  MOV ECX,dword ptr [EBP + 0x8]
005ffe68  PUSH ECX
005ffe69  MOV ECX,dword ptr [EBP + -0x4]
005ffe6c  CALL 0x005f4f50
005ffe71  MOV EDX,dword ptr [EBP + 0x8]
005ffe74  MOV byte ptr [EDX + 0x4],0x1
005ffe78  MOV ESP,EBP
005ffe7a  POP EBP
005ffe7b  RET 0x4
