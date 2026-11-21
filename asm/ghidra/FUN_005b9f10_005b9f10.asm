; FUN_005b9f10  005b9f10
005b9f10  PUSH EBP
005b9f11  MOV EBP,ESP
005b9f13  SUB ESP,0x40
005b9f16  MOV dword ptr [EBP + -0x40],ECX
005b9f19  MOV EAX,dword ptr [EBP + -0x40]
005b9f1c  CMP dword ptr [EAX + 0x4],0x0
005b9f20  JZ 0x005b9fad
005b9f26  MOV ECX,dword ptr [EBP + -0x40]
005b9f29  MOV EDX,dword ptr [ECX + 0x8]
005b9f2c  MOV dword ptr [EBP + -0x34],EDX
005b9f2f  MOV EAX,dword ptr [EBP + -0x40]
005b9f32  MOV ECX,dword ptr [EAX + 0x4]
005b9f35  MOV dword ptr [EBP + -0x30],ECX
005b9f38  MOV EDX,dword ptr [EBP + -0x34]
005b9f3b  MOV dword ptr [EBP + -0x2c],EDX
005b9f3e  MOV EAX,dword ptr [EBP + -0x30]
005b9f41  MOV dword ptr [EBP + -0x28],EAX
005b9f44  MOV CL,byte ptr [EBP + -0x2]
005b9f47  MOV byte ptr [EBP + -0x1],CL
005b9f4a  MOV EDX,dword ptr [EBP + -0x2c]
005b9f4d  MOV dword ptr [EBP + -0x24],EDX
005b9f50  MOV EAX,dword ptr [EBP + -0x28]
005b9f53  MOV dword ptr [EBP + -0x20],EAX
005b9f56  JMP 0x005b9f61
005b9f58  MOV ECX,dword ptr [EBP + -0x20]
005b9f5b  ADD ECX,0x10
005b9f5e  MOV dword ptr [EBP + -0x20],ECX
005b9f61  MOV EDX,dword ptr [EBP + -0x20]
005b9f64  CMP EDX,dword ptr [EBP + -0x24]
005b9f67  JZ 0x005b9f86
005b9f69  MOV ECX,dword ptr [EBP + -0x20]
005b9f6c  CALL 0x005be450
005b9f71  XOR EAX,EAX
005b9f73  AND EAX,0x1
005b9f76  JZ 0x005b9f84
005b9f78  MOV ECX,dword ptr [EBP + -0x20]
005b9f7b  PUSH ECX
005b9f7c  CALL 0x00686cae
005b9f81  ADD ESP,0x4
005b9f84  JMP 0x005b9f58
005b9f86  MOV EDX,dword ptr [EBP + -0x40]
005b9f89  MOV EAX,dword ptr [EBP + -0x40]
005b9f8c  MOV ECX,dword ptr [EDX + 0xc]
005b9f8f  SUB ECX,dword ptr [EAX + 0x4]
005b9f92  SAR ECX,0x4
005b9f95  MOV dword ptr [EBP + -0x3c],ECX
005b9f98  MOV EDX,dword ptr [EBP + -0x40]
005b9f9b  MOV EAX,dword ptr [EDX + 0x4]
005b9f9e  MOV dword ptr [EBP + -0x38],EAX
005b9fa1  MOV ECX,dword ptr [EBP + -0x38]
005b9fa4  PUSH ECX
005b9fa5  CALL 0x00686cae
005b9faa  ADD ESP,0x4
005b9fad  MOV EDX,dword ptr [EBP + -0x40]
005b9fb0  MOV dword ptr [EDX + 0x4],0x0
005b9fb7  MOV EAX,dword ptr [EBP + -0x40]
005b9fba  MOV dword ptr [EAX + 0x8],0x0
005b9fc1  MOV ECX,dword ptr [EBP + -0x40]
005b9fc4  MOV dword ptr [ECX + 0xc],0x0
005b9fcb  MOV ESP,EBP
005b9fcd  POP EBP
005b9fce  RET
