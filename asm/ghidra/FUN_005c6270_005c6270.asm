; FUN_005c6270  005c6270
005c6270  PUSH EBP
005c6271  MOV EBP,ESP
005c6273  SUB ESP,0x30
005c6276  XOR EAX,EAX
005c6278  MOV byte ptr [EBP + -0x1],AL
005c627b  MOV CL,byte ptr [EBP + -0x4]
005c627e  MOV byte ptr [EBP + -0x2],CL
005c6281  MOV EDX,dword ptr [EBP + 0xc]
005c6284  MOV dword ptr [EBP + -0xc],EDX
005c6287  MOV EAX,dword ptr [EBP + 0x8]
005c628a  MOV dword ptr [EBP + -0x14],EAX
005c628d  MOV CL,byte ptr [EBP + -0x1]
005c6290  MOV byte ptr [EBP + -0x2e],CL
005c6293  MOV DL,byte ptr [EBP + -0x3]
005c6296  MOV byte ptr [EBP + -0x2d],DL
005c6299  MOV EAX,dword ptr [EBP + 0x10]
005c629c  MOV dword ptr [EBP + -0x2c],EAX
005c629f  MOV EAX,dword ptr [EBP + -0xc]
005c62a2  SUB EAX,dword ptr [EBP + -0x14]
005c62a5  CDQ
005c62a6  MOV ECX,0x34
005c62ab  IDIV ECX
005c62ad  IMUL EAX,EAX,0x34
005c62b0  ADD EAX,dword ptr [EBP + -0x2c]
005c62b3  MOV dword ptr [EBP + -0x18],EAX
005c62b6  XOR EDX,EDX
005c62b8  MOV byte ptr [EBP + -0x19],DL
005c62bb  XOR EAX,EAX
005c62bd  MOV byte ptr [EBP + -0x1a],AL
005c62c0  MOV CL,byte ptr [EBP + -0x19]
005c62c3  MOV byte ptr [EBP + -0x26],CL
005c62c6  MOV DL,byte ptr [EBP + -0x1a]
005c62c9  MOV byte ptr [EBP + -0x25],DL
005c62cc  MOV EAX,dword ptr [EBP + -0x2c]
005c62cf  MOV dword ptr [EBP + -0x24],EAX
005c62d2  MOV ECX,dword ptr [EBP + -0x14]
005c62d5  MOV dword ptr [EBP + -0x20],ECX
005c62d8  JMP 0x005c62ec
005c62da  MOV EDX,dword ptr [EBP + -0x24]
005c62dd  ADD EDX,0x34
005c62e0  MOV dword ptr [EBP + -0x24],EDX
005c62e3  MOV EAX,dword ptr [EBP + -0x20]
005c62e6  ADD EAX,0x34
005c62e9  MOV dword ptr [EBP + -0x20],EAX
005c62ec  MOV ECX,dword ptr [EBP + -0x20]
005c62ef  CMP ECX,dword ptr [EBP + -0xc]
005c62f2  JZ 0x005c6302
005c62f4  MOV EDX,dword ptr [EBP + -0x20]
005c62f7  PUSH EDX
005c62f8  MOV ECX,dword ptr [EBP + -0x24]
005c62fb  CALL 0x005c3a20
005c6300  JMP 0x005c62da
005c6302  MOV EAX,dword ptr [EBP + -0x18]
005c6305  MOV ESP,EBP
005c6307  POP EBP
005c6308  RET
