; FUN_0061dff0  0061dff0
0061dff0  PUSH EBP
0061dff1  MOV EBP,ESP
0061dff3  SUB ESP,0x328
0061dff9  MOV EAX,[0x00781870]
0061dffe  XOR EAX,EBP
0061e000  MOV dword ptr [EBP + -0x4],EAX
0061e003  MOV dword ptr [EBP + 0xfffffcdc],ECX
0061e009  PUSH 0x28
0061e00b  PUSH 0x0
0061e00d  MOV EAX,dword ptr [EBP + 0xfffffcdc]
0061e013  ADD EAX,0x8
0061e016  PUSH EAX
0061e017  CALL 0x00686fa2
0061e01c  ADD ESP,0xc
0061e01f  CMP dword ptr [EBP + 0xc],-0x1
0061e023  JZ 0x0061e092
0061e025  MOV ECX,dword ptr [EBP + 0xfffffcdc]
0061e02b  MOV dword ptr [ECX + 0x14c],0x0
0061e035  MOV EDX,dword ptr [EBP + 0xfffffcdc]
0061e03b  MOV dword ptr [EDX + 0x158],0x0
0061e045  MOV EAX,dword ptr [EBP + 0xfffffcdc]
0061e04b  MOV dword ptr [EAX + 0x13c],0x0
0061e055  MOV ECX,dword ptr [EBP + 0xfffffcdc]
0061e05b  MOV dword ptr [ECX + 0x140],0x0
0061e065  MOV EDX,dword ptr [EBP + 0xfffffcdc]
0061e06b  MOV dword ptr [EDX + 0x144],0x0
0061e075  MOV EAX,dword ptr [EBP + 0xfffffcdc]
0061e07b  MOV dword ptr [EAX + 0x148],0x0
0061e085  MOV ECX,dword ptr [EBP + 0xfffffcdc]
0061e08b  MOV byte ptr [ECX + 0x154],0x0
0061e092  MOV EDX,dword ptr [EBP + 0xfffffcdc]
0061e098  MOV dword ptr [EDX + 0x15c],0x0
0061e0a2  CMP dword ptr [EBP + 0x8],0x0
0061e0a6  JZ 0x0061e0b9
0061e0a8  MOV EAX,dword ptr [EBP + 0xfffffcdc]
0061e0ae  MOV ECX,dword ptr [EBP + 0x8]
0061e0b1  MOV dword ptr [EAX + 0x150],ECX
0061e0b7  JMP 0x0061e0e8
0061e0b9  CMP dword ptr [0x007960d8],0x0
0061e0c0  JZ 0x0061e0d8
0061e0c2  MOV EDX,dword ptr [EBP + 0xfffffcdc]
0061e0c8  MOV EAX,[0x007960d8]
0061e0cd  MOV ECX,dword ptr [EAX + 0x18]
0061e0d0  MOV dword ptr [EDX + 0x150],ECX
0061e0d6  JMP 0x0061e0e8
0061e0d8  MOV EDX,dword ptr [EBP + 0xfffffcdc]
0061e0de  MOV dword ptr [EDX + 0x150],0x0
0061e0e8  MOV EAX,dword ptr [EBP + 0xfffffcdc]
0061e0ee  CMP dword ptr [EAX + 0x34],0x0
0061e0f2  JNZ 0x0061e114
0061e0f4  PUSH 0x6b27f8
0061e0f9  MOV ECX,dword ptr [EBP + 0xfffffcdc]
0061e0ff  ADD ECX,0x38
0061e102  PUSH ECX
0061e103  CALL 0x00686ec0
0061e108  ADD ESP,0x8
0061e10b  TEST EAX,EAX
0061e10d  JNZ 0x0061e114
0061e10f  JMP 0x0061e3e5
0061e114  CMP dword ptr [0x007960d8],0x0
0061e11b  JZ 0x0061e136
0061e11d  MOV EDX,dword ptr [0x007960d8]
0061e123  CMP dword ptr [EDX + 0x8],0x0
0061e127  JZ 0x0061e136
0061e129  MOV EAX,[0x007960d8]
0061e12e  MOV ECX,dword ptr [EAX + 0x8]
0061e131  CALL 0x0060acc0
0061e136  MOV ECX,dword ptr [EBP + 0xc]
0061e139  MOV dword ptr [EBP + 0xfffffcd8],ECX
0061e13f  CMP dword ptr [EBP + 0xfffffcd8],0x0
0061e146  JZ 0x0061e223
0061e14c  CMP dword ptr [EBP + 0xfffffcd8],0x1
0061e153  JZ 0x0061e15a
0061e155  JMP 0x0061e2e7
0061e15a  MOVZX EDX,byte ptr [0x00795fb3]
0061e161  TEST EDX,EDX
0061e163  JNZ 0x0061e170
0061e165  MOV ECX,dword ptr [EBP + 0xfffffcdc]
0061e16b  CALL 0x0061ebd0
0061e170  MOV EAX,dword ptr [EBP + 0xfffffcdc]
0061e176  CMP dword ptr [EAX + 0x158],0x0
0061e17d  JNZ 0x0061e206
0061e183  MOV ECX,dword ptr [EBP + 0xfffffcdc]
0061e189  CMP dword ptr [ECX + 0x34],0x0
0061e18d  JZ 0x0061e19c
0061e18f  MOV ECX,dword ptr [EBP + 0xfffffcdc]
0061e195  CALL 0x0061e4f0
0061e19a  JMP 0x0061e206
0061e19c  MOVZX EDX,byte ptr [0x00795fb3]
0061e1a3  TEST EDX,EDX
0061e1a5  JZ 0x0061e206
0061e1a7  MOV EAX,dword ptr [EBP + 0xfffffcdc]
0061e1ad  MOV ECX,dword ptr [EAX + 0x30]
0061e1b0  SAR ECX,0x18
0061e1b3  PUSH ECX
0061e1b4  MOV EDX,dword ptr [EBP + 0xfffffcdc]
0061e1ba  MOV EAX,dword ptr [EDX + 0x30]
0061e1bd  SAR EAX,0x10
0061e1c0  PUSH EAX
0061e1c1  MOV ECX,dword ptr [EBP + 0xfffffcdc]
0061e1c7  MOV EDX,dword ptr [ECX + 0x30]
0061e1ca  SAR EDX,0x8
0061e1cd  PUSH EDX
0061e1ce  MOV EAX,dword ptr [EBP + 0xfffffcdc]
0061e1d4  MOV ECX,dword ptr [EAX + 0x30]
0061e1d7  PUSH ECX
0061e1d8  MOV EDX,dword ptr [EBP + 0xfffffcdc]
0061e1de  ADD EDX,0x38
0061e1e1  PUSH EDX
0061e1e2  PUSH 0x6d8c18
0061e1e7  LEA EAX,[EBP + 0xfffffef0]
0061e1ed  PUSH EAX
0061e1ee  CALL dword ptr [0x006b2220]
0061e1f4  ADD ESP,0x1c
0061e1f7  LEA ECX,[EBP + 0xfffffef0]
0061e1fd  PUSH ECX
0061e1fe  CALL 0x0062fde0
0061e203  ADD ESP,0x4
0061e206  MOVZX EDX,byte ptr [0x00795fb2]
0061e20d  TEST EDX,EDX
0061e20f  JZ 0x0061e21e
0061e211  PUSH 0x6d8c14
0061e216  CALL 0x0062fde0
0061e21b  ADD ESP,0x4
0061e21e  JMP 0x0061e2e7
0061e223  MOVZX EAX,byte ptr [0x00795fb3]
0061e22a  TEST EAX,EAX
0061e22c  JNZ 0x0061e239
0061e22e  MOV ECX,dword ptr [EBP + 0xfffffcdc]
0061e234  CALL 0x0061efc0
0061e239  MOV ECX,dword ptr [EBP + 0xfffffcdc]
0061e23f  CMP dword ptr [ECX + 0x13c],0x0
0061e246  JNZ 0x0061e2cf
0061e24c  MOV EDX,dword ptr [EBP + 0xfffffcdc]
0061e252  CMP dword ptr [EDX + 0x34],0x0
0061e256  JZ 0x0061e265
0061e258  MOV ECX,dword ptr [EBP + 0xfffffcdc]
0061e25e  CALL 0x0061edc0
0061e263  JMP 0x0061e2cf
0061e265  MOVZX EAX,byte ptr [0x00795fb3]
0061e26c  TEST EAX,EAX
0061e26e  JZ 0x0061e2cf
0061e270  MOV ECX,dword ptr [EBP + 0xfffffcdc]
0061e276  MOV EDX,dword ptr [ECX + 0x30]
0061e279  SAR EDX,0x18
0061e27c  PUSH EDX
0061e27d  MOV EAX,dword ptr [EBP + 0xfffffcdc]
0061e283  MOV ECX,dword ptr [EAX + 0x30]
0061e286  SAR ECX,0x10
0061e289  PUSH ECX
0061e28a  MOV EDX,dword ptr [EBP + 0xfffffcdc]
0061e290  MOV EAX,dword ptr [EDX + 0x30]
0061e293  SAR EAX,0x8
0061e296  PUSH EAX
0061e297  MOV ECX,dword ptr [EBP + 0xfffffcdc]
0061e29d  MOV EDX,dword ptr [ECX + 0x30]
0061e2a0  PUSH EDX
0061e2a1  MOV EAX,dword ptr [EBP + 0xfffffcdc]
0061e2a7  ADD EAX,0x38
0061e2aa  PUSH EAX
0061e2ab  PUSH 0x6d8c18
0061e2b0  LEA ECX,[EBP + 0xfffffde8]
0061e2b6  PUSH ECX
0061e2b7  CALL dword ptr [0x006b2220]
0061e2bd  ADD ESP,0x1c
0061e2c0  LEA EDX,[EBP + 0xfffffde8]
0061e2c6  PUSH EDX
0061e2c7  CALL 0x0062fde0
0061e2cc  ADD ESP,0x4
0061e2cf  MOVZX EAX,byte ptr [0x00795fb2]
0061e2d6  TEST EAX,EAX
0061e2d8  JZ 0x0061e2e7
0061e2da  PUSH 0x6d8c14
0061e2df  CALL 0x0062fde0
0061e2e4  ADD ESP,0x4
0061e2e7  MOVZX ECX,byte ptr [0x00795fb2]
0061e2ee  TEST ECX,ECX
0061e2f0  JNZ 0x0061e3e5
0061e2f6  CMP dword ptr [EBP + 0xc],0x0
0061e2fa  JZ 0x0061e30b
0061e2fc  MOV EDX,dword ptr [EBP + 0xfffffcdc]
0061e302  CMP dword ptr [EDX + 0x158],0x0
0061e309  JZ 0x0061e328
0061e30b  CMP dword ptr [EBP + 0xc],0x0
0061e30f  JNZ 0x0061e3e5
0061e315  MOV EAX,dword ptr [EBP + 0xfffffcdc]
0061e31b  CMP dword ptr [EAX + 0x13c],0x0
0061e322  JNZ 0x0061e3e5
0061e328  MOV ECX,dword ptr [EBP + 0xfffffcdc]
0061e32e  CMP dword ptr [ECX + 0x34],0x0
0061e332  JZ 0x0061e386
0061e334  MOV EDX,dword ptr [EBP + 0xfffffcdc]
0061e33a  MOV EAX,dword ptr [EDX + 0x30]
0061e33d  SAR EAX,0x18
0061e340  PUSH EAX
0061e341  MOV ECX,dword ptr [EBP + 0xfffffcdc]
0061e347  MOV EDX,dword ptr [ECX + 0x30]
0061e34a  SAR EDX,0x10
0061e34d  PUSH EDX
0061e34e  MOV EAX,dword ptr [EBP + 0xfffffcdc]
0061e354  MOV ECX,dword ptr [EAX + 0x30]
0061e357  SAR ECX,0x8
0061e35a  PUSH ECX
0061e35b  MOV EDX,dword ptr [EBP + 0xfffffcdc]
0061e361  MOV EAX,dword ptr [EDX + 0x30]
0061e364  PUSH EAX
0061e365  MOV ECX,dword ptr [EBP + 0xfffffcdc]
0061e36b  MOV EDX,dword ptr [ECX + 0x34]
0061e36e  PUSH EDX
0061e36f  PUSH 0x6d8bec
0061e374  LEA EAX,[EBP + 0xfffffce0]
0061e37a  PUSH EAX
0061e37b  CALL dword ptr [0x006b2220]
0061e381  ADD ESP,0x1c
0061e384  JMP 0x0061e3d6
0061e386  MOV ECX,dword ptr [EBP + 0xfffffcdc]
0061e38c  MOV EDX,dword ptr [ECX + 0x30]
0061e38f  SAR EDX,0x18
0061e392  PUSH EDX
0061e393  MOV EAX,dword ptr [EBP + 0xfffffcdc]
0061e399  MOV ECX,dword ptr [EAX + 0x30]
0061e39c  SAR ECX,0x10
0061e39f  PUSH ECX
0061e3a0  MOV EDX,dword ptr [EBP + 0xfffffcdc]
0061e3a6  MOV EAX,dword ptr [EDX + 0x30]
0061e3a9  SAR EAX,0x8
0061e3ac  PUSH EAX
0061e3ad  MOV ECX,dword ptr [EBP + 0xfffffcdc]
0061e3b3  MOV EDX,dword ptr [ECX + 0x30]
0061e3b6  PUSH EDX
0061e3b7  MOV EAX,dword ptr [EBP + 0xfffffcdc]
0061e3bd  ADD EAX,0x38
0061e3c0  PUSH EAX
0061e3c1  PUSH 0x6d8bc4
0061e3c6  LEA ECX,[EBP + 0xfffffce0]
0061e3cc  PUSH ECX
0061e3cd  CALL dword ptr [0x006b2220]
0061e3d3  ADD ESP,0x1c
0061e3d6  LEA EDX,[EBP + 0xfffffce0]
0061e3dc  PUSH EDX
0061e3dd  CALL 0x0062fde0
0061e3e2  ADD ESP,0x4
0061e3e5  MOV ECX,dword ptr [EBP + -0x4]
0061e3e8  XOR ECX,EBP
0061e3ea  CALL 0x00686d72
0061e3ef  MOV ESP,EBP
0061e3f1  POP EBP
0061e3f2  RET 0x8
