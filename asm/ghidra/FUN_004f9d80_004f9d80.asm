; FUN_004f9d80  004f9d80
004f9d80  PUSH EBP
004f9d81  MOV EBP,ESP
004f9d83  SUB ESP,0x8
004f9d86  MOV dword ptr [EBP + -0x4],ECX
004f9d89  MOV EAX,dword ptr [EBP + 0x8]
004f9d8c  MOV dword ptr [EAX],0x0
004f9d92  MOV ECX,dword ptr [EBP + 0xc]
004f9d95  MOV dword ptr [ECX],0x0
004f9d9b  MOV ECX,dword ptr [EBP + -0x4]
004f9d9e  CALL 0x005da830
004f9da3  MOVZX EDX,AL
004f9da6  TEST EDX,EDX
004f9da8  JZ 0x004f9e8e
004f9dae  MOV ECX,dword ptr [EBP + -0x4]
004f9db1  CALL 0x005da880
004f9db6  MOV dword ptr [EBP + -0x8],EAX
004f9db9  CMP dword ptr [EBP + -0x8],0x61a8
004f9dc0  JG 0x004f9ddf
004f9dc2  CMP dword ptr [EBP + -0x8],0x61a8
004f9dc9  JZ 0x004f9e09
004f9dcb  CMP dword ptr [EBP + -0x8],0x3e8
004f9dd2  JZ 0x004f9df3
004f9dd4  CMP dword ptr [EBP + -0x8],0x1388
004f9ddb  JZ 0x004f9dfe
004f9ddd  JMP 0x004f9e28
004f9ddf  CMP dword ptr [EBP + -0x8],0x186a0
004f9de6  JZ 0x004f9e14
004f9de8  CMP dword ptr [EBP + -0x8],0x7a120
004f9def  JZ 0x004f9e1f
004f9df1  JMP 0x004f9e28
004f9df3  MOV EAX,dword ptr [EBP + 0x8]
004f9df6  MOV dword ptr [EAX],0x19
004f9dfc  JMP 0x004f9e28
004f9dfe  MOV ECX,dword ptr [EBP + 0x8]
004f9e01  MOV dword ptr [ECX],0x64
004f9e07  JMP 0x004f9e28
004f9e09  MOV EDX,dword ptr [EBP + 0x8]
004f9e0c  MOV dword ptr [EDX],0x1f4
004f9e12  JMP 0x004f9e28
004f9e14  MOV EAX,dword ptr [EBP + 0x8]
004f9e17  MOV dword ptr [EAX],0x9c4
004f9e1d  JMP 0x004f9e28
004f9e1f  MOV ECX,dword ptr [EBP + 0x8]
004f9e22  MOV dword ptr [ECX],0x2710
004f9e28  MOV EDX,dword ptr [EBP + 0xc]
004f9e2b  MOV EAX,dword ptr [EDX]
004f9e2d  SHL EAX,0x1
004f9e2f  MOV ECX,dword ptr [EBP + 0xc]
004f9e32  MOV dword ptr [ECX],EAX
004f9e34  MOV EDX,dword ptr [0x007947e0]
004f9e3a  CMP dword ptr [EDX + 0x4f18],0x5
004f9e41  JZ 0x004f9e51
004f9e43  MOV EAX,[0x007947e0]
004f9e48  CMP dword ptr [EAX + 0x4f18],0x6
004f9e4f  JNZ 0x004f9e8c
004f9e51  MOV ECX,dword ptr [EBP + -0x4]
004f9e54  CALL 0x005da880
004f9e59  CMP EAX,0x1388
004f9e5e  JNZ 0x004f9e74
004f9e60  MOV ECX,dword ptr [EBP + 0x8]
004f9e63  MOV dword ptr [ECX],0xfa
004f9e69  MOV EDX,dword ptr [EBP + 0xc]
004f9e6c  MOV dword ptr [EDX],0x1f4
004f9e72  JMP 0x004f9e8c
004f9e74  MOV EAX,dword ptr [EBP + 0x8]
004f9e77  MOV ECX,dword ptr [EAX]
004f9e79  SHL ECX,0x1
004f9e7b  MOV EDX,dword ptr [EBP + 0x8]
004f9e7e  MOV dword ptr [EDX],ECX
004f9e80  MOV EAX,dword ptr [EBP + 0xc]
004f9e83  MOV ECX,dword ptr [EAX]
004f9e85  SHL ECX,0x1
004f9e87  MOV EDX,dword ptr [EBP + 0xc]
004f9e8a  MOV dword ptr [EDX],ECX
004f9e8c  JMP 0x004f9eb1
004f9e8e  MOV EAX,dword ptr [EBP + 0x8]
004f9e91  MOV ECX,dword ptr [0x007947e0]
004f9e97  MOV EDX,dword ptr [ECX + 0x4f0c]
004f9e9d  MOV dword ptr [EAX],EDX
004f9e9f  MOV EAX,[0x007947e0]
004f9ea4  MOV ECX,dword ptr [EAX + 0x4f0c]
004f9eaa  SHL ECX,0x1
004f9eac  MOV EDX,dword ptr [EBP + 0xc]
004f9eaf  MOV dword ptr [EDX],ECX
004f9eb1  MOV ESP,EBP
004f9eb3  POP EBP
004f9eb4  RET 0x8
