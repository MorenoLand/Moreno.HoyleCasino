; FUN_005bf010  005bf010
005bf010  PUSH EBP
005bf011  MOV EBP,ESP
005bf013  SUB ESP,0x20
005bf016  XOR EAX,EAX
005bf018  MOV byte ptr [EBP + -0x1],AL
005bf01b  MOV CL,byte ptr [EBP + -0x3]
005bf01e  MOV byte ptr [EBP + -0x2],CL
005bf021  MOV EDX,dword ptr [EBP + 0xc]
005bf024  MOV dword ptr [EBP + -0x8],EDX
005bf027  MOV EAX,dword ptr [EBP + 0x8]
005bf02a  MOV dword ptr [EBP + -0x10],EAX
005bf02d  MOV CL,byte ptr [EBP + -0x1]
005bf030  MOV byte ptr [EBP + -0x1d],CL
005bf033  MOV EDX,dword ptr [EBP + 0x10]
005bf036  MOV dword ptr [EBP + -0x1c],EDX
005bf039  MOV EAX,dword ptr [EBP + -0x8]
005bf03c  SUB EAX,dword ptr [EBP + -0x10]
005bf03f  SAR EAX,0x2
005bf042  MOV dword ptr [EBP + -0x14],EAX
005bf045  MOV ECX,dword ptr [EBP + -0x14]
005bf048  MOV EDX,dword ptr [EBP + -0x1c]
005bf04b  LEA EAX,[EDX + ECX*0x4]
005bf04e  MOV dword ptr [EBP + -0x18],EAX
005bf051  JZ 0x005bf072
005bf053  MOV ECX,dword ptr [EBP + -0x14]
005bf056  SHL ECX,0x2
005bf059  PUSH ECX
005bf05a  MOV EDX,dword ptr [EBP + -0x10]
005bf05d  PUSH EDX
005bf05e  MOV EAX,dword ptr [EBP + -0x14]
005bf061  SHL EAX,0x2
005bf064  PUSH EAX
005bf065  MOV ECX,dword ptr [EBP + -0x1c]
005bf068  PUSH ECX
005bf069  CALL dword ptr [0x006b2280]
005bf06f  ADD ESP,0x10
005bf072  MOV EAX,dword ptr [EBP + -0x18]
005bf075  MOV ESP,EBP
005bf077  POP EBP
005bf078  RET
