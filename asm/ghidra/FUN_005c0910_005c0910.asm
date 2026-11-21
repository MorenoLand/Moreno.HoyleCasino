; FUN_005c0910  005c0910
005c0910  PUSH EBP
005c0911  MOV EBP,ESP
005c0913  SUB ESP,0x20
005c0916  XOR EAX,EAX
005c0918  MOV byte ptr [EBP + -0x1],AL
005c091b  MOV CL,byte ptr [EBP + -0x1]
005c091e  MOV byte ptr [EBP + -0x1e],CL
005c0921  MOV DL,byte ptr [EBP + -0x2]
005c0924  MOV byte ptr [EBP + -0x1d],DL
005c0927  MOV EAX,dword ptr [EBP + 0x8]
005c092a  MOV dword ptr [EBP + -0x1c],EAX
005c092d  MOV ECX,dword ptr [EBP + 0xc]
005c0930  MOV EDX,dword ptr [EBP + -0x1c]
005c0933  LEA EAX,[EDX + ECX*0x4]
005c0936  MOV dword ptr [EBP + -0x8],EAX
005c0939  XOR ECX,ECX
005c093b  MOV byte ptr [EBP + -0x9],CL
005c093e  MOV DL,byte ptr [EBP + -0x9]
005c0941  MOV byte ptr [EBP + -0x15],DL
005c0944  MOV EAX,dword ptr [EBP + 0xc]
005c0947  MOV dword ptr [EBP + -0x14],EAX
005c094a  MOV ECX,dword ptr [EBP + -0x1c]
005c094d  MOV dword ptr [EBP + -0x10],ECX
005c0950  JMP 0x005c0964
005c0952  MOV EDX,dword ptr [EBP + -0x14]
005c0955  SUB EDX,0x1
005c0958  MOV dword ptr [EBP + -0x14],EDX
005c095b  MOV EAX,dword ptr [EBP + -0x10]
005c095e  ADD EAX,0x4
005c0961  MOV dword ptr [EBP + -0x10],EAX
005c0964  CMP dword ptr [EBP + -0x14],0x0
005c0968  JBE 0x005c0976
005c096a  MOV ECX,dword ptr [EBP + -0x10]
005c096d  MOV EDX,dword ptr [EBP + 0x10]
005c0970  MOV EAX,dword ptr [EDX]
005c0972  MOV dword ptr [ECX],EAX
005c0974  JMP 0x005c0952
005c0976  MOV ESP,EBP
005c0978  POP EBP
005c0979  RET
