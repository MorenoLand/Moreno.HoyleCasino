; FUN_005c61d0  005c61d0
005c61d0  PUSH EBP
005c61d1  MOV EBP,ESP
005c61d3  SUB ESP,0x38
005c61d6  XOR EAX,EAX
005c61d8  MOV byte ptr [EBP + -0x1],AL
005c61db  MOV CL,byte ptr [EBP + -0x4]
005c61de  MOV byte ptr [EBP + -0x2],CL
005c61e1  MOV EDX,dword ptr [EBP + 0xc]
005c61e4  MOV dword ptr [EBP + -0xc],EDX
005c61e7  MOV EAX,dword ptr [EBP + 0x8]
005c61ea  MOV dword ptr [EBP + -0x14],EAX
005c61ed  MOV CL,byte ptr [EBP + -0x1]
005c61f0  MOV byte ptr [EBP + -0x36],CL
005c61f3  MOV DL,byte ptr [EBP + -0x3]
005c61f6  MOV byte ptr [EBP + -0x35],DL
005c61f9  MOV EAX,dword ptr [EBP + 0x10]
005c61fc  MOV dword ptr [EBP + -0x34],EAX
005c61ff  MOV ECX,dword ptr [EBP + -0x14]
005c6202  MOV dword ptr [EBP + -0x30],ECX
005c6205  XOR EDX,EDX
005c6207  MOV byte ptr [EBP + -0x15],DL
005c620a  MOV AL,byte ptr [EBP + -0x17]
005c620d  MOV byte ptr [EBP + -0x16],AL
005c6210  MOV CL,byte ptr [EBP + -0x15]
005c6213  MOV byte ptr [EBP + -0x29],CL
005c6216  MOV EDX,dword ptr [EBP + -0x34]
005c6219  MOV dword ptr [EBP + -0x28],EDX
005c621c  MOV EAX,dword ptr [EBP + -0x30]
005c621f  MOV dword ptr [EBP + -0x24],EAX
005c6222  MOV ECX,dword ptr [EBP + -0xc]
005c6225  SUB ECX,dword ptr [EBP + -0x24]
005c6228  SAR ECX,0x2
005c622b  MOV dword ptr [EBP + -0x20],ECX
005c622e  MOV EDX,dword ptr [EBP + -0x20]
005c6231  SHL EDX,0x2
005c6234  MOV EAX,dword ptr [EBP + -0x28]
005c6237  SUB EAX,EDX
005c6239  MOV dword ptr [EBP + -0x1c],EAX
005c623c  CMP dword ptr [EBP + -0x20],0x0
005c6240  JLE 0x005c6261
005c6242  MOV ECX,dword ptr [EBP + -0x20]
005c6245  SHL ECX,0x2
005c6248  PUSH ECX
005c6249  MOV EDX,dword ptr [EBP + -0x24]
005c624c  PUSH EDX
005c624d  MOV EAX,dword ptr [EBP + -0x20]
005c6250  SHL EAX,0x2
005c6253  PUSH EAX
005c6254  MOV ECX,dword ptr [EBP + -0x1c]
005c6257  PUSH ECX
005c6258  CALL dword ptr [0x006b2280]
005c625e  ADD ESP,0x10
005c6261  MOV EAX,dword ptr [EBP + -0x1c]
005c6264  MOV ESP,EBP
005c6266  POP EBP
005c6267  RET
