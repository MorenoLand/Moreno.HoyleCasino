; FUN_005fa880  005fa880
005fa880  PUSH EBP
005fa881  MOV EBP,ESP
005fa883  PUSH -0x1
005fa885  PUSH 0x6aa432
005fa88a  MOV EAX,FS:[0x0]
005fa890  PUSH EAX
005fa891  SUB ESP,0x10
005fa894  MOV EAX,[0x00781870]
005fa899  XOR EAX,EBP
005fa89b  PUSH EAX
005fa89c  LEA EAX,[EBP + -0xc]
005fa89f  MOV FS:[0x0],EAX
005fa8a5  MOV dword ptr [EBP + -0x18],ECX
005fa8a8  CMP dword ptr [EBP + 0x8],0x0
005fa8ac  JNZ 0x005fa8ef
005fa8ae  PUSH 0x5c
005fa8b0  CALL 0x00686d82
005fa8b5  ADD ESP,0x4
005fa8b8  MOV dword ptr [EBP + -0x14],EAX
005fa8bb  MOV dword ptr [EBP + -0x4],0x0
005fa8c2  CMP dword ptr [EBP + -0x14],0x0
005fa8c6  JZ 0x005fa8d5
005fa8c8  MOV ECX,dword ptr [EBP + -0x14]
005fa8cb  CALL 0x005f6130
005fa8d0  MOV dword ptr [EBP + -0x1c],EAX
005fa8d3  JMP 0x005fa8dc
005fa8d5  MOV dword ptr [EBP + -0x1c],0x0
005fa8dc  MOV EAX,dword ptr [EBP + -0x1c]
005fa8df  MOV dword ptr [EBP + -0x10],EAX
005fa8e2  MOV dword ptr [EBP + -0x4],0xffffffff
005fa8e9  MOV ECX,dword ptr [EBP + -0x10]
005fa8ec  MOV dword ptr [EBP + 0x8],ECX
005fa8ef  MOV EDX,dword ptr [EBP + 0x8]
005fa8f2  PUSH EDX
005fa8f3  MOV ECX,dword ptr [EBP + -0x18]
005fa8f6  ADD ECX,0xb4
005fa8fc  CALL 0x0060c840
005fa901  MOV EAX,dword ptr [EBP + 0x8]
005fa904  MOV ECX,dword ptr [EBP + -0x18]
005fa907  MOV dword ptr [EAX + 0x4],ECX
005fa90a  MOV EDX,dword ptr [EBP + 0xc]
005fa90d  PUSH EDX
005fa90e  MOV EAX,dword ptr [EBP + 0x20]
005fa911  PUSH EAX
005fa912  MOV ECX,dword ptr [EBP + 0x1c]
005fa915  PUSH ECX
005fa916  MOV EDX,dword ptr [EBP + 0x18]
005fa919  PUSH EDX
005fa91a  MOV EAX,dword ptr [EBP + 0x14]
005fa91d  PUSH EAX
005fa91e  MOV ECX,dword ptr [EBP + 0x10]
005fa921  PUSH ECX
005fa922  MOV ECX,dword ptr [EBP + 0x8]
005fa925  CALL 0x005f61d0
005fa92a  MOV DL,byte ptr [EBP + 0x2c]
005fa92d  PUSH EDX
005fa92e  MOV AL,byte ptr [EBP + 0x28]
005fa931  PUSH EAX
005fa932  MOV CL,byte ptr [EBP + 0x24]
005fa935  PUSH ECX
005fa936  MOV ECX,dword ptr [EBP + 0x8]
005fa939  CALL 0x005f6490
005fa93e  MOV DL,byte ptr [EBP + 0x38]
005fa941  PUSH EDX
005fa942  MOV AL,byte ptr [EBP + 0x34]
005fa945  PUSH EAX
005fa946  MOV CL,byte ptr [EBP + 0x30]
005fa949  PUSH ECX
005fa94a  MOV ECX,dword ptr [EBP + 0x8]
005fa94d  CALL 0x005f6580
005fa952  MOV EDX,dword ptr [EBP + 0x8]
005fa955  MOV EAX,dword ptr [EDX]
005fa957  MOV ECX,dword ptr [EBP + 0x8]
005fa95a  MOV EDX,dword ptr [EAX + 0x74]
005fa95d  CALL EDX
005fa95f  MOV EAX,dword ptr [EBP + 0x8]
005fa962  MOV ECX,dword ptr [EBP + -0xc]
005fa965  MOV dword ptr FS:[0x0],ECX
005fa96c  POP ECX
005fa96d  MOV ESP,EBP
005fa96f  POP EBP
005fa970  RET 0x34
