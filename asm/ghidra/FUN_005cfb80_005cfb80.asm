; FUN_005cfb80  005cfb80
005cfb80  PUSH EBP
005cfb81  MOV EBP,ESP
005cfb83  PUSH -0x1
005cfb85  PUSH 0x6a8d03
005cfb8a  MOV EAX,FS:[0x0]
005cfb90  PUSH EAX
005cfb91  SUB ESP,0x1c
005cfb94  MOV EAX,[0x00781870]
005cfb99  XOR EAX,EBP
005cfb9b  PUSH EAX
005cfb9c  LEA EAX,[EBP + -0xc]
005cfb9f  MOV FS:[0x0],EAX
005cfba5  MOV dword ptr [EBP + -0x20],ECX
005cfba8  PUSH 0x3
005cfbaa  PUSH 0x0
005cfbac  PUSH 0x49
005cfbae  PUSH 0x6d3348
005cfbb3  CALL 0x00630f40
005cfbb8  ADD ESP,0x4
005cfbbb  PUSH EAX
005cfbbc  MOV ECX,dword ptr [EBP + -0x20]
005cfbbf  CALL 0x005f73e0
005cfbc4  PUSH 0x0
005cfbc6  PUSH 0x0
005cfbc8  PUSH 0x0
005cfbca  PUSH 0xa1
005cfbcf  PUSH 0x7c
005cfbd1  PUSH 0x78
005cfbd3  PUSH 0x1
005cfbd5  PUSH 0x7c
005cfbd7  PUSH 0x2
005cfbd9  PUSH 0x1
005cfbdb  PUSH 0xfc
005cfbe0  PUSH 0x0
005cfbe2  PUSH 0x0
005cfbe4  MOV ECX,dword ptr [EBP + -0x20]
005cfbe7  CALL 0x005fa880
005cfbec  PUSH 0x0
005cfbee  PUSH 0x0
005cfbf0  PUSH 0x0
005cfbf2  PUSH 0xff
005cfbf7  PUSH 0xff
005cfbfc  PUSH 0xff
005cfc01  PUSH 0x1
005cfc03  PUSH 0x7d
005cfc05  PUSH 0x3
005cfc07  PUSH 0x1
005cfc09  PUSH 0xfc
005cfc0e  PUSH 0x0
005cfc10  PUSH 0x0
005cfc12  MOV ECX,dword ptr [EBP + -0x20]
005cfc15  CALL 0x005fa880
005cfc1a  MOV dword ptr [EBP + -0x10],0x0
005cfc21  JMP 0x005cfc2c
005cfc23  MOV EAX,dword ptr [EBP + -0x10]
005cfc26  ADD EAX,0x1
005cfc29  MOV dword ptr [EBP + -0x10],EAX
005cfc2c  CMP dword ptr [EBP + -0x10],0x2
005cfc30  JGE 0x005cfcb0
005cfc32  CMP dword ptr [EBP + -0x10],0x0
005cfc36  JNZ 0x005cfc4a
005cfc38  PUSH 0x6c1428
005cfc3d  CALL 0x00630f40
005cfc42  ADD ESP,0x4
005cfc45  MOV dword ptr [EBP + -0x24],EAX
005cfc48  JMP 0x005cfc5a
005cfc4a  PUSH 0x6c2318
005cfc4f  CALL 0x00630f40
005cfc54  ADD ESP,0x4
005cfc57  MOV dword ptr [EBP + -0x24],EAX
005cfc5a  MOV ECX,dword ptr [EBP + -0x10]
005cfc5d  NEG ECX
005cfc5f  SBB ECX,ECX
005cfc61  AND ECX,0xfffffff3
005cfc64  ADD ECX,0xd
005cfc67  PUSH ECX
005cfc68  PUSH -0x1
005cfc6a  PUSH 0x4a
005cfc6c  PUSH 0x4b
005cfc6e  PUSH 0x48
005cfc70  MOV EDX,dword ptr [EBP + -0x24]
005cfc73  PUSH EDX
005cfc74  PUSH 0x1
005cfc76  PUSH 0x83
005cfc7b  MOV EAX,dword ptr [EBP + -0x10]
005cfc7e  NEG EAX
005cfc80  SBB EAX,EAX
005cfc82  AND EAX,0x5a
005cfc85  ADD EAX,0x2b
005cfc88  PUSH EAX
005cfc89  MOV ECX,dword ptr [EBP + -0x10]
005cfc8c  NEG ECX
005cfc8e  SBB ECX,ECX
005cfc90  AND ECX,0xfffffff9
005cfc93  ADD ECX,0x30d4e5
005cfc99  PUSH ECX
005cfc9a  MOV EDX,dword ptr [EBP + -0x10]
005cfc9d  PUSH EDX
005cfc9e  PUSH 0x0
005cfca0  MOV ECX,dword ptr [EBP + -0x20]
005cfca3  CALL 0x005f9de0
005cfca8  MOV dword ptr [EBP + -0x14],EAX
005cfcab  JMP 0x005cfc23
005cfcb0  PUSH 0x1fc
005cfcb5  CALL 0x00686d82
005cfcba  ADD ESP,0x4
005cfcbd  MOV dword ptr [EBP + -0x1c],EAX
005cfcc0  MOV dword ptr [EBP + -0x4],0x0
005cfcc7  CMP dword ptr [EBP + -0x1c],0x0
005cfccb  JZ 0x005cfce6
005cfccd  MOV ECX,dword ptr [EBP + -0x1c]
005cfcd0  CALL 0x0060b4a0
005cfcd5  MOV EAX,dword ptr [EBP + -0x1c]
005cfcd8  MOV dword ptr [EAX],0x6d3284
005cfcde  MOV ECX,dword ptr [EBP + -0x1c]
005cfce1  MOV dword ptr [EBP + -0x28],ECX
005cfce4  JMP 0x005cfced
005cfce6  MOV dword ptr [EBP + -0x28],0x0
005cfced  MOV EDX,dword ptr [EBP + -0x28]
005cfcf0  MOV dword ptr [EBP + -0x18],EDX
005cfcf3  MOV dword ptr [EBP + -0x4],0xffffffff
005cfcfa  PUSH 0x5
005cfcfc  PUSH 0x6
005cfcfe  PUSH 0x1
005cfd00  PUSH 0x18
005cfd02  PUSH 0x9
005cfd04  PUSH 0x10
005cfd06  PUSH 0xc8
005cfd0b  PUSH 0x1f
005cfd0d  PUSH 0x6b27f8
005cfd12  PUSH 0x2f
005cfd14  PUSH 0x1a
005cfd16  PUSH 0x30d4e3
005cfd1b  PUSH 0x0
005cfd1d  MOV EAX,dword ptr [EBP + -0x18]
005cfd20  PUSH EAX
005cfd21  MOV ECX,dword ptr [EBP + -0x20]
005cfd24  CALL 0x005fa6a0
005cfd29  PUSH -0x1
005cfd2b  PUSH 0x5
005cfd2d  PUSH 0x2
005cfd2f  PUSH 0x31
005cfd31  PUSH 0x21
005cfd33  PUSH 0x14
005cfd35  PUSH 0x74
005cfd37  PUSH 0x48
005cfd39  PUSH 0x6d3264
005cfd3e  CALL 0x00630f40
005cfd43  ADD ESP,0x4
005cfd46  PUSH EAX
005cfd47  PUSH 0x0
005cfd49  PUSH 0x0
005cfd4b  MOV ECX,dword ptr [EBP + -0x20]
005cfd4e  CALL 0x005fa5b0
005cfd53  MOV ECX,dword ptr [EBP + -0xc]
005cfd56  MOV dword ptr FS:[0x0],ECX
005cfd5d  POP ECX
005cfd5e  MOV ESP,EBP
005cfd60  POP EBP
005cfd61  RET
